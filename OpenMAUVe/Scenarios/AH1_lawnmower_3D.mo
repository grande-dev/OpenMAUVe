within OpenMAUVe.Scenarios;

model AH1_lawnmower_3D "Fault-free AH1 lawnmower waypoint-following scenario"
  parameter Real z_PID_Kp = 35.0 "Depth PID proportional gain";
  parameter Real z_PID_Ti = 40.0 "Depth PID integral time";
  parameter Real z_PID_Td = 0.5 "Depth PID derivative time";
  parameter Real z_PID_yMax = 120.0 "Maximum total vertical thruster command";
  parameter Real z_PID_yMin = -120.0 "Minimum total vertical thruster command";
  Control.StateFeedbackControl_AH1_static_feedback StateFeedbackControl_AH1_static_feedback(saturation_limit = 72.0) annotation(
    Placement(transformation(origin = {-124.5, 51.5}, extent = {{-80.5, -80.5}, {80.5, 80.5}})));
  Modelica.Blocks.Sources.Constant ref_x3(k = 0.0) annotation(
    Placement(transformation(origin = {-336, 72}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant ref_x5(k = 0.0) annotation(
    Placement(transformation(origin = {-336, 40}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant no_fault_1(k = 1.0) annotation(
    Placement(transformation(origin = {-242, 204}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant no_fault_2(k = 1.0) annotation(
    Placement(transformation(origin = {-242, 176}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant no_fault_3(k = 1.0) annotation(
    Placement(transformation(origin = {-242, 148}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant no_fault_4(k = 1.0) annotation(
    Placement(transformation(origin = {-242, 120}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.LimIntegrator yaw_angle_integrator(k = 1, outMax = 5.0, outMin = -5.0) annotation(
    Placement(transformation(origin = {-221, -78}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add(k1 = -1) annotation(
    Placement(transformation(origin = {-271, -78}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain gain(k = 1) annotation(
    Placement(transformation(origin = {-271, -39}, extent = {{-10, -10}, {10, 10}})));
  Vehicles.auvAH1 auvAH1(command_thrusters_as_force = true, earthAngularSpeed = 0.0, r_0 = {0, 0, 10.0}, v_0 = {0, 0, 0}, rho_0(displayUnit = "kg/m3") = 1000, I_11 = 300.0, I_22 = 300.0, I_33 = 300.0, N_r = 210.0, N_rr = 3.0, nabla_0 = 0.5, Z_w = 6.106, Z_ww = 5.0, K_pp = 3.0, M_qq = 3.0, r_g_hull = {0, 0, 0}, enableNoiseSensors = true) annotation(
    Placement(transformation(origin = {73, 50}, extent = {{-95, -103}, {95, 103}})));
  Modelica.Blocks.Continuous.LimPID depth_PID(Td = z_PID_Td, Ti = z_PID_Ti, controllerType = Modelica.Blocks.Types.SimpleController.PID, initType = Modelica.Blocks.Types.Init.InitialOutput, k = z_PID_Kp, yMax = z_PID_yMax, yMin = z_PID_yMin, y_start = 0.0) annotation(
    Placement(transformation(origin = {-102, -100}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain alloc_thruster_v_a(k = 0.568282046) annotation(
    Placement(transformation(origin = {-61, -60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain alloc_thruster_v_f_p(k = 0.215858977) annotation(
    Placement(transformation(origin = {-61, -92}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain alloc_thruster_v_f_s(k = 0.215858977) annotation(
    Placement(transformation(origin = {-61, -124}, extent = {{-10, -10}, {10, 10}})));
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = true) annotation(
    Placement(transformation(origin = {-39.5, 232.5}, extent = {{-25.5, -25.5}, {25.5, 25.5}})));
  Guidance.WaypointFollowing3D waypointFollowing3D(gamma = 10.0, gamma_extended_slowing_down = 3.0, min_speed_fraction = 0.2, u_ref = 1.2, v_ref = 0.0, interrupt_sim_upon_finished = true, waypoint_x = {0, 50, 100, 100, 120, 120, 140, 140, 160, 160, 0}, waypoint_y = {0, 0, 0, -40, -40, 40, 40, -40, -40, 40, 0}, waypoint_z = {20, 30, 30, 40, 40, 60, 60, 90, 90, 90, 20}, n_waypoints = 11) annotation(
    Placement(transformation(origin = {-422, 71}, extent = {{-29, -29}, {29, 29}})));
equation
  connect(ref_x3.y, StateFeedbackControl_AH1_static_feedback.ref_3) annotation(
    Line(points = {{-325, 72}, {-295, 72}, {-295, 80}, {-159, 80}}, color = {0, 0, 127}));
  connect(ref_x5.y, StateFeedbackControl_AH1_static_feedback.ref_5) annotation(
    Line(points = {{-325, 40}, {-282, 40}, {-282, 61}, {-159, 61}}, color = {0, 0, 127}));
  connect(no_fault_1.y, StateFeedbackControl_AH1_static_feedback.h_1) annotation(
    Line(points = {{-231, 204}, {-142, 204}, {-142, 106}}, color = {0, 0, 127}));
  connect(no_fault_2.y, StateFeedbackControl_AH1_static_feedback.h_2) annotation(
    Line(points = {{-231, 176}, {-127, 176}, {-127, 106}, {-125, 106}}, color = {0, 0, 127}));
  connect(no_fault_3.y, StateFeedbackControl_AH1_static_feedback.h_3) annotation(
    Line(points = {{-231, 148}, {-108, 148}, {-108, 106}}, color = {0, 0, 127}));
  connect(no_fault_4.y, StateFeedbackControl_AH1_static_feedback.h_4) annotation(
    Line(points = {{-231, 120}, {-92, 120}, {-92, 106}}, color = {0, 0, 127}));
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
  connect(waypointFollowing3D.ref_u, StateFeedbackControl_AH1_static_feedback.ref_1) annotation(
    Line(points = {{-390, 71}, {-374, 71}, {-374, 100}, {-159, 100}}, color = {0, 0, 127}));
  connect(waypointFollowing3D.ref_v, StateFeedbackControl_AH1_static_feedback.ref_2) annotation(
    Line(points = {{-390, 54}, {-359, 54}, {-359, 90}, {-159, 90}}, color = {0, 0, 127}));
  connect(waypointFollowing3D.ref_yaw, gain.u) annotation(
    Line(points = {{-390, 88}, {-376, 88}, {-376, -39}, {-283, -39}}, color = {0, 0, 127}));
  connect(waypointFollowing3D.ref_yaw, add.u1) annotation(
    Line(points = {{-390, 88}, {-376, 88}, {-376, -72}, {-283, -72}}, color = {0, 0, 127}));
  connect(auvAH1.out_pos_body_wrt_NED_in_NED[1], waypointFollowing3D.pos_x) annotation(
    Line(points = {{206, 42}, {247, 42}, {247, -140}, {-481, -140}, {-481, 88}, {-457, 88}}, color = {0, 0, 127}));
  connect(auvAH1.out_pos_body_wrt_NED_in_NED[2], waypointFollowing3D.pos_y) annotation(
    Line(points = {{206, 42}, {206, 48.875}, {242, 48.875}, {242, -57}, {-472, -57}, {-472, 71}, {-457, 71}}, color = {0, 0, 127}));
  connect(auvAH1.out_pos_body_wrt_NED_in_NED[3], waypointFollowing3D.pos_z) annotation(
    Line(points = {{206, 42}, {256, 42}, {256, -178}, {-466, -178}, {-466, 54}, {-457, 54}}, color = {0, 0, 127}));
  connect(auvAH1.out_angle_rad[3], waypointFollowing3D.yaw_meas) annotation(
    Line(points = {{207, -20}, {230, -20}, {230, -129}, {-466, -129}, {-466, 42}, {-457, 42}}, color = {0, 0, 127}));
  connect(waypointFollowing3D.ref_z, depth_PID.u_s) annotation(
    Line(points = {{-390, 42}, {-142, 42}, {-142, -100}, {-114, -100}}, color = {0, 0, 127}));
  connect(auvAH1.out_pos_body_wrt_NED_in_NED[3], depth_PID.u_m) annotation(
    Line(points = {{206, 42}, {256, 42}, {256, -178}, {-102, -178}, {-102, -112}}, color = {0, 0, 127}));
  connect(depth_PID.y, alloc_thruster_v_a.u) annotation(
    Line(points = {{-91, -100}, {-82, -100}, {-82, -60}, {-73, -60}}, color = {0, 0, 127}));
  connect(depth_PID.y, alloc_thruster_v_f_p.u) annotation(
    Line(points = {{-91, -100}, {-82, -100}, {-82, -92}, {-73, -92}}, color = {0, 0, 127}));
  connect(depth_PID.y, alloc_thruster_v_f_s.u) annotation(
    Line(points = {{-91, -100}, {-82, -100}, {-82, -124}, {-73, -124}}, color = {0, 0, 127}));
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
  connect(alloc_thruster_v_a.y, auvAH1.in_thruster_v_a) annotation(
    Line(points = {{-50, -60}, {-33, -60}, {-33, -20}, {-20, -20}}, color = {0, 0, 127}));
  connect(alloc_thruster_v_f_p.y, auvAH1.in_thruster_v_f_p) annotation(
    Line(points = {{-50, -92}, {-29, -92}, {-29, -47}, {-18, -47}}, color = {0, 0, 127}));
  connect(alloc_thruster_v_f_s.y, auvAH1.in_thruster_v_f_s) annotation(
    Line(points = {{-50, -124}, {-25, -124}, {-25, -73}, {-16, -73}}, color = {0, 0, 127}));
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-500, -500}, {500, 500}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-500, -500}, {500, 500}}, grid = {1, 1})),
    experiment(StopTime = 10000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end AH1_lawnmower_3D;