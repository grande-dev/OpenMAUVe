within OpenMAUVe.Control.ManualInputs;
model manualInputs2Segments "A model to define an input with two successive ramps."

  parameter Real init_offset = 0 "Initial value of the manual input";
  parameter Real ramp_segment1_height = 0 "First ramp final value";
  parameter Real ramp_segment1_st_time = 0 "First ramp starting time";
  parameter Real ramp_segment1_duration = 0 "First ramp: duration of the ramp";
  parameter Real ramp_segment2_height = 0 "Second ramp final value";
  parameter Real ramp_segment2_st_time = 0 "Second ramp starting time";
  parameter Real ramp_segment2_duration = 0 "Second ramp: duration of the ramp";

  Modelica.Blocks.Sources.Ramp ramp1(height = ramp_segment1_height, startTime = ramp_segment1_st_time, duration = ramp_segment1_duration)  annotation(
    Placement(transformation(origin = {-74, 2}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant value_init(k = init_offset)  annotation(
    Placement(transformation(origin = {-74, 44}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add1 annotation(
    Placement(transformation(origin = {-6, 40}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add2 annotation(
    Placement(transformation(origin = {38, -6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Ramp ramp2(duration = ramp_segment2_duration, height = ramp_segment2_height, startTime = ramp_segment2_st_time) annotation(
    Placement(transformation(origin = {-72, -44}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_value annotation(
    Placement(transformation(origin = {106, -6}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {106, -6}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(value_init.y, add1.u1) annotation(
    Line(points = {{-62, 44}, {-18, 44}, {-18, 46}}, color = {0, 0, 127}));
  connect(ramp1.y, add1.u2) annotation(
    Line(points = {{-62, 2}, {-48, 2}, {-48, 34}, {-18, 34}}, color = {0, 0, 127}));
  connect(add1.y, add2.u1) annotation(
    Line(points = {{6, 40}, {12, 40}, {12, 0}, {26, 0}}, color = {0, 0, 127}));
  connect(ramp2.y, add2.u2) annotation(
    Line(points = {{-60, -44}, {-24, -44}, {-24, -12}, {26, -12}}, color = {0, 0, 127}));
  connect(add2.y, out_value) annotation(
    Line(points = {{50, -6}, {106, -6}}, color = {0, 0, 127}));
end manualInputs2Segments;
