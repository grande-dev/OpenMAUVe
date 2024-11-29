within Glider_Lib.Guidance;

model orbit_following_segments

  
  Real[8] waypoint_x;
  Real[8] waypoint_y;
  parameter Real gamma(unit="m")=5.0 "reaching radius of a waypoint";  // parameter defining the distance to switch to the next waypoint
  parameter Real radius_hexagon(unit="m")=50.0 "radius hexagon";
  parameter Real x_hex = 100.0 "x-position of the centre of the hexagon";
  parameter Real y_hex = 0.0 "y-position of the centre of the hexagon";
  parameter Real u_ref_approach_phase(unit="m/s") = 0.5 "u-speed reference during the approach phase";
  parameter Real v_ref_approach_phase(unit="m/s") = 0.0 "v-speed reference during the approach phase";
  parameter Real u_ref_orbit(unit="m/s") = 0.0 "u-speed reference during the orbiting phase";
  parameter Real v_ref_orbit(unit="m/s") = 0.5 "v-speed reference during the orbiting phase";  
  parameter Integer xsi = 1 "1 = anticlockwise motion, -1 = clockwise motion";
  
  Real distance_from_next_waypoint;
  Integer current_waypoint(start=1);
  Boolean reached_circle(start=false);
  
  Modelica.Blocks.Interfaces.RealInput pos_x annotation(
    Placement(visible = true, transformation(origin = {-104, 42}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, 44}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput pos_y annotation(
    Placement(visible = true, transformation(origin = {-102, -36}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, -32}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput ref_yaw annotation(
    Placement(visible = true, transformation(origin = {111, 1}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {106, -62}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput ref_u annotation(
    Placement(visible = true, transformation(origin = {121, 11}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {104, 54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput ref_v annotation(
    Placement(visible = true, transformation(origin = {131, 21}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {106, -2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
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

  // check distance to the next waypoint, and switch if reached
  if (distance_from_next_waypoint < gamma^2) then
    if current_waypoint < size(waypoint_x, 1) then  
      current_waypoint := current_waypoint + 1;
    else 
      current_waypoint := 1;
    end if;
  end if;
  
  
  // detect when the orbit is reached
  if current_waypoint==2 then  // assumption that the second waypoint denotes the start of the orbit
    reached_circle:=true;
  end if;
  
  // restart waypoint sequence
  if current_waypoint==7 then  // assumption that the second waypoint denotes the start of the orbit
    reached_circle:=false;
  end if;
  if current_waypoint==8 then  // assumption that the second waypoint denotes the start of the orbit
    current_waypoint:=0;
  end if;
  
  
  // set reference linear speeds
  if reached_circle==true then 
    // setpoint during the orbiting phase
    ref_u := u_ref_orbit; 
    ref_v := v_ref_orbit;  
    ref_yaw := atan2(waypoint_y[current_waypoint]-pos_y,waypoint_x[current_waypoint]-pos_x)-xsi*Modelica.Constants.pi/2;
  else
    // setpoint during the reaching phase
    ref_u := u_ref_approach_phase;
    ref_v := v_ref_approach_phase;
    ref_yaw := atan2(waypoint_y[current_waypoint]-pos_y,waypoint_x[current_waypoint]-pos_x);
  end if;



 
annotation(
    Icon(graphics = {Text(origin = {114, 75}, extent = {{-42, 9}, {42, -9}}, textString = "u ref"), Text(origin = {116, 17}, extent = {{-42, 9}, {42, -9}}, textString = "v ref"), Text(origin = {126, -39}, extent = {{-42, 9}, {42, -9}}, textString = "psi ref")}));
end orbit_following_segments;