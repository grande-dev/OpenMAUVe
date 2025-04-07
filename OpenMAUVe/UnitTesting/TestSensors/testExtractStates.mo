within OpenMAUVe.UnitTesting.TestSensors;
model testExtractStates

  import SI = Modelica.Units.SI;

  parameter Modelica.Units.SI.Position planet_radius = 6378137.0 "Maximum distance of water from ECI, after which the buoyancy force stops applying" annotation(Dialog(tab = "Environment definition"));

  parameter SI.Mass m_h = 500.0 "Mass of rigid body (hull)" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_11 = 300.0 "(1,1) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_22 = 300.0 "(2,2) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_33 = 300.0 "(3,3) element of inertia tensor of hull" annotation(Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_g_hull[3] = {0.0, 0.0, 0.0} "Hull COM position wrt to {O_b}" annotation(Dialog(tab = "Vehicle geometry"));

  parameter SI.Angle init_latitude = -0.557272337881529 "Initial NED latitude (phi)" annotation(Dialog(tab = "Init Kinematics"));
  parameter SI.Angle init_longitude = 2.020011979653293 "Initial NED longitude (lambda)" annotation(Dialog(tab = "Init Kinematics"));
  parameter SI.Position init_altitude = 0 "Geodetic height: height above the spheroid above the normal (h)" annotation(Dialog(tab = "Init Kinematics")); // #645 page 26
  parameter SI.Position a_earth = 6378137.0 "Earth's semimajor axis" annotation(Dialog(tab = "Init Kinematics")); // #645 page 25
  parameter Real e_earth = 0.0818191908426 "Earth's eccentricity" annotation(Dialog(tab = "Init Kinematics"));  // #645 page 25
  parameter Real scaleDist = 10^(-6) "Debug param: leave it as = 1" annotation(Dialog(tab = "Init Kinematics"));

  Kinematics.ReferenceFrames referenceFrames(init_altitude = 0, init_latitude = init_latitude, init_longitude = init_longitude, a_earth = a_earth, e_earth = e_earth)  annotation(
    Placement(transformation(origin = {-69, 13}, extent = {{-43, -35}, {43, 35}})));
  inner Kinematics.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.PointGravity, animateGravity = false)  annotation(
    Placement(transformation(origin = {-154, 2}, extent = {{-10, -10}, {10, 10}})));
  Parts.RigidBody rigidBody(r_CM = r_g_hull, m = m_h, I_11 = I_11, I_22 = I_22, I_33 = I_33)  annotation(
    Placement(transformation(origin = {82, -64}, extent = {{-10, -10}, {10, 10}})));
  Sensors.ExtractStates extractStates annotation(
    Placement(transformation(origin = {119, 67}, extent = {{-95, -95}, {95, 95}})));
equation
  connect(world.frame_b, referenceFrames.frame_a) annotation(
    Line(points = {{-144, 2}, {-128.5, 2}, {-128.5, 14}, {-114, 14}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_to_Ob, rigidBody.frame_a) annotation(
    Line(points = {{-70, -23}, {-70, -64.46}, {72.5, -64.46}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_eci, extractStates.frame_Oi) annotation(
    Line(points = {{-28, 44}, {6, 44}, {6, 116}, {66, 116}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ecef, extractStates.frame_Oe) annotation(
    Line(points = {{-28, 22}, {16, 22}, {16, 90}, {66, 90}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned, extractStates.frame_On) annotation(
    Line(points = {{-28, 0}, {26, 0}, {26, 66}, {66, 66}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_ned0, extractStates.frame_On0) annotation(
    Line(points = {{-28, -22}, {42, -22}, {42, 42}, {66, 42}}, color = {95, 95, 95}));
  connect(referenceFrames.frame_to_Ob, extractStates.frame_Ob) annotation(
    Line(points = {{-70, -22}, {-68, -22}, {-68, -40}, {54, -40}, {54, 18}, {66, 18}}, color = {95, 95, 95}));
  annotation(experiment(StopTime = 86400, Interval = 10.0, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})));

end testExtractStates;
