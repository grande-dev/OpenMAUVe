within OpenMAUVe.VerificationSimulator;
model VerificationSeawing "This model test a single yo for the ROGUE glider as described in #72."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 200.0;
  parameter SI.Time ramps_duration = 1.0;
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0) annotation(
    Placement(transformation(origin = {-31, 77}, extent = {{-5, -5}, {5, 5}})));
  Vehicles.gliderSeawing gliderSeawing(rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 50}, v_0 = {0.0001, 0.0, 0.00005}, w_0 = {0.001, 0.0, 0.001})  annotation(
    Placement(transformation(origin = {45, -1}, extent = {{-48, -50}, {48, 50}})));
  Control.ManualInputs.manualInputs2Segments ref_VBD(ramp_segment1_st_time = ramp1_start, ramp_segment2_st_time = ramp2_start, ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = 0.3, ramp_segment2_height = 0.0)  annotation(
    Placement(transformation(origin = {-90, 40}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_s(ramp_segment1_st_time = ramp1_start, ramp_segment2_st_time = ramp2_start, ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = 0.02, ramp_segment2_height = 0.0)  annotation(
    Placement(transformation(origin = {-90, -10}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_r(ramp_segment1_st_time = ramp1_start, ramp_segment1_duration = ramps_duration, ramp_segment2_st_time = ramp2_start, ramp_segment2_duration = ramps_duration, ramp_segment2_height = 0, ramp_segment1_height = 45)  annotation(
    Placement(transformation(origin = {-90, -58}, extent = {{-10, -10}, {10, 10}})));
  GroundthruthVerification.SeawingGroundthruthVerification seawingGroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start, checkTimeFinal = 5000.0, maxAcceptableError = 15.4)  annotation(
    Placement(transformation(origin = {76, -68}, extent = {{-30, -30}, {30, 30}})));
equation
  connect(environmental_currents.y, gliderSeawing.env_current_speed) annotation(
    Line(points = {{-26, 78}, {43, 78}, {43, 53}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_VBD.out_value, gliderSeawing.in_VBD_mass) annotation(
    Line(points = {{-79, 39}, {-66, 39}, {-66, 18}, {-20, 18}}, color = {0, 0, 127}));
  connect(ref_m_s.out_value, gliderSeawing.in_mov_shift) annotation(
    Line(points = {{-80, -10}, {-22, -10}, {-22, -12}}, color = {0, 0, 127}));
  connect(ref_m_r.out_value, gliderSeawing.in_mov_roll) annotation(
    Line(points = {{-80, -58}, {-68, -58}, {-68, -36}, {-20, -36}}, color = {0, 0, 127}));
  connect(gliderSeawing.unitTest, seawingGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{30, -20}, {30, -68}, {46, -68}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(
    experiment(StopTime = 5000.0, Interval = 0.1, Tolerance = 1e-06),
  Diagram);
end VerificationSeawing;