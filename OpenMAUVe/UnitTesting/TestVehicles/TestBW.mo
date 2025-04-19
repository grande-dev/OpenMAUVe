within OpenMAUVe.UnitTesting.TestVehicles;
model TestBW "This model tests a BW glider."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 3600.0;
  parameter SI.Time ramp3_start = 7200.0;
  parameter SI.Time ramp4_start = 10800.0;
  parameter SI.Time ramps_duration = 10.0;


  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0)  annotation(
    Placement(transformation(origin = {-39, 85}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Ramp m_r_input(duration = 10, height = 0.0, startTime = 70) annotation(
    Placement(transformation(origin = {-112, -8}, extent = {{-6, -6}, {6, 6}})));
  Control.ManualInputs.manualInputs2Segments thruster_input(ramp_segment1_height = 0.0, ramp_segment1_st_time = 5.0, ramp_segment1_duration = 0.0, ramp_segment2_height = 0.0, ramp_segment2_st_time = 15.0, ramp_segment2_duration = 0.0)  annotation(
    Placement(transformation(origin = {-112, -46}, extent = {{-10, -10}, {10, 10}})));
  Vehicles.gliderBW gliderBW(rho_0(displayUnit = "kg/m3") = 1000, r_g_hull = {0, 0, 0}, r_mov = {0, 0, 0.04}, m_h = 8.22, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1, I_31 = 0.0, nabla_0 = 11.22*10^(-3), m_mov = 2.0, I_mov_11 = 0, I_mov_22 = 0, I_mov_33 = 0, X_udot = 2.0, Y_vdot = 0, Z_wdot = 14.0, M_qdot = 0, N_rdot = 0, Y_rdot = 0, Z_qdot = 0, M_wdot = 0, N_vdot = 0, K_D0 = 18.0, K_D = 109.0, K_beta = 0, K_L0 = 0, K_alpha = 306.0, K_MR = 0, K_p_qua_stat = 0, K_M0 = 0, K_M = -36.5, K_q = 0, K_MY = 0, K_r = 0, r_0 = {0, 0, 50}, kappa_h = 0.0, VBD_max = 10.0, VBD_min = -10.0)  annotation(
    Placement(transformation(origin = {28, 5}, extent = {{-57, -50}, {57, 50}})));
  OpenMAUVe.Control.ManualInputs.manualInputs4Segments ref_VBD(init_offset = 0, ramp_segment1_duration = ramps_duration, ramp_segment1_height = 1.36, ramp_segment1_st_time = ramp1_start, ramp_segment2_duration = ramps_duration, ramp_segment2_height = -1.36 + 0.64, ramp_segment2_st_time = ramp2_start, ramp_segment3_duration = ramps_duration, ramp_segment3_height = +1.36 - 0.64, ramp_segment3_st_time = ramp3_start, ramp_segment4_duration = ramps_duration, ramp_segment4_height = -1.36 + 0.64, ramp_segment4_st_time = ramp4_start) annotation(
    Placement(transformation(origin = {-114, 58}, extent = {{-10, -10}, {10, 10}})));
  OpenMAUVe.Control.ManualInputs.manualInputs4Segments ref_m_s(init_offset = 0, ramp_segment1_duration = ramps_duration, ramp_segment1_height = 0.0041, ramp_segment1_st_time = ramp1_start, ramp_segment2_duration = ramps_duration, ramp_segment2_height = -2*0.0041, ramp_segment2_st_time = ramp2_start, ramp_segment3_duration = ramps_duration, ramp_segment3_height = +0.0041 + 0.022, ramp_segment3_st_time = ramp3_start, ramp_segment4_duration = ramps_duration, ramp_segment4_height = -2*0.022, ramp_segment4_st_time = ramp4_start) annotation(
    Placement(transformation(origin = {-114, 24}, extent = {{-10, -10}, {10, 10}})));
  VerificationSimulator.GroundthruthVerification.BWGroundthruthVerification bWGroundthruthVerification(checkTimeFinal = 14400, initSegment1 = ramp1_start, initSegment2 = ramp2_start, initSegment3 = ramp3_start, initSegment4 = ramp4_start)  annotation(
    Placement(transformation(origin = {78, -90}, extent = {{-20, -20}, {20, 20}})));
equation
  connect(environmental_currents.y, gliderBW.env_current_speed) annotation(
    Line(points = {{-34, 86}, {26, 86}, {26, 58}}, color = {0, 0, 127}, thickness = 0.5));
  connect(m_r_input.y, gliderBW.in_mov_roll) annotation(
    Line(points = {{-106, -8}, {-40, -8}}, color = {0, 0, 127}));
  connect(thruster_input.out_value, gliderBW.in_propeller_rotational_speed) annotation(
    Line(points = {{-102, -46}, {-88, -46}, {-88, -28}, {-40, -28}}, color = {0, 0, 127}));
  connect(ref_VBD.out_value, gliderBW.in_VBD_port) annotation(
    Line(points = {{-104, 58}, {-72, 58}, {-72, 34}, {-32, 34}}, color = {0, 0, 127}));
  connect(ref_m_s.out_value, gliderBW.in_mov_shift) annotation(
    Line(points = {{-104, 24}, {-86, 24}, {-86, 10}, {-30, 10}}, color = {0, 0, 127}));
  connect(m_r_input.y, gliderBW.in_VBD_starboard) annotation(
    Line(points = {{-106, -8}, {-64, -8}, {-64, 22}, {-30, 22}}, color = {0, 0, 127}));
  connect(gliderBW.unitTest, bWGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{14, -18}, {14, -90}, {58, -90}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(experiment(StopTime = 14400, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})),
  Icon(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end TestBW;