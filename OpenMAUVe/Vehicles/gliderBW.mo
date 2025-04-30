within OpenMAUVe.Vehicles;
model gliderBW "BW glider model"

  import Modelica.Units.SI;
  import Modelica.Constants;

  parameter Boolean enableAddedMassEffects = true "set to false only in debugging mode";
  parameter Boolean adimensionalHydroParamUsed = false "Set to true if the adimensional hydrodynamic parameters are used";

  // Environmental parameters
  parameter SI.Density rho_0 = 1025 "Water density [kg/m3]" annotation (
    Dialog(tab = "Environment definition"));
  parameter Boolean enableRhoVsDepth = false "If true, a depth-dependent rho is used, otherwise rho_0 is used" annotation (
    Dialog(tab = "Environment definition"));
  final parameter SI.Acceleration g = Modelica.Constants.g_n "Gravity constant" annotation (
    Dialog(tab = "Environment definition"));
  parameter Modelica.Units.SI.Position planet_radius = 6378137.0 "Maximum distance of water from ECI, after which the buoyancy force stops applying" annotation (
    Dialog(tab = "Environment definition"));
  parameter SI.AngularVelocity earthAngularSpeed=7.2921150e-5 "Planet angular velocity" annotation (
    Dialog(tab = "Environment definition"));
  parameter SI.DynamicViscosity mu_fluid = 0.00189 "[Pa.s] seawater viscosity at 1028 kg/m3" annotation (
    Dialog(tab = "Environment definition"));
  // positions and distances
  parameter SI.Position r_g_hull[3] = {-0.0271, 0.0, 0.0199} "Hull COM position wrt to {O_b}" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_b_hull[3] = {0.0, 0.0, 0.0} "Hull COB position wrt to {O_b}" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_p_hull[3] = {0.0, 0.0, 0.0} "Hull COP position wrt to {O_b}" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_vbd_vol[3] = {0.0, 0.0, 0.0} "VBD position wrt to {O_b}" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Position r_vbd_mass_port[3] = {0.94, 0.0, 0.0} "Port VBD position wrt to {O_b}" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Position r_vbd_mass_starboard[3] = {0.94, 0.0, 0.0} "Starboard VBD position wrt to {O_b}" annotation (
    Dialog(tab = "Actuators"));
    
  parameter SI.Position r_mov[3] = {0.09, 0.0, 0.016} "Position of movable mass wrt to {O_b}" annotation (
    Dialog(tab = "Actuators"));

  parameter SI.Position r_w[3] = {0.0, 0.0, 0.0} "Position of point mass wrt to {O_b}" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Length L_vehicle = 2.17 "vehicle length excluding tail if present" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Area A_vehicle = 0.038 "vehicle frontal area" annotation (
    Dialog(tab = "Vehicle geometry"));

  // masses
  parameter SI.Mass m_h = 54.5 "Mass of rigid body (hull)" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Mass m_mov = 16.4 "Movable mass" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Mass m_w = 0 "Point mass" annotation (
    Dialog(tab = "Vehicle geometry"));
  // inertias
  parameter SI.Inertia I_11 = 0.555 "(1,1) element of inertia tensor of hull" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_22 = 18.546 "(2,2) element of inertia tensor of hull" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_33 = 18.471 "(3,3) element of inertia tensor of hull" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_21 = 0.0 "(2,1) element of inertia tensor of hull (equal to element 1,2)" annotation (
    Dialog(tab = "Vehicle geometry"));    
  parameter SI.Inertia I_31 = 0.125 "(3,1) element of inertia tensor of hull (equal to element 1,3)" annotation (
    Dialog(tab = "Vehicle geometry")); 
  parameter SI.Inertia I_32 = 0.0 "(3,2) element of inertia tensor of hull (equal to element 2,3)" annotation (
    Dialog(tab = "Vehicle geometry")); 
     
    
  parameter SI.Inertia I_mov_11 = 0.03 "(1,1) element of inertia tensor of movable mass" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Inertia I_mov_22 = 0.17 "(2,2) element of inertia tensor of movable mass" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Inertia I_mov_33 = 0.18 "(3,3) element of inertia tensor of movable mass" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Inertia I_VBD_mass_11 = 0.00 "(1,1) element of inertia tensor of VBD of variable mass" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Inertia I_VBD_mass_22 = 0.00 "(2,2) element of inertia tensor of VBD of variable mass" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Inertia I_VBD_mass_33 = 0.00 "(3,3) element of inertia tensor of VBD of variable mass" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Inertia I_w_11 = 0.00 "(1,1) element of inertia tensor of the point mass" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_w_22 = 0.00 "(2,2) element of inertia tensor of the point mass" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_w_33 = 0.00 "(3,3) element of inertia tensor of the point mass" annotation (
    Dialog(tab = "Vehicle geometry"));
  // Volume
  parameter SI.Volume nabla_0 = 60.7*10^(-3) "Hull volume" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter Real kappa_h(unit="m2") = 2.7172*10^(-7) "Hull compressibility coefficient" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter Real VBD_reference_mass = 0.0 "VBD initial mass" annotation (
    Dialog(tab = "Actuators"));
  parameter Real VBD_max = 7/Modelica.Constants.g_n "VBD maximum mass (including reference mass)" annotation (
    Dialog(tab = "Actuators"));
  parameter Real VBD_min = -7/Modelica.Constants.g_n "VBD minimum mass (including reference mass)" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Time VBD_tau = 2.5 "VBD time constant [s]" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.ThermodynamicTemperature T_0 = 288.15 "Reference temperature" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter Real kappa = 5.529*10^(-6) "Overall compressibility of the combined hull, foam, foam-filled fairing elements and sensors" annotation (
    Dialog(tab = "Vehicle geometry"));
  parameter Real tau = 7.05*10^(-5) "Volumetric thermal expansion" annotation (
    Dialog(tab = "Vehicle geometry"));
  // Additional parameters for actuators
  parameter SI.Position m_s_pos_sat = 0.05 "Shifting mass max forward position wrt to reference position" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Position m_s_neg_sat = -0.05 "Shifting mass min backwards position wrt to reference position" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Angle m_r_pos_angle = Modelica.Constants.pi/2 "Rolling mass max angle wrt to x_b (positive rotation)" annotation (
    Dialog(tab = "Actuators"));
  parameter SI.Angle m_r_neg_angle = -Modelica.Constants.pi/2 "Rolling mass min angle wrt to x_b (negative rotation)" annotation (
    Dialog(tab = "Actuators"));

  parameter SI.Position r_thruster[3] = {-1.0, 0.0, 0.0} "Position of thruster wrt to {O_b}" annotation (Dialog(tab = "Actuators"));
  parameter SI.Angle orientation_thruster[3] = {0, 0, 0.0} "Orientation of thruster wrt {O_b}" annotation (Dialog(tab = "Actuators"));
  parameter SI.Mass m_th = 0.0 "Mass of the thruster (in water!)" annotation (Dialog(tab = "Actuators"));
  parameter SI.Inertia I_th_11 = 0.00 "(1,1) element of inertia tensor of the thruster" annotation (Dialog(tab = "Actuators"));
  parameter SI.Inertia I_th_22 = 0.00 "(2,2) element of inertia tensor of the thruster" annotation (Dialog(tab = "Actuators"));
  parameter SI.Inertia I_th_33 = 0.00 "(3,3) element of inertia tensor of the thruster" annotation (Dialog(tab = "Actuators"));
  parameter SI.Force thruster_max_force = 5000.0 "Thruster maximum force" annotation (Dialog(tab = "Actuators"));
  parameter SI.Force thruster_min_force = -5000.0 "Thruster min force" annotation (Dialog(tab = "Actuators"));
  parameter SI.Force thruster_deadband_neg = 0.0 "Thruster deadband on force (negative value)" annotation (Dialog(tab = "Actuators"));
  parameter SI.Force thruster_deadband_pos = 0.0 "Thruster deadband on force (positive value)" annotation (Dialog(tab = "Actuators"));
  parameter Real thruster_max_rot_rate = 25.0 "Thruster max rotational speed (rps)" annotation (Dialog(tab = "Actuators"));
    parameter Real K_T = 0.34 "Thruster force characteristic coefficient" annotation (Dialog(tab = "Actuators"));
  parameter Real K_Q = 0.067 "Thruster rotation induced moment characteristic coefficient" annotation (Dialog(tab = "Actuators"));
  parameter SI.Diameter D_p = 0.12 "Propeller diameter" annotation(Dialog(tab = "Actuators"));

  // Added mass
  parameter Real X_udot(unit = "kg") = 0.0013 "(1,1) element of added mass matrix (convention: POSITIVE)" annotation (
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Y_vdot(unit = "kg") = 0.0593 "(2,2) element of added mass matrix" annotation (
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Z_wdot(unit = "kg") = 0.0781 "(3,3) element of added mass matrix" annotation (
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_pdot(unit = "kg.m2") = 0.0 "(4,4) element of added mass matrix" annotation (
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real M_qdot(unit = "kg.m2") = 0.0231 "(5,5) element of added mass matrix" annotation (
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real N_rdot(unit = "kg.m2") = 0.0214 "(6,6) element of added mass matrix" annotation (
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Y_rdot(unit = "kg.m") = -0.019 "(2,6) element of added mass matrix" annotation (
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real Z_qdot(unit = "kg.m") = 0.0121 "(3,5) element of added mass matrix" annotation (
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real M_wdot(unit = "kg.m") = 0.0121 "(5,3) element of added mass matrix" annotation (
    Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real N_vdot(unit = "kg.m") = -0.019 "(6,2) element of added mass matrix" annotation (Dialog(tab = "Vehicle hydrodynamics"));


  parameter Real K_D0(unit = "kg/m") = 0.0075 "drag coefficient zero order" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_D(unit = "kg/(m.rad2)") = 0.351 "drag coefficient" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_beta(unit = "kg/(m.rad)") = -0.0982 "side force coefficient" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_L0(unit = "kg/m") = -4.9*10^(-4) "lift force coefficient" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_alpha(unit = "kg/(m.rad)") = 0.3742 "lift coefficient  (related to angle of attack) - at time denoted as K_L." annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_MR(unit = "kg/rad") = -0.0547 "viscous moment coefficient around x-axis (related to angle of attack)" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_p_qua_stat(unit = "kg.s/rad") = -0.0186 "viscous moment coefficient around x-axis (related to angle of attack)" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_M0(unit = "kg") = 2.94*10^(-4) "viscous moment coefficient around y-axis" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_M(unit = "kg/rad") = -0.0598 "viscous moment coefficient around y-axis" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_q(unit = "kg.s/rad2") = -0.1929 "viscous moment coefficient around x-axis (related to angle of attack)" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_MY(unit = "kg/rad") = 0.032 "viscous moment coefficient around x-axis (related to angle of attack)" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_r(unit = "kg.s/rad2") = -0.3652 "viscous moment coefficient around x-axis (related to angle of attack)" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_1_1(unit = "kg.m2/(s.rad)") = 0.0 "rotational (linear) damping around x-axis" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_1_2(unit = "kg.m2/rad2") = 0.0 "rotational (quadratic) damping around x-axis" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_2_1(unit = "kg.m2/(s.rad)") = 0.0 "rotational (linear) damping around y-axis" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_2_2(unit = "kg.m2/rad2") = 0.0 "rotational (quadratic) damping around y-axis" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_3_1(unit = "kg.m2/(s.rad)") = 0.0 "rotational (linear) damping around z-axis" annotation (Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_Ome_3_2(unit = "kg.m2/rad2") = 0.0 "rotational (quadratic) damping around z-axis" annotation (Dialog(tab = "Vehicle hydrodynamics"));


  // Simulation initialisation
  parameter Modelica.Units.SI.Position r_0[3] = {0, 0, 0} "Initial position vector from NED frame to origin of hull" annotation (
    Dialog(tab = "Init Kinematics"));
  parameter Modelica.Units.SI.Velocity v_0[3] = {0.00001, 0, 0.00001} "Initial absolute velocity of frame_a, resolved in world frame (= der(r_0))" annotation (
    Dialog(tab = "Init Kinematics"));
  parameter Modelica.Units.SI.Angle euler_0[3] = {0, 0, 0} "Initial attitude angles for hull wrt to NED around 'sequence_start' axes into frame_b" annotation (
    Dialog(tab = "Init Kinematics"));
  parameter Modelica.Units.SI.AngularVelocity w_0[3] = {0, 0, 0} "Initial or guess values of angular velocity of frame_a resolved in world frame" annotation (
    Dialog(tab = "Init Kinematics"));

  parameter SI.Angle init_latitude = Modelica.Units.Conversions.from_deg(18.4042) "Initial NED latitude (phi)" annotation (
    Dialog(tab = "Init Kinematics"));
  parameter SI.Angle init_longitude = Modelica.Units.Conversions.from_deg(111.0703) "Initial NED longitude (lambda)" annotation (
    Dialog(tab = "Init Kinematics"));
  parameter SI.Position init_altitude = 0.0 "Geodetic height: height above the spheroid above the normal (h)" annotation (
    Dialog(tab = "Init Kinematics"));
  // #645 page 26
  parameter SI.Position a_earth = 6378137.0 "Earth's semimajor axis" annotation (
    Dialog(tab = "Init Kinematics"));
  // #645 page 25
  parameter Real e_earth = 0.0818191908426 "Earth's eccentricity" annotation (
    Dialog(tab = "Init Kinematics"));
  // #645 page 25
  parameter Real scaleDist = 1.0 "Debug param: leave it as = 1" annotation (
    Dialog(tab = "Init Kinematics"));
  Modelica.Blocks.Interfaces.RealOutput out_lin_vel_body[3] annotation (
    Placement(transformation(origin = {241, 215}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {294, 137}, extent = {{-10, -10}, {10, 10}})));
  //parameter Boolean enableAddedMass = true "Enables/disables the added mass contribution";
  //parameter Real enableBuoyancy = 1.0 "Enables/disables buoyancy effects";
  //parameter Boolean enableHydrodynamic = true "Enables/disables hydrodynamic forces/torques";
  //parameter Boolean enableActuators = true "Enables/disables the actuators";

  parameter Boolean show_frames_vehicles = false "Set to true for debugging" annotation (
    Dialog(tab = "Visual settings"));

  Modelica.Blocks.Interfaces.RealOutput out_ang_vel_ome[3] annotation (
    Placement(transformation(origin = {241, 197}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {295, 83}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_angle_DCM[3] annotation (
    Placement(transformation(origin = {242, 178}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {298, -102}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_pos_body_wrt_NED_in_NED[3] annotation (
    Placement(transformation(origin = {240.5, 232.5}, extent = {{-10.5, -10.5}, {10.5, 10.5}}), iconTransformation(origin = {296, 6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedFrame frame_Ob(length = 0.2, color_x = {200, 0, 0}, color_y = {200, 0, 0}, color_z = {200, 0, 0}, showLabels = true, animation = true, specularCoefficient = 0.1) annotation (
    Placement(transformation(origin = {85, -63}, extent = {{-10, -10}, {10, 10}})));
  Kinematics.ReferenceFrames referenceFrames(euler_0 = euler_0, w_0 = w_0, r_0 = r_0, v_0 = v_0, init_latitude = init_latitude, init_longitude = init_longitude, init_altitude = init_altitude, a_earth = a_earth, e_earth = e_earth, scaleDist = scaleDist, earthAngularSpeed = earthAngularSpeed) annotation (
    Placement(transformation(origin = {-46.5, 228}, extent = {{-33.5, -25}, {33.5, 25}})));
  inner Kinematics.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, animateGravity = false, animateGround = false, enableAnimation = true) annotation (
    Placement(transformation(origin = {-121, 228}, extent = {{-10, -10}, {10, 10}})));
  Hydrostatics.rhoVsDepth rhoVsDepth(rho_0 = rho_0, enableRhoVsDepth = enableRhoVsDepth) annotation (
    Placement(transformation(origin = {-151, 46}, extent = {{-19, -19}, {19, 19}})));
  Modelica.Blocks.Interfaces.RealInput in_VBD_port annotation (
    Placement(transformation(origin = {-213.5, -97.5}, extent = {{-13.5, -13.5}, {13.5, 13.5}}), iconTransformation(origin = {-311, 179}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput env_current_speed[3] annotation (
    Placement(transformation(origin = {-198.5, 174.5}, extent = {{-14.5, -14.5}, {14.5, 14.5}}), iconTransformation(origin = {-10, 269}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Modelica.Blocks.Interfaces.RealInput in_mov_shift annotation (
    Placement(transformation(origin = {-210.5, -183.5}, extent = {{-13.5, -13.5}, {13.5, 13.5}}), iconTransformation(origin = {-301, 27}, extent = {{-20, -20}, {20, 20}})));
  Utilities.Util_Reynolds util_Reynolds(L_vehicle = L_vehicle, mu_fluid = mu_fluid) annotation (
    Placement(transformation(origin = {161, 95}, extent = {{-10, -10}, {10, 10}})));
  Actuators.VBDVariableMass vBDVariableMassPort( VBD_max = VBD_max, VBD_min = VBD_min, I_VBD_mass_11 = I_VBD_mass_11, I_VBD_mass_22 = I_VBD_mass_22, I_VBD_mass_33 = I_VBD_mass_33, VBD_reference_mass = VBD_reference_mass) annotation (
    Placement(transformation(origin = {-105, -97}, extent = {{-29, -28}, {29, 28}})));
  Utilities.Util_NetMass_VBDMass util_NetMass_VBDMass(m_h = m_h, m_mov = m_mov, m_w = m_w, nabla_0 = nabla_0, m_th = 0.0) annotation (
    Placement(transformation(origin = {-43, 56}, extent = {{-10, -10}, {10, 10}})));

  Parts.HullAddedMassAnalytical hullAddedMassAnalytical(m_h = m_h, I_11 = I_11, I_22 = I_22, I_33 = I_33, r_g_hull = r_g_hull, X_udot = X_udot, Y_vdot = Y_vdot, Z_wdot = Z_wdot, K_pdot = K_pdot, M_qdot = M_qdot, N_rdot = N_rdot, enableAddedMassEffects = enableAddedMassEffects, show_frames_vehicles = show_frames_vehicles, Y_rdot = Y_rdot, Z_qdot = Z_qdot, M_wdot = M_wdot, N_vdot = N_vdot, I_21 = I_21, I_31 = I_31, I_32 = I_32, adimensionalHydroParamUsed = adimensionalHydroParamUsed) annotation (
    Placement(transformation(origin = {195, -177}, extent = {{-39, -39}, {39, 39}})));
  Sensors.ExtractStates positionAttitudeAndDer annotation (Placement(
        transformation(origin={113,216}, extent={{-39,-39},{39,39}})));
  Modelica.Blocks.Math.UnitConversions.To_deg to_deg[3] annotation (
    Placement(transformation(origin = {209, 178}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_pos_ECI[3] annotation (
    Placement(transformation(origin = {239.5, 252.5}, extent = {{-10.5, -10.5}, {10.5, 10.5}}), iconTransformation(origin = {297, -46}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput unitTest[11] annotation (
    Placement(transformation(origin = {175, 54}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-76, -139}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Sensors.SignalBus signalBus annotation(
    Placement(transformation(origin = {53.5, 103.5}, extent = {{-28.5, -23.5}, {28.5, 23.5}}), iconTransformation(origin = {79.5, -131.5}, extent = {{-24.5, -24.5}, {24.5, 24.5}})));
  Modelica.Blocks.Interfaces.RealInput in_mov_roll annotation(
    Placement(transformation(origin = {-209.5, -229.5}, extent = {{-13.5, -13.5}, {13.5, 13.5}}), iconTransformation(origin = {-302, -69}, extent = {{-20, -20}, {20, 20}})));
  Hydrostatics.BuoyancyForceIncompressibleHull buoyancyForceIncompressibleHull(nabla_0 = nabla_0, r_b_hull = r_b_hull) annotation(
    Placement(transformation(origin = {-177.5, -22}, extent = {{-33.5, -23}, {33.5, 23}})));
  Actuators.MovableMasses movableMasses(m_mov = m_mov, r_mov = r_mov, I_mov_11 = I_mov_11, I_mov_22 = I_mov_22, I_mov_33 = I_mov_33, m_s_pos_sat = m_s_pos_sat, m_s_neg_sat = m_s_neg_sat, m_r_pos_angle = m_r_pos_angle, m_r_neg_angle = m_r_neg_angle, show_frames_vehicles = show_frames_vehicles)  annotation(
    Placement(transformation(origin = {-100, -206}, extent = {{-59, -36}, {59, 36}})));
  Modelica.Blocks.Interfaces.RealInput in_propeller_rotational_speed annotation(
    Placement(transformation(origin = {-206.5, -278.5}, extent = {{-13.5, -13.5}, {13.5, 13.5}}), iconTransformation(origin = {-301, -169}, extent = {{-20, -20}, {20, 20}})));
  Actuators.ThrusterNoDynamics thrusterNoDynamics(thruster_max_rot_rate = thruster_max_rot_rate, orientation_thruster = orientation_thruster, r_thruster = r_thruster, m_th = m_th, I_th_11 = I_th_11, I_th_22 = I_th_22, I_th_33 = I_th_33, thruster_max_force = thruster_max_force, thruster_min_force = thruster_min_force, thruster_deadband_neg = thruster_deadband_neg, thruster_deadband_pos = thruster_deadband_pos, D_p = D_p, K_T = K_T, K_Q = K_Q)  annotation(
    Placement(transformation(origin = {-106, -278}, extent = {{-10, -10}, {10, 10}})));
  Hydrodynamics.HydrodynamicsQuasiStatic hydrodynamicsQuasiStatic(adimensionalHydroParamUsed = adimensionalHydroParamUsed, K_D0 = K_D0, K_D = K_D, K_beta = K_beta, K_L0 = K_L0, K_alpha = K_alpha, K_MR = K_MR, K_p_qua_stat = K_p_qua_stat, K_M0 = K_M0, K_M = K_M, K_q = K_q, K_MY = K_MY, K_r = K_r, K_Ome_1_1 = K_Ome_1_1, K_Ome_1_2 = K_Ome_1_2, K_Ome_2_1 = K_Ome_2_1, K_Ome_2_2 = K_Ome_2_2, K_Ome_3_1 = K_Ome_3_1, K_Ome_3_2 = K_Ome_3_2)  annotation(
    Placement(transformation(origin = {-166, 131.5}, extent = {{-29, -24.5}, {29, 24.5}})));
  Modelica.Blocks.Interfaces.RealInput in_VBD_starboard annotation(
    Placement(transformation(origin = {-213.5, -138.5}, extent = {{-13.5, -13.5}, {13.5, 13.5}}), iconTransformation(origin = {-309, 107}, extent = {{-20, -20}, {20, 20}})));
  Actuators.VBDVariableMass vBDVariableMassStarboard(I_VBD_mass_11 = I_VBD_mass_11, I_VBD_mass_22 = I_VBD_mass_22, I_VBD_mass_33 = I_VBD_mass_33, VBD_max = VBD_max, VBD_min = VBD_min, VBD_reference_mass = VBD_reference_mass) annotation(
    Placement(transformation(origin = {-104, -149}, extent = {{-29, -28}, {29, 28}})));
equation
  connect(referenceFrames.frame_to_Ob, frame_Ob.frame_a) annotation(
    Line(points = {{-47.17, 202.5}, {-47.17, 168}, {12, 168}, {12, -63}, {75, -63}}, color = {95, 95, 95}));
  connect(world.frame_b, referenceFrames.frame_a) annotation(
    Line(points = {{-111, 228}, {-111, 228.5}, {-81.34, 228.5}}, color = {95, 95, 95}));
  connect(util_NetMass_VBDMass.rho, rhoVsDepth.rho) annotation(
    Line(points = {{-53.2, 61.4}, {-99, 61.4}, {-99, 62}, {-132, 62}}, color = {0, 0, 127}));
  connect(vBDVariableMassPort.frame_Ob, frame_Ob.frame_a) annotation(
    Line(points = {{-85, -97}, {-54, -97}, {-54, -63}, {75, -63}}, color = {95, 95, 95}));
  connect(in_VBD_port, vBDVariableMassPort.in_VBD_mass) annotation(
    Line(points = {{-213.5, -97.5}, {-177.25, -97.5}, {-177.25, -97}, {-127, -97}}, color = {0, 0, 127}));
  connect(in_VBD_port, util_NetMass_VBDMass.in_VBD_mass) annotation(
    Line(points = {{-213.5, -97.5}, {-166, -97.5}, {-166, -64}, {-72, -64}, {-72, 51.4}, {-53.2, 51.4}}, color = {0, 0, 127}));
  connect(hullAddedMassAnalytical.frame_Ob, frame_Ob.frame_a) annotation(
    Line(points = {{161, -197}, {26, -197}, {26, -63}, {75, -63}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, positionAttitudeAndDer.frame_On) annotation(
    Line(points = {{-14.34, 218.5}, {33, 218.5}, {33, 222}, {78, 222}}, color = {95, 95, 95}));
  connect(to_deg.y, out_angle_DCM) annotation(
    Line(points = {{220, 178}, {242, 178}}, color = {0, 0, 127}, thickness = 0.5));
  connect(referenceFrames.frame_ecef, positionAttitudeAndDer.frame_Oe) annotation(
    Line(points = {{-14.34, 234.5}, {-14.34, 236}, {78, 236}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, positionAttitudeAndDer.frame_Oi) annotation(
    Line(points = {{-14.34, 250.5}, {71, 250.5}, {71, 250}, {78, 250}}, color = {95, 95, 95}));
  connect(positionAttitudeAndDer.positionBody_wrt_NED_in_NED, out_pos_body_wrt_NED_in_NED) annotation(
    Line(points = {{154, 232}, {154, 232.5}, {240.5, 232.5}}, color = {0, 0, 127}, thickness = 0.5));
  connect(positionAttitudeAndDer.velocityLinearBody_wrt_NED_in_B, out_lin_vel_body) annotation(
    Line(points = {{154, 220}, {181, 220}, {181, 215}, {241, 215}}, color = {0, 0, 127}, thickness = 0.5));
  connect(positionAttitudeAndDer.velocityAngularBody_wrt_NED_in_B, out_ang_vel_ome) annotation(
    Line(points = {{153, 213}, {181, 213}, {181, 197}, {241, 197}}, color = {0, 0, 127}, thickness = 0.5));
  connect(positionAttitudeAndDer.positionBody_wrt_ECI_in_ECI, out_pos_ECI) annotation(
    Line(points = {{153, 244}, {153, 252.5}, {239.5, 252.5}}, color = {0, 0, 127}, thickness = 0.5));
  connect(referenceFrames.frame_ned0, positionAttitudeAndDer.frame_On0) annotation(
    Line(points = {{-14.34, 202.5}, {21, 202.5}, {21, 207}, {78, 207}}, color = {95, 95, 95}));
  connect(rhoVsDepth.signalBus, positionAttitudeAndDer.signalBus) annotation(
    Line(points = {{-150, 31}, {-150, 14}, {113, 14}, {113, 188}}, color = {255, 204, 51}, thickness = 0.5));
  connect(positionAttitudeAndDer.signalBus, signalBus) annotation(
    Line(points = {{113, 188}, {113, 103.5}, {53.5, 103.5}}, color = {255, 204, 51}, thickness = 0.5));
  connect(positionAttitudeAndDer.roll_pitch_yaw, to_deg.u) annotation(
    Line(points = {{153, 207}, {164, 207}, {164, 178}, {197, 178}}, color = {0, 0, 127}, thickness = 0.5));
  connect(positionAttitudeAndDer.frame_Ob, frame_Ob.frame_a) annotation(
    Line(points = {{78, 194}, {37, 194}, {37, -63}, {75, -63}}, color = {95, 95, 95}));
  connect(env_current_speed, signalBus.velocityCurrentsInB) annotation(
    Line(points = {{-198.5, 174.5}, {-125, 174.5}, {-125, 174}, {54, 174}, {54, 104}}, color = {0, 0, 127}, thickness = 0.5));
  connect(rhoVsDepth.rho, signalBus.rho) annotation(
    Line(points = {{-132, 62}, {-91, 62}, {-91, 104}, {54, 104}}, color = {0, 0, 127}));
  connect(signalBus.flowspeed, unitTest[1]) annotation(
    Line(points = {{54, 104}, {54, 54}, {175, 54}}, thickness = 0.5));
  connect(signalBus.u_r, unitTest[2]) annotation(
    Line(points = {{54, 104}, {54, 54}, {175, 54}}, thickness = 0.5));
  connect(signalBus.w_r, unitTest[3]) annotation(
    Line(points = {{54, 104}, {54, 54}, {175, 54}}, thickness = 0.5));
  connect(signalBus.alpha, unitTest[4]) annotation(
    Line(points = {{54, 104}, {54, 54}, {175, 54}}, thickness = 0.5));
  connect(signalBus.EulerAngles[2], unitTest[5]) annotation(
    Line(points = {{54, 104}, {54, 54}, {175, 54}}, thickness = 0.5));
  connect(signalBus.xsi, unitTest[6]) annotation(
    Line(points = {{54, 104}, {54, 54}, {175, 54}}, thickness = 0.5));
  connect(util_NetMass_VBDMass.m_0, unitTest[7]) annotation(
    Line(points = {{-33, 56}, {48, 56}, {48, 54}, {175, 54}}, color = {0, 0, 127}));
  connect(signalBus.rho, util_Reynolds.rho) annotation(
    Line(points = {{54, 104}, {141, 104}, {141, 100}, {152, 100}}, color = {0, 0, 127}));
  connect(signalBus.flowspeed, util_Reynolds.flowspeed) annotation(
    Line(points = {{54, 104}, {141, 104}, {141, 91}, {152, 91}}, color = {0, 0, 127}));
  connect(positionAttitudeAndDer.frame_Om, hullAddedMassAnalytical.frame_Om) annotation(
    Line(points = {{78, 181}, {64, 181}, {64, 128}, {132, 128}, {132, -164}, {161, -164}}, color = {95, 95, 95}));
  connect(hullAddedMassAnalytical.signalBus, signalBus) annotation(
    Line(points = {{197, -215}, {197, -243}, {110, -243}, {110, 14}, {54, 14}, {54, 104}}, color = {255, 204, 51}, thickness = 0.5));
  connect(signalBus.EulerAngles[1], unitTest[9]) annotation(
    Line(points = {{54, 104}, {54, 54}, {175, 54}}, thickness = 0.5));
  connect(signalBus.velocityAngularOfBodyWrtECIInBody[3], unitTest[10]) annotation(
    Line(points = {{54, 104}, {54, 54}, {175, 54}}, thickness = 0.5));
  connect(signalBus.beta, unitTest[11]) annotation(
    Line(points = {{54, 104}, {54, 54}, {175, 54}}, thickness = 0.5));
  connect(buoyancyForceIncompressibleHull.frame_b, frame_Ob.frame_a) annotation(
    Line(points = {{-145, -22}, {-54, -22}, {-54, -63}, {75, -63}}, color = {95, 95, 95}));
  connect(buoyancyForceIncompressibleHull.signalBus, signalBus) annotation(
    Line(points = {{-177, -45}, {-177, -58}, {54, -58}, {54, 104}}, color = {255, 204, 51}, thickness = 0.5));
  connect(in_mov_shift, movableMasses.in_pos_m_s) annotation(
    Line(points = {{-210.5, -183.5}, {-178.5, -183.5}, {-178.5, -196.5}, {-135.5, -196.5}}, color = {0, 0, 127}));
  connect(in_mov_roll, movableMasses.in_pos_m_r) annotation(
    Line(points = {{-209.5, -229.5}, {-169.5, -229.5}, {-169.5, -218.5}, {-135.5, -218.5}}, color = {0, 0, 127}));
  connect(movableMasses.frame_Ob, frame_Ob.frame_a) annotation(
    Line(points = {{-68, -206}, {-18, -206}, {-18, -63}, {75, -63}}, color = {95, 95, 95}));
  connect(movableMasses.distance_movable_mass_from_Ob, unitTest[8]) annotation(
    Line(points = {{-100, -225}, {-99.75, -225}, {-99.75, -227}, {-99.5, -227}, {-99.5, -238}, {-7, -238}, {-7, 54}, {175, 54}}, color = {0, 0, 127}));
  connect(in_propeller_rotational_speed, thrusterNoDynamics.prop_rot_rate) annotation(
    Line(points = {{-206.5, -278.5}, {-125.5, -278.5}}, color = {0, 0, 127}));
  connect(thrusterNoDynamics.frame_Ob, frame_Ob.frame_a) annotation(
    Line(points = {{-86, -278}, {8, -278}, {8, -63}, {75, -63}}, color = {95, 95, 95}));
  connect(thrusterNoDynamics.signalBus, signalBus) annotation(
    Line(points = {{-105, -297}, {20, -297}, {20, -13}, {54, -13}, {54, 104}}, color = {255, 204, 51}, thickness = 0.5));
  connect(hydrodynamicsQuasiStatic.frame_Ob, frame_Ob.frame_a) annotation(
    Line(points = {{-138, 131}, {-13, 131}, {-13, -63}, {75, -63}}, color = {95, 95, 95}));
  connect(hydrodynamicsQuasiStatic.signalBus, signalBus) annotation(
    Line(points = {{-166, 113}, {-166, 89}, {54, 89}, {54, 104}}, color = {255, 204, 51}, thickness = 0.5));
  connect(in_VBD_starboard, vBDVariableMassStarboard.in_VBD_mass) annotation(
    Line(points = {{-213, -138}, {-178, -138}, {-178, -149}, {-126, -149}}, color = {0, 0, 127}));
  connect(vBDVariableMassStarboard.frame_Ob, frame_Ob.frame_a) annotation(
    Line(points = {{-84, -149}, {-39, -149}, {-39, -63}, {75, -63}}, color = {95, 95, 95}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-300, -300}, {300, 300}}, grid = {1, 1}), graphics={  Text(origin = {211, 148}, extent = {{-7, 5}, {66, -29}}, textString = "lin_vel"), Text(origin = {210, 91}, extent = {{-7, 4}, {68, -23}}, textString = "ang_vel"), Text(origin = {5, 178}, extent = {{-63, 32}, {63, -32}}, textString = "UCL BWG"), Text(origin = {239, -95}, extent = {{-6, 3}, {61, -19}}, textString = "EA"), Text(origin = {215, 16}, extent = {{-6, 4}, {64, -25}}, textString = "pos_NED"), Text(origin = {-352, 234}, extent = {{-9, 5}, {94, -39}}, textString = "in VBD port"), Text(origin = {-351, 79}, extent = {{-10, 6}, {97, -43}}, textString = "in mov shift"), Text(origin = {24, 271}, extent = {{-7, 4}, {69, -30}}, textString = "currents_speed"),Text(origin={214,-34},extent={{-7,3},{65,-23}},textString="pos_ECI"),Text(origin={-113,-101},extent={{-9,4},{89,-27}},textString="groundtruth"), Text(origin = {-346, -17}, extent = {{-10, 6}, {97, -43}}, textString = "in mov roll"),
                                                                                                                                                                                                        Text(origin = {-324, -104}, extent = {{-17, 10}, {163, -72}}, textString = "in propeller rot speed"), Text(origin = {-350, 158}, extent = {{-12, 5}, {121, -40}}, textString = "in VBD starboard")}),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-300, -300}, {300, 300}}, grid = {1, 1}), graphics={  Text(origin = {42.5, -73}, extent = {{-16, 7}, {17, -7}}, textString = "{O_b}")}),
    experiment(StopTime = 30, Interval = 0.1));
end gliderBW;