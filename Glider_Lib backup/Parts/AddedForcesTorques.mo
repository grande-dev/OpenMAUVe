within Glider_Lib.Parts;
model AddedForcesTorques "Forces and torques caused by the apparent mass"
  parameter Real activate_added_mass = 0.0 "activate added mass forces and inertia torques";

  Modelica.Mechanics.MultiBody.Forces.WorldForce force(resolveInFrame=
        Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b)
    annotation (Placement(visible = true, transformation(extent = {{-40, 154}, {-20, 174}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_b annotation (Placement(
        visible = true,transformation(extent = {{84, -16}, {116, 16}}, rotation = 0), iconTransformation(extent = {{186, -12}, {218, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_mass_x(y=-1.48 * activate_added_mass *absoluteSensor.a[
        1])                                                                     annotation (
    Placement(visible = true, transformation(origin={-146, 197},      extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_mass_y(y=-49.58 * activate_added_mass *absoluteSensor.a[
        2])                                                                     annotation (
    Placement(visible = true, transformation(origin={-146, 163},      extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_mass_z(y=-65.92 * activate_added_mass *absoluteSensor.a[
        3])                                                                     annotation (
    Placement(visible = true, transformation(origin={-146, 125},       extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(
    resolveInFrame=Modelica.Mechanics.MultiBody.Types.ResolveInFrameA.frame_a,
    get_a=true,
    get_z=true)
    annotation (Placement(visible = true, transformation(extent = {{184, 54}, {204, 74}}, rotation = 0)));

  Modelica.Mechanics.MultiBody.Forces.WorldTorque torque(resolveInFrame=
        Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b)
    annotation (Placement(visible = true, transformation(extent = {{-26, -82}, {-6, -62}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_inertia_x(y=-0.53 * activate_added_mass *
        absoluteSensor.z[1])                                                       annotation (
    Placement(visible = true, transformation(origin={-148, -39},     extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_inertia_y(y=-7.88 * activate_added_mass *
        absoluteSensor.z[2])                                                       annotation (
    Placement(visible = true, transformation(origin={-146, -73},     extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression added_inertia_z(y=-10.18 * activate_added_mass *
        absoluteSensor.z[3])                                                       annotation (
    Placement(visible = true, transformation(origin={-146, -103},    extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cross_term_torque_x(y = 0.0 * activate_added_mass) annotation(
    Placement(visible = true, transformation(origin = {-144, -143}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force1(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b) annotation(
    Placement(visible = true, transformation(extent = {{-34, 30}, {-14, 50}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cross_term_torque_z(y = -2.57 * activate_added_mass * absoluteSensor.a[2]) annotation(
    Placement(visible = true, transformation(origin = {-144, -211}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cross_term_torque_y(y = -3.61 * activate_added_mass * absoluteSensor.a[3]) annotation(
    Placement(visible = true, transformation(origin = {-144, -177}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Forces.WorldTorque torque1(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b) annotation(
    Placement(visible = true, transformation(extent = {{-36, -186}, {-16, -166}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cross_term_force_x(y = 0.0 * activate_added_mass) annotation(
    Placement(visible = true, transformation(origin = {-146, 73}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cross_term_force_y(y = -2.57 * activate_added_mass * absoluteSensor.z[3]) annotation(
    Placement(visible = true, transformation(origin = {-144, 39}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cross_term_force_z(y = -3.61 * activate_added_mass * absoluteSensor.z[2]) annotation(
    Placement(visible = true, transformation(origin = {-146, 5}, extent = {{-54, -27}, {54, 27}}, rotation = 0)));
equation
  connect(force.frame_b, frame_b) annotation(
    Line(points = {{-20, 164}, {55, 164}, {55, 0}, {100, 0}}, color = {95, 95, 95}, thickness = 0.5));
  connect(absoluteSensor.frame_a, frame_b) annotation (Line(
      points={{184, 64}, {60, 64}, {60, 0}, {100, 0}},
      color={95,95,95},
      thickness=0.5));
  connect(torque.frame_b, frame_b) annotation(
    Line(points = {{-6, -72}, {54, -72}, {54, 0}, {100, 0}}, color = {95, 95, 95}, thickness = 0.5));
  connect(added_mass_x.y, force.force[1]) annotation(
    Line(points = {{-87, 197}, {-64, 197}, {-64, 164}, {-42, 164}}, color = {0, 0, 127}));
  connect(added_mass_y.y, force.force[2]) annotation(
    Line(points = {{-87, 163}, {-60, 163}, {-60, 164}, {-42, 164}}, color = {0, 0, 127}));
  connect(added_mass_z.y, force.force[3]) annotation(
    Line(points = {{-87, 125}, {-64, 125}, {-64, 164}, {-42, 164}}, color = {0, 0, 127}));
  connect(cross_term_force_x.y, force1.force[1]) annotation(
    Line(points = {{-87, 73}, {-64, 73}, {-64, 40}, {-36, 40}}, color = {0, 0, 127}));
  connect(cross_term_force_y.y, force1.force[2]) annotation(
    Line(points = {{-85, 39}, {-56, 39}, {-56, 40}, {-36, 40}}, color = {0, 0, 127}));
  connect(cross_term_force_z.y, force1.force[3]) annotation(
    Line(points = {{-87, 5}, {-64, 5}, {-64, 40}, {-36, 40}}, color = {0, 0, 127}));
  connect(added_inertia_x.y, torque.torque[1]) annotation(
    Line(points = {{-89, -39}, {-66, -39}, {-66, -72}, {-28, -72}}, color = {0, 0, 127}));
  connect(added_inertia_y.y, torque.torque[2]) annotation(
    Line(points = {{-87, -73}, {-82.75, -73}, {-82.75, -71}, {-30, -71}, {-30, -71.5}, {-28, -71.5}, {-28, -72}}, color = {0, 0, 127}));
  connect(added_inertia_z.y, torque.torque[3]) annotation(
    Line(points = {{-87, -103}, {-66, -103}, {-66, -72}, {-28, -72}}, color = {0, 0, 127}));
  connect(cross_term_torque_x.y, torque1.torque[1]) annotation(
    Line(points = {{-85, -143}, {-68, -143}, {-68, -176}, {-38, -176}}, color = {0, 0, 127}));
  connect(cross_term_torque_y.y, torque1.torque[2]) annotation(
    Line(points = {{-85, -177}, {-72.25, -177}, {-72.25, -176}, {-38, -176}}, color = {0, 0, 127}));
  connect(cross_term_torque_z.y, torque1.torque[3]) annotation(
    Line(points = {{-85, -211}, {-68, -211}, {-68, -176}, {-38, -176}}, color = {0, 0, 127}));
  connect(force1.frame_b, frame_b) annotation(
    Line(points = {{-14, 40}, {24, 40}, {24, 1}, {100, 1}, {100, 0}}, color = {95, 95, 95}));
  connect(torque1.frame_b, frame_b) annotation(
    Line(points = {{-16, -176}, {68, -176}, {68, 0}, {100, 0}}));
  annotation (Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-200, -200}, {200, 200}})), Diagram(
        coordinateSystem(preserveAspectRatio = false, extent = {{-200, -200}, {200, 200}})));
end AddedForcesTorques;