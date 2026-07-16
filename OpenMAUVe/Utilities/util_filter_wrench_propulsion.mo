within OpenMAUVe.Utilities;

model util_filter_wrench_propulsion


  parameter Real cutoff_freq_thruster_filter = 30.0 "Cutoff frequency of the low pass filter of the thruster forces";



  Modelica.Blocks.Interfaces.RealInput in_control_wrench[6] annotation(
    Placement(transformation(origin = {-100, -2}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-114, 0}, extent = {{-14, -14}, {14, 14}})));
  
  
  Modelica.Blocks.Continuous.Filter filter_wrench_1(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-6, 80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_wrench_filtered[6] annotation(
    Placement(transformation(origin = {111, -1}, extent = {{-19, -19}, {19, 19}}), iconTransformation(origin = {114, -2}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Continuous.Filter filter_wrench_2(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-6, 48}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_wrench_3(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-6, 16}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_wrench_4(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-6, -18}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_wrench_5(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-6, -52}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_wrench_6(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-4, -86}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(in_control_wrench[1], filter_wrench_1.u) annotation(
    Line(points = {{-100, -2}, {-48, -2}, {-48, 80}, {-18, 80}}, color = {0, 0, 127}));
  connect(in_control_wrench[2], filter_wrench_2.u) annotation(
    Line(points = {{-100, -2}, {-48, -2}, {-48, 48}, {-18, 48}}, color = {0, 0, 127}));
  connect(in_control_wrench[3], filter_wrench_3.u) annotation(
    Line(points = {{-100, -2}, {-48, -2}, {-48, 16}, {-18, 16}}, color = {0, 0, 127}));
  connect(in_control_wrench[4], filter_wrench_4.u) annotation(
    Line(points = {{-100, -2}, {-48, -2}, {-48, -18}, {-18, -18}}, color = {0, 0, 127}));
  connect(in_control_wrench[5], filter_wrench_5.u) annotation(
    Line(points = {{-100, -2}, {-48, -2}, {-48, -52}, {-18, -52}}, color = {0, 0, 127}));
  connect(in_control_wrench[6], filter_wrench_6.u) annotation(
    Line(points = {{-100, -2}, {-48, -2}, {-48, -86}, {-16, -86}}, color = {0, 0, 127}));
  connect(filter_wrench_1.y, out_wrench_filtered[1]) annotation(
    Line(points = {{6, 80}, {56, 80}, {56, -1}, {111, -1}}, color = {0, 0, 127}));
  connect(filter_wrench_2.y, out_wrench_filtered[2]) annotation(
    Line(points = {{6, 48}, {56, 48}, {56, -1}, {111, -1}}, color = {0, 0, 127}));
  connect(filter_wrench_3.y, out_wrench_filtered[3]) annotation(
    Line(points = {{6, 16}, {30, 16}, {30, -1}, {111, -1}}, color = {0, 0, 127}));
  connect(filter_wrench_4.y, out_wrench_filtered[4]) annotation(
    Line(points = {{6, -18}, {56, -18}, {56, 0}, {112, 0}}, color = {0, 0, 127}));
  connect(filter_wrench_5.y, out_wrench_filtered[5]) annotation(
    Line(points = {{6, -52}, {58, -52}, {58, 0}, {112, 0}}, color = {0, 0, 127}));
  connect(filter_wrench_6.y, out_wrench_filtered[6]) annotation(
    Line(points = {{8, -86}, {56, -86}, {56, 0}, {112, 0}}, color = {0, 0, 127}));

annotation(
    Icon(graphics = {Text(origin = {0, 16}, extent = {{-96, 82}, {96, -82}}, textString = "filter
wrench"), Rectangle(extent = {{-100, 100}, {100, -100}}), Text(origin = {149, 32}, extent = {{-39, 16}, {39, -16}}, textString = "out_filtered_wrench"), Text(origin = {-141, 29}, extent = {{-37, 15}, {37, -15}}, textString = "in_wrench")}),
  Diagram(graphics));
end util_filter_wrench_propulsion;