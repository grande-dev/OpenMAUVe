within Glider_Lib.Guidance;

model DCM_angles
  Real [3] Euler_dot;

  Modelica.Mechanics.MultiBody.Interfaces.Frame_a DCM_body_to_in annotation(
    Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Interfaces.RealInput[3] in_omega_body_fixed annotation(
    Placement(transformation(origin = {-102, 56}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-100, 42}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput out_angles[3] annotation(
    Placement(transformation(origin = {102, 2}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {102, 2}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_ome1 annotation(
    Placement(transformation(origin = {38, 38}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_ome2 annotation(
    Placement(transformation(origin = {38, -2}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_ome3 annotation(
    Placement(transformation(origin = {40, -52}, extent = {{-10, -10}, {10, 10}})));
equation
  Euler_dot = DCM_body_to_in.R.T * in_omega_body_fixed;
  integrator_ome1.u = Euler_dot[1];
  integrator_ome2.u = Euler_dot[2];
  integrator_ome3.u = Euler_dot[3];
//integrator.u = Euler_dot;
//out_angles = integrator.y;
  connect(integrator_ome1.y, out_angles[1]) annotation(
    Line(points = {{50, 38}, {66, 38}, {66, 2}, {102, 2}}, color = {0, 0, 127}));
  connect(integrator_ome2.y, out_angles[2]) annotation(
    Line(points = {{50, -2}, {66, -2}, {66, 2}, {102, 2}}, color = {0, 0, 127}));
  connect(integrator_ome3.y, out_angles[3]) annotation(
    Line(points = {{52, -52}, {66, -52}, {66, 2}, {102, 2}}, color = {0, 0, 127}));
end DCM_angles;