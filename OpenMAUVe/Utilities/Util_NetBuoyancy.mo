within OpenMAUVe.Utilities;
model Util_NetBuoyancy "A model to calcuate the current net mass of the vehicle."

  import SI = Modelica.Units.SI;

  parameter SI.Mass m_h = 0.0 "Mass of rigid body (hull)";
  parameter SI.Mass m_mov = 0.0 "Movable mass";
  parameter SI.Mass m_w = 0.0 "Point mass";
  parameter SI.Volume nabla_0 = 0.0 "Hull volume";
  parameter SI.Mass m_th = 0.0 "Mass of the thruster (in water!)";
  parameter SI.Acceleration g_world=Modelica.Constants.g_n "Gravity constant";
  parameter SI.Density rho_0 = 1022.7 "Density at the surface";
  parameter Real kappa_h(unit="m2") = 2.7172*10^(-7) "Hull compressibility coefficient";


  SI.Volume nabla_hull "Hull volume at depth";
  SI.Force net_buoyancy_deviation "Deviation from ideal to real net buoyancy due to hull compressibility";
  SI.Force net_buoyancy_hull "Real net buoyancy hull";
  SI.Force overall_gravity_system "Overall gravity force";
  SI.Force overall_buoyancy_system "Overall buoyancy force";
  SI.Force buoyancy_B0 "Buoyancy force equating gravity";
  SI.Force overall_buoyancy_system_B0 "Overall buoyancy force";
  SI.Force overall_net_buoyancy_system_B0 "Overall net force";

  Modelica.Blocks.Interfaces.RealInput in_VBD_vol annotation(
    Placement(transformation(origin = {-108, 58}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-112, 0}, extent = {{-14, -14}, {14, 14}})));
  Modelica.Blocks.Interfaces.RealOutput m_0( quantity="Mass", unit="kg") "Net mass: m_0 positive = vehicle negatively buoyant" annotation(
    Placement(transformation(origin = {108, 46}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {106, 62}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput net_buoyancy(quantity = "Force", unit = "N") "Net resultant force: positive = vehicle negatively buoyant" annotation(
    Placement(transformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {106, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput net_buoyancy_VBD(quantity = "Force", unit = "N") annotation(
    Placement(transformation(origin = {110, -50}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {106, -58}, extent = {{-10, -10}, {10, 10}})));

  Sensors.SignalBus signalBus annotation(
    Placement(transformation(origin = {1, -137}, extent = {{-21, -23}, {21, 23}}), iconTransformation(origin = {1, -87}, extent = {{-23, -23}, {23, 23}})));
  Modelica.Blocks.Math.Gain rho(k = 1)  annotation(
    Placement(transformation(origin = {-82, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Blocks.Math.Gain depth(k = 1) annotation(
    Placement(transformation(origin = {48, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
equation
  m_0 = m_h + m_mov + m_w + m_th - rho.y*(nabla_hull+in_VBD_vol); // Net mass calculation
 
  nabla_hull = nabla_0 - kappa_h*depth.y; // Real hull volume
  
  net_buoyancy_hull = - g_world*rho.y*nabla_hull; // Real hull buoyancy

  net_buoyancy_deviation = g_world*(rho_0*nabla_0-rho.y*nabla_hull);

  net_buoyancy_VBD = -g_world*rho.y*in_VBD_vol; // VBD net force calculation

  overall_gravity_system = g_world*(m_h + m_mov + m_w + m_th);  

  overall_buoyancy_system = net_buoyancy_hull + net_buoyancy_VBD + net_buoyancy_deviation; 

  net_buoyancy = overall_gravity_system + net_buoyancy_hull + net_buoyancy_VBD +  net_buoyancy_deviation ; // Total net force calculation

  // In case an incompressible buoyacy for neutral buoyancy is implemented
  buoyancy_B0 = -g_world*(m_h + m_mov + m_w + m_th); 

  overall_buoyancy_system_B0 = buoyancy_B0 + net_buoyancy_VBD + net_buoyancy_deviation; 

  overall_net_buoyancy_system_B0 = overall_gravity_system + buoyancy_B0 + net_buoyancy_VBD + net_buoyancy_deviation; 


  connect(signalBus.positionBodyWrtNED0inNED0[3], depth.u) annotation(
    Line(points = {{1, -137}, {0, -137}, {0, -116}, {48, -116}, {48, -80}}, color = {0, 0, 127}));
  connect(signalBus.rho, rho.u) annotation(
    Line(points = {{2, -136}, {0, -136}, {0, -116}, {-82, -116}, {-82, -82}}, color = {0, 0, 127}));
  annotation(
    Icon(graphics = {Text(origin = {-112, -31}, extent = {{-48, 11}, {48, -11}}, textString = "in_VBD_mass"), Text(origin = {-1, 6}, extent = {{-53, 38}, {53, -38}}, textString = "m_0"), Ellipse(origin = {3, 0}, extent = {{-79, 74}, {79, -74}}), Text(origin = {111, 83}, extent = {{-41, 9}, {41, -9}}, textString = "m_0"), Text(origin = {130, 21}, extent = {{-48, 11}, {48, -11}}, textString = "tot_net_buoyancy"), Text(origin = {144, -81}, extent = {{-48, 11}, {48, -11}}, textString = "net_buoyancy_VBD")}, coordinateSystem(extent = {{-150, -150}, {150, 150}})),
  Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end Util_NetBuoyancy;