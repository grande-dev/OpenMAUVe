within Glider_Lib.Simulations;

model SimGliderTemplate
  Vehicles.GenericAUV genericAUV(rho(displayUnit = "kg/m3"), nabla_0 = 0.501)  annotation(
    Placement(transformation(origin = {0, -2}, extent = {{-25, -25}, {25, 25}})));
equation

end SimGliderTemplate;