within OpenMAUVe.Control;
model BlueROV2HTAMAllocator "Map body wrench to BlueROV2H thruster forces using SimTank TAM pseudoinverse."
  // Body-frame commanded wrench: [Fx, Fy, Fz, Mx, My, Mz].
  Modelica.Blocks.Interfaces.RealInput tau_x annotation(
    Placement(transformation(origin = {-154, 126}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-154, 126}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput tau_y annotation(
    Placement(transformation(origin = {-154, 78}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-154, 78}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput tau_z annotation(
    Placement(transformation(origin = {-154, 30}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-154, 30}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput tau_roll annotation(
    Placement(transformation(origin = {-154, -18}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-154, -18}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput tau_pitch annotation(
    Placement(transformation(origin = {-154, -66}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-154, -66}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput tau_yaw annotation(
    Placement(transformation(origin = {-154, -114}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-154, -114}, extent = {{-20, -20}, {20, 20}})));

  // Thruster forces [N], order: [a_p, a_s, f_p, f_s, v_f_p, v_a_p, v_f_s, v_a_s].
  Modelica.Blocks.Interfaces.RealOutput thrust_force[8] annotation(
    Placement(transformation(origin = {154, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {154, 0}, extent = {{-10, -10}, {10, 10}})));

  Real tau[6];
equation
  tau[1] = tau_x;
  tau[2] = tau_y;
  tau[3] = tau_z;
  tau[4] = tau_roll;
  tau[5] = tau_pitch;
  tau[6] = tau_yaw;

  // SimTank BlueROV2H TAM pseudoinverse (8x6), mapped as f = T_pinv * tau.
  thrust_force[1] = 0.3535533905905673*tau[1] + 0.3623373257638440*tau[2] + 1.4639891949963746*tau[6];
  thrust_force[2] = 0.3535533905905672*tau[1] - 0.3623373257638440*tau[2] - 1.4639891949963746*tau[6];
  thrust_force[3] = -0.3535533905941761*tau[1] + 0.3447694554244180*tau[2] - 1.4639891950113169*tau[6];
  thrust_force[4] = -0.3535533905941760*tau[1] - 0.3447694554244180*tau[2] + 1.4639891950113171*tau[6];
  thrust_force[5] = -0.1510416666666667*tau[1] + 0.0831231368952075*tau[2] + 0.25*tau[3] - 1.1465260261407932*tau[4] - 2.0833333333333330*tau[5];
  thrust_force[6] = 0.1510416666666667*tau[1] + 0.0831231368952075*tau[2] + 0.25*tau[3] - 1.1465260261407932*tau[4] + 2.0833333333333326*tau[5];
  thrust_force[7] = -0.1510416666666667*tau[1] - 0.0831231368952075*tau[2] + 0.25*tau[3] + 1.1465260261407932*tau[4] - 2.0833333333333326*tau[5];
  thrust_force[8] = 0.1510416666666667*tau[1] - 0.0831231368952075*tau[2] + 0.25*tau[3] + 1.1465260261407932*tau[4] + 2.0833333333333330*tau[5];
end BlueROV2HTAMAllocator;
