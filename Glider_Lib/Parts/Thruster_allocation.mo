within Glider_Lib.Parts;

model Thruster_allocation
  Modelica.Blocks.Interfaces.RealInput F1 annotation(
    Placement(visible = true, transformation(origin = {-108, 68}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-96, 70}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput F2 annotation(
    Placement(visible = true, transformation(origin = {-108, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-94, -2}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput F3 annotation(
    Placement(visible = true, transformation(origin = {-108, -74}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-94, -70}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Real F_X "force along x-axis";
  Real T_N "torque around z-axis";
  parameter Real alpha1 = 0.0 "orientation thruster 1";
  parameter Real l1x = 0.0 "distance from thruster 1 to COG (x-axis)";
  parameter Real l1y = 0.0 "distance from thruster 1 to COG (y-axis)";
  parameter Real alpha2 = 0.0 "orientation thruster 2";
  parameter Real l2x = 0.0 "distance from thruster 2 to COG (x-axis)";
  parameter Real l2y = 0.0 "distance from thruster 2 to COG (y-axis)";  
  parameter Real alpha3 = 0.0 "orientation thruster 3";
  parameter Real l3x = 0.0 "distance from thruster 3 to COG (x-axis)";
  parameter Real l3y = 0.0 "distance from thruster 3 to COG (y-axis)";
  Modelica.Mechanics.MultiBody.Forces.WorldForce forceThrusters_in_body_frame(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b)  annotation(
    Placement(visible = true, transformation(origin = {24, 74}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Forces.WorldTorque torqueThrusters_in_body_frame(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b)  annotation(
    Placement(visible = true, transformation(origin = {34, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_b annotation(
    Placement(visible = true, transformation(origin = {100, 18}, extent = {{-16, -16}, {16, 16}}, rotation = 0), iconTransformation(origin = {100, 18}, extent = {{-16, -16}, {16, 16}}, rotation = 0)));
equation
  F_X = F1 * sin(alpha1) + F2 * sin(alpha2) + F3 * sin(alpha3);
// force along x-axis
  T_N = (-F1 * sin(alpha1) * l1y) + F1 * cos(alpha1) * l1x - F2 * sin(alpha2) * l2y + F2 * cos(alpha2) * l2x - F3 * sin(alpha3) * l3y + F3 * cos(alpha3) * l3x;
// force around z-axis
  forceThrusters_in_body_frame.force = {F_X, 0.0, 0.0};
  torqueThrusters_in_body_frame.torque = {0.0, 0.0, T_N};
  connect(forceThrusters_in_body_frame.frame_b, frame_b) annotation(
    Line(points = {{34, 74}, {70, 74}, {70, 18}, {100, 18}}, color = {95, 95, 95}));
  connect(torqueThrusters_in_body_frame.frame_b, frame_b) annotation(
    Line(points = {{44, -32}, {70, -32}, {70, 18}, {100, 18}}));
end Thruster_allocation;