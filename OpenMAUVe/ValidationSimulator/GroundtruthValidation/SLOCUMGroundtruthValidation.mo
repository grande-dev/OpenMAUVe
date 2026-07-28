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
  Real EAAbsErr[3];
  SI.Velocity speedAbsErr;
  SI.Velocity depthRateAbsErr;
  SI.Velocity flowspeedAbsErr;
  Real posMaxAbsErr;
  Real EAMaxAbsErr;

  Modelica.Blocks.Interfaces.RealOutput testPassed(start = -1.0);

equation
  for i in 1:3 loop
    posAbsErr[i] = abs(sim_pos[i] - gt_pos[i]);
    EAAbsErr[i] = abs(Modelica.Units.Conversions.to_deg(Modelica.Math.atan2(
      Modelica.Math.sin(Modelica.Units.Conversions.from_deg(sim_EA[i] - gt_EA[i])),
      Modelica.Math.cos(Modelica.Units.Conversions.from_deg(sim_EA[i] - gt_EA[i])))));
  end for;

  speedAbsErr = abs(sim_speed - gt_speed);
  depthRateAbsErr = abs(sim_depth_rate - gt_depth_rate);
  flowspeedAbsErr = abs(sim_flowspeed - gt_flowspeed_reconstructed);
  posMaxAbsErr = max({posAbsErr[1], posAbsErr[2], posAbsErr[3]});
  EAMaxAbsErr = max({EAAbsErr[1], EAAbsErr[2], EAAbsErr[3]});

  testPassed = if time >= checkTimeInit and time <= checkTimeFinal then
      if posMaxAbsErr <= maxPosAbsErr and posAbsErr[3] <= maxDepthAbsErr and
         EAMaxAbsErr <= maxEAAbsErr and speedAbsErr <= maxSpeedAbsErr then 1.0 else 0.0
    else -1.0;
end SLOCUMGroundtruthValidation;
