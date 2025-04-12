within OpenMAUVe.VerificationSimulator.GroundthruthVerification;

model RhoSouthChinaSeaGroundthruth
  Modelica.Blocks.Interfaces.RealInput rho annotation(
    Placement(transformation(origin = {-96, 2}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-96, 2}, extent = {{-20, -20}, {20, 20}})));

  import Modelica.Units.SI;

  parameter Real maxError = 10 "[%] Maximum acceptable relative error";

  parameter SI.Density densityAtSurface = 1022.7;
  parameter SI.Density densityAt1500m = 1034.5;

  parameter Modelica.Units.SI.Time timeAtSurface = 10; 
  parameter Modelica.Units.SI.Time timeAt1500m = 110; 
  parameter Modelica.Units.SI.Time timeIntervalCheck = 1; 


  Real testPassed;
  Real relativeError;
  

equation

  if (time >= timeAtSurface - timeIntervalCheck) and (time <= timeAtSurface + timeIntervalCheck) then 
  
    relativeError = abs((rho - densityAtSurface)*100/densityAtSurface);

    if relativeError < maxError then 
      testPassed = 1;
     else 
      testPassed = 0;
     end if;
  
  elseif (time >= timeAt1500m - timeIntervalCheck) and (time <= timeAt1500m + timeIntervalCheck) then 
    
    relativeError = abs((rho - densityAt1500m)*100/densityAt1500m);
  
    if relativeError < maxError then 
      testPassed = 1;
     else 
      testPassed = 0;  
    end if;
  else 
  
    relativeError = -1;
    testPassed = -1;
  
  end if;
  

end RhoSouthChinaSeaGroundthruth;