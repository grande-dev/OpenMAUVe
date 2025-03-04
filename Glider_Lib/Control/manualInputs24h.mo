within Glider_Lib.Control;

model manualInputs24h

  import SI = Modelica.Units.SI;


  parameter Real init_offset = 0 "Initial value of the manual input";
  parameter Real ramp_segment1_height = 0 "First ramp final value";
  parameter Real ramp_segment1_st_time = 0 "First ramp starting time";
  parameter Real ramp_segment1_duration = 0 "First ramp: duration of the ramp";
  parameter Real ramp_segment2_height = 0 "Second ramp final value";
  parameter Real ramp_segment2_st_time = 0 "Second ramp starting time";
  parameter Real ramp_segment2_duration = 0 "Second ramp: duration of the ramp";  

  parameter Real target_max_depth = 0 "Maximum intended depth before starting a new climb";
  parameter Real target_min_depth = 0 "Minimum intended depth before starting a new dive";
  
  parameter Real initial_depth = 0 "Initial location wrt to ECEF -- ideally this is pulled from the 'Init Kinematics' of the vehicle";
  
  

  Modelica.Blocks.Sources.Ramp ramp1(height = ramp_segment1_height, startTime = ramp_segment1_st_time, duration = ramp_segment1_duration)  annotation(
    Placement(transformation(origin = {-64, 4}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Constant value_init(k = init_offset)  annotation(
    Placement(transformation(origin = {-64, 46}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add1 annotation(
    Placement(transformation(origin = {-6, 40}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add2 annotation(
    Placement(transformation(origin = {38, -6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Ramp ramp2(duration = ramp_segment2_duration, height = ramp_segment2_height, startTime = ramp_segment2_st_time) annotation(
    Placement(transformation(origin = {-62, -42}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_value annotation(
    Placement(transformation(origin = {106, -6}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {106, -6}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealInput in_depth annotation(
    Placement(transformation(origin = {-116, 0}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-104, 0}, extent = {{-20, -20}, {20, 20}})));
equation

  

  connect(value_init.y, add1.u1) annotation(
    Line(points = {{-53, 46}, {-18, 46}}, color = {0, 0, 127}));
  connect(ramp1.y, add1.u2) annotation(
    Line(points = {{-53, 4}, {-48, 4}, {-48, 34}, {-18, 34}}, color = {0, 0, 127}));
  connect(add1.y, add2.u1) annotation(
    Line(points = {{6, 40}, {12, 40}, {12, 0}, {26, 0}}, color = {0, 0, 127}));
  connect(ramp2.y, add2.u2) annotation(
    Line(points = {{-51, -42}, {-24, -42}, {-24, -12}, {26, -12}}, color = {0, 0, 127}));
  connect(add2.y, out_value) annotation(
    Line(points = {{50, -6}, {106, -6}}, color = {0, 0, 127}));
end manualInputs24h;