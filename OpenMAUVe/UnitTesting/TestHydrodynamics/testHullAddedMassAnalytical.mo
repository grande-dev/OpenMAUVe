within OpenMAUVe.UnitTesting.TestHydrodynamics;
model testHullAddedMassAnalytical
  Parts.HullAddedMassAnalytical hullAddedMassAnalytical(m_h = 10, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1, X_udot = 2, Y_vdot = 7, Z_wdot = 14)  annotation(
    Placement(transformation(origin = {105, 19}, extent = {{-37, -37}, {37, 37}})));
  inner Kinematics.World world annotation(
    Placement(transformation(origin = {-82, 38}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.FreeMotion freeMotion(r_rel_a(start = {5000, 5000, 5000}, each fixed = true), v_rel_a(start = {0.0001, 0.00001, 0.0001}, each fixed = true), angles_fixed = true)  annotation(
    Placement(transformation(origin = {0, 18}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor addedMassStateSensor(
    animation = false,
    get_a = true,
    get_v = true,
    get_w = true,
    get_z = true,
    resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameA.frame_a) annotation(
    Placement(transformation(origin = {116, -68}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant fluidDensity(k = 1000) annotation(
    Placement(transformation(origin = {48, -92}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(freeMotion.frame_b, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{10, 18}, {53, 18}, {53, -2}, {74, -2}}, color = {95, 95, 95}));
  connect(world.frame_b, freeMotion.frame_a) annotation(
    Line(points = {{-72, 38}, {-41, 38}, {-41, 18}, {-10, 18}}, color = {95, 95, 95}));
  connect(hullAddedMassAnalytical.frame_Om, addedMassStateSensor.frame_a) annotation(
    Line(points = {{73, 32}, {58, 32}, {58, -68}, {106, -68}}, color = {95, 95, 95}));
  connect(addedMassStateSensor.a, hullAddedMassAnalytical.signalBus.accelerationLinearCOM) annotation(
    Line(points = {{127, -62}, {144, -62}, {144, -32}, {106, -32}, {106, -17}}, color = {0, 0, 127}));
  connect(addedMassStateSensor.v, hullAddedMassAnalytical.signalBus.velocityLinearOfBodyWrtECIInBody) annotation(
    Line(points = {{127, -70}, {152, -70}, {152, -28}, {106, -28}, {106, -17}}, color = {0, 0, 127}));
  connect(addedMassStateSensor.z, hullAddedMassAnalytical.signalBus.accelerationAngularCOM) annotation(
    Line(points = {{127, -66}, {148, -66}, {148, -30}, {106, -30}, {106, -17}}, color = {0, 0, 127}));
  connect(addedMassStateSensor.w, hullAddedMassAnalytical.signalBus.velocityAngularOfBodyWrtECIInBody) annotation(
    Line(points = {{127, -74}, {156, -74}, {156, -26}, {106, -26}, {106, -17}}, color = {0, 0, 127}));
  connect(fluidDensity.y, hullAddedMassAnalytical.signalBus.rho) annotation(
    Line(points = {{59, -92}, {106, -92}, {106, -17}}, color = {0, 0, 127}));
  annotation(experiment(StopTime = 10000, Interval = 0.1, Tolerance = 1e-06),
    Diagram(coordinateSystem(extent = {{-200, -150}, {200, 150}})));

end testHullAddedMassAnalytical;
