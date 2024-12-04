within Glider_Lib.Guidance;

model orbit_following_segments
  Real[8] waypoint_x;
  Real[8] waypoint_y;
  Real target_x;
  Real target_y;
  Real ref_yaw_unwrapped;
  Real diff_yaw;
  Real diff_yaw_mod;
  Real diff_yaw_mod_shift;
  Real diff_yaw_mod_shift_ref;
  Real yaw_in_norm; // normalised
  Real ref_yaw_unwrapped_norm; // normalised
  Real ref_yaw_untouched;
  
  parameter Real gamma(unit = "m") = 5.0 "reaching radius of a waypoint";
  // parameter defining the distance to switch to the next waypoint
  parameter Real radius_hexagon(unit = "m") = 50.0 "radius hexagon";
  parameter Real x_hex = 100.0 "x-position of the centre of the hexagon";
  parameter Real y_hex = 0.0 "y-position of the centre of the hexagon";
  parameter Real u_ref_approach_phase(unit = "m/s") = 0.5 "u-speed reference during the approach phase";
  parameter Real v_ref_approach_phase(unit = "m/s") = 0.0 "v-speed reference during the approach phase";
  parameter Real u_ref_orbit(unit = "m/s") = 0.0 "u-speed reference during the orbiting phase";
  parameter Real v_ref_orbit(unit = "m/s") = 0.5 "v-speed reference during the orbiting phase";
  parameter Integer xsi = 1 "1 = anticlockwise motion, -1 = clockwise motion";
  Real distance_from_next_waypoint;
  Real max_distance_next_waypoint(start = 25.0);
  Integer current_waypoint(start = 1);
  Boolean reached_circle(start = false);
  Boolean distance_set(start = false);
  Modelica.Blocks.Interfaces.RealInput pos_x annotation(
    Placement(visible = true, transformation(origin = {-84, 44}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, 44}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput pos_y annotation(
    Placement(transformation(origin = {-84, 0}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-96, -6}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput ref_yaw annotation(
    Placement(visible = true, transformation(origin = {87, -45}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {106, -62}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput ref_u annotation(
    Placement(visible = true, transformation(origin = {83, 41}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {104, 54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput ref_v annotation(
    Placement(visible = true, transformation(origin = {85, -3}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {106, -2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput yaw_in annotation(
    Placement(transformation(origin = {-82, -48}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-96, -54}, extent = {{-20, -20}, {20, 20}})));
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
// setting distance
  if distance_set == false then
    max_distance_next_waypoint := 25.0;
//sqrt((waypoint_x[current_waypoint]-pos_x)^2 + (waypoint_y[current_waypoint]-pos_y)^2);
    distance_set := true;
  end if;
  distance_from_next_waypoint := sqrt((waypoint_x[current_waypoint] - pos_x)^2 + (waypoint_y[current_waypoint] - pos_y)^2);
// check distance to the next waypoint, and switch if reached
  if (distance_from_next_waypoint < gamma) then
    if current_waypoint < size(waypoint_x, 1) then
      current_waypoint := current_waypoint + 1;
    else
      current_waypoint := 1;
    end if;
    distance_set := false;
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
// Saving current references
  target_x := waypoint_x[current_waypoint];
  target_y := waypoint_y[current_waypoint];
// set reference linear speeds
  if reached_circle == true then
// setpoint during the orbiting phase
    ref_u := u_ref_orbit*(0.5 + 0.5*distance_from_next_waypoint/max_distance_next_waypoint);
// a minimum of 20% of the target speed is anyway preserved
    ref_v := v_ref_orbit*(0.5 + 0.5*distance_from_next_waypoint/max_distance_next_waypoint);
    ref_yaw_unwrapped := atan2(waypoint_y[current_waypoint] - pos_y, waypoint_x[current_waypoint] - pos_x) - xsi*Modelica.Constants.pi/2;
  else
// setpoint during the reaching phase
    ref_u := u_ref_approach_phase*(0.5 + 0.5*distance_from_next_waypoint/max_distance_next_waypoint);
    ref_v := v_ref_approach_phase*(0.5 + 0.5*distance_from_next_waypoint/max_distance_next_waypoint);
    ref_yaw_unwrapped := atan2(waypoint_y[current_waypoint] - pos_y, waypoint_x[current_waypoint] - pos_x);
  end if;
  
  ref_yaw_untouched:=ref_yaw_unwrapped;
  
  yaw_in_norm:=atan2(sin(yaw_in), cos(yaw_in));
  ref_yaw_unwrapped_norm:=atan2(sin(ref_yaw_unwrapped), cos(ref_yaw_unwrapped));

  diff_yaw := (ref_yaw_unwrapped_norm - yaw_in_norm + Modelica.Constants.pi);
  diff_yaw_mod := mod(diff_yaw, 2*Modelica.Constants.pi);
  diff_yaw_mod_shift := diff_yaw_mod -Modelica.Constants.pi;
  diff_yaw_mod_shift_ref:=yaw_in_norm+diff_yaw_mod_shift;
  //ref_yaw := yaw_in_norm + mod(diff_yaw, 2*Modelica.Constants.pi)-Modelica.Constants.pi;
  ref_yaw:=ref_yaw_unwrapped_norm;
      
  
  annotation(
    Icon(graphics = {Text(origin = {114, 75}, extent = {{-42, 9}, {42, -9}}, textString = "u ref"), Text(origin = {116, 17}, extent = {{-42, 9}, {42, -9}}, textString = "v ref"), Text(origin = {126, -39}, extent = {{-42, 9}, {42, -9}}, textString = "psi ref"), Polygon(origin = {16, -1}, points = {{-2, 3}, {12, 25}, {40, 25}, {56, 3}, {44, -23}, {12, -23}, {-2, 3}, {-58, 3}, {-58, 3}, {-2, 3}})}),
    Diagram);
end orbit_following_segments;