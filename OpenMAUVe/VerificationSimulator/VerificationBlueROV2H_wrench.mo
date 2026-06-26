within OpenMAUVe.VerificationSimulator;
model VerificationBlueROV2H_wrench "BlueROV2H replay from dataset thruster data converted to wrench and groundtruth comparison."
  parameter String dataFile = Modelica.Utilities.Files.loadResource("modelica://OpenMAUVe/VerificationSimulator/Data/BlueROV2H/0-data-for-OpenMAUVe/1-txt_file_input_to_OpenMAUVe/extracted_bag_data_table.txt") "OpenModelica text table file";
  parameter String tableName = "bluerov2h_bag_data" "Dataset table name in text file";
  parameter Boolean useDatasetFile = true "Set false to use internal zero table";
  parameter Real wrenchScale = 1.0 "Scale factor for dataset wrench";
  
  parameter Real enableSurge = 1.0 "Use 0.0 is Surge is not controlled, 1.0 if in use";
  parameter Real enableSway = 1.0 "Use 0.0 is Sway is not controlled, 1.0 if in use";
  parameter Real enableHeave = 1.0 "Use 0.0 is Heave is not controlled, 1.0 if in use";
  parameter Real enableRoll = 1.0 "Use 0.0 is roll is not controlled, 1.0 if in use";
  parameter Real enablePitch = 1.0 "Use 0.0 is pitch is not controlled, 1.0 if in use";
  parameter Real enableYaw = 1.0 "Use 0.0 is yaw is not controlled, 1.0 if in use";


  // Internal fallback table: [time, T1..T8, pos_x..pos_z, vel_x..vel_z, p..r, roll..yaw, cmd wrench, armed]
  parameter Real fallbackTable[2, 28] = [
    0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
    1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  ];

  VerificationBlueROV2H_input_wrench verificationBlueROV2H_input_wrench annotation(
    Placement(transformation(origin = {-2, -10}, extent = {{-60, -50}, {60, 50}})));

  Modelica.Blocks.Sources.CombiTimeTable dataset(
    tableOnFile = useDatasetFile,
    table = fallbackTable,
    tableName = tableName,
    fileName = dataFile,
    columns = 2:28,
    smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation = Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    verboseRead = true,
    verboseExtrapolation = false) annotation(
    Placement(transformation(origin = {-170, -2}, extent = {{-16, -16}, {16, 16}})));

  GroundthruthVerification.BlueROV2HWrenchGroundthruthVerification blueROV2HWrenchGroundthruthVerification(checkTimeInit = 0.0, checkTimeFinal = 1e9) annotation(
    Placement(transformation(origin = {198, 6}, extent = {{-24, -24}, {24, 24}})));

  Real gt_pos[3];
  Real gt_EA[3];
  Real gt_vel_body[3];
  Real gt_ang_vel_body[3];
  Real thrusterForceN[8];
  Real wrenchBody[6];
  Real armed;

equation
  for i in 1:8 loop
    thrusterForceN[i] = dataset.y[i];
  end for;
  armed = dataset.y[27];

  // TAM forward map: tau = T * f (f ordered as [a_p, a_s, f_p, f_s, v_f_p, v_a_p, v_f_s, v_a_s]).
  wrenchBody[1] = 0.707106781185*thrusterForceN[1] + 0.707106781185*thrusterForceN[2] - 0.707106781192*thrusterForceN[3] - 0.707106781192*thrusterForceN[4];
  wrenchBody[2] = 0.707106781188*thrusterForceN[1] - 0.707106781188*thrusterForceN[2] + 0.707106781181*thrusterForceN[3] - 0.707106781181*thrusterForceN[4];
  wrenchBody[3] = thrusterForceN[5] + thrusterForceN[6] + thrusterForceN[7] + thrusterForceN[8];
  wrenchBody[4] = 0.051265241636*thrusterForceN[1] - 0.051265241636*thrusterForceN[2] + 0.051265241636*thrusterForceN[3] - 0.051265241636*thrusterForceN[4]
                - 0.21805*thrusterForceN[5] - 0.21805*thrusterForceN[6] + 0.21805*thrusterForceN[7] + 0.21805*thrusterForceN[8];
  wrenchBody[5] = -0.051265241636*thrusterForceN[1] - 0.051265241636*thrusterForceN[2] + 0.051265241636*thrusterForceN[3] + 0.051265241636*thrusterForceN[4]
                - 0.12*thrusterForceN[5] + 0.12*thrusterForceN[6] - 0.12*thrusterForceN[7] + 0.12*thrusterForceN[8];
  wrenchBody[6] = 0.166523646969*thrusterForceN[1] - 0.166523646969*thrusterForceN[2] - 0.175008928343*thrusterForceN[3] + 0.175008928343*thrusterForceN[4];

  verificationBlueROV2H_input_wrench.in_tau_x = wrenchScale*wrenchBody[1]*enableSurge*armed;
  verificationBlueROV2H_input_wrench.in_tau_y = wrenchScale*wrenchBody[2]*enableSway*armed;
  verificationBlueROV2H_input_wrench.in_tau_z = wrenchScale*wrenchBody[3]*enableHeave*armed;
  verificationBlueROV2H_input_wrench.in_tau_roll = wrenchScale*wrenchBody[4]*enableRoll*armed;
  verificationBlueROV2H_input_wrench.in_tau_pitch = wrenchScale*wrenchBody[5]*enablePitch*armed;
  verificationBlueROV2H_input_wrench.in_tau_yaw = wrenchScale*wrenchBody[6]*enableYaw*armed;

  for i in 1:3 loop
    gt_pos[i] = dataset.y[8 + i];
    gt_EA[i] = dataset.y[17 + i];
    gt_vel_body[i] = dataset.y[11 + i];
    gt_ang_vel_body[i] = dataset.y[14 + i];
  end for;

  connect(verificationBlueROV2H_input_wrench.out_pos_body_wrt_NED0_in_NED0, blueROV2HWrenchGroundthruthVerification.sim_pos);
  connect(verificationBlueROV2H_input_wrench.out_EA,
        blueROV2HWrenchGroundthruthVerification.sim_EA);
  connect(verificationBlueROV2H_input_wrench.out_lin_vel_body, blueROV2HWrenchGroundthruthVerification.sim_vel_body);
  connect(verificationBlueROV2H_input_wrench.out_ang_vel_ome, blueROV2HWrenchGroundthruthVerification.sim_ang_vel_body);

  blueROV2HWrenchGroundthruthVerification.gt_pos = gt_pos;
  blueROV2HWrenchGroundthruthVerification.gt_EA = gt_EA;
  blueROV2HWrenchGroundthruthVerification.gt_vel_body = gt_vel_body;
  blueROV2HWrenchGroundthruthVerification.gt_ang_vel_body = gt_ang_vel_body;

  annotation(
    experiment(StopTime = 8.5, Interval = 0.02, Tolerance = 1e-05));
end VerificationBlueROV2H_wrench;
