within OpenMAUVe.ValidationSimulator;
model ValidationBlueROV2H_thruster_orientation_single_test "Single BlueROV2H RCOut thruster orientation test through the vehicle model."
  parameter Integer activeThruster1 = 1 "First active MAVROS RCOut channel, set 0 to disable";
  parameter Integer activeThruster2 = 0 "Second active MAVROS RCOut channel, set 0 to disable";
  parameter Real pwmIdle = 1500.0 "Neutral RC output PWM";
  parameter Real pwmActive = 1550.0 "Active RC output PWM";
  parameter Real batteryVoltage = 15.0 "Battery voltage used when the voltage-aware fit is enabled";

  BlueROV2H_in_pwm_out_forces pwmToForces;

  ValidationBlueROV2H_input_wrench vehicle annotation(
    Placement(transformation(origin = {78, 0}, extent = {{-30, -25}, {30, 25}})));

  Real inputPwm[8] "RCOut PWM command used by this test";
  Real inputWrench[6] "Applied wrench [surge,sway,heave,roll,pitch,yaw]";
  Real outputVelocity[6] "Vehicle velocity [u,v,w,p,q,r]";
  Real forceRCOut[8] "Per-RCOut-channel force in MAVROS order";
  Real forceTam[8] "Per-thruster force in TAM column order, matching MAVROS order";

equation
  pwmToForces.in_voltage = batteryVoltage;

  for i in 1:8 loop
    inputPwm[i] = if i == activeThruster1 or i == activeThruster2 then pwmActive else pwmIdle;
    pwmToForces.in_pwm[i] = inputPwm[i];
    forceRCOut[i] = pwmToForces.out_thruster_force[i];
    forceTam[i] = pwmToForces.out_thruster_force[i];
  end for;

  vehicle.in_tau_x = pwmToForces.out_wrench[1];
  vehicle.in_tau_y = pwmToForces.out_wrench[2];
  vehicle.in_tau_z = pwmToForces.out_wrench[3];
  vehicle.in_tau_roll = pwmToForces.out_wrench[4];
  vehicle.in_tau_pitch = pwmToForces.out_wrench[5];
  vehicle.in_tau_yaw = pwmToForces.out_wrench[6];

  inputWrench = pwmToForces.out_wrench;
  outputVelocity = {
    vehicle.out_lin_vel_body[1],
    vehicle.out_lin_vel_body[2],
    vehicle.out_lin_vel_body[3],
    vehicle.out_ang_vel_ome[1],
    vehicle.out_ang_vel_ome[2],
    vehicle.out_ang_vel_ome[3]};

  annotation(
    experiment(StopTime = 40.0, Interval = 0.1, Tolerance = 1e-06),
    Diagram(coordinateSystem(extent = {{-300, -300}, {300, 300}})),
    Icon(coordinateSystem(extent = {{-300, -300}, {300, 300}})));
end ValidationBlueROV2H_thruster_orientation_single_test;
