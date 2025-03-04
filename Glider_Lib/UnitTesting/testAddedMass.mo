within Glider_Lib.UnitTesting;

model testAddedMass "This model is used to illustrate the difference of a hull with added mass vs a normal rigid body. The two objects are subjected to the same inputs: the gravity force, and a constant force along the x-body axis."
  
  import SI = Modelica.Units.SI;

  parameter Real Cd = 0.0;
  
  // Added mass
  parameter Real X_udot(unit = "kg") = 2.0 "(1,1) element of added mass matrix (convention: POSITIVE)" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Y_vdot(unit = "kg") = 3.0 "(2,2) element of added mass matrix" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Z_wdot(unit = "kg") = 4.0 "(3,3) element of added mass matrix" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_pdot(unit = "kg.m2") = 5.0 "(4,4) element of added mass matrix" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real M_qdot(unit = "kg.m2") = 6.0 "(5,5) element of added mass matrix" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real N_rdot(unit = "kg.m2") = 7.0 "(6,6) element of added mass matrix" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Y_rdot(unit = "kg.m") = 8.0 "(2,6) element of added mass matrix" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Z_qdot(unit = "kg.m") = 9.0 "(3,5) element of added mass matrix" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real M_wdot(unit = "kg.m") = 10.0 "(5,3) element of added mass matrix" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real N_vdot(unit = "kg.m") = 11.0 "(6,2) element of added mass matrix" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  
  parameter SI.Mass m_h = 10.0 "Mass of rigid body (hull)" annotation(Dialog(tab = "Vehicle geometry")); 
  parameter SI.Inertia I_11 = 0.01 "(1,1) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_22 = 0.01 "(2,2) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_33 = 0.01 "(3,3) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_g_hull[3] = {0.0, 0.0, 0.0} "Hull COM position wrt to {O_b}" annotation(Dialog(tab = "Vehicle geometry"));
  
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
  Parts.RigidBody rigidBody(r_CM = r_g_hull, m = m_h, I_11 = I_11, I_22 = I_22, I_33 = I_33)  annotation(
    Placement(transformation(origin = {82, 72}, extent = {{-10, -10}, {10, 10}})));
  Parts.HullAddedMassAnalytical hullAddedMassAnalytical(m_h = m_h, I_11 = I_11, I_22 = I_22, I_33 = I_33, r_g_hull = r_g_hull, X_udot = X_udot, Y_vdot = Y_vdot, Z_wdot = Z_wdot, K_pdot = K_pdot, M_qdot = M_qdot, N_rdot = N_rdot)  annotation(
    Placement(transformation(origin = {133, -43}, extent = {{-31, -31}, {31, 31}})));
equation
  connect(step.y, force.force[1]) annotation(
    Line(points = {{-203.4, 104}, {-184.4, 104}, {-184.4, 92}, {-162.4, 92}}, color = {0, 0, 127}));
  connect(world.frame_b, freeMotion.frame_a) annotation(
    Line(points = {{-104, -12}, {-82, -12}, {-82, 0}, {-46, 0}}, color = {95, 95, 95}));
  connect(world.frame_b, freeMotion1.frame_a) annotation(
    Line(points = {{-104, -12}, {-82, -12}, {-82, -24}, {-42, -24}}, color = {95, 95, 95}));
  connect(step5.y, force1.force[1]) annotation(
    Line(points = {{-173.4, -106}, {-147.4, -106}, {-147.4, -118}, {-131.4, -118}}, color = {0, 0, 127}));
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
  connect(step9.y, torque1.torque[1]) annotation(
    Line(points = {{-220, -176}, {-212, -176}, {-212, -180}, {-142, -180}}, color = {0, 0, 127}));
  connect(step10.y, torque1.torque[2]) annotation(
    Line(points = {{-220, -204}, {-208, -204}, {-208, -180}, {-142, -180}}, color = {0, 0, 127}));
  connect(step11.y, torque1.torque[3]) annotation(
    Line(points = {{-220, -232}, {-200, -232}, {-200, -180}, {-142, -180}}, color = {0, 0, 127}));
  connect(force.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-140, 92}, {-84, 92}, {-84, 72}, {72, 72}}, color = {95, 95, 95}));
  connect(torque.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-140, 26}, {-86, 26}, {-86, 72}, {72, 72}}, color = {95, 95, 95}));
  connect(force1.frame_b, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{-110, -118}, {16, -118}, {16, -46}, {106, -46}}, color = {95, 95, 95}));
  connect(torque1.frame_b, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{-120, -180}, {44, -180}, {44, -46}, {106, -46}}, color = {95, 95, 95}));
  connect(freeMotion1.frame_b, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{-22, -24}, {22, -24}, {22, -46}, {106, -46}}, color = {95, 95, 95}));
  connect(freeMotion.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-26, 0}, {14, 0}, {14, 72}, {72, 72}}, color = {95, 95, 95}));
  annotation(
    experiment(StopTime = 50, Interval = 0.1, Tolerance = 1e-06),
  Diagram(graphics = {Text(origin = {19, 117}, extent = {{-155, 23}, {155, -23}}, textString = "For the explanation: read model explanation in the model annotation within the text view.")}, coordinateSystem(extent = {{-300, -300}, {300, 300}})),
  Icon(coordinateSystem(extent = {{-300, -300}, {300, 300}})));
end testAddedMass;