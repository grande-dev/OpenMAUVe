within Glider_Lib.Kinematics;
function convertGeodeticToEcef
  input Modelica.Units.SI.Angle latitude;
  input Modelica.Units.SI.Angle longitude;
  input Modelica.Units.SI.Distance altitude;
  input Real a_earth "Earth's semimajor axis"; // #645 page 25
  input Real e_earth "Earth's eccentricity";  // #645 page 25
  input Real scaleDist;
  output Modelica.Units.SI.Position r_point_wrt_ecef[3];
protected
  Real NED_init_pos_x;
  Real NED_init_pos_y;
  Real NED_init_pos_z;
  Real NED_init_pos_norm;
  Real N_ned;
algorithm
  N_ned := a_earth*scaleDist/sqrt(1 - e_earth^2*(sin(latitude))^2); // #645 page 28
  NED_init_pos_x := (N_ned + altitude)*cos(latitude)*cos(longitude); // #645 page 29
  NED_init_pos_y := (N_ned + altitude)*cos(latitude)*sin(longitude);
  NED_init_pos_z := (N_ned*(1 - e_earth^2) + altitude)*sin(latitude);
  NED_init_pos_norm := sqrt(NED_init_pos_x^2+NED_init_pos_y^2+NED_init_pos_z^2);

  r_point_wrt_ecef :={NED_init_pos_x,NED_init_pos_y,NED_init_pos_z};
end convertGeodeticToEcef;
