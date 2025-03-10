within Glider_Lib.UnitTesting.Groundtruth;


model SLOCUMLikeGroundthruthResults "This model allows to perform the unit testing of the gliderROGUE. The results can be seen within the variables testPassed_variablename. If the testPassed_variablename equals -1.0, it means that the unit test is not performed in that time instant; if testPassed_variablename equals 0.0 it means that the test is active but not passed, while testPassed_variablename equals 1.0 means that the test is active and passed."
  import Modelica.Units.SI;
  parameter Real flowspeedGT = 0.3 "Groundtruth flowspeed";
  parameter Real uGT = 0.3 "Groundtruth u";
  parameter Real wGT = 0.02 "Groundtruth w";
  parameter Real alphaGT = 2.0 "Groundtruth angle of attack";
  parameter Real thetaGT = -23.0 "Groundtruth pitch angle";
  parameter Real xsiGT = -25.0 "Groundtruth glide path angle";
  parameter Real m0GT = 0.047 "Groundtruth net mass";
  parameter Real maxAcceptableError = 10 "Percentage value (0% to 100%)";
  parameter Real checkTimeInit = 0 "Seconds from the beginning of the simulation";
  parameter Real checkTimeFinal = 0 "Seconds from the beginning of the simulation";
  //Boolean testCompleted
  Real flowspeed;
  Real u_r;
  Real w_r;
  Real alpha;
  Real theta;
  Real xsi;
  Real m_0;
  Real flowspeedRelErr(start = -1.0);
  Real uRelErr(start = -1.0);
  Real wRelErr(start = -1.0);
  Real alphaRelErr(start = -1.0);
  Real thetaRelErr(start = -1.0);
  Real xsiRelErr(start = -1.0);
  Real m_0RelErr(start = -1.0);
  Real flowspeedMaxRelErr(start = 0.0);
  Real uMaxRelErr(start = 0.0);
  Real wMaxRelErr(start = 0.0);
  Real alphaMaxRelErr(start = 0.0);
  Real thetaMaxRelErr(start = 0.0);
  Real xsiMaxRelErr(start = 0.0);
  Real m_0MaxRelErr(start = 0.0);
  Modelica.Blocks.Interfaces.RealOutput testPassed_alpha(start = -1.0) annotation(
    Placement(transformation(origin = {-46, 72}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_theta(start = -1.0) annotation(
    Placement(transformation(origin = {-46, 38}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, 34}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_xsi(start = -1.0) annotation(
    Placement(transformation(origin = {-46, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, 6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_m_0(start = -1.0) annotation(
    Placement(transformation(origin = {-46, -38}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, -20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_u(start = -1.0) annotation(
    Placement(transformation(origin = {-46, -66}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, -46}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_w(start = -1.0) annotation(
    Placement(transformation(origin = {-46, -102}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, -74}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed(start = -1.0) annotation(
    Placement(transformation(origin = {82, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {192, -2}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed_flowspeed(start = -1.0) annotation(
    Placement(transformation(origin = {-48, 104}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, 84}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealInput inputUnitTest[7] annotation(
    Placement(transformation(origin = {-194, 0}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, 0}, extent = {{-20, -20}, {20, 20}})));
equation
  assert(maxAcceptableError >= 0.0 and maxAcceptableError <= 100.0, "WARNING OpenMAUVe setup (model ROGUEGroundthruthResults): 'maxAcceptableError' out of limit (0 to 100)!", level = AssertionLevel.error);
  flowspeed = inputUnitTest[1];
  u_r = inputUnitTest[2];
  w_r = inputUnitTest[3];
  alpha = inputUnitTest[4]*180/Modelica.Constants.pi;
// not using standard Modelica conversion function to fix issue with the units
  theta = inputUnitTest[5]*180/Modelica.Constants.pi;
  xsi = inputUnitTest[6]*180/Modelica.Constants.pi;
  m_0 = inputUnitTest[7];
  if (time > checkTimeInit and time < checkTimeFinal) then
// Calculating relative errors with respect to groutruth
    flowspeedRelErr = abs((flowspeed - flowspeedGT)*100/flowspeedGT);
    uRelErr = abs((u_r - uGT)*100/uGT);
    wRelErr = abs((w_r - wGT)*100/wGT);
    alphaRelErr = abs((alpha - alphaGT)*100/alphaGT);
    thetaRelErr = abs((theta - thetaGT)*100/thetaGT);
    xsiRelErr = abs((xsi - xsiGT)*100/xsiGT);
    m_0RelErr = abs((m_0 - m0GT)*100/m0GT);
// Confirming
    testPassed_flowspeed = if flowspeedRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_u = if uRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_w = if wRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_alpha = if alphaRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_xsi = if xsiRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_theta = if thetaRelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed_m_0 = if m_0RelErr < maxAcceptableError then 1.0 else 0.0;
    testPassed = if (testPassed_flowspeed > 0.9 and testPassed_u > 0.9 and testPassed_w > 0.9 and testPassed_alpha > 0.9 and testPassed_xsi > 0.9 and testPassed_theta > 0.9 and testPassed_m_0 > 0.9) then 1.0 else 0.0;
// final flag: >=1 in place of ==1 is used to prevent a Modelica syntax warning
  else
// do not perform the test unit computation as it is out of the correct time window
    flowspeedRelErr = -1.0;
    uRelErr = -1.0;
    wRelErr = -1.0;
    alphaRelErr = -1.0;
    thetaRelErr = -1.0;
    xsiRelErr = -1.0;
    m_0RelErr = -1.0;
    testPassed_flowspeed = -1.0;
    testPassed_u = -1.0;
    testPassed_w = -1.0;
    testPassed_alpha = -1.0;
    testPassed_xsi = -1.0;
    testPassed_theta = -1.0;
    testPassed_m_0 = -1.0;
    testPassed = -1.0;
  end if;
algorithm
// Updating max relative errors
  if flowspeedRelErr > flowspeedMaxRelErr then
    flowspeedMaxRelErr := flowspeedRelErr;
  end if;
  if uRelErr > uMaxRelErr then
    uMaxRelErr := uRelErr;
  end if;
  if wRelErr > wMaxRelErr then
    wMaxRelErr := wRelErr;
  end if;
  if alphaRelErr > alphaMaxRelErr then
    alphaMaxRelErr := alphaRelErr;
  end if;
  if thetaRelErr > thetaMaxRelErr then
    thetaMaxRelErr := thetaRelErr;
  end if;
  if xsiRelErr > xsiMaxRelErr then
    xsiMaxRelErr := xsiRelErr;
  end if;
  if m_0RelErr > m_0MaxRelErr then
    m_0MaxRelErr := m_0RelErr;
  end if;
  annotation(
    Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
    Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})));
end SLOCUMLikeGroundthruthResults;