within Glider_Lib.Guidance;

model LOS_guidance

  parameter Real[7] waypoint_x = {100.0, 100.0,  0.0,   0.0, 100.0,  100.0,   0.0};
  parameter Real[7] waypoint_y = {0.0,   50.0,  50.0, 100.0, 100.0,  150.0, 150.0};
  parameter Real gamma(unit="m")=20.0;  // parameter defining the distance to switch to the next waypoint
    
  Real distance_from_next_waypoint;
  Integer current_waypoint(start=1);

  
  Modelica.Blocks.Interfaces.RealInput pos_x annotation(
    Placement(visible = true, transformation(origin = {-104, 42}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, 44}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput pos_y annotation(
    Placement(visible = true, transformation(origin = {-102, -36}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, -32}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput ref_yaw annotation(
    Placement(visible = true, transformation(origin = {111, 1}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

algorithm
  distance_from_next_waypoint := (waypoint_x[current_waypoint]-pos_x)^2 + (waypoint_y[current_waypoint]-pos_y)^2;

  if (distance_from_next_waypoint < gamma^2) then
    if current_waypoint < size(waypoint_x, 1) then  // Check array bounds
      current_waypoint := current_waypoint + 1;
    else 
      current_waypoint := 1;
    end if;
  end if;

  // reference yaw
  ref_yaw := atan2(waypoint_y[current_waypoint]-pos_y,waypoint_x[current_waypoint]-pos_x);
 
end LOS_guidance;
