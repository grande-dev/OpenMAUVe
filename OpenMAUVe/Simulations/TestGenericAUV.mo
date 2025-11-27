within OpenMAUVe.Simulations;
model TestGenericAUV "Test the AUV"
  Vehicles.templateAUV templateAUV(K_T = 0.02, r_0 = {0, 0, 0.01}, D_p = 0.22, r_thruster = {-0.75, 0.0, 0.0}, X_uu = 5.0, Y_v = 7.0, Z_w = 7.5, K_p = 1.1, M_q = 36.8, N_r = 36.8, scaleDist = 10^(-6))  annotation(
    Placement(transformation(origin = {55, 18}, extent = {{-78, -58}, {78, 58}})));
  Modelica.Blocks.Sources.Constant ref_VBD(k = 0) annotation(
    Placement(transformation(origin = {-196, 43}, extent = {{-10, -10}, {10, 10}})));
  Environment.Currents.CurrentsSouthChinaSea currents(enableCurrents = false)  annotation(
    Placement(transformation(origin = {-113.5, 111.5}, extent = {{-29.5, -29.5}, {29.5, 29.5}})));
  Modelica.Blocks.Sources.Step ref_thruster_RPM(height = 1100, startTime = 50)  annotation(
    Placement(transformation(origin = {-195, 9}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(currents.signalBus, templateAUV.signalBus) annotation(
    Line(points = {{-114, 83}, {-114.09, 83}, {-114.09, -43.82}, {78.91, -43.82}, {78.91, -4}, {79, -4}}, color = {255, 204, 51}, thickness = 0.5));
  connect(currents.out_currents_inertial_frame, templateAUV.env_current_speed) annotation(
    Line(points = {{-83, 111.5}, {51.59, 111.5}, {51.59, 80}, {52, 80}}, color = {0, 0, 127}, thickness = 0.5));
  connect(ref_thruster_RPM.y, templateAUV.in_thruster) annotation(
    Line(points = {{-184, 9}, {-110, 9}, {-110, 6}, {-5, 6}}, color = {0, 0, 127}));
  connect(ref_VBD.y, templateAUV.in_VBD_mass) annotation(
    Line(points = {{-185, 43}, {-105.5, 43}, {-105.5, 38}, {-5, 38}}, color = {0, 0, 127}));
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-300, -300}, {300, 300}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-300, -300}, {300, 300}}, grid = {1, 1})),
    experiment(StopTime = 300, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestGenericAUV;