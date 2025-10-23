within OpenMAUVe.Scenarios;

model NavigationSeawingDistubances "This model test a single yo for the ROGUE glider as described in #72."
  import Modelica.Units.SI;
  
    parameter SI.Time ramp1_start = 0.0;
    parameter SI.Time ramp2_start = 3600.0;
    parameter SI.Time ramp3_start = 7200.0;
    parameter SI.Time ramp4_start = 10800.0;
    parameter SI.Time ramps_duration = 30.0;
  
  
  Vehicles.gliderSeawing gliderSeawing(rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 50}, v_0 = {0.0001, 0.0, 0.00005}, w_0 = {0.001, 0.0, 0.001}) annotation(
    Placement(transformation(origin = {47, -1}, extent = {{-48, -50}, {48, 50}})));
  VerificationSimulator.GroundthruthVerification.SeawingGroundthruthVerification seawingGroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start, checkTimeFinal = 5000.0, maxAcceptableError = 13.14) annotation(
    Placement(transformation(origin = {106, -62}, extent = {{-30, -30}, {30, 30}})));
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false, gamma_1 = 0.02, gamma_3 = 2.2689280275926285, gamma_2 = 300.0)  annotation(
    Placement(transformation(origin = {-47, 67}, extent = {{-17, -17}, {17, 17}})));
  Control.ManualInputs.manualInputsRepeatYoControlHeading manualInputsRepeatYoControlHeading(dive_VBD_ref = 0.3, dive_ms_ref = 0.02, climb_VBD_ref = -0.3, climb_ms_ref = -0.02, target_max_depth = 600, target_min_depth = 30)  annotation(
    Placement(transformation(origin = {-98, -4}, extent = {{-20, -20}, {20, 20}})));
equation
  connect(gliderSeawing.unitTest, seawingGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{32, -21}, {32, -62}, {77, -62}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, gliderSeawing.env_current_speed) annotation(
    Line(points = {{-30, 67}, {-30, 67.5}, {44, 67.5}, {44, 52}, {46.34, 52}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, gliderSeawing.signalBus) annotation(
    Line(points = {{-47, 51}, {-47, -19.32}, {62.66, -19.32}}, color = {255, 204, 51}, thickness = 0.5));
  connect(gliderSeawing.signalBus.depth, manualInputsRepeatYoControlHeading.in_depth) annotation(
    Line(points = {{62, -20}, {62, -96}, {-148, -96}, {-148, 1}, {-118, 1}}, color = {0, 0, 127}));
  connect(gliderSeawing.signalBus.EulerAngles[3], manualInputsRepeatYoControlHeading.in_yaw_measured) annotation(
    Line(points = {{62, -20}, {62, -106}, {-140, -106}, {-140, -16}, {-118, -16}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeading.out_VBD, gliderSeawing.in_VBD_mass) annotation(
    Line(points = {{-78, 10}, {-56, 10}, {-56, 18}, {-18, 18}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeading.out_m_s, gliderSeawing.in_mov_shift) annotation(
    Line(points = {{-78, -4}, {-58, -4}, {-58, -12}, {-20, -12}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYoControlHeading.out_m_r, gliderSeawing.in_mov_roll) annotation(
    Line(points = {{-78, -18}, {-62, -18}, {-62, -36}, {-18, -36}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 50000.0, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}}, grid = {1, 1})),
  Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}}, grid = {1, 1})));
end NavigationSeawingDistubances;