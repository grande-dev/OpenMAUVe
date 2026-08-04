within OpenMAUVe.ValidationSimulator;
model ValidationBlueROV2H_thruster_orientation_unit_tests "BlueROV2H RCOut thruster orientation and wrench unit tests."
  parameter Integer nTests = 18 "Eight single-thruster tests followed by ten paired-thruster tests";
  parameter Real pwmIdle = 1500.0 "Neutral RC output PWM";
  parameter Real pwmActive = 1550.0 "Active RC output PWM";
  parameter Real batteryVoltage = 15.0 "Battery voltage used when the voltage-aware fit is enabled";
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
    5, 7] "Active MAVROS RCOut thruster channels for each test";

  BlueROV2H_in_pwm_out_forces pwmToForces[nTests];

  Real testPwm[nTests, 8] "RCOut PWM command used by each test";
  Real testWrench[nTests, 6] "Applied wrench [surge,sway,heave,roll,pitch,yaw]";
  Real testForceRCOut[nTests, 8] "Per-RCOut-channel force in MAVROS order";
  Real testForceTam[nTests, 8] "Per-thruster force in TAM column order, matching MAVROS order";

equation
  for k in 1:nTests loop
    pwmToForces[k].in_voltage = batteryVoltage;

    for i in 1:8 loop
      testPwm[k, i] = if i == activeThrusters[k, 1] or i == activeThrusters[k, 2] then pwmActive else pwmIdle;
      pwmToForces[k].in_pwm[i] = testPwm[k, i];
      testForceRCOut[k, i] = pwmToForces[k].out_thruster_force[i];
      testForceTam[k, i] = pwmToForces[k].out_thruster_force[i];
    end for;

    for i in 1:6 loop
      testWrench[k, i] = pwmToForces[k].out_wrench[i];
    end for;
  end for;

  annotation(
    experiment(StopTime = 40.0, Interval = 0.1, Tolerance = 1e-06),
    Diagram(coordinateSystem(extent = {{-300, -300}, {300, 300}})),
    Icon(coordinateSystem(extent = {{-300, -300}, {300, 300}})));
end ValidationBlueROV2H_thruster_orientation_unit_tests;
