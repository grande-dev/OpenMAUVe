within Glider_Lib.UnitTesting.TestVehicles;

model TestSeawing "This model tests a Seawing glider as described in #99."
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0)  annotation(
    Placement(transformation(origin = {-79, 85}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Ramp VBD_input(height = 0.3, duration = 0, startTime = 100)  annotation(
    Placement(transformation(origin = {-78, 38}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Ramp m_s_input(height = 0.4216 - 0.401738, duration = 5, startTime = 50)  annotation(
    Placement(transformation(origin = {-76, 0}, extent = {{-6, -6}, {6, 6}})));
  Vehicles.gliderSeawing gliderSeawing(r_0 = {0, 0, 1}, scaleDist = 10^(-6), show_frames_vehicles = true)  annotation(
    Placement(transformation(origin = {45, 9}, extent = {{-38, -48}, {38, 48}})));
  Modelica.Blocks.Sources.Ramp m_r_input(duration = 10, height = 45.0, startTime = 30) annotation(
    Placement(transformation(origin = {-76, -40}, extent = {{-6, -6}, {6, 6}})));
equation
  connect(environmental_currents.y, gliderSeawing.env_current_speed) annotation(
    Line(points = {{-73.5, 85}, {-73.5, 84.5}, {44.5, 84.5}, {44.5, 60}, {44, 60}}, color = {0, 0, 127}, thickness = 0.5));
  connect(VBD_input.y, gliderSeawing.in_VBD_mass) annotation(
    Line(points = {{-72, 38}, {-40, 38}, {-40, 26}, {-6, 26}}, color = {0, 0, 127}));
  connect(m_s_input.y, gliderSeawing.in_mov_shift) annotation(
    Line(points = {{-69, 0}, {-8, 0}, {-8, -2}}, color = {0, 0, 127}));
  connect(m_r_input.y, gliderSeawing.in_mov_roll) annotation(
    Line(points = {{-70, -40}, {-46, -40}, {-46, -26}, {-6, -26}}, color = {0, 0, 127}));
  annotation(experiment(StopTime = 150, Interval = 0.1, Tolerance = 1e-06));
end TestSeawing;