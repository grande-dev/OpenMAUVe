within OpenMAUVe.Graphics;

model DorsalFin "A shape of a fixed fin."
  import SI = Modelica.Units.SI;
  parameter Boolean show_shapes = false "Set to true for debugging";
  parameter SI.Length fin_length = 0.0 "Length of the hull";
  parameter SI.Length fin_width = 0.0 "Width of the hull";
  parameter SI.Length fin_height = 0.0 "Height of the hull";
  parameter Integer fin_color[3] = {255, 255, 255} "Color of the fin";
  parameter SI.Position r_fin[3] = {0.0, 0.0, 0.0} "Position of fin wrt to {O_b}";
  parameter SI.Angle orientation_fin[3] = {0, 0, 0} "Orientation of the fin wrt {O_b}";

  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_Ob annotation(
    Placement(transformation(origin = {-102, -2}, extent = {{186, -14}, {218, 18}}), iconTransformation(origin = {-86, -4}, extent = {{186, -12}, {218, 20}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedShape shapeNoseCone(shapeType = "box", lengthDirection = {1.0, 0.0, 0.0}, animation = true, color = fin_color, length = fin_length, width = fin_width, height = fin_height) annotation(
    Placement(transformation(origin = {-52, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.MultiBody.Parts.FixedRotation fixedRotation(rotationType = Modelica.Mechanics.MultiBody.Types.RotationTypes.PlanarRotationSequence, sequence = {3, 2, 1}, r = r_fin, angles = orientation_fin, animation = false) annotation(
    Placement(transformation(origin = {16, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
equation
  connect(shapeNoseCone.frame_a, fixedRotation.frame_b) annotation(
    Line(points = {{-42, 0}, {6, 0}}, color = {95, 95, 95}));
  connect(fixedRotation.frame_a, frame_Ob) annotation(
    Line(points = {{26, 0}, {100, 0}}, color = {95, 95, 95}));
end DorsalFin;