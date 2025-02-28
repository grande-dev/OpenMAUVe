within Glider_Lib.Simulations;

model TestROGUE
  Vehicles.gliderROGUE gliderROGUE(rho_0(displayUnit = "kg/m3"), r_g_hull = {0.0, 0.0, 0.04}, L_vehicle = 0.31, m_h = 8.2, m_mov = 2.0, m_w = 0.0, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1, I_w_11 = 0.0, I_w_22 = 0.0, I_w_33 = 0.0, nabla_0 = 11.22*10^(-3), m_s_pos_sat = 0.1, m_s_neg_sat = -0.1, init_latitude = -0.557272337881529, init_longitude = 2.020011979653293, init_altitude = 0.0, v_0 = {0.0001, 0, 0.00001}, VBD_tau = 2.5)  annotation(
    Placement(transformation(origin = {42, 10}, extent = {{-25, -25}, {25, 25}})));
  Modelica.Blocks.Sources.Step step(height = 0)  annotation(
    Placement(transformation(origin = {-19, 85}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step step1(height = 0) annotation(
    Placement(transformation(origin = {-19, 67}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step step2(height = 0) annotation(
    Placement(transformation(origin = {-19, 49}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step in_VBD(height = 0) annotation(
    Placement(transformation(origin = {-77, 29}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step in_mov_mass(height = 0) annotation(
    Placement(transformation(origin = {-75, -3}, extent = {{-5, -5}, {5, 5}})));
equation
  connect(step.y, gliderROGUE.env_current_speed[1]) annotation(
    Line(points = {{-13.5, 85}, {41, 85}, {41, 37}}, color = {0, 0, 127}));
  connect(step1.y, gliderROGUE.env_current_speed[2]) annotation(
    Line(points = {{-13.5, 67}, {41, 67}, {41, 37}}, color = {0, 0, 127}));
  connect(step2.y, gliderROGUE.env_current_speed[3]) annotation(
    Line(points = {{-13.5, 49}, {41, 49}, {41, 37}}, color = {0, 0, 127}));
  connect(in_VBD.y, gliderROGUE.in_VBD_volume) annotation(
    Line(points = {{-71.5, 29}, {-16, 29}, {-16, 19}, {8, 19}}, color = {0, 0, 127}));
  connect(in_mov_mass.y, gliderROGUE.in_mov_shift) annotation(
    Line(points = {{-69.5, -3}, {-16, -3}, {-16, 5.5}, {8, 5.5}, {8, 4}}, color = {0, 0, 127}));
end TestROGUE;