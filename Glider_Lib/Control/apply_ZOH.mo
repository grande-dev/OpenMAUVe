within Glider_Lib.Control;

model apply_ZOH
  parameter Real controller_sampling_time(unit="s") = 0.1;

  Modelica.Blocks.Interfaces.RealInput u1_unsampled annotation(
    Placement(transformation(origin = {-100, 74}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-112, 74}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput u2_unsampled annotation(
    Placement(transformation(origin = {-100, 20}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-112, 28}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput u3_unsampled annotation(
    Placement(transformation(origin = {-100, -26}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-112, -16}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput u4_unsampled annotation(
    Placement(transformation(origin = {-100, -78}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-112, -68}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput u1_sampled annotation(
    Placement(transformation(origin = {99, 75}, extent = {{-17, -17}, {17, 17}}), iconTransformation(origin = {108, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput u2_sampled annotation(
    Placement(transformation(origin = {99, 21}, extent = {{-19, -19}, {19, 19}}), iconTransformation(origin = {108, 20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput u3_sampled annotation(
    Placement(transformation(origin = {100, -26}, extent = {{-18, -18}, {18, 18}}), iconTransformation(origin = {108, -18}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput u4_sampled annotation(
    Placement(transformation(origin = {101, -77}, extent = {{-19, -19}, {19, 19}}), iconTransformation(origin = {108, -56}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Discrete.ZeroOrderHold zeroOrderHold_u1(samplePeriod = controller_sampling_time)  annotation(
    Placement(transformation(origin = {2, 74}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Discrete.ZeroOrderHold zeroOrderHold_u2(samplePeriod = controller_sampling_time)  annotation(
    Placement(transformation(origin = {2, 20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Discrete.ZeroOrderHold zeroOrderHold_u3(samplePeriod = controller_sampling_time)  annotation(
    Placement(transformation(origin = {2, -26}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Discrete.ZeroOrderHold zeroOrderHold_u4(samplePeriod = controller_sampling_time)  annotation(
    Placement(transformation(origin = {2, -78}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(u1_unsampled, zeroOrderHold_u1.u) annotation(
    Line(points = {{-100, 74}, {-10, 74}}, color = {0, 0, 127}));
  connect(zeroOrderHold_u1.y, u1_sampled) annotation(
    Line(points = {{13, 74}, {99, 74}, {99, 75}}, color = {0, 0, 127}));
  connect(u2_unsampled, zeroOrderHold_u2.u) annotation(
    Line(points = {{-100, 20}, {-10, 20}}, color = {0, 0, 127}));
  connect(zeroOrderHold_u2.y, u2_sampled) annotation(
    Line(points = {{13, 20}, {99, 20}, {99, 21}}, color = {0, 0, 127}));
  connect(u3_unsampled, zeroOrderHold_u3.u) annotation(
    Line(points = {{-100, -26}, {-10, -26}}, color = {0, 0, 127}));
  connect(zeroOrderHold_u3.y, u3_sampled) annotation(
    Line(points = {{14, -26}, {100, -26}}, color = {0, 0, 127}));
  connect(u4_unsampled, zeroOrderHold_u4.u) annotation(
    Line(points = {{-100, -78}, {-10, -78}}, color = {0, 0, 127}));
  connect(zeroOrderHold_u4.y, u4_sampled) annotation(
    Line(points = {{14, -78}, {101, -78}, {101, -77}}, color = {0, 0, 127}));
end apply_ZOH;