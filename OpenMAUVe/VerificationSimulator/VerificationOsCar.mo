within OpenMAUVe.VerificationSimulator;
model VerificationOsCar "This model test a single yo for the ROGUE glider as described in #72."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 3600.0;
  parameter SI.Time ramp3_start = 7200.0;
  parameter SI.Time ramp4_start = 10800.0;
  parameter SI.Time ramps_duration = 10.0;
  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false)  annotation(
    Placement(transformation(origin = {-34, 74}, extent = {{-24, -24}, {24, 24}})));
  Vehicles.OsCar osCar(adimensionalHydroParamUsed = false, rho_0(displayUnit = "kg/m3"), r_0 = {0, 0, 10}, scaleDist = 10^(-6), show_frames_vehicles = true, nabla_0 = 0.002877)  annotation(
    Placement(transformation(origin = {42, 3}, extent = {{-43, -38}, {43, 38}})));
equation
  connect(currentsSouthChinaSea.signalBus, osCar.signalBus) annotation(
    Line(points = {{-34, 50}, {-34, -52}, {56, -52}, {56, -16}}, color = {255, 204, 51}, thickness = 0.5));
  connect(currentsSouthChinaSea.out_currents_inertial_frame, osCar.env_current_speed) annotation(
    Line(points = {{-10, 74}, {40, 74}, {40, 44}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(
    experiment(StopTime = 50.0, Interval = 0.1, Tolerance = 1e-05));
end VerificationOsCar;