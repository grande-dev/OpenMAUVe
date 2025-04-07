within OpenMAUVe.UnitTesting.TestBuoyancyModels;
model testBuoyancyNeutral "This model tests the dynamics of the buyancy force. This model should be run after having run 'testBuoyancyBalance'. A body is instantiated with generic mass and volume. The density is on purpose initialised with an unreasonable number (e.g. 50.), and then an offest is injected half way through the simulation. The test is passed if the vehicle does not move even when the density shifts."

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

  parameter SI.Density rho_0 = 3 "Water density [kg/m3]";

  Kinematics.ReferenceFrames referenceFrames(init_altitude = 0, init_latitude = init_latitude, init_longitude = init_longitude, a_earth = a_earth, e_earth = e_earth, r_0 = {0, 0, 1})  annotation (
    Placement(transformation(origin = {-81, 53}, extent = {{-25, -23}, {25, 23}})));
  inner Kinematics.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, animateGravity = false)  annotation (
    Placement(transformation(origin = {-148, 56}, extent = {{-10, -10}, {10, 10}})));
  Parts.RigidBody rigidBody(r_CM = r_g_hull, m = m_h, I_11 = I_11, I_22 = I_22, I_33 = I_33)  annotation (
    Placement(transformation(origin = {18, -10}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorNED(get_angles = true, sequence = {3, 2, 1}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, get_r_rel = true, get_v_rel = true, get_a_rel = true, get_w_rel = true, get_z_rel = true, animation = false)  annotation (
    Placement(transformation(origin = {8, 48}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorECI(get_a_rel = true, get_angles = true, get_r_rel = true, get_v_rel = true, get_w_rel = true, get_z_rel = true, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, sequence = {3, 2, 1}, animation = false) annotation (
    Placement(transformation(origin = {18, 92}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativePosition relativePosition(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a)  annotation (
    Placement(transformation(origin = {-26, 114}, extent = {{-10, -10}, {10, 10}})));
  Sensors.ExtractStates positionAttitudeAndDer annotation (Placement(
        transformation(origin={130,40}, extent={{-28,-28},{28,28}})));
  Hydrostatics.BuoyancyForceNeutral buoyancyForceNeutral(m_h = m_h)  annotation(
    Placement(transformation(origin = {-108, -49}, extent = {{-22, -17}, {22, 17}})));
  Modelica.Blocks.Sources.Constant velFluid[3](each k = 0) annotation(
    Placement(transformation(origin = {56, -116}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step rho_in(height = 3, offset = 50, startTime = 100)  annotation(
    Placement(transformation(origin = {58, -74}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(world.frame_b, referenceFrames.frame_a) annotation(
    Line(points = {{-138, 56}, {-118, 56}, {-118, 53}, {-107, 53}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_to_Ob, rigidBody.frame_a) annotation(
    Line(points = {{-81.5, 29.54}, {-69.5, 29.54}, {-69.5, -10.92}, {8.5, -10.92}}, color = {95, 95, 95}));
  connect(relativeSensorNED.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{18, 48}, {28, 48}, {28, 30}, {-16, 30}, {-16, -10}, {8, -10}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, relativeSensorNED.frame_a) annotation(
    Line(points = {{-57, 44.26}, {-27, 44.26}, {-27, 48.4}, {-3, 48.4}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, relativeSensorECI.frame_a) annotation(
    Line(points = {{-57, 73.7}, {-29, 73.7}, {-29, 91.7}, {8, 91.7}}, color = {95, 95, 95}));
  connect(relativeSensorECI.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{28, 92}, {52, 92}, {52, 12}, {-8, 12}, {-8, -10}, {8, -10}}, color = {95, 95, 95}));
  connect(relativePosition.frame_a, referenceFrames.frame_eci) annotation(
    Line(points = {{-36, 114}, {-46, 114}, {-46, 96}, {-36, 96}, {-36, 74}, {-57, 74}}, color = {95, 95, 95}));
  connect(relativePosition.frame_b, referenceFrames.frame_ned) annotation(
    Line(points = {{-16, 114}, {-8, 114}, {-8, 44}, {-57, 44}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, positionAttitudeAndDer.frame_Oi) annotation(
    Line(points = {{-57, 73.7}, {82, 73.7}, {82, 53.7}, {115, 53.7}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ecef, positionAttitudeAndDer.frame_Oe) annotation(
    Line(points = {{-57, 58.98}, {76, 58.98}, {76, 46.98}, {115, 46.98}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, positionAttitudeAndDer.frame_On) annotation(
    Line(points = {{-57, 44.26}, {64, 44.26}, {64, 40.26}, {115, 40.26}}, color = {95, 95, 95}));
  connect(positionAttitudeAndDer.frame_Ob, rigidBody.frame_a) annotation(
    Line(points = {{104.968, 24.264}, {-6.032, 24.264}, {-6.032, -10.736}, {-2.032, -10.736}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned0, positionAttitudeAndDer.frame_On0) annotation(
    Line(points = {{-57, 29.54}, {-47, 29.54}, {-47, 15.54}, {101, 15.54}, {101, 31.54}, {113, 31.54}}, color = {95, 95, 95}));
  connect(buoyancyForceNeutral.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-86.44, -49}, {-22.44, -49}, {-22.44, -11}, {7.56, -11}}, color = {95, 95, 95}));
  connect(buoyancyForceNeutral.signalBus, positionAttitudeAndDer.signalBus) annotation(
    Line(points = {{-107.56, -66}, {-107.56, -92}, {130.44, -92}, {130.44, 20}}, color = {255, 204, 51}, thickness = 0.5));
  connect(positionAttitudeAndDer.frame_Om, rigidBody.frame_a) annotation(
    Line(points = {{105.08, 14.856}, {-32.92, 14.856}, {-32.92, -9.144}, {7.08, -9.144}}, color = {95, 95, 95}));
  connect(velFluid.y, positionAttitudeAndDer.signalBus.velocityCurrentsInB) annotation(
    Line(points = {{67, -116}, {129, -116}, {129, 20}}, color = {0, 0, 127}, thickness = 0.5));
  connect(rho_in.y, positionAttitudeAndDer.signalBus.rho) annotation(
    Line(points = {{69, -74}, {129, -74}, {129, 20}}, color = {0, 0, 127}));
  annotation(experiment(StopTime = 200, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})));
end testBuoyancyNeutral;
