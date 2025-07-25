within OpenMAUVe.VerificationSimulator;
model VerificationAutosub5 "This model aims at manoueuvring Autosub5."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 3600.0;
  parameter SI.Time ramp3_start = 7200.0;
  parameter SI.Time ramp4_start = 10800.0;
  parameter SI.Time ramps_duration = 10.0;
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false)  annotation(
    Placement(transformation(origin = {-34, 74}, extent = {{-24, -24}, {24, 24}})));
  Vehicles.Autosub5 autosub5(scaleDist = 10^(-6), r_0 = {0, 0, 10}, show_frames_vehicles = true, Y_r = 0, Z_q = 0, M_w = 0, N_v = 0, show_forces_and_moments = true, nabla_0 = 2.796692607)  annotation(
    Placement(transformation(origin = {37, -10}, extent = {{-54, -43}, {54, 43}})));
  Modelica.Blocks.Sources.RealExpression referencePortThrusterRPM(y = if time < 100 and time < 200 then 120.0 else 0.0)  annotation(
    Placement(transformation(origin = {-80, 16}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.RealExpression referenceStarbThrusterRPM(y = if time < 100 and time < 200 then 120.0 else 0.0) annotation(
    Placement(transformation(origin = {-80, -14}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(currentsSouthChinaSea.out_currents_inertial_frame, autosub5.env_current_speed) annotation(
    Line(points = {{-10, 74}, {34, 74}, {34, 36}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, autosub5.signalBus) annotation(
    Line(points = {{-34, 50}, {-34, -78}, {38, -78}, {38, -30}}, color = {255, 204, 51}, thickness = 0.5));
  connect(referencePortThrusterRPM.y, autosub5.in_port_thruster_RPM) annotation(
    Line(points = {{-68, 16}, {-16, 16}, {-16, 18}}, color = {0, 0, 127}));
  connect(referenceStarbThrusterRPM.y, autosub5.in_starb_thruster_RPM) annotation(
    Line(points = {{-68, -14}, {-52, -14}, {-52, -8}, {-14, -8}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 190.0, Interval = 0.01, Tolerance = 1e-05));
end VerificationAutosub5;