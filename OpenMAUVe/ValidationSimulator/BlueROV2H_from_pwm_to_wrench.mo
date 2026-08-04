within OpenMAUVe.ValidationSimulator;
model BlueROV2H_from_pwm_to_wrench "Convert BlueROV2H dataset PWM or wrench channels to an applied body wrench."
  parameter Boolean use_pwm_as_input = true "Use PWM channels when true; otherwise pass through dataset wrench channels";
  parameter Boolean use_rcout_as_input = true "Use final MAVROS RC output motor PWM channels when available";
  parameter Real wrenchScale = 1.0 "Scale factor applied to the selected wrench";
  parameter Real pwmNeutral = 1500.0 "Neutral PWM value";
  parameter Real pwmNormCenter = 1500.0 "PWM normalization center used by mavros_pub";
  parameter Real pwmNormScale = 400.0 "PWM normalization scale used by mavros_pub";
  parameter Real legacyThrustScale = 1.0 "Scale applied to the legacy one-dimensional thrust fit; the fit output is already in N";
  parameter Real tamMzSumAbs = 0.6830651506258189 "sum(abs(TAM Mz row coefficients)) used by mavros_pub yaw conversion";
  parameter Boolean useVoltageThrustModel = true "Use voltage-aware PWM thrust fit instead of the legacy one-dimensional fit";
  parameter Boolean useBatteryVoltageInput = true "Use in_battery_voltage when positive; otherwise use batteryVoltage";
  parameter Real batteryVoltage = 15.0 "Fallback battery voltage used by the voltage-aware PWM thrust fit";
  parameter Real voltageModelCenter = 15.0 "Voltage centering used before evaluating the voltage-aware fit";
  parameter Real voltageModelScale = 1.0 "Voltage scaling used before evaluating the voltage-aware fit";
  parameter Real wrenchAxisScale[6] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0} "Per-axis scale applied to reconstructed wrench [surge,sway,heave,roll,pitch,yaw]";
  parameter Boolean zeroPwmMeansNeutral = true "Treat 0 PWM values as neutral/unset RC override channels";
  parameter Real enableAxis[6] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0} "Axis enable mask [surge,sway,heave,roll,pitch,yaw]";
  parameter Real pwmAxisSign[6] = {1.0, 1.0, -1.0, 1.0, 1.0, 1.0} "Sign convention from PWM calibration to body axes";
  parameter Real pwmAxisScale[6] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0} "Additional per-axis PWM effort scale";
  parameter Integer rcoutToTamIndex[8] = {4, 3, 2, 1, 7, 5, 8, 6} "Map RCOut [FS,FP,AS,AP,VFS,VFP,VAS,VAP] to TAM [AP,AS,FP,FS,VFP,VAP,VFS,VAS]";
  parameter Real rcoutForceSign[8] = {1.0, 1.0, -1.0, -1.0, 1.0, -1.0, -1.0, 1.0} "Per-motor sign from RC output PWM to positive TAM thrust";
  parameter Real rcoutForceScale[8] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0} "Per-motor force scale from RC output PWM to TAM thrust";
  parameter Real tamThrusterForceScale[8] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0} "Additional per-thruster scale in TAM column order";
  parameter Real tamThrusterForceBias[8] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0} "Additional per-thruster force bias in TAM column order";
  parameter Real pwmPolynomialCoefficients[8] = {
    3.0009567411800813,
    0.3513482237618634,
    -7.684833073117773,
    -0.6527386345061795,
    7.749626327823903,
    0.9114364620016434,
    1.7012170055475782,
    0.001092522474398828} "mavros_pub normalized T200 fit coefficients [x_n^7..x_n^0] in N";
  parameter Real voltageThrustCoefficients[36] = {
    2.369925798987e+01,
    -7.656327070345e-01,
    4.622662804061e+00,
    6.838626971516e-01,
    -9.764308192294e-01,
    -7.955870217309e-01,
    7.160616641936e+00,
    -7.500137614477e-01,
    7.732350126110e-01,
    -4.043539199761e+00,
    1.940274366515e+00,
    2.056927817212e+00,
    2.055334064828e-01,
    9.018548392710e-01,
    2.888403770180e-01,
    -6.420188050041e+01,
    2.252905398562e+00,
    -9.541606505844e-01,
    8.196416061082e-01,
    -8.665207506393e+00,
    2.015848999540e+00,
    -2.248521146551e+00,
    1.375346838920e+01,
    -1.690319674059e+00,
    -3.881041048324e+00,
    -7.461332375399e-02,
    6.801335718838e+01,
    5.096600343116e-01,
    -1.933283359373e+00,
    -1.590900060514e+00,
    6.898836800862e+00,
    7.471509347074e+00,
    -2.947990360912e-01,
    1.585756410485e+01,
    3.579363621023e-01,
    9.564149284701e-02} "Voltage-aware thrust fit coefficients in descending total degree order";
  parameter Integer voltageThrustPowersP[36] = {7, 6, 5, 4, 3, 2, 1, 0, 6, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 4, 3, 2, 1, 0, 3, 2, 1, 0, 2, 1, 0, 1, 0, 0} "PWM normalized exponent for each voltage-aware fit term";
  parameter Integer voltageThrustPowersV[36] = {0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 0, 1, 2, 3, 0, 1, 2, 0, 1, 0} "Voltage normalized exponent for each voltage-aware fit term";

  parameter Real tam[6, 8] = [
    0.7071067811847431, 0.7071067811847431, -0.7071067811919607, -0.7071067811919607, 0.0, 0.0, 0.0, 0.0;
    0.7071067811883519, -0.7071067811883519, 0.7071067811811348, -0.7071067811811348, 0.0, 0.0, 0.0, 0.0;
    0.0, 0.0, 0.0, 0.0, 1.0000000000000002, 1.0000000000000002, 1.0000000000000002, 1.0000000000000002;
    0.05126524163615552, -0.051265241636155506, 0.05126524163563227, -0.05126524163563226, -0.21805000000000005, -0.21805000000000005, 0.21805000000000005, 0.21805000000000005;
    -0.05126524163589388, -0.051265241635893875, 0.051265241636417144, 0.05126524163641714, -0.1199999999999745, 0.12000000000002554, -0.11999999999997452, 0.12000000000002554;
    0.166523646969496, -0.166523646969496, -0.17500892834341342, 0.17500892834341344, 0.0, 0.0, 0.0, 0.0] "Thruster allocation matrix tau = TAM*f";

  parameter Real tamPseudoInverse[8, 6] = [
    0.3535533905905673, 0.3623373257638440, 0.0, 0.0, 0.0, 1.4639891949963746;
    0.3535533905905672, -0.3623373257638440, 0.0, 0.0, 0.0, -1.4639891949963746;
    -0.3535533905941761, 0.3447694554244180, 0.0, 0.0, 0.0, -1.4639891950113169;
    -0.3535533905941760, -0.3447694554244180, 0.0, 0.0, 0.0, 1.4639891950113171;
    -0.1510416666666667, 0.0831231368952075, 0.25, -1.1465260261407932, -2.0833333333333330, 0.0;
    0.1510416666666667, 0.0831231368952075, 0.25, -1.1465260261407932, 2.0833333333333326, 0.0;
    -0.1510416666666667, -0.0831231368952075, 0.25, 1.1465260261407932, -2.0833333333333326, 0.0;
    0.1510416666666667, -0.0831231368952075, 0.25, 1.1465260261407932, 2.0833333333333330, 0.0] "Default pseudoinverse used to estimate thruster forces from six axis efforts";

  Modelica.Blocks.Interfaces.RealInput in_tau_x annotation(
    Placement(transformation(origin = {-176, 230}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, 120}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_tau_y annotation(
    Placement(transformation(origin = {-176, 198}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, 88}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_tau_z annotation(
    Placement(transformation(origin = {-176, 166}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, 56}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_tau_roll annotation(
    Placement(transformation(origin = {-176, 134}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, 24}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_tau_pitch annotation(
    Placement(transformation(origin = {-176, 102}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -8}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_tau_yaw annotation(
    Placement(transformation(origin = {-176, 70}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -40}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_pwm_x annotation(
    Placement(transformation(origin = {-176, 30}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -80}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_pwm_y annotation(
    Placement(transformation(origin = {-176, -2}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -112}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_pwm_z annotation(
    Placement(transformation(origin = {-176, -34}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -144}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_pwm_roll annotation(
    Placement(transformation(origin = {-176, -66}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -176}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_pwm_pitch annotation(
    Placement(transformation(origin = {-176, -98}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -208}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_pwm_yaw annotation(
    Placement(transformation(origin = {-176, -130}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -240}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_armed annotation(
    Placement(transformation(origin = {-176, -162}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -272}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_battery_voltage annotation(
    Placement(transformation(origin = {-176, -190}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-160, -288}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_motor_pwm[8] annotation(
    Placement(transformation(origin = {-174, -230}, extent = {{-20, -60}, {20, 60}}), iconTransformation(origin = {-160, -320}, extent = {{-20, -60}, {20, 60}})));

  Modelica.Blocks.Interfaces.RealOutput out_tau_x annotation(
    Placement(transformation(origin = {160, 80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_tau_y annotation(
    Placement(transformation(origin = {160, 48}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_tau_z annotation(
    Placement(transformation(origin = {160, 16}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_tau_roll annotation(
    Placement(transformation(origin = {160, -16}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_tau_pitch annotation(
    Placement(transformation(origin = {160, -48}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_tau_yaw annotation(
    Placement(transformation(origin = {160, -80}, extent = {{-10, -10}, {10, 10}})));

  Real appliedWrench[6] "Selected wrench after scaling, axis mask, and arming";
  Real pwmAxisEffort[6] "PWM-derived virtual generalized force/moment";
  Real estimatedThrusterForce[8] "Estimated thruster forces from PWM-derived generalized effort";
  Real rcoutThrusterForce[8] "Thruster forces reconstructed from MAVROS final RC output PWM";
  Real thrusterForceRCOut[8] "Force generated by each RC output channel before RCOut-to-TAM remapping";
  Real thrusterForceTamRaw[8] "Force generated by each thruster in TAM column order before TAM scale/bias";
  Real thrusterForce[8] "Force generated by each thruster in TAM column order after TAM scale/bias";
  Real reconstructedPwmWrench[6] "Forward TAM reconstruction from estimated thruster forces";

protected
  Real datasetWrench[6];
  Real pwmInput[6];
  Real pwmUsed[6];
  Real pwmNormalized[6];
  Real pwmNeutralForceN;
  Real batteryVoltageUsed;
  Real voltageNormalized;
  Real voltageFitNeutralN;
  Real pwmVoltageFitForceN[6];
  Real rcoutPwmUsed[8];
  Real rcoutPwmNormalized[8];
  Real rcoutVoltageFitForceN[8];
  Real rcoutChannelForce[8];
  Real axisEstimatedThrusterForce[8];
  Real selectedWrench[6];

equation
  datasetWrench = {in_tau_x, in_tau_y, in_tau_z, in_tau_roll, in_tau_pitch, in_tau_yaw};
  pwmInput = {in_pwm_x, in_pwm_y, in_pwm_z, in_pwm_roll, in_pwm_pitch, in_pwm_yaw};
  pwmNeutralForceN = sum(pwmPolynomialCoefficients[j]*(((pwmNeutral - pwmNormCenter)/pwmNormScale)^(8 - j)) for j in 1:8);
  batteryVoltageUsed = if useBatteryVoltageInput and in_battery_voltage > 1e-9 then in_battery_voltage else batteryVoltage;
  voltageNormalized = (batteryVoltageUsed - voltageModelCenter)/voltageModelScale;
  voltageFitNeutralN = sum(voltageThrustCoefficients[j]*(((pwmNeutral - pwmNormCenter)/pwmNormScale)^voltageThrustPowersP[j])*(voltageNormalized^voltageThrustPowersV[j]) for j in 1:36);

  for i in 1:5 loop
    pwmUsed[i] = if zeroPwmMeansNeutral and abs(pwmInput[i]) < 1e-9 then pwmNeutral else pwmInput[i];
    pwmNormalized[i] = (pwmUsed[i] - pwmNormCenter)/pwmNormScale;
    pwmVoltageFitForceN[i] =
      sum(voltageThrustCoefficients[j]*(pwmNormalized[i]^voltageThrustPowersP[j])*(voltageNormalized^voltageThrustPowersV[j]) for j in 1:36) - voltageFitNeutralN;
    pwmAxisEffort[i] = pwmAxisScale[i]*pwmAxisSign[i]*
      (if useVoltageThrustModel then pwmVoltageFitForceN[i] else
      legacyThrustScale*(sum(pwmPolynomialCoefficients[j]*(pwmNormalized[i]^(8 - j)) for j in 1:8) - pwmNeutralForceN));
  end for;

  pwmUsed[6] = if zeroPwmMeansNeutral and abs(pwmInput[6]) < 1e-9 then pwmNeutral else pwmInput[6];
  pwmNormalized[6] = (pwmUsed[6] - pwmNormCenter)/pwmNormScale;
  pwmVoltageFitForceN[6] =
    sum(voltageThrustCoefficients[j]*(pwmNormalized[6]^voltageThrustPowersP[j])*(voltageNormalized^voltageThrustPowersV[j]) for j in 1:36) - voltageFitNeutralN;
  pwmAxisEffort[6] = pwmAxisScale[6]*pwmAxisSign[6]*tamMzSumAbs*
    (if useVoltageThrustModel then pwmVoltageFitForceN[6] else
    legacyThrustScale*(sum(pwmPolynomialCoefficients[j]*(pwmNormalized[6]^(8 - j)) for j in 1:8) - pwmNeutralForceN));

  for i in 1:8 loop
    axisEstimatedThrusterForce[i] = sum(tamPseudoInverse[i, j]*pwmAxisEffort[j] for j in 1:6);
    rcoutPwmUsed[i] = if zeroPwmMeansNeutral and abs(in_motor_pwm[i]) < 1e-9 then pwmNeutral else in_motor_pwm[i];
    rcoutPwmNormalized[i] = (rcoutPwmUsed[i] - pwmNormCenter)/pwmNormScale;
    rcoutVoltageFitForceN[i] =
      sum(voltageThrustCoefficients[j]*(rcoutPwmNormalized[i]^voltageThrustPowersP[j])*(voltageNormalized^voltageThrustPowersV[j]) for j in 1:36) - voltageFitNeutralN;
    rcoutChannelForce[i] = rcoutForceScale[i]*rcoutForceSign[i]*
      (if useVoltageThrustModel then rcoutVoltageFitForceN[i] else
      legacyThrustScale*(sum(pwmPolynomialCoefficients[j]*(rcoutPwmNormalized[i]^(8 - j)) for j in 1:8) - pwmNeutralForceN));
    thrusterForceRCOut[i] = rcoutChannelForce[i];
    rcoutThrusterForce[i] = sum(if rcoutToTamIndex[j] == i then rcoutChannelForce[j] else 0.0 for j in 1:8);
    thrusterForceTamRaw[i] = if use_rcout_as_input then rcoutThrusterForce[i] else axisEstimatedThrusterForce[i];
    thrusterForce[i] = tamThrusterForceScale[i]*thrusterForceTamRaw[i] + tamThrusterForceBias[i];
    estimatedThrusterForce[i] = thrusterForce[i];
  end for;

  for i in 1:6 loop
    reconstructedPwmWrench[i] = sum(tam[i, j]*estimatedThrusterForce[j] for j in 1:8);
    selectedWrench[i] = if use_pwm_as_input or use_rcout_as_input then reconstructedPwmWrench[i] else datasetWrench[i];
    appliedWrench[i] = wrenchScale*wrenchAxisScale[i]*selectedWrench[i]*enableAxis[i]*in_armed;
  end for;

  out_tau_x = appliedWrench[1];
  out_tau_y = appliedWrench[2];
  out_tau_z = appliedWrench[3];
  out_tau_roll = appliedWrench[4];
  out_tau_pitch = appliedWrench[5];
  out_tau_yaw = appliedWrench[6];
annotation(
    Diagram(coordinateSystem(extent = {{-300, -300}, {300, 300}})),
    Icon(coordinateSystem(extent = {{-300, -300}, {300, 300}})));
end BlueROV2H_from_pwm_to_wrench;
