within Glider_Lib.Parts;

model testAddedMass "This model is used to illustrate the difference of a hull with added mass vs a normal rigid body. The two objects are subjected to the same inputs: the gravity force, and a constant force along the x-body axis."
  parameter Real Cd = 0.0;
  inner Modelica.Mechanics.MultiBody.World world annotation(
    Placement(transformation(origin = {-114, -12}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b) annotation(
    Placement(transformation(origin = {-62, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step step(height = 1, startTime = 20) annotation(
    Placement(transformation(origin = {-122, 72}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step1(height = 0) annotation(
    Placement(transformation(origin = {-119, 49}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Sources.Step step2(height = 0) annotation(
    Placement(transformation(origin = {-120, 26}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Mechanics.MultiBody.Joints.FreeMotion freeMotion(r_rel_a(start = {0, 2, 0}, each fixed = true)) annotation(
    Placement(transformation(origin = {-40, 14}, extent = {{-10, -10}, {10, 10}})));
  HullAddedMass hullAddedMass(m_h = 2, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1, Z_wdot = 10.0, X_udot = 10.0) annotation(
    Placement(transformation(origin = {79, -45}, extent = {{-31, -31}, {31, 31}})));
  RigidBody rigidBody(m = 2, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1) annotation(
    Placement(transformation(origin = {86, 36}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.FreeMotion freeMotion1(r_rel_a(start = {1, 2, 0}, each fixed = true)) annotation(
    Placement(transformation(origin = {-50, -34}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force1(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b) annotation(
    Placement(transformation(origin = {-40, -72}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step step3(height = 0) annotation(
    Placement(transformation(origin = {-97, -83}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Sources.Step step4(height = 0) annotation(
    Placement(transformation(origin = {-98, -106}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step5(height = 1, startTime = 20) annotation(
    Placement(transformation(origin = {-100, -60}, extent = {{-6, -6}, {6, 6}})));
equation
  connect(step.y, force.force[1]) annotation(
    Line(points = {{-115.4, 72}, {-96.4, 72}, {-96.4, 60}, {-74.4, 60}}, color = {0, 0, 127}));
  connect(step1.y, force.force[2]) annotation(
    Line(points = {{-111.3, 49}, {-96.3, 49}, {-96.3, 60}, {-74.3, 60}}, color = {0, 0, 127}));
  connect(step2.y, force.force[3]) annotation(
    Line(points = {{-113.4, 26}, {-88.4, 26}, {-88.4, 60}, {-74.4, 60}}, color = {0, 0, 127}));
  connect(world.frame_b, freeMotion.frame_a) annotation(
    Line(points = {{-104, -12}, {-82, -12}, {-82, 14}, {-50, 14}}, color = {95, 95, 95}));
  connect(freeMotion.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-30, 14}, {9, 14}, {9, 36}, {76, 36}}, color = {95, 95, 95}));
  connect(force.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-52, 60}, {10, 60}, {10, 36}, {76, 36}}, color = {95, 95, 95}));
  connect(world.frame_b, freeMotion1.frame_a) annotation(
    Line(points = {{-104, -12}, {-82, -12}, {-82, -34}, {-60, -34}}, color = {95, 95, 95}));
  connect(freeMotion1.frame_b, hullAddedMass.frame_Ob) annotation(
    Line(points = {{-40, -34}, {10, -34}, {10, -48}, {53, -48}}, color = {95, 95, 95}));
  connect(step5.y, force1.force[1]) annotation(
    Line(points = {{-94, -60}, {-68, -60}, {-68, -72}, {-52, -72}}, color = {0, 0, 127}));
  connect(step3.y, force1.force[2]) annotation(
    Line(points = {{-90, -82}, {-82, -82}, {-82, -72}, {-52, -72}}, color = {0, 0, 127}));
  connect(step4.y, force1.force[3]) annotation(
    Line(points = {{-92, -106}, {-74, -106}, {-74, -72}, {-52, -72}}, color = {0, 0, 127}));
  connect(force1.frame_b, hullAddedMass.frame_Ob) annotation(
    Line(points = {{-30, -72}, {10, -72}, {10, -48}, {53, -48}}, color = {95, 95, 95}));
  annotation(
    experiment(StopTime = 50, Interval = 0.1, Tolerance = 1e-06),
    Diagram(graphics = {Text(origin = {3, 93}, extent = {{-155, 23}, {155, -23}}, textString = "Read model explanation in the model annotation within the text view.")}));
end testAddedMass;