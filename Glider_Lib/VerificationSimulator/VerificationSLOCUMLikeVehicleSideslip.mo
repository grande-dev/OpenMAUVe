within Glider_Lib.VerificationSimulator;

model VerificationSLOCUMLikeVehicleSideslip "This model test a single yo for the SLOCUM like glider as described in #72."

  import Modelica.Units.SI;

  parameter SI.Time ramp1_start = 0.0;
  parameter SI.Time ramp2_start = 300.0;
  parameter SI.Time ramps_duration = 10.0;


  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0)  annotation(
    Placement(transformation(origin = {-41, 65}, extent = {{-5, -5}, {5, 5}})));
  Vehicles.gliderSLOCUMLike gliderSLOCUMLike(  r_0 = {0, 0, 10000}, v_0 = {0.1, 0, 0.2}, enableAddedMassEffects = false, K_Ome_2_1 = 0, K_Ome_2_2 = 0)  annotation(
    Placement(transformation(origin = {27, 2}, extent = {{-40, -37}, {40, 37}})));
  Control.ManualInputs.manualInputs2Segments in_VBD(ramp_segment1_height = 1.047, ramp_segment1_st_time = ramp1_start, ramp_segment1_duration = ramps_duration, ramp_segment2_height = -1.047 + 0.9526, ramp_segment2_st_time = ramp2_start, ramp_segment2_duration = ramps_duration)  annotation(
    Placement(transformation(origin = {-88, 30}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments in_m_s(ramp_segment1_duration = ramps_duration, ramp_segment2_duration = ramps_duration, ramp_segment1_height = 0.0198, ramp_segment1_st_time = ramp1_start, ramp_segment2_height = -0.0198*2, ramp_segment2_st_time = ramp2_start)  annotation(
    Placement(transformation(origin = {-88, -26}, extent = {{-10, -10}, {10, 10}})));
  GroundthruthVerification.SLOCUMLikeGroundthruthVerification sLOCUMLikeGroundthruthVerification(initSegment1 = ramp1_start, initSegment2 = ramp2_start)  annotation(
    Placement(transformation(origin = {78, -58}, extent = {{-20, -20}, {20, 20}})));
equation
  connect(environmental_currents.y, gliderSLOCUMLike.env_current_speed) annotation(
    Line(points = {{-36, 66}, {26, 66}, {26, 42}}, color = {0, 0, 127}, thickness = 0.5));
  connect(in_VBD.out_value, gliderSLOCUMLike.in_VBD_mass) annotation(
    Line(points = {{-78, 30}, {-58, 30}, {-58, 16}, {-28, 16}}, color = {0, 0, 127}));
  connect(in_m_s.out_value, gliderSLOCUMLike.in_mov_shift) annotation(
    Line(points = {{-77, -27}, {-58, -27}, {-58, -6}, {-28, -6}}, color = {0, 0, 127}));
  connect(gliderSLOCUMLike.unitTest, sLOCUMLikeGroundthruthVerification.inputUnitTest) annotation(
    Line(points = {{14, -12}, {14, -58}, {58, -58}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(experiment(StopTime = 600, Interval = 0.1, Tolerance = 1e-06));
end VerificationSLOCUMLikeVehicleSideslip;