within OpenMAUVe.ValidationSimulator;
model ValidationBlueROV2H_wrench "BlueROV2H replay from dataset thruster data converted to wrench and groundtruth comparison."
  import Modelica.Units.SI;

  parameter String dataFile = Modelica.Utilities.Files.loadResource("modelica://OpenMAUVe/ValidationSimulator/Data/BlueROV2H/0-data-for-OpenMAUVe/1-txt_file_input_to_OpenMAUVe/extracted_bag_data_table.txt") "OpenModelica text table file";
  parameter String tableName = "bluerov2h_bag_data" "Dataset table name in text file";
  parameter Boolean useDatasetFile = true "Set false to use internal zero table";
  parameter Boolean use_pwm_as_input = true "Use PWM channels to reconstruct the applied wrench";
  parameter Boolean use_rcout_as_input = true "Use final MAVROS RC output motor PWM channels to reconstruct the applied wrench";
  parameter Boolean useVoltageThrustModel = true "Use voltage-aware PWM thrust fit";
  parameter Boolean useBatteryVoltageInput = true "Use dataset battery voltage when positive; otherwise use batteryVoltage";
  parameter Real batteryVoltage = 15.0 "Fallback battery voltage used by the voltage-aware thrust fit";
  parameter Integer rcoutToTamIndex[8] = {4, 3, 2, 1, 7, 5, 8, 6} "Map RCOut [FS,FP,AS,AP,VFS,VFP,VAS,VAP] to TAM [AP,AS,FP,FS,VFP,VAP,VFS,VAS]";
  parameter Real rcoutForceSign[8] = {1.0, 1.0, -1.0, -1.0, 1.0, -1.0, -1.0, 1.0} "Per-motor sign from RC output PWM to positive TAM thrust";
  parameter Real rcoutForceScale[8] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0} "Per-motor force scale from RC output PWM to TAM thrust";
  parameter Real tamThrusterForceScale[8] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0} "Additional per-thruster scale in TAM column order";
  parameter Real tamThrusterForceBias[8] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0} "Additional per-thruster force bias in TAM column order";
  parameter Real wrenchAxisScale[6] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0} "Per-axis scale applied to reconstructed wrench [surge,sway,heave,roll,pitch,yaw]";
  parameter Real wrenchScale = 1.0 "Scale factor for dataset wrench";
  parameter SI.Density rho_0 = 999.97 "Water density [kg/m3]" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Mass m_h = 11.26 "Mass of rigid body (hull)" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Mass m_w = 0.0 "Point mass" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Volume nabla_0 = (m_h + 0.01)/rho_0 "Hull volume" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Position r_0[3] = {-0.879, 0.48, 0.18} "Initial position vector from NED frame to origin of hull" annotation(
    Dialog(tab = "Vehicle"));
  
  parameter Real enableSurge = 1.0 "Use 0.0 is Surge is not controlled, 1.0 if in use";
  parameter Real enableSway = 1.0 "Use 0.0 is Sway is not controlled, 1.0 if in use";
  parameter Real enableHeave = 1.0 "Use 0.0 is Heave is not controlled, 1.0 if in use";
  parameter Real enableRoll = 1.0 "Use 0.0 is roll is not controlled, 1.0 if in use";
  parameter Real enablePitch = 1.0 "Use 0.0 is pitch is not controlled, 1.0 if in use";
  parameter Real enableYaw = 1.0 "Use 0.0 is yaw is not controlled, 1.0 if in use";


  // Internal fallback table: [time, T1..T8, pos_x..pos_z, vel_x..vel_z, p..r, roll..yaw, cmd wrench, armed, pwm_x..pwm_yaw, rcout_1..rcout_8, battery_voltage_v]
  parameter Real fallbackTable[2, 43] = [
    0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 15.0;
    1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 15.0
  ];

  ValidationBlueROV2H_input_wrench validationBlueROV2H_input_wrench(
    rho_0 = rho_0,
    m_h = m_h,
    m_w = m_w,
    nabla_0 = nabla_0,
    r_0 = r_0) annotation(
    Placement(transformation(origin = {70, 11}, extent = {{-30, -25}, {30, 25}})));

  Modelica.Blocks.Sources.CombiTimeTable dataset(
    tableOnFile = useDatasetFile,
    table = fallbackTable,
    tableName = tableName,
    fileName = dataFile,
    columns = 2:43,
    smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation = Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    verboseRead = true,
    verboseExtrapolation = false) annotation(
    Placement(transformation(origin = {-208, 0}, extent = {{-16, -16}, {16, 16}})));

  GroundtruthValidation.BlueROV2HWrenchGroundtruthValidation blueROV2HWrenchGroundtruthValidation(checkTimeInit = 0.0, checkTimeFinal = 1e9) annotation(
    Placement(transformation(origin = {198, 6}, extent = {{-24, -24}, {24, 24}})));

  BlueROV2H_from_pwm_to_wrench blueROV2H_from_pwm_to_wrench(
    use_pwm_as_input = use_pwm_as_input,
    use_rcout_as_input = use_rcout_as_input,
    useVoltageThrustModel = useVoltageThrustModel,
    useBatteryVoltageInput = useBatteryVoltageInput,
    batteryVoltage = batteryVoltage,
    rcoutToTamIndex = rcoutToTamIndex,
    rcoutForceSign = rcoutForceSign,
    rcoutForceScale = rcoutForceScale,
    tamThrusterForceScale = tamThrusterForceScale,
    tamThrusterForceBias = tamThrusterForceBias,
    wrenchAxisScale = wrenchAxisScale,
    wrenchScale = wrenchScale,
    enableAxis = {enableSurge, enableSway, enableHeave, enableRoll, enablePitch, enableYaw}) annotation(
    Placement(transformation(origin = {-98, 14}, extent = {{-32, -32}, {32, 32}})));

  Real gt_pos[3];
  Real gt_EA[3];
  Real gt_vel_body[3];
  Real gt_ang_vel_body[3];

