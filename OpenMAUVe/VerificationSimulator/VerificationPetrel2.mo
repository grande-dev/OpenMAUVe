within OpenMAUVe.VerificationSimulator;
model VerificationPetrel2 "This model test a single yo for the ROGUE glider as described in #72."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 200.0;
  parameter SI.Time ramps_duration = 10.0;
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0) annotation(
    Placement(transformation(origin = {29, 79}, extent = {{-5, -5}, {5, 5}})));
  Control.ManualInputs.manualInputs2Segments ref_VBD(ramp_segment1_st_time = ramp1_start, ramp_segment2_st_time = ramp2_start, ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = -2.1, ramp_segment2_height = 0.0)  annotation(
    Placement(transformation(origin = {-136, 62}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_s(ramp_segment1_st_time = ramp1_start, ramp_segment2_st_time = ramp2_start, ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = -0.018, ramp_segment2_height = 0.0)  annotation(
    Placement(transformation(origin = {-64, 32}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_r(ramp_segment1_st_time = ramp1_start, ramp_segment1_duration = ramps_duration, ramp_segment2_st_time = ramp2_start, ramp_segment2_duration = ramps_duration)  annotation(
    Placement(transformation(origin = {-64, 4}, extent = {{-10, -10}, {10, 10}})));
  Vehicles.gliderPetrel2 gliderPetrel2( r_0 = {0, 0, 763.9}, enableRhoVsDepth = true, g_world = 9.8, VBD_reference_volume = 0.0086398*0)  annotation(
    Placement(transformation(origin = {65, 11}, extent = {{-42, -36}, {42, 36}})));
  Control.ManualInputs.manualInputs2Segments ref_prop_rotational_speed(ramp_segment1_duration = ramps_duration, ramp_segment1_st_time = ramp1_start, ramp_segment2_duration = ramps_duration, ramp_segment2_height = 0.0, ramp_segment2_st_time = ramp2_start) annotation(
    Placement(transformation(origin = {-64, -28}, extent = {{-10, -10}, {10, 10}})));
  GroundthruthVerification.Peterl2GroundthruthVerification peterl2GroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start)  annotation(
    Placement(transformation(origin = {92, -46}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Math.Add VBD_control_error(k1 = -1)  annotation(
    Placement(transformation(origin = {-98, 78}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.PID VBD_control(k = 1000, Ti = 100, Td = 10)  annotation(
    Placement(transformation(origin = {-60, 78}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain VBD_control_active(k = 1)  annotation(
    Placement(transformation(origin = {-22, 78}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(environmental_currents.y, gliderPetrel2.env_current_speed) annotation(
    Line(points = {{34.5, 79}, {64.5, 79}, {64.5, 49}, {63.5, 49}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_m_s.out_value, gliderPetrel2.in_mov_shift) annotation(
    Line(points = {{-53.4, 31.4}, {-32.4, 31.4}, {-32.4, 24.4}, {13.6, 24.4}}, color = {0, 0, 127}));
  connect(ref_m_r.out_value, gliderPetrel2.in_mov_roll) annotation(
    Line(points = {{-53.4, 3.4}, {-32.4, 3.4}, {-32.4, 10.4}, {13.6, 10.4}}, color = {0, 0, 127}));
  connect(ref_prop_rotational_speed.out_value, gliderPetrel2.in_propeller_rotational_speed) annotation(
    Line(points = {{-53.4, -28.6}, {-24.4, -28.6}, {-24.4, -3.6}, {13.6, -3.6}}, color = {0, 0, 127}));
  connect(ref_VBD.out_value, VBD_control_error.u2) annotation(
    Line(points = {{-125.4, 61.4}, {-117.4, 61.4}, {-117.4, 72.4}, {-110.4, 72.4}}, color = {0, 0, 127}));
  connect(gliderPetrel2.unitTest, peterl2GroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{52, -10}, {52, -46}, {72, -46}}, color = {0, 0, 127}, thickness = 0.5));
  connect(gliderPetrel2.out_VBD_net_force, VBD_control_error.u1) annotation(
    Line(points = {{116, -12}, {138, -12}, {138, 102}, {-124, 102}, {-124, 84}, {-110, 84}}, color = {0, 0, 127}));
  connect(VBD_control_error.y, VBD_control.u) annotation(
    Line(points = {{-87, 78}, {-72, 78}}, color = {0, 0, 127}));
  connect(VBD_control.y, VBD_control_active.u) annotation(
    Line(points = {{-49, 78}, {-34, 78}}, color = {0, 0, 127}));
  connect(VBD_control_active.y, gliderPetrel2.in_VBD) annotation(
    Line(points = {{-10, 78}, {0, 78}, {0, 38}, {14, 38}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 700.0, Interval = 0.02, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})),
  Icon(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end VerificationPetrel2;