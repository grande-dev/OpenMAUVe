within OpenMAUVe.Vehicles;
model gliderSLOCUM "SLOCUM glider model with volume-commanded VBD"
  import Modelica.Units.SI;

  parameter Boolean enableAddedMassEffects = true "set to false only in debugging mode" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));

  // Environmental parameters
  parameter SI.Density rho_0 = 1027.0 "Water density [kg/m3]" annotation(
    Dialog(tab = "Environment definition"));
  parameter Boolean enableRhoVsDepth = false "If true, a depth-dependent rho is used, otherwise rho_0 is used" annotation(
    Dialog(tab = "Environment definition"));
  parameter SI.Acceleration g_world = Modelica.Constants.g_n "Gravity constant" annotation(
    Dialog(tab = "Environment definition"));
  parameter SI.Position planet_radius = 6378137.0 "Maximum distance of water from ECI" annotation(
    Dialog(tab = "Environment definition"));
  parameter SI.AngularVelocity earthAngularSpeed = 7.2921150e-5 "Planet angular velocity" annotation(
    Dialog(tab = "Environment definition"));
  parameter SI.DynamicViscosity mu_fluid = 0.00189 "[Pa.s] seawater viscosity at 1028 kg/m3" annotation(
    Dialog(tab = "Environment definition"));

  // Positions and geometry
  parameter SI.Position r_g_hull[3] = {0.0, 0.0, 0.0} "Hull COM position wrt to {O_b}" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_b_hull[3] = {0.0, 0.0, 0.0} "Hull COB position wrt to {O_b}" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_p_hull[3] = {0.0, 0.0, 0.0} "Hull COP position wrt to {O_b}" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_mov[3] = {0.0, 0.0, 0.05} "Movable mass reference position wrt to {O_b}" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Position r_vbd_vol[3] = {0.0, 0.0, 0.0} "VBD position wrt to {O_b}" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Position r_w[3] = {0.0, 0.0, 0.0} "Point mass position wrt to {O_b}" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Length L_vehicle = 1.5 "Vehicle length" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Length R_vehicle = 0.11 "Vehicle radius" annotation(
    Dialog(tab = "Vehicle geometry"));

  // Masses and inertias
  parameter SI.Mass m_total = 59.0438 "Total vehicle mass" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Mass m_mov = 9.359 "Movable mass" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Mass m_w = 0.0 "Point mass" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Mass m_h = m_total - m_mov - m_w "Fixed hull mass" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_11 = 4.0 "(1,1) element of inertia tensor of hull" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_22 = 12.0 "(2,2) element of inertia tensor of hull" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_33 = 11.0 "(3,3) element of inertia tensor of hull" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_mov_11 = 0.00 "(1,1) element of inertia tensor of movable mass" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Inertia I_mov_22 = 0.00 "(2,2) element of inertia tensor of movable mass" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Inertia I_mov_33 = 0.00 "(3,3) element of inertia tensor of movable mass" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Inertia I_w_11 = 0.00 "(1,1) element of inertia tensor of the point mass" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_w_22 = 0.00 "(2,2) element of inertia tensor of the point mass" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_w_33 = 0.00 "(3,3) element of inertia tensor of the point mass" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Volume nabla_0 = m_total/rho_0 "Reference hull displaced volume" annotation(
    Dialog(tab = "Vehicle geometry"));

  // Added mass and hydrodynamics
  parameter Real X_udot(unit = "kg") = 5.0 "(1,1) element of added mass matrix" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Y_vdot(unit = "kg") = 60.0 "(2,2) element of added mass matrix" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Z_wdot(unit = "kg") = 70.0 "(3,3) element of added mass matrix" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_pdot(unit = "kg.m2") = 0.0 "(4,4) element of added mass matrix" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real M_qdot(unit = "kg.m2") = 0.0 "(5,5) element of added mass matrix" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real N_rdot(unit = "kg.m2") = 0.0 "(6,6) element of added mass matrix" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Y_rdot(unit = "kg.m") = 0.0 "(2,6) element of added mass matrix" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Z_qdot(unit = "kg.m") = 0.0 "(3,5) element of added mass matrix" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real M_wdot(unit = "kg.m") = 0.0 "(5,3) element of added mass matrix" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real N_vdot(unit = "kg.m") = 0.0 "(6,2) element of added mass matrix" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_D0(unit = "kg/m") = 2.15 "drag coefficient zero order" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_D(unit = "kg/(m.rad2)") = 25.0 "drag coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_beta(unit = "kg/(m.rad)") = 20.0 "side force coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_L0(unit = "kg/m") = 0.0 "lift force coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_alpha(unit = "kg/(m.rad)") = 132.5 "lift coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_MR(unit = "kg/rad") = -60.0 "roll moment coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_p_qua_stat(unit = "kg.s/rad") = -20.0 "roll damping coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_M0(unit = "kg") = 0.0 "pitch moment zero order coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_M(unit = "kg/rad") = -100.0 "pitch moment coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_q(unit = "kg.s/rad2") = -60.0 "pitch damping coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_MY(unit = "kg/rad") = 100.0 "yaw moment coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_r(unit = "kg.s/rad2") = -20.0 "yaw damping coefficient" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_1_1(unit = "kg.m2/s") = 0.0 "rotational linear damping around x-axis" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_1_2(unit = "kg.m2") = 0.0 "rotational quadratic damping around x-axis" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_2_1(unit = "kg.m2/s") = 0.0 "rotational linear damping around y-axis" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_2_2(unit = "kg.m2") = 0.0 "rotational quadratic damping around y-axis" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_3_1(unit = "kg.m2/s") = 0.0 "rotational linear damping around z-axis" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_3_2(unit = "kg.m2") = 0.0 "rotational quadratic damping around z-axis" annotation(
    Dialog(tab = "Vehicle hydrodynamics"));

  // Actuators
  parameter Boolean enableActuatorDynamics = false "Set false for instantaneous actuator response" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Volume VBD_reference_volume = 0.0 "VBD initial volume offset" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Volume VBD_max_volume = 1.0/rho_0 "VBD maximum positive volume offset" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Volume VBD_min_volume = -1.0/rho_0 "VBD minimum negative volume offset" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Time VBD_tau = 2.5 "VBD time constant [s]" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Position m_s_pos_sat = 0.0198 "Shifting mass max forward position wrt reference" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Position m_s_neg_sat = -0.0198 "Shifting mass min backwards position wrt reference" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Angle m_r_pos_angle = 0.0 "Rolling mass max angle wrt x_b" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Angle m_r_neg_angle = 0.0 "Rolling mass min angle wrt x_b" annotation(
    Dialog(tab = "Actuators"));
  parameter Real K_D_delta(unit = "kg/(m.rad2)") = 2.0 "Rudder drag coefficient" annotation(
    Dialog(tab = "Actuators"));
  parameter Real K_SF_delta(unit = "kg/(m.rad)") = 5.0 "Rudder side-force coefficient" annotation(
    Dialog(tab = "Actuators"));
  parameter Real K_MY_delta(unit = "kg/rad") = 1.0 "Rudder yaw-moment coefficient" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Angle rudder_pos_angle = Modelica.Units.Conversions.from_deg(30.0) "Rudder maximum angle" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Angle rudder_neg_angle = -Modelica.Units.Conversions.from_deg(30.0) "Rudder minimum angle" annotation(
    Dialog(tab = "Actuators"));
  parameter SI.Time rudder_tau = 0.1 "Rudder time constant" annotation(
    Dialog(tab = "Actuators"));

  // Sensors
  parameter Boolean enableNoiseSensors = false "Set false only in debugging mode" annotation(
    Dialog(tab = "Sensors"));
  parameter Real noise_gain = 1.0 "Noise gain" annotation(
    Dialog(tab = "Sensors"));
  parameter Real noise_std = 0.0001 "Noise standard deviation" annotation(
    Dialog(tab = "Sensors"));
  parameter SI.Time noise_sample_period = 1.0 "[s] period of sensor noise" annotation(
    Dialog(tab = "Sensors"));

  // Simulation initialisation
  parameter SI.Position r_0[3] = {0, 0, 0} "Initial position in NED" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter SI.Velocity v_0[3] = {0.00001, 0, 0.00001} "Initial velocity" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter SI.Angle euler_0[3] = {0, 0, 0} "Initial attitude angles" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter SI.AngularVelocity w_0[3] = {0, 0, 0} "Initial angular velocity" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter SI.Angle init_latitude = -0.557272337881529 "Initial NED latitude" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter SI.Angle init_longitude = 2.020011979653293 "Initial NED longitude" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter SI.Position init_altitude = 0.0 "Geodetic height" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter SI.Position a_earth = 6378137.0 "Earth semimajor axis" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter Real e_earth = 0.0818191908426 "Earth eccentricity" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter Real scaleDist = 1.0 "Debug param: leave it as = 1" annotation(
    Dialog(tab = "Init Kinematics"));

  Modelica.Blocks.Interfaces.RealInput in_VBD_volume(unit = "m3") "VBD displaced volume command" annotation(
    Placement(transformation(origin = {-220, -120}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-220, 80}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_mov_shift "Movable mass shift command" annotation(
    Placement(transformation(origin = {-220, -170}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-220, -40}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_rudder_deflection(unit = "rad") "Rudder deflection command" annotation(
    Placement(transformation(origin = {-220, -210}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-220, -120}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput env_current_speed[3] "Current velocity resolved in NED frame" annotation(
    Placement(transformation(origin = {-220, 160}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {0, 220}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Modelica.Blocks.Interfaces.RealOutput out_lin_vel_body[3] annotation(
    Placement(transformation(origin = {240, 160}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {220, 80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_ang_vel_ome[3] annotation(
    Placement(transformation(origin = {240, 120}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {220, 40}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_angle_DCM[3] annotation(
    Placement(transformation(origin = {240, 80}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {220, -40}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_pos_body_wrt_NED_in_NED[3] annotation(
    Placement(transformation(origin = {240, 220}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {220, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_pos_body_wrt_NED0_in_NED0[3] annotation(
    Placement(transformation(origin = {240, 244}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {220, 20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_pos_ECI[3] annotation(
    Placement(transformation(origin = {240, 190}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {220, -80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput unitTest[7](each unit = "1") annotation(
    Placement(transformation(origin = {170, 20}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, -220}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Sensors.SignalBus signalBus annotation(
    Placement(transformation(origin = {40, 80}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {70, -210}, extent = {{-20, -20}, {20, 20}})));

  Modelica.Mechanics.MultiBody.Visualizers.FixedFrame frame_Ob(
    length = 0.2,
    color_x = {200, 0, 0},
    color_y = {200, 0, 0},
    color_z = {200, 0, 0},
    showLabels = true,
    animation = true,
    specularCoefficient = 0.1) annotation(
    Placement(transformation(origin = {80, -60}, extent = {{-10, -10}, {10, 10}})));
  Kinematics.ReferenceFrames referenceFrames(
    euler_0 = euler_0,
    w_0 = w_0,
    r_0 = r_0,
    v_0 = v_0,
    init_latitude = init_latitude,
    init_longitude = init_longitude,
    init_altitude = init_altitude,
    a_earth = a_earth,
    e_earth = e_earth,
    scaleDist = scaleDist,
    earthAngularSpeed = earthAngularSpeed) annotation(
    Placement(transformation(origin = {-60, 220}, extent = {{-30, -24}, {30, 24}})));
  inner Kinematics.World world(
    gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity,
    animateGravity = false,
    animateGround = false,
    enableAnimation = true,
    g = g_world) annotation(
    Placement(transformation(origin = {-140, 220}, extent = {{-10, -10}, {10, 10}})));
  Hydrostatics.rhoVsDepth rhoVsDepth(rho_0 = rho_0, enableRhoVsDepth = enableRhoVsDepth) annotation(
    Placement(transformation(origin = {-130, 70}, extent = {{-18, -18}, {18, 18}})));
  Actuators.MovableMasses movableMasses(
    m_mov = m_mov,
    I_mov_11 = I_mov_11,
    I_mov_22 = I_mov_22,
    I_mov_33 = I_mov_33,
    r_mov = r_mov,
    m_s_pos_sat = m_s_pos_sat,
    m_s_neg_sat = m_s_neg_sat,
    m_r_pos_angle = m_r_pos_angle,
    m_r_neg_angle = m_r_neg_angle,
    enableActuatorDynamics = enableActuatorDynamics) annotation(
    Placement(transformation(origin = {-110, -180}, extent = {{-28, -24}, {28, 24}})));
  Hydrostatics.BuoyancyForceIncompressibleHull buoyancyForceIncompressibleHull(
    nabla_0 = nabla_0,
    r_b_hull = r_b_hull,
    g_world = g_world) annotation(
    Placement(transformation(origin = {-144, -12}, extent = {{-28, -18}, {28, 18}})));
  Actuators.VBDVariableVolume vBDVariableVolume(
    r_vbd_vol = r_vbd_vol,
    VBD_reference_volume = VBD_reference_volume,
    VBD_max = VBD_max_volume,
    VBD_min = VBD_min_volume,
    VBD_tau = if enableActuatorDynamics then VBD_tau else 1e-6,
    g_world = g_world) annotation(
    Placement(transformation(origin = {-112, -112}, extent = {{-28, -28}, {28, 28}})));
  Hydrodynamics.HydrodynamicsQuasiStatic hydrodynamicsQuasiStatic(
    K_D0 = K_D0,
    K_D = K_D,
    K_beta = K_beta,
    K_L0 = K_L0,
    K_alpha = K_alpha,
    K_MR = K_MR,
    K_p_qua_stat = K_p_qua_stat,
    K_M0 = K_M0,
    K_M = K_M,
    K_q = K_q,
    K_MY = K_MY,
    K_r = K_r,
    K_Ome_1_1 = K_Ome_1_1,
    K_Ome_1_2 = K_Ome_1_2,
    K_Ome_2_1 = K_Ome_2_1,
    K_Ome_2_2 = K_Ome_2_2,
    K_Ome_3_1 = K_Ome_3_1,
    K_Ome_3_2 = K_Ome_3_2) annotation(
    Placement(transformation(origin = {-40, 130}, extent = {{-24, -24}, {24, 24}})));
  Actuators.ControlSurfaceWithSkegQuasiStatic rudder(
    K_D_delta = K_D_delta,
    K_SF_delta = K_SF_delta,
    K_MY_delta = K_MY_delta,
    rudder_pos_angle = rudder_pos_angle,
    rudder_neg_angle = rudder_neg_angle,
    rudder_tau = if enableActuatorDynamics then rudder_tau else 1e-6) annotation(
    Placement(transformation(origin = {-40, 48}, extent = {{-22, -22}, {22, 22}})));
  Utilities.Util_Reynolds util_Reynolds(L_vehicle = L_vehicle, mu_fluid = mu_fluid) annotation(
    Placement(transformation(origin = {150, 80}, extent = {{-10, -10}, {10, 10}})));
  Parts.HullAddedMassAnalytical hullAddedMassAnalytical(
    m_h = m_h,
    I_11 = I_11,
    I_22 = I_22,
    I_33 = I_33,
    r_g_hull = r_g_hull,
    X_udot = X_udot,
    Y_vdot = Y_vdot,
    Z_wdot = Z_wdot,
    K_pdot = K_pdot,
    M_qdot = M_qdot,
    N_rdot = N_rdot,
    enableAddedMassEffects = enableAddedMassEffects,
    Y_rdot = Y_rdot,
    Z_qdot = Z_qdot,
    M_wdot = M_wdot,
    N_vdot = N_vdot) annotation(
    Placement(transformation(origin = {160, -170}, extent = {{-34, -34}, {34, 34}})));
  Sensors.ExtractStates positionAttitudeAndDer(
    enableNoiseSensors = enableNoiseSensors,
    noise_gain = noise_gain,
    noise_std = noise_std,
    noise_sample_period = noise_sample_period) annotation(
    Placement(transformation(origin = {100, 210}, extent = {{-34, -34}, {34, 34}})));
  Modelica.Blocks.Math.UnitConversions.To_deg to_deg[3] annotation(
    Placement(transformation(origin = {190, 80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant in_m_r(k = 0) annotation(
    Placement(transformation(origin = {-210, -215}, extent = {{-10, -10}, {10, 10}})));
  Utilities.Util_NetMass util_NetMass(m_h = m_h, m_mov = m_mov, m_w = m_w, nabla_0 = nabla_0, rho_0 = rho_0)  annotation(
    Placement(transformation(origin = {30, 22}, extent = {{-15, -15}, {15, 15}})));
  Modelica.Blocks.Math.Add vBDVolumeOffset(k2 = -1) annotation(
    Placement(transformation(origin = {-36, -112}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant vBDReferenceVolume(k = VBD_reference_volume) annotation(
    Placement(transformation(origin = {-76, -142}, extent = {{-10, -10}, {10, 10}})));
  constant SI.Velocity velocityUnit = 1.0 "Unit velocity for dimensionless diagnostics";
  constant SI.Mass massUnit = 1.0 "Unit mass for dimensionless diagnostics";
equation
  unitTest[1] = signalBus.flowspeed/velocityUnit;
  unitTest[2] = signalBus.u_r/velocityUnit;
  unitTest[3] = signalBus.w_r/velocityUnit;
  unitTest[4] = signalBus.alpha;
  unitTest[5] = signalBus.EulerAngles[2];
  unitTest[6] = signalBus.xsi;
  unitTest[7] = util_NetMass.m_0/massUnit;

  connect(referenceFrames.frame_to_Ob, frame_Ob.frame_a);
  connect(world.frame_b, referenceFrames.frame_a);
  connect(movableMasses.frame_Ob, frame_Ob.frame_a);
  connect(buoyancyForceIncompressibleHull.frame_b, frame_Ob.frame_a);
  connect(vBDVariableVolume.frame_b, frame_Ob.frame_a);
  connect(hullAddedMassAnalytical.frame_Ob, frame_Ob.frame_a);
  connect(hydrodynamicsQuasiStatic.frame_Ob, frame_Ob.frame_a);
  connect(rudder.frame_Ob, frame_Ob.frame_a);
  connect(positionAttitudeAndDer.frame_Ob, frame_Ob.frame_a);
  connect(referenceFrames.frame_ned, positionAttitudeAndDer.frame_On);
  connect(referenceFrames.frame_ecef, positionAttitudeAndDer.frame_Oe);
  connect(referenceFrames.frame_eci, positionAttitudeAndDer.frame_Oi);
  connect(referenceFrames.frame_ned0, positionAttitudeAndDer.frame_On0);
  connect(positionAttitudeAndDer.frame_Om, hullAddedMassAnalytical.frame_Om);

  connect(positionAttitudeAndDer.positionBody_wrt_NED_in_NED, out_pos_body_wrt_NED_in_NED);
  connect(positionAttitudeAndDer.positionBody_wrt_NED0_in_NED0, out_pos_body_wrt_NED0_in_NED0);
  connect(positionAttitudeAndDer.velocityLinearBody_wrt_NED_in_B, out_lin_vel_body);
  connect(positionAttitudeAndDer.velocityAngularBody_wrt_NED_in_B, out_ang_vel_ome);
  connect(positionAttitudeAndDer.positionBody_wrt_ECI_in_ECI, out_pos_ECI);
  connect(positionAttitudeAndDer.roll_pitch_yaw, to_deg.u);
  connect(to_deg.y, out_angle_DCM);

  connect(in_m_r.y, movableMasses.in_pos_m_r);
  connect(in_mov_shift, movableMasses.in_pos_m_s);
  connect(in_VBD_volume, vBDVariableVolume.in_VBD_vol) annotation(
    Line(points = {{-220, -120}, {-154, -120}, {-154, -94}, {-143, -94}}, color = {0, 0, 127}));
  connect(vBDVariableVolume.out_VBD_vol, vBDVolumeOffset.u1) annotation(
    Line(points = {{-96, -141}, {-64, -141}, {-64, -106}, {-48, -106}}, color = {0, 0, 127}));
  connect(vBDReferenceVolume.y, vBDVolumeOffset.u2) annotation(
    Line(points = {{-65, -142}, {-58, -142}, {-58, -118}, {-48, -118}}, color = {0, 0, 127}));
  connect(vBDVolumeOffset.y, util_NetMass.in_VBD_vol) annotation(
    Line(points = {{-25, -112}, {0, -112}, {0, 18}, {20, 18}}, color = {0, 0, 127}));
  connect(in_rudder_deflection, rudder.in_rudder_deflection) annotation(
    Line(points = {{-220, -210}, {-86, -210}, {-86, 48}, {-62, 48}}, color = {0, 0, 127}));
  connect(env_current_speed, signalBus.velocityCurrentsInNED);
  connect(rhoVsDepth.rho, signalBus.rho);
  connect(signalBus.rho, util_Reynolds.rho);
  connect(signalBus.flowspeed, util_Reynolds.flowspeed);
  connect(rhoVsDepth.signalBus, positionAttitudeAndDer.signalBus);
  connect(buoyancyForceIncompressibleHull.signalBus, positionAttitudeAndDer.signalBus);
  connect(vBDVariableVolume.signalBus, signalBus);
  connect(positionAttitudeAndDer.signalBus, signalBus);
  connect(hullAddedMassAnalytical.signalBus, signalBus);
  connect(hydrodynamicsQuasiStatic.signalBus, signalBus);
  connect(rudder.signalBus, signalBus);
  connect(rhoVsDepth.rho, util_NetMass.rho) annotation(
    Line(points = {{-112, 86}, {-44, 86}, {-44, 28}, {20, 28}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 30, Interval = 0.1),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-240, -240}, {260, 260}})),
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-240, -240}, {240, 240}}), graphics = {
      Ellipse(extent = {{-170, 62}, {170, -62}}, lineColor = {0, 85, 170}, fillColor = {220, 238, 255}, fillPattern = FillPattern.Solid),
      Polygon(points = {{-40, 62}, {84, 132}, {54, 28}, {-40, 62}}, lineColor = {0, 85, 170}, fillColor = {170, 210, 240}, fillPattern = FillPattern.Solid),
      Polygon(points = {{-40, -62}, {84, -132}, {54, -28}, {-40, -62}}, lineColor = {0, 85, 170}, fillColor = {170, 210, 240}, fillPattern = FillPattern.Solid),
      Text(extent = {{-126, 26}, {126, -26}}, textString = "SLOCUM"),
      Text(extent = {{-232, 114}, {-118, 82}}, textString = "VBD vol"),
      Text(extent = {{-232, -10}, {-112, -42}}, textString = "mov shift"),
      Text(extent = {{-232, -90}, {-112, -122}}, textString = "rudder"),
      Text(extent = {{126, 114}, {232, 82}}, textString = "vel"),
      Text(extent = {{126, 36}, {232, 4}}, textString = "pos"),
      Text(extent = {{126, -44}, {232, -76}}, textString = "ECI")}));
end gliderSLOCUM;