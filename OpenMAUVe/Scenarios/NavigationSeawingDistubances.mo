within OpenMAUVe.Scenarios;

model NavigationSeawingDistubances "This model test a single yo for the ROGUE glider as described in #72."
  import Modelica.Units.SI;
  
    parameter SI.Time ramp1_start = 0.0;
    parameter SI.Time ramp2_start = 3600.0;
    parameter SI.Time ramp3_start = 7200.0;
    parameter SI.Time ramp4_start = 10800.0;
    parameter SI.Time ramps_duration = 30.0;
    
    parameter Boolean enable_heading_and_pitch_control = false;
  
  Vehicles.gliderSeawing gliderSeawing(rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 2}, v_0 = {0.0001, 0.0, 0.00005}, w_0 = {0.001, 0.0, 0.001}, noise_sample_period = 1, noise_gain = 0.1, noise_std = 0.1, scaleDist = 10^(-6)) annotation(
    Placement(transformation(origin = {74, 15}, extent = {{-48, -50}, {48, 50}})));
  VerificationSimulator.GroundthruthVerification.SeawingGroundthruthVerification seawingGroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start, checkTimeFinal = 5000.0, maxAcceptableError = 13.14) annotation(
    Placement(transformation(origin = {132, -61}, extent = {{-30, -30}, {30, 30}})));
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea( gamma_1 = 0.01, gamma_3 = 2.2689280275926285, gamma_2 = 100.0, enableNoiseCurrents = true, noise_gain = 10, enableCurrents = false)  annotation(
    Placement(transformation(origin = {-16, 107}, extent = {{-17, -17}, {17, 17}})));
  Control.ManualInputs.manualInputsRepeatYoControlHeadingAndPitch manualInputsRepeatYoControlHeadingAndPitch(dive_VBD_ref = 0.4, climb_VBD_ref = -0.4, PID_yaw_Kp = 3.0, PID_yaw_Td = 10.0, PID_yaw_sat_max = 50.0, PID_yaw_sat_min = -50.0, PID_pitch_Kp = 1000.0, PID_pitch_sat_max = 0.02, PID_pitch_sat_min = -0.02, enableControl = 1.0, pitch_ref_climb = 20.0, pitch_ref_dive = -20.0, yaw_ref_1 = 0.0) if enable_heading_and_pitch_control annotation(
    Placement(transformation(origin = {-129, -73}, extent = {{-35, -35}, {35, 35}})));
  Control.ManualInputs.manualInputsRepeatYoControlHeading manualInputsRepeatYoControlHeading(enableControl = 1.0) if not enable_heading_and_pitch_control annotation(
    Placement(transformation(origin = {-149, 102}, extent = {{-35, -35}, {35, 35}})));
  Modelica.Blocks.Math.Add add annotation(
    Placement(transformation(origin = {-27, 33}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Math.Add add1 annotation(
    Placement(transformation(origin = {-25, 1}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Math.Add add11 annotation(
    Placement(transformation(origin = {-25, -24}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Constant constant_zero_VBD(k = 0)  annotation(
    Placement(transformation(origin = {-113.5, 57.5}, extent = {{-5.5, -5.5}, {5.5, 5.5}})));
  Modelica.Blocks.Sources.Constant constant_zero_m_s(k = 0) annotation(
    Placement(transformation(origin = {-112.5, 37.5}, extent = {{-5.5, -5.5}, {5.5, 5.5}})));
  Modelica.Blocks.Sources.Constant constant_zero_m_r(k = 0) annotation(
    Placement(transformation(origin = {-112.5, 18.5}, extent = {{-5.5, -5.5}, {5.5, 5.5}})));
equation
  connect(gliderSeawing.unitTest, seawingGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{59, -5}, {59, -62.25}, {103, -62.25}, {103, -61}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, gliderSeawing.env_current_speed) annotation(
    Line(points = {{1, 107}, {1, 108.125}, {72, 108.125}, {72, 69}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, gliderSeawing.signalBus) annotation(
    Line(points = {{-16, 91}, {-16, -36}, {89.5, -36}, {89.5, -5}, {88.25, -5}, {88.25, -4}, {89, -4}}, color = {255, 204, 51}, thickness = 0.5));
  connect(gliderSeawing.signalBus.depthNoise, manualInputsRepeatYoControlHeadingAndPitch.in_depth_measured) annotation(
    Line(points = {{89, -4}, {89, -126}, {-193, -126}, {-193, -50}, {-164, -50}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.EulerAnglesNoise[2], manualInputsRepeatYoControlHeadingAndPitch.in_pitch_measured) annotation(
    Line(points = {{89, -4}, {89, -117}, {-186, -117}, {-186, -74}, {-163, -74}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.EulerAnglesNoise[3], manualInputsRepeatYoControlHeadingAndPitch.in_yaw_measured) annotation(
    Line(points = {{89, -4}, {89, -107}, {-177, -107}, {-177, -105}, {-162, -105}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeading.out_VBD, add.u1) annotation(
    Line(points = {{-113, 125}, {-62, 125}, {-62, 37}, {-34, 37}}, color = {0, 0, 127}));
  connect(add.y, gliderSeawing.in_VBD_mass) annotation(
    Line(points = {{-20, 33}, {8, 33}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeadingAndPitch.out_VBD, add.u2) annotation(
    Line(points = {{-93, -50}, {-62, -50}, {-62, 29}, {-34, 29}}, color = {0, 0, 127}));
  connect(add1.y, gliderSeawing.in_mov_shift) annotation(
    Line(points = {{-18, 1}, {8, 1}, {8, 4}}, color = {0, 0, 127}));
  connect(add11.y, gliderSeawing.in_mov_roll) annotation(
    Line(points = {{-18, -24}, {-7, -24}, {-7, -21}, {9, -21}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeading.out_m_s, add1.u1) annotation(
    Line(points = {{-113, 101}, {-66, 101}, {-66, 5}, {-32, 5}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeadingAndPitch.out_m_s, add1.u2) annotation(
    Line(points = {{-93, -74}, {-66, -74}, {-66, -3}, {-32, -3}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeading.out_m_r, add11.u1) annotation(
    Line(points = {{-113, 79}, {-51, 79}, {-51, -20}, {-32, -20}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeadingAndPitch.out_m_r, add11.u2) annotation(
    Line(points = {{-93, -96}, {-51, -96}, {-51, -28}, {-32, -28}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.depthNoise, manualInputsRepeatYoControlHeading.in_depth) annotation(
    Line(points = {{89, -4}, {89, -144}, {-208, -144}, {-208, 111}, {-184, 111}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.EulerAnglesNoise[3], manualInputsRepeatYoControlHeading.in_yaw_measured) annotation(
    Line(points = {{89, -4}, {89, -136}, {-203, -136}, {-203, 81}, {-183, 81}}, color = {0, 0, 127}));
  
  if not enable_heading_and_pitch_control then
    connect(constant_zero_VBD.y, add.u2)  annotation(
      Line(points = {{-107, 58}, {-86, 58}, {-86, 29}, {-34, 29}}, color = {0, 0, 127}));
    connect(constant_zero_m_s.y, add1.u2) annotation(
      Line(points = {{-106, 38}, {-95, 38}, {-95, -3}, {-32, -3}}, color = {0, 0, 127}));
    connect(constant_zero_m_r.y, add11.u2) annotation(
    Line(points = {{-106, 19}, {-103, 19}, {-103, -28}, {-32, -28}}, color = {0, 0, 127}));
  else 
    connect(constant_zero_VBD.y, add.u1) annotation(
    Line(points = {{-107, 58}, {-86, 58}, {-86, 37}, {-34, 37}}, color = {0, 0, 127}));
  connect(constant_zero_m_s.y, add1.u1) annotation(
    Line(points = {{-106, 38}, {-95, 38}, {-95, 5}, {-32, 5}}, color = {0, 0, 127}));
  connect(constant_zero_m_r.y, add11.u1) annotation(
    Line(points = {{-106, 19}, {-103, 19}, {-103, -20}, {-32, -20}}, color = {0, 0, 127}));
  end if;

  annotation(
    experiment(StopTime = 2000.0, Interval = 0.5, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}}, grid = {1, 1})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}}, grid = {1, 1})));
end NavigationSeawingDistubances;