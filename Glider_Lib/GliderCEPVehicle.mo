within Glider_Lib;
model GliderCEPVehicle
  extends GenericGlider_mass_explicit(redeclare Records.AddedMassData_Slocum addedMassData_SeaGlider);
  Modelica.Blocks.Interfaces.RealInput delta_1 annotation(
    Placement(visible = true, transformation(origin = {-148, -114}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-97, -91}, extent = {{-11, -11}, {11, 11}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput delta_2 annotation(
    Placement(visible = true, transformation(origin = {-148, -146}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-97, -141}, extent = {{-13, -13}, {13, 13}}, rotation = 0)));
  Glider_Lib.Parts.SternPlane sternPlane1(K_F_delta = K_F_delta, K_M_delta = K_M_delta, K_u_delta = K_u_delta)  annotation(
    Placement(visible = true, transformation(origin = {-6, -114}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Glider_Lib.Parts.SternPlane sternPlane2(K_F_delta = K_F_delta, K_M_delta = K_M_delta, K_u_delta = K_u_delta)  annotation(
    Placement(visible = true, transformation(origin = {-6, -146}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Real K_F_delta = 0.0 "stern plane lift coeff 1";
  parameter Real K_u_delta = 0.0 "stern plane lift coeff 2";
  parameter Real K_M_delta = 0.0 "stern plane moment coefficient";

equation
  connect(delta_1, sternPlane1.delta_in) annotation(
    Line(points = {{-148, -114}, {-26, -114}}, color = {0, 0, 127}));
  connect(sternPlane1.frame_b, translation_toComHull.frame_a) annotation(
    Line(points = {{14, -114}, {62, -114}, {62, -30}, {90, -30}}, color = {95, 95, 95}));
  connect(delta_2, sternPlane2.delta_in) annotation(
    Line(points = {{-148, -146}, {-26, -146}}, color = {0, 0, 127}));
  connect(sternPlane2.frame_b, translation_toComHull.frame_a) annotation(
    Line(points = {{14, -146}, {62, -146}, {62, -30}, {90, -30}}));
  annotation(
    Icon(graphics = {Text(origin = {-102, -99}, extent = {{-4, 3}, {44, -25}}, textString = "delta_1"), Text(origin = {-102, -99}, extent = {{-4, 3}, {44, -25}}, textString = "delta_1"), Text(origin = {-102, -147}, extent = {{-4, 3}, {44, -25}}, textString = "delta_2")}));
end GliderCEPVehicle;