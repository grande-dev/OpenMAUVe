within Glider_Lib.Simulations;

model SimGliderTemplate "The generic template to simulate the generic AUV"
  Vehicles.GenericAUV genericAUV(r_0 = {1, 1, 1}, r_NED = {5.43, -1.49, 2.97}, v_0 = {0, 0, 0}, euler_0 = {0, 0, 0}, w_0 = {0, 0, 0}, m_h = 500, r_g_hull = {0.0, 0.0, 0.05}, planet_radius(displayUnit = "Tm"), nabla_0 = 0.52, r_vbd_mass = {-0.5, 0.3, 0.7})  annotation(
    Placement(transformation(origin = {18, 4}, extent = {{-25, -25}, {25, 25}})));
  Modelica.Blocks.Sources.Step source_VBD_mass(height = 5, startTime = 1000)  annotation(
    Placement(transformation(origin = {-48, -6}, extent = {{-4, -4}, {4, 4}})));
equation
  connect(source_VBD_mass.y, genericAUV.in_VBD_mass) annotation(
    Line(points = {{-44, -6}, {-4, -6}}, color = {0, 0, 127}));
end SimGliderTemplate;