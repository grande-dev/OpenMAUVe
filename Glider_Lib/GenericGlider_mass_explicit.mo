within Glider_Lib;
model GenericGlider_mass_explicit "Main glider modelling layer"
  inner Modelica.Mechanics.MultiBody.World world(g = g, n(each displayUnit = "1") = {0, 0, 1}) annotation (
    Placement(visible = true, transformation(extent={{24,70},{44,90}},      rotation = 0)));
  parameter Modelica.Units.SI.Position r_CM_hull[3]={-0.0814,0,0.0032}
    "Hull COM position wrt to COB";
  parameter Modelica.Units.SI.Position r_b[3]={0.0,0.0,0.0}
    "VBD position wrt to COB";
  parameter Modelica.Units.SI.Position r_r[3]={0.0,0.0,0.014}
    "Rolling mass position wrt to COB";
  parameter Modelica.Units.SI.Position r_p[3]={0.0,0.0,0.0}
    "Shifting mass position wrt to COB";
  parameter Modelica.Units.SI.Position r_batt_enclosure[3]={0.0,0.0,0.0}
    "Position of battery enclosure";
  parameter Modelica.Units.SI.Position r_HV_batt[3]={0.0,0.0,0.0}
    "Distance from the battery enclosure to the HV battery";
  parameter Modelica.Units.SI.Inertia I_11=0.6
    "(1,1) element of inertia tensor of hull";
  parameter Modelica.Units.SI.Inertia I_22=15.27
    "(2,2) element of inertia tensor of hull";
  parameter Modelica.Units.SI.Inertia I_33=15.32
    "(3,3) element of inertia tensor of hull";
  parameter Modelica.Units.SI.Mass m_h=54.28 "Mass of rigid body (hull)";
  parameter Modelica.Units.SI.Mass m_r=11.0 "Mass of rolling mass";
  parameter Modelica.Units.SI.Mass m_w=65.28
    "Mass of water displaced by the vehicle";
  parameter Modelica.Units.SI.Mass m_battery_enclosure=0.0
    "Mass of battery enclosure";
  parameter Modelica.Units.SI.Mass m_HV_battery=0.0 "Mass of HV battery";
  parameter Modelica.Units.SI.Volume nabla_0=0.0 "Neutral vehicle volume";
  parameter Modelica.Units.SI.Inertia I_11_r=0.2
    "(1,1) element of inertia tensor of rolling mass";
  parameter Modelica.Units.SI.Inertia I_22_r=10.16
    "(2,2) element of inertia tensor of rolling mass";
  parameter Modelica.Units.SI.Inertia I_33_r=0.17
    "(3,3) element of inertia tensor of rolling mass";
  parameter Real X_udot(unit = "kg") = 1.48 "(1,1) element of added mass matrix (convention: POSITIVE)";
  parameter Real Y_vdot(unit = "kg") = 49.58 "(2,2) element of added mass matrix";
  parameter Real Z_wdot(unit = "kg") = 65.92 "(3,3) element of added mass matrix";
  parameter Real K_pdot(unit = "kg.m2") = 0.53 "(4,4) element of added mass matrix";
  parameter Real M_qdot(unit = "kg.m2") = 7.88 "(5,5) element of added mass matrix";
  parameter Real N_rdot(unit = "kg.m2") = 10.18 "(6,6) element of added mass matrix";
  parameter Real Y_rdot(unit = "kg.m") = 2.57 "(2,6) element of added mass matrix";
  parameter Real Z_qdot(unit = "kg.m") = 3.61 "(3,5) element of added mass matrix";
  parameter Real M_wdot(unit = "kg.m") = 3.61 "(5,3) element of added mass matrix";
  parameter Real N_vdot(unit = "kg.m") = 2.57 "(6,2) element of added mass matrix";
  parameter Real K_D0(unit = "kg/m") = 7.19 "drag coefficient zero order";
  parameter Real K_D(unit = "kg/(m.rad2)") = 386.29 "drag coefficient";
  parameter Real K_beta(unit = "kg/(m.rad)") = -115.65 "side force coefficient";
  parameter Real K_L0(unit = "kg/m") = -0.36 "lift force coefficient";
  parameter Real K_alpha(unit = "kg/(m.rad)") = 440.99 "(also K_L) lift coefficient (related to angle of attack)";
  parameter Real K_MR(unit = "kg/rad") = -58.27 "viscous moment coefficient around x-axis (related to angle of attack)";
  parameter Real K_p(unit = "kg.s/rad") = -19.83 "viscous moment coefficient around x-axis (related to angle of attack)";
  parameter Real K_M0(unit = "kg") = 0.28 "viscous moment coefficient around y-axis";
  parameter Real K_M(unit = "kg/rad") = -65.84 "viscous moment coefficient around y-axis";
  parameter Real K_q(unit = "kg.s/rad2") = -205.64 "viscous moment coefficient around y-axis (related to angle of attack)";
  parameter Real K_MY(unit = "kg/rad") = 34.10 "viscous moment coefficient around z-axis (related to angle of attch)";
  parameter Real K_r(unit = "kg.s/rad2") = -389.30 "viscous moment coefficient around z-axis (related to angle of attack)";
  parameter Real K_Ome_1_1(unit = "kg.m2/s") = 0.0 "rotation linear damping around x-axis";
  parameter Real K_Ome_1_2(unit = "kg.m2") = 0.0 "rotation quadratic damping around x-axis";
  parameter Real K_Ome_2_1(unit = "kg.m2/s") = 0.0 "rotation linear damping around y-axis";
  parameter Real K_Ome_2_2(unit = "kg.m2") = 0.0 "rotation quadratic damping around y-axis";
  parameter Real K_Ome_3_1(unit = "kg.m2/s") = 0.0 "rotation linear damping around z-axis";
  parameter Real K_Ome_3_2(unit = "kg.m2") = 0.0 "rotation quadratic damping around z-axis";
  parameter Modelica.Units.SI.Density rho=1000 "Water density [kg/m3]";
  parameter Modelica.Units.SI.Acceleration g=9.81 "Gravity constant";
  Modelica.Units.SI.Mass m_0 "net mass";
  Glider_Lib.Parts.Actuators actuators(I_r_x = I_11_r, I_r_y = I_22_r, I_r_z = I_33_r, m_HV_battery = m_HV_battery, m_battery_enclosure = m_battery_enclosure, m_r = m_r, r_HV_batt = r_HV_batt, r_b = r_b, r_batt_enclosure = r_batt_enclosure, r_p = r_p, r_r = r_r) annotation (
    Placement(visible = true, transformation(extent = {{-62, 78}, {-32, 98}}, rotation = 0)));
  Parts.HydrodynamicForcesTorques hydrodynamicForcesTorques(K_D = K_D, K_D0 = K_D0, K_L0 = K_L0, K_M = K_M, K_M0 = K_M0, K_MR = K_MR, K_MY = K_MY, K_Ome_1_1 = K_Ome_1_1, K_Ome_1_2 = K_Ome_1_2, K_Ome_2_1 = K_Ome_2_1, K_Ome_2_2 = K_Ome_2_2, K_Ome_3_1 = K_Ome_3_1, K_Ome_3_2 = K_Ome_3_2, K_alpha = K_alpha, K_beta = K_beta, K_p = K_p, K_q = K_q, K_r = K_r) if true annotation (
    Placement(transformation(extent = {{-88, -10}, {-28, 10}})));
  Modelica.Blocks.Interfaces.RealInput in_pos_m_r(unit = "rad") annotation (
    Placement(visible = true, transformation(extent = {{-124, 78}, {-92, 110}}, rotation = 0), iconTransformation(origin = {-100, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput in_pos_m_s(unit = "rad") annotation (
    Placement(visible = true, transformation(extent = {{-124, 52}, {-92, 84}}, rotation = 0), iconTransformation(origin = {-103, 75}, extent = {{-9, -9}, {9, 9}}, rotation = 0)));
  parameter Modelica.Units.SI.Position r_0[3]={0,0,0}
    "Position vector from origin of world frame to origin of hull"
    annotation (Dialog(tab="Init Kinematics"));
  parameter Modelica.Units.SI.Velocity v_0[3]={0.0001,0,0.00005}
    "Absolute velocity of frame_a, resolved in world frame (= der(r_0))"
    annotation (Dialog(tab="Init Kinematics"));
  parameter Modelica.Units.SI.Angle euler_0[3]={0,0,0}
    "Initial values of angles to rotate frame_a around 'sequence_start' axes into frame_b"
    annotation (Dialog(tab="Init Kinematics"));
  parameter Modelica.Units.SI.AngularVelocity w_0[3]={0,0,0}
    "Initial or guess values of angular velocity of frame_a resolved in world frame"
    annotation (Dialog(tab="Init Kinematics"));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteAngles absoluteAngles(sequence = {3, 2, 1}) annotation (
    Placement(visible = true, transformation(extent = {{62, -90}, {82, -70}}, rotation = 0)));
  Parts.BuoyancyForce buoyancyForce(g = g, nabla_0 = nabla_0, rho = rho) annotation (
    Placement(transformation(extent = {{-88, -40}, {-28, -20}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedShape shape_hull(animation = true, color = {0, 0, 255}, height = 0.1, length = 0.1, r_shape = {-0.05, 0.0, 0.0}, width = 0.1) annotation (
    Placement(visible = true, transformation(origin={146,-52},   extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Parts.Body hull(I_11 = I_11, I_22 = I_22, I_33 = I_33, angles_fixed = true, angles_start(displayUnit = "rad"), animation = false, m = m_h, r_0(fixed = true, start = r_0),
    final r_CM={0,0,0},                                                                                                                                                                                                     sequence_start = {3, 2, 1}, v_0(fixed = true, start = v_0), w_0_fixed = true, w_0_start = w_0) annotation (
    Placement(visible = true, transformation(origin={146,-30},   extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Glider_Lib.Parts.AddedMassForcesTorques addedMassForcesTorques(K_pdot = K_pdot, M_qdot = M_qdot, M_wdot = M_wdot, N_rdot = N_rdot, N_vdot = N_vdot, X_udot = X_udot, Y_rdot = Y_rdot, Y_vdot = Y_vdot, Z_qdot = Z_qdot, Z_wdot = Z_wdot) annotation (
    Placement(visible = true, transformation(origin={-54,-58},    extent={{-34,-14},
            {34,14}},                                                                              rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput in_variable_ballast(unit = "kg") annotation (
    Placement(visible = true, transformation(origin = {-138, -30}, extent = {{-16, -16}, {16, 16}}, rotation = 0), iconTransformation(origin = {-98, -36}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constVarMass(k = 0) annotation (
    Placement(visible = true, transformation(origin = {-98, 42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_lin_vel_u annotation (
    Placement(visible = true, transformation(origin={110,80},    extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {110, 74}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_lin_vel_v annotation (
    Placement(visible = true, transformation(origin={128,58},    extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {110, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_lin_vel_w annotation (
    Placement(visible = true, transformation(origin={112,40},    extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {110, -36}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Sensors.RelativeVelocity LinVelBody(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_b) annotation (
    Placement(visible = true, transformation(origin={70,58},    extent={{10,-10},
            {-10,10}},                                                                           rotation=90)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation translation_toComHull(
      animation=false, r=r_CM_hull)
    annotation (Placement(transformation(extent={{82,-40},{102,-20}})));
equation
  m_0 = m_h + m_r + in_variable_ballast - m_w;
  connect(in_pos_m_r, actuators.in_pos_m_r) annotation (
    Line(points = {{-108, 94}, {-61, 94}}, color = {0, 0, 127}));
  connect(in_pos_m_s, actuators.in_pos_m_s) annotation (
    Line(points = {{-108, 68}, {-74.5, 68}, {-74.5, 88}, {-61, 88}}, color = {0, 0, 127}));
  connect(constVarMass.y, actuators.in_variable_ballast) annotation (
    Line(points = {{-87, 42}, {-66, 42}, {-66, 82}, {-61, 82}}, color = {0, 0, 127}));
  connect(in_variable_ballast, buoyancyForce.in_variable_volume) annotation (
    Line(points={{-138,-30},{-116,-30},{-116,-29.8},{-94,-29.8}},
                                             color = {0, 0, 127}));
  connect(LinVelBody.v_rel[1], out_lin_vel_u) annotation (
    Line(points={{81.3333,58},{96,58},{96,80},{110,80}},               color = {0, 0, 127}));
  connect(LinVelBody.v_rel[2], out_lin_vel_v) annotation (
    Line(points={{81,58},{128,58}},                                    color = {0, 0, 127}));
  connect(LinVelBody.v_rel[3], out_lin_vel_w) annotation (
    Line(points={{80.6667,58},{96,58},{96,40},{112,40}},               color = {0, 0, 127}));
  connect(translation_toComHull.frame_b, hull.frame_a) annotation (Line(
      points={{102,-30},{136,-30}},
      color={95,95,95},
      thickness=0.5));
  connect(addedMassForcesTorques.frame_b, absoluteAngles.frame_a) annotation (
      Line(
      points={{-19.66,-58},{56,-58},{56,-80},{62,-80}},
      color={95,95,95},
      thickness=0.5));
  connect(addedMassForcesTorques.frame_b, shape_hull.frame_a) annotation (Line(
      points={{-19.66,-58},{118,-58},{118,-52},{136,-52}},
      color={95,95,95},
      thickness=0.5));
  connect(hull.frame_a, shape_hull.frame_a) annotation (Line(
      points={{136,-30},{118,-30},{118,-52},{136,-52}},
      color={95,95,95},
      thickness=0.5));
  connect(buoyancyForce.frame_b, translation_toComHull.frame_a) annotation (
      Line(
      points={{-28,-30},{82,-30}},
      color={95,95,95},
      thickness=0.5));
  connect(hydrodynamicForcesTorques.frame_b, translation_toComHull.frame_a)
    annotation (Line(
      points={{-28,0},{62,0},{62,-30},{82,-30}},
      color={95,95,95},
      thickness=0.5));
  connect(LinVelBody.frame_b, translation_toComHull.frame_a) annotation (Line(
      points={{70,48},{70,-30},{82,-30}},
      color={95,95,95},
      thickness=0.5));
  connect(world.frame_b, LinVelBody.frame_a) annotation (Line(
      points={{44,80},{70,80},{70,68}},
      color={95,95,95},
      thickness=0.5));
  connect(actuators.frame_a, translation_toComHull.frame_a) annotation (Line(
      points={{-47.8,78.2},{-47.8,28},{62,28},{62,-30},{82,-30}},
      color={95,95,95},
      thickness=0.5));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio = false, initialScale = 0.1), graphics={  Text(origin = {-107, 72}, extent = {{-7, 4}, {69, -30}}, textString = "position_m_s"), Text(origin = {-107, 12}, extent = {{-7, 4}, {69, -30}}, textString = "position_m_r"), Text(origin = {-101, -42}, extent = {{-7, 4}, {69, -30}}, textString = "variable_vol"), Bitmap(origin = {31, 4}, rotation = 180, extent = {{-67, 56}, {67, -56}}, imageSource = "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"), Text(origin = {101, 63}, extent = {{-5, 3}, {49, -19}}, textString = "lin_vel_u"), Text(origin = {103, 7}, extent = {{-5, 3}, {49, -19}}, textString = "lin_vel_v"), Text(origin = {103, -49}, extent = {{-5, 3}, {49, -19}}, textString = "lin_vel_w")}),
    Diagram(coordinateSystem(preserveAspectRatio = false)),
    experiment(StopTime = 30, Interval = 0.1));
end GenericGlider_mass_explicit;
