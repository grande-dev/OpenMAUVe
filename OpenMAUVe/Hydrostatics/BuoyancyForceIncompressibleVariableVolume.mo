within OpenMAUVe.Hydrostatics;
model BuoyancyForceIncompressibleVariableVolume
  "Incompressible buoyancy force with a commanded displaced-volume offset."

  import Modelica.Units.SI;

  parameter Real mu(unit = "m3/s2", min = 0) = 3.986004418e14
    "Gravity field constant";
  parameter Boolean show_forces_and_moments = false "Set to true for debugging";
  parameter Boolean show_frames_vehicles = false "Set to true for debugging";
  parameter SI.Volume nabla_0 = 0 "Neutral hull volume";
  parameter SI.Position r_b_hull[3] = {0.0, 0.0, 0.0}
    "Hull COB position wrt to {O_b}";
  parameter SI.Acceleration g_world = Modelica.Constants.g_n
    "Gravity constant";

  SI.Volume displacedVolume "Effective displaced volume";
  Real gravity_vector[3];
  Real gravity_norm;
  Real buoyancy_norm;
  Real buoyancy_direction[3];
  Real position_Ob_wrt_ECI_norm;
  Real buoyancy_active;
  Real g_dynamic;
  SI.Force buoyancy_force_in_B[3];

  outer Modelica.Mechanics.MultiBody.World world;

  Modelica.Blocks.Interfaces.RealInput in_VBD_volume(unit = "m3")
    "Commanded VBD volume offset; positive increases displaced volume";
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_b;
  Modelica.Mechanics.MultiBody.Forces.WorldForce force(
    color = {255, 0, 0},
    resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.world,
    animation = show_forces_and_moments);
  Modelica.Mechanics.MultiBody.Visualizers.FixedFrame frame_COB(
    length = 0.3,
    color_x = {0, 0, 255},
    color_y = {0, 0, 255},
    color_z = {0, 0, 255},
    animation = show_frames_vehicles);
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation translation_toCoB(
    animation = false,
    r = r_b_hull);
  Sensors.SignalBus signalBus;
  Modelica.Blocks.Math.Gain positionBodyWrtECIinECI[3](each k = 1);
  Modelica.Blocks.Math.Gain distanceNEDtoECI(each k = 1);
  Modelica.Blocks.Sources.RealExpression ForceBuoyancyZ[3](
    y = signalBus.rho*g_world*displacedVolume*buoyancy_direction*buoyancy_active);

equation
  displacedVolume = noEvent(max(nabla_0 + in_VBD_volume, 0.0));
  buoyancy_force_in_B = Modelica.Mechanics.MultiBody.Frames.resolve2(force.frame_b.R, force.force);
  gravity_vector = world.gravityAcceleration(frame_b.r_0);
  gravity_norm = Modelica.Math.Vectors.norm(gravity_vector);
  buoyancy_norm = Modelica.Math.Vectors.norm(ForceBuoyancyZ.y);
  position_Ob_wrt_ECI_norm = Modelica.Math.Vectors.norm(positionBodyWrtECIinECI.y);
  buoyancy_direction = positionBodyWrtECIinECI.y/position_Ob_wrt_ECI_norm;

  if position_Ob_wrt_ECI_norm <= distanceNEDtoECI.y then
    buoyancy_active = 1.0;
  else
    buoyancy_active = 0.0;
  end if;

  g_dynamic = mu/(Modelica.Math.Vectors.length(positionBodyWrtECIinECI.y)^2);

  connect(force.force, ForceBuoyancyZ.y);
  connect(translation_toCoB.frame_a, frame_b);
  connect(translation_toCoB.frame_b, frame_COB.frame_a);
  connect(force.frame_b, translation_toCoB.frame_b);
  connect(signalBus.positionBodyWrtECIinECI, positionBodyWrtECIinECI.u);
  connect(signalBus.distanceNEDtoECI, distanceNEDtoECI.u);
end BuoyancyForceIncompressibleVariableVolume;
