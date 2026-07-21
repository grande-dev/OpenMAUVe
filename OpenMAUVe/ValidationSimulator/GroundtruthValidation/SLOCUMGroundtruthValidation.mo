within OpenMAUVe.ValidationSimulator.GroundtruthValidation;
model SLOCUMGroundtruthValidation
  "Compare SLOCUM simulator states against replayed field data."

  parameter Real checkTimeInit = 0.0 "Start time of comparison window [s]";
  parameter Real checkTimeFinal = 1e9 "End time of comparison window [s]";
  parameter Real maxPosAbsErr = 250.0 "Max absolute position error per axis [m]";
  parameter Real maxDepthAbsErr = 20.0 "Max absolute depth error [m]";
  parameter Real maxEAAbsErr = 25.0 "Max absolute Euler Angle error per axis [deg]";
  parameter Real maxSpeedAbsErr = 0.5 "Max absolute speed error [m/s]";

  Modelica.Blocks.Interfaces.RealInput sim_pos[3];
  Modelica.Blocks.Interfaces.RealInput sim_EA[3] "Simulated Euler angles [roll,pitch,yaw] in deg";
  Modelica.Blocks.Interfaces.RealInput sim_speed "Simulated speed [m/s]";
  Modelica.Blocks.Interfaces.RealInput gt_pos[3];
  Modelica.Blocks.Interfaces.RealInput gt_EA[3] "Groundtruth Euler angles [roll,pitch,yaw] in deg";
  Modelica.Blocks.Interfaces.RealInput gt_speed "Groundtruth speed [m/s]";

  Real posAbsErr[3];
  Real EAAbsErr[3];
  Real speedAbsErr;
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
  posMaxAbsErr = max({posAbsErr[1], posAbsErr[2], posAbsErr[3]});
  EAMaxAbsErr = max({EAAbsErr[1], EAAbsErr[2], EAAbsErr[3]});

  testPassed = if time >= checkTimeInit and time <= checkTimeFinal then
      if posMaxAbsErr <= maxPosAbsErr and posAbsErr[3] <= maxDepthAbsErr and
         EAMaxAbsErr <= maxEAAbsErr and speedAbsErr <= maxSpeedAbsErr then 1.0 else 0.0
    else -1.0;
end SLOCUMGroundtruthValidation;
