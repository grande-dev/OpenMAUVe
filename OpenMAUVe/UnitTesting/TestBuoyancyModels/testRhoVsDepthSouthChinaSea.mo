within OpenMAUVe.UnitTesting.TestBuoyancyModels;

model testRhoVsDepthSouthChinaSea
  Hydrostatics.rhoVsDepthSouthChinaSea rhoVsDepthSouthChinaSea annotation(
    Placement(transformation(origin = {-5, 7}, extent = {{-29, -29}, {29, 29}})));
  Sensors.SignalBus signalBus annotation(
    Placement(transformation(origin = {-4, -64}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {6, -64}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Ramp posObwrtNED0inNED0[3](each height = 1500, each duration = 100, each offset = 0, each startTime = 10) annotation(
    Placement(transformation(origin = {-84, -16}, extent = {{-10, -10}, {10, 10}})));
  VerificationSimulator.GroundthruthVerification.RhoSouthChinaSeaGroundthruth rhoSouthChinaSeaGroundthruth(densityAtSurface(displayUnit = "kg/m3"), densityAt1500m(displayUnit = "kg/m3"))  annotation(
    Placement(transformation(origin = {86, 14}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(signalBus, rhoVsDepthSouthChinaSea.signalBus) annotation(
    Line(points = {{-4, -64}, {-4, -16}}, thickness = 0.5));
  connect(rhoVsDepthSouthChinaSea.rho, signalBus.rho) annotation(
    Line(points = {{25, 31}, {40, 31}, {40, -64}, {-4, -64}}, color = {0, 0, 127}));
  connect(rhoVsDepthSouthChinaSea.rho, rhoSouthChinaSeaGroundthruth.rho) annotation(
    Line(points = {{24, 32}, {50, 32}, {50, 14}, {76, 14}}, color = {0, 0, 127}));
  connect(posObwrtNED0inNED0.y, signalBus.positionBodyWrtNED0inNED0) annotation(
    Line(points = {{-72, -16}, {-52, -16}, {-52, -64}, {-4, -64}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(
    experiment(StopTime = 120.0, Interval = 0.1, Tolerance = 1e-06),
  Diagram);
end testRhoVsDepthSouthChinaSea;