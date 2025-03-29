within Glider_Lib.UnitTesting.TestActuators;

model testMovableMasses "A unit test testing the direction and magnitudes of the movable mass actuators. The test is designed to have a hull, with a shifting and rolling mass attached, while the gravity is disabled. The model shifts the mass forward after 10 s, and then roll the mass after 20 s."

  import SI = Modelica.Units.SI;
  parameter Modelica.Units.SI.Position planet_radius = 6378137.0 "Maximum distance of water from ECI, after which the buoyancy force stops applying" annotation(
    Dialog(tab = "Environment definition"));
  parameter SI.Mass m_h = 500.0 "Mass of rigid body (hull)" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_11 = 300.0 "(1,1) element of inertia tensor of hull" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_22 = 300.0 "(2,2) element of inertia tensor of hull" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Inertia I_33 = 300.0 "(3,3) element of inertia tensor of hull" annotation(
    Dialog(tab = "Vehicle geometry"));
  parameter SI.Position r_g_hull[3] = {0.0, 0.0, 0.0} "Hull COM position wrt to {O_b}" annotation(
    Dialog(tab = "Vehicle geometry"));
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
  inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity, animateGravity = true)  annotation(
    Placement(transformation(origin = {-171, 167}, extent = {{-31, -31}, {31, 31}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedFrame frame_Ob annotation(
    Placement(transformation(origin = {141, 191}, extent = {{-23, -23}, {23, 23}})));
  Modelica.Mechanics.MultiBody.Parts.Body body(r_CM = {0, 0, 0}, m = 100, r_0(start = {5.0, 0.0, 0.0}, each fixed = true), animation = false)  annotation(
    Placement(transformation(origin = {153, 99}, extent = {{-29, -29}, {29, 29}})));
  Actuators.MovableMasses movableMasses(m_mov = 2, m_s_pos_sat = 10.0, m_s_neg_sat = -10.0, m_r_pos_angle = 1.5707963267948966, m_r_neg_angle = -1.5707963267948966, r_mov = {0.4, 0.0, 0.0}, pendulum_arm = 0.2)  annotation(
    Placement(transformation(origin = {-7, -21}, extent = {{-99, -81}, {99, 81}})));
  Modelica.Blocks.Sources.Step ref_m_s(height = 0.5, startTime = 10)  annotation(
    Placement(transformation(origin = {-184, 40}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Sources.Step ref_m_r(height = 30, startTime = 20)  annotation(
    Placement(transformation(origin = {-182, -76}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedFrame frame_ECI(length = 1.0, color_x = {245, 0, 0}, color_y = {245, 0, 0}, color_z = {245, 0, 0})  annotation(
    Placement(transformation(origin = {-47, 163}, extent = {{-23, -23}, {23, 23}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedShape fixedShape(r_shape = {-0.075, 0.0, 0.0}, length = 0.15, width = 0.15, height = 0.15, color = {0, 0, 255})  annotation(
    Placement(transformation(origin = {167, 31}, extent = {{-25, -25}, {25, 25}})));
equation
  connect(movableMasses.frame_Ob, body.frame_a) annotation(
    Line(points = {{46, -21}, {64, -21}, {64, 100}, {124, 100}}, color = {95, 95, 95}));
  connect(ref_m_r.y, movableMasses.in_pos_m_r) annotation(
    Line(points = {{-160, -76}, {-124, -76}, {-124, -48}, {-66, -48}}, color = {0, 0, 127}));
  connect(ref_m_s.y, movableMasses.in_pos_m_s) annotation(
    Line(points = {{-162, 40}, {-140, 40}, {-140, 2}, {-66, 2}}, color = {0, 0, 127}));
  connect(frame_Ob.frame_a, body.frame_a) annotation(
    Line(points = {{118, 192}, {60, 192}, {60, 100}, {124, 100}}, color = {95, 95, 95}));
  connect(world.frame_b, frame_ECI.frame_a) annotation(
    Line(points = {{-140, 168}, {-70, 168}, {-70, 164}}, color = {95, 95, 95}));
  connect(fixedShape.frame_a, body.frame_a) annotation(
    Line(points = {{142, 31}, {96, 31}, {96, 100}, {124, 100}}, color = {95, 95, 95}));
  annotation(
    experiment(StopTime = 30, Interval = 0.1, Tolerance = 1e-06),
    Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
    Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})));
end testMovableMasses;