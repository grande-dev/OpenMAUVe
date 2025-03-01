within Glider_Lib.Parts;
model BuoyancyForce "Produces the buoyancy force"
  import SI = Modelica.Units.SI;
  import Const = Modelica.Constants;
  Real g_constant;

  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_b annotation (Placement(
        transformation(extent={{84,-16},{116,16}}), iconTransformation(extent={{84,-16},
            {116,16}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force(color = {0, 0, 255}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.world)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
  Modelica.Blocks.Sources.Constant const_buoyancy[3](k={0,0, -ref_mass * 9.81})
    annotation (Placement(transformation(extent={{-62,-10},{-42,10}})));
  parameter SI.Mass ref_mass=65.28
    "Mass for computation of the buoyancy";
equation
  g_constant = Const.g_n;
  connect(force.frame_b, frame_b) annotation (Line(
      points={{10,0},{100,0}},
      color={95,95,95},
      thickness=0.5));
  connect(const_buoyancy.y, force.force)
    annotation (Line(points={{-41,0},{-12,0}}, color={0,0,127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)));
end BuoyancyForce;