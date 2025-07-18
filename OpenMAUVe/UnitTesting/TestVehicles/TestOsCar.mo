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
  Vehicles.OsCar osCar(adimensionalHydroParamUsed = false, rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 0.75}, show_frames_vehicles = true, nabla_0 = 0.002877, fin_freq_saturation_pos_caudal = 10.0, scaleDist = 10^(-6), show_shapes = true, enableAddedMassEffects = true) annotation(
    Placement(transformation(origin = {54, -13}, extent = {{-43, -38}, {43, 38}})));
  Modelica.Blocks.Sources.Step ref_caudal_freq(height = 0.1, startTime = 10) annotation(
    Placement(transformation(origin = {-82, -10}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Step ref_caudal_amplitude(height = 35.0, startTime = 10) annotation(
    Placement(transformation(origin = {-80, -54}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.BooleanExpression ref_caudal_is_open(y = if time < 30 then false else true) annotation(
    Placement(transformation(origin = {-80, 24}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(currentsSouthChinaSea.signalBus, osCar.signalBus) annotation(
    Line(points = {{-34, 50}, {-34, -52}, {55, -52}, {55, -30}}, color = {255, 204, 51}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, osCar.env_current_speed) annotation(
    Line(points = {{-10, 74}, {48, 74}, {48, 28}, {52, 28}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_caudal_freq.y, osCar.in_caudal_frequency) annotation(
    Line(points = {{-71, -10}, {-30, -10}, {-30, -12}, {11, -12}}, color = {0, 0, 127}));
  connect(ref_caudal_amplitude.y, osCar.in_caudal_amplitude) annotation(
    Line(points = {{-69, -54}, {-24, -54}, {-24, -34}, {12, -34}}, color = {0, 0, 127}));
  connect(ref_caudal_is_open.y, osCar.is_caudal_fin_opened) annotation(
    Line(points = {{-68, 24}, {-20, 24}, {-20, 10}, {12, 10}}, color = {255, 0, 255}));
  annotation(
    experiment(StopTime = 200.0, Interval = 0.01, Tolerance = 1e-05));
end TestOsCar;