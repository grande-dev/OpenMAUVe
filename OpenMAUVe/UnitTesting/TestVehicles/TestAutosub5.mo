within OpenMAUVe.UnitTesting.TestVehicles;

model TestAutosub5 "This model aims at manoueuvring Autosub5."
  import Modelica.Units.SI;
  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 3600.0;
  parameter SI.Time ramp3_start = 7200.0;
  parameter SI.Time ramp4_start = 10800.0;
  parameter SI.Time ramps_duration = 10.0;
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false) annotation(
    Placement(transformation(origin = {-34, 64}, extent = {{-24, -24}, {24, 24}})));
  Vehicles.Autosub5 autosub5(r_0 = {0, 0, 10.0}, show_frames_vehicles = true, Y_r = 0, Z_q = 0, M_w = 0, N_v = 0, show_forces_and_moments = false, nabla_0 = 2.796692607, enable_control_surfaces = true, enable_propulsion = true, enableAddedMassEffects = false, scaleDist = 10^(-6), show_shapes = true, show_control_forces_and_moments = false) annotation(
    Placement(transformation(origin = {39, -8}, extent = {{-54, -43}, {54, 43}})));
  Modelica.Blocks.Sources.RealExpression referencePortThrusterRPM(y = if time > 5 and time < 200 then 391.0 else 0.0) annotation(
    Placement(transformation(origin = {-84, 16}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.RealExpression referenceStarbThrusterRPM(y = if time > 5 and time < 200 then 391.0 else 0.0) annotation(
    Placement(transformation(origin = {-84, -6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.RealExpression referenceControlSurfaceStarbTop(y = if time > 150 and time < 150 then -25.0 else -0.0) annotation(
    Placement(transformation(origin = {-84, -24}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.RealExpression referenceControlSurfaceStarbBottom(y = if time > 150 and time < 150 then -25.0 else 0.0) annotation(
    Placement(transformation(origin = {-84, -44}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.RealExpression referenceControlSurfacePortBottom(y = if time > 150 and time < 150 then 25.0 else 0.0) annotation(
    Placement(transformation(origin = {-84, -62}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.RealExpression referenceControlSurfacePortTop(y = if time > 150 and time < 150 then 25.0 else 0.0) annotation(
    Placement(transformation(origin = {-84, -80}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(currentsSouthChinaSea.out_currents_inertial_frame, autosub5.env_current_speed) annotation(
    Line(points = {{-10, 64}, {-10, 64.5}, {38, 64.5}, {38, 25}, {37, 25}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, autosub5.signalBus) annotation(
    Line(points = {{-34, 41}, {-34, -30}, {40, -30}, {40, -22}}, color = {255, 204, 51}, thickness = 0.5));
  connect(referencePortThrusterRPM.y, autosub5.in_port_thruster_RPM) annotation(
    Line(points = {{-73, 16}, {-33.5, 16}, {-33.5, 12}, {1, 12}}, color = {0, 0, 127}));
  connect(referenceStarbThrusterRPM.y, autosub5.in_starb_thruster_RPM) annotation(
    Line(points = {{-73, -6}, {2, -6}}, color = {0, 0, 127}));
  connect(referenceControlSurfaceStarbTop.y, autosub5.in_fin_starb_top) annotation(
    Line(points = {{-72, -24}, {-36, -24}, {-36, -26}, {2, -26}}, color = {0, 0, 127}));
  connect(referenceControlSurfaceStarbBottom.y, autosub5.in_fin_starb_bottom) annotation(
    Line(points = {{-72, -44}, {-48, -44}, {-48, -32}, {2, -32}}, color = {0, 0, 127}));
  connect(referenceControlSurfacePortBottom.y, autosub5.in_fin_port_bottom) annotation(
    Line(points = {{-72, -62}, {-40, -62}, {-40, -40}, {2, -40}}, color = {0, 0, 127}));
  connect(referenceControlSurfacePortTop.y, autosub5.in_fin_port_top) annotation(
    Line(points = {{-72, -80}, {-32, -80}, {-32, -46}, {2, -46}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 20.0, Interval = 0.01, Tolerance = 1e-05));
end TestAutosub5;