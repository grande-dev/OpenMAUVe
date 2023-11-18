within Glider_Lib.Parts;
model BuoyancyForce "Produces the buoyancy force"
  import Const = Modelica.Constants;
    Real g_constant;

  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_b annotation (Placement(
        transformation(extent={{84,-16},{116,16}}), iconTransformation(extent={{84,-16},
            {116,16}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force(color = {0, 0, 255}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.world)
    annotation (Placement(visible = true, transformation(extent = {{46, -10}, {66, 10}}, rotation = 0)));

  parameter Modelica.Units.SI.Density rho=1000 "Water density [kg/m3]";
  parameter Modelica.Units.SI.Volume nabla_0=0.0 "Neutral vehicle volume";
  parameter Modelica.Units.SI.Acceleration g=0.0 "Gravity acceleration";


  Modelica.Blocks.Interfaces.RealInput in_variable_volume annotation (
    Placement(visible = true, transformation(origin = {-84, -92}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 2}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant ForceBuoyancyY(k = 0)  annotation (
    Placement(visible = true, transformation(origin = {-74, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant ForceBuoyancyX(k = 0) annotation (
    Placement(visible = true, transformation(origin = {-74, 38}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression realExpression(y = -rho * g)  annotation (
    Placement(visible = true, transformation(origin = {-63, -26}, extent = {{-19, -10}, {19, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Product ForceBuoyancyZ annotation (
    Placement(visible = true, transformation(origin = {-1.77636e-15, -34}, extent = {{-12, -12}, {12, 12}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = nabla_0) annotation (
    Placement(visible = true, transformation(origin = {-74, -54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add nabla annotation (
    Placement(visible = true, transformation(origin = {-35, -59}, extent = {{-7, -7}, {7, 7}}, rotation = 0)));
equation
  g_constant = Const.g_n;
  connect(force.frame_b, frame_b) annotation (
    Line(points = {{66, 0}, {100, 0}}, color = {95, 95, 95}, thickness = 0.5));
  connect(realExpression.y, ForceBuoyancyZ.u1) annotation (
    Line(points={{-42.1,-26},{-42.1,-26.8},{-14.4,-26.8}},
                                                        color = {0, 0, 127}));
  connect(const.y, nabla.u1) annotation (
    Line(points={{-63,-54},{-54,-54},{-54,-54.8},{-43.4,-54.8}},
                                            color = {0, 0, 127}));
  connect(in_variable_volume, nabla.u2) annotation (
    Line(points={{-84,-92},{-54,-92},{-54,-63.2},{-43.4,-63.2}},    color = {0, 0, 127}));
  connect(nabla.y, ForceBuoyancyZ.u2) annotation (
    Line(points={{-27.3,-59},{-20,-59},{-20,-41.2},{-14.4,-41.2}},  color = {0, 0, 127}));
  connect(ForceBuoyancyX.y, force.force[1]) annotation (
    Line(points={{-63,38},{-8,38},{-8,-0.666667},{44,-0.666667}},
                                                           color = {0, 0, 127}));
  connect(ForceBuoyancyY.y, force.force[2]) annotation (
    Line(points={{-63,0},{44,0}},      color = {0, 0, 127}));
  connect(ForceBuoyancyZ.y, force.force[3]) annotation (
    Line(points={{13.2,-34},{24,-34},{24,0.666667},{44,0.666667}},
                                                            color = {0, 0, 127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)));
end BuoyancyForce;
