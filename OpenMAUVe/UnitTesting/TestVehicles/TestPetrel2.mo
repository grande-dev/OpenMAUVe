within OpenMAUVe.UnitTesting.TestVehicles;
model TestPetrel2 "This model tests a Seawing glider as described in #99."
  Modelica.Blocks.Sources.Step environmental_currents[3](each height = 0)  annotation(
    Placement(transformation(origin = {-91, 85}, extent = {{-5, -5}, {5, 5}})));
  Modelica.Blocks.Sources.Ramp VBD_input(height = -2.1, duration = 10.0, startTime = 50)  annotation(
    Placement(transformation(origin = {-94, 30}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Ramp m_s_input(height = -0.018, duration = 5, startTime = 150, offset = 0)  annotation(
    Placement(transformation(origin = {-76, 0}, extent = {{-6, -6}, {6, 6}})));
  Modelica.Blocks.Sources.Ramp m_r_input(duration = 10, height = 0.0, startTime = 70) annotation(
    Placement(transformation(origin = {-76, -40}, extent = {{-6, -6}, {6, 6}})));
  Vehicles.gliderPetrel2 gliderPetrel2(r_0 = {0, 0, 763.9}, show_frames_vehicles = true, enableAddedMassEffects = true, adimensionalHydroParamUsed = true, r_vbd_vol = {0, 0, 0}, enableRhoVsDepth = true)  annotation(
    Placement(transformation(origin = {63, -16}, extent = {{-46, -41}, {46, 41}})));
  Control.ManualInputs.manualInputs2Segments thruster_input(ramp_segment1_height = 0.0, ramp_segment1_st_time = 5.0, ramp_segment1_duration = 0.0, ramp_segment2_height = 0.0, ramp_segment2_st_time = 15.0, ramp_segment2_duration = 0.0)  annotation(
    Placement(transformation(origin = {-72, -80}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain gain(k = 1)  annotation(
    Placement(transformation(origin = {-20, 36}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Add add(k1 = -1)  annotation(
    Placement(transformation(origin = {-56, 36}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(environmental_currents.y, gliderPetrel2.env_current_speed) annotation(
    Line(points = {{-85.5, 85}, {-85.5, 84}, {61.75, 84}, {61.75, 28}, {61, 28}}, color = {0, 0, 127}, thickness = 0.5));
  connect(m_s_input.y, gliderPetrel2.in_mov_shift) annotation(
    Line(points = {{-70, 0}, {8, 0}, {8, -2}}, color = {0, 0, 127}));
  connect(m_r_input.y, gliderPetrel2.in_mov_roll) annotation(
    Line(points = {{-70, -40}, {-46, -40}, {-46, -18}, {8, -18}}, color = {0, 0, 127}));
  connect(thruster_input.out_value, gliderPetrel2.in_propeller_rotational_speed) annotation(
    Line(points = {{-62, -80}, {-24, -80}, {-24, -34}, {8, -34}}, color = {0, 0, 127}));
  connect(gain.y, gliderPetrel2.in_VBD) annotation(
    Line(points = {{-9, 36}, {-6, 36}, {-6, 16}, {8, 16}}, color = {0, 0, 127}));
  connect(VBD_input.y, add.u2) annotation(
    Line(points = {{-88, 30}, {-68, 30}}, color = {0, 0, 127}));
  connect(gliderPetrel2.out_VBD_net_force, add.u1) annotation(
    Line(points = {{118, -42}, {132, -42}, {132, 58}, {-84, 58}, {-84, 42}, {-68, 42}}, color = {0, 0, 127}));
  connect(add.y, gain.u) annotation(
    Line(points = {{-44, 36}, {-32, 36}}, color = {0, 0, 127}));
  annotation(experiment(StopTime = 100, Interval = 0.1, Tolerance = 1e-06),
  Diagram(coordinateSystem(extent = {{-150, -150}, {150, 150}})),
  Icon(coordinateSystem(extent = {{-150, -150}, {150, 150}})));
end TestPetrel2;