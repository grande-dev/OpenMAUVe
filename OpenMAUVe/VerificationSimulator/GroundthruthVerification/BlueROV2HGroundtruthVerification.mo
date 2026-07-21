within OpenMAUVe.VerificationSimulator.GroundthruthVerification;
model BlueROV2HGroundtruthVerification
  "Compare BlueROV2H simulator states against groundtruth values from the dataset."

  parameter Real maxAcceptableError = 20.0 "Percentage value (0% to 100%)";
  parameter Real checkTimeInit = 0.0 "Seconds from the beginning of the simulation";
  parameter Real checkTimeFinal = 1e9 "Seconds from the beginning of the simulation";
  parameter Real minGroundtruthMagnitude = 1e-6 "Lower bound for relative-error normalization";

  Modelica.Blocks.Interfaces.RealInput sim_pos[3] annotation(
    Placement(transformation(origin = {-194, 112}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, 130}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput sim_EA[3] annotation(
    Placement(transformation(origin = {-194, 70}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, 84}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput sim_vel_body[3] annotation(
    Placement(transformation(origin = {-194, 28}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, 38}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput sim_ang_vel_body[3] annotation(
    Placement(transformation(origin = {-194, -14}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, -8}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput gt_pos[3] annotation(
    Placement(transformation(origin = {-194, -58}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, -58}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput gt_EA[3] annotation(
    Placement(transformation(origin = {-194, -100}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, -104}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput gt_vel_body[3] annotation(
    Placement(transformation(origin = {-194, -142}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, -150}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput gt_ang_vel_body[3] annotation(
    Placement(transformation(origin = {-194, -184}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, -196}, extent = {{-20, -20}, {20, 20}})));

  Real posAbsErr[3];
  Real EAAbsErr[3];
  Real velAbsErr[3];
  Real angVelAbsErr[3];
  Real posRelErr[3](each start = -1.0);
  Real EARelErr[3](each start = -1.0);
  Real velRelErr[3](each start = -1.0);
  Real angVelRelErr[3](each start = -1.0);

  Real posMaxRelErr(start = 0.0);
  Real EAMaxRelErr(start = 0.0);
  Real velMaxRelErr(start = 0.0);
  Real angVelMaxRelErr(start = 0.0);
  Real maxRelErr(start = 0.0) "Overall maximum relative error";

  Modelica.Blocks.Interfaces.RealOutput testPassed_pos(start = -1.0) annotation(
    Placement(transformation(origin = {96, 72}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {194, 84}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_EA(start = -1.0) annotation(
    Placement(transformation(origin = {96, 34}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {194, 44}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_vel_body(start = -1.0) annotation(
    Placement(transformation(origin = {96, -4}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {194, 4}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_ang_vel_body(start = -1.0) annotation(
    Placement(transformation(origin = {96, -42}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {194, -36}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed(start = -1.0) annotation(
    Placement(transformation(origin = {156, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {194, -84}, extent = {{-10, -10}, {10, 10}})));

equation
  assert(maxAcceptableError >= 0.0 and maxAcceptableError <= 100.0,
    "WARNING OpenMAUVe setup (model BlueROV2HGroundtruthVerification): 'maxAcceptableError' out of limit (0 to 100)!",
    level = AssertionLevel.error);

  if time > checkTimeInit and time < checkTimeFinal then
    for i in 1:3 loop
      posAbsErr[i] = abs(sim_pos[i] - gt_pos[i]);
      EAAbsErr[i] = abs(Modelica.Units.Conversions.to_deg(Modelica.Math.atan2(
        Modelica.Math.sin(Modelica.Units.Conversions.from_deg(sim_EA[i] - gt_EA[i])),
        Modelica.Math.cos(Modelica.Units.Conversions.from_deg(sim_EA[i] - gt_EA[i])))));
      velAbsErr[i] = abs(sim_vel_body[i] - gt_vel_body[i]);
      angVelAbsErr[i] = abs(sim_ang_vel_body[i] - gt_ang_vel_body[i]);

      posRelErr[i] = posAbsErr[i]*100/max(abs(gt_pos[i]), minGroundtruthMagnitude);
      EARelErr[i] = EAAbsErr[i]*100/max(abs(gt_EA[i]), minGroundtruthMagnitude);
      velRelErr[i] = velAbsErr[i]*100/max(abs(gt_vel_body[i]), minGroundtruthMagnitude);
      angVelRelErr[i] = angVelAbsErr[i]*100/max(abs(gt_ang_vel_body[i]), minGroundtruthMagnitude);
    end for;

    posMaxRelErr = max({posRelErr[1], posRelErr[2], posRelErr[3]});
    EAMaxRelErr = max({EARelErr[1], EARelErr[2], EARelErr[3]});
    velMaxRelErr = max({velRelErr[1], velRelErr[2], velRelErr[3]});
    angVelMaxRelErr = max({angVelRelErr[1], angVelRelErr[2], angVelRelErr[3]});
    maxRelErr = max({posMaxRelErr, EAMaxRelErr, velMaxRelErr, angVelMaxRelErr});

    testPassed_pos = if noEvent(posMaxRelErr < maxAcceptableError) then 1.0 else 0.0;
    testPassed_EA = if noEvent(EAMaxRelErr < maxAcceptableError) then 1.0 else 0.0;
    testPassed_vel_body = if noEvent(velMaxRelErr < maxAcceptableError) then 1.0 else 0.0;
    testPassed_ang_vel_body = if noEvent(angVelMaxRelErr < maxAcceptableError) then 1.0 else 0.0;
    testPassed = if noEvent(testPassed_pos > 0.9 and testPassed_EA > 0.9 and
      testPassed_vel_body > 0.9 and testPassed_ang_vel_body > 0.9) then 1.0 else 0.0;
  else
    for i in 1:3 loop
      posAbsErr[i] = -1.0;
      EAAbsErr[i] = -1.0;
      velAbsErr[i] = -1.0;
      angVelAbsErr[i] = -1.0;
      posRelErr[i] = -1.0;
      EARelErr[i] = -1.0;
      velRelErr[i] = -1.0;
      angVelRelErr[i] = -1.0;
    end for;

    posMaxRelErr = -1.0;
    EAMaxRelErr = -1.0;
    velMaxRelErr = -1.0;
    angVelMaxRelErr = -1.0;
    maxRelErr = -1.0;

    testPassed_pos = -1.0;
    testPassed_EA = -1.0;
    testPassed_vel_body = -1.0;
    testPassed_ang_vel_body = -1.0;
    testPassed = -1.0;
  end if;

  annotation(
    Diagram(coordinateSystem(extent = {{-220, -220}, {180, 120}})),
    Icon(coordinateSystem(extent = {{-220, -220}, {220, 120}}), graphics = {
      Rectangle(extent = {{-180, 90}, {180, -90}}, lineColor = {0, 0, 127}),
      Text(extent = {{-150, 28}, {150, -28}}, textString = "BlueROV2H GT")}));
end BlueROV2HGroundtruthVerification;
