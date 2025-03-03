within Glider_Lib.Simulations;

model TestROGUE
  Vehicles.gliderROGUE gliderROGUE(rho_0(displayUnit = "kg/m3"), L_vehicle = 0.31, m_h = 8.22, m_mov = 2.0, m_w = 0.0, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1, I_w_11 = 0.0, I_w_22 = 0.0, I_w_33 = 0.0, nabla_0 = 11.22*10^(-3), m_s_pos_sat = 0.1, m_s_neg_sat = -0.1, init_latitude = -0.557272337881529, init_longitude = 2.020011979653293, init_altitude = 0.0, v_0 = {0.0001, 0, 0.00001}, VBD_tau = 2.5, K_D0 = 18.0, K_D = 109.0, K_beta = 0.0, K_L0 = 0.0, K_alpha = 306.0, K_M0 = 0.0, K_M = -36.5, r_0 = {-1000, 0, -1000}, enableRhoVsDensity = false, VBD_max_volume = 2.0*10^(-3), VBD_min_volume = -2.0*10^(-3), r_mov = {0.0, 0.0, 0.04}, Z_wdot = 14.0, X_udot = 2.0)  annotation(
    Placement(transformation(origin = {42, 10}, extent = {{-25, -25}, {25, 25}})));
  Modelica.Blocks.Sources.Step step(height = 0)  annotation(
    Placement(transformation(origin = {-19, 85}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step step1(height = 0) annotation(
    Placement(transformation(origin = {-19, 67}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step step2(height = 0) annotation(
    Placement(transformation(origin = {-19, 49}, extent = {{-5, -5}, {5, 5}})));
  Control.manualInputs2Segments ref_VBD(init_offset = 0, ramp_segment1_height = 1.36, ramp_segment1_duration = 10, ramp_segment2_height = -1.36 + 0.64, ramp_segment2_st_time = 100, ramp_segment2_duration = 10)  annotation(
    Placement(transformation(origin = {-86, 26}, extent = {{-10, -10}, {10, 10}})));
  Control.manualInputs2Segments ref_m_s(init_offset = 0, ramp_segment1_duration = 10, ramp_segment1_height = 0.0041, ramp_segment2_duration = 10, ramp_segment2_height = -0.0041*2, ramp_segment2_st_time = 100) annotation(
    Placement(transformation(origin = {-86, -4}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(step.y, gliderROGUE.env_current_speed[1]) annotation(
    Line(points = {{-13.5, 85}, {41, 85}, {41, 37}}, color = {0, 0, 127}));
  connect(step1.y, gliderROGUE.env_current_speed[2]) annotation(
    Line(points = {{-13.5, 67}, {41, 67}, {41, 37}}, color = {0, 0, 127}));
  connect(step2.y, gliderROGUE.env_current_speed[3]) annotation(
    Line(points = {{-13.5, 49}, {41, 49}, {41, 37}}, color = {0, 0, 127}));
  connect(ref_VBD.out_value, gliderROGUE.in_VBD_mass) annotation(
    Line(points = {{-76, 26}, {-56, 26}, {-56, 20}, {8, 20}}, color = {0, 0, 127}));
  connect(ref_m_s.out_value, gliderROGUE.in_mov_shift) annotation(
    Line(points = {{-76, -4}, {-54, -4}, {-54, 4}, {8, 4}}, color = {0, 0, 127}));
  annotation(experiment(StopTime = 500, Interval = 0.1, Tolerance = 1e-06));
end TestROGUE;