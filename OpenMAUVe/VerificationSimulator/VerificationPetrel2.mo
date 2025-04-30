within OpenMAUVe.VerificationSimulator;
model VerificationPetrel2 "This model test a single yo for the ROGUE glider as described in #72."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 50.0;
  parameter SI.Time ramp2_start = 200.0;
  parameter SI.Time ramps_duration = 1.0;
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0) annotation(
    Placement(transformation(origin = {-5, 79}, extent = {{-5, -5}, {5, 5}})));
  Control.ManualInputs.manualInputs2Segments ref_VBD(ramp_segment1_st_time = ramp1_start, ramp_segment2_st_time = ramp2_start, ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = -2.1, ramp_segment2_height = 0.0)  annotation(
    Placement(transformation(origin = {-128, 64}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_s(ramp_segment1_st_time = ramp1_start, ramp_segment2_st_time = ramp2_start, ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = -0.018, ramp_segment2_height = 0.0)  annotation(
    Placement(transformation(origin = {-64, 32}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_r(ramp_segment1_st_time = ramp1_start, ramp_segment1_duration = ramps_duration, ramp_segment2_st_time = ramp2_start, ramp_segment2_duration = ramps_duration)  annotation(
    Placement(transformation(origin = {-64, 4}, extent = {{-10, -10}, {10, 10}})));
  Vehicles.gliderPetrel2 gliderPetrel2( r_0 = {0, 0, 623.8}, enableRhoVsDepth = true, r_vbd_vol = {0, 0, 0}, VBD_reference_volume = 0.007)  annotation(
    Placement(transformation(origin = {65, 11}, extent = {{-42, -36}, {42, 36}})));
  Control.ManualInputs.manualInputs2Segments ref_prop_rotational_speed(ramp_segment1_duration = ramps_duration, ramp_segment1_st_time = ramp1_start, ramp_segment2_duration = ramps_duration, ramp_segment2_height = 0.0, ramp_segment2_st_time = ramp2_start) annotation(
    Placement(transformation(origin = {-64, -28}, extent = {{-10, -10}, {10, 10}})));
  GroundthruthVerification.Peterl2GroundthruthVerification peterl2GroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start)  annotation(
    Placement(transformation(origin = {92, -46}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Math.Gain P_VBD(k = 1)  annotation(
    Placement(transformation(origin = {-48, 80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add error(k1 = -1)  annotation(
    Placement(transformation(origin = {-90, 80}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(environmental_currents.y, gliderPetrel2.env_current_speed) annotation(
    Line(points = {{0.5, 79}, {64.5, 79}, {64.5, 49}, {63.5, 49}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_m_s.out_value, gliderPetrel2.in_mov_shift) annotation(
    Line(points = {{-53.4, 31.4}, {-32.4, 31.4}, {-32.4, 24.4}, {13.6, 24.4}}, color = {0, 0, 127}));
  connect(ref_m_r.out_value, gliderPetrel2.in_mov_roll) annotation(
    Line(points = {{-53.4, 3.4}, {-32.4, 3.4}, {-32.4, 10.4}, {13.6, 10.4}}, color = {0, 0, 127}));
  connect(ref_prop_rotational_speed.out_value, gliderPetrel2.in_propeller_rotational_speed) annotation(
    Line(points = {{-53.4, -28.6}, {-24.4, -28.6}, {-24.4, -3.6}, {13.6, -3.6}}, color = {0, 0, 127}));
  connect(ref_VBD.out_value, error.u2) annotation(
    Line(points = {{-117.4, 63.4}, {-109.4, 63.4}, {-109.4, 74.4}, {-102.4, 74.4}}, color = {0, 0, 127}));

  connect(P_VBD.y, gliderPetrel2.in_VBD) annotation(
    Line(points = {{-37, 80}, {-29, 80}, {-29, 38}, {13, 38}}, color = {0, 0, 127}));
  connect(gliderPetrel2.unitTest, peterl2GroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{52, -10}, {52, -46}, {72, -46}}, color = {0, 0, 127}, thickness = 0.5));
  connect(gliderPetrel2.out_VBD_net_force, error.u1) annotation(
    Line(points = {{116, -12}, {138, -12}, {138, 102}, {-124, 102}, {-124, 86}, {-102, 86}}, color = {0, 0, 127}));
  connect(error.y, P_VBD.u) annotation(
    Line(points = {{-78, 80}, {-60, 80}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 750.0, Interval = 0.02, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})),
  Icon(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end VerificationPetrel2;