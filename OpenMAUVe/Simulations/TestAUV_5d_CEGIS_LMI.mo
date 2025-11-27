within OpenMAUVe.Simulations;

model TestAUV_5d_CEGIS_LMI "Test the AUV"
  OpenMAUVe.Control.StateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI(saturation_limit = 38.0) annotation(
    Placement(transformation(origin = {-124.5, 51.5}, extent = {{-80.5, -80.5}, {80.5, 80.5}})));
  Modelica.Blocks.Sources.Sine ref_x1(f = 0.02) annotation(
    Placement(visible = true, transformation(origin = {-324, 113}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Cosine ref_x2(f = 0.01) annotation(
    Placement(visible = true, transformation(origin = {-323, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x3(height = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-323, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x4(height = 0.2, startTime = 1000) annotation(
    Placement(visible = true, transformation(origin = {-363, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x5(height = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-323, -23}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OpenMAUVe.Faults.FaultInjection_4thrusters faultInjection_4thrusters(efficiency_after_fault = 10) annotation(
    Placement(visible = true, transformation(origin = {-242.5, 184.5}, extent = {{-27.5, -27.5}, {27.5, 27.5}}, rotation = 0)));
  Modelica.Blocks.Continuous.Integrator yaw_angle_integrator(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-219, -76}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add add(k1 = -1) annotation(
    Placement(visible = true, transformation(origin = {-271, -78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-277, 21}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ref_x1.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_1) annotation(
    Line(points = {{-313, 113}, {-251, 113}, {-251, 100}, {-159, 100}}, color = {0, 0, 127}));
  connect(ref_x2.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_2) annotation(
    Line(points = {{-312, 80}, {-251, 80}, {-251, 90}, {-159, 90}}, color = {0, 0, 127}));
  connect(ref_x3.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_3) annotation(
    Line(points = {{-312, 44}, {-294, 44}, {-294, 75}, {-238, 75}, {-238, 80}, {-159, 80}}, color = {0, 0, 127}));
  connect(ref_x5.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_5) annotation(
    Line(points = {{-312, -23}, {-282, -23}, {-282, 61}, {-159, 61}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_1, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_1) annotation(
    Line(points = {{-218, 209}, {-142, 209}, {-142, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_2, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_2) annotation(
    Line(points = {{-218, 193}, {-127, 193}, {-127, 106}, {-125, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_3, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_3) annotation(
    Line(points = {{-218, 175}, {-108, 175}, {-108, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_4, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_4) annotation(
    Line(points = {{-218, 160}, {-92, 160}, {-92, 106}}, color = {0, 0, 127}));
  connect(yaw_angle_integrator.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_5) annotation(
    Line(points = {{-208, -76}, {-188, -76}, {-188, 1}, {-159, 1}}, color = {0, 0, 127}));
  connect(add.y, yaw_angle_integrator.u) annotation(
    Line(points = {{-260, -78}, {-231, -78}, {-231, -76}}, color = {0, 0, 127}));
  connect(add.u1, ref_x4.y) annotation(
    Line(points = {{-283, -72}, {-302, -72}, {-302, 10}, {-352, 10}}, color = {0, 0, 127}));
  connect(gain.u, ref_x4.y) annotation(
    Line(points = {{-289, 21}, {-298, 21}, {-298, 10}, {-352, 10}}, color = {0, 0, 127}));
  connect(gain.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_4) annotation(
    Line(points = {{-266, 21}, {-254, 21}, {-254, 70}, {-159, 70}}, color = {0, 0, 127}));
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1}), graphics = {Text(origin = {-172, 39.5}, extent = {{-5, 4}, {5, -3}}, textString = "u"), Text(origin = {-172, 29.5}, extent = {{-5, 4}, {5, -3}}, textString = "v"), Text(origin = {-172, 19.5}, extent = {{-5, 4}, {5, -3}}, textString = "r"), Text(origin = {-172, 9.5}, extent = {{-4, 6.5}, {4, -6.5}}, textString = "psi")}),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_5d_CEGIS_LMI;