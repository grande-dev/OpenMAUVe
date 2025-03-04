within Glider_Lib.Sensors;
model PositionAttitudeAndDer

  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_On annotation (
    Placement(transformation(origin={-100,40},    extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, -30}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_Ob annotation (
    Placement(transformation(origin = {-98, -76}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-94, -78}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Interfaces.RealOutput positionBody_wrt_NED_in_NED[3] annotation (
    Placement(transformation(origin = {32, -100}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_1 annotation (
    Placement(transformation(origin = {90, 91}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_2 annotation (
    Placement(transformation(origin = {90, 62}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_3 annotation (
    Placement(transformation(origin = {89, 32}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput velocityLinearBody_wrt_NED_in_NED[3] annotation (
    Placement(transformation(origin = {32, -82}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput velocityAngularBody_wrt_NED_in_NED[3] annotation (
    Placement(transformation(origin = {32, -64}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, -60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor sensor_B_wrt_NED_in_NED(animation = false, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_b, get_r_rel = true, get_v_rel = true, get_a_rel = false, get_w_rel = true, get_z_rel = false, get_angles = false, sequence = {3, 2, 1})  annotation (
    Placement(transformation(origin = {-58, -86}, extent = {{-14, -14}, {14, 14}}, rotation = 90)));
  Modelica.Blocks.Interfaces.RealOutput roll_pitch_yaw[3] annotation (
    Placement(transformation(origin = {142, 62}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, -90}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.RelativeSensor sensor_B_wrt_NED_in_B(animation = false, get_a_rel = false, get_angles = false, get_r_rel = true, get_v_rel = true, get_w_rel = true, get_z_rel = false, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_a, sequence = {3, 2, 1}) annotation (
    Placement(transformation(origin = {-28, -36}, extent = {{-14, -14}, {14, 14}}, rotation = 90)));
  Modelica.Blocks.Interfaces.RealOutput positionBody_wrt_NED_in_B[3] annotation (
    Placement(transformation(origin = {32, -46}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput velocityLinearBody_wrt_NED_in_B[3] annotation (
    Placement(transformation(origin = {32, -28}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 30}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput velocityAngularBody_wrt_NED_in_B[3] annotation (
    Placement(transformation(origin = {32, -10}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, -30}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(frame_Ob, sensor_B_wrt_NED_in_NED.frame_a) annotation (
    Line(points = {{-98, -76}, {-77, -76}, {-77, -100}, {-58, -100}}));
  connect(sensor_B_wrt_NED_in_NED.frame_b, frame_On) annotation (
    Line(points={{-58,-72},{-58,40},{-100,40}},         color = {95, 95, 95}));
  connect(positionBody_wrt_NED_in_NED, sensor_B_wrt_NED_in_NED.r_rel) annotation (
    Line(points={{32,-100},{-42.6,-100}},    color = {0, 0, 127}, thickness = 0.5));
  connect(sensor_B_wrt_NED_in_NED.w_rel, velocityAngularBody_wrt_NED_in_NED) annotation (
    Line(points={{-42.6,-77.6},{-2,-77.6},{-2,-64},{32,-64}},    color = {0, 0, 127}, thickness = 0.5));
  connect(sensor_B_wrt_NED_in_NED.v_rel, velocityLinearBody_wrt_NED_in_NED) annotation (
    Line(points={{-42.6,-94.4},{-3.5,-94.4},{-3.5,-82},{32,-82}},    color = {0, 0, 127}, thickness = 0.5));
  connect(frame_Ob, sensor_B_wrt_NED_in_B.frame_a) annotation (
    Line(points = {{-98, -76}, {-78, -76}, {-78, -60}, {-28, -60}, {-28, -50}}));
  connect(frame_On, sensor_B_wrt_NED_in_B.frame_b) annotation (
    Line(points={{-100,40},{-58,40},{-58,-8},{-28,-8},{-28,-22}}));
  connect(sensor_B_wrt_NED_in_B.w_rel, velocityAngularBody_wrt_NED_in_B) annotation (
    Line(points={{-12.6,-27.6},{-2,-27.6},{-2,-10},{32,-10}},    color = {0, 0, 127}, thickness = 0.5));
  connect(sensor_B_wrt_NED_in_B.v_rel, velocityLinearBody_wrt_NED_in_B) annotation (
    Line(points={{-12.6,-44.4},{4,-44.4},{4,-28},{32,-28}},    color = {0, 0, 127}, thickness = 0.5));
  connect(sensor_B_wrt_NED_in_B.r_rel, positionBody_wrt_NED_in_B) annotation (
    Line(points={{-12.6,-50},{12,-50},{12,-46},{32,-46}},        color = {0, 0, 127}, thickness = 0.5));
  connect(velocityAngularBody_wrt_NED_in_NED[1], integrator_EA_1.u) annotation (
    Line(points={{32,-67.3333},{-8,-67.3333},{-8,91},{78,91}},color = {0, 0, 127}));
  connect(velocityAngularBody_wrt_NED_in_NED[2], integrator_EA_2.u) annotation (
    Line(points = {{32, -64}, {-8, -64}, {-8, 62}, {78, 62}}, color = {0, 0, 127}));
  connect(velocityAngularBody_wrt_NED_in_NED[3], integrator_EA_3.u) annotation (
    Line(points={{32,-60.6667},{-8,-60.6667},{-8,32},{77,32}},color = {0, 0, 127}));
  connect(integrator_EA_1.y, roll_pitch_yaw[1]) annotation (
    Line(points={{101,91},{120,91},{120,58.6667},{142,58.6667}},color = {0, 0, 127}));
  connect(integrator_EA_2.y, roll_pitch_yaw[2]) annotation (
    Line(points={{101,62},{142,62}},      color = {0, 0, 127}));
  connect(integrator_EA_3.y, roll_pitch_yaw[3]) annotation (
    Line(points={{100,32},{120,32},{120,65.3333},{142,65.3333}},color = {0, 0, 127}));
  annotation (
    Icon(graphics={  Text(origin = {-64, 85}, extent = {{-22, 11}, {22, -11}}, textString = "{O_i}"), Text(origin = {-64, 31}, extent = {{-22, 11}, {22, -11}}, textString = "{O_e}"), Text(origin = {-62, -27}, extent = {{-22, 11}, {22, -11}}, textString = "{O_n}"), Text(origin = {-60, -79}, extent = {{-22, 11}, {22, -11}}, textString = "{O_b}")}),
  Diagram(graphics={                                                                                                                                                             Text(origin={-128,54},    extent = {{-16, 8}, {16, -8}}, textString = "NED"), Text(origin = {-130, -56}, extent = {{-16, 8}, {16, -8}}, textString = "BODY"), Text(origin = {4, -112}, extent = {{-86, 12}, {86, -12}}, textString = "Rimani consistente con la nomenclatura! Suggerimento 
of=FRAME, wrt=FRAME, in=FRAME
anche se wrt e in coincidono, noi li lasciamo espliciti (se no non sappiamo subito cosa dovrebbe esserci nel resolveIN!)"), Text(origin = {84, -6}, extent = {{-10, 6}, {10, -6}}, textString = "pqr"), Text(origin = {84, -22}, extent = {{-10, 6}, {10, -6}}, textString = "uvw"), Text(origin = {109, -40}, extent = {{-37, 6}, {37, -6}}, textString = "NA (puoi rimuovere se vuoi)"), Text(origin = {113, -61}, extent = {{-33, 7}, {33, -7}}, textString = "da qui si deriva roll pitch yaw"), Text(origin = {111, -76}, extent = {{-31, 6}, {31, -6}}, textString = "ground_speed (xdot, ydot, zdot)"), Text(origin = {109, -92}, extent = {{-31, 6}, {31, -6}}, textString = "ground_position (x, y, z)")}));
end PositionAttitudeAndDer;
