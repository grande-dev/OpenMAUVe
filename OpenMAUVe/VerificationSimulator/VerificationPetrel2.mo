within OpenMAUVe.VerificationSimulator;
model VerificationPetrel2 "This model test a single yo for the ROGUE glider as described in #72."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 20.0;
  parameter SI.Time ramp2_start = 200.0;
  parameter SI.Time ramps_duration = 1.0;
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0) annotation(
    Placement(transformation(origin = {-31, 77}, extent = {{-5, -5}, {5, 5}})));
  Control.ManualInputs.manualInputs2Segments ref_VBD(ramp_segment1_st_time = ramp1_start, ramp_segment2_st_time = ramp2_start, ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = -0.000218808, ramp_segment2_height = 0.0)  annotation(
    Placement(transformation(origin = {-90, 68}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_s(ramp_segment1_st_time = ramp1_start, ramp_segment2_st_time = ramp2_start, ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = -0.018, ramp_segment2_height = 0.0)  annotation(
    Placement(transformation(origin = {-90, 30}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_r(ramp_segment1_st_time = ramp1_start, ramp_segment1_duration = ramps_duration, ramp_segment2_st_time = ramp2_start, ramp_segment2_duration = ramps_duration, ramp_segment2_height = 51.5662)  annotation(
    Placement(transformation(origin = {-90, 2}, extent = {{-10, -10}, {10, 10}})));
  GroundthruthVerification.SeawingGroundthruthVerification seawingGroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start, checkTimeFinal = 5000.0, maxAcceptableError = 15.4)  annotation(
    Placement(transformation(origin = {76, -68}, extent = {{-30, -30}, {30, 30}})));
  Vehicles.gliderPetrel2 gliderPetrel2(adimensionalHydroParamUsed = true, r_0 = {0, 0, 763.9}, enableRhoVsDepth = true)  annotation(
    Placement(transformation(origin = {39, 9}, extent = {{-42, -36}, {42, 36}})));
  Control.ManualInputs.manualInputs2Segments ref_prop_rotational_speed(ramp_segment1_duration = ramps_duration, ramp_segment1_st_time = ramp1_start, ramp_segment2_duration = ramps_duration, ramp_segment2_height = 0.0, ramp_segment2_st_time = ramp2_start) annotation(
    Placement(transformation(origin = {-90, -30}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(environmental_currents.y, gliderPetrel2.env_current_speed) annotation(
    Line(points = {{-26, 78}, {38, 78}, {38, 48}, {37, 48}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_m_s.out_value, gliderPetrel2.in_mov_shift) annotation(
    Line(points = {{-79, 29}, {-58, 29}, {-58, 22}, {-12, 22}}, color = {0, 0, 127}));
  connect(ref_m_r.out_value, gliderPetrel2.in_mov_roll) annotation(
    Line(points = {{-79, 1}, {-58, 1}, {-58, 8}, {-12, 8}}, color = {0, 0, 127}));
  connect(gliderPetrel2.unitTest, seawingGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{26, -11}, {26, -68}, {46, -68}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_prop_rotational_speed.out_value, gliderPetrel2.in_propeller_rotational_speed) annotation(
    Line(points = {{-79, -31}, {-50, -31}, {-50, -6}, {-12, -6}}, color = {0, 0, 127}));
  connect(ref_VBD.out_value, gliderPetrel2.in_VBD) annotation(
    Line(points = {{-79, 67}, {-50, 67}, {-50, 36}, {-12, 36}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 700.0, Interval = 0.02, Tolerance = 1e-06),
  Diagram);
end VerificationPetrel2;