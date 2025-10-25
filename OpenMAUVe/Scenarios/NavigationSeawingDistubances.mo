within OpenMAUVe.Scenarios;

model NavigationSeawingDistubances "This model test a single yo for the ROGUE glider as described in #72."
  import Modelica.Units.SI;
  
    parameter SI.Time ramp1_start = 0.0;
    parameter SI.Time ramp2_start = 3600.0;
    parameter SI.Time ramp3_start = 7200.0;
    parameter SI.Time ramp4_start = 10800.0;
    parameter SI.Time ramps_duration = 30.0;
  
  
  Vehicles.gliderSeawing gliderSeawing(rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 50}, v_0 = {0.0001, 0.0, 0.00005}, w_0 = {0.001, 0.0, 0.001}, noise_sample_period = 1, enableNoiseSensors = true, noise_gain = 0.1, noise_std = 0.1) annotation(
    Placement(transformation(origin = {72, 18}, extent = {{-48, -50}, {48, 50}})));
  VerificationSimulator.GroundthruthVerification.SeawingGroundthruthVerification seawingGroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start, checkTimeFinal = 5000.0, maxAcceptableError = 13.14) annotation(
    Placement(transformation(origin = {132, -61}, extent = {{-30, -30}, {30, 30}})));
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = true, gamma_1 = 0.01, gamma_3 = 2.2689280275926285, gamma_2 = 100.0, enableNoiseCurrents = true, noise_gain = 10)  annotation(
    Placement(transformation(origin = {-59, 87}, extent = {{-17, -17}, {17, 17}})));
  Control.ManualInputs.manualInputsRepeatYoControlHeading manualInputsRepeatYoControlHeading(dive_VBD_ref = 0.4, dive_ms_ref = 0.02, climb_VBD_ref = -0.4, climb_ms_ref = -0.02, target_max_depth = 500, target_min_depth = 30)  annotation(
    Placement(transformation(origin = {-100, 1}, extent = {{-20, -20}, {20, 20}})));
equation
  connect(gliderSeawing.unitTest, seawingGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{57, -2}, {57, -62.25}, {103, -62.25}, {103, -61}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, gliderSeawing.env_current_speed) annotation(
    Line(points = {{-42, 87}, {-42, 87.25}, {70, 87.25}, {70, 72}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, gliderSeawing.signalBus) annotation(
    Line(points = {{-59, 71}, {-59, -36}, {87.5, -36}, {87.5, 9}, {88.25, 9}, {88.25, -1}, {87, -1}}, color = {255, 204, 51}, thickness = 0.5));
  connect(manualInputsRepeatYoControlHeading.out_VBD, gliderSeawing.in_VBD_mass) annotation(
    Line(points = {{-80, 14}, {-56, 14}, {-56, 36}, {6, 36}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeading.out_m_s, gliderSeawing.in_mov_shift) annotation(
    Line(points = {{-80, 1}, {-48.5, 1}, {-48.5, 7}, {6, 7}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeading.out_m_r, gliderSeawing.in_mov_roll) annotation(
    Line(points = {{-79, -12}, {-36, -12}, {-36, -18}, {7, -18}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.depthNoise, manualInputsRepeatYoControlHeading.in_depth) annotation(
    Line(points = {{87, -1}, {87, -88}, {-162, -88}, {-162, 6}, {-120, 6}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.EulerAnglesNoise[3], manualInputsRepeatYoControlHeading.in_yaw_measured) annotation(
    Line(points = {{87, -1}, {87, -72}, {-146, -72}, {-146, -11}, {-120, -11}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 20000.0, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}}, grid = {1, 1})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}}, grid = {1, 1})));
end NavigationSeawingDistubances;