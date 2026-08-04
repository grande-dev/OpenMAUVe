within OpenMAUVe.ValidationSimulator;

model ValidationBlueROV2H_thruster_orientation_single_test_auvBlueROV2H "Single BlueROV2H RCOut thruster orientation test through the full thruster vehicle."
  parameter Integer activeThruster1 = 1 "First active MAVROS RCOut channel, set 0 to disable";
  parameter Integer activeThruster2 = 0 "Second active MAVROS RCOut channel, set 0 to disable";
  parameter Real pwmIdle = 1500.0 "Neutral RC output PWM";
  parameter Real pwmActive = 1550.0 "Active RC output PWM";
  parameter Real batteryVoltage = 15.0 "Battery voltage used when the voltage-aware fit is enabled";

  BlueROV2H_in_pwm_out_forces pwmToForces;

  Vehicles.auvBluROV2H vehicle(
    command_thrusters_as_force = true,
    enableActuatorDynamics = false,
    r_0 = {0, 0, 2.0},
    v_0 = {0, 0, 0},
    enableAddedMassEffects = false,
    rho_0(displayUnit = "kg/m3") = 1000,
    I_11 = 300.0,
    I_22 = 300.0,
    I_33 = 300.0,
    N_r = 210.0,
    N_rr = 3.0,
    nabla_0 = 0.5,
    Z_w = 6.106,
    Z_ww = 5.0,
    K_pp = 3.0,
    M_qq = 3.0,
    scaleDist = 10^(-6),
    show_shapes = false,
    show_control_forces_and_moments = false) annotation(
    Placement(transformation(origin = {78, 0}, extent = {{-30, -25}, {30, 25}})));

  Modelica.Blocks.Sources.Constant zeroCurrent[3](each k = 0.0) annotation(
    Placement(transformation(origin = {-20, 70}, extent = {{-8, -8}, {8, 8}})));

  Real inputPwm[8] "RCOut PWM command used by this test";
  Real inputWrench[6] "Equivalent applied wrench [surge,sway,heave,roll,pitch,yaw]";
  Real outputVelocity[6] "Vehicle velocity [u,v,w,p,q,r]";
  Real forceRCOut[8] "Per-RCOut-channel force in MAVROS order";
  Real forceVehicle[8] "Per-thruster force sent to auvBluROV2H in MAVROS order";

equation
  pwmToForces.in_voltage = batteryVoltage;

  for i in 1:8 loop
    inputPwm[i] = if i == activeThruster1 or i == activeThruster2 then pwmActive else pwmIdle;
    pwmToForces.in_pwm[i] = inputPwm[i];
    forceRCOut[i] = pwmToForces.out_thruster_force[i];
    forceVehicle[i] = pwmToForces.out_thruster_force[i];
  end for;

  vehicle.in_thruster_a_s = pwmToForces.out_thruster_force[1];
  vehicle.in_thruster_a_p = pwmToForces.out_thruster_force[2];
  vehicle.in_thruster_f_s = pwmToForces.out_thruster_force[3];
  vehicle.in_thruster_f_p = pwmToForces.out_thruster_force[4];
  vehicle.in_thruster_v_f_s = pwmToForces.out_thruster_force[5];
  vehicle.in_thruster_v_f_p = pwmToForces.out_thruster_force[6];
  vehicle.in_thruster_v_a_s = pwmToForces.out_thruster_force[7];
  vehicle.in_thruster_v_a_p = pwmToForces.out_thruster_force[8];

  inputWrench = pwmToForces.out_wrench;
  outputVelocity = {
    vehicle.out_lin_vel_body[1],
    vehicle.out_lin_vel_body[2],
    vehicle.out_lin_vel_body[3],
    vehicle.out_ang_vel_ome[1],
    vehicle.out_ang_vel_ome[2],
    vehicle.out_ang_vel_ome[3]};

  connect(zeroCurrent.y, vehicle.env_current_speed) annotation(
    Line(points = {{-11, 70}, {76, 70}, {76, 24}}, color = {0, 0, 127}, thickness = 0.5));

  annotation(
    experiment(StopTime = 40.0, Interval = 0.1, Tolerance = 1e-06),
    Diagram(coordinateSystem(extent = {{-220, -140}, {220, 140}})),
    Icon(coordinateSystem(extent = {{-220, -140}, {220, 140}})));
end ValidationBlueROV2H_thruster_orientation_single_test_auvBlueROV2H;
