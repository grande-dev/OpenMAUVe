within Glider_Lib.Simulations;

model TestAUV "Test the AUV"
  Glider_Lib.Generic_AUV AUV_AH1(I_11 = 300.0, I_22 = 300.0, I_33 = 300.0, K_p = 210.0, K_pp = 3.0, M_q = 210.0, M_qq = 3.0, N_r = 210.0, N_rr = 3.0, X_u = 6.106, X_uu = 5.0, Y_v = 6.106, Y_vv = 5.0, Z_w = 6.106, Z_ww = 5.0, alpha1(displayUnit = "deg") = Modelica.Units.Conversions.from_deg(110.0), alpha2(displayUnit = "deg") = Modelica.Units.Conversions.from_deg(70.0), alpha3(displayUnit = "deg") = Modelica.Units.Conversions.from_deg(180.0), enableAddedMass = false, l1x = -1.01, l1y = -0.353, l2x = -1.01, l2y = 0.353, l3x = 0.75, l3y = 0.0, m_h = 500.0, nabla_0 = 500 / 1000, rho(displayUnit = "kg/m3") = 1000, v_0 = {0.00001, 0.0000, 0.0000}) annotation(
    Placement(visible = true, transformation(origin = {64.5, 47.5}, extent = {{-75.5, -71.5}, {75.5, 71.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x2(height = 0, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-187.5, 48.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x1(height = 0.5, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-187.5, 73.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Control.StateFeedbackControl_AH1 stateFeedbackControl_AH1(enable_control = 1.0) annotation(
    Placement(visible = true, transformation(origin = {-83, 51}, extent = {{-46.5, -46.5}, {46.5, 46.5}}, rotation = 0)));
  Glider_Lib.Faults.FaultInjection faultInjection annotation(
    Placement(visible = true, transformation(origin = {-145.5, 122.5}, extent = {{-29.5, -29.5}, {29.5, 29.5}}, rotation = 0)));
equation
  connect(stateFeedbackControl_AH1.u_3, AUV_AH1.F3) annotation(
    Line(points = {{-56, 36}, {-42, 36}, {-42, 19}, {-10, 19}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1.u_2, AUV_AH1.F2) annotation(
    Line(points = {{-56, 54}, {-42, 54}, {-42, 47}, {-12, 47}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1.u_1, AUV_AH1.F1) annotation(
    Line(points = {{-56, 68}, {-42, 68}, {-42, 75}, {-12, 75}}, color = {0, 0, 127}));
  connect(ref_x2.y, stateFeedbackControl_AH1.ref_2) annotation(
    Line(points = {{-180, 49}, {-170, 49}, {-170, 61}, {-106, 61}}, color = {0, 0, 127}));
  connect(ref_x1.y, stateFeedbackControl_AH1.ref_1) annotation(
    Line(points = {{-180, 73.5}, {-106, 73.5}, {-106, 71}}, color = {0, 0, 127}));
  connect(AUV_AH1.out_ang_vel_r, stateFeedbackControl_AH1.out_2) annotation(
    Line(points = {{142, 14}, {154, 14}, {154, -8}, {-136, -8}, {-136, 30}, {-106, 30}}, color = {0, 0, 127}));
  connect(AUV_AH1.out_lin_vel_u, stateFeedbackControl_AH1.out_1) annotation(
    Line(points = {{142, 84}, {142, 83.5}, {173, 83.5}, {173, -18}, {-148, -18}, {-148, 40}, {-106, 40}}, color = {0, 0, 127}));
  connect(faultInjection.h_3, stateFeedbackControl_AH1.h_3) annotation(
    Line(points = {{-119, 104}, {-68, 104}, {-68, 76}}, color = {0, 0, 127}));
  connect(faultInjection.h_2, stateFeedbackControl_AH1.h_2) annotation(
    Line(points = {{-119, 123}, {-80, 123}, {-80, 76}}, color = {0, 0, 127}));
  connect(faultInjection.h_1, stateFeedbackControl_AH1.h_1) annotation(
    Line(points = {{-119, 140}, {-92, 140}, {-92, 76}}, color = {0, 0, 127}));
protected
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV;