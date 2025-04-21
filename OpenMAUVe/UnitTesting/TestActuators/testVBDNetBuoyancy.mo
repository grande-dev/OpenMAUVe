within OpenMAUVe.UnitTesting.TestActuators;

model testVBDNetBuoyancy "This model tests the direction and magnitude of the buoyancy force. An incompressible body is instantiated with mass and volume such that the body is in equilibrium. The test is passed if the body does not move."
  import Modelica.Units.SI;
  parameter Modelica.Units.SI.Position planet_radius = 6378137.0 "Maximum distance of water from ECI, after which the buoyancy force stops applying" annotation(
    Dialog(tab = "Environment definition"));
  parameter SI.Mass m_h = 5.0 "Mass of rigid body (hull)" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_11 = 3.0 "(1,1) element of inertia tensor of hull" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_22 = 3.0 "(2,2) element of inertia tensor of hull" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_33 = 3.0 "(3,3) element of inertia tensor of hull" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_g_hull[3] = {0.0, 0.0, 0.0} "Hull COM position wrt to {O_b}" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Volume nabla_0 = 0.005 "Hull volume";
  parameter SI.Angle init_latitude = -0.557272337881529 "Initial NED latitude (phi)" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter SI.Angle init_longitude = 2.020011979653293 "Initial NED longitude (lambda)" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter SI.Position init_altitude = 0 "Geodetic height: height above the spheroid above the normal (h)" annotation(
    Dialog(tab = "Init Kinematics"));
  // #645 page 26
  parameter SI.Position a_earth = 6378137.0 "Earth's semimajor axis" annotation(
    Dialog(tab = "Init Kinematics"));
  // #645 page 25
  parameter Real e_earth = 0.0818191908426 "Earth's eccentricity" annotation(
    Dialog(tab = "Init Kinematics"));
  // #645 page 25
  parameter Real scaleDist = 10^(-6) "Debug param: leave it as = 1" annotation(
    Dialog(tab = "Init Kinematics"));
  parameter SI.Density rho_0 = 1000 "Water density [kg/m3]";
  Kinematics.ReferenceFrames referenceFrames(init_altitude = 0, init_latitude = init_latitude, init_longitude = init_longitude, a_earth = a_earth, e_earth = e_earth, r_0 = {0, 0, 50}, scaleDist = 1) annotation(
    Placement(transformation(origin = {-91, 21}, extent = {{-25, -23}, {25, 23}})));
  inner Kinematics.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, animateGravity = false) annotation(
    Placement(transformation(origin = {-158, 24}, extent = {{-10, -10}, {10, 10}})));
  Parts.RigidBody rigidBody(r_CM = r_g_hull, m = m_h, I_11 = I_11, I_22 = I_22, I_33 = I_33) annotation(
    Placement(transformation(origin = {8, -42}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorNED(get_angles = true, sequence = {3, 2, 1}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, get_r_rel = true, get_v_rel = true, get_a_rel = true, get_w_rel = true, get_z_rel = true, animation = false) annotation(
    Placement(transformation(origin = {-2, 16}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorECI(get_a_rel = true, get_angles = true, get_r_rel = true, get_v_rel = true, get_w_rel = true, get_z_rel = true, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, sequence = {3, 2, 1}, animation = false) annotation(
    Placement(transformation(origin = {8, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativePosition relativePosition(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a) annotation(
    Placement(transformation(origin = {-36, 82}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant rho_value(k = rho_0) annotation(
    Placement(transformation(origin = {56, -84}, extent = {{-10, -10}, {10, 10}})));
  Sensors.ExtractStates positionAttitudeAndDer annotation(
    Placement(transformation(origin = {120, 8}, extent = {{-28, -28}, {28, 28}})));
  Modelica.Blocks.Sources.Constant velFluid[3](each k = 0) annotation(
    Placement(transformation(origin = {56, -128}, extent = {{-10, -10}, {10, 10}})));
  Actuators.VBDNetBuoyancy vBDNetBuoyancy(VBD_max = 10.0, VBD_min = -10.0, VBD_reference_volume = nabla_0)  annotation(
    Placement(transformation(origin = {-61, -95}, extent = {{-21, -17}, {21, 17}})));
  Modelica.Blocks.Sources.Step in_VBD(height = -0.001, startTime = 60)  annotation(
    Placement(transformation(origin = {-156, -94}, extent = {{-10, -10}, {10, 10}})));
  Utilities.Util_NetMass util_NetMass(m_h = m_h, nabla_0 = 0.0)  annotation(
    Placement(transformation(origin = {-8, -146}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(world.frame_b, referenceFrames.frame_a) annotation(
    Line(points = {{-148, 24}, {-128, 24}, {-128, 21}, {-117, 21}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_to_Ob, rigidBody.frame_a) annotation(
    Line(points = {{-91.5, -2.46}, {-79.5, -2.46}, {-79.5, -42.92}, {-1.5, -42.92}}, color = {95, 95, 95}));
  connect(relativeSensorNED.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{8, 16}, {18, 16}, {18, -2}, {-26, -2}, {-26, -42}, {-2, -42}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, relativeSensorNED.frame_a) annotation(
    Line(points = {{-67, 12.26}, {-37, 12.26}, {-37, 16.4}, {-13, 16.4}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, relativeSensorECI.frame_a) annotation(
    Line(points = {{-67, 41.7}, {-39, 41.7}, {-39, 59.7}, {-2, 59.7}}, color = {95, 95, 95}));
  connect(relativeSensorECI.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{18, 60}, {42, 60}, {42, -20}, {-18, -20}, {-18, -42}, {-2, -42}}, color = {95, 95, 95}));
  connect(relativePosition.frame_a, referenceFrames.frame_eci) annotation(
    Line(points = {{-46, 82}, {-56, 82}, {-56, 64}, {-46, 64}, {-46, 42}, {-67, 42}}, color = {95, 95, 95}));
  connect(relativePosition.frame_b, referenceFrames.frame_ned) annotation(
    Line(points = {{-26, 82}, {-18, 82}, {-18, 12}, {-67, 12}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, positionAttitudeAndDer.frame_Oi) annotation(
    Line(points = {{-67, 41.7}, {72, 41.7}, {72, 21.7}, {105, 21.7}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ecef, positionAttitudeAndDer.frame_Oe) annotation(
    Line(points = {{-67, 26.98}, {66, 26.98}, {66, 14.98}, {105, 14.98}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, positionAttitudeAndDer.frame_On) annotation(
    Line(points = {{-67, 12.26}, {54, 12.26}, {54, 8.26}, {105, 8.26}}, color = {95, 95, 95}));
  connect(positionAttitudeAndDer.frame_Ob, rigidBody.frame_a) annotation(
    Line(points = {{94.968, -7.736}, {-16.032, -7.736}, {-16.032, -42.736}, {-12.032, -42.736}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned0, positionAttitudeAndDer.frame_On0) annotation(
    Line(points = {{-67, -2.46}, {-57, -2.46}, {-57, -16.46}, {91, -16.46}, {91, -0.46}, {103, -0.46}}, color = {95, 95, 95}));
  connect(rho_value.y, positionAttitudeAndDer.signalBus.rho) annotation(
    Line(points = {{67, -84}, {119, -84}, {119, -12}}, color = {0, 0, 127}));
  connect(positionAttitudeAndDer.frame_Om, rigidBody.frame_a) annotation(
    Line(points = {{95.08, -17.144}, {75.08, -17.144}, {75.08, -65.144}, {-14.92, -65.144}, {-14.92, -41.144}, {-2.92, -41.144}}, color = {95, 95, 95}));
  connect(velFluid.y, positionAttitudeAndDer.signalBus.velocityCurrentsInB) annotation(
    Line(points = {{68, -128}, {120, -128}, {120, -12}}, color = {0, 0, 127}, thickness = 0.5));
  connect(vBDNetBuoyancy.frame_b, rigidBody.frame_a) annotation(
    Line(points = {{-40, -94}, {-22, -94}, {-22, -42}, {-2, -42}}, color = {95, 95, 95}));
  connect(in_VBD.y, vBDNetBuoyancy.in_VBD_vol) annotation(
    Line(points = {{-144, -94}, {-114, -94}, {-114, -96}, {-82, -96}}, color = {0, 0, 127}));
  connect(vBDNetBuoyancy.signalBus, positionAttitudeAndDer.signalBus) annotation(
    Line(points = {{-68, -110}, {-68, -174}, {120, -174}, {120, -12}}, color = {255, 204, 51}, thickness = 0.5));
  connect(vBDNetBuoyancy.signalBus.rho, util_NetMass.rho) annotation(
    Line(points = {{-68, -110}, {-64, -110}, {-64, -140}, {-18, -140}}, color = {0, 0, 127}));
  connect(vBDNetBuoyancy.out_VBD_vol, util_NetMass.in_VBD_vol) annotation(
    Line(points = {{-48, -110}, {-48, -150}, {-18, -150}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 100, Interval = 0.1, Tolerance = 1e-06),
    Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
    Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})));
end testVBDNetBuoyancy;