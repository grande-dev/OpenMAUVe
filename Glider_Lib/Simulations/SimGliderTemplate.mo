within Glider_Lib.Simulations;

model SimGliderTemplate "The generic template to simulate the generic AUV"
  Vehicles.GenericAUV genericAUV(rho(displayUnit = "g/cm3"), r_0 = {1, 1, 1}, r_NED = {5.43, -1.49, 2.97}, v_0 = {0, 0, 0}, euler_0 = {0, 0, 0}, w_0 = {0, 0, 0}, m_h = 500, r_g_hull = {0.0, 0.0, 0.05})  annotation(
    Placement(transformation(origin = {18, 4}, extent = {{-25, -25}, {25, 25}})));
equation
end SimGliderTemplate;