within Glider_Lib.VerificationSimulator;

model VerificationROGUE "This model test a single yo for the ROGUE glider as described in #72."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 3600.0;
  parameter SI.Time ramp3_start = 7200.0;
  parameter SI.Time ramp4_start = 10800.0;
  parameter SI.Time ramps_duration = 10.0;
 
  Vehicles.gliderROGUE gliderROGUE(rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 10}) annotation(
    Placement(transformation(origin = {26, 2}, extent = {{-35, -33}, {35, 33}})));
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0) annotation(
    Placement(transformation(origin = {-11, 65}, extent = {{-5, -5}, {5, 5}})));
  Control.ManualInputs.manualInputs4Segments ref_VBD(ramp_segment1_height = 1.36, ramp_segment1_duration = ramps_duration, ramp_segment2_height = -1.36 + 0.64, ramp_segment2_st_time = ramp2_start, ramp_segment2_duration = ramps_duration, ramp_segment3_height = +1.36 - 0.64, ramp_segment3_st_time = ramp3_start, ramp_segment3_duration = ramps_duration, ramp_segment4_height = -1.36 + 0.64, ramp_segment4_st_time = ramp4_start, ramp_segment4_duration = ramps_duration, init_offset = 0, ramp_segment1_st_time = ramp1_start)  annotation(
    Placement(transformation(origin = {-86, 28}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs4Segments ref_m_s(init_offset = 0, ramp_segment1_height = 0.0041, ramp_segment1_st_time = ramp1_start, ramp_segment1_duration = ramps_duration, ramp_segment2_height = -2*0.0041, ramp_segment2_st_time = ramp2_start, ramp_segment2_duration = ramps_duration, ramp_segment3_height = +0.0041 + 0.022, ramp_segment3_st_time = ramp3_start, ramp_segment3_duration = ramps_duration, ramp_segment4_height = -2*0.022, ramp_segment4_st_time = ramp4_start, ramp_segment4_duration = ramps_duration)  annotation(
    Placement(transformation(origin = {-84, -20}, extent = {{-10, -10}, {10, 10}})));
  GroundthruthVerification.ROGUEGroundthruthVerification rOGUEGroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start, initSegment3 = ramp3_start, initSegment4 = ramp4_start, checkTimeFinal = 14400)  annotation(
    Placement(transformation(origin = {66, -40}, extent = {{-20, -20}, {20, 20}})));
equation
  connect(environmental_currents.y, gliderROGUE.env_current_speed) annotation(
    Line(points = {{-5.5, 65}, {-5.5, 64.5}, {24.5, 64.5}, {24.5, 38}, {25, 38}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_VBD.out_value, gliderROGUE.in_VBD_mass) annotation(
    Line(points = {{-76, 28}, {-58, 28}, {-58, 14}, {-22, 14}}, color = {0, 0, 127}));
  connect(ref_m_s.out_value, gliderROGUE.in_mov_shift) annotation(
    Line(points = {{-74, -20}, {-56, -20}, {-56, -6}, {-22, -6}}, color = {0, 0, 127}));
  connect(gliderROGUE.unitTest, rOGUEGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{15, -11}, {15, -40}, {46, -40}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(
    experiment(StopTime = 14400.0, Interval = 0.1, Tolerance = 1e-06));
end VerificationROGUE;