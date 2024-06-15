within Glider_Lib.Simulations;

model TestAUV_4d "Test the AUV"
  Modelica.Blocks.Sources.Step ref_x2(height = 0, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-221.5, 101.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x1(height = 0.5, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-221.5, 123.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Glider_Lib.Generic_AUV_3d generic_AUV_3d(alpha1 = Modelica.Units.Conversions.from_deg(45.0), alpha2 = Modelica.Units.Conversions.from_deg(-45.0), alpha3 = Modelica.Units.Conversions.from_deg(-45.0), alpha4 = Modelica.Units.Conversions.from_deg(45.0),enableAddedMass = false, rho(displayUnit = "kg/m3"), v_0 = {0.3, 0.3, 0.0})  annotation(
    Placement(visible = true, transformation(origin = {86.5, 45}, extent = {{-71.5, -67}, {71.5, 67}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x3(height = 0, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-221.5, 79.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Glider_Lib.Faults.FaultInjection_4thrusters faultInjection_4thrusters annotation(
    Placement(visible = true, transformation(origin = {-182, 161}, extent = {{-31, -31}, {31, 31}}, rotation = 0)));
  Glider_Lib.Control.StateFeedbackControl_AH1_4in_4out stateFeedbackControl_AH1_4in_4out annotation(
    Placement(visible = true, transformation(origin = {-110.5, 46.5}, extent = {{-70.5, -70.5}, {70.5, 70.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x4(height = Modelica.Units.Conversions.from_deg(10.0), offset = 0, startTime = 1950) annotation(
    Placement(visible = true, transformation(origin = {-221.5, 59.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
equation
  connect(ref_x1.y, stateFeedbackControl_AH1_4in_4out.ref_1) annotation(
    Line(points = {{-214, 124}, {-191, 124}, {-191, 100}, {-148, 100}}, color = {0, 0, 127}));
  connect(ref_x2.y, stateFeedbackControl_AH1_4in_4out.ref_2) annotation(
    Line(points = {{-214, 102}, {-201, 102}, {-201, 89}, {-148, 89}}, color = {0, 0, 127}));
  connect(ref_x3.y, stateFeedbackControl_AH1_4in_4out.ref_3) annotation(
    Line(points = {{-214, 80}, {-148, 80}, {-148, 78}}, color = {0, 0, 127}));
  connect(ref_x4.y, stateFeedbackControl_AH1_4in_4out.ref_4) annotation(
    Line(points = {{-214, 60}, {-200, 60}, {-200, 67}, {-148, 67}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_1, stateFeedbackControl_AH1_4in_4out.h_1) annotation(
    Line(points = {{-155, 189}, {-130, 189}, {-130, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_2, stateFeedbackControl_AH1_4in_4out.h_2) annotation(
    Line(points = {{-155, 170}, {-111, 170}, {-111, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_3, stateFeedbackControl_AH1_4in_4out.h_3) annotation(
    Line(points = {{-155, 150}, {-93, 150}, {-93, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_4, stateFeedbackControl_AH1_4in_4out.h_4) annotation(
    Line(points = {{-154, 134}, {-75, 134}, {-75, 106}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4in_4out.u_1, generic_AUV_3d.F1) annotation(
    Line(points = {{-66, 88}, {14, 88}, {14, 84}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4in_4out.u_2, generic_AUV_3d.F2) annotation(
    Line(points = {{-66, 70}, {3, 70}, {3, 58}, {14, 58}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4in_4out.u_3, generic_AUV_3d.F3) annotation(
    Line(points = {{-66, 53}, {3, 53}, {3, 32}, {16, 32}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4in_4out.u_4, generic_AUV_3d.F4) annotation(
    Line(points = {{-66, 37}, {-5, 37}, {-5, 5}, {16, 5}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_u, stateFeedbackControl_AH1_4in_4out.out_1) annotation(
    Line(points = {{160, 79}, {223, 79}, {223, -34}, {-192, -34}, {-192, 51}, {-148, 51}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_v, stateFeedbackControl_AH1_4in_4out.out_2) annotation(
    Line(points = {{160, 70}, {216, 70}, {216, -28}, {-184, -28}, {-184, 41}, {-148, 41}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_ang_vel_r, stateFeedbackControl_AH1_4in_4out.out_3) annotation(
    Line(points = {{160, 29}, {204, 29}, {204, -21}, {-175, -21}, {-175, 29}, {-148, 29}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_angle_yaw, stateFeedbackControl_AH1_4in_4out.out_4) annotation(
    Line(points = {{160, -5}, {196, -5}, {196, -14}, {-167, -14}, {-167, 18}, {-148, 18}}, color = {0, 0, 127}));
protected
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_4d;