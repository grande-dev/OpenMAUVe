within OpenMAUVe.UnitTesting.TestHydrodynamics;
model testHydrodynamics

  import SI = Modelica.Units.SI;

  parameter Modelica.Units.SI.Position planet_radius = 6378137.0 "Maximum distance of water from ECI, after which the buoyancy force stops applying" annotation(Dialog(tab = "Environment definition"));

  parameter SI.Mass m_h = 5.0 "Mass of rigid body (hull)" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_11 = 3.0 "(1,1) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_22 = 3.0 "(2,2) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_33 = 3.0 "(3,3) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_g_hull[3] = {0.0, 0.0, 0.0} "Hull COM position wrt to {O_b}" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Volume nabla_0 = 0.005 "Hull volume";

  parameter SI.Angle init_latitude = -0.557272337881529 "Initial NED latitude (phi)" annotation(Dialog(tab = "Init Kinematics"));
  parameter SI.Angle init_longitude = 2.020011979653293 "Initial NED longitude (lambda)" annotation(Dialog(tab = "Init Kinematics"));
  parameter SI.Position init_altitude = 0 "Geodetic height: height above the spheroid above the normal (h)" annotation(Dialog(tab = "Init Kinematics")); // #645 page 26
  parameter SI.Position a_earth = 6378137.0 "Earth's semimajor axis" annotation(Dialog(tab = "Init Kinematics")); // #645 page 25
  parameter Real e_earth = 0.0818191908426 "Earth's eccentricity" annotation(Dialog(tab = "Init Kinematics"));  // #645 page 25
  parameter Real scaleDist = 10^(-6) "Debug param: leave it as = 1" annotation(Dialog(tab = "Init Kinematics"));

  parameter SI.Density rho_0 = 1000 "Water density [kg/m3]";

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

  parameter Real K_D0(unit = "kg/m") = 18.0 "drag coefficient zero order" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_D(unit = "kg/(m.rad2)") = 109.0 "drag coefficient" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_beta(unit = "kg/(m.rad)") = 306.0 "side force coefficient" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_L0(unit = "kg/m") = 0.0 "lift force coefficient" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_alpha(unit = "kg/(m.rad)") = 306.0 "lift coefficient  (related to angle of attack)" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_MR(unit = "kg/rad") = 0.0 "viscous moment coefficient around x-axis (related to angle of attack)" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_p_qua_stat(unit = "kg.s/rad") = 0.0 "CAVEAT: quasi-static K_p! viscous moment coefficient around x-axis (related to angle of attack)" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_M0(unit = "kg") = 0.0 "viscous moment coefficient around y-axis" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_M(unit = "kg/rad") = -36.5 "viscous moment coefficient around y-axis" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_q(unit = "kg.s/rad2") = 0.0 "viscous moment coefficient around x-axis (related to angle of attack)" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_MY(unit = "kg/rad") = 0.0 "viscous moment coefficient around x-axis (related to angle of attack)" annotation(Dialog(tab = "Vehicle hydrodynamics"));
  parameter Real K_r(unit = "kg.s/rad2") = 0.0 "viscous moment coefficient around x-axis (related to angle of attack)" annotation(Dialog(tab = "Vehicle hydrodynamics"));

  Kinematics.ReferenceFrames referenceFrames(init_altitude = 0, init_latitude = init_latitude, init_longitude = init_longitude, a_earth = a_earth, e_earth = e_earth, v_0 = {0.2, 0.0, 0.00001}, scaleDist = 100)  annotation(
    Placement(transformation(origin = {-29, 53}, extent = {{-25, -23}, {25, 23}})));
  inner Kinematics.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, animateGravity = false)  annotation(
    Placement(transformation(origin = {-104, 54}, extent = {{-10, -10}, {10, 10}})));
  Parts.HullAddedMassAnalytical hullAddedMassAnalytical(m_h = m_h, I_11 = I_11, I_22 = I_22, I_33 = I_33, r_g_hull = r_g_hull, X_udot = X_udot, Y_vdot = Y_vdot, Z_wdot = Z_wdot, K_pdot = K_pdot, M_qdot = M_qdot, N_rdot = N_rdot, Y_rdot = Y_rdot, Z_qdot = Z_qdot, M_wdot = M_wdot, N_vdot = N_vdot, enableAddedMassEffects = false)  annotation(
    Placement(transformation(origin = {169, -39}, extent = {{-67, -67}, {67, 67}})));
  Hydrodynamics.HydrodynamicsQuasiStaticOutdated hydrodynamicsQuasiStaticOutdated(K_D0 = K_D0, K_D = K_D, K_beta = K_beta, K_L0 = K_L0, K_alpha = K_alpha, K_MR = K_MR, K_p_qua_stat = K_p_qua_stat, K_M0 = K_M0, K_M = K_M, K_q = K_q, K_MY = K_MY, K_r = K_r)  annotation(
    Placement(transformation(origin = {-67, -96}, extent = {{-47, -44}, {47, 44}})));
equation
  connect(world.frame_b, referenceFrames.frame_a) annotation(
    Line(points = {{-94, 54}, {-54, 54}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_to_Ob, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{-30, 30}, {-24, 30}, {-24, -38}, {112, -38}, {112, -42}}, color = {95, 95, 95}));
  connect(hydrodynamicsQuasiStaticOutdated.frame_Ob, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{-20, -96}, {44, -96}, {44, -42}, {112, -42}}, color = {95, 95, 95}));
  annotation(experiment(StopTime = 500, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})));

end testHydrodynamics;
