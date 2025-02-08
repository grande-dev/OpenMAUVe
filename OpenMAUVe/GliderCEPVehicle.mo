within OpenMAUVe;
model GliderCEPVehicle
  extends GenericGlider_mass_explicit(redeclare Records.AddedMassData_Slocum addedMassData_SeaGlider,
      shape_hull(                                                                                     r_shape            = {-0.1, 0.0, 0.0}, height            = 0.2, length            = 0.2, width            = 0.2));
  Modelica.Blocks.Interfaces.RealInput delta_1 annotation(
    Placement(visible = true, transformation(origin = {-172, -156}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-109, -93}, extent = {{-11, -11}, {11, 11}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput delta_2 annotation(
    Placement(visible = true, transformation(origin = {-170, -230}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-109, -141}, extent = {{-11, -11}, {11, 11}}, rotation = 0)));

  parameter Real K_F_delta = 0.0 "stern plane lift coeff 1";
  parameter Real K_u_delta = 0.0 "stern plane lift coeff 2";
  parameter Real K_M_delta = 0.0 "stern plane moment coefficient";
  OpenMAUVe.Actuators.Elevator elevator(
    K_F_delta=10.0,
    K_M_delta=-14.6,
    K_u_delta=1.0) annotation (Placement(visible=true, transformation(
        origin={-62,-155},
        extent={{-48,-43},{48,43}},
        rotation=0)));
  OpenMAUVe.Actuators.Elevator elevator1(
    K_F_delta=10.0,
    K_M_delta=-14.6,
    K_u_delta=1.0) annotation (Placement(visible=true, transformation(
        origin={-71,-230},
        extent={{-51,-42},{51,42}},
        rotation=0)));
equation
  connect(elevator.frame_b, translation_toComHull.frame_a) annotation(
    Line(points = {{-14, -154}, {46, -154}, {46, -30}, {74, -30}}, color = {95, 95, 95}));
  connect(delta_2, elevator1.delta_in) annotation(
    Line(points = {{-170, -230}, {-121, -230}}, color = {0, 0, 127}));
  connect(elevator1.frame_b, translation_toComHull.frame_a) annotation(
    Line(points = {{-19, -229}, {46, -229}, {46, -30}, {74, -30}}));
  connect(delta_1, elevator.delta_in) annotation(
    Line(points = {{-172, -156}, {-110, -156}}, color = {0, 0, 127}));
  annotation(
    Icon(graphics = {Text(origin = {-116, -99}, extent = {{-4, 3}, {44, -25}}, textString = "delta_1"), Text(origin = {-118, -147}, extent = {{-4, 3}, {44, -25}}, textString = "delta_2")}, coordinateSystem(extent = {{-350, -350}, {350, 350}}, grid = {2, 2})),
    Diagram(coordinateSystem(extent = {{-350, -350}, {350, 350}}, grid = {2, 2})));
end GliderCEPVehicle;
