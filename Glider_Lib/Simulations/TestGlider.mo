within Glider_Lib.Simulations;

model TestGlider "Test the glider #1"
  Modelica.Blocks.Sources.Constant movable_mass_init_pos(k = -0.0343 * 0) "units: [m]" annotation(
    Placement(visible = true, transformation(extent = {{-106, 64}, {-78, 92}}, rotation = 0)));
  Modelica.Blocks.Math.Add add annotation(
    Placement(visible = true, transformation(origin = {-10, 72}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp rotating_mass_pos(duration = 10, height = Modelica.SIunits.Conversions.from_deg(0), startTime = 10) "units: [deg]" annotation(
    Placement(visible = true, transformation(origin = {-98, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Glider_Lib.GenericGlider_mass_explicit genericGlider_mass_explicit(I_11 = 0.51, I_11_r = 0, I_22 = 7.47, I_22_r = 0, I_33 = 7.47, I_33_r = 0, K_D = 9.4377, K_D0 = 0.0459, K_L0 = 2.157, K_M = -100, K_M0 = 0, K_MR = 0, K_MY = 0, K_Ome_2_1 = 0, K_Ome_2_2 = 0, K_alpha = 4.8813, K_beta = 1.4086 * 0, K_p = 0, K_pdot = 0, K_q = 0, K_r = 0, M_qdot = 0, M_wdot = 0, N_rdot = 0, N_vdot = 0, X_udot = 5.94, Y_rdot = 0, Y_vdot = 46.53, Z_qdot = 0, Z_wdot = 46.53, m_HV_battery = 9.6465, m_battery_enclosure = 1.8291, m_h = 44.9234, m_r = 0, m_w = 0, nabla_0 = 54.89, r_CM_hull = {-0.02234, 0.0, 0.0}, r_HV_batt = {-0.00779, 0.0, 0.0}, r_batt_enclosure = {0.12866, 0.0, 0.0}, r_r = {0.0, 0.0, 0.0}, rho (displayUnit = "kg/m3") = 1027.5)  annotation(
    Placement(visible = true, transformation(origin = {125, 30}, extent = {{-77, -56}, {77, 56}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp VBD_vol_change(duration = 10, height = -0.2 * 0, startTime = 0) "units: [l]" annotation(
    Placement(visible = true, transformation(origin = {-268, -66}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp movable_mass_displacement(duration = 10, height = 0.008 * 0, startTime = 0) "units: [m]" annotation(
    Placement(visible = true, transformation(origin = {-174, 56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add add1 annotation(
    Placement(visible = true, transformation(origin = {-222, -72}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 10, height = 0.2 * 2 * 0, startTime = 100) annotation(
    Placement(visible = true, transformation(origin = {-268, -98}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add add2 annotation(
    Placement(visible = true, transformation(origin = {-98, 34}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp1(duration = 10, height = -0.008 * 2 * 0, startTime = 100) annotation(
    Placement(visible = true, transformation(origin = {-174, 28}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp2(duration = 10, height = (0.0041 + 0.022) * 0, startTime = 200) annotation(
    Placement(visible = true, transformation(origin = {-174, -2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp3(duration = 10, height = (-0.022 * 2) * 0, startTime = 300) annotation(
    Placement(visible = true, transformation(origin = {-174, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add add3 annotation(
    Placement(visible = true, transformation(origin = {-98, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add add4 annotation(
    Placement(visible = true, transformation(origin = {-50, 46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add add5 annotation(
    Placement(visible = true, transformation(origin = {-40, -106}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add add6 annotation(
    Placement(visible = true, transformation(origin = {-154, -112}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp4(duration = 10, height = -0.36 * 2 * 0, startTime = 300) annotation(
    Placement(visible = true, transformation(origin = {-200, -138}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp5(duration = 10, height = 0.36 * 2 * 0, startTime = 200) annotation(
    Placement(visible = true, transformation(origin = {-200, -106}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(movable_mass_init_pos.y, add.u1) annotation(
    Line(points = {{-76, 78}, {-22, 78}}, color = {0, 0, 127}));
  connect(add.y, genericGlider_mass_explicit.in_pos_m_s) annotation(
    Line(points = {{1, 72}, {46, 72}}, color = {0, 0, 127}));
  connect(rotating_mass_pos.y, genericGlider_mass_explicit.in_pos_m_r) annotation(
    Line(points = {{-87, -48}, {-16, -48}, {-16, 41}, {48, 41}}, color = {0, 0, 127}));
  connect(VBD_vol_change.y, add1.u1) annotation(
    Line(points = {{-257, -66}, {-235, -66}}, color = {0, 0, 127}));
  connect(ramp.y, add1.u2) annotation(
    Line(points = {{-257, -98}, {-247, -98}, {-247, -78}, {-235, -78}}, color = {0, 0, 127}));
  connect(movable_mass_displacement.y, add2.u1) annotation(
    Line(points = {{-163, 56}, {-116.5, 56}, {-116.5, 40}, {-110, 40}}, color = {0, 0, 127}));
  connect(ramp1.y, add2.u2) annotation(
    Line(points = {{-163, 28}, {-110, 28}}, color = {0, 0, 127}));
  connect(add4.y, add.u2) annotation(
    Line(points = {{-38, 46}, {-32, 46}, {-32, 66}, {-22, 66}}, color = {0, 0, 127}));
  connect(add2.y, add4.u1) annotation(
    Line(points = {{-86, 34}, {-78, 34}, {-78, 52}, {-62, 52}}, color = {0, 0, 127}));
  connect(add3.y, add4.u2) annotation(
    Line(points = {{-86, -8}, {-74, -8}, {-74, 40}, {-62, 40}}, color = {0, 0, 127}));
  connect(ramp2.y, add3.u1) annotation(
    Line(points = {{-163, -2}, {-110, -2}}, color = {0, 0, 127}));
  connect(ramp3.y, add3.u2) annotation(
    Line(points = {{-163, -30}, {-148, -30}, {-148, -14}, {-110, -14}}, color = {0, 0, 127}));
  connect(ramp5.y, add6.u1) annotation(
    Line(points = {{-189, -106}, {-167, -106}}, color = {0, 0, 127}));
  connect(ramp4.y, add6.u2) annotation(
    Line(points = {{-189, -138}, {-179, -138}, {-179, -118}, {-167, -118}}, color = {0, 0, 127}));
  connect(add1.y, add5.u1) annotation(
    Line(points = {{-210, -72}, {-94, -72}, {-94, -100}, {-52, -100}}, color = {0, 0, 127}));
  connect(add6.y, add5.u2) annotation(
    Line(points = {{-143, -112}, {-52, -112}}, color = {0, 0, 127}));
  connect(add5.y, genericGlider_mass_explicit.in_variable_ballast) annotation(
    Line(points = {{-29, -106}, {-6, -106}, {-6, 10}, {50, 10}}, color = {0, 0, 127}));
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false)),
    Diagram(coordinateSystem(preserveAspectRatio = false)),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06));
end TestGlider;