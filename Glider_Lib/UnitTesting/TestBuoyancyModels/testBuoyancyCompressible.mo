within Glider_Lib.UnitTesting.TestBuoyancyModels;
model testBuoyancyCompressible "This model tests the dynamics of the buyancy force of a compressible model. The test is designed such that the vehicle is initially neutrally buoyant. At 100 s, the temperature changes, with a reduction of 0.5 degC, and the volume of the vehicle shrinks. As the vehicle becomes negatively buoyant, it starts falling to towards ECI."

  import Modelica.Units.SI;


  parameter SI.Density rho_0 = 1000 "Water density [kg/m3]";
  parameter SI.Temperature T_0_fluid = 288.15 "Final fluid temperature (Kelvin)";
  parameter Real T_fluid_delta = -1.5 "Difference in fluid temperature at 100 s (Kelvin)";
  parameter SI.Volume nabla_0 = 5.02772*10^(-3) "Hull volume";
  parameter Real kappa = 5.529*10^(-6) "Overall compressibility of the combined hull, foam, foam-filled fairing elements and sensors";
  parameter Real tau = 7.05*10^(-5) "Volumetric thermal expansion";
  
  parameter Modelica.Units.SI.Position planet_radius = 6378137.0 "Maximum distance of water from ECI, after which the buoyancy force stops applying" annotation(Dialog(tab = "Environment definition"));

  parameter SI.Mass m_h = 5.0 "Mass of rigid body (hull)" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_11 = 3.0 "(1,1) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_22 = 3.0 "(2,2) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_33 = 3.0 "(3,3) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_g_hull[3] = {0.0, 0.0, 0.0} "Hull COM position wrt to {O_b}" annotation(Dialog(tab = "Vehicle geometry"));

  parameter SI.Angle init_latitude = -0.557272337881529 "Initial NED latitude (phi)" annotation(Dialog(tab = "Init Kinematics"));
  parameter SI.Angle init_longitude = 2.020011979653293 "Initial NED longitude (lambda)" annotation(Dialog(tab = "Init Kinematics"));
  parameter SI.Position init_altitude = 0 "Geodetic height: height above the spheroid above the normal (h)" annotation(Dialog(tab = "Init Kinematics")); // #645 page 26
  parameter SI.Position a_earth = 6378137.0 "Earth's semimajor axis" annotation(Dialog(tab = "Init Kinematics")); // #645 page 25
  parameter Real e_earth = 0.0818191908426 "Earth's eccentricity" annotation(Dialog(tab = "Init Kinematics"));  // #645 page 25
  parameter Real scaleDist = 10^(-6) "Debug param: leave it as = 1" annotation(Dialog(tab = "Init Kinematics"));


  Kinematics.ReferenceFrames referenceFrames(init_altitude = 0, init_latitude = init_latitude, init_longitude = init_longitude, a_earth = a_earth, e_earth = e_earth, r_0 = {1, 1, 1})  annotation (
    Placement(transformation(origin = {-93, 15}, extent = {{-25, -23}, {25, 23}})));
  inner Kinematics.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, animateGravity = false)  annotation (
    Placement(transformation(origin = {-160, 18}, extent = {{-10, -10}, {10, 10}})));
  Parts.RigidBody rigidBody(r_CM = r_g_hull, m = m_h, I_11 = I_11, I_22 = I_22, I_33 = I_33)  annotation (
    Placement(transformation(origin = {82, -64}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorNED(get_angles = true, sequence = {3, 2, 1}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, get_r_rel = true, get_v_rel = true, get_a_rel = true, get_w_rel = true, get_z_rel = true, animation = false)  annotation (
    Placement(transformation(origin = {72, -6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorECI(get_a_rel = true, get_angles = true, get_r_rel = true, get_v_rel = true, get_w_rel = true, get_z_rel = true, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, sequence = {3, 2, 1}, animation = false) annotation (
    Placement(transformation(origin = {82, 38}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativePosition relativePosition(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a)  annotation (
    Placement(transformation(origin = {38, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant rho_value(k = rho_0)  annotation (
    Placement(transformation(origin = {136, -112}, extent = {{-10, -10}, {10, 10}})));
  Sensors.ExtractStates positionAttitudeAndDer annotation (Placement(
        transformation(origin={194,-14}, extent={{-28,-28},{28,28}})));
  Hydrostatics.BuoyancyForceCompressibleHull buoyancyForceCompressibleHull(nabla_0 = nabla_0, T_0 = T_0_fluid, kappa = kappa, tau = tau)  annotation(
    Placement(transformation(origin = {-29, -140}, extent = {{-53, -38}, {53, 38}})));
  Modelica.Blocks.Sources.Step in_T(height = T_fluid_delta, offset = T_0_fluid, startTime = 100)  annotation(
    Placement(transformation(origin = {132, -166}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant velFluid[3](each k = rho_0) annotation(
    Placement(transformation(origin = {130, -228}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(world.frame_b, referenceFrames.frame_a) annotation(
    Line(points = {{-150, 18}, {-130, 18}, {-130, 15}, {-119, 15}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_to_Ob, rigidBody.frame_a) annotation(
    Line(points = {{-93.5, -8}, {-93.5, -64.46}, {72.5, -64.46}}, color = {95, 95, 95}));
  connect(relativeSensorNED.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{82, -6}, {92, -6}, {92, -24}, {48, -24}, {48, -64}, {72, -64}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, relativeSensorNED.frame_a) annotation(
    Line(points = {{-69, 6}, {37, 6}, {37, -5.86}, {61, -5.86}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, relativeSensorECI.frame_a) annotation(
    Line(points = {{-69, 36}, {35, 36}, {35, 38}, {72, 38}}, color = {95, 95, 95}));
  connect(relativeSensorECI.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{92, 38}, {116, 38}, {116, -42}, {56, -42}, {56, -64}, {72, -64}}, color = {95, 95, 95}));
  connect(relativePosition.frame_a, referenceFrames.frame_eci) annotation(
    Line(points = {{28, 60}, {18, 60}, {18, 42}, {28, 42}, {28, 36}, {-69, 36}}, color = {95, 95, 95}));
  connect(relativePosition.frame_b, referenceFrames.frame_ned) annotation(
    Line(points = {{48, 60}, {56, 60}, {56, 6}, {-69, 6}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, positionAttitudeAndDer.frame_Oi) annotation(
    Line(points = {{-69, 36}, {146, 36}, {146, 0}, {179, 0}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ecef, positionAttitudeAndDer.frame_Oe) annotation(
    Line(points = {{-69, 21}, {140, 21}, {140, -7}, {179, -7}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, positionAttitudeAndDer.frame_On) annotation(
    Line(points = {{-69, 6}, {128, 6}, {128, -14}, {179, -14}}, color = {95, 95, 95}));
  connect(positionAttitudeAndDer.frame_Ob, rigidBody.frame_a) annotation(
    Line(points = {{179, -29}, {68, -29}, {68, -64}, {72, -64}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned0, positionAttitudeAndDer.frame_On0) annotation(
    Line(points = {{-69, -8}, {-26.5, -8}, {-26.5, -36}, {166, -36}, {166, -22}, {178, -22}}, color = {95, 95, 95}));
  connect(buoyancyForceCompressibleHull.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{23, -140}, {64, -140}, {64, -64}, {72, -64}}, color = {95, 95, 95}));
  connect(buoyancyForceCompressibleHull.signalBus, positionAttitudeAndDer.signalBus) annotation(
    Line(points = {{-28, -178}, {-28, -198}, {194, -198}, {194, -34}}, color = {255, 204, 51}, thickness = 0.5));
  connect(rho_value.y, positionAttitudeAndDer.signalBus.rho) annotation(
    Line(points = {{148, -112}, {194, -112}, {194, -34}}, color = {0, 0, 127}));
  connect(in_T.y, positionAttitudeAndDer.signalBus.fluidT) annotation(
    Line(points = {{144, -166}, {194, -166}, {194, -34}}, color = {0, 0, 127}));
  connect(positionAttitudeAndDer.frame_Om, rigidBody.frame_a) annotation(
    Line(points = {{170, -40}, {148, -40}, {148, -70}, {120, -70}, {120, -88}, {48, -88}, {48, -64}, {72, -64}}, color = {95, 95, 95}));
  connect(velFluid.y, positionAttitudeAndDer.signalBus.velocityCurrentsInB) annotation(
    Line(points = {{142, -228}, {194, -228}, {194, -34}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(experiment(StopTime = 500, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})));
end testBuoyancyCompressible;