within OpenMAUVe.VerificationSimulator;
model VerificationOsCar "This model aims at manoueuvring OsCar."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 3600.0;
  parameter SI.Time ramp3_start = 7200.0;
  parameter SI.Time ramp4_start = 10800.0;
  parameter SI.Time ramps_duration = 10.0;
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false)  annotation(
    Placement(transformation(origin = {-34, 74}, extent = {{-24, -24}, {24, 24}})));
  Vehicles.OsCar osCar( rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 100.0}, show_frames_vehicles = true, nabla_0 = 0.002877, fin_freq_saturation_pos_caudal = 1000.0, show_shapes = true, fin_amplitude_saturation_pos_caudal(displayUnit = "rad"), fin_amplitude_saturation_neg_caudal(displayUnit = "rad"), enableAddedMassEffects = false, show_forces_and_moments = true)  annotation(
    Placement(transformation(origin = {54, -1}, extent = {{-43, -38}, {43, 38}})));
  Modelica.Blocks.Sources.Step ref_caudal_amplitude(height = 35.0, startTime = 10)  annotation(
    Placement(transformation(origin = {-68, -32}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.BooleanExpression ref_caudal_is_open(y = if time < 100 then false else true)  annotation(
    Placement(transformation(origin = {-70, 24}, extent = {{-10, -10}, {10, 10}})));
  UnitTesting.TestVehicles.Groundtruth.OsCarGroundthruthResults osCarGroundthruthResults(checkTimeInit = 10, checkTimeFinal = 190)  annotation(
    Placement(transformation(origin = {90, -52}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Sources.RealExpression ref_caudal_frequency(y = if time < 10 then 0 else if time < 40 then 1 else if time < 70 then 2 else if time < 100 then 3 else if time < 130 then 1 else if time < 160 then 2 else 3)  annotation(
    Placement(transformation(origin = {-68, 0}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(currentsSouthChinaSea.signalBus, osCar.signalBus) annotation(
    Line(points = {{-34, 50}, {-34, -52}, {55, -52}, {55, -18}}, color = {255, 204, 51}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, osCar.env_current_speed) annotation(
    Line(points = {{-10, 74}, {52, 74}, {52, 40}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_caudal_amplitude.y, osCar.in_caudal_amplitude) annotation(
    Line(points = {{-57, -32}, {-24.5, -32}, {-24.5, -22}, {12, -22}}, color = {0, 0, 127}));
  connect(ref_caudal_is_open.y, osCar.is_caudal_fin_opened) annotation(
    Line(points = {{-59, 24}, {-24, 24}, {-24, 22}, {12, 22}}, color = {255, 0, 255}));
  connect(osCar.signalBus.u_r, osCarGroundthruthResults.inputUnitTest[1]) annotation(
    Line(points = {{56, -18}, {58, -18}, {58, -52}, {71, -52}}, color = {255, 204, 51}, thickness = 0.5));
  connect(ref_caudal_frequency.y, osCar.in_caudal_frequency) annotation(
    Line(points = {{-56, 0}, {10, 0}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 190.0, Interval = 0.01, Tolerance = 1e-05));
end VerificationOsCar;