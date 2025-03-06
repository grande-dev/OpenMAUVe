within Glider_Lib.Scenarios;

model NavigationROGUE
  Modelica.Blocks.Sources.Step step(height = 0)  annotation(
    Placement(transformation(origin = {-19, 85}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step step1(height = 0) annotation(
    Placement(transformation(origin = {-19, 67}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step step2(height = 0) annotation(
    Placement(transformation(origin = {-19, 49}, extent = {{-5, -5}, {5, 5}})));
  Control.manualInputs24h manualInputs24h(target_max_depth = 300, mr_turn_ref = 0, dive_VBD_ref = 1.36, climb_VBD_ref = 0.64)  annotation(
    Placement(transformation(origin = {-72, 16}, extent = {{-20, -20}, {20, 20}})));
  Vehicles.vehicleAQ2UASIM vehicleAQ2UASIM(enableRhoVsDepth = false, r_mov = {0.0, 0.0, 0.04}, L_vehicle = 0.31, m_h = 8.22, m_mov = 2.0, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1, nabla_0 = 11.22*10^(-3), VBD_max_volume = 2.0*10^(-3), VBD_min_volume = -2.0*10^(-3), VBD_tau = 2.5, m_s_pos_sat = 0.1, m_s_neg_sat = 0.1, X_udot = 2.0, Z_wdot = 14.0, K_D0 = 18.0, K_D = 109.0, K_alpha = 306.0, K_M = -36.5, v_0 = {0.000001, 0, 0.0000001}, euler_0 = {0, 0, 2.356194490192345}, scaleDist = 0.001)  annotation(
    Placement(transformation(origin = {45, 9}, extent = {{-30, -28}, {30, 28}})));
equation
  connect(step.y, vehicleAQ2UASIM.env_current_speed[1]) annotation(
    Line(points = {{-14, 86}, {44, 86}, {44, 39}}, color = {0, 0, 127}));
  connect(step1.y, vehicleAQ2UASIM.env_current_speed[2]) annotation(
    Line(points = {{-14, 68}, {44, 68}, {44, 39}}, color = {0, 0, 127}));
  connect(step2.y, vehicleAQ2UASIM.env_current_speed[3]) annotation(
    Line(points = {{-14, 50}, {44, 50}, {44, 39}}, color = {0, 0, 127}));
  connect(manualInputs24h.out_VBD, vehicleAQ2UASIM.in_VBD_mass) annotation(
    Line(points = {{-52, 30}, {-26, 30}, {-26, 19}, {4, 19}}, color = {0, 0, 127}));
  connect(manualInputs24h.out_m_s, vehicleAQ2UASIM.in_mov_shift) annotation(
    Line(points = {{-52, 16}, {-36, 16}, {-36, 3}, {4, 3}}, color = {0, 0, 127}));
  connect(manualInputs24h.out_m_r, vehicleAQ2UASIM.in_mov_roll) annotation(
    Line(points = {{-52, 2}, {-42, 2}, {-42, -12}, {4, -12}}, color = {0, 0, 127}));
  connect(vehicleAQ2UASIM.out_pos_body_wrt_NED_in_NED[3], manualInputs24h.in_depth) annotation(
    Line(points = {{76, 6}, {102, 6}, {102, -30}, {-118, -30}, {-118, 22}, {-92, 22}}, color = {0, 0, 127}));
  annotation(experiment(StopTime = 10800, Interval = 0.1, Tolerance = 1e-06));
end NavigationROGUE;