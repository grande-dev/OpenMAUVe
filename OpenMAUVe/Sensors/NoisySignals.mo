within OpenMAUVe.Sensors;
model NoisySignals "A model to inject the quantities relative to the flow frame into the signal bus."

  import Modelica.Units.SI;

  parameter Boolean enableNoiseSensors = false "set to false only in debugging mode";
  parameter Real noise_gain = 1.0 "Noise gain";
  parameter Real noise_std = 0.0001 "Noise stardard deviation";
  parameter SI.Frequency noise_sample_period = 0.1 "[Hz] period of sensor noise";

  SI.Position[3] positionBodyWrtNED0inNED0Noise;
  SI.Position depthNoise;
  SI.Angle[3] EulerAnglesNoise;
  SI.Velocity[3] velocityLinearOfBodyWrtECIInBodyNoise;
  SI.AngularVelocity[3] velocityAngularOfBodyWrtECIInBodyNoise;
  ////SI.Velocity[3] velocityRelativeToFluidLinearOfBodyWrtECIInBodyNoise;

  Modelica.Blocks.Noise.NormalNoise sensorsNoise(samplePeriod = noise_sample_period, sigma = noise_std) if enableNoiseSensors annotation(
    Placement(transformation(origin = {-107, -107}, extent = {{-23, -23}, {23, 23}})));

  SignalBus signalBus annotation(
    Placement(transformation(origin = {1, -97}, extent = {{-27, -19}, {27, 19}}), iconTransformation(origin = {-1, -89}, extent = {{-23, -23}, {23, 23}})));

  Modelica.Blocks.Interfaces.RealOutput out_depthNoise annotation(
    Placement(transformation(origin = {110, 50}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {134, 54}, extent = {{-10, -10}, {10, 10}})));

  Modelica.Blocks.Math.Gain EulerAngles[3](each k=1)
    annotation (Placement(transformation(origin = {26, 78}, extent = {{-110, 46}, {-90, 66}})));
  Modelica.Blocks.Math.Gain velocityLinearOfBodyWrtECIInBody[3](each k=1)
    annotation (Placement(transformation(origin = {26, 78}, extent = {{-112, 16}, {-92, 36}})));
  Modelica.Blocks.Math.Gain velocityAngularOfBodyWrtECIInBody[3](each k=1)
    annotation (Placement(transformation(origin = {26, 76}, extent = {{-114, -14}, {-94, 6}})));
  Modelica.Blocks.Interfaces.RealOutput out_positionBodyWrtNED0inNED0Noise[3] annotation(
    Placement(transformation(origin = {110, 80}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {134, 112}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_EulerAnglesNoise[3] annotation(
    Placement(transformation(origin = {110, 20}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {134, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_velocityAngularOfBodyWrtECIInBodyNoise[3] annotation(
    Placement(transformation(origin = {110, -56}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {135, -101}, extent = {{-11, -11}, {11, 11}})));
  Modelica.Blocks.Interfaces.RealOutput out_velocityLinearOfBodyWrtECIInBodyNoise[3] annotation(
    Placement(transformation(origin = {110, -16}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {134, -44}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain positionBodyWrtNED0inNED0[3](each k = 1) annotation(
    Placement(transformation(origin = {26, 48}, extent = {{-114, -14}, {-94, 6}})));
  Modelica.Blocks.Math.Gain depth(each k = 1) annotation(
    Placement(transformation(origin = {28, 14}, extent = {{-114, -14}, {-94, 6}})));
equation


  // add noisy signals
  if enableNoiseSensors then 
    positionBodyWrtNED0inNED0Noise[1] = positionBodyWrtNED0inNED0[1].y + sensorsNoise.y*noise_gain ;
    positionBodyWrtNED0inNED0Noise[2] = positionBodyWrtNED0inNED0[2].y + sensorsNoise.y*noise_gain ;
    positionBodyWrtNED0inNED0Noise[3] = positionBodyWrtNED0inNED0[3].y + sensorsNoise.y*noise_gain ;

    depthNoise = depth.y + sensorsNoise.y*noise_gain ;
    
    EulerAnglesNoise[1] = EulerAngles[1].y + sensorsNoise.y*noise_gain ;
    EulerAnglesNoise[2] = EulerAngles[2].y + sensorsNoise.y*noise_gain ;
    EulerAnglesNoise[3] = EulerAngles[2].y + sensorsNoise.y*noise_gain ;
    
    velocityLinearOfBodyWrtECIInBodyNoise[1] = velocityLinearOfBodyWrtECIInBody[1].y + sensorsNoise.y*noise_gain ;
    velocityLinearOfBodyWrtECIInBodyNoise[2] = velocityLinearOfBodyWrtECIInBody[2].y + sensorsNoise.y*noise_gain ;
    velocityLinearOfBodyWrtECIInBodyNoise[3] = velocityLinearOfBodyWrtECIInBody[3].y + sensorsNoise.y*noise_gain ;

    velocityAngularOfBodyWrtECIInBodyNoise[1] = velocityAngularOfBodyWrtECIInBody[1].y + sensorsNoise.y*noise_gain ;
    velocityAngularOfBodyWrtECIInBodyNoise[2] = velocityAngularOfBodyWrtECIInBody[2].y + sensorsNoise.y*noise_gain ;
    velocityAngularOfBodyWrtECIInBodyNoise[3] = velocityAngularOfBodyWrtECIInBody[3].y + sensorsNoise.y*noise_gain ;
  else 
    positionBodyWrtNED0inNED0Noise = positionBodyWrtNED0inNED0.y;
    depthNoise = depth.y;
    EulerAnglesNoise = EulerAngles.y;
    velocityLinearOfBodyWrtECIInBodyNoise = velocityLinearOfBodyWrtECIInBody.y;
    velocityAngularOfBodyWrtECIInBodyNoise = velocityAngularOfBodyWrtECIInBody.y;
  end if;


  // 2) Parsing in output interfaces
  out_positionBodyWrtNED0inNED0Noise = positionBodyWrtNED0inNED0Noise;
  out_depthNoise = depthNoise;
  out_EulerAnglesNoise = EulerAnglesNoise; 
  out_velocityLinearOfBodyWrtECIInBodyNoise = velocityLinearOfBodyWrtECIInBodyNoise;
  out_velocityAngularOfBodyWrtECIInBodyNoise = velocityAngularOfBodyWrtECIInBodyNoise;
  

  connect(signalBus.EulerAngles, EulerAngles.u) annotation (Line(points = {{1.135, -96.905}, {1.135, -52}, {-152, -52}, {-152, 134}, {-86, 134}}, color = {255, 204, 51}, thickness = 0.5));
  connect(signalBus.velocityLinearOfBodyWrtECIInBody,
    velocityLinearOfBodyWrtECIInBody.u) annotation (Line(points = {{1.135, -96.905}, {1.135, -44}, {-142, -44}, {-142, 104}, {-88, 104}}, color = {255, 204, 51}, thickness = 0.5));
  connect(signalBus.velocityAngularOfBodyWrtECIInBody, velocityAngularOfBodyWrtECIInBody.u) annotation(
    Line(points = {{2, -96}, {0, -96}, {0, -36}, {-134, -36}, {-134, 72}, {-90, 72}}, thickness = 0.5));
  connect(signalBus.positionBodyWrtNED0inNED0, positionBodyWrtNED0inNED0.u) annotation(
    Line(points = {{2, -96}, {0, -96}, {0, -24}, {-120, -24}, {-120, 44}, {-90, 44}}, thickness = 0.5));
  connect(signalBus.depth, depth.u) annotation(
    Line(points = {{2, -96}, {0, -96}, {0, -10}, {-106, -10}, {-106, 10}, {-88, 10}}, thickness = 0.5));

annotation(
    Icon(coordinateSystem(extent = {{-150, -150}, {150, 150}})),
    Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end NoisySignals;