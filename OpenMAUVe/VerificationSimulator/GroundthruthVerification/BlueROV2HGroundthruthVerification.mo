within OpenMAUVe.VerificationSimulator.GroundthruthVerification;
model BlueROV2HGroundthruthVerification "Compare BlueROV2H simulator states against groundtruth dataset."
  parameter Real checkTimeInit = 0.0 "Start time of comparison window [s]";
  parameter Real checkTimeFinal = 1e9 "End time of comparison window [s]";
  parameter Real maxPosAbsErr = 0.30 "Max absolute position error per axis [m]";
  parameter Real maxVelAbsErr = 0.20 "Max absolute linear velocity error per axis [m/s]";
  parameter Real maxAngVelAbsErr = 0.20 "Max absolute angular velocity error per axis [rad/s]";

  Modelica.Blocks.Interfaces.RealInput sim_pos[3] annotation(
    Placement(transformation(origin = {-186, 130}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-186, 130}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput sim_vel_body[3] annotation(
    Placement(transformation(origin = {-186, 70}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-186, 70}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput sim_ang_vel_body[3] annotation(
    Placement(transformation(origin = {-186, 10}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-186, 10}, extent = {{-20, -20}, {20, 20}})));

  Modelica.Blocks.Interfaces.RealInput gt_pos[3] annotation(
    Placement(transformation(origin = {-186, -50}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-186, -50}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput gt_vel_body[3] annotation(
    Placement(transformation(origin = {-186, -110}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-186, -110}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput gt_ang_vel_body[3] annotation(
    Placement(transformation(origin = {-186, -170}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-186, -170}, extent = {{-20, -20}, {20, 20}})));

  Real posAbsErr[3];
  Real velAbsErr[3];
  Real angVelAbsErr[3];
  Real posMaxAbsErr;
  Real velMaxAbsErr;
  Real angVelMaxAbsErr;

  Modelica.Blocks.Interfaces.RealOutput testPassed(start = -1.0) annotation(
    Placement(transformation(origin = {184, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {184, 0}, extent = {{-10, -10}, {10, 10}})));
equation
  for i in 1:3 loop
    posAbsErr[i] = abs(sim_pos[i] - gt_pos[i]);
    velAbsErr[i] = abs(sim_vel_body[i] - gt_vel_body[i]);
    angVelAbsErr[i] = abs(sim_ang_vel_body[i] - gt_ang_vel_body[i]);
  end for;

  posMaxAbsErr = max({posAbsErr[1], posAbsErr[2], posAbsErr[3]});
  velMaxAbsErr = max({velAbsErr[1], velAbsErr[2], velAbsErr[3]});
  angVelMaxAbsErr = max({angVelAbsErr[1], angVelAbsErr[2], angVelAbsErr[3]});

  testPassed = if time >= checkTimeInit and time <= checkTimeFinal then
      if (posMaxAbsErr <= maxPosAbsErr and velMaxAbsErr <= maxVelAbsErr and angVelMaxAbsErr <= maxAngVelAbsErr) then 1.0 else 0.0
    else -1.0;
end BlueROV2HGroundthruthVerification;
