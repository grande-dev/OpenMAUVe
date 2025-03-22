within Glider_Lib.Sensors;

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
  Real roll, pitch, yaw;
  
  SI.Velocity[3] velocityRelativeToFluidLinearOfBodyWrtECIInBody "Relative speed of the vehicle wrt to fluid (including currents)";
  
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
  
equation
  
  // 1) Calculations
  velocityRelativeToFluidLinearOfBodyWrtECIInBody = signalBus.velocityLinearOfBodyWrtECIInBody - signalBus.velocityCurrentsInB; // eq. 2.120 ref #116
 
  flowspeed = Modelica.Math.Vectors.norm(velocityRelativeToFluidLinearOfBodyWrtECIInBody, 2);
  u_r = velocityRelativeToFluidLinearOfBodyWrtECIInBody[1];
  v_r = velocityRelativeToFluidLinearOfBodyWrtECIInBody[2];
  w_r = velocityRelativeToFluidLinearOfBodyWrtECIInBody[3];
  
  alpha = atan2(w_r, u_r);
  beta = asin(v_r/flowspeed);
  alpha_deg = Modelica.Units.Conversions.to_deg(alpha);
  beta_deg = Modelica.Units.Conversions.to_deg(beta);

  roll = signalBus.EulerAngles[1];
  pitch = signalBus.EulerAngles[2];
  yaw = signalBus.EulerAngles[3];

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
  

annotation(
    Icon(coordinateSystem(extent = {{-150, -150}, {150, 150}})),
    Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end FlowFrameQuantities;