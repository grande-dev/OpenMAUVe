within OpenMAUVe.Simulations;
model TestAUV_3d "Test the AUV"
  Modelica.Blocks.Sources.Step ref_x2(height = 0, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-220.5, 80.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x1(height = 0.5, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-220.5, 102.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  OpenMAUVe.Generic_AUV_3d generic_AUV_3d(enableAddedMass=false, v_0={0.3,0.3,
        0.0}) annotation (Placement(visible=true, transformation(
        origin={86.5,45},
        extent={{-71.5,-67},{71.5,67}},
        rotation=0)));
  OpenMAUVe.Control.StateFeedbackControl_AH1_4thrusters stateFeedbackControl_AH1_4thrusters
    annotation (Placement(visible=true, transformation(
        origin={-114.5,49.5},
        extent={{-42.5,-42.5},{42.5,42.5}},
        rotation=0)));
  Modelica.Blocks.Sources.Step ref_x3(height = 0, offset = 0, startTime = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-220.5, 58.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  OpenMAUVe.Faults.FaultInjection_4thrusters faultInjection_4thrusters
    annotation (Placement(visible=true, transformation(
        origin={-174,160},
        extent={{-31,-31},{31,31}},
        rotation=0)));
equation
  connect(stateFeedbackControl_AH1_4thrusters.u_1, generic_AUV_3d.F1) annotation(
    Line(points = {{-90, 62}, {-47, 62}, {-47, 84}, {14, 84}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4thrusters.u_2, generic_AUV_3d.F2) annotation(
    Line(points = {{-90, 51}, {-38, 51}, {-38, 58}, {14, 58}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4thrusters.u_3, generic_AUV_3d.F3) annotation(
    Line(points = {{-90, 41}, {-39, 41}, {-39, 32}, {16, 32}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_4thrusters.u_4, generic_AUV_3d.F4) annotation(
    Line(points = {{-90, 31}, {-46, 31}, {-46, 5}, {16, 5}}, color = {0, 0, 127}));
  connect(ref_x1.y, stateFeedbackControl_AH1_4thrusters.ref_1) annotation(
    Line(points = {{-213, 102.5}, {-162, 102.5}, {-162, 69}, {-137, 69}}, color = {0, 0, 127}));
  connect(ref_x2.y, stateFeedbackControl_AH1_4thrusters.ref_2) annotation(
    Line(points = {{-213, 80.5}, {-165, 80.5}, {-165, 59}, {-137, 59}}, color = {0, 0, 127}));
  connect(ref_x3.y, stateFeedbackControl_AH1_4thrusters.ref_3) annotation(
    Line(points = {{-213, 58.5}, {-188, 58.5}, {-188, 50}, {-137, 50}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_1, stateFeedbackControl_AH1_4thrusters.h_1) annotation(
    Line(points = {{-147, 188}, {-128, 188}, {-128, 72}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_2, stateFeedbackControl_AH1_4thrusters.h_2) annotation(
    Line(points = {{-147, 169}, {-117, 169}, {-117, 72}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_3, stateFeedbackControl_AH1_4thrusters.h_3) annotation(
    Line(points = {{-147, 149}, {-106, 149}, {-106, 72}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_4, stateFeedbackControl_AH1_4thrusters.h_4) annotation(
    Line(points = {{-146, 133}, {-95, 133}, {-95, 72}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_u, stateFeedbackControl_AH1_4thrusters.out_1) annotation(
    Line(points = {{160, 79}, {228, 79}, {228, -41}, {-202, -41}, {-202, 37}, {-137, 37}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_v, stateFeedbackControl_AH1_4thrusters.out_2) annotation(
    Line(points = {{160, 70}, {218, 70}, {218, -33}, {-192, -33}, {-192, 29}, {-137, 29}, {-137, 28}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_ang_vel_r, stateFeedbackControl_AH1_4thrusters.out_3) annotation(
    Line(points = {{160, 14}, {207, 14}, {207, -25}, {-181, -25}, {-181, 20}, {-137, 20}}, color = {0, 0, 127}));
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_3d;
