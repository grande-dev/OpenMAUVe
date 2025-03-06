within Glider_Lib.Control;

model manualInputs24h

  import SI = Modelica.Units.SI;
  
  parameter Real dive_VBD_ref = 1.36;
  parameter Real dive_ms_ref = 0.0041;
  parameter Real climb_VBD_ref = 0.64;
  parameter Real climb_ms_ref = -0.0041;  
  parameter Real mr_turn_ref = 35 "deg";  


  parameter Real target_max_depth = 200 "Maximum intended depth before starting a new climb";
  parameter Real target_min_depth = 20 "Minimum intended depth before starting a new dive";

  parameter Real number_yos_before_tuning = 3;

  Boolean dive (start = true);
  Boolean change_ref (start = false);
  Boolean full_yaw_completed (start = false);
  Integer num_semi_yos_completed (start = 0);
  Integer num_yos_completed (start = 0);

  Real ref_m_r;
  
  Modelica.Blocks.Interfaces.RealInput in_depth annotation(
    Placement(transformation(origin = {-200, 50}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-200, 50}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput out_VBD  annotation(
    Placement(transformation(origin = {204, 130}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {204, 130}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_m_s annotation(
    Placement(transformation(origin = {204, -4}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {204, -4}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_m_r annotation(
    Placement(transformation(origin = {204, -106}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {206, -134}, extent = {{-10, -10}, {10, 10}})));


algorithm

  if change_ref == true then 
    num_semi_yos_completed := num_semi_yos_completed +1;
    if num_semi_yos_completed == number_yos_before_tuning+1 then 
      num_semi_yos_completed := 0;
    end if;
  end if;
  
  if full_yaw_completed == true then 
    num_yos_completed := num_yos_completed +1;
  end if;

  if (dive==true) then 
    if abs(in_depth) <= target_max_depth then 
      out_m_s := dive_ms_ref;
      out_VBD := dive_VBD_ref; 
      ref_m_r := 0.0;
      change_ref := false;
      full_yaw_completed := false;
    else 
      out_m_s := climb_ms_ref;
      out_VBD := climb_VBD_ref;
      ref_m_r := 0.0;
      dive := false;
      change_ref := true;
      full_yaw_completed := false;
    end if;
  
  else
    if (abs(in_depth) >= target_min_depth) then 
      out_m_s := climb_ms_ref;
      out_VBD := climb_VBD_ref;
      
      if (num_semi_yos_completed < number_yos_before_tuning) then 
        ref_m_r := 0.0;
      else 
        ref_m_r := mr_turn_ref;
      end if;
      
      change_ref := false;  
      full_yaw_completed := false;
    else
      out_m_s := dive_ms_ref;
      out_VBD := dive_VBD_ref; 
      ref_m_r := 0.0;
      dive := true;
      change_ref := true;  
      full_yaw_completed := true;
    end if;
  end if;


equation

  out_m_r = ref_m_r;


  

  annotation(
    Diagram(coordinateSystem(extent = {{-200, -200}, {200, 200}})),
    Icon(coordinateSystem(extent = {{-200, -200}, {200, 200}})));
end manualInputs24h;