equation
  blueROV2H_from_pwm_to_wrench.in_tau_x = dataset.y[21];
  blueROV2H_from_pwm_to_wrench.in_tau_y = dataset.y[22];
  blueROV2H_from_pwm_to_wrench.in_tau_z = dataset.y[23];
  blueROV2H_from_pwm_to_wrench.in_tau_roll = dataset.y[24];
  blueROV2H_from_pwm_to_wrench.in_tau_pitch = dataset.y[25];
  blueROV2H_from_pwm_to_wrench.in_tau_yaw = dataset.y[26];
  blueROV2H_from_pwm_to_wrench.in_armed = dataset.y[27];
  blueROV2H_from_pwm_to_wrench.in_pwm_x = dataset.y[28];
  blueROV2H_from_pwm_to_wrench.in_pwm_y = dataset.y[29];
  blueROV2H_from_pwm_to_wrench.in_pwm_z = dataset.y[30];
  blueROV2H_from_pwm_to_wrench.in_pwm_roll = dataset.y[31];
  blueROV2H_from_pwm_to_wrench.in_pwm_pitch = dataset.y[32];
  blueROV2H_from_pwm_to_wrench.in_pwm_yaw = dataset.y[33];
  for i in 1:8 loop
    blueROV2H_from_pwm_to_wrench.in_motor_pwm[i] = dataset.y[33 + i];
  end for;
  blueROV2H_from_pwm_to_wrench.in_battery_voltage = dataset.y[42];

  validationBlueROV2H_input_wrench.in_tau_x = blueROV2H_from_pwm_to_wrench.out_tau_x;
  validationBlueROV2H_input_wrench.in_tau_y = blueROV2H_from_pwm_to_wrench.out_tau_y;
  validationBlueROV2H_input_wrench.in_tau_z = blueROV2H_from_pwm_to_wrench.out_tau_z;
  validationBlueROV2H_input_wrench.in_tau_roll = blueROV2H_from_pwm_to_wrench.out_tau_roll;
  validationBlueROV2H_input_wrench.in_tau_pitch = blueROV2H_from_pwm_to_wrench.out_tau_pitch;
  validationBlueROV2H_input_wrench.in_tau_yaw = blueROV2H_from_pwm_to_wrench.out_tau_yaw;

  for i in 1:3 loop
    gt_pos[i] = dataset.y[8 + i];
    gt_EA[i] = dataset.y[17 + i];
    gt_vel_body[i] = dataset.y[11 + i];
    gt_ang_vel_body[i] = dataset.y[14 + i];
  end for;

  connect(validationBlueROV2H_input_wrench.out_pos_body_wrt_NED0_in_NED0, blueROV2HWrenchGroundtruthValidation.sim_pos);
  connect(validationBlueROV2H_input_wrench.out_EA,
        blueROV2HWrenchGroundtruthValidation.sim_EA);
  connect(validationBlueROV2H_input_wrench.out_lin_vel_body, blueROV2HWrenchGroundtruthValidation.sim_vel_body);
  connect(validationBlueROV2H_input_wrench.out_ang_vel_ome, blueROV2HWrenchGroundtruthValidation.sim_ang_vel_body);

  blueROV2HWrenchGroundtruthValidation.gt_pos = gt_pos;
  blueROV2HWrenchGroundtruthValidation.gt_EA = gt_EA;
  blueROV2HWrenchGroundtruthValidation.gt_vel_body = gt_vel_body;
  blueROV2HWrenchGroundtruthValidation.gt_ang_vel_body = gt_ang_vel_body;

  annotation(
    experiment(StopTime = 300.0, Interval = 0.02, Tolerance = 1e-05),
  Diagram(coordinateSystem(extent = {{-300, -300}, {300, 300}})),
  Icon(coordinateSystem(extent = {{-300, -300}, {300, 300}})));
end ValidationBlueROV2H_wrench;
