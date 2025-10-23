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
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = true, gamma_1 = 0.6, gamma_3 = 2.2689280275926285)  annotation(
    Placement(transformation(origin = {-43, 63}, extent = {{-17, -17}, {17, 17}})));
  Control.ManualInputs.manualInputsRepeatYo manualInputsRepeatYo(dive_VBD_ref = 0.4, climb_VBD_ref = -0.4, dive_ms_ref = 0.02, climb_ms_ref = -0.02, target_max_depth = 500, target_min_depth = 30)  annotation(
    Placement(transformation(origin = {-116, -6}, extent = {{-28, -28}, {28, 28}})));
  Control.ManualInputs.manualInputsRepeatYoControlHeading manualInputsRepeatYoControlHeading(dive_VBD_ref = 0.4, dive_ms_ref = 0.02, climb_VBD_ref = -0.4, climb_ms_ref = -0.02, target_max_depth = 600, target_min_depth = 30)  annotation(
    Placement(transformation(origin = {-112, -50}, extent = {{-20, -20}, {20, 20}})));
equation
  connect(gliderSeawing.unitTest, seawingGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{32, -21}, {32, -62}, {77, -62}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, gliderSeawing.env_current_speed) annotation(
    Line(points = {{-26, 63}, {46.34, 63}, {46.34, 52}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, gliderSeawing.signalBus) annotation(
    Line(points = {{-43, 47}, {-43.34, 47}, {-43.34, -45.32}, {62.66, -45.32}, {62.66, -19.32}}, color = {255, 204, 51}, thickness = 0.5));
  connect(gliderSeawing.signalBus.depth, manualInputsRepeatYo.in_depth) annotation(
    Line(points = {{62, -20}, {62, -78}, {-152, -78}, {-152, 1}, {-144, 1}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYo.out_VBD, gliderSeawing.in_VBD_mass) annotation(
    Line(points = {{-87, 12}, {-62, 12}, {-62, 17}, {-19, 17}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYo.out_m_s, gliderSeawing.in_mov_shift) annotation(
    Line(points = {{-87, -7}, {-60, -7}, {-60, -12}, {-19, -12}}, color = {0, 0, 127}));
  connect(manualInputsRepeatYo.out_m_r, gliderSeawing.in_mov_roll) annotation(
    Line(points = {{-87, -25}, {-62, -25}, {-62, -37}, {-18, -37}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 10000.0, Interval = 0.1, Tolerance = 1e-06),
    Diagram);
end NavigationSeawingDistubances;