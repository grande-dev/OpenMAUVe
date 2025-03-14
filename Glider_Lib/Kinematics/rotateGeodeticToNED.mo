within Glider_Lib.Kinematics;
function rotateGeodeticToNED

  input Modelica.Units.SI.Angle latitude;
  input Modelica.Units.SI.Angle longitude;
  output Modelica.Units.NonSI.Angle_deg[3] NED_init_attitude_deg; // chosen convention 3,2,1

protected
  Modelica.Units.SI.Angle[3] NED_init_attitude_rad;

algorithm
  NED_init_attitude_rad[1] := longitude;
//rotation around z
  NED_init_attitude_rad[2] := -Modelica.Constants.pi/2 - latitude;
//rotation around y'
  NED_init_attitude_rad[3] := 0;

  NED_init_attitude_deg := Modelica.Units.Conversions.to_deg(NED_init_attitude_rad);

end rotateGeodeticToNED;
