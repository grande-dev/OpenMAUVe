within OpenMAUVe.UnitTesting.TestVehicles;

model TestAUV_AH1 "Test the AUV"
  Vehicles.auvAH1 auvAH1(command_thrusters_as_force = true, r_0 = {0, 0, 2.0}, v_0 = {0, 0, 0}, enableAddedMassEffects = false, rho_0(displayUnit = "kg/m3") = 1000, I_11 = 300.0, I_22 = 300.0, I_33 = 300.0, N_r = 210.0, N_rr = 3.0, nabla_0 = 0.5, Z_w = 6.106, Z_ww = 5.0, K_pp = 3.0, M_qq = 3.0, scaleDist = 10^(-6), show_frames_vehicles = true, show_shapes = true, show_control_forces_and_moments = true, orientation_thruster_a_p (each displayUnit = "rad"), orientation_thruster_a_s (each displayUnit = "rad"), orientation_thruster_f_p (each displayUnit = "rad"), orientation_thruster_f_s (each displayUnit = "rad")) annotation(
    Placement(transformation(origin = {73, -17}, extent = {{-95, -103}, {95, 103}})));
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false) annotation(
    Placement(transformation(origin = {-48.5, 158.5}, extent = {{-25.5, -25.5}, {25.5, 25.5}})));
  OpenMAUVe.Control.ManualInputs.manualInputs4Segments in_thruster_a_p(init_offset = 0, ramp_segment1_duration = 0.0, ramp_segment1_height = 10.0, ramp_segment1_st_time = 20.0, ramp_segment2_duration = 0, ramp_segment2_height = -10.0, ramp_segment2_st_time = 30.0, ramp_segment3_duration = 0, ramp_segment3_height = 0, ramp_segment3_st_time = 0, ramp_segment4_duration = 0, ramp_segment4_height = 0, ramp_segment4_st_time = 0) annotation(
    Placement(transformation(origin = {-143.5, 93.5}, extent = {{-22.5, -22.5}, {22.5, 22.5}})));
  OpenMAUVe.Control.ManualInputs.manualInputs4Segments in_thruster_a_s(init_offset = 0, ramp_segment1_duration = 0.0, ramp_segment1_height = 10.0, ramp_segment1_st_time = 40.0, ramp_segment2_duration = 0, ramp_segment2_height = -10.0, ramp_segment2_st_time = 50.0, ramp_segment3_duration = 0, ramp_segment3_height = 0, ramp_segment3_st_time = 0, ramp_segment4_duration = 0, ramp_segment4_height = 0, ramp_segment4_st_time = 0) annotation(
    Placement(transformation(origin = {-143.5, 35.5}, extent = {{-22.5, -22.5}, {22.5, 22.5}})));
  OpenMAUVe.Control.ManualInputs.manualInputs4Segments in_thruster_f_p(init_offset = 0, ramp_segment1_duration = 0.0, ramp_segment1_height = 10.0, ramp_segment1_st_time = 60.0, ramp_segment2_duration = 0, ramp_segment2_height = -10.0, ramp_segment2_st_time = 70.0, ramp_segment3_duration = 0, ramp_segment3_height = 0, ramp_segment3_st_time = 0, ramp_segment4_duration = 0, ramp_segment4_height = 0, ramp_segment4_st_time = 0) annotation(
    Placement(transformation(origin = {-145.5, -25.5}, extent = {{-22.5, -22.5}, {22.5, 22.5}})));
  OpenMAUVe.Control.ManualInputs.manualInputs4Segments in_thruster_f_s(init_offset = 0, ramp_segment1_duration = 0.0, ramp_segment1_height = 10.0, ramp_segment1_st_time = 80.0, ramp_segment2_duration = 0, ramp_segment2_height = -10.0, ramp_segment2_st_time = 90.0, ramp_segment3_duration = 0, ramp_segment3_height = 0, ramp_segment3_st_time = 0, ramp_segment4_duration = 0, ramp_segment4_height = 0, ramp_segment4_st_time = 0) annotation(
    Placement(transformation(origin = {-144.5, -85.5}, extent = {{-22.5, -22.5}, {22.5, 22.5}})));
equation
  connect(currentsSouthChinaSea.out_currents_inertial_frame, auvAH1.env_current_speed) annotation(
    Line(points = {{-22.49, 158.5}, {65.51, 158.5}, {65.51, 122}, {67.51, 122}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, auvAH1.signalBus) annotation(
    Line(points = {{-49.01, 134.02}, {-49.01, 82.02}, {-43.01, 82.02}, {-43.01, -87.98}, {-10.01, -87.98}, {-10.01, -88.98}, {210.99, -88.98}, {210.99, -65.98}, {133.99, -65.98}}, color = {255, 204, 51}, thickness = 0.5));
  connect(in_thruster_a_p.out_value, auvAH1.in_thruster_a_p) annotation(
    Line(points = {{-120, 92}, {-89, 92}, {-89, 40}, {-24, 40}}, color = {0, 0, 127}));
  connect(in_thruster_a_s.out_value, auvAH1.in_thruster_a_s) annotation(
    Line(points = {{-120, 34}, {-93, 34}, {-93, 7}, {-22, 7}}, color = {0, 0, 127}));
  connect(in_thruster_f_p.out_value, auvAH1.in_thruster_f_p) annotation(
    Line(points = {{-122, -27}, {-21, -27}}, color = {0, 0, 127}));
  connect(in_thruster_f_s.out_value, auvAH1.in_thruster_f_s) annotation(
    Line(points = {{-121, -87}, {-94, -87}, {-94, -59}, {-20, -59}}, color = {0, 0, 127}));
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-200, -200}, {200, 200}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-200, -200}, {200, 200}}, grid = {1, 1})),
    experiment(StopTime = 150, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_AH1;