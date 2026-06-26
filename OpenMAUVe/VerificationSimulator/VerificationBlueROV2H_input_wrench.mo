within OpenMAUVe.VerificationSimulator;
model VerificationBlueROV2H_input_wrench "BlueROV2H model driven directly by body wrench [Fx,Fy,Fz,Mx,My,Mz]."
  Modelica.Blocks.Interfaces.RealInput in_tau_x annotation(
    Placement(transformation(origin = {-160, 120}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, 120}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_tau_y annotation(
    Placement(transformation(origin = {-160, 80}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, 80}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_tau_z annotation(
    Placement(transformation(origin = {-160, 40}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, 40}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_tau_roll annotation(
    Placement(transformation(origin = {-160, 0}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, 0}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_tau_pitch annotation(
    Placement(transformation(origin = {-160, -40}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -40}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_tau_yaw annotation(
    Placement(transformation(origin = {-160, -80}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -80}, extent = {{-20, -20}, {20, 20}})));

  Modelica.Blocks.Interfaces.RealOutput out_pos_body_wrt_NED0_in_NED0[3] annotation(
    Placement(transformation(origin = {160, 48}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {160, 80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_lin_vel_body[3] annotation(
    Placement(transformation(origin = {160, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {160, -34}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_ang_vel_ome[3] annotation(
    Placement(transformation(origin = {160, -20}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {160, -64}, extent = {{-10, -10}, {10, 10}})));

  Vehicles.auvBluROV2H_wrench auvBluROV2H_wrench(rho_0(displayUnit = "kg/m3") = 999.97, r_0 = {0.0, 0.0, 0.701}) annotation(
    Placement(transformation(origin = {15.2308, -0.967747}, extent = {{-61.2308, -51.3549}, {61.2308, 51.3549}})));

  Modelica.Blocks.Sources.Constant zeroCurrent[3](each k = 0.0) annotation(
    Placement(transformation(origin = {-122, 138}, extent = {{-8, -8}, {8, 8}})));
  Modelica.Blocks.Interfaces.RealOutput out_EA[3] annotation(
    Placement(transformation(origin = {160, 30}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {160, 48}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(zeroCurrent.y, auvBluROV2H_wrench.env_current_speed);

  auvBluROV2H_wrench.in_tau_x = in_tau_x;
  auvBluROV2H_wrench.in_tau_y = in_tau_y;
  auvBluROV2H_wrench.in_tau_z = in_tau_z;
  auvBluROV2H_wrench.in_tau_roll = in_tau_roll;
  auvBluROV2H_wrench.in_tau_pitch = in_tau_pitch;
  auvBluROV2H_wrench.in_tau_yaw = in_tau_yaw;

  out_pos_body_wrt_NED0_in_NED0 = auvBluROV2H_wrench.out_pos_body_wrt_NED0_in_NED0;
  out_EA = auvBluROV2H_wrench.out_EA;

  out_lin_vel_body = auvBluROV2H_wrench.out_lin_vel_body;
  out_ang_vel_ome = auvBluROV2H_wrench.out_ang_vel_ome;
end VerificationBlueROV2H_input_wrench;