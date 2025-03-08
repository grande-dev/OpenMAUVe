within Glider_Lib.Control.ManualInputs;

model manualInputs4Segments "A model to define an input with four successive ramps."

  parameter Real init_offset = 0 "Initial value of the manual input";
  parameter Real ramp_segment1_height = 0 "First ramp final value";
  parameter Real ramp_segment1_st_time = 0 "First ramp starting time";
  parameter Real ramp_segment1_duration = 0 "First ramp: duration of the ramp";
  parameter Real ramp_segment2_height = 0 "Second ramp final value";
  parameter Real ramp_segment2_st_time = 0 "Second ramp starting time";
  parameter Real ramp_segment2_duration = 0 "Second ramp: duration of the ramp";  
  
  parameter Real ramp_segment3_height = 0 "Third ramp final value";
  parameter Real ramp_segment3_st_time = 0 "Third ramp starting time";
  parameter Real ramp_segment3_duration = 0 "Third ramp: duration of the ramp";  
  
  
  parameter Real ramp_segment4_height = 0 "Fourth ramp final value";
  parameter Real ramp_segment4_st_time = 0 "Fourth ramp starting time";
  parameter Real ramp_segment4_duration = 0 "Fourth ramp: duration of the ramp";  

  Modelica.Blocks.Sources.Ramp ramp1(height = ramp_segment1_height, startTime = ramp_segment1_st_time, duration = ramp_segment1_duration)  annotation(
    Placement(transformation(origin = {-88, 46}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant value_init(k = init_offset)  annotation(
    Placement(transformation(origin = {-88, 88}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add1 annotation(
    Placement(transformation(origin = {-46, 82}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add2 annotation(
    Placement(transformation(origin = {-14, 44}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Ramp ramp2(duration = ramp_segment2_duration, height = ramp_segment2_height, startTime = ramp_segment2_st_time) annotation(
    Placement(transformation(origin = {-86, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_value annotation(
    Placement(transformation(origin = {110, -68}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {106, -6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add3 annotation(
    Placement(transformation(origin = {20, 4}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add4 annotation(
    Placement(transformation(origin = {54, -22}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Ramp ramp3(duration = ramp_segment3_duration, height = ramp_segment3_height, startTime = ramp_segment3_st_time) annotation(
    Placement(transformation(origin = {-84, -38}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Ramp ramp4(duration = ramp_segment4_duration, height = ramp_segment4_height, startTime = ramp_segment4_st_time) annotation(
    Placement(transformation(origin = {-82, -80}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(value_init.y, add1.u1) annotation(
    Line(points = {{-77, 88}, {-58, 88}}, color = {0, 0, 127}));
  connect(ramp1.y, add1.u2) annotation(
    Line(points = {{-77, 46}, {-63, 46}, {-63, 76}, {-58, 76}}, color = {0, 0, 127}));
  connect(add1.y, add2.u1) annotation(
    Line(points = {{-35, 82}, {-31, 82}, {-31, 50}, {-26, 50}}, color = {0, 0, 127}));
  connect(ramp2.y, add2.u2) annotation(
    Line(points = {{-75, 0}, {-39, 0}, {-39, 38}, {-26, 38}}, color = {0, 0, 127}));
  connect(add2.y, add3.u1) annotation(
    Line(points = {{-2, 44}, {2, 44}, {2, 10}, {8, 10}}, color = {0, 0, 127}));
  connect(add3.y, add4.u1) annotation(
    Line(points = {{32, 4}, {36, 4}, {36, -16}, {42, -16}}, color = {0, 0, 127}));
  connect(ramp3.y, add3.u2) annotation(
    Line(points = {{-72, -38}, {-22, -38}, {-22, -2}, {8, -2}}, color = {0, 0, 127}));
  connect(ramp4.y, add4.u2) annotation(
    Line(points = {{-70, -80}, {4, -80}, {4, -28}, {42, -28}}, color = {0, 0, 127}));
  connect(add4.y, out_value) annotation(
    Line(points = {{66, -22}, {80, -22}, {80, -68}, {110, -68}}, color = {0, 0, 127}));
end manualInputs4Segments;