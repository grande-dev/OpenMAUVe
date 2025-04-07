within OpenMAUVe.Simulations;
model SimGliderTemplate "The generic template to simulate the generic AUV"
  Vehicles.GenericAUV genericAUV(
                                 r_0 = {1, 1, 1},
                                                  v_0 = {0.0001, 0, 0.00001},
                                                                              euler_0 = {0, 0, 0},
                                                                                                   w_0 = {0, 0, 0},
                                                                                                                    m_h = 54.28,
                                                                                                                                 r_g_hull = {0.0, 0.0, 0.05},
                                                                                                                                                              planet_radius(displayUnit = "Tm"),
                                                                                                                                                                                                 nabla_0 = 0.063687805,
                                                                                                                                                                                                            r_vbd_mass = {0.0, 0.0, 0.0},
                                                                                                                                                                                                            rho_0(displayUnit = "kg/m3") = 1025,
                                                                                                                                                                                                            K_D0 = 7.19,
                                                                                                                                                                                                            K_D = 386.29,
                                                                                                                                                                                                            K_beta = -115.65,
                                                                                                                                                                                                            K_L0 = -0.36,
                                                                                                                                                                                                            K_alpha = 440.99,
                                                                                                                                                                                                            K_MR = -58.27,
                                                                                                                                                                                                            K_p_qua_stat = -19.83,
                                                                                                                                                                                                            K_M0 = 0.28,
                                                                                                                                                                                                            K_M = -65.84,
                                                                                                                                                                                                            K_q = -205.64,
                                                                                                                                                                                                            K_MY = 34.10,
                                                                                                                                                                                                            K_r = -389.30,
                                                                                                                                                                                                            L_vehicle = 1.99,
                                                                                                                                                                                                            I_11 = 0.60,
                                                                                                                                                                                                            I_22 = 15.27,
                                                                                                                                                                                                            I_33 = 15.32,
                                                                                                                                                                                                            enableRhoVsDepth = false,
                                                                                                                                                                                                            m_mov = 11.0,
                                                                                                                                                                                                            r_mov = {0.4016, 0.0, 0.014},
                                                                                                                                                                                                            r_w = {0.0, 0.0, 0.0},
                                                                                                                                                                                                            m_w = 0.0,
                                                                                                                                                                                                            I_mov_11 = 0.02,
                                                                                                                                                                                                            I_mov_22 = 10.16,
                                                                                                                                                                                                            I_mov_33 = 0.17,
                                                                                                                                                                                                            VBD_max_volume = 0.000487805,
                                                                                                                                                                                                            VBD_min_volume = -0.000487805,
                                                                                                                                                                                                            VBD_tau = 2.5,
                                                                                                                                                                                                            m_s_pos_sat = 0.05,
                                                                                                                                                                                                            m_s_neg_sat = -0.05,
                                                                                                                                                                                                            m_r_pos_angle = 0.7853981633974483,
                                                                                                                                                                                                            m_r_neg_angle = -0.7853981633974483,
                                                                                                                                                                                                            r_thruster1 = {-1.0, 0.0, 0.0},
                                                                                                                                                                                                            thruster_max_force1 = 51.48,
                                                                                                                                                                                                            thruster_min_force1 = -40.21,
                                                                                                                                                                                                            thruster_deadband_neg1 = -0.3457,
                                                                                                                                                                                                            thruster_deadband_pos1 = 0.3457,
                                                                                                                                                                                                            thruster_tau1 = 0.025,
                                                                                                                                                                                                            D_p1 = 0.076,
                                                                                                                                                                                                            K_T1 = 0.00010783,
                                                                                                                                                                                                            init_latitude( displayUnit = "deg")= -0.557272337881529,
                                                                                                                                                                                                            init_longitude( displayUnit = "deg")= 2.020011979653293,
                                                                                                                                                                                                            init_altitude = 0.0)  annotation(
    Placement(transformation(origin = {26, -8}, extent = {{-25, -25}, {25, 25}})));
  Modelica.Blocks.Sources.Step source_VBD_mass(height = -0.05*0, startTime = 100)  annotation(
    Placement(transformation(origin = {-62, -6}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step source_u_current(height = 0.0, startTime = 1000) annotation(
    Placement(transformation(origin = {-56, 50}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step source_v_current(height = 0.0, startTime = 1000) annotation(
    Placement(transformation(origin = {-70, 42}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step source_w_current(height = 0.0, startTime = 1000) annotation(
    Placement(transformation(origin = {-82, 30}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step source_mass_shift(height = 1.0*0, startTime = 100) annotation(
    Placement(transformation(origin = {-62, -24}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step source_mass_roll(height = 55*0, startTime = 10) annotation(
    Placement(transformation(origin = {-62, -40}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step source_rpm_T1(height = 0, startTime = 100) annotation(
    Placement(transformation(origin = {-62, -64}, extent = {{-4, -4}, {4, 4}})));
equation
  connect(source_VBD_mass.y, genericAUV.in_VBD_volume) annotation(
    Line(points = {{-58, -6}, {-30, -6}, {-30, -12}, {-2, -12}}, color = {0, 0, 127}));
  connect(source_mass_shift.y, genericAUV.in_mov_shift) annotation(
    Line(points = {{-58, -24}, {-2, -24}}, color = {0, 0, 127}));
  connect(source_mass_roll.y, genericAUV.in_mov_roll) annotation(
    Line(points = {{-58, -40}, {-30, -40}, {-30, -32}, {-2, -32}}, color = {0, 0, 127}));
  connect(source_u_current.y, genericAUV.env_current_speed[1]) annotation(
    Line(points = {{-52, 50}, {26, 50}, {26, 18}}, color = {0, 0, 127}));
  connect(source_v_current.y, genericAUV.env_current_speed[2]) annotation(
    Line(points = {{-66, 42}, {26, 42}, {26, 18}}, color = {0, 0, 127}));
  connect(source_w_current.y, genericAUV.env_current_speed[3]) annotation(
    Line(points = {{-78, 30}, {26, 30}, {26, 18}}, color = {0, 0, 127}));
  connect(source_rpm_T1.y, genericAUV.in_prop_RPM) annotation(
    Line(points = {{-58, -64}, {-18, -64}, {-18, -40}, {-2, -40}}, color = {0, 0, 127}));
end SimGliderTemplate;
