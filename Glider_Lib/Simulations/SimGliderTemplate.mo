within Glider_Lib.Simulations;

model SimGliderTemplate
  Vehicles.GenericAUV genericAUV(rho(displayUnit = "g/cm3"), nabla_0 = 0.500)  annotation(
    Placement(transformation(origin = {0, -2}, extent = {{-25, -25}, {25, 25}})));
  Modelica.Blocks.Sources.Step F1(height = 0)  annotation(
    Placement(transformation(origin = {-88, 40}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step f2(height = 0)  annotation(
    Placement(transformation(origin = {-84, 26}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step f3(height = 0)  annotation(
    Placement(transformation(origin = {-74, 16}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step f4(height = 0)  annotation(
    Placement(transformation(origin = {-62, 4}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step f5(height = 0) annotation(
    Placement(transformation(origin = {-74, -4}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step f6(height = 0) annotation(
    Placement(transformation(origin = {-82, -16}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step f7(height = 0) annotation(
    Placement(transformation(origin = {-76, -32}, extent = {{-4, -4}, {4, 4}})));
  Modelica.Blocks.Sources.Step f8(height = 0) annotation(
    Placement(transformation(origin = {-58, -44}, extent = {{-4, -4}, {4, 4}})));
equation
  connect(F1.y, genericAUV.F1) annotation(
    Line(points = {{-84, 40}, {-46, 40}, {-46, 22}, {-26, 22}}, color = {0, 0, 127}));
  connect(f2.y, genericAUV.F2) annotation(
    Line(points = {{-80, 26}, {-48, 26}, {-48, 16}, {-26, 16}}, color = {0, 0, 127}));
  connect(f3.y, genericAUV.F3) annotation(
    Line(points = {{-70, 16}, {-50, 16}, {-50, 8}, {-26, 8}}, color = {0, 0, 127}));
  connect(f4.y, genericAUV.F4) annotation(
    Line(points = {{-58, 4}, {-48, 4}, {-48, 2}, {-26, 2}}, color = {0, 0, 127}));
  connect(f5.y, genericAUV.in_VBD_vol) annotation(
    Line(points = {{-70, -4}, {-38, -4}, {-38, -8}, {-26, -8}}, color = {0, 0, 127}));
  connect(f6.y, genericAUV.in_VBD_mass) annotation(
    Line(points = {{-78, -16}, {-26, -16}}, color = {0, 0, 127}));
  connect(f7.y, genericAUV.in_pos_mass_s) annotation(
    Line(points = {{-72, -32}, {-64, -32}, {-64, -22}, {-26, -22}}, color = {0, 0, 127}));
  connect(f8.y, genericAUV.in_pos_mass_r) annotation(
    Line(points = {{-54, -44}, {-44, -44}, {-44, -32}, {-26, -32}}, color = {0, 0, 127}));
end SimGliderTemplate;