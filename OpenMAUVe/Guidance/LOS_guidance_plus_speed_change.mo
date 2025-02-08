within OpenMAUVe.Guidance;
model LOS_guidance_plus_speed_change

  parameter Real[7] waypoint_x = {100.0, 100.0,  0.0,   0.0, 100.0,  100.0,   0.0};
  parameter Real[7] waypoint_y = {0.0,   50.0,  50.0, 100.0, 100.0,  150.0, 150.0};
  parameter Real gamma(unit="m")=20.0;  // parameter defining the distance to switch to the next waypoint

  Real distance_from_next_waypoint;
  Integer current_waypoint(start=1);
  Boolean first_path=true;  // boolean parameter to determine if this is the first path being completed

  Modelica.Blocks.Interfaces.RealInput pos_x annotation(
    Placement(visible = true, transformation(origin = {-104, 42}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, 44}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput pos_y annotation(
    Placement(visible = true, transformation(origin = {-102, -36}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, -32}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput ref_yaw annotation(
    Placement(visible = true, transformation(origin = {109, 41}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {104, 42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput ref_u annotation(
    Placement(visible = true, transformation(origin = {111, -29}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {102, -36}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
algorithm
  distance_from_next_waypoint := (waypoint_x[current_waypoint]-pos_x)^2 + (waypoint_y[current_waypoint]-pos_y)^2;

  if (distance_from_next_waypoint < gamma^2) then
    if current_waypoint < size(waypoint_x, 1) then  // Check array bounds
      current_waypoint := current_waypoint + 1;
    else
      current_waypoint := 1;
    end if;
  end if;

  // reference speed
  if current_waypoint < size(waypoint_x, 1) and first_path then
    // setting the high speed for the first pass
    //ref_u := 2.2; // [m/s]
    ref_u := min(distance_from_next_waypoint, 0.8);
  else
    // lowering the speed for the next passes
    //ref_u := 0.5; // [m/s]
    ref_u := min(distance_from_next_waypoint, 0.5);
    //first_path:=false;
  end if;

  // reference yaw
  ref_yaw := atan2(waypoint_y[current_waypoint]-pos_y,waypoint_x[current_waypoint]-pos_x);

annotation(
    Icon(graphics = {Text(origin = {-95, 73}, extent = {{-11, 7}, {11, -7}}, textString = "pos_x"), Text(origin = {-93, -61}, extent = {{-11, 7}, {11, -7}}, textString = "pos_y"), Text(origin = {105, 63}, extent = {{-11, 7}, {11, -7}}, textString = "ref_psi"), Text(origin = {101, -59}, extent = {{-11, 7}, {11, -7}}, textString = "ref_u"), Text(origin = {8, 0}, extent = {{-62, 48}, {62, -48}}, textString = "Guidance"), Rectangle(origin = {1, -1}, extent = {{-83, 67}, {83, -67}})}));
end LOS_guidance_plus_speed_change;
