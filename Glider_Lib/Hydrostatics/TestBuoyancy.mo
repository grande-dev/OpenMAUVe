within Glider_Lib.Hydrostatics;

model TestBuoyancy
  Modelica.Mechanics.MultiBody.Parts.Body body(r_CM = {0, 0, 0}, m = 5, r_0(start = {0, 5e6, 0}, each fixed = true), angles_fixed = true, w_0_fixed = true, v_0(each fixed = true), animation = false) annotation(
    Placement(transformation(origin = {76, 0}, extent = {{-10, -10}, {10, 10}})));
  inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, enableAnimation = false) annotation(
    Placement(transformation(origin = {-74, 90}, extent = {{-10, -10}, {10, 10}})));
  BuoyancyForceIncompressibleHull buoyancyForceIncompressibleHull annotation(
    Placement(transformation(origin = {-20, -6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant rho(k = 1025.0)  annotation(
    Placement(transformation(origin = {-82, 4}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedFrame frameECI annotation(
    Placement(transformation(origin = {-18, 84}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedRotation fixedRotation(animation = false, r = {10, 10, 10})  annotation(
    Placement(transformation(origin = {-16, 54}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.FreeMotion freeMotion annotation(
    Placement(transformation(origin = {16, 54}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedShape fixedShape(animation = true, r_shape = {0.1, 0.1, 0.1}, length = 0.1, width = 0.1, height = 0.1)  annotation(
    Placement(transformation(origin = {80, -38}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(buoyancyForceIncompressibleHull.frame_b, body.frame_a) annotation(
    Line(points = {{-10, -6}, {15, -6}, {15, 0}, {66, 0}}, color = {95, 95, 95}));
  connect(buoyancyForceIncompressibleHull.frame_ECI, world.frame_b) annotation(
    Line(points = {{-30, -12}, {-60, -12}, {-60, 90}, {-64, 90}}, color = {95, 95, 95}));
  connect(rho.y, buoyancyForceIncompressibleHull.rho) annotation(
    Line(points = {{-70, 4}, {-50, 4}, {-50, 2}, {-30, 2}}, color = {0, 0, 127}));
  connect(world.frame_b, frameECI.frame_a) annotation(
    Line(points = {{-64, 90}, {-54, 90}, {-54, 84}, {-28, 84}}, color = {95, 95, 95}));
  connect(world.frame_b, fixedRotation.frame_a) annotation(
    Line(points = {{-64, 90}, {-56, 90}, {-56, 54}, {-26, 54}}, color = {95, 95, 95}));
  connect(fixedRotation.frame_b, freeMotion.frame_a) annotation(
    Line(points = {{-6, 54}, {6, 54}}, color = {95, 95, 95}));
  connect(freeMotion.frame_b, body.frame_a) annotation(
    Line(points = {{26, 54}, {40, 54}, {40, 0}, {66, 0}}, color = {95, 95, 95}));
  connect(fixedShape.frame_a, body.frame_a) annotation(
    Line(points = {{70, -38}, {52, -38}, {52, 0}, {66, 0}}, color = {95, 95, 95}));
end TestBuoyancy;