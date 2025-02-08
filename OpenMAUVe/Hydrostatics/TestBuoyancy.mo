within OpenMAUVe.Hydrostatics;
model TestBuoyancy
  BuoyancyForceHullIncompressible buoyancyForceHullIncompressible(nabla_0 = 1/1000)  annotation(
    Placement(transformation(origin = {-27, -5}, extent = {{-31, -33}, {31, 33}})));
  Modelica.Mechanics.MultiBody.Parts.Body body(r_CM = {0, 0, 0}, m = 1, r_0(start = {0, 5e6, 0}, each fixed = true), angles_fixed = true, w_0_fixed = true, v_0(each fixed = true)) annotation(
    Placement(transformation(origin = {48, -6}, extent = {{-10, -10}, {10, 10}})));
  inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity) annotation(
    Placement(transformation(origin = {-74, 90}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(buoyancyForceHullIncompressible.frame_b, body.frame_a) annotation(
    Line(points = {{4, 20}, {24, 20}, {24, -6}, {38, -6}}, color = {95, 95, 95}));
  connect(buoyancyForceHullIncompressible.frame_body, body.frame_a) annotation(
    Line(points = {{4, -32}, {24, -32}, {24, -6}, {38, -6}}, color = {95, 95, 95}));
end TestBuoyancy;
