within Glider_Lib.Simulations;

model TestAUV "Test the AUV"
  Glider_Lib.Control.StateFeedbackControl_AH1 stateFeedbackControl_AH1(enable_control = 1.0, sat_u1 = 80.5, sat_u2 = 80.5, sat_u3 = 80.5) annotation(
    Placement(visible = true, transformation(origin = {-73, 54}, extent = {{-46.5, -46.5}, {46.5, 46.5}}, rotation = 0)));
  Glider_Lib.Generic_AUV AUV_AH1(I_11 = 300.0, I_22 = 300.0, I_33 = 300.0, K_p = 210.0, K_pp = 3.0, M_q = 210.0, M_qq = 3.0, N_r = 210.0, N_rr = 3.0, X_u = 6.106, X_uu = 5.0, Y_v = 6.106, Y_vv = 5.0, Z_w = 6.106, Z_ww = 5.0, alpha1 = Modelica.Units.Conversions.from_deg(110.0), alpha2 = Modelica.Units.Conversions.from_deg(70.0), alpha3 = Modelica.Units.Conversions.from_deg(180.0), enableAddedMass = false, l1x = -1.01, l1y = -0.353, l2x = -1.01, l2y = 0.353, l3x = 0.75, l3y = 0.0, m_h = 500.0, nabla_0 = 500 / 1027, rho(displayUnit = "kg/m3") = 1027, v_0 = {0.1, 0.0000, 0.002}) annotation(
    Placement(visible = true, transformation(origin = {46.5, 49.5}, extent = {{-75.5, -71.5}, {75.5, 71.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step efficiency_u1(height = -1, offset = 1, startTime = 100)  annotation(
    Placement(visible = true, transformation(origin = {-147.5, 114.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step efficiency_u2(height = 0, offset = 1.0, startTime = 0) annotation(
    Placement(visible = true, transformation(origin = {-147.5, 135.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step efficiency_u3(height = 0, offset = 1.0, startTime = 0) annotation(
    Placement(visible = true, transformation(origin = {-148.5, 157.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x1(height = 0.5, offset = 0, startTime = 20) annotation(
    Placement(visible = true, transformation(origin = {-187.5, 73.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x2(height = 0, offset = 0, startTime = 100) annotation(
    Placement(visible = true, transformation(origin = {-187.5, 48.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
equation
  connect(stateFeedbackControl_AH1.u_2, AUV_AH1.in_T2) annotation(
    Line(points = {{-46, 54}, {-32, 54}, {-32, 56}, {-28, 56}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1.u_3, AUV_AH1.in_T3) annotation(
    Line(points = {{-46, 39}, {-28, 39}}, color = {0, 0, 127}));
  connect(AUV_AH1.out_lin_vel_u, stateFeedbackControl_AH1.out_1) annotation(
    Line(points = {{124, 86}, {124, 85.5}, {164, 85.5}, {164, -42}, {-146, -42}, {-146, 43}, {-96, 43}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1.u_1, AUV_AH1.in_T1) annotation(
    Line(points = {{-46, 71}, {-33, 71}, {-33, 72}, {-29, 72}}, color = {0, 0, 127}));
  connect(efficiency_u1.y, stateFeedbackControl_AH1.phi_1) annotation(
    Line(points = {{-140, 114.5}, {-82.5, 114.5}, {-82.5, 79}, {-82, 79}}, color = {0, 0, 127}));
  connect(efficiency_u2.y, stateFeedbackControl_AH1.phi_2) annotation(
    Line(points = {{-140, 136}, {-70, 136}, {-70, 79}}, color = {0, 0, 127}));
  connect(efficiency_u3.y, stateFeedbackControl_AH1.phi_3) annotation(
    Line(points = {{-141, 158}, {-58, 158}, {-58, 79}}, color = {0, 0, 127}));
  connect(AUV_AH1.out_ang_vel_r, stateFeedbackControl_AH1.out_2) annotation(
    Line(points = {{124, 16}, {148, 16}, {148, -35}, {-136, -35}, {-136, 33}, {-96, 33}}, color = {0, 0, 127}));
  connect(ref_x1.y, stateFeedbackControl_AH1.ref_1) annotation(
    Line(points = {{-180, 73.5}, {-96, 73.5}, {-96, 74}}, color = {0, 0, 127}));
  connect(ref_x2.y, stateFeedbackControl_AH1.ref_2) annotation(
    Line(points = {{-180, 49}, {-170, 49}, {-170, 64}, {-96, 64}}, color = {0, 0, 127}));
protected
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV;