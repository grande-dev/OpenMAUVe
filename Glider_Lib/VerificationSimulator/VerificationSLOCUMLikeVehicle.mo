within Glider_Lib.VerificationSimulator;

model VerificationSLOCUMLikeVehicle "This model test a single yo for the SLOCUM like glider as described in #72."
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0)  annotation(
    Placement(transformation(origin = {-41, 65}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Ramp VBD_input(height = 1.047, duration = 0, startTime = 0)  annotation(
    Placement(transformation(origin = {-80, 32}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Ramp m_s_input(height = 0.0198, duration = 0, startTime = 0)  annotation(
    Placement(transformation(origin = {-80, -8}, extent = {{-6, -6}, {6, 6}})));
equation

  annotation(experiment(StopTime = 600, Interval = 0.1, Tolerance = 1e-06));
end VerificationSLOCUMLikeVehicle;