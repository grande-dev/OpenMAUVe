within Glider_Lib.Sensors;

model PositionAttitudeAndDer
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_Oi annotation(
    Placement(transformation(origin = {-98, 78}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, 78}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_Oe annotation(
    Placement(transformation(origin = {-98, 32}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, 26}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_On annotation(
    Placement(transformation(origin = {-98, -22}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, -30}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_Ob annotation(
    Placement(transformation(origin = {-98, -76}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, -78}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Interfaces.RealOutput positionWrtNED[3] annotation(
    Placement(transformation(origin = {102, 82}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {102, 82}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput positionWrtECI[3] annotation(
    Placement(transformation(origin = {104, 36}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {112, 92}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensorVelocitiesBody(animation = false, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameA.frame_a, get_v = true, get_a = true, get_w = true, get_z = true, get_angles = true, sequence = {3, 2, 1})  annotation(
    Placement(transformation(origin = {-22, -66}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput velocityLinearBody annotation(
    Placement(transformation(origin = {36, -116}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {112, 92}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput velocityAngularBody[3] annotation(
    Placement(transformation(origin = {36, -86}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {122, 102}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(frame_Ob, absoluteSensorVelocitiesBody.frame_a) annotation(
    Line(points = {{-98, -76}, {-55, -76}, {-55, -66}, {-32, -66}}));
  connect(absoluteSensorVelocitiesBody.v, velocityLinearBody) annotation(
    Line(points = {{-28, -77}, {-28, -116}, {36, -116}}, color = {0, 0, 127}));
  connect(absoluteSensorVelocitiesBody.w, velocityAngularBody) annotation(
    Line(points = {{-16, -77}, {-16, -86}, {36, -86}}, color = {0, 0, 127}, thickness = 0.5));
annotation(
    Icon(graphics = {Text(origin = {-64, 85}, extent = {{-22, 11}, {22, -11}}, textString = "{O_i}"), Text(origin = {-64, 31}, extent = {{-22, 11}, {22, -11}}, textString = "{O_e}"), Text(origin = {-62, -27}, extent = {{-22, 11}, {22, -11}}, textString = "{O_n}"), Text(origin = {-60, -79}, extent = {{-22, 11}, {22, -11}}, textString = "{O_b}")}));
end PositionAttitudeAndDer;