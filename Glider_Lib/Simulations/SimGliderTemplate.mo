within Glider_Lib.Simulations;

model SimGliderTemplate "The generic template to simulate the generic AUV"
  Vehicles.GenericAUV genericAUV(r_0 = {1, 1, 1}, r_NED = {5.43e06, -1.49e06, 2.97e06}, v_0 = {0, 0, 0}, euler_0 = {0, 0, 0}, w_0 = {0, 0, 0}, m_h = 500, r_g_hull = {0.0, 0.0, 0.05}, planet_radius(displayUnit = "Tm"), nabla_0 = 0.51)  annotation(
    Placement(transformation(origin = {18, 4}, extent = {{-25, -25}, {25, 25}})));
equation
end SimGliderTemplate;