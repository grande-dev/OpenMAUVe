within OpenMAUVe.Scenarios;

model NavigationSeawingDistubances "This model test a single yo for the ROGUE glider as described in #72."
  import Modelica.Units.SI;
  
    parameter SI.Time ramp1_start = 0.0;
    parameter SI.Time ramp2_start = 3600.0;
    parameter SI.Time ramp3_start = 7200.0;
    parameter SI.Time ramp4_start = 10800.0;
    parameter SI.Time ramps_duration = 30.0;
  
  
  Vehicles.gliderSeawing gliderSeawing(rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 50}, v_0 = {0.0001, 0.0, 0.00005}, w_0 = {0.001, 0.0, 0.001}, noise_sample_period = 1, enableNoiseSensors = true, noise_gain = 0.1, noise_std = 0.1, enableActuatorDynamics = true) annotation(
    Placement(transformation(origin = {74, 15}, extent = {{-48, -50}, {48, 50}})));
  VerificationSimulator.GroundthruthVerification.SeawingGroundthruthVerification seawingGroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start, checkTimeFinal = 5000.0, maxAcceptableError = 13.14) annotation(
    Placement(transformation(origin = {132, -61}, extent = {{-30, -30}, {30, 30}})));
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = true, gamma_1 = 0.01, gamma_3 = 2.2689280275926285, gamma_2 = 100.0, enableNoiseCurrents = true, noise_gain = 10)  annotation(
    Placement(transformation(origin = {-59, 87}, extent = {{-17, -17}, {17, 17}})));
  Control.ManualInputs.manualInputsRepeatYoControlShiftAndRollingMass manualInputsRepeatYoControlShiftAndRollingMass(PID_pitch_sat_max = 0.02, PID_pitch_sat_min = -0.02, PID_yaw_sat_max = 50.0, PID_yaw_sat_min = -50.0)  annotation(
    Placement(transformation(origin = {-114, -6}, extent = {{-35, -35}, {35, 35}})));
equation
  connect(gliderSeawing.unitTest, seawingGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{59, -5}, {59, -62.25}, {103, -62.25}, {103, -61}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, gliderSeawing.env_current_speed) annotation(
    Line(points = {{-42, 87}, {-42, 87.25}, {72, 87.25}, {72, 69}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, gliderSeawing.signalBus) annotation(
    Line(points = {{-59, 71}, {-59, -36}, {89.5, -36}, {89.5, -5}, {88.25, -5}, {88.25, -4}, {89, -4}}, color = {255, 204, 51}, thickness = 0.5));
  connect(manualInputsRepeatYoControlShiftAndRollingMass.out_VBD, gliderSeawing.in_VBD_mass) annotation(
    Line(points = {{-78, 17}, {-44, 17}, {-44, 33}, {8, 33}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlShiftAndRollingMass.out_m_s, gliderSeawing.in_mov_shift) annotation(
    Line(points = {{-78, -7}, {-46, -7}, {-46, 4}, {8, 4}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlShiftAndRollingMass.out_m_r, gliderSeawing.in_mov_roll) annotation(
    Line(points = {{-78, -31}, {-46, -31}, {-46, -21}, {9, -21}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.depthNoise, manualInputsRepeatYoControlShiftAndRollingMass.in_depth) annotation(
    Line(points = {{89, -4}, {89, -93}, {-182, -93}, {-182, 16}, {-148, 16}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.EulerAnglesNoise[2], manualInputsRepeatYoControlShiftAndRollingMass.in_pitch_measured) annotation(
    Line(points = {{89, -4}, {89, -85}, {-174, -85}, {-174, -11}, {-148, -11}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.EulerAnglesNoise[3], manualInputsRepeatYoControlShiftAndRollingMass.in_yaw_measured) annotation(
    Line(points = {{89, -4}, {89, -79}, {-163, -79}, {-163, -40}, {-148, -40}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 500.0, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}}, grid = {1, 1})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}}, grid = {1, 1})));
end NavigationSeawingDistubances;