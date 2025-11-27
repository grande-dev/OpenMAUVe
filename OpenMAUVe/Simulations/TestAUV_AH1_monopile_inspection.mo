within OpenMAUVe.Simulations;

model TestAUV_AH1_monopile_inspection "Test the AUV"
  Control.StateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI(saturation_limit = 38.0) annotation(
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
  Faults.FaultInjection_4thrusters faultInjection_4thrusters(efficiency_after_fault = 10) annotation(
    Placement(visible = true, transformation(origin = {-242.5, 184.5}, extent = {{-27.5, -27.5}, {27.5, 27.5}}, rotation = 0)));
  Modelica.Blocks.Continuous.Integrator yaw_angle_integrator(k = 1) annotation(
    Placement(transformation(origin = {-221, -78}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add(k1 = -1) annotation(
    Placement(visible = true, transformation(origin = {-271, -78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-277, 21}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Vehicles.auvAH1 auvAH1(r_0 = {0, 0, 1}, v_0 = {0.001, 0.001, 0.01})  annotation(
    Placement(transformation(origin = {108.5, 67.5}, extent = {{-83.5, -79.5}, {83.5, 79.5}})));
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false)  annotation(
    Placement(transformation(origin = {5.5, 199.5}, extent = {{-25.5, -25.5}, {25.5, 25.5}})));
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
    Line(points = {{-210, -78}, {-188, -78}, {-188, 1}, {-159, 1}}, color = {0, 0, 127}));
  connect(add.y, yaw_angle_integrator.u) annotation(
    Line(points = {{-260, -78}, {-233, -78}}, color = {0, 0, 127}));
  connect(add.u1, ref_x4.y) annotation(
    Line(points = {{-283, -72}, {-302, -72}, {-302, 10}, {-352, 10}}, color = {0, 0, 127}));
  connect(gain.u, ref_x4.y) annotation(
    Line(points = {{-289, 21}, {-298, 21}, {-298, 10}, {-352, 10}}, color = {0, 0, 127}));
  connect(gain.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_4) annotation(
    Line(points = {{-266, 21}, {-254, 21}, {-254, 70}, {-159, 70}}, color = {0, 0, 127}));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, auvAH1.env_current_speed) annotation(
    Line(points = {{32, 200}, {107, 200}, {107, 153}, {105, 153}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, auvAH1.signalBus) annotation(
    Line(points = {{5, 175}, {5, 18}, {151, 18}, {151, 37}}, color = {255, 204, 51}, thickness = 0.5));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_1, auvAH1.in_thruster_a_p) annotation(
    Line(points = {{-84, 89}, {-49, 89}, {-49, 103}, {41, 103}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_2, auvAH1.in_thruster_a_s) annotation(
    Line(points = {{-84, 73}, {-49, 73}, {-49, 83}, {42, 83}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_3, auvAH1.in_thruster_f_p) annotation(
    Line(points = {{-84, 57}, {-24, 57}, {-24, 62}, {43, 62}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_4, auvAH1.in_thruster_f_s) annotation(
    Line(points = {{-84, 43}, {-49, 43}, {-49, 41}, {43, 41}}, color = {0, 0, 127}));
  connect(auvAH1.out_lin_vel_body[1], stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_1) annotation(
    Line(points = {{201, 104}, {265, 104}, {265, -36}, {-217, -36}, {-217, 42}, {-159, 42}}, color = {0, 0, 127}));
  connect(auvAH1.out_lin_vel_body[2], stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_2) annotation(
    Line(points = {{201, 104}, {265, 104}, {265, -36}, {-217, -36}, {-217, 33}, {-158, 33}}, color = {0, 0, 127}));
  connect(auvAH1.out_ang_vel_ome[3], stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_3) annotation(
    Line(points = {{202, 87}, {263, 87}, {263, -33}, {-213, -33}, {-213, 22}, {-159, 22}}, color = {0, 0, 127}));
  connect(auvAH1.out_angle_DCM[3], stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_4) annotation(
    Line(points = {{203, 32}, {260, 32}, {260, -30}, {-208, -30}, {-208, 12}, {-159, 12}}, color = {0, 0, 127}));
  connect(auvAH1.out_angle_DCM[3], add.u2) annotation(
    Line(points = {{203, 32}, {260, 32}, {260, -108}, {-301, -108}, {-301, -84}, {-283, -84}}, color = {0, 0, 127}));
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-500, -500}, {500, 500}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-500, -500}, {500, 500}}, grid = {1, 1}), graphics = {Text(origin = {-172, 39.5}, extent = {{-5, 4}, {5, -3}}, textString = "u"), Text(origin = {-172, 29.5}, extent = {{-5, 4}, {5, -3}}, textString = "v"), Text(origin = {-172, 19.5}, extent = {{-5, 4}, {5, -3}}, textString = "r"), Text(origin = {-172, 9.5}, extent = {{-4, 6.5}, {4, -6.5}}, textString = "psi")}),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_AH1_monopile_inspection;