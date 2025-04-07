within OpenMAUVe.UnitTesting.TestHydrodynamics;
model testHullAddedMassAnalytical
  Parts.HullAddedMassAnalytical hullAddedMassAnalytical(m_h = 10, I_11 = 0.1, I_22 = 0.1, I_33 = 0.1, X_udot = 2, Y_vdot = 7, Z_wdot = 14)  annotation(
    Placement(transformation(origin = {105, 19}, extent = {{-37, -37}, {37, 37}})));
  inner Kinematics.World world annotation(
    Placement(transformation(origin = {-82, 38}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.FreeMotion freeMotion(r_rel_a(start = {5000, 5000, 5000}, each fixed = true), v_rel_a(start = {0.0001, 0.00001, 0.0001}, each fixed = true), angles_fixed = true)  annotation(
    Placement(transformation(origin = {0, 18}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(freeMotion.frame_b, hullAddedMassAnalytical.frame_Ob) annotation(
    Line(points = {{10, 18}, {53, 18}, {53, -2}, {74, -2}}, color = {95, 95, 95}));
  connect(world.frame_b, freeMotion.frame_a) annotation(
    Line(points = {{-72, 38}, {-41, 38}, {-41, 18}, {-10, 18}}, color = {95, 95, 95}));
  annotation(experiment(StopTime = 10000, Interval = 0.1, Tolerance = 1e-06));

end testHullAddedMassAnalytical;
