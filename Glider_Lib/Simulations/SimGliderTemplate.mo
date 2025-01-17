within Glider_Lib.Simulations;

model SimGliderTemplate
  Vehicles.GenericAUV genericAUV(rho(displayUnit = "kg/m3"), nabla_0 = 0.501)  annotation(
    Placement(transformation(origin = {0, -2}, extent = {{-25, -25}, {25, 25}})));
  Modelica.Blocks.Sources.Step F1 annotation(
    Placement(transformation(origin = {-88, 40}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step f2 annotation(
    Placement(transformation(origin = {-84, 26}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step f3 annotation(
    Placement(transformation(origin = {-74, 16}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step f4 annotation(
    Placement(transformation(origin = {-62, 4}, extent = {{-4, -4}, {4, 4}})));
equation
  connect(F1.y, genericAUV.F1) annotation(
    Line(points = {{-84, 40}, {-46, 40}, {-46, 22}, {-26, 22}}, color = {0, 0, 127}));
  connect(f2.y, genericAUV.F2) annotation(
    Line(points = {{-80, 26}, {-48, 26}, {-48, 16}, {-26, 16}}, color = {0, 0, 127}));
  connect(f3.y, genericAUV.F3) annotation(
    Line(points = {{-70, 16}, {-50, 16}, {-50, 8}, {-26, 8}}, color = {0, 0, 127}));
  connect(f4.y, genericAUV.F4) annotation(
    Line(points = {{-58, 4}, {-48, 4}, {-48, 2}, {-26, 2}}, color = {0, 0, 127}));
end SimGliderTemplate;