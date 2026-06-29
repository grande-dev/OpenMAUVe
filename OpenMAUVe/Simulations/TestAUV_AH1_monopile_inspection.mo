within OpenMAUVe.Simulations;

model TestAUV_AH1_monopile_inspection "Test the AUV"
  Control.StateFeedbackControl_AH1_static_feedback StateFeedbackControl_AH1_static_feedback(saturation_limit = 38.0) annotation(
    Placement(transformation(origin = {-124.5, 51.5}, extent = {{-80.5, -80.5}, {80.5, 80.5}})));
  Modelica.Blocks.Sources.Step ref_x3(height = 0.0) annotation(
    Placement(transformation(origin = {-336, 72}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step ref_x5(height = 0.0) annotation(
    Placement(transformation(origin = {-336, 40}, extent = {{-10, -10}, {10, 10}})));
  Faults.FaultInjection_4thrusters faultInjection_4thrusters(efficiency_after_fault = 0, time_fault_u1 = 100, time_fault_u2 = 500, time_fault_u3 = 900, time_fault_u4 = 1300, fault_duration = 60) annotation(
    Placement(visible = true, transformation(origin = {-242.5, 184.5}, extent = {{-27.5, -27.5}, {27.5, 27.5}}, rotation = 0)));
  Modelica.Blocks.Continuous.Integrator yaw_angle_integrator(k = 1) annotation(
    Placement(transformation(origin = {-221, -78}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add(k1 = -1) annotation(
    Placement(visible = true, transformation(origin = {-271, -78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain(k = 0) annotation(
    Placement(transformation(origin = {-271, -39}, extent = {{-10, -10}, {10, 10}})));
  Vehicles.auvAH1 auvAH1(command_thrusters_as_force = true, earthAngularSpeed = 0.0, r_0 = {0, 0, 20.0}, v_0 = {0, 0, 0}, rho_0(displayUnit = "kg/m3") = 1000, I_11 = 300.0, I_22 = 300.0, I_33 = 300.0, N_r = 210.0, N_rr = 3.0, nabla_0 = 0.5, Z_w = 6.106, Z_ww = 5.0, K_pp = 3.0, M_qq = 3.0, r_g_hull = {0, 0, 0}, enableNoiseSensors = true, noise_linear_velocity_gain = 10.0, noise_angular_velocity_gain = 10.0)  annotation(
    Placement(transformation(origin = {73, 50}, extent = {{-95, -103}, {95, 103}})));
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false)  annotation(
    Placement(transformation(origin = {-39.5, 232.5}, extent = {{-25.5, -25.5}, {25.5, 25.5}})));
  Guidance.orbit_following_segments orbit_following_segments(radius_hexagon = 10.0, x_hex = 30.0, y_hex = 30.0, u_ref_approach_phase = 0.5, v_ref_approach_phase = 0.0, u_ref_inspection_phase = 0.0, v_ref_inspection_phase = 0.4, min_perc_speed = 10, gamma = 1.5, orbit_slide_sideways = true, interrupt_sim_upon_returned_home = true)  annotation(
    Placement(transformation(origin = {-422, 71}, extent = {{-29, -29}, {29, 29}})));
equation
  connect(ref_x3.y, StateFeedbackControl_AH1_static_feedback.ref_3) annotation(
    Line(points = {{-325, 72}, {-295, 72}, {-295, 80}, {-159, 80}}, color = {0, 0, 127}));
  connect(ref_x5.y, StateFeedbackControl_AH1_static_feedback.ref_5) annotation(
    Line(points = {{-325, 40}, {-282, 40}, {-282, 61}, {-159, 61}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_1, StateFeedbackControl_AH1_static_feedback.h_1) annotation(
    Line(points = {{-218, 209}, {-142, 209}, {-142, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_2, StateFeedbackControl_AH1_static_feedback.h_2) annotation(
    Line(points = {{-218, 193}, {-127, 193}, {-127, 106}, {-125, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_3, StateFeedbackControl_AH1_static_feedback.h_3) annotation(
    Line(points = {{-218, 175}, {-108, 175}, {-108, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_4, StateFeedbackControl_AH1_static_feedback.h_4) annotation(
    Line(points = {{-218, 160}, {-92, 160}, {-92, 106}}, color = {0, 0, 127}));
  connect(yaw_angle_integrator.y, StateFeedbackControl_AH1_static_feedback.out_5) annotation(
    Line(points = {{-210, -78}, {-188, -78}, {-188, 1}, {-159, 1}}, color = {0, 0, 127}));
  connect(add.y, yaw_angle_integrator.u) annotation(
    Line(points = {{-260, -78}, {-233, -78}}, color = {0, 0, 127}));
  connect(gain.y, StateFeedbackControl_AH1_static_feedback.ref_4) annotation(
    Line(points = {{-260, -39}, {-254, -39}, {-254, 70}, {-159, 70}}, color = {0, 0, 127}));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, auvAH1.env_current_speed) annotation(
    Line(points = {{-13, 232.5}, {68, 232.5}, {68, 189}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, auvAH1.signalBus) annotation(
    Line(points = {{-40, 208}, {-40, 156}, {-65, 156}, {-65, -19}, {134, -19}, {134, 1}}, color = {255, 204, 51}, thickness = 0.5));
  connect(StateFeedbackControl_AH1_static_feedback.u_1, auvAH1.in_thruster_a_p) annotation(
    Line(points = {{-84, 89}, {-32, 89}, {-32, 107}, {-24, 107}}, color = {0, 0, 127}));
  connect(StateFeedbackControl_AH1_static_feedback.u_2, auvAH1.in_thruster_a_s) annotation(
    Line(points = {{-84, 73}, {-26.5, 73}, {-26.5, 74}, {-22, 74}}, color = {0, 0, 127}));
  connect(auvAH1.out_angle_rad[3], add.u2) annotation(
    Line(points = {{207, -20}, {230, -20}, {230, -112}, {-301, -112}, {-301, -84}, {-283, -84}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_u, StateFeedbackControl_AH1_static_feedback.ref_1) annotation(
    Line(points = {{-393, 87}, {-374, 87}, {-374, 100}, {-159, 100}}, color = {0, 0, 127}));
  connect(auvAH1.out_pos_body_wrt_NED_in_NED[1], orbit_following_segments.pos_x) annotation(
    Line(points = {{206, 42}, {247, 42}, {247, -140}, {-481, -140}, {-481, 89}, {-449, 89}}, color = {0, 0, 127}));
  connect(auvAH1.out_pos_body_wrt_NED_in_NED[2], orbit_following_segments.pos_y) annotation(
    Line(points = {{206, 42}, {206, 48.875}, {242, 48.875}, {242, 48.75}, {244, 48.75}, {244, 48.5}, {256, 48.5}, {256, -57}, {-472.5, -57}, {-472.5, 72}, {-449, 72}}, color = {0, 0, 127}));
  connect(auvAH1.out_angle_rad[3], orbit_following_segments.yaw_meas) annotation(
    Line(points = {{207, -20}, {207, -23.125}, {206, -23.125}, {206, -20.5}, {230, -20.5}, {230, -129}, {-466, -129}, {-466, 53}, {-449, 53}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_v, StateFeedbackControl_AH1_static_feedback.ref_2) annotation(
    Line(points = {{-393, 71}, {-359, 71}, {-359, 90}, {-159, 90}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_yaw, gain.u) annotation(
    Line(points = {{-393, 56}, {-376, 56}, {-376, -39}, {-283, -39}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_yaw, add.u1) annotation(
    Line(points = {{-393, 56}, {-376, 56}, {-376, -72}, {-283, -72}}, color = {0, 0, 127}));
  connect(auvAH1.out_lin_vel_body[1], StateFeedbackControl_AH1_static_feedback.out_1) annotation(
    Line(points = {{205, 109}, {267, 109}, {267, -48}, {-226, -48}, {-226, 42}, {-159, 42}}, color = {0, 0, 127}));
  connect(auvAH1.out_lin_vel_body[2], StateFeedbackControl_AH1_static_feedback.out_2) annotation(
    Line(points = {{205, 109}, {263, 109}, {263, -44}, {-223, -44}, {-223, 33}, {-158, 33}}, color = {0, 0, 127}));
  connect(auvAH1.out_ang_vel_ome[3], StateFeedbackControl_AH1_static_feedback.out_3) annotation(
    Line(points = {{206, 81}, {260, 81}, {260, -41}, {-220, -41}, {-220, 22}, {-159, 22}}, color = {0, 0, 127}));
  connect(auvAH1.out_angle_rad[3], StateFeedbackControl_AH1_static_feedback.out_4) annotation(
    Line(points = {{207, -20}, {228, -20}, {228, -37}, {-213, -37}, {-213, 12}, {-159, 12}}, color = {0, 0, 127}));
  connect(StateFeedbackControl_AH1_static_feedback.u_4, auvAH1.in_thruster_f_s) annotation(
    Line(points = {{-84, 43}, {-47.5, 43}, {-47.5, 8}, {-20, 8}}, color = {0, 0, 127}));
  connect(StateFeedbackControl_AH1_static_feedback.u_3, auvAH1.in_thruster_f_p) annotation(
    Line(points = {{-84, 57}, {-50, 57}, {-50, 40}, {-21, 40}}, color = {0, 0, 127}));
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-500, -500}, {500, 500}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-500, -500}, {500, 500}}, grid = {1, 1}), graphics = {Text(origin = {-172, 39.5}, extent = {{-5, 4}, {5, -3}}, textString = "u"), Text(origin = {-172, 29.5}, extent = {{-5, 4}, {5, -3}}, textString = "v"), Text(origin = {-172, 19.5}, extent = {{-5, 4}, {5, -3}}, textString = "r"), Text(origin = {-172, 9.5}, extent = {{-4, 6.5}, {4, -6.5}}, textString = "psi")}),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_AH1_monopile_inspection;