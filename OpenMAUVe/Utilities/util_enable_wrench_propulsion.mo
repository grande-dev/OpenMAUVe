within OpenMAUVe.Utilities;

model util_enable_wrench_propulsion

  parameter Boolean enable_propulsion = true "Set to false for debugging";
  parameter Boolean enable_thrusters = false "This block is enabled is this is parameter is FALSE! If true, input is provided to each thruster, if false, input is the 6 dimensional wrench";
  parameter Boolean show_control_forces_and_moments  = false "Set to true for debugging";

  Real enable_wrench_command; // a scalar multiplying the wrench


  Modelica.Blocks.Interfaces.RealInput in_control_wrench[6] annotation(
    Placement(transformation(origin = {-100, -2}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-114, 0}, extent = {{-14, -14}, {14, 14}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce thruster_forces(animation = show_control_forces_and_moments , color = {0, 255, 0}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b) annotation(
    Placement(transformation(origin = {20, 47}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldTorque thruster_moments(animation = show_control_forces_and_moments , color = {0, 128, 0}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b) annotation(
    Placement(transformation(origin = {19, -37}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_Ob annotation(
    Placement(transformation(origin = {-104, -2}, extent = {{186, -14}, {218, 18}}), iconTransformation(origin = {-100, -8}, extent = {{186, -12}, {218, 20}})));
  
  //Modelica.Blocks.Math.Gain gainEnableWrenchCommand[6](each k = if enable_wrench_command  then 1 else 0)  annotation(Placement(transformation(origin = {-44, 0}, extent = {{-10, -10}, {10, 10}})));


equation

  if enable_propulsion == true and enable_thrusters ==false then
    enable_wrench_command = 1.0;
  else
    enable_wrench_command  = 0.0;
  end if;
  
  thruster_forces.force[1] = enable_wrench_command * in_control_wrench[1];
  thruster_forces.force[2] = enable_wrench_command * in_control_wrench[2];
  thruster_forces.force[3] = enable_wrench_command * in_control_wrench[3];
  thruster_moments.torque[1] = enable_wrench_command * in_control_wrench[4];
  thruster_moments.torque[2] = enable_wrench_command * in_control_wrench[5];
  thruster_moments.torque[3] = enable_wrench_command * in_control_wrench[6];

  
  
  connect(thruster_forces.frame_b, frame_Ob) annotation(
    Line(points = {{30, 47}, {50, 47}, {50, 0}, {98, 0}}, color = {95, 95, 95}));
  connect(thruster_moments.frame_b, frame_Ob) annotation(
    Line(points = {{29, -37}, {50, -37}, {50, 0}, {98, 0}}, color = {95, 95, 95}));


annotation(
    Icon(graphics = {Text(origin = {0, 16}, extent = {{-96, 82}, {96, -82}}, textString = "enable control 
wrench"), Rectangle(extent = {{-100, 100}, {100, -100}}), Text(origin = {149, 32}, extent = {{-39, 16}, {39, -16}}, textString = "{O_b}"), Text(origin = {-141, 29}, extent = {{-37, 15}, {37, -15}}, textString = "in_wrench")}),
  Diagram(graphics));
end util_enable_wrench_propulsion;