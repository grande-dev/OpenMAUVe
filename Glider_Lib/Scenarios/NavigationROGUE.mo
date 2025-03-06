within Glider_Lib.Scenarios;

model NavigationROGUE
  Vehicles.gliderROGUE gliderROGUE(rho_0(displayUnit = "kg/m3"), L_vehicle = 0.31, m_h = 8.22, m_mov = 2.0, m_w = 0.0, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1, I_w_11 = 0.0, I_w_22 = 0.0, I_w_33 = 0.0, nabla_0 = 11.22*10^(-3), m_s_pos_sat = 0.1, m_s_neg_sat = -0.1, init_latitude = -0.557272337881529, init_longitude = 2.020011979653293, init_altitude = 0.0, v_0 = {0.000001, 0, 0.0000001}, VBD_tau = 2.5, K_D0 = 18.0, K_D = 109.0, K_beta = 0.0, K_L0 = 0.0, K_alpha = 306.0, K_M0 = 0.0, K_M = -36.5, r_0 = {0, 0, 0}, enableRhoVsDensity = false, VBD_max_volume = 2.0*10^(-3), VBD_min_volume = -2.0*10^(-3), r_mov = {0.0, 0.0, 0.04}, Z_wdot = 14.0, X_udot = 2.0, scaleDist = 0.001, enableAddedMassEffects = false, euler_0 = {0, 0, 2.356194490192345})  annotation(
    Placement(transformation(origin = {42, 10}, extent = {{-25, -25}, {25, 25}})));
  Modelica.Blocks.Sources.Step step(height = 0)  annotation(
    Placement(transformation(origin = {-19, 85}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step step1(height = 0) annotation(
    Placement(transformation(origin = {-19, 67}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step step2(height = 0) annotation(
    Placement(transformation(origin = {-19, 49}, extent = {{-5, -5}, {5, 5}})));
  Control.manualInputs24h manualInputs24h(target_max_depth = 300, mr_turn_ref = 0, dive_VBD_ref = 1.0, climb_VBD_ref = 1.0)  annotation(
    Placement(transformation(origin = {-72, 16}, extent = {{-20, -20}, {20, 20}})));
equation
  connect(step.y, gliderROGUE.env_current_speed[1]) annotation(
    Line(points = {{-13.5, 85}, {41, 85}, {41, 37}}, color = {0, 0, 127}));
  connect(step1.y, gliderROGUE.env_current_speed[2]) annotation(
    Line(points = {{-13.5, 67}, {41, 67}, {41, 37}}, color = {0, 0, 127}));
  connect(step2.y, gliderROGUE.env_current_speed[3]) annotation(
    Line(points = {{-13.5, 49}, {41, 49}, {41, 37}}, color = {0, 0, 127}));
  connect(gliderROGUE.out_pos_body_wrt_NED_in_NED[3], manualInputs24h.in_depth) annotation(
    Line(points = {{68, 8}, {92, 8}, {92, -30}, {-112, -30}, {-112, 21}, {-92, 21}}, color = {0, 0, 127}));
  connect(manualInputs24h.out_VBD, gliderROGUE.in_VBD_mass) annotation(
    Line(points = {{-52, 29}, {-28, 29}, {-28, 20}, {8, 20}}, color = {0, 0, 127}));
  connect(manualInputs24h.out_m_s, gliderROGUE.in_mov_shift) annotation(
    Line(points = {{-52, 16}, {-32, 16}, {-32, 4}, {8, 4}}, color = {0, 0, 127}));
  connect(manualInputs24h.out_m_r, gliderROGUE.in_mov_roll) annotation(
    Line(points = {{-52, 2}, {-44, 2}, {-44, -8}, {8, -8}}, color = {0, 0, 127}));
  annotation(experiment(StopTime = 10800, Interval = 0.1, Tolerance = 1e-06));
end NavigationROGUE;