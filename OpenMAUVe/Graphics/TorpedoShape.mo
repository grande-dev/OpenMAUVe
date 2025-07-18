within OpenMAUVe.Graphics;

model TorpedoShape "A shape of a cylidrical hull with a cylindrical nose cone."
  import SI = Modelica.Units.SI;
  parameter Boolean show_shapes = false "Set to true for debugging";
  parameter SI.Length hull_length = 0.0 "Length of the hull";
  parameter SI.Diameter hull_diameter = 0.0 "Diameter of the hull";
  parameter Integer hull_color[3] = {255, 255, 255} "Color of the hull";
  
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_Ob annotation(
    Placement(transformation(origin = {-102, -2}, extent = {{186, -14}, {218, 18}}), iconTransformation(origin = {-86, -4}, extent = {{186, -12}, {218, 20}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedShape shapeHull(height = hull_diameter, length = hull_length, shapeType = "cylinder", width = hull_diameter, r_shape = {-hull_length/2, 0.0, 0.0}, animation = show_shapes, color = hull_color) annotation(
    Placement(transformation(origin = {-64, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation fixedTranslation(animation = false, r = {hull_length/2 - hull_diameter/2, 0.0, 0.0})  annotation(
    Placement(transformation(origin = {-20, 30}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedShape shapeNoseCone(height = hull_diameter, length = hull_diameter, shapeType = "sphere", width = hull_diameter, lengthDirection = {1.0, 0.0, 0.0}, animation = show_shapes, color = hull_color) annotation(
    Placement(transformation(origin = {20, 30}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(shapeHull.frame_a, frame_Ob) annotation(
    Line(points = {{-54, 0}, {100, 0}}, color = {95, 95, 95}));
  connect(shapeHull.frame_a, fixedTranslation.frame_a) annotation(
    Line(points = {{-54, 0}, {-42, 0}, {-42, 30}, {-30, 30}}, color = {95, 95, 95}));
  connect(fixedTranslation.frame_b, shapeNoseCone.frame_a) annotation(
    Line(points = {{-10, 30}, {10, 30}}, color = {95, 95, 95}));
end TorpedoShape;