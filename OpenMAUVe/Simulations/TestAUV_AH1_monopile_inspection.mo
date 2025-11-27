within OpenMAUVe.Simulations;

model TestAUV_AH1_monopile_inspection "Test the AUV"
  Control.StateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI(saturation_limit = 38.0) annotation(
    Placement(transformation(origin = {-124.5, 51.5}, extent = {{-80.5, -80.5}, {80.5, 80.5}})));
  Modelica.Blocks.Sources.Step ref_x3(height = 0.0) annotation(
    Placement(transformation(origin = {-336, 72}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step ref_x5(height = 0.0) annotation(
    Placement(transformation(origin = {-336, 40}, extent = {{-10, -10}, {10, 10}})));
  Faults.FaultInjection_4thrusters faultInjection_4thrusters(efficiency_after_fault = 100) annotation(
    Placement(visible = true, transformation(origin = {-242.5, 184.5}, extent = {{-27.5, -27.5}, {27.5, 27.5}}, rotation = 0)));
  Modelica.Blocks.Continuous.Integrator yaw_angle_integrator(k = 1) annotation(
    Placement(transformation(origin = {-221, -78}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add(k1 = -1) annotation(
    Placement(visible = true, transformation(origin = {-271, -78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain(k = 0) annotation(
    Placement(transformation(origin = {-271, -39}, extent = {{-10, -10}, {10, 10}})));
  Vehicles.auvAH1 auvAH1(r_0 = {0, 0, 1}, v_0 = {0.001, 0.001, 0.01})  annotation(
    Placement(transformation(origin = {80, 57}, extent = {{-95, -103}, {95, 103}})));
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false)  annotation(
    Placement(transformation(origin = {-39.5, 232.5}, extent = {{-25.5, -25.5}, {25.5, 25.5}})));
  Guidance.orbit_following_segments orbit_following_segments(radius_hexagon = 10.0, x_hex = 30.0, y_hex = 30.0, u_ref_inspection_phase = 0.0, v_ref_inspection_phase = 0.5, min_perc_speed = 10, gamma = 1.5, orbit_slide_sideways = true, interrupt_sim_upon_returned_home = true)  annotation(
    Placement(transformation(origin = {-422, 71}, extent = {{-29, -29}, {29, 29}})));
equation
  connect(ref_x3.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_3) annotation(
    Line(points = {{-325, 72}, {-295, 72}, {-295, 80}, {-159, 80}}, color = {0, 0, 127}));
  connect(ref_x5.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_5) annotation(
    Line(points = {{-325, 40}, {-282, 40}, {-282, 61}, {-159, 61}}, color = {0, 0, 127}));
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
  connect(gain.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_4) annotation(
    Line(points = {{-260, -39}, {-254, -39}, {-254, 70}, {-159, 70}}, color = {0, 0, 127}));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, auvAH1.env_current_speed) annotation(
    Line(points = {{-13, 232.5}, {75, 232.5}, {75, 196}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, auvAH1.signalBus) annotation(
    Line(points = {{-40, 208}, {-40, 156}, {-34, 156}, {-34, -14}, {-1, -14}, {-1, -15}, {220, -15}, {220, 8}, {141, 8}}, color = {255, 204, 51}, thickness = 0.5));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_1, auvAH1.in_thruster_a_p) annotation(
    Line(points = {{-84, 89}, {-32, 89}, {-32, 114}, {-17, 114}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_2, auvAH1.in_thruster_a_s) annotation(
    Line(points = {{-84, 73}, {-26.5, 73}, {-26.5, 81}, {-15, 81}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_3, auvAH1.in_thruster_f_p) annotation(
    Line(points = {{-84, 57}, {-16.5, 57}, {-16.5, 47}, {-14, 47}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_4, auvAH1.in_thruster_f_s) annotation(
    Line(points = {{-84, 43}, {-13, 43}, {-13, 15}}, color = {0, 0, 127}));
  connect(auvAH1.out_angle_DCM[3], add.u2) annotation(
    Line(points = {{214, 0}, {230, 0}, {230, -112}, {-301, -112}, {-301, -84}, {-283, -84}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_u, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_1) annotation(
    Line(points = {{-393, 87}, {-374, 87}, {-374, 100}, {-159, 100}}, color = {0, 0, 127}));
  connect(auvAH1.out_pos_body_wrt_NED_in_NED[1], orbit_following_segments.pos_x) annotation(
    Line(points = {{213, 49}, {247, 49}, {247, -140}, {-481, -140}, {-481, 89}, {-449, 89}}, color = {0, 0, 127}));
  connect(auvAH1.out_pos_body_wrt_NED_in_NED[2], orbit_following_segments.pos_y) annotation(
    Line(points = {{213, 49}, {213, 50.9375}, {214, 50.9375}, {214, 48.875}, {242, 48.875}, {242, 48.75}, {244, 48.75}, {244, 48.5}, {256, 48.5}, {256, -57}, {-472.5, -57}, {-472.5, 72}, {-449, 72}}, color = {0, 0, 127}));
  connect(auvAH1.out_angle_DCM[3], orbit_following_segments.yaw_meas) annotation(
    Line(points = {{214, 0}, {214, -128}, {-466, -128}, {-466, 53}, {-449, 53}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_v, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_2) annotation(
    Line(points = {{-393, 71}, {-359, 71}, {-359, 90}, {-159, 90}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_yaw, gain.u) annotation(
    Line(points = {{-393, 56}, {-376, 56}, {-376, -39}, {-283, -39}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_yaw, add.u1) annotation(
    Line(points = {{-393, 56}, {-376, 56}, {-376, -72}, {-283, -72}}, color = {0, 0, 127}));
  connect(auvAH1.out_lin_vel_body[1], stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_1) annotation(
    Line(points = {{212, 116}, {267, 116}, {267, -48}, {-226, -48}, {-226, 42}, {-159, 42}}, color = {0, 0, 127}));
  connect(auvAH1.out_lin_vel_body[2], stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_2) annotation(
    Line(points = {{212, 116}, {263, 116}, {263, -44}, {-223, -44}, {-223, 33}, {-158, 33}}, color = {0, 0, 127}));
  connect(auvAH1.out_ang_vel_ome[3], stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_3) annotation(
    Line(points = {{213, 88}, {260, 88}, {260, -41}, {-220, -41}, {-220, 22}, {-159, 22}}, color = {0, 0, 127}));
  connect(auvAH1.out_angle_DCM[3], stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_4) annotation(
    Line(points = {{214, 0}, {228, 0}, {228, -37}, {-213, -37}, {-213, 12}, {-159, 12}}, color = {0, 0, 127}));
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-500, -500}, {500, 500}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-500, -500}, {500, 500}}, grid = {1, 1}), graphics = {Text(origin = {-172, 39.5}, extent = {{-5, 4}, {5, -3}}, textString = "u"), Text(origin = {-172, 29.5}, extent = {{-5, 4}, {5, -3}}, textString = "v"), Text(origin = {-172, 19.5}, extent = {{-5, 4}, {5, -3}}, textString = "r"), Text(origin = {-172, 9.5}, extent = {{-4, 6.5}, {4, -6.5}}, textString = "psi")}),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_AH1_monopile_inspection;