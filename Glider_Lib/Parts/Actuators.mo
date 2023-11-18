within Glider_Lib.Parts;
model Actuators "Glider actuators"

  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_a annotation (Placement(
        transformation(extent={{-116,-36},{-84,-4}}), iconTransformation(
        extent={{-16,-16},{16,16}},
        rotation=90,
        origin={42,-98})));
  Modelica.Mechanics.MultiBody.Parts.Body body_battery_enclosure(
    I_11= I_r_x,
    I_22= I_r_y,
    I_33= I_r_z, animation = false, m= m_battery_enclosure,r_CM={0,0,0})
    annotation (Placement(visible = true, transformation(extent = {{210, -8}, {230, 12}}, rotation = 0)));
  parameter Modelica.Units.SI.Mass m_r "Mass of rolling body";
  parameter Modelica.Units.SI.Mass m_battery_enclosure
    "Mass of battery enclosure";
  parameter Modelica.Units.SI.Mass m_HV_battery "Mass of HV battery";
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation fixedTranslation_hinge(r=
        r_p)
    annotation (Placement(transformation(extent={{-60,-30},{-40,-10}})));
  Modelica.Mechanics.MultiBody.Joints.Revolute revolute(useAxisFlange=true, n(
        each displayUnit="1") = {1,0,0})
    annotation (Placement(transformation(extent={{-4,-30},{16,-10}})));
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(useAxisFlange=true)
    annotation (Placement(visible = true, transformation(extent = {{72, -30}, {92, -10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation
    fixedTranslation_pendulumArm(r= r_batt_enclosure)
    annotation (Placement(visible = true, transformation(extent = {{124, -30}, {144, -10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Position position(w(fixed=true))
    annotation (Placement(transformation(extent={{-38,10},{-18,30}})));
  Modelica.Mechanics.Translational.Sources.Position position_slidingMass(v(fixed=
          true))
    annotation (Placement(transformation(extent={{46,30},{66,50}})));
  Modelica.Blocks.Interfaces.RealInput in_pos_m_r annotation (Placement(
        transformation(extent={{-122,4},{-90,36}}),iconTransformation(extent={{
            -106,44},{-74,76}})));
  Modelica.Blocks.Interfaces.RealInput in_pos_m_s annotation (Placement(
        transformation(extent={{-20,24},{12,56}}),
                                                 iconTransformation(extent={{-106,
            -16},{-74,16}})));
  parameter Modelica.Units.SI.Position r_r[3]
    "Position of rolling mass wrt prismatic joint";
  parameter Modelica.Units.SI.Position r_batt_enclosure[3]
    "Position of battery enclosure";
  parameter Modelica.Units.SI.Position r_HV_batt[3]
    "Position of the HV battery";

  parameter Modelica.Units.SI.Position r_b[3]
    "Position of the ballast body wrt structural frame";
  parameter Modelica.Units.SI.Position r_p[3]
    "Position of the hinge wrt the structural frame";
  parameter Modelica.Units.SI.Inertia I_r_x=0.02
    "(1,1) element of inertia tensor of rolling mass";
  parameter Modelica.Units.SI.Inertia I_r_y=10.16
    "(2,2) element of inertia tensor of rolling mass";
  parameter Modelica.Units.SI.Inertia I_r_z=0.17
    "(3,3) element of inertia tensor opf rolling mass";
  Modelica.Mechanics.MultiBody.Visualizers.FixedFrame fixedFrame
    annotation (Placement(transformation(extent={{184,-98},{204,-78}})));
  Modelica.Mechanics.MultiBody.Visualizers.FixedShape shape_green(animation = true, color = {0, 255, 0}, height = 0.1, length = 0.1, r_shape = {-0.05, 0.0, 0.0}, width = 0.1)  annotation (
    Placement(visible = true, transformation(origin = {192, 34}, extent = {{-14, -14}, {14, 14}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput in_variable_ballast annotation (
    Placement(visible = true, transformation(extent={{-124,-122},{-92,-90}},      rotation = 0), iconTransformation(extent = {{-106, -76}, {-74, -44}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation static_translation_VBD(r = r_b) annotation (
    Placement(visible = true, transformation(origin = {-24, -84}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Visualizers.FixedShape shape_red_ballast(animation = true, color = {255, 0, 0}, height = 0.05, length = 0.05, r_shape = {-0.025, 0.0, 0.0}, width = 0.05) annotation (
    Placement(visible = true, transformation(origin = {38, -58}, extent = {{-12, -12}, {12, 12}}, rotation = 0)));
  Glider_Lib.Parts.BodyVariableMass bodyVariableMass(animation = false) annotation (
    Placement(visible = true, transformation(origin = {36, -84}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Parts.Body body_HV_battery(I_11 = I_r_x, I_22 = I_r_y, I_33 = I_r_z, animation = false, m = m_HV_battery, r_CM = {0, 0, 0}) annotation (
    Placement(visible = true, transformation(extent = {{230, -30}, {250, -10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation fixedTranslation(r = r_HV_batt) annotation (
    Placement(visible = true, transformation(extent = {{190, -30}, {210, -10}}, rotation = 0)));
equation
  connect(revolute.frame_b, prismatic.frame_a) annotation (
    Line(points={{16,-20},{72,-20}},      color = {95, 95, 95}, thickness = 0.5));
  connect(prismatic.frame_b, fixedTranslation_pendulumArm.frame_a) annotation (
    Line(points = {{92, -20}, {124, -20}}, color = {95, 95, 95}, thickness = 0.5));
  connect(fixedTranslation_hinge.frame_b, revolute.frame_a) annotation (
    Line(points={{-40,-20},{-4,-20}},      color = {95, 95, 95}, thickness = 0.5));
  connect(position.flange, revolute.axis) annotation (
    Line(points={{-18,20},{6,20},{6,-10}},         color = {0, 0, 0}));
  connect(position_slidingMass.flange, prismatic.axis) annotation (
    Line(points={{66,40},{98,40},{98,-14},{90,-14}},         color = {0, 127, 0}));
  connect(frame_a, fixedTranslation_hinge.frame_a) annotation (
    Line(points = {{-100, -20}, {-60, -20}}, color = {95, 95, 95}, thickness = 0.5));
  connect(in_pos_m_s, position_slidingMass.s_ref) annotation (
    Line(points={{-4,40},{44,40}},       color = {0, 0, 127}));
  connect(in_pos_m_r, position.phi_ref) annotation (
    Line(points={{-106,20},{-40,20}},   color = {0, 0, 127}));
  connect(fixedFrame.frame_a, body_battery_enclosure.frame_a) annotation (
    Line(points = {{184, -88}, {170, -88}, {170, 2}, {210, 2}}, color = {95, 95, 95}, thickness = 0.5));
  connect(shape_green.frame_a, body_battery_enclosure.frame_a) annotation (
    Line(points = {{178, 34}, {164, 34}, {164, 2}, {210, 2}}));
  connect(static_translation_VBD.frame_b, bodyVariableMass.frame_a) annotation (
    Line(points = {{-14, -84}, {26, -84}}, color = {95, 95, 95}));
  connect(shape_red_ballast.frame_a, bodyVariableMass.frame_a) annotation (
    Line(points = {{26, -58}, {12, -58}, {12, -84}, {26, -84}}));
  connect(in_variable_ballast, bodyVariableMass.m) annotation (
    Line(points={{-108,-106},{-68,-106},{-68,-106},{36,-106},{36,-94}},         color = {0, 0, 127}));
  connect(static_translation_VBD.frame_a, frame_a) annotation (
    Line(points = {{-34, -84}, {-42, -84}, {-42, -40}, {-80, -40}, {-80, -20}, {-100, -20}}));
  connect(fixedTranslation_pendulumArm.frame_b, fixedTranslation.frame_a) annotation (
    Line(points = {{144, -20}, {190, -20}}, color = {95, 95, 95}));
  connect(fixedTranslation.frame_b, body_HV_battery.frame_a) annotation (
    Line(points = {{210, -20}, {230, -20}}, color = {95, 95, 95}));
  connect(body_battery_enclosure.frame_a, fixedTranslation_pendulumArm.frame_b) annotation (
    Line(points = {{210, 2}, {176, 2}, {176, -20}, {144, -20}}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{200,100}})), Diagram(coordinateSystem(preserveAspectRatio=
            false, extent={{-100,-100},{200,100}})));
end Actuators;
