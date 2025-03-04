within Glider_Lib.Sensors;

model PositionAttitudeAndDer

  Real[3] Euler_dot;

  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_Oi annotation(
    Placement(transformation(origin = {-98, 78}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, 78}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_Oe annotation(
    Placement(transformation(origin = {-98, 32}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, 26}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_On annotation(
    Placement(transformation(origin = {-98, -22}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, -30}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_Ob annotation(
    Placement(transformation(origin = {-98, -76}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, -78}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Interfaces.RealOutput positionWrtNED[3] annotation(
    Placement(transformation(origin = {76, -54}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {94, 60}, extent = {{-10, -10}, {10, 10}})));
  
  Modelica.Blocks.Continuous.Integrator integrator_EA_1 annotation(
    Placement(transformation(origin = {82, 85}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_2 annotation(
    Placement(transformation(origin = {84, 50}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_3 annotation(
    Placement(transformation(origin = {85, 12}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput velocityLinearBody[3] annotation(
    Placement(transformation(origin = {36, -116}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {96, -48}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput velocityAngularBody[3] annotation(
    Placement(transformation(origin = {36, -86}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {98, -80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor relativeSensorOnOb(animation = false, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, get_r_rel = true, get_v_rel = true, get_a_rel = false, get_w_rel = true, get_z_rel = false, get_angles = false, sequence = {3, 2, 1})  annotation(
    Placement(transformation(origin = {6, -22}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_angles_DCM[3] annotation(
    Placement(transformation(origin = {136, 50}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {96, 10}, extent = {{-10, -10}, {10, 10}})));
equation
/*
  Euler_dot = frame_Ob.R.T*absoluteSensorVelocitiesBody.w;
  integrator_EA_1.u = Euler_dot[1];
  integrator_EA_2.u = Euler_dot[2];
  integrator_EA_3.u = Euler_dot[3];
  */
  connect(frame_On, relativeSensorOnOb.frame_a) annotation(
    Line(points = {{-98, -22}, {-4, -22}}));
  connect(relativeSensorOnOb.frame_b, frame_Ob) annotation(
    Line(points = {{16, -22}, {36, -22}, {36, -46}, {-60, -46}, {-60, -76}, {-98, -76}}, color = {95, 95, 95}));
  connect(relativeSensorOnOb.r_rel, positionWrtNED) annotation(
    Line(points = {{-4, -32}, {-4, -54}, {76, -54}}, color = {0, 0, 127}, thickness = 0.5));
  connect(integrator_EA_1.y, out_angles_DCM[1]) annotation(
    Line(points = {{94, 86}, {108, 86}, {108, 50}, {136, 50}}, color = {0, 0, 127}));
  connect(integrator_EA_2.y, out_angles_DCM[2]) annotation(
    Line(points = {{96, 50}, {136, 50}}, color = {0, 0, 127}));
  connect(integrator_EA_3.y, out_angles_DCM[3]) annotation(
    Line(points = {{96, 12}, {108, 12}, {108, 50}, {136, 50}}, color = {0, 0, 127}));
  connect(relativeSensorOnOb.v_rel, velocityAngularBody) annotation(
    Line(points = {{0, -32}, {0, -86}, {36, -86}}, color = {0, 0, 127}, thickness = 0.5));
  connect(relativeSensorOnOb.w_rel, velocityLinearBody) annotation(
    Line(points = {{12, -32}, {12, -116}, {36, -116}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(
    Icon(graphics = {Text(origin = {-64, 85}, extent = {{-22, 11}, {22, -11}}, textString = "{O_i}"), Text(origin = {-64, 31}, extent = {{-22, 11}, {22, -11}}, textString = "{O_e}"), Text(origin = {-62, -27}, extent = {{-22, 11}, {22, -11}}, textString = "{O_n}"), Text(origin = {-60, -79}, extent = {{-22, 11}, {22, -11}}, textString = "{O_b}"), Text(origin = {70, -79}, extent = {{-22, 11}, {22, -11}}, textString = "w"), Text(origin = {70, -47}, extent = {{-22, 11}, {22, -11}}, textString = "v"), Text(origin = {50, 89}, extent = {{-22, 11}, {22, -11}}, textString = "pos_ECI"), Text(origin = {50, 59}, extent = {{-22, 11}, {22, -11}}, textString = "pos_NED"), Text(origin = {44, 11}, extent = {{-38, 15}, {38, -15}}, textString = "out_angles_DCM")}));
end PositionAttitudeAndDer;