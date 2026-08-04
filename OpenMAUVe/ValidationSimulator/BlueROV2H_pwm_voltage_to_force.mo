within OpenMAUVe.ValidationSimulator;
model BlueROV2H_pwm_voltage_to_force "Voltage-aware BlueROV2H/T200 PWM thrust fit."
  parameter Real pwmNeutral = 1500.0 "Neutral PWM value";
  parameter Real pwmNormCenter = 1500.0 "PWM normalization center";
  parameter Real pwmNormScale = 400.0 "PWM normalization scale";
  parameter Real voltageModelCenter = 15.0 "Voltage centering used before evaluating the fit";
  parameter Real voltageModelScale = 1.0 "Voltage scaling used before evaluating the fit";
  parameter Boolean subtractNeutralThrust = true "Subtract the fitted thrust at pwmNeutral";
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
    9.564149284701e-02} "Fit coefficients in descending total degree order";
  parameter Integer voltageThrustPowersP[36] = {7, 6, 5, 4, 3, 2, 1, 0, 6, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0, 4, 3, 2, 1, 0, 3, 2, 1, 0, 2, 1, 0, 1, 0, 0};
  parameter Integer voltageThrustPowersV[36] = {0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 0, 1, 2, 3, 0, 1, 2, 0, 1, 0};

  Modelica.Blocks.Interfaces.RealInput in_pwm annotation(
    Placement(transformation(origin = {-120, 40}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput in_voltage annotation(
    Placement(transformation(origin = {-120, -40}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput out_thrust_N annotation(
    Placement(transformation(origin = {120, 0}, extent = {{-10, -10}, {10, 10}})));

  Real pwmNormalized "Normalized PWM input to the polynomial";
  Real voltageNormalized "Centered/scaled voltage input to the polynomial";
  Real fittedThrust_N "Raw fitted thrust";
  Real neutralThrust_N "Fitted thrust at pwmNeutral";

equation
  pwmNormalized = (in_pwm - pwmNormCenter)/pwmNormScale;
  voltageNormalized = (in_voltage - voltageModelCenter)/voltageModelScale;
  fittedThrust_N = sum(voltageThrustCoefficients[j]*(pwmNormalized^voltageThrustPowersP[j])*(voltageNormalized^voltageThrustPowersV[j]) for j in 1:36);
  neutralThrust_N = sum(voltageThrustCoefficients[j]*(((pwmNeutral - pwmNormCenter)/pwmNormScale)^voltageThrustPowersP[j])*(voltageNormalized^voltageThrustPowersV[j]) for j in 1:36);
  out_thrust_N = if subtractNeutralThrust then fittedThrust_N - neutralThrust_N else fittedThrust_N;
end BlueROV2H_pwm_voltage_to_force;
