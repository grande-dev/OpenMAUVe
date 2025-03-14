within Glider_Lib.Scenarios;
model NavigationAQ2UASIM
  Modelica.Blocks.Sources.Step step(height = 0)  annotation (
    Placement(transformation(origin = {-19, 85}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step step1(height = 0) annotation (
    Placement(transformation(origin = {-19, 67}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Step step2(height = 0) annotation (
    Placement(transformation(origin = {-19, 49}, extent = {{-5, -5}, {5, 5}})));
  Vehicles.vehicleAQ2UASIM_ste
                           vehicleAQ2UASIM_ste(
    enableAddedMassEffects=false,          enableRhoVsDepth = false,
    r_mov={0.0,0.0,0.04},                                                                      L_vehicle = 0.31, m_h = 8.22, m_mov = 2.0, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1, nabla_0 = 11.22*10^(-3), VBD_max_volume = 2.0*10^(-3), VBD_min_volume = -2.0*10^(-3), VBD_tau = 2.5, m_s_pos_sat = 0.1, m_s_neg_sat = 0.1, X_udot = 2.0, Z_wdot = 14.0, K_D0 = 18.0, K_D = 109.0, K_alpha = 306.0, K_M = -36.5,
    v_0={1,0,0.0000001},
    euler_0={0,0,0},                                                                                                                                                                                                        scaleDist = 0.001,
    enablePointMass=false,
    enableMovableMass=false,
    enableVBDMass=false,
    enableBuoyancy=false)                                                                                                                                                                                                        annotation (
    Placement(transformation(origin = {45, 9}, extent = {{-30, -28}, {30, 28}})));
  Control.ManualInputs.manualInputsRepeatYo manualInputsRepeatYo(mr_turn_ref = 0, target_max_depth = 300)  annotation (
    Placement(transformation(origin = {-68, 10}, extent = {{-20, -20}, {20, 20}})));
equation
  connect(step.y, vehicleAQ2UASIM_ste.env_current_speed[1]) annotation (Line(
        points={{-13.5,85},{43.8,85},{43.8,38.3813}}, color={0,0,127}));
  connect(step1.y, vehicleAQ2UASIM_ste.env_current_speed[2]) annotation (Line(
        points={{-13.5,67},{43.8,67},{43.8,39.128}}, color={0,0,127}));
  connect(step2.y, vehicleAQ2UASIM_ste.env_current_speed[3]) annotation (Line(
        points={{-13.5,49},{43.8,49},{43.8,39.8747}}, color={0,0,127}));
  connect(manualInputsRepeatYo.out_VBD, vehicleAQ2UASIM_ste.in_VBD_mass)
    annotation (Line(points={{-47.6,23},{-24,23},{-24,19.08},{3.96,19.08}},
        color={0,0,127}));
  connect(manualInputsRepeatYo.out_m_s, vehicleAQ2UASIM_ste.in_mov_shift)
    annotation (Line(points={{-47.6,9.6},{-30,9.6},{-30,2.616},{3.72,2.616}},
        color={0,0,127}));
  connect(manualInputsRepeatYo.out_m_r, vehicleAQ2UASIM_ste.in_mov_roll)
    annotation (Line(points={{-47.4,-3.4},{-34,-3.4},{-34,-12.168},{3.96,-12.168}},
        color={0,0,127}));
  connect(vehicleAQ2UASIM_ste.out_pos_body_wrt_NED_in_NED[3],
    manualInputsRepeatYo.in_depth) annotation (Line(points={{75.72,6.68533},{96,
          6.68533},{96,-38},{-100,-38},{-100,15},{-88,15}}, color={0,0,127}));
  annotation(experiment(StopTime = 10800, Interval = 0.1, Tolerance = 1e-06));
end NavigationAQ2UASIM;
