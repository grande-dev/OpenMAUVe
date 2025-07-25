within OpenMAUVe.VerificationSimulator;
model VerificationAutosub5 "This model aims at manoueuvring OsCar."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 3600.0;
  parameter SI.Time ramp3_start = 7200.0;
  parameter SI.Time ramp4_start = 10800.0;
  parameter SI.Time ramps_duration = 10.0;
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false)  annotation(
    Placement(transformation(origin = {-34, 74}, extent = {{-24, -24}, {24, 24}})));
  Modelica.Blocks.Sources.Step ref_caudal_amplitude(height = 35.0, startTime = 10)  annotation(
    Placement(transformation(origin = {-68, -32}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.BooleanExpression ref_caudal_is_open(y = if time < 100 then false else true)  annotation(
    Placement(transformation(origin = {-70, 24}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.RealExpression ref_caudal_frequency(y = if time < 10 then 0 else if time < 40 then 1 else if time < 70 then 2 else if time < 100 then 3 else if time < 130 then 1 else if time < 160 then 2 else 3)  annotation(
    Placement(transformation(origin = {-68, 0}, extent = {{-10, -10}, {10, 10}})));
  Vehicles.Autosub5 autosub5 annotation(
    Placement(transformation(origin = {37, -10}, extent = {{-54, -43}, {54, 43}})));
equation
  connect(currentsSouthChinaSea.out_currents_inertial_frame, autosub5.env_current_speed) annotation(
    Line(points = {{-10, 74}, {34, 74}, {34, 36}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, autosub5.signalBus) annotation(
    Line(points = {{-34, 50}, {-34, -78}, {38, -78}, {38, -30}}, color = {255, 204, 51}, thickness = 0.5));
  connect(ref_caudal_is_open.y, autosub5.is_caudal_fin_opened) annotation(
    Line(points = {{-58, 24}, {-44, 24}, {-44, 16}, {-16, 16}}, color = {255, 0, 255}));
  connect(ref_caudal_frequency.y, autosub5.in_caudal_frequency) annotation(
    Line(points = {{-56, 0}, {-48, 0}, {-48, -8}, {-18, -8}}, color = {0, 0, 127}));
  connect(ref_caudal_amplitude.y, autosub5.in_caudal_amplitude) annotation(
    Line(points = {{-56, -32}, {-50, -32}, {-50, -34}, {-16, -34}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 190.0, Interval = 0.01, Tolerance = 1e-05));
end VerificationAutosub5;