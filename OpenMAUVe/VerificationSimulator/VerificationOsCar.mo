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
  Vehicles.OsCar osCar( rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 100.0}, show_frames_vehicles = true, nabla_0 = 0.002877, r_fin_caudal = {-0.25, 0.0, 0.0}, length_fin_caudal = 0.14, fin_freq_saturation_pos_caudal = 1000.0, show_shapes = true, A_fin_open_caudal = 0.011, A_fin_closed_caudal = 0.004, fin_amplitude_saturation_pos_caudal(displayUnit = "rad"), fin_amplitude_saturation_neg_caudal(displayUnit = "rad"), M_qdot = 0.002043139, X_u = 31.0, enableAddedMassEffects = true, r_g_hull = {0.0, 0.0, 0.1}, enable_propulsion = false)  annotation(
    Placement(transformation(origin = {54, -1}, extent = {{-43, -38}, {43, 38}})));
  Modelica.Blocks.Sources.Step ref_caudal_freq(height = 3, startTime = 10)  annotation(
    Placement(transformation(origin = {-68, -12}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step ref_caudal_amplitude(height = 35.0, startTime = 10)  annotation(
    Placement(transformation(origin = {-66, -56}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.BooleanExpression ref_caudal_is_open(y = if time < 30 then false else true)  annotation(
    Placement(transformation(origin = {-72, 24}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(currentsSouthChinaSea.signalBus, osCar.signalBus) annotation(
    Line(points = {{-34, 50}, {-34, -52}, {55, -52}, {55, -18}}, color = {255, 204, 51}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, osCar.env_current_speed) annotation(
    Line(points = {{-10, 74}, {48, 74}, {48, 40}, {52, 40}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_caudal_freq.y, osCar.in_caudal_frequency) annotation(
    Line(points = {{-57, -12}, {-22, -12}, {-22, 0}, {11, 0}}, color = {0, 0, 127}));
  connect(ref_caudal_amplitude.y, osCar.in_caudal_amplitude) annotation(
    Line(points = {{-55, -56}, {-24, -56}, {-24, -22}, {12, -22}}, color = {0, 0, 127}));
  connect(ref_caudal_is_open.y, osCar.is_caudal_fin_opened) annotation(
    Line(points = {{-60, 24}, {-24, 24}, {-24, 22}, {12, 22}}, color = {255, 0, 255}));
  annotation(
    experiment(StopTime = 1000.0, Interval = 0.01, Tolerance = 1e-05));
end VerificationOsCar;