within Glider_Lib.Parts;
model SternPlane "Forces and torques caused by the apparent mass"
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_b annotation (Placement(
        visible = true,transformation(extent = {{186, -14}, {218, 18}}, rotation = 0), iconTransformation(extent = {{186, -12}, {218, 20}}, rotation = 0)));

  parameter Real K_F_delta = 0.0 "stern plane lift coeff 1";
  parameter Real K_u_delta = 0.0 "stern plane lift coeff 2";
  parameter Real K_M_delta = 0.0 "stern plane moment coefficient";
  Real flowspeed(unit="m/s");
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteVelocity absoluteVelocity(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameA.frame_a)  annotation(
    Placement(visible = true, transformation(origin = {-53, 87}, extent = {{-19, -19}, {19, 19}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput delta_in annotation(
    Placement(visible = true, transformation(origin = {-206, -6}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-196, -2}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force_stern_plane(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b)  annotation(
    Placement(visible = true, transformation(origin = {32, 2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Forces.WorldTorque torque_stern_plane(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b)  annotation(
    Placement(visible = true, transformation(origin = {32, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  flowspeed = Modelica.Math.Vectors.norm(absoluteVelocity.v, 2);
  force_stern_plane.force = {0.0, 0.0, K_F_delta * K_u_delta * delta_in * flowspeed ^ 2};
  torque_stern_plane.torque = {0.0, -K_M_delta * delta_in * flowspeed ^ 2, 0.0};
  connect(absoluteVelocity.frame_a, frame_b) annotation(
    Line(points = {{-72, 88}, {-126, 88}, {-126, 132}, {148, 132}, {148, 2}, {202, 2}}, color = {95, 95, 95}));
  connect(force_stern_plane.frame_b, frame_b) annotation(
    Line(points = {{42, 2}, {202, 2}}, color = {95, 95, 95}));
  connect(torque_stern_plane.frame_b, frame_b) annotation(
    Line(points = {{42, -50}, {148, -50}, {148, 2}, {202, 2}}));
  annotation (Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-200, -200}, {200, 200}})), Diagram(
        coordinateSystem(preserveAspectRatio = false, extent = {{-200, -200}, {200, 200}})));
end SternPlane;