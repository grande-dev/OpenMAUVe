within OpenMAUVe.Sensors;
model FlowFrameQuantities "A model to inject the quantities relative to the flow frame into the signal bus."

  import Modelica.Units.SI;

  SI.Angle alpha;
  SI.Angle beta;
  Real alpha_deg(unit = "deg");
  Real beta_deg(unit = "deg");
  SI.Angle chi "Course angle";   // χ
  SI.Angle xsi "Glide path angle";// ξ
  SI.Velocity flowspeed; // magnitude of the relative speed vector of the vehicle wrt to the fluid in body-fixed frame
  SI.Velocity u_r;
  SI.Velocity v_r;
  SI.Velocity w_r;
  SI.Velocity[3] velocityCurrentsInB;
  Real roll, pitch, yaw;
  Real cphi "Cosine roll";
  Real sphi "Sin roll";
  Real ctheta "Cosine pitch";
  Real stheta "Cosine pitch";
  Real cpsi "Cosine yaw";
  Real spsi "Cosine yaw";

  SI.Velocity[3] velocityRelativeToFluidLinearOfBodyWrtECIInBody "Relative speed of the vehicle wrt to fluid (including currents)";
  Real[3,3] RInertialToBody "Rotation matrix from inertial to body frame"; 
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
  Modelica.Blocks.Interfaces.RealOutput out_chi annotation(
    Placement(transformation(origin = {98, -6}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_xsi annotation(
    Placement(transformation(origin = {98, -24}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -22}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_flowspeed annotation(
    Placement(transformation(origin = {98, -40}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -44}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_u_r annotation(
    Placement(transformation(origin = {98, -60}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -66}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_v_r annotation(
    Placement(transformation(origin = {98, -76}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -90}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_w_r annotation(
    Placement(transformation(origin = {98, -94}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -112}, extent = {{-10, -10}, {10, 10}})));

  Modelica.Blocks.Math.Gain EulerAngles[3](each k=1)
    annotation (Placement(transformation(extent={{-110,46},{-90,66}})));
  Modelica.Blocks.Math.Gain velocityLinearOfBodyWrtECIInBody[3](each k=1)
    annotation (Placement(transformation(extent={{-112,16},{-92,36}})));
  Modelica.Blocks.Math.Gain velocityCurrentsInNED[3](each k=1)
    annotation (Placement(transformation(extent={{-114,-14},{-94,6}})));
  Modelica.Blocks.Interfaces.RealOutput out_velocityCurrentsInB[3] annotation(
    Placement(transformation(origin = {100, -110}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {132, -134}, extent = {{-10, -10}, {10, 10}})));
equation

  // 1) Calculations
  RInertialToBody = [ctheta*cpsi, ctheta*spsi, -stheta;
                     sphi*stheta*cpsi - cphi*spsi,   sphi*stheta*spsi + cphi*cpsi,   sphi*ctheta;
                     cphi*stheta*cpsi + sphi*spsi,   cphi*stheta*spsi - sphi*cpsi,   cphi*ctheta]; // Rotation from inertial to body
  
  // Transform the current velocity
  velocityCurrentsInB = RInertialToBody * velocityCurrentsInNED.y;
  
  velocityRelativeToFluidLinearOfBodyWrtECIInBody = velocityLinearOfBodyWrtECIInBody.y - velocityCurrentsInB; // eq. 2.120 ref #116

  flowspeed = Modelica.Math.Vectors.norm(velocityRelativeToFluidLinearOfBodyWrtECIInBody, 2);
  u_r = velocityRelativeToFluidLinearOfBodyWrtECIInBody[1];
  v_r = velocityRelativeToFluidLinearOfBodyWrtECIInBody[2];
  w_r = velocityRelativeToFluidLinearOfBodyWrtECIInBody[3];


  // Angle of attack calculation
  if (abs(u_r) < ModelicaServices.Machine.eps) then 
    alpha = 0.0;
  elseif (u_r > 0) then 
    alpha = atan2(w_r, u_r);
  else
    alpha = atan2(w_r, -u_r); // ref #656
  end if;
  alpha_deg = Modelica.Units.Conversions.to_deg(alpha);

  // Sideslip angle calculation
  if (abs(flowspeed) < ModelicaServices.Machine.eps) then 
    beta = 0.0;
  elseif (flowspeed > 0) then 
    beta = asin(v_r/flowspeed);
  else
    beta = asin(-v_r/flowspeed); // ref #656
  end if;
  beta_deg = Modelica.Units.Conversions.to_deg(beta);

  roll = EulerAngles[1].y;
  pitch = EulerAngles[2].y;
  yaw = EulerAngles[3].y;
  cphi = cos(roll);
  sphi = sin(roll);
  ctheta = cos(pitch);
  stheta = sin(pitch);
  cpsi = cos(yaw);
  spsi = sin(yaw);


  chi = beta + yaw; // definition (2.96) reference #116
  xsi = pitch-alpha; // reference #72 p. 92

  // 2) Parsing in output interfaces
  //out_velocityRelativeToFluidLinearOfBodyWrtECIInBody = velocityRelativeToFluidLinearOfBodyWrtECIInBody;
  out_alpha = alpha;
  out_beta = beta;
  out_alpha_deg = alpha_deg;
  out_beta_deg = beta_deg;
  out_chi = chi;
  out_xsi = xsi;
  out_flowspeed = flowspeed;
  out_u_r = u_r;
  out_v_r = v_r;
  out_w_r = w_r;
  out_velocityCurrentsInB = velocityCurrentsInB;

  connect(signalBus.EulerAngles, EulerAngles.u) annotation (Line(
      points={{1.135,-96.905},{1.135,-52},{-152,-52},{-152,56},{-112,56}},
      color={255,204,51},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}},
      horizontalAlignment=TextAlignment.Right));
  connect(signalBus.velocityLinearOfBodyWrtECIInBody,
    velocityLinearOfBodyWrtECIInBody.u) annotation (Line(
      points={{1.135,-96.905},{1.135,-44},{-142,-44},{-142,26},{-114,26}},
      color={255,204,51},
      thickness=0.5), Text(
      string="%first",
      index=-1,
      extent={{-6,3},{-6,3}},
      horizontalAlignment=TextAlignment.Right));
  connect(signalBus.velocityCurrentsInNED, velocityCurrentsInNED.u) annotation(
    Line(points = {{2, -96}, {0, -96}, {0, -28}, {-132, -28}, {-132, -4}, {-116, -4}}, thickness = 0.5));

annotation(
    Icon(coordinateSystem(extent = {{-150, -150}, {150, 150}})),
    Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end FlowFrameQuantities;