within OpenMAUVe.Utilities;
model Util_NetMass "A model to calcuate the current net mass of the vehicle."

  import SI = Modelica.Units.SI;

  parameter SI.Mass m_h = 0.0 "Mass of rigid body (hull)";
  parameter SI.Mass m_mov = 0.0 "Movable mass";
  parameter SI.Mass m_w = 0.0 "Point mass";
  parameter SI.Volume nabla_0 = 0.0 "Hull volume";
  parameter SI.Mass m_th = 0.0 "Mass of the thruster (in water!)";
  parameter SI.Acceleration g_world=Modelica.Constants.g_n "Gravity constant";
  parameter SI.Density rho_0 = 1022.7 "Density at the surface";


  Modelica.Blocks.Interfaces.RealInput in_VBD_vol annotation(
    Placement(transformation(origin = {-108, 58}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-102, -46}, extent = {{-14, -14}, {14, 14}})));
  Modelica.Blocks.Interfaces.RealOutput m_0( quantity="Mass", unit="kg") "Net mass: m_0 positive = vehicle negatively buoyant" annotation(
    Placement(transformation(origin = {108, 54}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 62}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealInput rho annotation(
    Placement(transformation(origin = {-108, -44}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-102, 54}, extent = {{-14, -14}, {14, 14}})));
  Modelica.Blocks.Interfaces.RealOutput net_force(quantity = "Force", unit = "N") "Net resultant force: positive = vehicle negatively buoyant" annotation(
    Placement(transformation(origin = {106, 14}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput VBD_net_force(quantity = "Force", unit = "N") annotation(
    Placement(transformation(origin = {108, -30}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, -58}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput net_buoyancy_(quantity = "Force", unit = "N") annotation(
    Placement(transformation(origin = {108, -58}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, -48}, extent = {{-10, -10}, {10, 10}})));
equation
  m_0 = m_h + m_mov + m_w + m_th - rho*(nabla_0+in_VBD_vol); // Net mass calculation
  net_force = (m_h + m_mov + m_w + m_th)*g_world - rho*g_world*(nabla_0+in_VBD_vol); // Total net force calculation
  VBD_net_force = - rho*g_world*(in_VBD_vol); // VBD net force calculation

  VBD_adjustment = g_world*(rho_0*nabla_0-rho*(nabla_0+in_VBD_vol));

  annotation(
    Icon(graphics = {Text(origin = {-102, -77}, extent = {{-48, 11}, {48, -11}}, textString = "in_VBD_mass"), Text(origin = {-1, 6}, extent = {{-53, 38}, {53, -38}}, textString = "m_0"), Ellipse(origin = {3, 0}, extent = {{-79, 74}, {79, -74}}), Text(origin = {-130, 83}, extent = {{-48, 11}, {48, -11}}, textString = "rho"), Text(origin = {95, 83}, extent = {{-41, 9}, {41, -9}}, textString = "m_0"), Text(origin = {130, 21}, extent = {{-48, 11}, {48, -11}}, textString = "tot_net_force"), Text(origin = {128, -81}, extent = {{-48, 11}, {48, -11}}, textString = "VBD_net_force")}, coordinateSystem(extent = {{-150, -150}, {150, 150}})),
  Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end Util_NetMass;