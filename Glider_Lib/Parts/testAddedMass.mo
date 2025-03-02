within Glider_Lib.Parts;

model testAddedMass "This model is used to illustrate the difference of a hull with added mass vs a normal rigid body. The two objects are subjected to the same inputs: the gravity force, and a constant force along the x-body axis."
  parameter Real Cd = 0.0;
  inner Modelica.Mechanics.MultiBody.World world annotation(
    Placement(transformation(origin = {-114, -12}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.world) annotation(
    Placement(transformation(origin = {-44, 62}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step step(height = 1, startTime = 20) annotation(
    Placement(transformation(origin = {-104, 74}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step1(height = 20, startTime = 30) annotation(
    Placement(transformation(origin = {-101, 51}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Sources.Step step2(height = 0, startTime = 0) annotation(
    Placement(transformation(origin = {-102, 28}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Mechanics.MultiBody.Joints.FreeMotion freeMotion(r_rel_a(start = {0, 50, 0}, each fixed = true), animation = false) annotation(
    Placement(transformation(origin = {-40, 14}, extent = {{-10, -10}, {10, 10}})));
  HullAddedMass hullAddedMass(m_h = 2, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1, Z_wdot = 10.0, X_udot = 10.0, Y_vdot = 500.0) annotation(
    Placement(transformation(origin = {79, -45}, extent = {{-31, -31}, {31, 31}})));
  RigidBody rigidBody(m = 2, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1) annotation(
    Placement(transformation(origin = {86, 36}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.FreeMotion freeMotion1(r_rel_a(start = {0, 50, 0}, each fixed = true), animation = false) annotation(
    Placement(transformation(origin = {-50, -34}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force1(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.world) annotation(
    Placement(transformation(origin = {-40, -72}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step step3(height = 20, startTime = 30) annotation(
    Placement(transformation(origin = {-97, -83}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Sources.Step step4(height = 0, startTime = 0) annotation(
    Placement(transformation(origin = {-98, -106}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step5(height = 1, startTime = 20) annotation(
    Placement(transformation(origin = {-100, -60}, extent = {{-6, -6}, {6, 6}})));
equation
  connect(step.y, force.force[1]) annotation(
    Line(points = {{-97.4, 74}, {-78.4, 74}, {-78.4, 62}, {-56.4, 62}}, color = {0, 0, 127}));
  connect(world.frame_b, freeMotion.frame_a) annotation(
    Line(points = {{-104, -12}, {-82, -12}, {-82, 14}, {-50, 14}}, color = {95, 95, 95}));
  connect(freeMotion.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-30, 14}, {9, 14}, {9, 36}, {76, 36}}, color = {95, 95, 95}));
  connect(force.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-34, 62}, {10, 62}, {10, 36}, {76, 36}}, color = {95, 95, 95}));
  connect(world.frame_b, freeMotion1.frame_a) annotation(
    Line(points = {{-104, -12}, {-82, -12}, {-82, -34}, {-60, -34}}, color = {95, 95, 95}));
  connect(freeMotion1.frame_b, hullAddedMass.frame_Ob) annotation(
    Line(points = {{-40, -34}, {10, -34}, {10, -48}, {53, -48}}, color = {95, 95, 95}));
  connect(step5.y, force1.force[1]) annotation(
    Line(points = {{-94, -60}, {-68, -60}, {-68, -72}, {-52, -72}}, color = {0, 0, 127}));
  connect(force1.frame_b, hullAddedMass.frame_Ob) annotation(
    Line(points = {{-30, -72}, {10, -72}, {10, -48}, {53, -48}}, color = {95, 95, 95}));
  connect(step1.y, force.force[2]) annotation(
    Line(points = {{-94, 52}, {-80, 52}, {-80, 62}, {-56, 62}}, color = {0, 0, 127}));
  connect(step2.y, force.force[3]) annotation(
    Line(points = {{-96, 28}, {-78, 28}, {-78, 62}, {-56, 62}}, color = {0, 0, 127}));
  connect(step3.y, force1.force[2]) annotation(
    Line(points = {{-90, -82}, {-68, -82}, {-68, -72}, {-52, -72}}, color = {0, 0, 127}));
  connect(step4.y, force1.force[3]) annotation(
    Line(points = {{-92, -106}, {-68, -106}, {-68, -72}, {-52, -72}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 50, Interval = 0.1, Tolerance = 1e-06),
    Diagram(graphics = {Text(origin = {21, 95}, extent = {{-155, 23}, {155, -23}}, textString = "Read model explanation in the model annotation within the text view.")}));
end testAddedMass;