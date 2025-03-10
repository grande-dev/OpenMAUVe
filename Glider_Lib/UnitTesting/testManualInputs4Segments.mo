within Glider_Lib.UnitTesting;

model testManualInputs4Segments
  Glider_Lib.Control.ManualInputs.manualInputs4Segments ref_VBD(init_offset = 0, ramp_segment1_duration = 10, ramp_segment1_height = 1.36, ramp_segment1_st_time = 0, ramp_segment2_duration = 10, ramp_segment2_height = -0.72, ramp_segment2_st_time = 500, ramp_segment3_duration = 10, ramp_segment3_height = 0.72, ramp_segment3_st_time = 1000, ramp_segment4_duration = 10, ramp_segment4_height = -0.72, ramp_segment4_st_time = 1500) annotation(
    Placement(transformation(origin = {-17, 53}, extent = {{-21, -21}, {21, 21}})));
  Glider_Lib.Control.ManualInputs.manualInputs4Segments ref_m_s(init_offset = 0, ramp_segment1_duration = 10, ramp_segment1_height = 0.0041, ramp_segment1_st_time = 0, ramp_segment2_duration = 10, ramp_segment2_height = -0.0082, ramp_segment2_st_time = 500, ramp_segment3_duration = 10, ramp_segment3_height = 0.0261, ramp_segment3_st_time = 1000, ramp_segment4_duration = 10, ramp_segment4_height = -0.044, ramp_segment4_st_time = 1500) annotation(
    Placement(transformation(origin = {-16, -24}, extent = {{-20, -20}, {20, 20}})));
equation
  annotation(
    experiment(StopTime = 2000, Interval = 0.1, Tolerance = 1e-06));
end testManualInputs4Segments;