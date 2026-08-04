within OpenMAUVe.ValidationSimulator.GroundtruthValidation;
model SLOCUMGroundtruthValidation
  "Compare SLOCUM simulator states against replayed field data."

  import Modelica.Units.SI;

  parameter Real checkTimeInit = 0.0 "Start time of comparison window [s]";
  parameter Real checkTimeFinal = 1e9 "End time of comparison window [s]";
  parameter Real maxPosAbsErr = 250.0 "Max absolute position error per axis [m]";
  parameter Real maxDepthAbsErr = 20.0 "Max absolute depth error [m]";
  parameter Real maxEAAbsErr = 25.0 "Max absolute Euler Angle error per axis [deg]";
  parameter Real maxSpeedAbsErr = 0.5 "Max absolute speed error [m/s]";

  Modelica.Blocks.Interfaces.RealInput sim_pos[3];
  Modelica.Blocks.Interfaces.RealInput sim_EA[3] "Simulated Euler angles [roll,pitch,yaw] in deg";
  Modelica.Blocks.Interfaces.RealInput sim_speed(unit = "m/s")
    "Simulated horizontal through-water speed [m/s]";
  Modelica.Blocks.Interfaces.RealInput sim_depth_rate(unit = "m/s")
    "Simulated positive-down NED velocity [m/s]";
  Modelica.Blocks.Interfaces.RealInput sim_flowspeed(unit = "m/s")
    "Simulated total 3-D through-water speed [m/s]";
  Modelica.Blocks.Interfaces.RealInput gt_pos[3];
  Modelica.Blocks.Interfaces.RealInput gt_EA[3] "Groundtruth Euler angles [roll,pitch,yaw] in deg";
  Modelica.Blocks.Interfaces.RealInput gt_speed(unit = "m/s")
    "Teledyne m_speed: onboard horizontal through-water speed estimate [m/s]";
  Modelica.Blocks.Interfaces.RealInput gt_depth_rate(unit = "m/s")
    "Positive-down rate reconstructed from measured depth [m/s]";
  Modelica.Blocks.Interfaces.RealInput gt_flowspeed_reconstructed(unit = "m/s")
    "Total 3-D through-water speed reconstructed from m_speed and depth rate [m/s]";

  Real posAbsErr[3];
  Real posError[3];
  Real EAAbsErr[3];
  Real EAError[3] "Wrapped Euler-angle errors [deg]";
  SI.Velocity speedAbsErr;
  SI.Velocity depthRateAbsErr;
  SI.Velocity flowspeedAbsErr;
  Real posMaxAbsErr;
  Real EAMaxAbsErr;
  SI.Time comparisonDuration;

  Real posSquaredErrorIntegral[3](each start = 0.0, each fixed = true);
  Real EASquaredErrorIntegral[3](each start = 0.0, each fixed = true);
  Real speedSquaredErrorIntegral(start = 0.0, fixed = true);
  Real depthRateSquaredErrorIntegral(start = 0.0, fixed = true);
  Real flowspeedSquaredErrorIntegral(start = 0.0, fixed = true);

  Real RMSE_posX(unit = "m") "Running RMSE of north position";
  Real RMSE_posY(unit = "m") "Running RMSE of east position";
  Real RMSE_posZ(unit = "m") "Running RMSE of depth";
  Real RMSE_EA[3](each unit = "deg")
    "Running wrapped RMSE of {roll,pitch,yaw}";
  Real RMSE_speed_u(unit = "m/s")
    "Running RMSE of horizontal through-water speed";
  Real RMSE_depth_rate(unit = "m/s") "Running depth-rate RMSE";
  Real RMSE_flowspeed(unit = "m/s") "Running reconstructed total-flow-speed RMSE";

  Modelica.Blocks.Interfaces.RealOutput testPassed(start = -1.0);

equation
  for i in 1:3 loop
    posError[i] = sim_pos[i] - gt_pos[i];
    posAbsErr[i] = abs(posError[i]);
    EAError[i] = Modelica.Units.Conversions.to_deg(Modelica.Math.atan2(
      Modelica.Math.sin(Modelica.Units.Conversions.from_deg(sim_EA[i] - gt_EA[i])),
      Modelica.Math.cos(Modelica.Units.Conversions.from_deg(sim_EA[i] - gt_EA[i]))));
    EAAbsErr[i] = abs(EAError[i]);
    der(posSquaredErrorIntegral[i]) =
      if time >= checkTimeInit and time <= checkTimeFinal then posError[i]^2 else 0.0;
    der(EASquaredErrorIntegral[i]) =
      if time >= checkTimeInit and time <= checkTimeFinal then EAError[i]^2 else 0.0;
  end for;

  speedAbsErr = abs(sim_speed - gt_speed);
  depthRateAbsErr = abs(sim_depth_rate - gt_depth_rate);
  flowspeedAbsErr = abs(sim_flowspeed - gt_flowspeed_reconstructed);
  posMaxAbsErr = max({posAbsErr[1], posAbsErr[2], posAbsErr[3]});
  EAMaxAbsErr = max({EAAbsErr[1], EAAbsErr[2], EAAbsErr[3]});
  comparisonDuration = max(0.0, min(time, checkTimeFinal) - checkTimeInit);
  der(speedSquaredErrorIntegral) =
    if time >= checkTimeInit and time <= checkTimeFinal then
      (sim_speed - gt_speed)^2 else 0.0;
  der(depthRateSquaredErrorIntegral) =
    if time >= checkTimeInit and time <= checkTimeFinal then
      (sim_depth_rate - gt_depth_rate)^2 else 0.0;
  der(flowspeedSquaredErrorIntegral) =
    if time >= checkTimeInit and time <= checkTimeFinal then
      (sim_flowspeed - gt_flowspeed_reconstructed)^2 else 0.0;

  RMSE_posX = if comparisonDuration > Modelica.Constants.eps then
    sqrt(max(0.0, posSquaredErrorIntegral[1]/comparisonDuration)) else 0.0;
  RMSE_posY = if comparisonDuration > Modelica.Constants.eps then
    sqrt(max(0.0, posSquaredErrorIntegral[2]/comparisonDuration)) else 0.0;
  RMSE_posZ = if comparisonDuration > Modelica.Constants.eps then
    sqrt(max(0.0, posSquaredErrorIntegral[3]/comparisonDuration)) else 0.0;
  for i in 1:3 loop
    RMSE_EA[i] = if comparisonDuration > Modelica.Constants.eps then
      sqrt(max(0.0, EASquaredErrorIntegral[i]/comparisonDuration)) else 0.0;
  end for;
  RMSE_speed_u = if comparisonDuration > Modelica.Constants.eps then
    sqrt(max(0.0, speedSquaredErrorIntegral/comparisonDuration)) else 0.0;
  RMSE_depth_rate = if comparisonDuration > Modelica.Constants.eps then
    sqrt(max(0.0, depthRateSquaredErrorIntegral/comparisonDuration)) else 0.0;
  RMSE_flowspeed = if comparisonDuration > Modelica.Constants.eps then
    sqrt(max(0.0, flowspeedSquaredErrorIntegral/comparisonDuration)) else 0.0;

  testPassed = if time >= checkTimeInit and time <= checkTimeFinal then
      if posMaxAbsErr <= maxPosAbsErr and posAbsErr[3] <= maxDepthAbsErr and
         EAMaxAbsErr <= maxEAAbsErr and speedAbsErr <= maxSpeedAbsErr then 1.0 else 0.0
    else -1.0;
end SLOCUMGroundtruthValidation;
