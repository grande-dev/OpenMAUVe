within OpenMAUVe.Guidance;
model Orbit_following_guidance

  parameter Real x_c(unit="m") = 0.0; // x-position of the centre of the orbit
  parameter Real y_c(unit="m") = 0.0; // y-position of the centre of the orbit

  // Option 1: paper IAC
  //parameter Real lambda=1.0;  // 1=clockwise, -1=anticlockwise
  //parameter Real k_orbit=1.0;  // as chosen in AIC
  //parameter Real rho_guidance(unit="m")=100.0; // orbit radius

  //Real gamma_c;
  //Real distance_from_orbit_centre;
  //Real d_tilde;

  // Option 2: paper 2
  Real gamma;
  Real gamma_t;
  Real gamma_r;
  Real e;  // cross-track error

  parameter Real Delta(unit="m")=0.0;
  parameter Real orbit_radius(unit="m")=100.0; // orbit radius

  Modelica.Blocks.Interfaces.RealInput pos_x annotation(
    Placement(visible = true, transformation(origin = {-104, 42}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, 44}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput pos_y annotation(
    Placement(visible = true, transformation(origin = {-102, -36}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, -32}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput ref_yaw annotation(
    Placement(visible = true, transformation(origin = {111, 1}, extent = {{-15, -15}, {15, 15}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

algorithm

  // Option 1: paper IAC
  //distance_from_orbit_centre := sqrt((pos_x-x_c)^2 + (pos_y-y_c)^2);
  //d_tilde := distance_from_orbit_centre - rho_guidance;

  //// reference yaw
  //gamma_c := atan2(y_c-pos_y, x_c -pos_x);
  //ref_yaw := gamma_c;

  //ref_yaw := (gamma_c + lambda * (Modelica.Constants.pi/2 + atan(k_orbit * (d_tilde/rho_guidance)) ));

  // Option 2: paper
  e := orbit_radius - sqrt((pos_x-x_c)^2 + (pos_y-y_c)^2);
  gamma := atan2(pos_y, pos_x);
  gamma_t := gamma + Modelica.Constants.pi/2;
  gamma_r := atan2(-e, Delta);
  ref_yaw := gamma_t - gamma_r;

end Orbit_following_guidance;
