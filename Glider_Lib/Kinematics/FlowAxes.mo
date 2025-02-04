within Glider_Lib.Kinematics;

model FlowAxes
  import SI = Modelica.Units.SI;
  SI.Velocity relative_velocity[3];
  SI.Velocity speed_body_frame[3];
  SI.Angle alpha;
  SI.Angle beta;
  Real alpha_deg(unit = "deg");
  Real beta_deg(unit = "deg");
  SI.Angle chi;  // course angle χ
  SI.Velocity U_r; // magnitude of the relative speed vector of the vehicle wrt to the fluid in body-fixed frame
  SI.Velocity u_r;
  SI.Velocity v_r;
  SI.Velocity w_r;
  Real[3] Euler_dot;
  
  Modelica.Blocks.Interfaces.RealInput env_current_speed[3] annotation(
    Placement(transformation(origin = {6, 80}, extent = {{-20, -20}, {20, 20}}, rotation = -90), iconTransformation(origin = {0, 94}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Modelica.Blocks.Interfaces.RealOutput flow_frame_angles[2] annotation(
    Placement(transformation(origin = {110, 70}, extent = {{-18, -18}, {18, 18}}), iconTransformation(origin = {96, 10}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_ECI annotation(
    Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-102, 74}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_Ob annotation(
    Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {98, 78}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor sensorCoBWrtEci(animation = false, get_r_rel = true, get_v_rel = true, get_angles = true, sequence = {3, 2, 1}, get_w_rel = true)  annotation(
    Placement(transformation(origin = {8, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_1 annotation(
    Placement(transformation(origin = {41, -43}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_2 annotation(
    Placement(transformation(origin = {41, -71}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_3 annotation(
    Placement(transformation(origin = {41, -97}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Interfaces.RealOutput out_angles_DCM[3] annotation(
    Placement(transformation(origin = {102, -58}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {98, -94}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput flowspeed annotation(
    Placement(transformation(origin = {110, 32}, extent = {{-18, -18}, {18, 18}}), iconTransformation(origin = {98, -44}, extent = {{-10, -10}, {10, 10}})));
equation
  speed_body_frame = sensorCoBWrtEci.v_rel;
  relative_velocity =  speed_body_frame - env_current_speed;  // eq. 2.120 ref #116
  U_r = Modelica.Math.Vectors.norm(relative_velocity, 2);
  u_r = relative_velocity[1];
  v_r = relative_velocity[2];
  w_r = relative_velocity[3];
  alpha = atan2(w_r, u_r);
  beta = asin(v_r / U_r);
  alpha_deg = Modelica.Units.Conversions.to_deg(alpha);
  beta_deg = Modelica.Units.Conversions.to_deg(beta);
  flow_frame_angles={alpha,beta};
  flowspeed = U_r;
  
  
  // calculation of the course angle
  Euler_dot = frame_Ob.R.T*sensorCoBWrtEci.w_rel; // this was hull.frame_a.R.T*hull.w_a
  
  integrator_EA_1.u = Euler_dot[1]; // phi
  integrator_EA_2.u = Euler_dot[2]; // theta
  integrator_EA_3.u = Euler_dot[3]; // psi
  chi = beta + Euler_dot[3]; // definition (2.96) reference #116
  
  
  
  connect(frame_ECI, sensorCoBWrtEci.frame_a) annotation(
    Line(points = {{-100, 0}, {-2, 0}}));
  connect(sensorCoBWrtEci.frame_b, frame_Ob) annotation(
    Line(points = {{18, 0}, {100, 0}}, color = {95, 95, 95}));
  connect(integrator_EA_1.y, out_angles_DCM[1]) annotation(
    Line(points = {{48, -42}, {64, -42}, {64, -58}, {102, -58}}, color = {0, 0, 127}));
  connect(integrator_EA_2.y, out_angles_DCM[2]) annotation(
    Line(points = {{48, -70}, {64, -70}, {64, -58}, {102, -58}}, color = {0, 0, 127}));
  connect(integrator_EA_3.y, out_angles_DCM[3]) annotation(
    Line(points = {{48, -96}, {64, -96}, {64, -58}, {102, -58}}, color = {0, 0, 127}));

annotation(
    Icon(graphics = {Text(origin = {5, 62}, extent = {{-45, 18}, {45, -18}}, textString = "speed of the current
in body-fixed frame"), Text(origin = {-124, 108}, extent = {{-34, 14}, {34, -14}}, textString = "{O_i}"), Text(origin = {124, 112}, extent = {{-34, 14}, {34, -14}}, textString = "{O_b}"), Text(origin = {118, 30}, extent = {{-34, 14}, {34, -14}}, textString = "alpha and beta"), Text(origin = {120, -114}, extent = {{-34, 14}, {34, -14}}, textString = "Euler angles"), Text(origin = {118, -26}, extent = {{-34, 14}, {34, -14}}, textString = "flowspeed")}));
end FlowAxes;