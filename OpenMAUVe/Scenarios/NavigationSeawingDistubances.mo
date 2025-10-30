within OpenMAUVe.Scenarios;

model NavigationSeawingDistubances "This model test a single yo for the ROGUE glider as described in #72."
  import Modelica.Units.SI;
  
    parameter SI.Time ramp1_start = 0.0;
    parameter SI.Time ramp2_start = 3600.0;
    parameter SI.Time ramp3_start = 7200.0;
    parameter SI.Time ramp4_start = 10800.0;
    parameter SI.Time ramps_duration = 30.0;
  
  
  Vehicles.gliderSeawing gliderSeawing(rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 50}, v_0 = {0.0001, 0.0, 0.00005}, w_0 = {0.001, 0.0, 0.001}, noise_sample_period = 1, enableNoiseSensors = true, noise_gain = 0.1, noise_std = 0.1) annotation(
    Placement(transformation(origin = {74, 15}, extent = {{-48, -50}, {48, 50}})));
  VerificationSimulator.GroundthruthVerification.SeawingGroundthruthVerification seawingGroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start, checkTimeFinal = 5000.0, maxAcceptableError = 13.14) annotation(
    Placement(transformation(origin = {132, -61}, extent = {{-30, -30}, {30, 30}})));
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = true, gamma_1 = 0.01, gamma_3 = 2.2689280275926285, gamma_2 = 100.0, enableNoiseCurrents = true, noise_gain = 10)  annotation(
    Placement(transformation(origin = {-59, 87}, extent = {{-17, -17}, {17, 17}})));
  Control.ManualInputs.manualInputsRepeatYoControlHeading manualInputsRepeatYoControlHeading(dive_VBD_ref = 0.4, dive_ms_ref = 0.02, climb_VBD_ref = -0.4, climb_ms_ref = -0.02, target_max_depth = 500, target_min_depth = 30)  annotation(
    Placement(transformation(origin = {-103.5, 7.5}, extent = {{-30.5, -30.5}, {30.5, 30.5}})));
equation
  connect(gliderSeawing.unitTest, seawingGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{59, -5}, {59, -62.25}, {103, -62.25}, {103, -61}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, gliderSeawing.env_current_speed) annotation(
    Line(points = {{-42, 87}, {-42, 87.25}, {72, 87.25}, {72, 69}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, gliderSeawing.signalBus) annotation(
    Line(points = {{-59, 71}, {-59, -36}, {89.5, -36}, {89.5, -5}, {88.25, -5}, {88.25, -4}, {89, -4}}, color = {255, 204, 51}, thickness = 0.5));
  connect(manualInputsRepeatYoControlHeading.out_VBD, gliderSeawing.in_VBD_mass) annotation(
    Line(points = {{-72, 27}, {-56, 27}, {-56, 33}, {8, 33}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeading.out_m_s, gliderSeawing.in_mov_shift) annotation(
    Line(points = {{-72, 7}, {-32, 7}, {-32, 4}, {8, 4}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeading.out_m_r, gliderSeawing.in_mov_roll) annotation(
    Line(points = {{-72, -13}, {-31.5, -13}, {-31.5, -21}, {9, -21}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.depthNoise, manualInputsRepeatYoControlHeading.in_depth) annotation(
    Line(points = {{89, -4}, {89, -88}, {-162, -88}, {-162, 15}, {-134, 15}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.EulerAnglesNoise[3], manualInputsRepeatYoControlHeading.in_yaw_measured) annotation(
    Line(points = {{89, -4}, {89, -72}, {-146, -72}, {-146, -10}, {-133, -10}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 20000.0, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}}, grid = {1, 1})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}}, grid = {1, 1})));
end NavigationSeawingDistubances;