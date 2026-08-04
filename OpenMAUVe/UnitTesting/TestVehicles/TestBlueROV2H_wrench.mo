within OpenMAUVe.UnitTesting.TestVehicles;

model TestBlueROV2H_wrench "Visual BlueROV2H wrench test from individual RCOut PWM thruster commands"
  parameter Real testDuration = 10.0 "Duration of each thruster orientation test";
  parameter Real pwmIdle = 1500.0 "Neutral PWM for inactive thrusters";
  parameter Real pwmActive = 1550.0 "PWM applied to active thrusters";
  parameter Real testBatteryVoltage = 15.0 "Battery voltage used by the PWM-to-thrust model";
  parameter Boolean testUseVoltageThrustModel = false "Use the voltage-aware PWM thrust fit instead of the legacy fit";
  parameter Boolean showThrusterMarkers = true "Show visual markers for the eight RCOut thruster locations" annotation(
    Dialog(tab = "Visual settings"));
  parameter Boolean showCommandedWrenchArrows = false "Show green commanded wrench force/torque arrows" annotation(
    Dialog(tab = "Visual settings"));
  parameter Boolean showHydrostaticHydrodynamicArrows = false "Show buoyancy and hydrodynamic force/moment arrows" annotation(
    Dialog(tab = "Visual settings"));
  parameter Integer nTests = 18 "Number of sequenced thruster tests";
  parameter Integer activeThrusters[nTests, 2] = [
    1, 0;
    2, 0;
    3, 0;
    4, 0;
    5, 0;
    6, 0;
    7, 0;
    8, 0;
    1, 2;
    3, 4;
    2, 4;
    1, 3;
    1, 4;
    6, 7;
    5, 8;
    5, 6;
    6, 8;
    5, 7] "RCOut thruster pairs tested sequentially; 0 means no second thruster";

  Vehicles.auvBluROV2H_wrench auvBluROV2H_wrench(
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
    show_frames_vehicles = true,
    show_shapes = true,
    show_forces_and_moments = showHydrostaticHydrodynamicArrows,
    show_control_forces_and_moments = showCommandedWrenchArrows,
    show_rcout_thruster_markers = showThrusterMarkers) annotation(
    Placement(transformation(origin = {130, -50}, extent = {{-96, -104}, {96, 104}})));

  OpenMAUVe.ValidationSimulator.BlueROV2H_from_pwm_to_wrench blueROV2H_from_pwm_to_wrench(
    use_pwm_as_input = true,
    use_rcout_as_input = true,
    useVoltageThrustModel = testUseVoltageThrustModel,
    useBatteryVoltageInput = true,
    batteryVoltage = testBatteryVoltage,
    wrenchAxisScale = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0}) annotation(
    Placement(transformation(origin = {-120, -18}, extent = {{-36, -36}, {36, 36}})));

  Environment.Currents.CurrentsSouthChinaSea currentsSouthChinaSea(enableCurrents = false) annotation(
    Placement(transformation(origin = {-68, 130}, extent = {{-26, -26}, {26, 26}})));

  Integer activeTest "Current test index, 1..18";
  Real activeTestSignal "Plot-friendly active test index";
  Real motorPwm[8] "RCOut PWM applied to each thruster";
  Real rcoutThrusterForce[8] "Force reconstructed for each RCOut thruster channel";
  Real tamThrusterForce[8] "Force reconstructed for each thruster in TAM column order";
  Real inputWrench[6] "Wrench reconstructed from the active PWM thruster commands";
  Real outputVelocity[6] "Body velocity [u,v,w,p,q,r] from the BlueROV2H wrench vehicle";

