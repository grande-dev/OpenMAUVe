within OpenMAUVe.Control.ManualInputs;
model manualInputsRepeatYoControlHeading

  import SI = Modelica.Units.SI;

  parameter Real dive_VBD_ref = 1.36;
  parameter Real dive_ms_ref = 0.0041;
  parameter Real climb_VBD_ref = 0.64;
  parameter Real climb_ms_ref = -0.0041;
  parameter Real yaw_ref_1 = 25.0; //Modelica.Units.Conversions.from_deg(10.0) "deg";
  parameter Real yaw_ref_2 = 115.0; // Modelica.Units.Conversions.from_deg(75.0) "deg";
  parameter Real yaw_ref_3 = -25.0; // Modelica.Units.Conversions.from_deg(75.0) "deg";
  parameter Real yaw_ref_4 = -115.0; // Modelica.Units.Conversions.from_deg(75.0) "deg";

  

  parameter Real target_max_depth = 200 "Maximum intended depth before starting a new climb";
  parameter Real target_min_depth = 20 "Minimum intended depth before starting a new dive";

  parameter Integer number_yos_before_turning = 3;

  Boolean dive( start = true) "1=true, 0=climb";
  Boolean change_ref( start = false);
  Boolean full_yo_completed( start = false);
  Integer num_semi_yos_completed( start = 0);
  Integer num_yos_completed_since_last_heading_change( start = 0);
  Integer num_yos_completed_overall( start = 0);

  Real ref_yaw;

  Modelica.Blocks.Interfaces.RealInput in_depth annotation(
    Placement(transformation(origin = {-200, 50}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-200, 50}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput out_VBD  annotation(
    Placement(transformation(origin = {204, 130}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {204, 130}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_m_s annotation(
    Placement(transformation(origin = {204, -4}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {204, -4}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_m_r annotation(
    Placement(transformation(origin = {204, -106}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {206, -134}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealInput in_yaw_measured annotation(
    Placement(transformation(origin = {-200, -68}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-196, -118}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Math.Gain enable_control(k = 1)  annotation(
    Placement(transformation(origin = {-8, -30}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.UnitConversions.To_deg in_yaw_measured_to_deg annotation(
    Placement(transformation(origin = {-146, -68}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.LimPID PID1(k = 3.0, controllerType = Modelica.Blocks.Types.SimpleController.PD, Ti = 4500, Td = 10.0, yMax = 50.0, yMin = -50.0)  annotation(
    Placement(transformation(origin = {-60, -30}, extent = {{-10, -10}, {10, 10}})));
algorithm

  if change_ref == true then
    num_semi_yos_completed := num_semi_yos_completed +1;
    if (num_semi_yos_completed == number_yos_before_turning+1) then
      num_semi_yos_completed := 0;
    end if;
  end if;

  if full_yo_completed == true then
    num_yos_completed_since_last_heading_change := num_yos_completed_since_last_heading_change +1;
    num_yos_completed_overall := num_yos_completed_overall + 1;
  end if;


  if (num_yos_completed_since_last_heading_change < 2) then
    ref_yaw := yaw_ref_1;
  else 
    if (num_yos_completed_since_last_heading_change < 4) then
      ref_yaw := yaw_ref_2;
    else 
      if (num_yos_completed_since_last_heading_change < 6) then
        ref_yaw := yaw_ref_3;
      else 
        if (num_yos_completed_since_last_heading_change < 8) then
          ref_yaw := yaw_ref_4;
        else 
          num_yos_completed_since_last_heading_change := 0; // resetting scenario
        end if;
        
      end if;
    end if;
  end if;


  if (dive==true) then

    if abs(in_depth) <= target_max_depth then
      out_m_s := dive_ms_ref;
      out_VBD := dive_VBD_ref;
      change_ref := false;
      full_yo_completed := false;
    else
      out_m_s := climb_ms_ref;
      out_VBD := climb_VBD_ref;
      dive := false;
      change_ref := true;
      full_yo_completed := false;
    end if;

  else
    if (abs(in_depth) >= target_min_depth) then
      out_m_s := climb_ms_ref;
      out_VBD := climb_VBD_ref;
      change_ref := false;
      full_yo_completed := false;
    else
      out_m_s := dive_ms_ref;
      out_VBD := dive_VBD_ref;
      dive := true;
      change_ref := true;
      full_yo_completed := true;
    end if;
  end if;

equation
  PID1.u_s = ref_yaw;
// reference
  connect(enable_control.y, out_m_r) annotation(
    Line(points = {{4, -30}, {76, -30}, {76, -106}, {204, -106}}, color = {0, 0, 127}));
  connect(in_yaw_measured, in_yaw_measured_to_deg.u) annotation(
    Line(points = {{-200, -68}, {-158, -68}}, color = {0, 0, 127}));
  connect(PID1.y, enable_control.u) annotation(
    Line(points = {{-48, -30}, {-20, -30}}, color = {0, 0, 127}));
  connect(in_yaw_measured_to_deg.y, PID1.u_m) annotation(
    Line(points = {{-134, -68}, {-60, -68}, {-60, -42}}, color = {0, 0, 127}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}}), graphics),
    Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}}), graphics = {Text(origin = {-118, 50}, extent = {{-80, 24}, {80, -24}}, textString = "measured 
depth"), Text(origin = {-112, -112}, extent = {{-80, 24}, {80, -24}}, textString = "measured 
yaw")}));
end manualInputsRepeatYoControlHeading;