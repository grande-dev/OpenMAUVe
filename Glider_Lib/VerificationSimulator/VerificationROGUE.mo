within Glider_Lib.VerificationSimulator;

model VerificationROGUE "This model test a single yo for the ROGUE glider as described in #72."
  Vehicles.gliderROGUE gliderROGUE(rho_0(displayUnit = "kg/m3"), scaleDist = 0.001, enableAddedMassEffects = false) annotation(
    Placement(transformation(origin = {24, 4}, extent = {{-35, -33}, {35, 33}})));
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0) annotation(
    Placement(transformation(origin = {-53, 85}, extent = {{-5, -5}, {5, 5}})));
  Control.ManualInputs.manualInputs2Segments ref_VBD(init_offset = 0, ramp_segment1_height = 1.36, ramp_segment1_duration = 0, ramp_segment2_height = -1.36 + 0.64, ramp_segment2_st_time = 1000, ramp_segment2_duration = 10) annotation(
    Placement(transformation(origin = {-86, 26}, extent = {{-10, -10}, {10, 10}})));
  Control.ManualInputs.manualInputs2Segments ref_m_s(init_offset = 0, ramp_segment1_duration = 10, ramp_segment1_height = 0.022, ramp_segment2_duration = 10, ramp_segment2_height = -0.022*2, ramp_segment2_st_time = 1000) annotation(
    Placement(transformation(origin = {-86, -4}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(ref_VBD.out_value, gliderROGUE.in_VBD_mass) annotation(
    Line(points = {{-76, 26}, {-56, 26}, {-56, 16}, {-24, 16}}, color = {0, 0, 127}));
  connect(ref_m_s.out_value, gliderROGUE.in_mov_shift) annotation(
    Line(points = {{-76, -4}, {-24, -4}}, color = {0, 0, 127}));
  connect(environmental_currents.y, gliderROGUE.env_current_speed) annotation(
    Line(points = {{-48, 86}, {22, 86}, {22, 40}}, color = {0, 0, 127}, thickness = 0.5));
  annotation(
    experiment(StopTime = 200, Interval = 0.1, Tolerance = 1e-06));
end VerificationROGUE;
