within Glider_Lib.UnitTesting;

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



  Kinematics.ReferenceFrames referenceFrames(init_altitude = 0, init_latitude = init_latitude, init_longitude = init_longitude, a_earth = a_earth, e_earth = e_earth, v_0 = {0.0001, 0.0, 0.00001})  annotation(
    Placement(transformation(origin = {-9, 1}, extent = {{-25, -23}, {25, 23}})));
  inner Kinematics.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, animateGravity = false)  annotation(
    Placement(transformation(origin = {-84, 2}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorNED(get_angles = true, sequence = {3, 2, 1}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, get_r_rel = true, get_v_rel = true, get_a_rel = true, get_w_rel = true, get_z_rel = true, animation = false)  annotation(
    Placement(transformation(origin = {72, -6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorECI(get_a_rel = true, get_angles = true, get_r_rel = true, get_v_rel = true, get_w_rel = true, get_z_rel = true, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, sequence = {3, 2, 1}, animation = false) annotation(
    Placement(transformation(origin = {82, 38}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativePosition relativePosition(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a)  annotation(
    Placement(transformation(origin = {38, 60}, extent = {{-10, -10}, {10, 10}})));
  Hydrostatics.BuoyancyForceIncompressibleHull buoyancyForceIncompressibleHull(nabla_0 = nabla_0)  annotation(
    Placement(transformation(origin = {-20, -98}, extent = {{-32, -22}, {32, 22}})));
  Modelica.Blocks.Sources.Constant rho_value(k = rho_0)  annotation(
    Placement(transformation(origin = {-102, -82}, extent = {{-10, -10}, {10, 10}})));
  Parts.HullAddedMassAnalytical hullAddedMassAnalytical(m_h = m_h, I_11 = I_11, I_22 = I_22, I_33 = I_33, r_g_hull = r_g_hull, X_udot = X_udot, Y_vdot = Y_vdot, Z_wdot = Z_wdot, K_pdot = K_pdot, M_qdot = M_qdot, N_rdot = N_rdot, Y_rdot = Y_rdot, Z_qdot = Z_qdot, M_wdot = M_wdot, N_vdot = N_vdot)  annotation(
    Placement(transformation(origin = {149, -61}, extent = {{-33, -33}, {33, 33}})));
  Hydrodynamics.HydrodynamicsQuasiStaticOutdated hydrodynamicsQuasiStaticOutdated(K_D0 = K_D0, K_D = K_D, K_beta = K_beta, K_L0 = K_L0, K_alpha = K_alpha, K_MR = K_MR, K_p_qua_stat = K_p_qua_stat, K_M0 = K_M0, K_M = K_M, K_q = K_q, K_MY = K_MY, K_r = K_r)  annotation(
    Placement(transformation(origin = {-8, -170}, extent = {{-42, -36}, {42, 36}})));
equation
  connect(world.frame_b, referenceFrames.frame_a) annotation(
    Line(points = {{-74, 2}, {-34, 2}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, relativeSensorNED.frame_a) annotation(
    Line(points = {{15, -17.86}, {37, -17.86}, {37, -5.86}, {61, -5.86}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, relativeSensorECI.frame_a) annotation(
    Line(points = {{15, 19.86}, {35, 19.86}, {35, 38}, {72, 38}}, color = {95, 95, 95}));
  connect(relativePosition.frame_a, referenceFrames.frame_eci) annotation(
    Line(points = {{28, 60}, {18, 60}, {18, 42}, {28, 42}, {28, 20}, {16, 20}}, color = {95, 95, 95}));
  connect(relativePosition.frame_b, referenceFrames.frame_ned) annotation(
    Line(points = {{48, 60}, {56, 60}, {56, -18}, {16, -18}}, color = {95, 95, 95}));
  connect(buoyancyForceIncompressibleHull.frame_ECI, referenceFrames.frame_eci) annotation(
    Line(points = {{-53, -113}, {-120, -113}, {-120, 86}, {104, 86}, {104, 20}, {16, 20}}, color = {95, 95, 95}));
  connect(rho_value.y, buoyancyForceIncompressibleHull.rho) annotation(
    Line(points = {{-91, -82}, {-94, -82}, {-94, -81}, {-50, -81}}, color = {0, 0, 127}));
  connect(hullAddedMassAnalytical.frame_Ob, referenceFrames.frame_to_Ob) annotation(
    Line(points = {{121, -64}, {-10, -64}, {-10, -22}}, color = {95, 95, 95}));
  connect(relativeSensorNED.frame_b, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{82, -6}, {96, -6}, {96, -64}, {122, -64}}, color = {95, 95, 95}));
  connect(relativeSensorECI.frame_b, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{92, 38}, {108, 38}, {108, -64}, {122, -64}}, color = {95, 95, 95}));
  connect(buoyancyForceIncompressibleHull.frame_b, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{11, -98}, {64, -98}, {64, -64}, {122, -64}}, color = {95, 95, 95}));
  connect(hydrodynamicsQuasiStaticOutdated.frame_b, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{34, -170}, {108, -170}, {108, -64}, {122, -64}}, color = {95, 95, 95}));
  connect(hydrodynamicsQuasiStaticOutdated.frame_Ob, referenceFrames.frame_eci) annotation(
    Line(points = {{-50, -171}, {-132, -171}, {-132, 96}, {126, 96}, {126, 20}, {16, 20}}, color = {95, 95, 95}));
  annotation(experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})));


end testHydrodynamics;