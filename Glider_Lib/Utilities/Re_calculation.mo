within Glider_Lib.Utilities;

model Re_calculation "A model to caculate the current Reynolds number."
  
  import SI = Modelica.Units.SI;
  
  SI.Length L_vehicle = 0 "vehicle length excluding tail if present";
   
  SI.DynamicViscosity mu = 0.00189 "[Pa.s] seawater viscosity at 1028 kg/m3";
    
  Modelica.Blocks.Interfaces.RealInput rho annotation(
    Placement(transformation(origin = {-98, 48}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-88, 48}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput flowspeed annotation(
    Placement(transformation(origin = {-96, -42}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-88, -38}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput Reynolds_number annotation(
    Placement(transformation(origin = {96, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {96, 0}, extent = {{-10, -10}, {10, 10}})));
equation
  Reynolds_number = rho * flowspeed * L_vehicle / mu;
annotation(
    Icon(graphics = {Text(origin = {-98, 87}, extent = {{-48, 11}, {48, -11}}, textString = "rho"), Text(origin = {-88, -77}, extent = {{-48, 11}, {48, -11}}, textString = "flowspeed"), Text(origin = {-1, 6}, extent = {{-53, 38}, {53, -38}}, textString = "Re")}));
end Re_calculation;