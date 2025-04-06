within Glider_Lib.VerificationSimulator;

model VerificationPetrel2 "This model test a single yo for the ROGUE glider as described in #72."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 100.0;
  parameter SI.Time ramp2_start = 200.0;
  parameter SI.Time ramps_duration = 1.0;
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0) annotation(
    Placement(transformation(origin = {-31, 77}, extent = {{-5, -5}, {5, 5}})));
  Control.ManualInputs.manualInputs2Segments ref_VBD(ramp_segment1_st_time = ramp1_start, ramp_segment2_st_time = ramp2_start, ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = 0.3, ramp_segment2_height = 0.0)  annotation(
    Placement(transformation(origin = {-90, 40}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_s(ramp_segment1_st_time = ramp1_start, ramp_segment2_st_time = ramp2_start, ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = 0.02, ramp_segment2_height = 0.0)  annotation(
    Placement(transformation(origin = {-90, -10}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_r(ramp_segment1_st_time = ramp1_start, ramp_segment1_duration = ramps_duration, ramp_segment2_st_time = ramp2_start, ramp_segment2_duration = ramps_duration, ramp_segment2_height = 45)  annotation(
    Placement(transformation(origin = {-90, -58}, extent = {{-10, -10}, {10, 10}})));
  GroundthruthVerification.SeawingGroundthruthVerification seawingGroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start, checkTimeFinal = 5000.0, maxAcceptableError = 15.4)  annotation(
    Placement(transformation(origin = {76, -68}, extent = {{-30, -30}, {30, 30}})));
  Vehicles.gliderPetrel2 gliderPetrel2 annotation(
    Placement(transformation(origin = {25, 13}, extent = {{-42, -36}, {42, 36}})));
equation
  connect(environmental_currents.y, gliderPetrel2.env_current_speed) annotation(
    Line(points = {{-26, 78}, {24, 78}, {24, 52}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_VBD.out_value, gliderPetrel2.in_VBD_mass) annotation(
    Line(points = {{-80, 40}, {-70, 40}, {-70, 26}, {-32, 26}}, color = {0, 0, 127}));
  connect(ref_m_s.out_value, gliderPetrel2.in_mov_shift) annotation(
    Line(points = {{-80, -10}, {-70, -10}, {-70, 8}, {-32, 8}}, color = {0, 0, 127}));
  connect(ref_m_r.out_value, gliderPetrel2.in_mov_roll) annotation(
    Line(points = {{-80, -58}, {-58, -58}, {-58, -12}, {-32, -12}}, color = {0, 0, 127}));
  connect(gliderPetrel2.unitTest, seawingGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{12, -2}, {12, -68}, {46, -68}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(
    experiment(StopTime = 1000.0, Interval = 0.1, Tolerance = 1e-06),
  Diagram);
end VerificationPetrel2;