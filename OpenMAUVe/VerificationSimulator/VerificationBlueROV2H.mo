within OpenMAUVe.VerificationSimulator;
model VerificationBlueROV2H "BlueROV2H replay from dataset thruster wrench and groundtruth comparison."
  import Modelica.Units.SI;

  parameter String dataFile = Modelica.Utilities.Files.loadResource("modelica://OpenMAUVe/VerificationSimulator/Data/BlueROV2H/extracted_bag_data_table.txt") "OpenModelica text table file";
  parameter String tableName = "bluerov2h_bag_data" "Dataset table name in text file";
  parameter Boolean useDatasetFile = true "Set false to use internal zero table";
  parameter Real thrusterForceScale = 1.0 "Scale factor for dataset thruster forces";

  // Internal fallback table: [time, T1..T8, pos_x..pos_z, vel_x..vel_z, p..r]
  parameter Real fallbackTable[2, 18] = [
    0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
    1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  ];

  Vehicles.auvBluROV2H auvBluROV2H(rho_0(displayUnit = "kg/m3") = 999.97) annotation(
    Placement(transformation(origin = {1, -10}, extent = {{-61, -52}, {61, 52}})));

  Modelica.Blocks.Sources.CombiTimeTable dataset(
    tableOnFile = useDatasetFile,
    table = fallbackTable,
    tableName = tableName,
    fileName = dataFile,
    columns = 2:18,
    smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation = Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    verboseRead = true,
    verboseExtrapolation = false) annotation(
    Placement(transformation(origin = {-130, -10}, extent = {{-16, -16}, {16, 16}})));

  Modelica.Blocks.Sources.Constant zeroCurrent[3](each k = 0.0) annotation(
    Placement(transformation(origin = {-136, 70}, extent = {{-8, -8}, {8, 8}})));

  GroundthruthVerification.BlueROV2HGroundthruthVerification blueROV2HGroundthruthVerification(checkTimeInit = 0.0, checkTimeFinal = 1e9) annotation(
    Placement(transformation(origin = {160, -6}, extent = {{-24, -24}, {24, 24}})));

  Real thrusterForceN[8];
  Real thrusterRPM[8];
  Real gt_pos[3];
  Real gt_vel_body[3];
  Real gt_ang_vel_body[3];

protected
  parameter Real rpmForceGain = auvBluROV2H.rho_0*auvBluROV2H.D_p^4*auvBluROV2H.K_T;

equation
  assert(rpmForceGain > 0.0, "VerificationBlueROV2H: rho*D_p^4*K_T must be > 0 for force->RPM conversion");

  for i in 1:8 loop
    thrusterForceN[i] = thrusterForceScale*dataset.y[i];
    thrusterRPM[i] = if abs(thrusterForceN[i]) < 1e-9 then 0.0 else 60.0*(if thrusterForceN[i] >= 0.0 then 1.0 else -1.0)*sqrt(abs(thrusterForceN[i])/rpmForceGain);
  end for;

  for i in 1:3 loop
    gt_pos[i] = dataset.y[8 + i];
    gt_vel_body[i] = dataset.y[11 + i];
    gt_ang_vel_body[i] = dataset.y[14 + i];
  end for;

  // Thruster order in dataset table must be [T1..T8] matching [a_p, a_s, f_p, f_s, v_f_p, v_a_p, v_f_s, v_a_s].
  auvBluROV2H.in_thruster_a_p = thrusterRPM[1];
  auvBluROV2H.in_thruster_a_s = thrusterRPM[2];
  auvBluROV2H.in_thruster_f_p = thrusterRPM[3];
  auvBluROV2H.in_thruster_f_s = thrusterRPM[4];
  auvBluROV2H.in_thruster_v_f_p = thrusterRPM[5];
  auvBluROV2H.in_thruster_v_a_p = thrusterRPM[6];
  auvBluROV2H.in_thruster_v_f_s = thrusterRPM[7];
  auvBluROV2H.in_thruster_v_a_s = thrusterRPM[8];

  connect(zeroCurrent.y, auvBluROV2H.env_current_speed) annotation(
    Line(points = {{-127, 70}, {-127, 67}, {0, 67}, {0, 37}, {-1, 37}}, color = {0, 0, 127}, thickness = 0.5));

  connect(auvBluROV2H.out_pos_body_wrt_NED_in_NED, blueROV2HGroundthruthVerification.sim_pos) annotation(
    Line(points = {{58, -13}, {82.5, -13}, {82.5, 25}, {115, 25}}, color = {0, 0, 127}, thickness = 0.5));
  connect(auvBluROV2H.out_lin_vel_body, blueROV2HGroundthruthVerification.sim_vel_body) annotation(
    Line(points = {{58, 10}, {94, 10}, {94, 11}, {115, 11}}, color = {0, 0, 127}, thickness = 0.5));
  connect(auvBluROV2H.out_ang_vel_ome, blueROV2HGroundthruthVerification.sim_ang_vel_body) annotation(
    Line(points = {{58, 1}, {98, 1}, {98, -4}, {115, -4}}, color = {0, 0, 127}, thickness = 0.5));

  blueROV2HGroundthruthVerification.gt_pos = gt_pos;
  blueROV2HGroundthruthVerification.gt_vel_body = gt_vel_body;
  blueROV2HGroundthruthVerification.gt_ang_vel_body = gt_ang_vel_body;

  annotation(
    experiment(StopTime = 200.0, Interval = 0.02, Tolerance = 1e-05));
end VerificationBlueROV2H;