equation
  activeTest = min(nTests, integer(time/testDuration) + 1);
  activeTestSignal = activeTest;

  for i in 1:8 loop
    motorPwm[i] = if i == activeThrusters[activeTest, 1] or i == activeThrusters[activeTest, 2] then pwmActive else pwmIdle;
    blueROV2H_from_pwm_to_wrench.in_motor_pwm[i] = motorPwm[i];
    rcoutThrusterForce[i] = blueROV2H_from_pwm_to_wrench.thrusterForceRCOut[i];
    tamThrusterForce[i] = blueROV2H_from_pwm_to_wrench.thrusterForce[i];
  end for;

  blueROV2H_from_pwm_to_wrench.in_tau_x = 0.0;
  blueROV2H_from_pwm_to_wrench.in_tau_y = 0.0;
  blueROV2H_from_pwm_to_wrench.in_tau_z = 0.0;
  blueROV2H_from_pwm_to_wrench.in_tau_roll = 0.0;
  blueROV2H_from_pwm_to_wrench.in_tau_pitch = 0.0;
  blueROV2H_from_pwm_to_wrench.in_tau_yaw = 0.0;
  blueROV2H_from_pwm_to_wrench.in_pwm_x = pwmIdle;
  blueROV2H_from_pwm_to_wrench.in_pwm_y = pwmIdle;
  blueROV2H_from_pwm_to_wrench.in_pwm_z = pwmIdle;
  blueROV2H_from_pwm_to_wrench.in_pwm_roll = pwmIdle;
  blueROV2H_from_pwm_to_wrench.in_pwm_pitch = pwmIdle;
  blueROV2H_from_pwm_to_wrench.in_pwm_yaw = pwmIdle;
  blueROV2H_from_pwm_to_wrench.in_armed = 1.0;
  blueROV2H_from_pwm_to_wrench.in_battery_voltage = testBatteryVoltage;

  inputWrench = {
    blueROV2H_from_pwm_to_wrench.out_tau_x,
    blueROV2H_from_pwm_to_wrench.out_tau_y,
    blueROV2H_from_pwm_to_wrench.out_tau_z,
    blueROV2H_from_pwm_to_wrench.out_tau_roll,
    blueROV2H_from_pwm_to_wrench.out_tau_pitch,
    blueROV2H_from_pwm_to_wrench.out_tau_yaw};
  outputVelocity = {
    auvBluROV2H_wrench.out_lin_vel_body[1],
    auvBluROV2H_wrench.out_lin_vel_body[2],
    auvBluROV2H_wrench.out_lin_vel_body[3],
    auvBluROV2H_wrench.out_ang_vel_ome[1],
    auvBluROV2H_wrench.out_ang_vel_ome[2],
    auvBluROV2H_wrench.out_ang_vel_ome[3]};


  connect(currentsSouthChinaSea.out_currents_inertial_frame, auvBluROV2H_wrench.env_current_speed) annotation(
    Line(points = {{-41.48, 130}, {-41.48, 43}, {127, 43}}, color = {0, 0, 127}, thickness = 0.5));
  connect(currentsSouthChinaSea.signalBus, auvBluROV2H_wrench.signalBus) annotation(
    Line(points = {{-68.52, 105.04}, {-68.52, 74}, {171, 74}, {171, -83}}, color = {255, 204, 51}, thickness = 0.5));
  connect(blueROV2H_from_pwm_to_wrench.out_tau_x, auvBluROV2H_wrench.in_tau_x) annotation(
    Line(points = {{-80, -8}, {-80, 34}, {63, 34}}, color = {0, 0, 127}));
  connect(blueROV2H_from_pwm_to_wrench.out_tau_y, auvBluROV2H_wrench.in_tau_y) annotation(
    Line(points = {{-80, -14}, {-32, -14}, {-32, 13}, {64, 13}}, color = {0, 0, 127}));
  connect(blueROV2H_from_pwm_to_wrench.out_tau_z, auvBluROV2H_wrench.in_tau_z) annotation(
    Line(points = {{-80, -20}, {-34, -20}, {-34, -10}, {65, -10}}, color = {0, 0, 127}));
  connect(blueROV2H_from_pwm_to_wrench.out_tau_roll, auvBluROV2H_wrench.in_tau_roll) annotation(
    Line(points = {{-80, -26}, {-80, -32}, {66, -32}}, color = {0, 0, 127}));
  connect(blueROV2H_from_pwm_to_wrench.out_tau_pitch, auvBluROV2H_wrench.in_tau_pitch) annotation(
    Line(points = {{-80, -32}, {-9, -32}, {-9, -54}, {65, -54}}, color = {0, 0, 127}));
  connect(blueROV2H_from_pwm_to_wrench.out_tau_yaw, auvBluROV2H_wrench.in_tau_yaw) annotation(
    Line(points = {{-80, -38}, {-80, -74}, {66, -74}}, color = {0, 0, 127}));
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-200, -200}, {200, 200}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-200, -200}, {200, 200}}, grid = {1, 1})),
    experiment(StopTime = 180, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestBlueROV2H_wrench;