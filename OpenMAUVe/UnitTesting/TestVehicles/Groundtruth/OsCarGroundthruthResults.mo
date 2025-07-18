within OpenMAUVe.UnitTesting.TestVehicles.Groundtruth;
model OsCarGroundthruthResults "This model allows to perform the unit testing of the gliderROGUE. The results can be seen within the variables testPassed_variablename. If the testPassed_variablename equals -1.0, it means that the unit test is not performed in that time instant; if testPassed_variablename equals 0.0 it means that the test is active but not passed, while testPassed_variablename equals 1.0 means that the test is active and passed."

  import Modelica.Units.SI;

  parameter Real uGT_CCF_1Hz_35deg = 0.100 "Groundtruth u closed caudal fin, actuated at f=1Hz and theta_0=35deg";
  parameter Real uGT_CCF_2Hz_35deg = 0.184 "Groundtruth u closed caudal fin, actuated at f=2Hz and theta_0=35deg";
  parameter Real uGT_CCF_3Hz_35deg = 0.236 "Groundtruth u closed caudal fin, actuated at f=3Hz and theta_0=35deg";

  parameter Real uGT_OCF_1Hz_35deg = 0.125 "Groundtruth u closed caudal fin, actuated at f=1Hz and theta_0=35deg";
  parameter Real uGT_OCF_2Hz_35deg = 0.227 "Groundtruth u closed caudal fin, actuated at f=2Hz and theta_0=35deg";  
  parameter Real uGT_OCF_3Hz_35deg = 0.205 "Groundtruth u closed caudal fin, actuated at f=3Hz and theta_0=35deg";

  parameter Real time_start_1Hz_CCF = 10.0 "Seconds from the beginning of the simulation when 1Hz and closed caudal fin are commanded";
  parameter Real time_start_2Hz_CCF = 40.0 "Seconds from the beginning of the simulation when 2Hz and closed caudal fin are commanded";
  parameter Real time_start_3Hz_CCF = 70.0 "Seconds from the beginning of the simulation when 3Hz and closed caudal fin are commanded";
  parameter Real time_start_1Hz_OCF = 100.0 "Seconds from the beginning of the simulation when 1Hz and open caudal fin are commanded";
  parameter Real time_start_2Hz_OCF = 130.0 "Seconds from the beginning of the simulation when 2Hz and open caudal fin are commanded";
  parameter Real time_start_3Hz_OCF = 160.0 "Seconds from the beginning of the simulation when 3Hz and open caudal fin are commanded";
  
  parameter Real maxAcceptableError = 10 "Percentage value (0% to 100%)";
  parameter Real checkTimeInit = 0 "Seconds from the beginning of the simulation";
  parameter Real checkTimeFinal = 0 "Seconds from the beginning of the simulation";



  //Boolean testCompleted
  Real u_r "Current speed";
  Real u_rGT "Current groundtruth surge speed";
 
  
  Real uRelErr(start = -1.0);
  Real uMaxRelErr(start = 0.0);

  Modelica.Blocks.Interfaces.RealOutput testPassed_u(start=-1.0) annotation(
    Placement(transformation(origin = {50, 26}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, 38}, extent = {{-10, -10}, {10, 10}})));


  Modelica.Blocks.Interfaces.RealInput inputUnitTest[1] annotation(
    Placement(transformation(origin = {-194, 0}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-194, 0}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput testPassed(start = -1.0) annotation(
    Placement(transformation(origin = {52, -20}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, -38}, extent = {{-10, -10}, {10, 10}})));
equation
  assert(maxAcceptableError >= 0.0 and maxAcceptableError <= 100.0, "WARNING OpenMAUVe setup (model OsCarGroundthruthResults): 'maxAcceptableError' out of limit (0 to 100)!", level = AssertionLevel.error);

  // Retrieving measured speed
  u_r = inputUnitTest[1];

  // Setting current groundtruth speed
  if (time > checkTimeInit and time < checkTimeFinal) then
    // perform verification

    if (time > time_start_1Hz_CCF and time <= time_start_2Hz_CCF) then 
      // 1Hz frequency CCF commanded
      u_rGT = uGT_CCF_1Hz_35deg;
    elseif (time > time_start_2Hz_CCF and time <= time_start_3Hz_CCF) then 
      // 2Hz frequency CCF commanded
      u_rGT = uGT_CCF_2Hz_35deg;
    elseif (time > time_start_3Hz_CCF and time <= time_start_1Hz_OCF) then 
      // 3Hz frequency CCF commanded
      u_rGT = uGT_CCF_3Hz_35deg;    
    elseif (time > time_start_1Hz_OCF and time <= time_start_2Hz_OCF) then 
      // 1Hz frequency OCF commanded
      u_rGT = uGT_OCF_1Hz_35deg;              
    elseif (time > time_start_2Hz_OCF and time <= time_start_3Hz_OCF) then 
      // 2Hz frequency OCF commanded
      u_rGT = uGT_OCF_2Hz_35deg;  
    else 
      // 3Hz frequency OCF commanded
      u_rGT = uGT_OCF_3Hz_35deg;    
    end if;


    // Calculating relative errors with respect to groutruth
    uRelErr = abs((u_r - u_rGT)*100/u_rGT);

    // Confirming
    testPassed_u = if uRelErr < maxAcceptableError then 1.0 else 0.0;

    testPassed = if (testPassed_u>0.9) then 1.0 else 0.0;  // final flag: >=1 in place of ==1 is used to prevent a Modelica syntax warning

  else

    // do not perform the test unit computation as it is out of the correct time window
    uRelErr = -1.0;
    testPassed_u = -1.0;
    testPassed = -1.0;
    u_rGT = -1.0;

    
  end if;

algorithm

  // Updating max relative errors
  if uRelErr > uMaxRelErr then
    uMaxRelErr := uRelErr;
  end if;

  annotation(
    Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
    Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})));
end OsCarGroundthruthResults;