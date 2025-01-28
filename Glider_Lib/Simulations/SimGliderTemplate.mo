within Glider_Lib.Simulations;

model SimGliderTemplate "The generic template to simulate the generic AUV"
  Vehicles.GenericAUV genericAUV(rho(displayUnit = "g/cm3"), r_0 = {0, 0, 0}, r_NED = {5, 0, 0}, v_0 = {0, 0, 0}, euler_0 = {0, 0, 0}, w_0 = {0, 0, 0}, m_h = 10)  annotation(
    Placement(transformation(origin = {18, 4}, extent = {{-25, -25}, {25, 25}})));
equation
end SimGliderTemplate;