within Glider_Lib.Simulations;

model SimGliderTemplate "The generic template to simulate the generic AUV"
  Vehicles.GenericAUV genericAUV(r_0 = {1, 1, 1}, r_NED = {5.43, -1.49, 2.97}, v_0 = {0, 0, 0}, euler_0 = {0, 0, 0}, w_0 = {0, 0, 0}, m_h = 500, r_g_hull = {0.0, 0.0, 0.05}, planet_radius(displayUnit = "Tm"), nabla_0 = 0.52, r_vbd_mass = {-0.5, 0.3, 0.7}, rho_0(displayUnit = "kg/m3") = 1000, K_D0 = 7.19, K_D = 386.29, K_beta = -115.65, K_L0 = -0.36, K_alpha = 440.99, K_MR = -58.27, K_p_qua_stat = -19.83, K_M0 = 0.28, K_M = -65.84, K_q = -205.64, K_MY = 34.10, K_r = -389.30, L_vehicle = 1.99)  annotation(
    Placement(transformation(origin = {18, 4}, extent = {{-25, -25}, {25, 25}})));
  Modelica.Blocks.Sources.Step source_VBD_mass(height = 0.1, startTime = 1000)  annotation(
    Placement(transformation(origin = {-42, -8}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step source_u_current(height = 0.0, startTime = 1000) annotation(
    Placement(transformation(origin = {-56, 50}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step source_v_current(height = 0.0, startTime = 1000) annotation(
    Placement(transformation(origin = {-70, 42}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step source_w_current(height = 0.0, startTime = 1000) annotation(
    Placement(transformation(origin = {-82, 30}, extent = {{-4, -4}, {4, 4}})));
equation
  connect(source_VBD_mass.y, genericAUV.in_VBD_volume) annotation(
    Line(points = {{-38, -8}, {-6, -8}}, color = {0, 0, 127}));
  connect(source_u_current.y, genericAUV.env_current_speed[1]) annotation(
    Line(points = {{-52, 50}, {-18, 50}, {-18, 26}, {0, 26}}, color = {0, 0, 127}));
  connect(source_v_current.y, genericAUV.env_current_speed[2]) annotation(
    Line(points = {{-66, 42}, {-26, 42}, {-26, 26}, {0, 26}}, color = {0, 0, 127}));
  connect(source_w_current.y, genericAUV.env_current_speed[3]) annotation(
    Line(points = {{-78, 30}, {-44, 30}, {-44, 26}, {0, 26}}, color = {0, 0, 127}));
end SimGliderTemplate;