within OpenMAUVe.Simulations;
model TestGlider "Test the glider #1"
  Modelica.Blocks.Sources.Constant movable_mass_init_pos(k = 0.0) "units: [m]" annotation (
    Placement(visible = true, transformation(origin = {-46, 72}, extent = {{-6, -6}, {6, 6}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant ref1(k = 0.3)  annotation(
    Placement(visible = true, transformation(origin = {-170, 48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant ref2(k = -0.018) annotation(
    Placement(visible = true, transformation(origin = {-170, 12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OpenMAUVe.Control.StateFeedbackControl stateFeedbackControl(enable_control=
        0.0) annotation (Placement(visible=true, transformation(
        origin={-86,2},
        extent={{-47,-47},{47,47}},
        rotation=0)));
  Modelica.Blocks.Sources.Constant const(k = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-46, 50}, extent = {{-6, -6}, {6, 6}}, rotation = 0)));
  OpenMAUVe.GliderCEPVehicle gliderCEPVehicle(
    I_11=0.51,
    I_11_r=0.0,
    I_22=7.47,
    I_22_r=0.0,
    I_33=7.47,
    I_33_r=0.0,
    K_D=9.4377,
    K_D0=0.0459,
    K_F_delta=10.0,
    K_L0=2.157,
    K_M=0.0,
    K_M_delta=0.0,
    K_Ome_2_1=-50.0,
    K_Ome_2_2=-50.0,
    K_alpha=4.881,
    K_beta=1.4086,
    K_pdot=0.0,
    K_q=0.0,
    K_u_delta=1.0,
    M_qdot=0.0,
    M_wdot=0.0,
    N_rdot=0.0,
    N_vdot=0.0,
    X_udot=5.94,
    Y_rdot=0.0,
    Y_vdot=46.53,
    Z_qdot=0.0,
    Z_wdot=46.53,
    enableAddedMass=false,
    euler_0={0,0.007218681786248547,0},
    g=Modelica.Constants.g_n,
    m_h=55.9,
    m_r=0.0,
    m_w=0.0,
    nabla_0=0.054403893,
    r_CM_hull={0,0,0.0193},
    r_r={0,0,0.0},
    rho(displayUnit="kg/m3") = 1027.5,
    v_0={0.35,0.0,-0.1}) annotation (Placement(visible=true, transformation(
        origin={81,46},
        extent={{-106,-74},{106,74}},
        rotation=0)));
equation
  connect(ref2.y, stateFeedbackControl.ref_2) annotation(
    Line(points = {{-158, 12}, {-132, 12}, {-132, 15}, {-117, 15}}, color = {0, 0, 127}));
  connect(ref1.y, stateFeedbackControl.ref_1) annotation(
    Line(points = {{-158, 48}, {-142, 48}, {-142, 29}, {-117, 29}}, color = {0, 0, 127}));
  connect(gliderCEPVehicle.out_lin_vel_u, stateFeedbackControl.out_1) annotation(
    Line(points = {{114, 62}, {184, 62}, {184, -80}, {-166, -80}, {-166, -12}, {-117, -12}}, color = {0, 0, 127}));
  connect(gliderCEPVehicle.out_lin_vel_w, stateFeedbackControl.out_2) annotation(
    Line(points = {{114, 38}, {162, 38}, {162, -70}, {-156, -70}, {-156, -26}, {-117, -26}}, color = {0, 0, 127}));
  connect(stateFeedbackControl.u_1, gliderCEPVehicle.in_variable_ballast) annotation(
    Line(points = {{-54, 20}, {-26, 20}, {-26, 38}, {48, 38}}, color = {0, 0, 127}));
  connect(stateFeedbackControl.u_2, gliderCEPVehicle.delta_1) annotation(
    Line(points = {{-54, 1}, {0, 1}, {0, 26}, {48, 26}}, color = {0, 0, 127}));
  connect(stateFeedbackControl.u_3, gliderCEPVehicle.delta_2) annotation(
    Line(points = {{-54, -18}, {-7.5, -18}, {-7.5, 16}, {48, 16}}, color = {0, 0, 127}));
  connect(const.y, gliderCEPVehicle.in_pos_m_r) annotation(
    Line(points = {{-39.4, 50}, {48, 50}}, color = {0, 0, 127}));
  connect(movable_mass_init_pos.y, gliderCEPVehicle.in_pos_m_s) annotation(
    Line(points = {{-39.4, 72}, {-4.2, 72}, {-4.2, 62}, {47, 62}}, color = {0, 0, 127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    experiment(
      StopTime=5000,
      Interval=0.1,
      Tolerance=1e-06,
      __Dymola_Algorithm="Dassl"));
end TestGlider;
