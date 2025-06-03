within OpenMAUVe.Utilities;
model Util_Strouhal "A model to calcuate the current net mass of the vehicle."

  import SI = Modelica.Units.SI;

  parameter SI.Length length_fin_caudal = 0.0 "Length of the caudal fin";
  
  SI.Length App "Tail beat amplitude";


  Modelica.Blocks.Interfaces.RealInput in_frequency_caudal annotation(
    Placement(transformation(origin = {-104, 58}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-108, 40}, extent = {{-14, -14}, {14, 14}})));
  Modelica.Blocks.Interfaces.RealOutput Strouhal_number(quantity = "Force", unit = "N") "Net resultant force: positive = vehicle negatively buoyant" annotation(
    Placement(transformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {106, 0}, extent = {{-10, -10}, {10, 10}})));

  Sensors.SignalBus signalBus annotation(
    Placement(transformation(origin = {1, -137}, extent = {{-21, -23}, {21, 23}}), iconTransformation(origin = {1, -87}, extent = {{-23, -23}, {23, 23}})));
  Modelica.Blocks.Math.Gain surge_speed(k = 1)  annotation(
    Placement(transformation(origin = {-82, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Blocks.Interfaces.RealInput in_amplitude_caudal annotation(
    Placement(transformation(origin = {-104, -16}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-106, -46}, extent = {{-14, -14}, {14, 14}})));
  Modelica.Blocks.Math.UnitConversions.From_deg fin_amplitude_rad annotation(
    Placement(transformation(origin = {-38, -16}, extent = {{-10, -10}, {10, 10}})));
equation
  
  App = 2*length_fin_caudal*sin(fin_amplitude_rad.y);
  Strouhal_number = in_frequency_caudal * App / surge_speed.y;
  
  
  connect(signalBus.velocityLinearOfBodyWrtNEDInBody[1], surge_speed.u) annotation(
    Line(points = {{2, -136}, {2, -112}, {-82, -112}, {-82, -82}}, color = {0, 0, 127}));
  connect(in_amplitude_caudal, fin_amplitude_rad.u) annotation(
    Line(points = {{-104, -16}, {-50, -16}}, color = {0, 0, 127}));
  annotation(
    Icon(graphics = {Text(origin = {-130, 69}, extent = {{-48, 11}, {48, -11}}, textString = "in_freq_caudal"), Text(origin = {-1, 6}, extent = {{-53, 38}, {53, -38}}, textString = "SN"), Ellipse(origin = {3, 0}, extent = {{-79, 74}, {79, -74}}), Text(origin = {130, 21}, extent = {{-48, 11}, {48, -11}}, textString = ""), Text(origin = {-132, -23}, extent = {{-48, 11}, {48, -11}}, textString = "in_ampl_caudal")}, coordinateSystem(extent = {{-150, -150}, {150, 150}})),
    Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end Util_Strouhal;