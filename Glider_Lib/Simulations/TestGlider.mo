within Glider_Lib.Simulations;
model TestGlider "Test the glider #1"
  Modelica.Blocks.Sources.Constant movable_mass_init_pos(k = 0.0) "units: [m]" annotation (
    Placement(visible = true, transformation(origin = {-98, 84}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Glider_Lib.GliderCEPVehicle gliderCEPVehicle(I_11 = 0.51, I_11_r = 0.0, I_22 = 7.47, I_22_r = 0.0, I_33 = 7.47, I_33_r = 0.0, K_D = 9.4377, K_D0 = 0.0459,K_F_delta = 10.0, K_L0 = 2.157, K_M = 0.0, K_M_delta = -65.84, K_Ome_2_1 = 0.0, K_Ome_2_2 = 0.0, K_alpha = 4.881, K_beta = 1.4086, K_pdot = 0.0, K_q = 0.0, K_u_delta = 1.0, M_qdot = 1.37, M_wdot = 0.0, N_rdot = 1.37, N_vdot = 0.0, X_udot = 5.34, Y_rdot = 0.0, Y_vdot = 46.53, Z_qdot = 0.0, Z_wdot = 46.53, enableAddedMass = true, euler_0(each displayUnit = "deg") = {0, 0.1745329251994329, 0}, g = Modelica.Constants.g_n, m_h = 55.9, m_r = 0.0, m_w = 0.0, nabla_0 = 0.056399, r_CM_hull = {0.0, 0.0, 0.0}, rho(displayUnit = "g/cm3") = 1027.5, v_0 = {0.2, 0.0, -0.1})  annotation(
    Placement(visible = true, transformation(origin = {109, 26}, extent = {{-71, -48}, {71, 48}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-98, 36}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant1(k = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-100, -6}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const1(k = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-98, -40}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const2(k = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-100, -70}, extent = {{-8, -8}, {8, 8}}, rotation = 0)));
equation
  connect(movable_mass_init_pos.y, gliderCEPVehicle.in_pos_m_s) annotation(
    Line(points = {{-90, 84}, {-22, 84}, {-22, 62}, {36, 62}}, color = {0, 0, 127}));
  connect(const.y, gliderCEPVehicle.in_pos_m_r) annotation(
    Line(points = {{-89, 36}, {38, 36}}, color = {0, 0, 127}));
  connect(constant1.y, gliderCEPVehicle.in_variable_ballast) annotation(
    Line(points = {{-92, -6}, {-2, -6}, {-2, 8}, {40, 8}}, color = {0, 0, 127}));
  connect(const1.y, gliderCEPVehicle.delta_1) annotation(
    Line(points = {{-90, -40}, {-12, -40}, {-12, -18}, {40, -18}}, color = {0, 0, 127}));
  connect(const2.y, gliderCEPVehicle.delta_2) annotation(
    Line(points = {{-92, -70}, {-4, -70}, {-4, -42}, {40, -42}}, color = {0, 0, 127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio = false)),
    Diagram(coordinateSystem(preserveAspectRatio = false)),
    experiment(
      StopTime=5000,
      Interval=0.1,
      Tolerance=1e-06,
      __Dymola_Algorithm="Dassl"));
end TestGlider;