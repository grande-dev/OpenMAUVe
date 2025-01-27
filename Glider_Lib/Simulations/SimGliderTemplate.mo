within Glider_Lib.Simulations;

model SimGliderTemplate "The generic template to simulate the generic AUV"
  Vehicles.GenericAUV genericAUV(rho(displayUnit = "g/cm3"), nabla_0 = 0.500e1, r_0 = {0, 0, -1}, r_NED = {5.43e6, -1.49e6, 2.97e6})  annotation(
    Placement(transformation(origin = {18, 4}, extent = {{-25, -25}, {25, 25}})));
equation
end SimGliderTemplate;