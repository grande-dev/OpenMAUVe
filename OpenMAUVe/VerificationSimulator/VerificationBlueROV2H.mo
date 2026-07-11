within OpenMAUVe.VerificationSimulator;

model VerificationBlueROV2H "BlueROV2H replay from dataset RCOut PWM converted to individual thruster forces."
  import Modelica.Units.SI;

  parameter String dataFile = Modelica.Utilities.Files.loadResource("modelica://OpenMAUVe/VerificationSimulator/Data/BlueROV2H/0-data-for-OpenMAUVe/1-txt_file_input_to_OpenMAUVe/extracted_bag_data_table.txt") "OpenModelica text table file";
  parameter String tableName = "bluerov2h_bag_data" "Dataset table name in text file";
  parameter Boolean useDatasetFile = true "Set false to use internal zero table";
  parameter Boolean useBatteryVoltageInput = true "Use dataset battery voltage when positive; otherwise use batteryVoltage";
  parameter Real batteryVoltage = 15.0 "Fallback battery voltage signal when the dataset voltage is unavailable";
  parameter Real cutoff_freq_thtuster_filter = 2.0 "Cutoff frequency of the low pass filter of the thruster forces";
  parameter SI.Density rho_0 = 999.97 "Water density [kg/m3]" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Mass m_h = 11.26 "Mass of rigid body (hull)" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Mass m_w = 0.0 "Point mass" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Volume nabla_0 = (m_h + 0.1)/rho_0 "Hull volume" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Position r_0[3] = {-0.879, 0.48, 0.18} "Initial position vector from NED frame to origin of hull" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Angle e_0[3] = {0.0, 0.0, 1.2802} "Initial attitude";

  // Internal fallback table: [time, T1..T8, pos_x..pos_z, vel_x..vel_z, p..r, roll..yaw, cmd wrench, armed, pwm_x..pwm_yaw, rcout_1..rcout_8, battery_voltage_v]
  parameter Real fallbackTable[2, 43] = [
    0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 15.0;
    1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 15.0
  ];

  Vehicles.auvBluROV2H auvBluROV2H(
    command_thrusters_as_force = true,
    rho_0 = rho_0,
    m_h = m_h,
    m_w = m_w,
    nabla_0 = nabla_0,
    r_0 = r_0, euler_0 = e_0) annotation(
    Placement(transformation(origin = {69, -21}, extent = {{-81, -81}, {81, 81}})));

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
    Placement(transformation(origin = {-214, -8}, extent = {{-16, -16}, {16, 16}})));

  Modelica.Blocks.Sources.Constant zeroCurrent[3](each k = 0.0) annotation(
    Placement(transformation(origin = {-88, 122}, extent = {{-8, -8}, {8, 8}})));

  GroundthruthVerification.BlueROV2HWrenchGroundthruthVerification blueROV2HGroundthruthVerification(checkTimeInit = 0.0, checkTimeFinal = 1e9) annotation(
    Placement(transformation(origin = {224, -10}, extent = {{-24, -24}, {24, 24}})));

  Real commandedWrench[6] "Dataset wrench command, retained only for comparison";
  Real commandedAxisPwm[6] "Dataset six-axis PWM command before final motor mixing";
  Real inputPwm[8] "Dataset final RCOut PWM channels [FS,FP,AS,AP,VFS,VFP,VAS,VAP]";
  Real batteryVoltageInput "Battery voltage signal used by the PWM-to-force polynomial";
  Real thrusterForceRCOut[8] "Force reconstructed for each MAVROS-order RCOut channel";
  Real thrusterForceVehicle[8] "Force sent to auvBluROV2H, in MAVROS order";
  Real inputWrench[6] "Equivalent wrench reconstructed from the force commands";
  Real gt_pos[3];
  Real gt_EA[3];
  Real gt_vel_body[3];
  Real gt_ang_vel_body[3];
  BlueROV2H_in_pwm_out_forces pwmToForces annotation(
    Placement(transformation(origin = {-139.571, -12.7778}, extent = {{-34.4286, -26.7778}, {34.4286, 26.7778}})));
  Modelica.Blocks.Continuous.Filter filter_force_T1(order = 1, f_cut = cutoff_freq_thtuster_filter)  annotation(
    Placement(transformation(origin = {-70, 88}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T11(f_cut = cutoff_freq_thtuster_filter, order = 1) annotation(
    Placement(transformation(origin = {-70, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T111(f_cut = cutoff_freq_thtuster_filter, order = 1) annotation(
    Placement(transformation(origin = {-70, 30}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T1111(f_cut = cutoff_freq_thtuster_filter, order = 1) annotation(
    Placement(transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T11111(f_cut = cutoff_freq_thtuster_filter, order = 1) annotation(
    Placement(transformation(origin = {-70, -30}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T111111(f_cut = cutoff_freq_thtuster_filter, order = 1) annotation(
    Placement(transformation(origin = {-70, -60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T1111111(f_cut = cutoff_freq_thtuster_filter, order = 1) annotation(
    Placement(transformation(origin = {-70, -92}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T11111111(f_cut = cutoff_freq_thtuster_filter, order = 1) annotation(
    Placement(transformation(origin = {-70, -124}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain gain(k = 0)  annotation(
    Placement(transformation(origin = {-35, -29}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Math.Gain gain1(k = 0)  annotation(
    Placement(transformation(origin = {-33, -59}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Math.Gain gain11(k = 0) annotation(
    Placement(transformation(origin = {-31, -91}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Math.Gain gain111(k = 0) annotation(
    Placement(transformation(origin = {-31, -123}, extent = {{-7, -7}, {7, 7}})));
equation
  commandedWrench = {dataset.y[21], dataset.y[22], dataset.y[23], dataset.y[24], dataset.y[25], dataset.y[26]};
  commandedAxisPwm = {dataset.y[28], dataset.y[29], dataset.y[30], dataset.y[31], dataset.y[32], dataset.y[33]};
  batteryVoltageInput = if useBatteryVoltageInput and dataset.y[42] > 1e-9 then dataset.y[42] else batteryVoltage;

  for i in 1:8 loop
    inputPwm[i] = dataset.y[33 + i];
    pwmToForces.in_pwm[i] = inputPwm[i];
    thrusterForceRCOut[i] = pwmToForces.out_thruster_force[i];
    thrusterForceVehicle[i] = pwmToForces.out_thruster_force[i];
  end for;

  pwmToForces.in_voltage = batteryVoltageInput;
  inputWrench = pwmToForces.out_wrench;

  /*
  auvBluROV2H.in_thruster_f_s = pwmToForces.out_thruster_force[1];
  auvBluROV2H.in_thruster_f_p = pwmToForces.out_thruster_force[2];
  auvBluROV2H.in_thruster_a_s = pwmToForces.out_thruster_force[3];
  auvBluROV2H.in_thruster_a_p = pwmToForces.out_thruster_force[4];
  auvBluROV2H.in_thruster_v_f_s = pwmToForces.out_thruster_force[5];
  auvBluROV2H.in_thruster_v_f_p = pwmToForces.out_thruster_force[6];
  auvBluROV2H.in_thruster_v_a_s = pwmToForces.out_thruster_force[7];
  auvBluROV2H.in_thruster_v_a_p = pwmToForces.out_thruster_force[8];
  */

  for i in 1:3 loop
    gt_pos[i] = dataset.y[8 + i];
    gt_EA[i] = dataset.y[17 + i];
    gt_vel_body[i] = dataset.y[11 + i];
    gt_ang_vel_body[i] = dataset.y[14 + i];
  end for;

  connect(zeroCurrent.y, auvBluROV2H.env_current_speed) annotation(
    Line(points = {{-79, 122}, {68, 122}, {68, 50}}, color = {0, 0, 127}, thickness = 0.5));

  connect(auvBluROV2H.out_pos_body_wrt_NED0_in_NED0, blueROV2HGroundthruthVerification.sim_pos);
  connect(auvBluROV2H.out_angle_DCM, blueROV2HGroundthruthVerification.sim_EA);
  connect(auvBluROV2H.out_lin_vel_body, blueROV2HGroundthruthVerification.sim_vel_body);
  connect(auvBluROV2H.out_ang_vel_ome, blueROV2HGroundthruthVerification.sim_ang_vel_body);

  blueROV2HGroundthruthVerification.gt_pos = gt_pos;
  blueROV2HGroundthruthVerification.gt_EA = gt_EA;
  blueROV2HGroundthruthVerification.gt_vel_body = gt_vel_body;
  blueROV2HGroundthruthVerification.gt_ang_vel_body = gt_ang_vel_body;
  connect(pwmToForces.out_thruster_force[1], filter_force_T1.u) annotation(
    Line(points = {{-112, -4}, {-96, -4}, {-96, 88}, {-82, 88}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[2], filter_force_T11.u) annotation(
    Line(points = {{-112, -4}, {-96, -4}, {-96, 60}, {-82, 60}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[3], filter_force_T111.u) annotation(
    Line(points = {{-112, -4}, {-96, -4}, {-96, 30}, {-82, 30}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[4], filter_force_T1111.u) annotation(
    Line(points = {{-112, -4}, {-90, -4}, {-90, 0}, {-82, 0}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[5], filter_force_T11111.u) annotation(
    Line(points = {{-112, -4}, {-96, -4}, {-96, -30}, {-82, -30}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[6], filter_force_T111111.u) annotation(
    Line(points = {{-112, -4}, {-96, -4}, {-96, -60}, {-82, -60}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[7], filter_force_T1111111.u) annotation(
    Line(points = {{-112, -4}, {-96, -4}, {-96, -92}, {-82, -92}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[8], filter_force_T11111111.u) annotation(
    Line(points = {{-112, -4}, {-96, -4}, {-96, -124}, {-82, -124}}, color = {0, 0, 127}));
  connect(filter_force_T11111.y, gain.u) annotation(
    Line(points = {{-58, -30}, {-44, -30}, {-44, -28}}, color = {0, 0, 127}));
  connect(filter_force_T111111.y, gain1.u) annotation(
    Line(points = {{-58, -60}, {-42, -60}, {-42, -58}}, color = {0, 0, 127}));
  connect(filter_force_T1111111.y, gain11.u) annotation(
    Line(points = {{-58, -92}, {-49, -92}, {-49, -90}, {-40, -90}}, color = {0, 0, 127}));
  connect(filter_force_T11111111.y, gain111.u) annotation(
    Line(points = {{-58, -124}, {-49, -124}, {-49, -122}, {-40, -122}}, color = {0, 0, 127}));
  connect(filter_force_T1.y, auvBluROV2H.in_thruster_f_s) annotation(
    Line(points = {{-58, 88}, {-28, 88}, {-28, 36}, {8, 36}}, color = {0, 0, 127}));
  connect(filter_force_T11.y, auvBluROV2H.in_thruster_f_p) annotation(
    Line(points = {{-58, 60}, {-32, 60}, {-32, 22}, {8, 22}}, color = {0, 0, 127}));
  connect(filter_force_T111.y, auvBluROV2H.in_thruster_a_s) annotation(
    Line(points = {{-58, 30}, {-36, 30}, {-36, 8}, {8, 8}}, color = {0, 0, 127}));
  connect(filter_force_T1111.y, auvBluROV2H.in_thruster_a_p) annotation(
    Line(points = {{-58, 0}, {-34, 0}, {-34, -4}, {8, -4}}, color = {0, 0, 127}));
  connect(gain.y, auvBluROV2H.in_thruster_v_f_s) annotation(
    Line(points = {{-28, -28}, {-22, -28}, {-22, -18}, {8, -18}}, color = {0, 0, 127}));
  connect(gain1.y, auvBluROV2H.in_thruster_v_f_p) annotation(
    Line(points = {{-26, -58}, {-20, -58}, {-20, -30}, {8, -30}}, color = {0, 0, 127}));
  connect(gain11.y, auvBluROV2H.in_thruster_v_a_s) annotation(
    Line(points = {{-24, -90}, {-10, -90}, {-10, -46}, {8, -46}}, color = {0, 0, 127}));
  connect(gain111.y, auvBluROV2H.in_thruster_v_a_p) annotation(
    Line(points = {{-24, -122}, {-4, -122}, {-4, -62}, {8, -62}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 300.0, Interval = 0.02, Tolerance = 1e-05),
    Diagram(coordinateSystem(extent = {{-240, -160}, {220, 140}})),
    Icon(coordinateSystem(extent = {{-240, -160}, {220, 140}})));
end VerificationBlueROV2H;