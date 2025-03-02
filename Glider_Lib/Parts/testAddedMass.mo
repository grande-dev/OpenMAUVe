within Glider_Lib.Parts;

model testAddedMass

  parameter Real Cd = 0.0;

  inner Modelica.Mechanics.MultiBody.World world annotation(
    Placement(transformation(origin = {-102, 62}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b) annotation(
    Placement(transformation(origin = {-42, 4}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step step(height = 1) annotation(
    Placement(transformation(origin = {-100, 24}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step step1(height = 0) annotation(
    Placement(transformation(origin = {-100, -14}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step step2(height = 0) annotation(
    Placement(transformation(origin = {-100, -52}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(animation = false, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameA.frame_a, get_r = true, get_v = true, get_a = true, get_w = true, get_z = true, get_angles = true, sequence = {3, 2, 1}, guessAngle1(displayUnit = "rad")) annotation(
    Placement(transformation(origin = {24, -40}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.FreeMotion freeMotion(r_rel_a(start = {0, 2, 0}, each fixed = true))  annotation(
    Placement(transformation(origin = {-38, 62}, extent = {{-10, -10}, {10, 10}})));
  HullAddedMass hullAddedMass(m_h = 2, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1)  annotation(
    Placement(transformation(origin = {63, 25}, extent = {{-31, -31}, {31, 31}})));
equation
  connect(step.y, force.force[1]) annotation(
    Line(points = {{-89, 24}, {-76, 24}, {-76, 4}, {-54, 4}}, color = {0, 0, 127}));
  connect(step1.y, force.force[2]) annotation(
    Line(points = {{-89, -14}, {-76, -14}, {-76, 4}, {-54, 4}}, color = {0, 0, 127}));
  connect(step2.y, force.force[3]) annotation(
    Line(points = {{-89, -52}, {-68, -52}, {-68, 4}, {-54, 4}}, color = {0, 0, 127}));
  connect(world.frame_b, freeMotion.frame_a) annotation(
    Line(points = {{-92, 62}, {-48, 62}}, color = {95, 95, 95}));
  connect(freeMotion.frame_b, hullAddedMass.frame_Ob) annotation(
    Line(points = {{-28, 62}, {0, 62}, {0, 22}, {37, 22}}, color = {95, 95, 95}));
  connect(force.frame_b, hullAddedMass.frame_Ob) annotation(
    Line(points = {{-32, 4}, {0, 4}, {0, 22}, {37, 22}}, color = {95, 95, 95}));
  connect(absoluteSensor.frame_a, freeMotion.frame_b) annotation(
    Line(points = {{14, -40}, {-8, -40}, {-8, 62}, {-28, 62}}, color = {95, 95, 95}));
  annotation(experiment(StopTime = 500, Interval = 0.1, Tolerance = 1e-06));
end testAddedMass;