within Glider_Lib.UnitTesting.TestVehicles;

model TestSLOCUMLikeVehicle "This model tests a single yo for the ROGUE glider as described in #72."
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0)  annotation(
    Placement(transformation(origin = {-41, 65}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Ramp VBD_input(height = 1.047, duration = 0, startTime = 0)  annotation(
    Placement(transformation(origin = {-80, 32}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Ramp m_s_input(height = 0.0198, duration = 0, startTime = 0)  annotation(
    Placement(transformation(origin = {-80, -8}, extent = {{-6, -6}, {6, 6}})));
  Vehicles.gliderSLOCUMLike gliderSLOCUMLike(K_Ome_2_1 = 0, K_Ome_2_2 = 0)  annotation(
    Placement(transformation(origin = {22, 10}, extent = {{-39, -33}, {39, 33}})));
  TestVehicles.Groundtruth.SLOCUMLikeGroundthruthResults sLOCUMLikeGroundthruthResults(checkTimeInit = 1, checkTimeFinal = 600)  annotation(
    Placement(transformation(origin = {70, -46}, extent = {{-20, -20}, {20, 20}})));
equation
  connect(environmental_currents.y, gliderSLOCUMLike.env_current_speed) annotation(
    Line(points = {{-35.5, 65}, {20, 65}, {20, 46}}, color = {0, 0, 127}, thickness = 0.5));
  connect(VBD_input.y, gliderSLOCUMLike.in_VBD_mass) annotation(
    Line(points = {{-73, 32}, {-59.5, 32}, {-59.5, 22}, {-32, 22}}, color = {0, 0, 127}));
  connect(m_s_input.y, gliderSLOCUMLike.in_mov_shift) annotation(
    Line(points = {{-74, -8}, {-60, -8}, {-60, 2}, {-32, 2}}, color = {0, 0, 127}));
  connect(gliderSLOCUMLike.unitTest, sLOCUMLikeGroundthruthResults.inputUnitTest) annotation(
    Line(points = {{28, -12}, {28, -46}, {50, -46}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(experiment(StopTime = 600, Interval = 0.1, Tolerance = 1e-06));
end TestSLOCUMLikeVehicle;
