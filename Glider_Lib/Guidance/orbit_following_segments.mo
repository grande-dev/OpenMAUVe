within Glider_Lib.Guidance;

model orbit_following_segments
  parameter Real gamma(unit = "m") = 5.0;
  // parameter defining the distance to switch to the next waypoint
  parameter Real radius_hexagon(unit = "m") = 50.0;
  parameter Real x_hex(unit = "m") = 100.0;
  parameter Real y_hex(unit = "m") = 0.0;
  parameter Real u_ref_approach_phase(unit = "m/s");
  parameter Real v_ref_approach_phase(unit = "m/s");
  parameter Real max_distance_next_waypoint(unit = "m") = 25.0;
  parameter Real min_perc_speed(unit = "%") = 0.5 "minimum percentage of speed kept at all time";
  
  Real ref_yaw_atan;
  Real ref_yaw_atan2;
  Real[8] waypoint_x;
  Real[8] waypoint_y;
  Real target_x;
  Real target_y;
  Real distance_from_next_waypoint;
  Integer current_waypoint(start = 1);
  Boolean reached_circle(start = false);
  Real ref_u_unsaturated;
  Real ref_v_unsaturated;

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
  Modelica.Blocks.Nonlinear.Limiter limiter_u(uMax = u_ref_approach_phase)  annotation(
    Placement(transformation(origin = {62, 44}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Nonlinear.Limiter limiter_v(uMax = v_ref_approach_phase)  annotation(
    Placement(transformation(origin = {62, -2}, extent = {{-10, -10}, {10, 10}})));
algorithm
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
  target_x := waypoint_x[current_waypoint];
  target_y := waypoint_y[current_waypoint];
// Checking distances and reaching orbit
  distance_from_next_waypoint := sqrt((target_x - pos_x)^2 + (target_y - pos_y)^2);
  if (distance_from_next_waypoint < gamma) then
    if current_waypoint < size(waypoint_x, 1) then
// Check array bounds
      current_waypoint := current_waypoint + 1;
    else
      current_waypoint := 1;
    end if;
  end if;
// detect when the orbit is reached
  if current_waypoint == 2 then
// assumption that the second waypoint denotes the start of the orbit
    reached_circle := true;
  end if;
// restart waypoint sequence
  if current_waypoint == 7 then
// assumption that the second waypoint denotes the start of the orbit
    reached_circle := false;
  end if;
  if current_waypoint == 8 then
// assumption that the second waypoint denotes the start of the orbit
    current_waypoint := 0;
  end if;
// reference yaw
  ref_yaw_atan2 := atan2(target_y - pos_y, target_x - pos_x);
//-Modelica.Constants.pi/2;
  ref_yaw_atan := atan((target_y - pos_y)/(target_x - pos_x));
//-Modelica.Constants.pi/2;
  
//  ref_u := 0.2;
//  ref_v := 0.0;
  
  ref_u_unsaturated := u_ref_approach_phase*(min_perc_speed + min_perc_speed*distance_from_next_waypoint/max_distance_next_waypoint);
  ref_v_unsaturated := u_ref_approach_phase*(min_perc_speed + min_perc_speed*distance_from_next_waypoint/max_distance_next_waypoint);
  limiter_u.u:=ref_u_unsaturated;
  limiter_v.u:=ref_v_unsaturated;

  
  
  // this might be
  if abs(ref_yaw_atan2-yaw_meas) < abs(ref_yaw_atan-yaw_meas) then
    ref_yaw := ref_yaw_atan2;
  else
    ref_yaw := ref_yaw_atan;
  end if;
  
  ref_yaw := ref_yaw_atan2; // not working
  ref_yaw := ref_yaw_atan; 

  
equation
  connect(limiter_u.y, ref_u) annotation(
    Line(points = {{74, 44}, {110, 44}, {110, 46}}, color = {0, 0, 127}));
  connect(limiter_v.y, ref_v) annotation(
    Line(points = {{74, -2}, {86, -2}, {86, 0}, {110, 0}}, color = {0, 0, 127}));
end orbit_following_segments;