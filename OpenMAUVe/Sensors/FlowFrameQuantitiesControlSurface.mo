within OpenMAUVe.Sensors;
model FlowFrameQuantitiesControlSurface "A model to compute the flow frame quantities experienced by a control surface mounted at r_cs with orientation orientation_cs wrt {O_b}. The relative velocity at the surface includes the contribution of the vehicle angular velocity (omega x r_cs) and is resolved in the control surface frame, so that alpha is the incidence angle of the surface and the lift direction follows the surface orientation (e.g. a rudder reads the vehicle sideslip)."

  import Modelica.Units.SI;
  import Frames = Modelica.Mechanics.MultiBody.Frames;

  parameter SI.Position r_cs[3] = {0.0, 0.0, 0.0} "Position of the control surface origin wrt to {O_b}";
  parameter SI.Angle orientation_cs[3] = {0, 0, 0} "Orientation of the control surface wrt {O_b} (planar rotation sequence 1-2-3, same convention as the FixedRotation of the control surface)";
  parameter SI.Velocity flowAngleRegularizationSpeed = 1e-4
    "Positive chordwise-speed scale used to regularize the flow angles near zero relative chordwise speed";
  final parameter Frames.Orientation R_b_cs = Frames.axesRotations({1, 2, 3}, orientation_cs, zeros(3)) "Orientation object rotating {O_b} into the control surface frame";

  SI.Angle alpha "Incidence angle of the control surface (positive: flow coming from the +z side of the surface frame)";
  SI.Angle beta "Sideslip angle of the flow in the control surface frame";
  Real alpha_deg(unit = "deg");
  Real beta_deg(unit = "deg");
  SI.Velocity flowspeed "Magnitude of the relative velocity between the control surface and the fluid";
  SI.Velocity u_r "Relative velocity along the chord (x-axis) of the control surface frame";
  SI.Velocity v_r "Relative velocity along the span (y-axis) of the control surface frame";
  SI.Velocity w_r "Relative velocity normal to the surface (z-axis) of the control surface frame";
  SI.Velocity u_r_regularized;
  SI.Velocity[3] velocityRelativeToFluidAtControlSurfaceInBody "Relative velocity of the control surface origin wrt to the fluid, resolved in {O_b}: v_r + omega x r_cs";
  SI.Velocity[3] velocityRelativeToFluidAtControlSurfaceInCS "Relative velocity of the control surface origin wrt to the fluid, resolved in the control surface frame";

  SignalBus signalBus annotation(
    Placement(transformation(origin = {1, -97}, extent = {{-27, -19}, {27, 19}}), iconTransformation(origin = {-1, -89}, extent = {{-23, -23}, {23, 23}})));
  Modelica.Blocks.Interfaces.RealOutput out_alpha annotation(
    Placement(transformation(origin = {98, 70}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, 96}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_beta annotation(
    Placement(transformation(origin = {98, 52}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, 72}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_alpha_deg annotation(
    Placement(transformation(origin = {98, 32}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, 48}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_beta_deg annotation(
    Placement(transformation(origin = {98, 14}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, 24}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_flowspeed annotation(
    Placement(transformation(origin = {98, -40}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -44}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_u_r annotation(
    Placement(transformation(origin = {98, -60}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -66}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_v_r annotation(
    Placement(transformation(origin = {98, -76}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -90}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_w_r annotation(
    Placement(transformation(origin = {98, -94}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -112}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain velocityRelativeToFluidLinearOfBodyWrtECIInBody[3](each k = 1) annotation(
    Placement(transformation(extent = {{-112, 16}, {-92, 36}})));
  Modelica.Blocks.Math.Gain velocityAngularOfBodyWrtECIInBody[3](each k = 1) annotation(
    Placement(transformation(extent = {{-112, -24}, {-92, -4}})));
equation
  // 1) Relative velocity of the control surface origin: the vehicle relative velocity plus the rigid-body term omega x r_cs (ref #116, eq. 2.120)
  velocityRelativeToFluidAtControlSurfaceInBody = velocityRelativeToFluidLinearOfBodyWrtECIInBody.y + cross(velocityAngularOfBodyWrtECIInBody.y, r_cs);
  velocityRelativeToFluidAtControlSurfaceInCS = Frames.resolve2(R_b_cs, velocityRelativeToFluidAtControlSurfaceInBody);
  flowspeed = Modelica.Math.Vectors.norm(velocityRelativeToFluidAtControlSurfaceInCS, 2);
  u_r = velocityRelativeToFluidAtControlSurfaceInCS[1];
  v_r = velocityRelativeToFluidAtControlSurfaceInCS[2];
  w_r = velocityRelativeToFluidAtControlSurfaceInCS[3];
  // Continuous low-speed regularization avoids state events when u_r crosses zero (same approach as FlowFrameQuantities).
  u_r_regularized = sqrt(u_r^2 + flowAngleRegularizationSpeed^2);
  alpha = atan2(w_r, u_r_regularized);
  alpha_deg = Modelica.Units.Conversions.to_deg(alpha);
  beta = atan2(v_r, sqrt(u_r_regularized^2 + w_r^2));
  beta_deg = Modelica.Units.Conversions.to_deg(beta);
  // 2) Parsing in output interfaces
  out_alpha = alpha;
  out_beta = beta;
  out_alpha_deg = alpha_deg;
  out_beta_deg = beta_deg;
  out_flowspeed = flowspeed;
  out_u_r = u_r;
  out_v_r = v_r;
  out_w_r = w_r;
  connect(signalBus.velocityRelativeToFluidLinearOfBodyWrtECIInBody, velocityRelativeToFluidLinearOfBodyWrtECIInBody.u) annotation(
    Line(points = {{1.135, -96.905}, {1.135, -44}, {-142, -44}, {-142, 26}, {-114, 26}}, color = {255, 204, 51}, thickness = 0.5), Text(string = "%first", index = -1, extent = {{-6, 3}, {-6, 3}}, horizontalAlignment = TextAlignment.Right));
  connect(signalBus.velocityAngularOfBodyWrtECIInBody, velocityAngularOfBodyWrtECIInBody.u) annotation(
    Line(points = {{1.135, -96.905}, {1.135, -52}, {-132, -52}, {-132, -14}, {-114, -14}}, color = {255, 204, 51}, thickness = 0.5), Text(string = "%first", index = -1, extent = {{-6, 3}, {-6, 3}}, horizontalAlignment = TextAlignment.Right));
  annotation(
    Icon(coordinateSystem(extent = {{-150, -150}, {150, 150}}), graphics = {Text(origin = {0, 120}, extent = {{-140, 20}, {140, -20}}, textString = "Flow frame at control surface")}),
    Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end FlowFrameQuantitiesControlSurface;
