within OpenMAUVe.VerificationSimulator.GroundthruthVerification;
model Peterl2GroundthruthVerification "This model allows to perform the unit testing of the SLOCUM-like vehicle. The results can be seen within the variables testPassed_variablename. If the testPassed_variablename equals -1.0, it means that the unit test is not performed in that time instant; if testPassed_variablename equals 0.0 it means that the test is active but not passed, while testPassed_variablename equals 1.0 means that the test is active and passed."
  import Modelica.Units.SI;

  parameter Real flowspeedGT_0 = 0.000001 "Groundtruth flowspeed";
  parameter Real alphaGT_0 = 0.000001 "Groundtruth angle of attack";
  parameter Real betaGT_0 = 0.000001 "Groundtruth sideslip angle";
  parameter Real thetaGT_0 = 0.000001 "Groundtruth pitch angle";
  parameter Real m0GT_0 = 0.000001 "Groundtruth net mass";
  parameter Real ome3GT_0 = 0.000001 "Groundtruth yaw rate";
  parameter Real phiGT_0 = 0.000001 "Groundtruth roll angle";
  parameter Real msGT_0 = sqrt(0.09^2+0.016^2) "Groundtruth position of the movable mass";

  parameter Real flowspeedGT_1 = 0.49 "Groundtruth flowspeed";
  parameter Real alphaGT_1 = 1.267 "Groundtruth angle of attack";
  parameter Real betaGT_1 = 0.000001 "Groundtruth sideslip angle";
  parameter Real thetaGT_1 = -35.641 "Groundtruth pitch angle";
  parameter Real m0GT_1 = 0.3 "Groundtruth net mass";
  parameter Real ome3GT_1 = 0.000001 "Groundtruth yaw rate";
  parameter Real phiGT_1 = 0.000001 "Groundtruth roll angle";
  parameter Real msGT_1 = sqrt((0.09-0.018)^2+0.016^2) "Groundtruth position of the movable mass";

  parameter Real flowspeedGT_2 = 0.49 "Groundtruth flowspeed";
  parameter Real alphaGT_2 = 1.267 "Groundtruth angle of attack";
  parameter Real betaGT_2 = - 1.283 "Groundtruth sideslip angle";
  parameter Real thetaGT_2 = -35.641 "Groundtruth pitch angle";
  parameter Real m0GT_2 = 0.3 "Groundtruth net mass";
  parameter Real ome3GT_2 = 0.0039 "Groundtruth yaw rate";
  parameter Real phiGT_2 = -13.703 "Groundtruth roll angle";
  parameter Real msGT_2 = sqrt((0.09-0.018)^2+0.016^2) "Groundtruth position of the movable mass";

  parameter Real maxAcceptableError = 10 "Percentage value (0% to 100%)";
  parameter Real checkTimeInit = 0 "Seconds from the beginning of the simulation";
  parameter Real checkTimeFinal = 2000.0 "Seconds from the beginning of the simulation";
  parameter Real initSegment1 = 0.0 "Init reference segment no. 1";
  parameter Real initSegment2 = 500.0 "Init reference segment no. 2";
  //Boolean testCompleted
  Real flowspeed;
  Real alpha;
  Real theta;
  Real m0;
  Real ms;
  Real phi;
  Real ome3;
  Real beta;

  Real flowspeedGT(start = -1.0) "Groundtruth flowspeed";
  Real alphaGT(start = -1.0) "Groundtruth angle of attack";
  Real thetaGT(start = -1.0) "Groundtruth pitch angle";
  Real m0GT(start = -1.0) "Groundtruth net mass";
  Real msGT(start = -1.0) "Groundtruth movable mass position";
  Real phiGT(start = -1.0) "Groundtruth roll";
  Real ome3GT(start = -1.0) "Groundtruth omega 3";
  Real betaGT(start = -1.0) "Groundtruth sideslip angle";

  Real flowspeedRelErr(start = -1.0);
  Real alphaRelErr(start = -1.0);
  Real thetaRelErr(start = -1.0);
  Real m0RelErr(start = -1.0);
  Real msRelErr(start = -1.0);
  Real phiRelErr(start = -1.0);
  Real ome3RelErr(start = -1.0);
  Real betaRelErr(start = -1.0);

  Real flowspeedMaxRelErr(start = 0.0);
  Real alphaMaxRelErr(start = 0.0);
  Real thetaMaxRelErr(start = 0.0);
  Real m0MaxRelErr(start = 0.0);
  Real msMaxRelErr(start = 0.0);
  Real phiMaxRelErr(start = 0.0);
  Real ome3MaxRelErr(start = 0.0);
  Real betaMaxRelErr(start = 0.0);

  Real maxRelErr(start = 0.0) "Overall maximum relative error";
  Modelica.Blocks.Interfaces.RealOutput testPassed_alpha(start = -1.0) annotation(
    Placement(transformation(origin = {-50, 100}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, 80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_theta(start = -1.0) annotation(
    Placement(transformation(origin = {-50, 66}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, 54}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_m0(start = -1.0) annotation(
    Placement(transformation(origin = {-50, 28}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, 24}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed(start = -1.0) annotation(
    Placement(transformation(origin = {82, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {192, -2}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_flowspeed(start = -1.0) annotation(
    Placement(transformation(origin = {-52, 132}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, 104}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealInput inputUnitTest[11] annotation(
    Placement(transformation(origin = {-194, 0}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, 0}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_ms(start = -1.0) annotation(
    Placement(transformation(origin = {-50, -62}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, -54}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_phi(start = -1.0) annotation(
    Placement(transformation(origin = {-50, -88}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, -80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_ome3(start = -1.0) annotation(
    Placement(transformation(origin = {-50, -114}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, -106}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_beta(start = -1.0) annotation(
    Placement(transformation(origin = {-50, -144}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, -134}, extent = {{-10, -10}, {10, 10}})));
equation
  assert(maxAcceptableError >= 0.0 and maxAcceptableError <= 100.0, "WARNING OpenMAUVe setup (model ROGUEGroundthruthResults): 'maxAcceptableError' out of limit (0 to 100)!", level = AssertionLevel.error);
  flowspeed = inputUnitTest[1];
  alpha = inputUnitTest[4]*180/Modelica.Constants.pi;
// not using standard Modelica conversion function to fix issue with the units
  theta = inputUnitTest[5]*180/Modelica.Constants.pi;
  m0 = inputUnitTest[7];
  ms = inputUnitTest[8];
  phi = inputUnitTest[9]*180/Modelica.Constants.pi;
  ome3 = inputUnitTest[10];
  beta = inputUnitTest[11]*180/Modelica.Constants.pi;

  if (time > checkTimeInit and time < checkTimeFinal) then
// retieving groundthruth values
    if (time > initSegment1) and (time < initSegment2) then
      flowspeedGT = flowspeedGT_1;
      alphaGT = alphaGT_1;
      thetaGT = thetaGT_1;
      m0GT = m0GT_1;
      msGT = msGT_1;
      phiGT = phiGT_1;
      ome3GT = ome3GT_1;
      betaGT = betaGT_1;

    elseif (time > initSegment2) then
      flowspeedGT = flowspeedGT_2;
      alphaGT = alphaGT_2;
      thetaGT = thetaGT_2;
      m0GT = m0GT_2;
      msGT = msGT_2;
      phiGT = phiGT_2;
      ome3GT = ome3GT_2;
      betaGT = betaGT_2;

    else
      flowspeedGT = flowspeedGT_0;
      alphaGT = alphaGT_0;
      thetaGT = thetaGT_0;
      m0GT = m0GT_0;
      msGT = msGT_0;
      phiGT = phiGT_0;
      ome3GT = ome3GT_0;
      betaGT = betaGT_2;

    end if;
// Calculating relative errors with respect to groutruth
    flowspeedRelErr = abs((flowspeed - flowspeedGT)*100/flowspeedGT);
    alphaRelErr = abs((alpha - alphaGT)*100/alphaGT);
    thetaRelErr = abs((theta - thetaGT)*100/thetaGT);
    m0RelErr = abs((m0 - m0GT)*100/m0GT);
    msRelErr = abs((ms - msGT)*100/msGT);
    phiRelErr = abs((phi - phiGT)*100/phiGT);
    ome3RelErr = abs((ome3 - ome3GT)*100/ome3GT);
    betaRelErr = abs((beta - betaGT)*100/betaGT);

    maxRelErr = max({flowspeedRelErr, alphaRelErr, thetaRelErr, m0RelErr, msRelErr, phiRelErr, ome3RelErr, betaRelErr});
// Confirming
    testPassed_flowspeed = if flowspeedRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_alpha = if alphaRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_theta = if thetaRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_m0 = if m0RelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_ms = if msRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_phi = if phiRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_ome3 = if ome3RelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_beta = if betaRelErr < maxAcceptableError then 1.0 else 0.0;

    testPassed = if (testPassed_flowspeed > 0.9 and testPassed_alpha > 0.9 and testPassed_theta > 0.9 and testPassed_m0 > 0.9 and testPassed_ms > 0.9 and testPassed_phi > 0.9 and testPassed_ome3 > 0.9 and testPassed_beta > 0.9) then 1.0 else 0.0;
// final flag: >=1 in place of ==1 is used to prevent a Modelica syntax warning

  else
// do not perform the test unit computation as it is out of the correct time window
    flowspeedGT = -1.0;
    alphaGT = -1.0;
    thetaGT = -1.0;
    m0GT = -1.0;
    msGT = -1.0;
    phiGT = -1.0;
    ome3GT = -1.0;
    betaGT = -1.0;

    flowspeedRelErr = -1.0;
    alphaRelErr = -1.0;
    thetaRelErr = -1.0;
    m0RelErr = -1.0;
    msRelErr = -1.0;
    phiRelErr = -1.0;
    ome3RelErr = -1.0;
    betaRelErr = -1.0;

    maxRelErr = -1.0;
    testPassed_flowspeed = -1.0;
    testPassed_alpha = -1.0;
    testPassed_theta = -1.0;
    testPassed_m0 = -1.0;
    testPassed_ms = -1.0;
    testPassed_phi = -1.0;
    testPassed_ome3 = -1.0;
    testPassed_beta = -1.0;

    testPassed = -1.0;

  end if;
algorithm
// Updating max relative errors
  if flowspeedRelErr > flowspeedMaxRelErr then
    flowspeedMaxRelErr := flowspeedRelErr;
  end if;
  if alphaRelErr > alphaMaxRelErr then
    alphaMaxRelErr := alphaRelErr;
  end if;
  if thetaRelErr > thetaMaxRelErr then
    thetaMaxRelErr := thetaRelErr;
  end if;
  if m0RelErr > m0MaxRelErr then
    m0MaxRelErr := m0RelErr;
  end if;
  if msRelErr > msMaxRelErr then
    msMaxRelErr := msRelErr;
  end if;
  if phiRelErr > phiMaxRelErr then
    phiMaxRelErr := phiRelErr;
  end if;
  if ome3RelErr > ome3MaxRelErr then
    ome3MaxRelErr := ome3RelErr;
  end if;
  if betaRelErr > betaMaxRelErr then
    betaMaxRelErr := betaRelErr;
  end if;

  annotation(
    Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
    Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})));
end Peterl2GroundthruthVerification;