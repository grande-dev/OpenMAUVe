within Glider_Lib.UnitTesting.TestVehicles;

model TestROGUE "This model test a single yo for the ROGUE glider as described in #72."
  Vehicles.gliderROGUE gliderROGUE(rho_0(displayUnit = "kg/m3"), scaleDist = 0.001)  annotation(
    Placement(transformation(origin = {24, 4}, extent = {{-35, -33}, {35, 33}})));
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0)  annotation(
    Placement(transformation(origin = {-53, 85}, extent = {{-5, -5}, {5, 5}})));
  TestVehicles.Groundtruth.ROGUEGroundthruthResults rOGUEGroundthruthResults(checkTimeInit = 10, checkTimeFinal = 400)  annotation(
    Placement(transformation(origin = {62, -40}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Sources.Ramp VBD_input(height = 1.36, duration = 0)  annotation(
    Placement(transformation(origin = {-80, 20}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Ramp m_s_input(height = 0.022, duration = 0)  annotation(
    Placement(transformation(origin = {-80, -8}, extent = {{-6, -6}, {6, 6}})));
equation
  connect(environmental_currents.y, gliderROGUE.env_current_speed) annotation(
    Line(points = {{-48, 86}, {22, 86}, {22, 40}}, color = {0, 0, 127}, thickness = 0.5));
  connect(gliderROGUE.unitTest, rOGUEGroundthruthResults.inputUnitTest) annotation(
    Line(points = {{22, -10}, {22, -40}, {42, -40}}, color = {0, 0, 127}, thickness = 0.5));
  connect(VBD_input.y, gliderROGUE.in_VBD_mass) annotation(
    Line(points = {{-74, 20}, {-64, 20}, {-64, 16}, {-24, 16}}, color = {0, 0, 127}));
  connect(m_s_input.y, gliderROGUE.in_mov_shift) annotation(
    Line(points = {{-74, -8}, {-66, -8}, {-66, -4}, {-24, -4}}, color = {0, 0, 127}));
  annotation(experiment(StopTime = 200, Interval = 0.1, Tolerance = 1e-06));
end TestROGUE;
