within Glider_Lib.Parts;
model AddedMassForcesTorques "Forces and torques caused by the apparent mass"
  parameter Real X_udot = 0.0 " added mass forces and inertia torques";
  parameter Real X_vdot = 0.0 " added mass forces and inertia torques";
  parameter Real X_wdot = 0.0 " added mass forces and inertia torques";
  parameter Real X_pdot = 0.0 " added mass forces and inertia torques";
  parameter Real X_qdot = 0.0 " added mass forces and inertia torques";
  parameter Real X_rdot = 0.0 " added mass forces and inertia torques";
  parameter Real Y_udot = 0.0 " added mass forces and inertia torques";
  parameter Real Y_vdot = 0.0 " added mass forces and inertia torques";
  parameter Real Y_wdot = 0.0 " added mass forces and inertia torques";
  parameter Real Y_pdot = 0.0 " added mass forces and inertia torques";
  parameter Real Y_qdot = 0.0 " added mass forces and inertia torques";
  parameter Real Y_rdot = 0.0 " added mass forces and inertia torques";
  parameter Real Z_udot = 0.0 " added mass forces and inertia torques";
  parameter Real Z_vdot = 0.0 " added mass forces and inertia torques";
  parameter Real Z_wdot = 0.0 " added mass forces and inertia torques";
  parameter Real Z_pdot = 0.0 " added mass forces and inertia torques";
  parameter Real Z_qdot = 0.0 " added mass forces and inertia torques";
  parameter Real Z_rdot = 0.0 " added mass forces and inertia torques";
  parameter Real K_udot = 0.0 " added mass forces and inertia torques";
  parameter Real K_vdot = 0.0 " added mass forces and inertia torques";
  parameter Real K_wdot = 0.0 " added mass forces and inertia torques";
  parameter Real K_pdot = 0.0 " added mass forces and inertia torques";
  parameter Real K_qdot = 0.0 " added mass forces and inertia torques";
  parameter Real K_rdot = 0.0 " added mass forces and inertia torques";
  parameter Real M_udot = 0.0 " added mass forces and inertia torques";
  parameter Real M_vdot = 0.0 " added mass forces and inertia torques";
  parameter Real M_wdot = 0.0 " added mass forces and inertia torques";
  parameter Real M_pdot = 0.0 " added mass forces and inertia torques";
  parameter Real M_qdot = 0.0 " added mass forces and inertia torques";
  parameter Real M_rdot = 0.0 " added mass forces and inertia torques";
  parameter Real N_udot = 0.0 " added mass forces and inertia torques";
  parameter Real N_vdot = 0.0 " added mass forces and inertia torques";
  parameter Real N_wdot = 0.0 " added mass forces and inertia torques";
  parameter Real N_pdot = 0.0 " added mass forces and inertia torques";
  parameter Real N_qdot = 0.0 " added mass forces and inertia torques";
  parameter Real N_rdot = 0.0 " added mass forces and inertia torques";
  Modelica.Mechanics.MultiBody.Forces.WorldForce force(color = {238, 246, 16}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b) annotation (
    Placement(visible = true, transformation(extent = {{-38, 56}, {-18, 76}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_b annotation (
    Placement(visible = true, transformation(extent = {{184, -16}, {216, 16}}, rotation = 0), iconTransformation(extent={{186,-16},
            {218,16}},                                                                                                                             rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_mass_x(y = -(X_udot * absoluteSensor.a[1]
  + Z_wdot * absoluteSensor.v[3] * absoluteSensor.w[2] + Z_qdot * absoluteSensor.w[2] ^ 2
  - Y_vdot * absoluteSensor.v[2] * absoluteSensor.w[3] - Y_rdot * absoluteSensor.w[3] ^ 2)) annotation (
    Placement(visible = true, transformation(origin = {-144, 99}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_mass_y(y = -(Y_vdot * absoluteSensor.a[2]
  + Y_rdot * absoluteSensor.z[3] + X_udot * absoluteSensor.v[1] * absoluteSensor.w[3]
  - Z_wdot * absoluteSensor.v[3] * absoluteSensor.w[1]
  - Z_qdot * absoluteSensor.w[1] * absoluteSensor.w[2])) annotation (
    Placement(visible = true, transformation(origin = {-144, 65}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_mass_z(y = -(Z_wdot * absoluteSensor.a[3]
  + Z_qdot * absoluteSensor.z[2] - X_udot * absoluteSensor.v[1] * absoluteSensor.w[2]
  + Y_vdot * absoluteSensor.v[2] * absoluteSensor.w[1]
  + Y_rdot * absoluteSensor.w[3] * absoluteSensor.w[1])) annotation (
    Placement(visible = true, transformation(origin = {-144, 27}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true, get_v = true, get_w = true, get_z = true, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameA.frame_a) annotation (
    Placement(visible = true, transformation(extent = {{140, 26}, {160, 46}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Forces.WorldTorque torque(color = {238, 246, 16}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b) annotation (
    Placement(visible = true, transformation(extent = {{-16, -78}, {4, -58}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_inertia_x(y = -(K_pdot * absoluteSensor.z[1]
  - (Y_vdot - Z_wdot) * absoluteSensor.v[2] * absoluteSensor.v[3]
  - (Y_rdot + Z_qdot) * absoluteSensor.v[3] * absoluteSensor.w[3]
  + (Y_rdot + Z_qdot) * absoluteSensor.v[2] * absoluteSensor.w[2]
  - (M_qdot - N_rdot) * absoluteSensor.w[2] * absoluteSensor.w[3])) annotation (
    Placement(visible = true, transformation(origin = {-152, -33}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_inertia_y(y = -(Z_qdot * (absoluteSensor.a[3]
  - absoluteSensor.v[1] * absoluteSensor.w[2])
  + M_qdot * absoluteSensor.z[2] - (Z_wdot - X_udot) * absoluteSensor.v[3] * absoluteSensor.v[1]
  - Y_rdot * absoluteSensor.v[2] * absoluteSensor.w[1]
  + (K_pdot - N_rdot) * absoluteSensor.w[3] * absoluteSensor.w[1]))  annotation (
    Placement(visible = true, transformation(origin = {-150, -69}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_inertia_z(y = -(Y_rdot * absoluteSensor.a[2]
  + N_rdot * absoluteSensor.z[3] - (X_udot - Y_vdot) * absoluteSensor.v[1] * absoluteSensor.v[2]
  + Y_rdot * absoluteSensor.v[1] * absoluteSensor.w[3] + Z_qdot * absoluteSensor.v[3] * absoluteSensor.w[1]
  - (K_pdot - M_qdot) * absoluteSensor.w[1] * absoluteSensor.w[2])) annotation (
    Placement(visible = true, transformation(origin = {-150, -107}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
equation
  connect(force.frame_b, frame_b) annotation (
    Line(points = {{-18, 66}, {49, 66}, {49, 0}, {200, 0}}, color = {95, 95, 95}, thickness = 0.5));
  connect(absoluteSensor.frame_a, frame_b) annotation (
    Line(points = {{140, 36}, {114, 36}, {114, 0}, {200, 0}}, color = {95, 95, 95}, thickness = 0.5));
  connect(torque.frame_b, frame_b) annotation (
    Line(points = {{4, -68}, {50, -68}, {50, 0}, {200, 0}}, color = {95, 95, 95}, thickness = 0.5));
  connect(added_mass_x.y, force.force[1]) annotation (
    Line(points={{-84.6,99},{-58,99},{-58,65.3333},{-40,65.3333}},color = {0, 0, 127}));
  connect(added_mass_y.y, force.force[2]) annotation (
    Line(points={{-84.6,65},{-62,65},{-62,66},{-40,66}},
                                          color = {0, 0, 127}));
  connect(added_mass_z.y, force.force[3]) annotation (
    Line(points={{-84.6,27},{-58,27},{-58,66.6667},{-40,66.6667}},
                                                                color = {0, 0, 127}));
  connect(added_inertia_x.y, torque.torque[1]) annotation (
    Line(points={{-92.6,-33},{-50,-33},{-50,-68.6667},{-18,-68.6667}},
                                                                    color = {0, 0, 127}));
  connect(added_inertia_y.y, torque.torque[2]) annotation (
    Line(points={{-90.6,-69},{-54,-69},{-54,-68},{-18,-68}},
                                            color = {0, 0, 127}));
  connect(added_inertia_z.y, torque.torque[3]) annotation (
    Line(points={{-90.6,-107},{-50,-107},{-50,-67.3333},{-18,-67.3333}},
                                                                      color = {0, 0, 127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-200, -200}, {200, 200}})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-200, -200}, {200, 200}})));
end AddedMassForcesTorques;
