within Glider_Lib.Simulations;

model TestAUV "Test the AUV"
  Modelica.Blocks.Sources.Constant ref1(k = 0.5) annotation(
    Placement(visible = true, transformation(origin = {-178, 89}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant ref2(k = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-179, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Glider_Lib.Control.StateFeedbackControl_AH1 stateFeedbackControl_AH1(enable_control = 1.0, sat_u1 = 80.5, sat_u2 = 80.5, sat_u3 = 80.5) annotation(
    Placement(visible = true, transformation(origin = {-85, 57}, extent = {{-31.5, -31.5}, {31.5, 31.5}}, rotation = 0)));
  Glider_Lib.Generic_AUV AUV_AH1(I_11 = 300.0, I_22 = 300.0, I_33 = 300.0, K_p = 210.0, K_pp = 3.0, M_q = 210.0, M_qq = 3.0, N_r = 210.0, N_rr = 3.0, X_u = 6.106, X_uu = 5.0, Y_v = 6.106, Y_vv = 5.0, Z_w = 6.106, Z_ww = 5.0, alpha1 = Modelica.Units.Conversions.from_deg(110.0), alpha2 = Modelica.Units.Conversions.from_deg(70.0), alpha3 = Modelica.Units.Conversions.from_deg(180.0), enableAddedMass = false, l1x = -1.01, l1y = -0.353, l2x = -1.01, l2y = 0.353, l3x = 0.75, l3y = 0.0, m_h = 500.0, nabla_0 = 500 / 1027, rho(displayUnit = "kg/m3") = 1027, v_0 = {0.1, 0.0000, 0.002}) annotation(
    Placement(visible = true, transformation(origin = {115.5, 50.5}, extent = {{-75.5, -71.5}, {75.5, 71.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step fault_injected(height = -1, offset = 1, startTime = 100)  annotation(
    Placement(visible = true, transformation(origin = {-94, 106}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Product product annotation(
    Placement(visible = true, transformation(origin = {-26, 78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ref1.y, stateFeedbackControl_AH1.ref_1) annotation(
    Line(points = {{-167, 89}, {-136, 89}, {-136, 75}, {-106, 75}}, color = {0, 0, 127}));
  connect(ref2.y, stateFeedbackControl_AH1.ref_2) annotation(
    Line(points = {{-168, 60}, {-133.25, 60}, {-133.25, 66}, {-106, 66}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1.u_2, AUV_AH1.in_T2) annotation(
    Line(points = {{-64, 57}, {74, 57}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1.u_3, AUV_AH1.in_T3) annotation(
    Line(points = {{-64, 44}, {7, 44}, {7, 37}, {74, 37}}, color = {0, 0, 127}));
  connect(AUV_AH1.out_lin_vel_u, stateFeedbackControl_AH1.out_1) annotation(
    Line(points = {{157, 94}, {241, 94}, {241, -40}, {-167, -40}, {-167, 47}, {-106, 47}}, color = {0, 0, 127}));
  connect(AUV_AH1.out_ang_vel_r, stateFeedbackControl_AH1.out_2) annotation(
    Line(points = {{157, 7}, {157, -24}, {-127, -24}, {-127, 38}, {-106, 38}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1.u_1, product.u2) annotation(
    Line(points = {{-64, 70}, {-38, 70}, {-38, 72}}, color = {0, 0, 127}));
  connect(product.y, AUV_AH1.in_T1) annotation(
    Line(points = {{-15, 78}, {74, 78}, {74, 77}}, color = {0, 0, 127}));
  connect(fault_injected.y, product.u1) annotation(
    Line(points = {{-83, 106}, {-47, 106}, {-47, 84}, {-38, 84}}, color = {0, 0, 127}));
protected
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV;