within OpenMAUVe.UnitTesting.TestVehicles;

model TestOsCar "This model test a single yo for the ROGUE glider as described in #72."
  import Modelica.Units.SI;
  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 3600.0;
  parameter SI.Time ramp3_start = 7200.0;
  parameter SI.Time ramp4_start = 10800.0;
  parameter SI.Time ramps_duration = 10.0;
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false) annotation(
    Placement(transformation(origin = {-34, 74}, extent = {{-24, -24}, {24, 24}})));
  Vehicles.OsCar osCar(adimensionalHydroParamUsed = false, rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 0.75}, show_frames_vehicles = true, nabla_0 = 0.002877, r_fin_caudal = {-0.25, 0.0, 0.0}, A_fin_caudal = 0.011, length_fin_caudal = 0.145, fin_freq_saturation_pos_caudal = 10.0, scaleDist = 10^(-6), show_shapes = true, enableAddedMassEffects = true) annotation(
    Placement(transformation(origin = {50, 1}, extent = {{-43, -38}, {43, 38}})));
  Modelica.Blocks.Sources.Step ref_caudal_freq(height = 1, startTime = 10) annotation(
    Placement(transformation(origin = {-64, 24}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step ref_caudal_amplitude(height = Modelica.Units.Conversions.from_deg(70.0), startTime = 10) annotation(
    Placement(transformation(origin = {-62, -20}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(currentsSouthChinaSea.signalBus, osCar.signalBus) annotation(
    Line(points = {{-34, 50}, {-34, -52}, {51, -52}, {51, -16}}, color = {255, 204, 51}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, osCar.env_current_speed) annotation(
    Line(points = {{-10, 74}, {48, 74}, {48, 42}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_caudal_freq.y, osCar.in_caudal_frequency) annotation(
    Line(points = {{-53, 24}, {-28, 24}, {-28, 17}, {7, 17}}, color = {0, 0, 127}));
  connect(ref_caudal_amplitude.y, osCar.in_caudal_amplitude) annotation(
    Line(points = {{-50, -20}, {-24, -20}, {-24, -5}, {8, -5}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 50.0, Interval = 0.1, Tolerance = 1e-05));
end TestOsCar;