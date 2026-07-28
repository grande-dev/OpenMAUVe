within OpenMAUVe.ValidationSimulator;
model ValidationSLOCUM
  "SLOCUM replay validation driven by the slocum_data_input_to_OpenMAUVe dataset."

  import Modelica.Units.SI;

  parameter String dataFile = Modelica.Utilities.Files.loadResource("modelica://OpenMAUVe/ValidationSimulator/Data/SLOCUM/slocum_data_input_to_OpenMAUVe.txt") "OpenModelica text table file" annotation(
    Dialog(tab = "Dataset"));
  parameter String tableName = "slocum_data_table" "Dataset table name in text file" annotation(
    Dialog(tab = "Dataset"));
  parameter Boolean useDatasetFile = true "Set false to use internal zero table" annotation(
    Dialog(tab = "Dataset"));
  parameter SI.Time tableTimeUnit = 1.0
    "Unit bridge for velocity values stored in the heterogeneous Real table" annotation(
    Dialog(tab = "Dataset"));
  parameter Real vbdMeasuredScale = 1e-6 "Scale measured m_de_oil_vol from cubic centimetres to m3" annotation(
    Dialog(tab = "Dataset"));
  parameter Real vbdMeasuredSign = 1.0 "Positive measured oil volume increases displaced volume and makes the glider rise" annotation(
    Dialog(tab = "Dataset"));
  parameter Real movableMassReferencePosition = 0.22
    "Neutral datum subtracted from measured m_battpos before converting inches to metres" annotation(
    Dialog(tab = "Dataset"));
  parameter Real movableMassMeasuredScale = 0.0254 "Scale measured m_battpos from inches to m" annotation(
    Dialog(tab = "Dataset"));
  parameter SI.Density rho_0 = 1027.0 "Water density [kg/m3]" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Mass m_total = 59.0438 "Total vehicle mass [kg]" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Mass m_mov = 9.359 "Movable mass [kg]" annotation(
    Dialog(tab = "Vehicle"));
  parameter Boolean enableCurrents = true "Enable the measured environmental-current input" annotation(
    Dialog(tab = "Vehicle"));
  parameter Boolean enableRudderInput = true "Enable the measured rudder input" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Angle init_latitude = Modelica.Units.Conversions.from_deg(-61.8453322245) annotation(
    Dialog(tab = "Initial state"));
  parameter SI.Angle init_longitude = Modelica.Units.Conversions.from_deg(-50.6541219156) annotation(
    Dialog(tab = "Initial state"));
  parameter SI.Position init_depth = 30.5300525479 annotation(
    Dialog(tab = "Initial state"));
  parameter SI.Angle e_0[3] = {-0.0641843383778, -0.426843510651, 4.55007314682} "Initial [roll,pitch,yaw] from first dataset sample" annotation(
    Dialog(tab = "Initial state"));
  parameter SI.Velocity initialHorizontalSpeed = 0.110147095254 "Initial measured horizontal through-water speed m_speed" annotation(
    Dialog(tab = "Initial state"));
  parameter SI.Velocity initialDepthRate = 0.131865085424 "Initial positive-down depth rate" annotation(
    Dialog(tab = "Initial state"));
  parameter SI.Velocity initialCurrentNED[3] = {-0.0580238864982, 0.10456881271, 0.0}
    "Initial current {north,east,down}; m_final_water_vy is north and vx is east" annotation(
    Dialog(tab = "Initial state"));
  parameter SI.Velocity v_0[3] = {
    initialHorizontalSpeed*Modelica.Math.cos(e_0[3]) + (if enableCurrents then initialCurrentNED[1] else 0.0),
    initialHorizontalSpeed*Modelica.Math.sin(e_0[3]) + (if enableCurrents then initialCurrentNED[2] else 0.0),
    initialDepthRate + (if enableCurrents then initialCurrentNED[3] else 0.0)}
    "Initial through-water horizontal and positive-down vertical velocity plus current in NED" annotation(
    Dialog(tab = "Initial state"));
  parameter SI.Position a_earth = 6378137.0 "Earth semimajor axis" annotation(
    Dialog(tab = "Initial state"));

  parameter Real fallbackTable[2, 24] = [
    0.0, 260, 0.51, -220, 1000000, 1000003, 0.131244078279, 5.05999994278, -61.7191666667, -47.6923333333, 9.81481933594, -61.8091183333, -47.70954, -61.8258070483, -48.1105888872, 0.0185066312551, -0.0523544475436, 0.0942596718669, 0.0139626339078, -0.342084527016, 4.81536340714, 0.551222205162, -159.833450317, 0.112887397408;
    1.0, 260, 0.51, -220, 1000000, 1000003, 0.131244078279, 5.05999994278, -61.7191666667, -47.6923333333, 9.81481933594, -61.8091183333, -47.70954, -61.8258070483, -48.1105888872, 0.0185066312551, -0.0523544475436, 0.0942596718669, 0.0139626339078, -0.342084527016, 4.81536340714, 0.551222205162, -159.833450317, 0.112887397408];

  Vehicles.gliderSLOCUM gliderSLOCUM(
    rho_0(displayUnit = "kg/m3"),
    r_0 = {0.0, 0.0, init_depth},
    euler_0 = {e_0[3], e_0[2], e_0[1]},
    v_0 = v_0,
    init_latitude = init_latitude,
    init_longitude = init_longitude,
    enableActuatorDynamics = false,
    enableAddedMassEffects = true,
    enableCurrents = enableCurrents,
    enableRudderInput = enableRudderInput) annotation(
    Placement(transformation(origin = {80, 20}, extent = {{-62, -62}, {62, 62}})));
  Modelica.Blocks.Sources.CombiTimeTable dataset(
    tableOnFile = useDatasetFile,
    table = fallbackTable,
    tableName = tableName,
    fileName = dataFile,
    columns = 2:24,
    smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation = Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    verboseRead = true,
    verboseExtrapolation = false) annotation(
    Placement(transformation(origin = {-160, 20}, extent = {{-16, -16}, {16, 16}})));
  GroundtruthValidation.SLOCUMGroundtruthValidation slocumGroundtruthValidation(
    checkTimeInit = 0.0,
    checkTimeFinal = 71324.4497375) annotation(
    Placement(transformation(origin = {210, 20}, extent = {{-24, -24}, {24, 24}})));
  Modelica.Blocks.Sources.RealExpression measuredVBDVolumeSource(y = measuredVBDVolume) annotation(
    Placement(transformation(origin = {-50, -68}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Sources.RealExpression measuredMovableMassPositionSource(y = measuredMovableMassPosition) annotation(
    Placement(transformation(origin = {-50, -96}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Sources.RealExpression measuredFinSource(y = measuredFin) annotation(
    Placement(transformation(origin = {-50, -124}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Sources.RealExpression gtWaterVelocitySource[3](y = gt_water_velocity) annotation(
    Placement(transformation(origin = {-50, 98}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Sources.RealExpression simSpeedSource(y = sim_speed) annotation(
    Placement(transformation(origin = {154, -58}, extent = {{-14, -14}, {14, 14}})));
  Modelica.Blocks.Sources.RealExpression gtPosSource[3](y = gt_pos) annotation(
    Placement(transformation(origin = {154, -88}, extent = {{-14, -14}, {14, 14}})));
  Modelica.Blocks.Sources.RealExpression gtEASource[3](y = gt_EA_deg) annotation(
    Placement(transformation(origin = {154, -118}, extent = {{-14, -14}, {14, 14}})));
  Modelica.Blocks.Sources.RealExpression gtSpeedSource(y = gt_speed) annotation(
    Placement(transformation(origin = {154, -148}, extent = {{-14, -14}, {14, 14}})));
  Modelica.Blocks.Sources.RealExpression simDepthRateSource(y = sim_depth_rate);
  Modelica.Blocks.Sources.RealExpression gtDepthRateSource(y = gt_depth_rate);
  Modelica.Blocks.Sources.RealExpression simFlowspeedSource(y = sim_flowspeed);
  Modelica.Blocks.Sources.RealExpression gtFlowspeedReconstructedSource(
    y = gt_flowspeed_reconstructed);

  SI.Volume measuredVBDVolume;
  SI.Position measuredMovableMassPosition;
  Real measuredFin;
  SI.Position gt_pos[3] "Groundtruth NED position";
  SI.Angle gt_EA[3];
  Real gt_EA_deg[3];
  SI.Velocity gt_speed;
  SI.Velocity gt_depth_rate
    "Positive-down rate reconstructed by differentiating measured depth";
  SI.Velocity gt_flowspeed_reconstructed
    "Reconstructed total 3-D through-water speed";
  Real gt_water_velocity[3];
  SI.Velocity sim_speed;
  SI.Velocity sim_depth_rate "Simulated positive-down NED velocity";
  SI.Velocity sim_flowspeed "Simulated total 3-D through-water speed";
  SI.Velocity simDownSpeed;

equation
  measuredMovableMassPosition = (dataset.y[21] - movableMassReferencePosition)*movableMassMeasuredScale;
  measuredVBDVolume = vbdMeasuredSign*dataset.y[22]*vbdMeasuredScale;
  measuredFin = dataset.y[23];

  gt_pos[1] = (dataset.y[13] - Modelica.Units.Conversions.to_deg(init_latitude))*Modelica.Constants.pi/180.0*a_earth;
  gt_pos[2] = (dataset.y[14] - Modelica.Units.Conversions.to_deg(init_longitude))*Modelica.Constants.pi/180.0*a_earth*Modelica.Math.cos(init_latitude);
  gt_pos[3] = dataset.y[10];
  gt_EA = {dataset.y[18], dataset.y[19], dataset.y[20]};
  for i in 1:3 loop
    gt_EA_deg[i] = Modelica.Units.Conversions.to_deg(gt_EA[i]);
  end for;
  gt_speed = dataset.y[17]/tableTimeUnit;
  gt_depth_rate = der(gt_pos[3]);
  gt_flowspeed_reconstructed = sqrt(gt_speed^2 + gt_depth_rate^2);
  gt_water_velocity = if enableCurrents then
    {dataset.y[16], dataset.y[15], 0.0} else zeros(3);
  simDownSpeed = -Modelica.Math.sin(gliderSLOCUM.signalBus.EulerAngles[2])*gliderSLOCUM.signalBus.u_r
    + Modelica.Math.sin(gliderSLOCUM.signalBus.EulerAngles[1])*Modelica.Math.cos(gliderSLOCUM.signalBus.EulerAngles[2])*gliderSLOCUM.signalBus.v_r
    + Modelica.Math.cos(gliderSLOCUM.signalBus.EulerAngles[1])*Modelica.Math.cos(gliderSLOCUM.signalBus.EulerAngles[2])*gliderSLOCUM.signalBus.w_r;
  sim_speed = sqrt(max(0.0, gliderSLOCUM.signalBus.flowspeed^2 - simDownSpeed^2));
  sim_depth_rate = der(gliderSLOCUM.out_pos_body_wrt_NED0_in_NED0[3]);
  sim_flowspeed = gliderSLOCUM.signalBus.flowspeed;

  connect(measuredVBDVolumeSource.y, gliderSLOCUM.in_VBD_volume) annotation(
    Line(points = {{-32, -68}, {4, -68}, {4, -5}, {12, -5}}, color = {0, 0, 127}));
  connect(measuredMovableMassPositionSource.y, gliderSLOCUM.in_mov_shift) annotation(
    Line(points = {{-32, -96}, {0, -96}, {0, 8}, {12, 8}}, color = {0, 0, 127}));
  connect(measuredFinSource.y, gliderSLOCUM.in_rudder_deflection) annotation(
    Line(points = {{-32, -124}, {8, -124}, {8, -17}, {12, -17}}, color = {0, 0, 127}));
  connect(gtWaterVelocitySource.y, gliderSLOCUM.env_current_speed) annotation(
    Line(points = {{-32, 98}, {80, 98}, {80, 82}}, color = {0, 0, 127}));
  connect(gliderSLOCUM.out_pos_body_wrt_NED0_in_NED0, slocumGroundtruthValidation.sim_pos) annotation(
    Line(points = {{142, 25}, {174, 25}, {174, 20}, {186, 20}}, color = {0, 0, 127}));
  connect(gliderSLOCUM.out_angle_DCM, slocumGroundtruthValidation.sim_EA) annotation(
    Line(points = {{142, 10}, {176, 10}, {176, 29}, {186, 29}}, color = {0, 0, 127}));
  connect(simSpeedSource.y, slocumGroundtruthValidation.sim_speed) annotation(
    Line(points = {{169, -58}, {178, -58}, {178, 11}, {186, 11}}, color = {0, 0, 127}));
  connect(gtPosSource.y, slocumGroundtruthValidation.gt_pos) annotation(
    Line(points = {{169, -88}, {182, -88}, {182, 20}, {186, 20}}, color = {0, 0, 127}));
  connect(gtEASource.y, slocumGroundtruthValidation.gt_EA) annotation(
    Line(points = {{169, -118}, {184, -118}, {184, 29}, {186, 29}}, color = {0, 0, 127}));
  connect(gtSpeedSource.y, slocumGroundtruthValidation.gt_speed) annotation(
    Line(points = {{169, -148}, {190, -148}, {190, 2}, {186, 2}}, color = {0, 0, 127}));
  connect(simDepthRateSource.y, slocumGroundtruthValidation.sim_depth_rate);
  connect(gtDepthRateSource.y, slocumGroundtruthValidation.gt_depth_rate);
  connect(simFlowspeedSource.y, slocumGroundtruthValidation.sim_flowspeed);
  connect(gtFlowspeedReconstructedSource.y,
    slocumGroundtruthValidation.gt_flowspeed_reconstructed);

  annotation(
    experiment(StopTime = 71324.4497375, Interval = 0.5, Tolerance = 1e-05),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-220, -120}, {260, 120}})),
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-200, -120}, {200, 120}}), graphics = {
      Rectangle(extent = {{-180, 82}, {180, -82}}, lineColor = {0, 85, 170}, fillColor = {238, 246, 252}, fillPattern = FillPattern.Solid),
      Text(extent = {{-142, 32}, {142, -12}}, textString = "ValidationSLOCUM"),
      Text(extent = {{-150, -32}, {150, -62}}, textString = "dataset replay")}));
end ValidationSLOCUM;
