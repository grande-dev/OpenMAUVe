within Glider_Lib.UnitTesting.Groundtruth;



model ROGUEGroundthruthResults

  import Modelica.Units.SI;

  parameter Real flowspeedGT = 0.3 "Groundtruth flowspeed"; 
  parameter Real uGT = 0.29 "Groundtruth u"; 
  parameter Real wGT = 0.03 "Groundtruth w"; 
  parameter Real alphaGT = 6.3 "Groundtruth angle of attack"; 
  parameter Real thetaGT = -23.7 "Groundtruth pitch angle"; 
  parameter Real xsiGT = -30.0 "Groundtruth glide path angle"; 
  parameter Real m0GT = 0.36 "Groundtruth net mass"; 

  parameter Real maxAcceptableError = 5 "Percentage value (0% to 100%)";
  parameter Real checkTime = 100 "Seconds from the beginning of the simulation";

  //Boolean testCompleted;
  Real flowspeed;
  Real u_r;
  Real w_r;
  Real alpha;
  Real theta;
  Real xsi;
  Real m_0;

  Real flowspeedRelErr;
  Real uRelErr;
  Real wRelErr;
  Real alphaRelErr;
  Real thetaRelErr;
  Real xsiRelErr;
  Real m_0RelErr;
  
  Modelica.Blocks.Interfaces.BooleanOutput testPassed_alpha annotation(
    Placement(transformation(origin = {-46, 72}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.BooleanOutput testPassed_theta annotation(
    Placement(transformation(origin = {-46, 38}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, 34}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.BooleanOutput testPassed_xsi annotation(
    Placement(transformation(origin = {-46, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, 6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.BooleanOutput testPassed_m_0 annotation(
    Placement(transformation(origin = {-46, -38}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, -20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.BooleanOutput testPassed_u annotation(
    Placement(transformation(origin = {-46, -66}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, -46}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.BooleanOutput testPassed_w annotation(
    Placement(transformation(origin = {-46, -102}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, -74}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.BooleanOutput testPassed annotation(
    Placement(transformation(origin = {82, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {192, -2}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealInput inputUnitTest[7] annotation(
    Placement(transformation(origin = {-194, 0}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, 0}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.BooleanOutput testPassed_flowspeed annotation(
    Placement(transformation(origin = {-48, 104}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, 84}, extent = {{-10, -10}, {10, 10}})));
equation
  assert(maxAcceptableError >= 0.0 and maxAcceptableError <= 100.0, "WARNING OpenMAUVe setup (model ROGUEGroundthruthResults): 'maxAcceptableError' out of limit (0 to 100)!", level = AssertionLevel.error);
 
  flowspeed = inputUnitTest[1];
  u_r = inputUnitTest[2];
  w_r = inputUnitTest[3];
  alpha = Modelica.Units.Conversions.to_deg(inputUnitTest[4]);
  theta = Modelica.Units.Conversions.to_deg(inputUnitTest[5]);
  xsi = Modelica.Units.Conversions.to_deg(inputUnitTest[6]);
  m_0 = inputUnitTest[7];
  
  
  flowspeedRelErr = abs((flowspeed - flowspeedGT)*100/flowspeedGT);
  uRelErr = abs((u_r - uGT)*100/uGT);
  wRelErr = abs((w_r - wGT)*100/wGT);
  alphaRelErr = abs((alpha - alphaGT)*100/alphaGT);
  thetaRelErr = abs((theta - thetaGT)*100/thetaGT);
  xsiRelErr = abs((xsi - xsiGT)*100/xsiGT);
  m_0RelErr = abs((m_0 - m0GT)*100/m0GT); 
  
  testPassed_flowspeed = if flowspeedRelErr < maxAcceptableError then true else false;
  testPassed_u = if uRelErr < maxAcceptableError then true else false;
  testPassed_w = if wRelErr < maxAcceptableError then true else false;    
  testPassed_alpha = if alphaRelErr < maxAcceptableError then true else false;
  testPassed_xsi= if xsiRelErr < maxAcceptableError then true else false;
  testPassed_theta= if thetaRelErr < maxAcceptableError then true else false;
  testPassed_m_0= if m_0RelErr < maxAcceptableError then true else false;
  testPassed = if (testPassed_flowspeed and testPassed_u and testPassed_w and testPassed_alpha and testPassed_xsi and testPassed_theta and testPassed_m_0) then true else false;  // final flag
    

 
  
/*
// perform check at prescribed time
  if (flowspeed > checkTime) then
    testCompleted = true;
// prevent test from repeating
  else 
    testCompleted = false;
  end if;
  */
  
  annotation(
    Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
    Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})));
end ROGUEGroundthruthResults;