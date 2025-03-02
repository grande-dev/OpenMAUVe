within Glider_Lib.Parts;

model testAddedMass "This model is used to illustrate the difference of a hull with added mass vs a normal rigid body. The two objects are subjected to the same inputs: the gravity force, and a constant force along the x-body axis."
  parameter Real Cd = 0.0;
  inner Modelica.Mechanics.MultiBody.World world annotation(
    Placement(transformation(origin = {-114, -12}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.world) annotation(
    Placement(transformation(origin = {-150, 92}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step step(height = 1, startTime = 20) annotation(
    Placement(transformation(origin = {-210, 104}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step1(height = 20, startTime = 30) annotation(
    Placement(transformation(origin = {-207, 81}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Sources.Step step2(height = 0, startTime = 0) annotation(
    Placement(transformation(origin = {-208, 58}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Mechanics.MultiBody.Joints.FreeMotion freeMotion(r_rel_a(start = {0, 50, 0}, each fixed = true), animation = false) annotation(
    Placement(transformation(origin = {-36, 0}, extent = {{-10, -10}, {10, 10}})));
  HullAddedMass hullAddedMass(m_h = 2, I_11 = 10, I_22 = 10, I_33 = 10, Z_wdot = 0, X_udot = 0, Y_vdot = 0, K_pdot = 100.0, M_qdot = 400.0, N_rdot = 50.0) annotation(
    Placement(transformation(origin = {79, -45}, extent = {{-31, -31}, {31, 31}})));
  RigidBody rigidBody(m = 2, I_11 = 10, I_22 = 10, I_33 = 10) annotation(
    Placement(transformation(origin = {86, 36}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.FreeMotion freeMotion1(r_rel_a(start = {0, 50, 0}, each fixed = true), animation = false) annotation(
    Placement(transformation(origin = {-32, -24}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force1(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.world) annotation(
    Placement(transformation(origin = {-120, -118}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step step3(height = 20, startTime = 30) annotation(
    Placement(transformation(origin = {-177, -129}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Sources.Step step4(height = 0, startTime = 0) annotation(
    Placement(transformation(origin = {-178, -152}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step5(height = 1, startTime = 20) annotation(
    Placement(transformation(origin = {-180, -106}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Mechanics.MultiBody.Forces.WorldTorque torque(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b)  annotation(
    Placement(transformation(origin = {-150, 26}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step step6(height = 1, startTime = 200) annotation(
    Placement(transformation(origin = {-246, 30}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step7(height = 1, startTime = 250) annotation(
    Placement(transformation(origin = {-246, 2}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step8(height = 1, startTime = 300) annotation(
    Placement(transformation(origin = {-246, -26}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step9(height = 1, startTime = 200) annotation(
    Placement(transformation(origin = {-226, -176}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step10(height = 1, startTime = 250) annotation(
    Placement(transformation(origin = {-226, -204}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Step step11(height = 1, startTime = 300) annotation(
    Placement(transformation(origin = {-226, -232}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Mechanics.MultiBody.Forces.WorldTorque torque1(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b) annotation(
    Placement(transformation(origin = {-130, -180}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(step.y, force.force[1]) annotation(
    Line(points = {{-203.4, 104}, {-184.4, 104}, {-184.4, 92}, {-162.4, 92}}, color = {0, 0, 127}));
  connect(world.frame_b, freeMotion.frame_a) annotation(
    Line(points = {{-104, -12}, {-82, -12}, {-82, 0}, {-46, 0}}, color = {95, 95, 95}));
  connect(freeMotion.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-26, 0}, {9, 0}, {9, 36}, {76, 36}}, color = {95, 95, 95}));
  connect(force.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-140, 92}, {10, 92}, {10, 36}, {76, 36}}, color = {95, 95, 95}));
  connect(world.frame_b, freeMotion1.frame_a) annotation(
    Line(points = {{-104, -12}, {-82, -12}, {-82, -24}, {-42, -24}}, color = {95, 95, 95}));
  connect(freeMotion1.frame_b, hullAddedMass.frame_Ob) annotation(
    Line(points = {{-22, -24}, {10, -24}, {10, -48}, {53, -48}}, color = {95, 95, 95}));
  connect(step5.y, force1.force[1]) annotation(
    Line(points = {{-173.4, -106}, {-147.4, -106}, {-147.4, -118}, {-131.4, -118}}, color = {0, 0, 127}));
  connect(force1.frame_b, hullAddedMass.frame_Ob) annotation(
    Line(points = {{-110, -118}, {10, -118}, {10, -48}, {53, -48}}, color = {95, 95, 95}));
  connect(step1.y, force.force[2]) annotation(
    Line(points = {{-199.3, 81}, {-185.3, 81}, {-185.3, 91}, {-161.3, 91}}, color = {0, 0, 127}));
  connect(step2.y, force.force[3]) annotation(
    Line(points = {{-201.4, 58}, {-183.4, 58}, {-183.4, 92}, {-161.4, 92}}, color = {0, 0, 127}));
  connect(step3.y, force1.force[2]) annotation(
    Line(points = {{-169.3, -129}, {-147.3, -129}, {-147.3, -119}, {-131.3, -119}}, color = {0, 0, 127}));
  connect(step4.y, force1.force[3]) annotation(
    Line(points = {{-171.4, -152}, {-147.4, -152}, {-147.4, -118}, {-131.4, -118}}, color = {0, 0, 127}));
  connect(step6.y, torque.torque[1]) annotation(
    Line(points = {{-240, 30}, {-218, 30}, {-218, 26}, {-162, 26}}, color = {0, 0, 127}));
  connect(step7.y, torque.torque[2]) annotation(
    Line(points = {{-240, 2}, {-218, 2}, {-218, 26}, {-162, 26}}, color = {0, 0, 127}));
  connect(step8.y, torque.torque[3]) annotation(
    Line(points = {{-240, -26}, {-212, -26}, {-212, 26}, {-162, 26}}, color = {0, 0, 127}));
  connect(torque.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-140, 26}, {-86, 26}, {-86, 36}, {76, 36}}, color = {95, 95, 95}));
  connect(step9.y, torque1.torque[1]) annotation(
    Line(points = {{-220, -176}, {-212, -176}, {-212, -180}, {-142, -180}}, color = {0, 0, 127}));
  connect(step10.y, torque1.torque[2]) annotation(
    Line(points = {{-220, -204}, {-208, -204}, {-208, -180}, {-142, -180}}, color = {0, 0, 127}));
  connect(step11.y, torque1.torque[3]) annotation(
    Line(points = {{-220, -232}, {-200, -232}, {-200, -180}, {-142, -180}}, color = {0, 0, 127}));
  connect(torque1.frame_b, hullAddedMass.frame_Ob) annotation(
    Line(points = {{-120, -180}, {10, -180}, {10, -48}, {52, -48}}, color = {95, 95, 95}));
  annotation(
    experiment(StopTime = 50, Interval = 0.1, Tolerance = 1e-06),
  Diagram(graphics = {Text(origin = {17, 117}, extent = {{-155, 23}, {155, -23}}, textString = "For the explanation: read model explanation in the model annotation within the text view.")}, coordinateSystem(extent = {{-300, -300}, {300, 300}})),
  Icon(coordinateSystem(extent = {{-300, -300}, {300, 300}})));
end testAddedMass;