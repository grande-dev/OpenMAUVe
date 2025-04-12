within OpenMAUVe.UnitTesting.TestBuoyancyModels;

model testRhoVsDepth
  Sensors.SignalBus signalBus annotation(
    Placement(transformation(origin = {-4, -64}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {6, -64}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Ramp posObwrtNED0inNED0[3](each height = 1500, each duration = 100, each offset = 0, each startTime = 10) annotation(
    Placement(transformation(origin = {-84, -16}, extent = {{-10, -10}, {10, 10}})));
  VerificationSimulator.GroundthruthVerification.RhoSouthChinaSeaGroundthruth rhoSouthChinaSeaGroundthruth(densityAtSurface(displayUnit = "kg/m3") = 1024, densityAt1500m(displayUnit = "kg/m3") = 1032)  annotation(
    Placement(transformation(origin = {86, 14}, extent = {{-10, -10}, {10, 10}})));
  Hydrostatics.rhoVsDepth rhoVsDepth annotation(
    Placement(transformation(origin = {-1, 11}, extent = {{-29, -29}, {29, 29}})));
equation
  connect(posObwrtNED0inNED0.y, signalBus.positionBodyWrtNED0inNED0) annotation(
    Line(points = {{-72, -16}, {-52, -16}, {-52, -64}, {-4, -64}}, color = {0, 0, 127}, thickness = 0.5));
  connect(signalBus, rhoVsDepth.signalBus) annotation(
    Line(points = {{-4, -64}, {0, -64}, {0, -12}}, thickness = 0.5));
  connect(rhoVsDepth.rho, signalBus.rho) annotation(
    Line(points = {{28, 36}, {50, 36}, {50, -64}, {-4, -64}}, color = {0, 0, 127}));
  connect(rhoVsDepth.rho, rhoSouthChinaSeaGroundthruth.rho) annotation(
    Line(points = {{28, 36}, {58, 36}, {58, 14}, {76, 14}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 120.0, Interval = 0.1, Tolerance = 1e-06),
  Diagram);
end testRhoVsDepth;