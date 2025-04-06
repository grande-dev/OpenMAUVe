within Glider_Lib.UnitTesting.TestVehicles;

model TestPetrel2 "This model tests a Seawing glider as described in #99."
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0)  annotation(
    Placement(transformation(origin = {-79, 85}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Ramp VBD_input(height = 0.0, duration = 0, startTime = 30)  annotation(
    Placement(transformation(origin = {-78, 38}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Ramp m_s_input(height = 0.0, duration = 5, startTime = 50, offset = 0)  annotation(
    Placement(transformation(origin = {-76, 0}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Ramp m_r_input(duration = 10, height = 0.0, startTime = 60) annotation(
    Placement(transformation(origin = {-76, -40}, extent = {{-6, -6}, {6, 6}})));
  Vehicles.gliderPetrel2 gliderPetrel2(r_0 = {0, 0, 2}, scaleDist = 10^(-6))  annotation(
    Placement(transformation(origin = {45, -6}, extent = {{-46, -41}, {46, 41}})));
equation
  connect(environmental_currents.y, gliderPetrel2.env_current_speed) annotation(
    Line(points = {{-74, 86}, {44, 86}, {44, 38}}, color = {0, 0, 127}, thickness = 0.5));
  connect(VBD_input.y, gliderPetrel2.in_VBD_mass) annotation(
    Line(points = {{-72, 38}, {-42, 38}, {-42, 8}, {-18, 8}}, color = {0, 0, 127}));
  connect(m_s_input.y, gliderPetrel2.in_mov_shift) annotation(
    Line(points = {{-70, 0}, {-42, 0}, {-42, -12}, {-18, -12}}, color = {0, 0, 127}));
  connect(m_r_input.y, gliderPetrel2.in_mov_roll) annotation(
    Line(points = {{-70, -40}, {-42, -40}, {-42, -36}, {-18, -36}}, color = {0, 0, 127}));
  annotation(experiment(StopTime = 150, Interval = 0.1, Tolerance = 1e-06));
end TestPetrel2;