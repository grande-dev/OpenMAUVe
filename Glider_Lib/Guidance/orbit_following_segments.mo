within Glider_Lib.Guidance;

model orbit_following_segments

  
  Real[8] waypoint_x;
  Real[8] waypoint_y;
  parameter Real gamma(unit="m")=5.0;  // parameter defining the distance to switch to the next waypoint
  parameter Real radius_hexagon(unit="m")=50.0;
  parameter Real x_hex = 100.0;
  parameter Real y_hex = 0.0;
  
  Real distance_from_next_waypoint;
  Integer current_waypoint(start=1);

  
  Modelica.Blocks.Interfaces.RealInput pos_x annotation(
    Placement(visible = true, transformation(origin = {-104, 42}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, 44}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput pos_y annotation(
    Placement(visible = true, transformation(origin = {-102, -36}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, -32}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput ref_yaw annotation(
    Placement(visible = true, transformation(origin = {111, 1}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

algorithm
  waypoint_x[1]:=x_hex-radius_hexagon;
  waypoint_y[1]:=y_hex+0.0;
  
  waypoint_x[2]:=x_hex-radius_hexagon/2;
  waypoint_y[2]:=y_hex-radius_hexagon*sqrt(3)/2;

  waypoint_x[3]:=x_hex+radius_hexagon/2;
  waypoint_y[3]:=y_hex-radius_hexagon*sqrt(3)/2;
  
  waypoint_x[4]:=x_hex+radius_hexagon;
  waypoint_y[4]:=y_hex+0.0;
  
  waypoint_x[5]:=x_hex+radius_hexagon/2;
  waypoint_y[5]:=y_hex+radius_hexagon*sqrt(3)/2;
  
  waypoint_x[6]:=x_hex-radius_hexagon/2;
  waypoint_y[6]:=y_hex+radius_hexagon*sqrt(3)/2;
  
  waypoint_x[7]:=x_hex-radius_hexagon;
  waypoint_y[7]:=y_hex+0.0;

  waypoint_x[8]:=0.0;
  waypoint_y[8]:=0.0; 
  
  distance_from_next_waypoint := (waypoint_x[current_waypoint]-pos_x)^2 + (waypoint_y[current_waypoint]-pos_y)^2;

  if (distance_from_next_waypoint < gamma^2) then
    if current_waypoint < size(waypoint_x, 1) then  // Check array bounds
      current_waypoint := current_waypoint + 1;
    else 
      current_waypoint := 1;
    end if;
  end if;

  // reference yaw
  ref_yaw := atan2(waypoint_y[current_waypoint]-pos_y,waypoint_x[current_waypoint]-pos_x); //-Modelica.Constants.pi/2;
 
end orbit_following_segments;