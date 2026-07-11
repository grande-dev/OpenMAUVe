within OpenMAUVe.VerificationSimulator;

model BlueROV2H_in_pwm_out_forces "Convert MAVROS-order BlueROV2H motor PWM commands to thruster forces and wrench"
  parameter Real pwmNeutral = 1500.0 "Neutral PWM value [us]";
  parameter Boolean zeroPwmMeansNeutral = true "Treat a 0 PWM channel as neutral/unset";

  parameter Real tam[6, 8] = [
    0.7071067811847431, 0.7071067811847431, -0.7071067811919607, -0.7071067811919607, 0.0, 0.0, 0.0, 0.0;
    0.7071067811883519, -0.7071067811883519, 0.7071067811811348, -0.7071067811811348, 0.0, 0.0, 0.0, 0.0;
    0.0, 0.0, 0.0, 0.0, 1.0000000000000002, 1.0000000000000002, 1.0000000000000002, 1.0000000000000002;
    0.05126524163615552, -0.051265241636155506, 0.05126524163563227, -0.05126524163563226, -0.21805000000000005, -0.21805000000000005, 0.21805000000000005, 0.21805000000000005;
    -0.05126524163589388, -0.051265241635893875, 0.051265241636417144, 0.05126524163641714, -0.1199999999999745, 0.12000000000002554, -0.11999999999997452, 0.12000000000002554;
    0.166523646969496, -0.166523646969496, -0.17500892834341342, 0.17500892834341344, 0.0, 0.0, 0.0, 0.0] "Thruster allocation matrix tau = TAM*f";

  final parameter Integer nPolynomialTerms = 35 "Number of PWM-voltage polynomial terms";
  parameter Real thrustCoefficients[nPolynomialTerms] = {
    -2.3366925328058912e+05,
    4.8578708380112857e+03,
    1.1002904914374028e+03,
    -3.2580156236642813e+02,
    -1.3891035415162154e+01,
    -2.2295203307180063e+00,
    2.1453580956518007e+01,
    5.2535797665951145e-01,
    1.8530196510701622e-02,
    2.5045004728299325e-03,
    -1.1629399930102557e+00,
    -1.3786155213044141e-02,
    -5.5919276770913793e-04,
    -1.2755709249933480e-05,
    -1.6833660714822964e-06,
    3.1228941717786937e-02,
    8.3380403952999782e-04,
    -1.1780593266166580e-06,
    4.1074683532809679e-07,
    4.1634257930653825e-09,
    6.7763589878607676e-10,
    -3.1910077159484938e-04,
    -2.3214026532774653e-05,
    -2.3909848470603414e-09,
    1.6732779714852919e-10,
    -1.4369277798188853e-10,
    -4.6704494524318967e-13,
    -1.5134707060528716e-13,
    2.1273384772989957e-07,
    1.5964880361666851e-09,
    -2.4410770482623700e-11,
    2.5907240149321433e-13,
    1.8057276579253301e-14,
    -1.7072080792251717e-17,
    1.4464879145477393e-17} "Force_N polynomial coefficients";
  parameter Integer pwmPowers[nPolynomialTerms] = {
    0,
    0, 1,
    0, 1, 2,
    0, 1, 2, 3,
    0, 1, 2, 3, 4,
    0, 1, 2, 3, 4, 5,
    0, 1, 2, 3, 4, 5, 6,
    1, 2, 3, 4, 5, 6, 7} "PWM_us exponent for each polynomial term";
  parameter Integer voltagePowers[nPolynomialTerms] = {
    0,
    1, 0,
    2, 1, 0,
    3, 2, 1, 0,
    4, 3, 2, 1, 0,
    5, 4, 3, 2, 1, 0,
    6, 5, 4, 3, 2, 1, 0,
    6, 5, 4, 3, 2, 1, 0} "Voltage_V exponent for each polynomial term";

  Modelica.Blocks.Interfaces.RealInput in_pwm[8] annotation(
    Placement(transformation(origin = {-140, 40}, extent = {{-20, -70}, {20, 70}}), iconTransformation(origin = {-140, 40}, extent = {{-20, -70}, {20, 70}})));
  Modelica.Blocks.Interfaces.RealInput in_voltage annotation(
    Placement(transformation(origin = {-140, -78}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-140, -78}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput out_thruster_force[8] annotation(
    Placement(transformation(origin = {140, 48}, extent = {{-10, -70}, {10, 70}}), iconTransformation(origin = {140, 48}, extent = {{-10, -70}, {10, 70}})));
  Modelica.Blocks.Interfaces.RealOutput out_wrench[6] annotation(
    Placement(transformation(origin = {140, -70}, extent = {{-10, -50}, {10, 50}}), iconTransformation(origin = {140, -70}, extent = {{-10, -50}, {10, 50}})));

  Real pwmUsed[8] "PWM value used by the polynomial after neutral handling";
  Real polynomialForce_N[8] "Raw polynomial force for each MAVROS-order thruster [N]";

equation
  for i in 1:8 loop
    pwmUsed[i] = if zeroPwmMeansNeutral and abs(in_pwm[i]) < 1e-9 then pwmNeutral else in_pwm[i];
    polynomialForce_N[i] = sum(thrustCoefficients[j]*(pwmUsed[i]^pwmPowers[j])*(in_voltage^voltagePowers[j]) for j in 1:nPolynomialTerms);
    out_thruster_force[i] = polynomialForce_N[i];
  end for;

  for j in 1:6 loop
    out_wrench[j] = sum(tam[j, i]*out_thruster_force[i] for i in 1:8);
  end for;

  annotation(
    Diagram(coordinateSystem(extent = {{-180, -140}, {180, 140}})),
    Icon(coordinateSystem(extent = {{-180, -140}, {180, 140}})));
end BlueROV2H_in_pwm_out_forces;
