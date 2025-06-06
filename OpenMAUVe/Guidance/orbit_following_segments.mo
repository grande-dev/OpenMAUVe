within OpenMAUVe.Guidance;
model orbit_following_segments
  // parameter defining the distance to switch to the next waypoint
  parameter Real radius_hexagon(unit = "m") = 50.0;
  parameter Real x_hex(unit = "m") = 100.0;
  parameter Real y_hex(unit = "m") = 0.0;
  parameter Real u_ref_inspection_phase(unit = "m/s") "CAVEAT: this is the abs value; use only positive values.";
  parameter Real v_ref_inspection_phase(unit = "m/s") "CAVEAT: this is the abs value; use only positive values.";
  parameter Real min_perc_speed = 50 "[%] Minimum percentage of speed kept at all time. Range 0% to 100%.";
  parameter Real heading_reached(unit = "deg") = 10 "heading target threshold";
  parameter Real gamma(unit = "m") = 5.0 "waypoint reached threshold";
  parameter Integer xsi = -1 "clockwise path = -1, anticlocwise = 1. CAVEAT: anticlockwise not implemented!";
  parameter Boolean orbit_slide_sideways = false "CAVEAT: true--> not yet working, to be reviewed";
  parameter Boolean interrupt_sim_upon_returned_home = false;

  Real ref_yaw_atan;
  Real ref_yaw_atan2;
  Real ref_yaw_shifted;
  Real ref_way_shortest;
  Real ref_short_debug(start = 0);
  Real ref_dist_add2pi(start=0);
  Real ref_dist_sub2pi(start=0);
  Real ref_dist_head(start=0);

  Real[8] waypoint_x;
  Real[8] waypoint_y;
  Real target_x;
  Real target_y;
  Boolean reached_monopile(start = false);
  Boolean adjusting_heading(start = true); // true: fixing initial heading, false: proceeding to location
  Real heading_error;
  Real heading_error_deg;
  Real ref_u_unsaturated;
  Real ref_v_unsaturated;

  parameter Real gamma(unit = "m") = 5.0 "reaching radius of a waypoint";
  // parameter defining the distance to switch to the next waypoint
  parameter Real radius_hexagon(unit = "m") = 50.0 "radius hexagon";
  parameter Real x_hex = 100.0 "x-position of the centre of the hexagon";
  parameter Real y_hex = 0.0 "y-position of the centre of the hexagon";
  parameter Real u_ref_approach_phase(
    unit="m/s",                       unit = "m/s") = 0.5 "u-speed reference during the approach phase";
  parameter Real v_ref_approach_phase(
    unit="m/s",                       unit = "m/s") = 0.0 "v-speed reference during the approach phase";
  parameter Real u_ref_orbit(unit = "m/s") = 0.0 "u-speed reference during the orbiting phase";
  parameter Real v_ref_orbit(unit = "m/s") = 0.5 "v-speed reference during the orbiting phase";
  parameter Real perc_min_speed = 1.0 "how much of the speed is (at least) retained at any stage";
  parameter Integer xsi = 1 "1 = anticlockwise motion, -1 = clockwise motion";
  Real distance_from_next_waypoint;
  Real max_distance_next_waypoint(
    unit="m",                     start = 25.0)=25.0;
  Integer current_waypoint(start=0,
                           start = 1);
  Boolean reached_circle(start = false);
  Boolean distance_set(start = false);
  Modelica.Blocks.Interfaces.RealInput pos_x annotation(
    Placement(transformation(origin = {-104, 52}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-94, 62}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput pos_y annotation(
    Placement(transformation(origin = {-102, 0}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-94, 2}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput ref_yaw annotation(
    Placement(transformation(origin = {109, -49}, extent = {{-15, -15}, {15, 15}}), iconTransformation(origin = {100, -52}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput ref_u annotation(
    Placement(transformation(origin = {109, 45}, extent = {{-15, -15}, {15, 15}}), iconTransformation(origin = {100, 56}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput ref_v annotation(
    Placement(transformation(origin = {109, -1}, extent = {{-15, -15}, {15, 15}}), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealInput yaw_meas annotation(
    Placement(transformation(origin = {-102, -56}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-94, -62}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Nonlinear.Limiter limiter_u(uMax = max(u_ref_approach_phase, u_ref_inspection_phase))  annotation(
    Placement(transformation(origin = {62, 44}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Nonlinear.Limiter limiter_v(uMax = max(v_ref_approach_phase, v_ref_inspection_phase))  annotation(
    Placement(transformation(origin = {62, -2}, extent = {{-10, -10}, {10, 10}})));
algorithm

  assert(u_ref_approach_phase >= 0.0, "WARNING OpenMAUVe setup: u_ref_approach_phase must be positive!", level = AssertionLevel.error);
  assert(v_ref_approach_phase >= 0.0, "WARNING OpenMAUVe setup: v_ref_approach_phase must be positive!", level = AssertionLevel.error);
  assert(u_ref_inspection_phase >= 0.0, "WARNING OpenMAUVe setup: u_ref_inspection_phase must be positive!", level = AssertionLevel.error);
  assert(v_ref_inspection_phase >= 0.0, "WARNING OpenMAUVe setup: v_ref_inspection_phase must be positive!", level = AssertionLevel.error);
  assert(max_distance_next_waypoint >= 0.0, "WARNING OpenMAUVe setup: max_distance_next_waypoint must be positive!", level = AssertionLevel.error);
  assert(min_perc_speed >= 0.0 and min_perc_speed <= 100.0, "WARNING OpenMAUVe setup: efficiency variable out of limit (0 to 100)!", level = AssertionLevel.error);
  assert(xsi == -1 or xsi==1, "WARNING OpenMAUVe setup: xsi must be either 1 or -1!", level = AssertionLevel.error);
  if orbit_slide_sideways== true then
    assert(u_ref_inspection_phase ==0 and v_ref_inspection_phase>0, "WARNING OpenMAUVe setup: wrong initialisation of the reference velocities during the orbiting phase!", level = AssertionLevel.error);
  else
    assert(u_ref_inspection_phase >0 and v_ref_inspection_phase==0, "WARNING OpenMAUVe setup: wrong initialisation of the reference velocities during the orbiting phase!", level = AssertionLevel.error);
  end if;

  waypoint_x[1] := x_hex - radius_hexagon;
  waypoint_y[1] := y_hex + 0.0;
  waypoint_x[2] := x_hex - radius_hexagon/2;
  waypoint_y[2] := y_hex - radius_hexagon*sqrt(3)/2;
  waypoint_x[3] := x_hex + radius_hexagon/2;
  waypoint_y[3] := y_hex - radius_hexagon*sqrt(3)/2;
  waypoint_x[4] := x_hex + radius_hexagon;
  waypoint_y[4] := y_hex + 0.0;
  waypoint_x[5] := x_hex + radius_hexagon/2;
  waypoint_y[5] := y_hex + radius_hexagon*sqrt(3)/2;
  waypoint_x[6] := x_hex - radius_hexagon/2;
  waypoint_y[6] := y_hex + radius_hexagon*sqrt(3)/2;
  waypoint_x[7] := x_hex - radius_hexagon;
  waypoint_y[7] := y_hex + 0.0;
  waypoint_x[8] := 0.0;
  waypoint_y[8] := 0.0;

  // Saving current references
  target_x := waypoint_x[current_waypoint+1];
  target_y := waypoint_y[current_waypoint+1];

  // 2 steps logics:
  // a) adjusting heading
  // b) reaching waypoint
  // Checking distances and reaching orbit
  distance_from_next_waypoint := sqrt((target_x - pos_x)^2 + (target_y - pos_y)^2);
  if (distance_from_next_waypoint < gamma) then
    if current_waypoint < size(waypoint_x, 1) then
      // Check array bounds
      current_waypoint := current_waypoint + 1;
    else
      current_waypoint := 0;
    end if;
  end if;

  // detect when the orbit is reached
  if current_waypoint == 1 then
    // assumption that the second waypoint denotes the start of the orbit
    reached_monopile := true;
  end if;

  // detect if the monopile inspection has been completed
  if current_waypoint == 7 then
    reached_monopile := false;
  end if;

  // Restart the sequence or interrupt the simulation.
  if current_waypoint == 8 then
// assumption that the second waypoint denotes the start of the orbit.
    current_waypoint := 0;

    // interrupt the simulation is requested
    if interrupt_sim_upon_returned_home==true then
      terminate("AUV successfully returned home.");
    end if;

  end if;

  // reference yaw
  if reached_monopile == false then
    // poiting directly to the next waypoint
    ref_yaw_atan2 := atan2(target_y - pos_y, target_x - pos_x);
    ref_yaw_atan := atan((target_y - pos_y)/(target_x - pos_x));
    ref_yaw_shifted:=ref_yaw_atan2;
  else
    // pointing towards the monopile, while sliding sideways
    ref_yaw_atan2 := atan2(target_y - pos_y, target_x - pos_x); //-xsi*Modelica.Constants.pi/2;
    ref_yaw_atan := atan((target_y - pos_y)/(target_x - pos_x)); //-xsi*Modelica.Constants.pi/2;

    // if sliding sideways during the orbit, add or remove pi/2
    if orbit_slide_sideways then
      ref_yaw_shifted:=ref_yaw_atan2-xsi*Modelica.Constants.pi/2;
    else
      ref_yaw_shifted:=ref_yaw_atan2;
    end if;
  end if;

  ref_dist_head:=abs(yaw_meas - ref_yaw_shifted);
  ref_dist_add2pi:=abs(yaw_meas - (ref_yaw_shifted+2*Modelica.Constants.pi));
  ref_dist_sub2pi:=abs(yaw_meas - (ref_yaw_shifted-2*Modelica.Constants.pi));

  // checking if the heading reference is the shortest path
  if ( (ref_dist_sub2pi < ref_dist_head) or (ref_dist_add2pi< ref_dist_head))  then
    // a shorter path is found
    if (ref_dist_add2pi < ref_dist_head) then
      ref_way_shortest:=ref_yaw_shifted+2*Modelica.Constants.pi;
      ref_short_debug:=2;
    else
      ref_way_shortest:=ref_yaw_shifted-2*Modelica.Constants.pi;
      ref_short_debug:=-2;
    end if;
  else
    ref_way_shortest:=ref_yaw_shifted;
    ref_short_debug:=0;
  end if;

  // setting the final yaw reference target
  //ref_yaw:=ref_yaw_shifted; //this works for the "heading ahead" mode (i.e. orbit_slide_sideways = false)
  ref_yaw:=ref_way_shortest;

  if adjusting_heading==true then
    // a) adjusting_heading
    ref_u_unsaturated := 0;
    ref_v_unsaturated := 0;
  else
    // b) reaching waypoint
    if reached_monopile == false then
      // reaching the monopile
      ref_u_unsaturated := u_ref_approach_phase*(min_perc_speed/100 + min_perc_speed/100*distance_from_next_waypoint/max_distance_next_waypoint);
      ref_v_unsaturated := xsi*v_ref_approach_phase*(min_perc_speed/100 + min_perc_speed/100*distance_from_next_waypoint/max_distance_next_waypoint);
    else
      // during the monopile inspection
      ref_u_unsaturated := u_ref_inspection_phase*(min_perc_speed/100 + min_perc_speed/100*distance_from_next_waypoint/max_distance_next_waypoint);
      ref_v_unsaturated := xsi*v_ref_inspection_phase*(min_perc_speed/100 + min_perc_speed/100*distance_from_next_waypoint/max_distance_next_waypoint);
    end if;
    distance_set := false;
  end if;
// detect when the orbit is reached
  if current_waypoint == 2 then
// assumption that the second waypoint denotes the start of the orbit
    reached_circle := true;
  end if;

  // saturating speeds reference
  limiter_u.u:=ref_u_unsaturated;
  limiter_v.u:=ref_v_unsaturated;

  heading_error:=abs(yaw_meas-ref_yaw);
  heading_error_deg:=Modelica.Units.Conversions.to_deg(heading_error);

  // switching guidance logics from adjusting heading and reaching waypoint
  if (heading_error < Modelica.Units.Conversions.from_deg(heading_reached) and (adjusting_heading==true)) then
    adjusting_heading:=false;
  end if;

  if heading_error > Modelica.Units.Conversions.from_deg(heading_reached) then
    adjusting_heading := true;
  end if;

equation

  connect(limiter_u.y, ref_u) annotation(
    Line(points = {{74, 44}, {110, 44}, {110, 46}}, color = {0, 0, 127}));
  connect(limiter_v.y, ref_v) annotation(
    Line(points = {{74, -2}, {86, -2}, {86, 0}, {110, 0}}, color = {0, 0, 127}));
end orbit_following_segments;
