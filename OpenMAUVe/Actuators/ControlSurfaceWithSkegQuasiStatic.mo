within OpenMAUVe.Actuators;
model ControlSurfaceWithSkegQuasiStatic
  "Quasi-static SLOCUM rudder/skeg hydrodynamic increments"
  import Modelica.Units.SI;

  parameter Real enableControlSurface = 1.0 "Set to 0 for debugging" annotation(
    Dialog(tab = "Control surface"));
  parameter Real K_D_delta(unit = "kg/(m.rad2)") = 2.0 "Rudder drag coefficient" annotation(
    Dialog(tab = "Control surface"));
  parameter Real K_SF_delta(unit = "kg/(m.rad)") = 5.0 "Rudder side-force coefficient" annotation(
    Dialog(tab = "Control surface"));
  parameter Real K_MY_delta(unit = "kg/rad") = 1.0 "Rudder yaw-moment coefficient" annotation(
    Dialog(tab = "Control surface"));
  parameter SI.Angle rudder_pos_angle = Modelica.Units.Conversions.from_deg(30.0) "Maximum rudder deflection" annotation(
    Dialog(tab = "Control surface"));
  parameter SI.Angle rudder_neg_angle = -Modelica.Units.Conversions.from_deg(30.0) "Minimum rudder deflection" annotation(
    Dialog(tab = "Control surface"));
  parameter SI.Time rudder_tau(min = Modelica.Constants.eps) = 0.1 "Rudder first-order time constant" annotation(
    Dialog(tab = "Control surface"));

  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_Ob annotation(
    Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}})));
  Sensors.SignalBus signalBus annotation(
    Placement(transformation(origin = {0, -100}, extent = {{-18, -18}, {18, 18}}), iconTransformation(origin = {0, -96}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Interfaces.RealInput in_rudder_deflection(unit = "rad") annotation(
    Placement(transformation(origin = {-118, 60}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-100, 0}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput out_rudder_deflection(unit = "rad") annotation(
    Placement(transformation(origin = {0, 112}, extent = {{-10, -10}, {10, 10}}, rotation = 90), iconTransformation(origin = {0, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));

  Modelica.Blocks.Nonlinear.Limiter rudderLimiter(uMax = rudder_pos_angle, uMin = rudder_neg_angle) annotation(
    Placement(transformation(origin = {-72, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.FirstOrder rudderDynamics(
    T = rudder_tau,
    initType = Modelica.Blocks.Types.Init.InitialOutput,
    y_start = 0.0) annotation(
    Placement(transformation(origin = {-36, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain alpha(k = 1) annotation(
    Placement(transformation(origin = {-52, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Blocks.Math.Gain beta(k = 1) annotation(
    Placement(transformation(origin = {-14, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Blocks.Math.Gain flowspeed(k = 1) annotation(
    Placement(transformation(origin = {24, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));

  Modelica.Mechanics.MultiBody.Forces.WorldForce force(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b, color = {0, 170, 170}) annotation(
    Placement(transformation(origin = {42, 22}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldTorque torque(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b, color = {0, 120, 120}) annotation(
    Placement(transformation(origin = {42, -24}, extent = {{-10, -10}, {10, 10}})));

  SI.Angle delta "Limited rudder deflection";
  Real D_delta;
  Real SF_delta;
  Real MY_delta;
  Real F_rudder[3] "Incremental force in flow frame";
  Real T_rudder[3] "Incremental torque in flow frame";
  Real F_rudder_b[3] "Incremental force in body frame";
  Real T_rudder_b[3] "Incremental torque in body frame";
  Real R_FB[3, 3] "Flow-to-body rotation matrix";

equation
  delta = rudderDynamics.y;
  D_delta = K_D_delta*delta^2*flowspeed.y^2;
  SF_delta = K_SF_delta*delta*flowspeed.y^2;
  MY_delta = K_MY_delta*delta*flowspeed.y^2;

  R_FB = [cos(alpha.y)*cos(beta.y), -cos(alpha.y)*sin(beta.y), -sin(alpha.y);
          sin(beta.y), cos(beta.y), 0;
          sin(alpha.y)*cos(beta.y), -sin(alpha.y)*sin(beta.y), cos(alpha.y)];

  F_rudder = {-D_delta, SF_delta, 0.0};
  T_rudder = {0.0, 0.0, MY_delta};
  F_rudder_b = R_FB*F_rudder;
  T_rudder_b = R_FB*T_rudder;

  force.force = enableControlSurface*F_rudder_b;
  torque.torque = enableControlSurface*T_rudder_b;

  connect(in_rudder_deflection, rudderLimiter.u) annotation(
    Line(points = {{-118, 60}, {-84, 60}}, color = {0, 0, 127}));
  connect(rudderLimiter.y, rudderDynamics.u) annotation(
    Line(points = {{-61, 60}, {-48, 60}}, color = {0, 0, 127}));
  connect(rudderDynamics.y, out_rudder_deflection) annotation(
    Line(points = {{-25, 60}, {0, 60}, {0, 112}}, color = {0, 0, 127}));
  connect(signalBus.alpha, alpha.u) annotation(
    Line(points = {{0, -100}, {0, -74}, {-52, -74}, {-52, -56}}, color = {255, 204, 51}, thickness = 0.5));
  connect(signalBus.beta, beta.u) annotation(
    Line(points = {{0, -100}, {0, -74}, {-14, -74}, {-14, -56}}, color = {255, 204, 51}, thickness = 0.5));
  connect(signalBus.flowspeed, flowspeed.u) annotation(
    Line(points = {{0, -100}, {0, -74}, {24, -74}, {24, -56}}, color = {255, 204, 51}, thickness = 0.5));
  connect(force.frame_b, frame_Ob) annotation(
    Line(points = {{52, 22}, {74, 22}, {74, 0}, {100, 0}}, color = {95, 95, 95}));
  connect(torque.frame_b, frame_Ob) annotation(
    Line(points = {{52, -24}, {74, -24}, {74, 0}, {100, 0}}, color = {95, 95, 95}));
  annotation(
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-140, -120}, {120, 120}})),
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-120, -120}, {120, 120}}), graphics = {
      Polygon(points = {{-66, 48}, {48, 0}, {-66, -48}, {-28, 0}, {-66, 48}}, lineColor = {0, 120, 120}, fillColor = {196, 232, 232}, fillPattern = FillPattern.Solid),
      Line(points = {{-28, 0}, {82, 0}}, color = {0, 120, 120}, thickness = 1),
      Text(extent = {{-76, 106}, {76, 72}}, textString = "rudder"),
      Text(extent = {{-118, -34}, {-58, -64}}, textString = "delta"),
      Text(extent = {{62, 34}, {118, 4}}, textString = "{O_b}")}));
end ControlSurfaceWithSkegQuasiStatic;
