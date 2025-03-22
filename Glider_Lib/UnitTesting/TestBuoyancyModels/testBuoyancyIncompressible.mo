within Glider_Lib.UnitTesting.TestBuoyancyModels;
model testBuoyancyIncompressible "This model tests the dynamics of the buyancy force of an incompressible body. This model should be run after having run 'testBuoyancyBalance'. A body is instantiated with mass and volume such that the body is slightly positive buoyant (1%). The test is passed if the body move towards the 'edge of the Earth volume', and start bouncing back, since the buyancy force is switched off at that stage."

  import Modelica.Units.SI;


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

  Kinematics.ReferenceFrames referenceFrames(init_altitude = 0, init_latitude = init_latitude, init_longitude = init_longitude, a_earth = a_earth, e_earth = e_earth, r_0 = {1, 1, 1})  annotation (
    Placement(transformation(origin = {-85, 33}, extent = {{-25, -23}, {25, 23}})));
  inner Kinematics.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, animateGravity = false)  annotation (
    Placement(transformation(origin = {-152, 36}, extent = {{-10, -10}, {10, 10}})));
  Parts.RigidBody rigidBody(r_CM = r_g_hull, m = m_h, I_11 = I_11, I_22 = I_22, I_33 = I_33)  annotation (
    Placement(transformation(origin = {14, -30}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorNED(get_angles = true, sequence = {3, 2, 1}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, get_r_rel = true, get_v_rel = true, get_a_rel = true, get_w_rel = true, get_z_rel = true, animation = false)  annotation (
    Placement(transformation(origin = {4, 28}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorECI(get_a_rel = true, get_angles = true, get_r_rel = true, get_v_rel = true, get_w_rel = true, get_z_rel = true, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, sequence = {3, 2, 1}, animation = false) annotation (
    Placement(transformation(origin = {14, 72}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativePosition relativePosition(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a)  annotation (
    Placement(transformation(origin = {-30, 94}, extent = {{-10, -10}, {10, 10}})));
  Hydrostatics.BuoyancyForceIncompressibleHull buoyancyForceIncompressibleHull(nabla_0 = nabla_0*1.01)  annotation (
    Placement(transformation(origin = {-74, -86}, extent = {{-32, -22}, {32, 22}})));
  Sensors.ExtractStates positionAttitudeAndDer annotation (Placement(
        transformation(origin={124,26}, extent={{-48,-48},{48,48}})));
  Modelica.Blocks.Sources.Constant rho(k = 1000)  annotation(
    Placement(transformation(origin = {52, -66}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(world.frame_b, referenceFrames.frame_a) annotation (
    Line(points = {{-142, 36}, {-122, 36}, {-122, 33}, {-111, 33}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_to_Ob, rigidBody.frame_a) annotation (
    Line(points = {{-85.5, 9.54}, {-73.5, 9.54}, {-73.5, -30.92}, {4.5, -30.92}}, color = {95, 95, 95}));
  connect(relativeSensorNED.frame_b, rigidBody.frame_a) annotation (
    Line(points = {{14, 28}, {24, 28}, {24, 10}, {-20, 10}, {-20, -30}, {4, -30}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, relativeSensorNED.frame_a) annotation (
    Line(points = {{-61, 24.26}, {-31, 24.26}, {-31, 28.4}, {-7, 28.4}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, relativeSensorECI.frame_a) annotation (
    Line(points = {{-61, 53.7}, {-33, 53.7}, {-33, 71.7}, {4, 71.7}}, color = {95, 95, 95}));
  connect(relativeSensorECI.frame_b, rigidBody.frame_a) annotation (
    Line(points = {{24, 72}, {48, 72}, {48, -8}, {-12, -8}, {-12, -30}, {4, -30}}, color = {95, 95, 95}));
  connect(relativePosition.frame_a, referenceFrames.frame_eci) annotation (
    Line(points = {{-40, 94}, {-50, 94}, {-50, 76}, {-40, 76}, {-40, 54}, {-61, 54}}, color = {95, 95, 95}));
  connect(relativePosition.frame_b, referenceFrames.frame_ned) annotation (
    Line(points = {{-20, 94}, {-12, 94}, {-12, 24}, {-61, 24}}, color = {95, 95, 95}));
  connect(buoyancyForceIncompressibleHull.frame_b, rigidBody.frame_a) annotation (
    Line(points = {{-42.64, -86}, {-21.64, -86}, {-21.64, -30}, {4.36, -30}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, positionAttitudeAndDer.frame_Oi) annotation (
    Line(points = {{-61, 53.7}, {7.5, 53.7}, {7.5, 61.7}, {80, 61.7}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ecef, positionAttitudeAndDer.frame_Oe) annotation (
    Line(points = {{-61, 38.98}, {9.5, 38.98}, {9.5, 42.98}, {80, 42.98}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, positionAttitudeAndDer.frame_On) annotation (
    Line(points = {{-61, 24.26}, {60, 24.26}, {60, 25.26}, {80, 25.26}}, color = {95, 95, 95}));
  connect(positionAttitudeAndDer.frame_Ob, rigidBody.frame_a) annotation (
    Line(points = {{80.704, -6.352}, {-0.296, -6.352}, {-0.296, -30.352}, {3.704, -30.352}}, color = {95, 95, 95}));
  connect(positionAttitudeAndDer.signalBus, buoyancyForceIncompressibleHull.signalBus) annotation(
    Line(points = {{124.192, -8.752}, {124.192, -151.752}, {-72.808, -151.752}, {-72.808, -107.752}}, color = {255, 204, 51}, thickness = 0.5));
  connect(referenceFrames.frame_ned0, positionAttitudeAndDer.frame_On0) annotation(
    Line(points = {{-61, 9.54}, {-51, 9.54}, {-51, 8.54}, {80, 8.54}}, color = {95, 95, 95}));
  connect(rho.y, positionAttitudeAndDer.signalBus.rho) annotation(
    Line(points = {{63, -66}, {63, -64.5}, {125, -64.5}, {125, -9}, {123, -9}}, color = {0, 0, 127}));
  annotation(experiment(StopTime = 3600, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})));
end testBuoyancyIncompressible;