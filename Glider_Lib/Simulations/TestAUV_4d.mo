within Glider_Lib.Simulations;

model TestAUV_4d "Test the AUV"
  Modelica.Blocks.Sources.Step ref_x2(height = 0, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-221.5, 101.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x1(height = 0.5, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-221.5, 123.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Glider_Lib.Generic_AUV_3d generic_AUV_3d(alpha1 = Modelica.Units.Conversions.from_deg(45.0), alpha2 = Modelica.Units.Conversions.from_deg(-45.0), alpha3 = Modelica.Units.Conversions.from_deg(-45.0), alpha4 = Modelica.Units.Conversions.from_deg(45.0),enableAddedMass = false, rho(displayUnit = "kg/m3"), v_0 = {0.0, 0.0, 0.0})  annotation(
    Placement(visible = true, transformation(origin = {82.5, 60}, extent = {{-71.5, -67}, {71.5, 67}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x3(height = 0, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-221.5, 79.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Glider_Lib.Control.StateFeedbackControl_AH1_4in_4out stateFeedbackControl_AH1_4in_4out(saturation_limit = 37.5)  annotation(
    Placement(visible = true, transformation(origin = {-108.5, 55.5}, extent = {{-70.5, -70.5}, {70.5, 70.5}}, rotation = 0)));
  Glider_Lib.Faults.FaultInjection_4thrusters_distance_def faultInjection_4thrusters_distance_def annotation(
    Placement(visible = true, transformation(origin = {-253, 170}, extent = {{-24, -24}, {24, 24}}, rotation = 0)));
  Glider_Lib.Guidance.LOS_guidance LOS_guidance_yaw_reference(gamma = 5.0)  annotation(
    Placement(visible = true, transformation(origin = {-263.5, 35.5}, extent = {{-15.5, -15.5}, {15.5, 15.5}}, rotation = 0)));
  Modelica.Blocks.Continuous.CriticalDamping yaw_reference_filtered(f = 0.01)  annotation(
    Placement(visible = true, transformation(origin = {-219, 36}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ref_x1.y, stateFeedbackControl_AH1_4in_4out.ref_1) annotation(
    Line(points = {{-214, 124}, {-191, 124}, {-191, 98}, {-138, 98}}, color = {0, 0, 127}));
  connect(ref_x2.y, stateFeedbackControl_AH1_4in_4out.ref_2) annotation(
    Line(points = {{-214, 102}, {-201, 102}, {-201, 89}, {-138, 89}}, color = {0, 0, 127}));
  connect(ref_x3.y, stateFeedbackControl_AH1_4in_4out.ref_3) annotation(
    Line(points = {{-214, 80}, {-138, 80}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4in_4out.u_1, generic_AUV_3d.F1) annotation(
    Line(points = {{-73, 89}, {-27, 89}, {-27, 99}, {10, 99}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4in_4out.u_2, generic_AUV_3d.F2) annotation(
    Line(points = {{-73, 75}, {-32, 75}, {-32, 73}, {10, 73}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4in_4out.u_3, generic_AUV_3d.F3) annotation(
    Line(points = {{-73, 61}, {3, 61}, {3, 47}, {12, 47}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4in_4out.u_4, generic_AUV_3d.F4) annotation(
    Line(points = {{-73, 48}, {-5, 48}, {-5, 20}, {12, 20}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_u, stateFeedbackControl_AH1_4in_4out.out_1) annotation(
    Line(points = {{155, 124}, {223, 124}, {223, -34}, {-192, -34}, {-192, 59}, {-138, 59}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_v, stateFeedbackControl_AH1_4in_4out.out_2) annotation(
    Line(points = {{155, 115}, {216, 115}, {216, -28}, {-184, -28}, {-184, 51}, {-138, 51}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_ang_vel_r, stateFeedbackControl_AH1_4in_4out.out_3) annotation(
    Line(points = {{156, 74}, {204, 74}, {204, -21}, {-175, -21}, {-175, 41}, {-138, 41}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_angle_yaw, stateFeedbackControl_AH1_4in_4out.out_4) annotation(
    Line(points = {{156, 10}, {196, 10}, {196, -14}, {-167, -14}, {-167, 32}, {-138, 32}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.h_1, stateFeedbackControl_AH1_4in_4out.h_1) annotation(
    Line(points = {{-232, 192}, {-124, 192}, {-124, 103}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.h_2, stateFeedbackControl_AH1_4in_4out.h_2) annotation(
    Line(points = {{-232, 177}, {-109, 177}, {-109, 103}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.h_3, stateFeedbackControl_AH1_4in_4out.h_3) annotation(
    Line(points = {{-232, 162}, {-94, 162}, {-94, 103}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.h_4, stateFeedbackControl_AH1_4in_4out.h_4) annotation(
    Line(points = {{-231, 149}, {-80, 149}, {-80, 103}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.pos_x, generic_AUV_3d.out_pos_x) annotation(
    Line(points = {{-277, 181}, {-307, 181}, {-307, 209}, {257, 209}, {257, 56}, {156, 56}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.pos_y, generic_AUV_3d.out_pos_y) annotation(
    Line(points = {{-277, 159}, {-298, 159}, {-298, 200}, {248, 200}, {248, 48}, {156, 48}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_pos_x, LOS_guidance_yaw_reference.pos_x) annotation(
    Line(points = {{156, 56}, {257, 56}, {257, -69}, {-300, -69}, {-300, 42}, {-278, 42}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_pos_y, LOS_guidance_yaw_reference.pos_y) annotation(
    Line(points = {{156, 48}, {248, 48}, {248, -63}, {-293, -63}, {-293, 31}, {-278, 31}}, color = {0, 0, 127}));
  connect(LOS_guidance_yaw_reference.ref_yaw, yaw_reference_filtered.u) annotation(
    Line(points = {{-248, 36}, {-231, 36}}, color = {0, 0, 127}));
  connect(yaw_reference_filtered.y, stateFeedbackControl_AH1_4in_4out.ref_4) annotation(
    Line(points = {{-208, 36}, {-200, 36}, {-200, 72}, {-138, 72}}, color = {0, 0, 127}));
protected
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_4d;