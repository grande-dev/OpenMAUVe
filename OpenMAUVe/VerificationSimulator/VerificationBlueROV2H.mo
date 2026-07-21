within OpenMAUVe.VerificationSimulator;

model VerificationBlueROV2H "BlueROV2H replay from dataset RCOut PWM converted to individual thruster forces."
  import Modelica.Units.SI;
  parameter String dataFile = Modelica.Utilities.Files.loadResource("modelica://OpenMAUVe/VerificationSimulator/Data/BlueROV2H/0-data-for-OpenMAUVe/1-txt_file_input_to_OpenMAUVe/extracted_bag_data_table.txt") "OpenModelica text table file";
  parameter String tableName = "bluerov2h_bag_data" "Dataset table name in text file";
  parameter Boolean useDatasetFile = true "Set false to use internal zero table";
  parameter Boolean useBatteryVoltageInput = true "Use dataset battery voltage when positive; otherwise use batteryVoltage";
  parameter Real batteryVoltage = 15.0 "Fallback battery voltage signal when the dataset voltage is unavailable";
  parameter Real cutoff_freq_thruster_filter = 30.0 "Cutoff frequency of the low pass filter of the thruster forces";
  parameter Real pwmForceSign[8] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0} "Per-MAVROS-channel sign from PWM fit to positive mounted thruster force";
  parameter Real verticalThrusterForceScale[4] = {1.0, 1.0, 1.0, 1.0} "Scale applied to filtered vertical thruster forces [VFS,VFP,VAS,VAP]";
  parameter SI.Density rho_0 = 999.97 "Water density [kg/m3]" annotation(
    Dialog(tab = "Vehicle"));

  parameter SI.Position r_0[3] = {-0.879, 0.48, 0.0} "Initial position vector from NED frame to origin of hull" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.Angle e_0[3] = {0.000763154965117, 0.016573613448, 1.28026281558} "Initial attitude from the first dataset sample [roll,pitch,yaw]";
  parameter SI.Velocity v_0[3] = {0.005, 0.003, 0.0002} "Initial body fixed velocity vector" annotation(
    Dialog(tab = "Vehicle"));
  parameter SI.AngularVelocity w_0[3] = {0.001, 0.003, 0.003} "Initial angular velocity" annotation(
    Dialog(tab = "Vehicle"));

  parameter SI.Inertia I_33 = 0.58 "(3,3) element of inertia tensor of hull" annotation(
    Dialog(tab = "Vehicle geometry"));
  // Internal fallback table: [time, T1..T8, pos_x..pos_z, vel_x..vel_z, p..r, roll..yaw, cmd wrench, armed, pwm_x..pwm_yaw, rcout_1..rcout_8, battery_voltage_v]
  parameter Real fallbackTable[2, 43] = [0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 15.0; 1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 15.0];
  Vehicles.auvBluROV2H auvBluROV2H_params1(command_thrusters_as_force = true, rho_0 = rho_0, r_0 = r_0, euler_0 = {e_0[3], e_0[2], e_0[1]}, v_0 = v_0, w_0 = w_0, enable_thrusters = false, vehicleParameterSet = 3) annotation(
    Placement(transformation(origin = {99, 61}, extent = {{-81, -81}, {81, 81}})));
  Modelica.Blocks.Sources.CombiTimeTable dataset(tableOnFile = useDatasetFile, table = fallbackTable, tableName = tableName, fileName = dataFile, columns = 2:43, smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation = Modelica.Blocks.Types.Extrapolation.HoldLastPoint, verboseRead = true, verboseExtrapolation = false) annotation(
    Placement(transformation(origin = {-266, -40}, extent = {{-16, -16}, {16, 16}})));
  Modelica.Blocks.Sources.Constant zeroCurrent[3](each k = 0.0) annotation(
    Placement(transformation(origin = {0, 176}, extent = {{-8, -8}, {8, 8}})));
  GroundthruthVerification.BlueROV2HGroundtruthVerification blueROV2HGroundtruthVerification(checkTimeInit = 0.0, checkTimeFinal = 1e9) annotation(
    Placement(transformation(origin = {274, 52}, extent = {{-54, -54}, {54, 54}})));
  Real commandedWrench[6] "Dataset wrench command, retained only for comparison";
  Real commandedAxisPwm[6] "Dataset six-axis PWM command before final motor mixing";
  Real inputPwm[8] "Dataset final RCOut PWM channels [FS,FP,AS,AP,VFS,VFP,VAS,VAP]";
  Real batteryVoltageInput "Battery voltage signal used by the PWM-to-force polynomial";
  Real vehicleArmed "1.0 when vehicle is armed, 0.0 when disarmed";
  Real thrusterForceRCOut[8] "Force reconstructed for each MAVROS-order RCOut channel";
  Real thrusterForceVehicle[8] "Force sent to auvBluROV2H, in MAVROS order";
  Real inputWrench[6] "Equivalent wrench reconstructed from the force commands";
  Real gt_pos[3];
  Real gt_EA[3];
  Real gt_EA_deg[3];
  Real sim_EA[3] "DCM-derived simulated Euler angles in dataset order [roll,pitch,yaw] in radians";
  Real sim_EA_deg[3] "DCM-derived simulated Euler angles in dataset order [roll,pitch,yaw] in degrees";
  Real gt_vel_body[3];
  Real gt_ang_vel_body[3];
  BlueROV2H_in_pwm_out_forces pwmToForces(pwmForceSign = pwmForceSign) annotation(
    Placement(transformation(origin = {-191.571, -12.7778}, extent = {{-34.4286, -26.7778}, {34.4286, 26.7778}})));
  Modelica.Blocks.Continuous.Filter filter_force_T1(order = 1, f_cut = cutoff_freq_thruster_filter) annotation(
    Placement(transformation(origin = {-122, 88}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T11(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-122, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T111(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-122, 30}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T1111(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-122, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T11111(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-122, -30}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T111111(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-122, -60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T1111111(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-122, -92}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Filter filter_force_T11111111(f_cut = cutoff_freq_thruster_filter, order = 1) annotation(
    Placement(transformation(origin = {-122, -124}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Math.Gain gain(k = verticalThrusterForceScale[1]) annotation(
    Placement(transformation(origin = {-87, -29}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Math.Gain gain1(k = verticalThrusterForceScale[2]) annotation(
    Placement(transformation(origin = {-85, -59}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Math.Gain gain11(k = verticalThrusterForceScale[3]) annotation(
    Placement(transformation(origin = {-83, -91}, extent = {{-7, -7}, {7, 7}})));
  Modelica.Blocks.Math.Gain gain111(k = verticalThrusterForceScale[4]) annotation(
    Placement(transformation(origin = {-83, -123}, extent = {{-7, -7}, {7, 7}})));
  Utilities.util_filter_wrench_propulsion util_filter_wrench_propulsion(cutoff_freq_thruster_filter = cutoff_freq_thruster_filter) annotation(
    Placement(transformation(origin = {-120, -168}, extent = {{-10, -10}, {10, 10}})));
equation
  commandedWrench = {dataset.y[21], dataset.y[22], dataset.y[23], dataset.y[24], dataset.y[25], dataset.y[26]};
  commandedAxisPwm = {dataset.y[28], dataset.y[29], dataset.y[30], dataset.y[31], dataset.y[32], dataset.y[33]};
  batteryVoltageInput = if useBatteryVoltageInput and dataset.y[42] > 1e-9 then dataset.y[42] else batteryVoltage;
  vehicleArmed = dataset.y[27];
  for i in 1:8 loop
    inputPwm[i] = dataset.y[33 + i]*vehicleArmed;
    pwmToForces.in_pwm[i] = inputPwm[i];
    thrusterForceRCOut[i] = pwmToForces.out_thruster_force[i];
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
    gt_EA_deg[i] = Modelica.Units.Conversions.to_deg(gt_EA[i]);
    sim_EA_deg[i] = Modelica.Units.Conversions.to_deg(sim_EA[i]);
    gt_vel_body[i] = dataset.y[11 + i];
    gt_ang_vel_body[i] = dataset.y[14 + i];
  end for;
  sim_EA = auvBluROV2H_params1.signalBus.EulerAngles;
  thrusterForceVehicle = {filter_force_T1.y, filter_force_T11.y, filter_force_T111.y, filter_force_T1111.y, gain.y, gain1.y, gain11.y, gain111.y};
  util_filter_wrench_propulsion.in_control_wrench[1] = commandedWrench[1]*vehicleArmed;
  util_filter_wrench_propulsion.in_control_wrench[2] = commandedWrench[2]*vehicleArmed;
  util_filter_wrench_propulsion.in_control_wrench[3] = commandedWrench[3]*vehicleArmed;
  util_filter_wrench_propulsion.in_control_wrench[4] = commandedWrench[4]*vehicleArmed;
  util_filter_wrench_propulsion.in_control_wrench[5] = commandedWrench[5]*vehicleArmed;
  util_filter_wrench_propulsion.in_control_wrench[6] = commandedWrench[6]*vehicleArmed;
  connect(zeroCurrent.y, auvBluROV2H_params1.env_current_speed) annotation(
    Line(points = {{8.8, 176}, {78.3, 176}, {78.3, 122}, {97.8, 122}}, color = {0, 0, 127}, thickness = 0.5));
  connect(auvBluROV2H_params1.out_pos_body_wrt_NED0_in_NED0, blueROV2HGroundtruthVerification.sim_pos);
  connect(auvBluROV2H_params1.out_lin_vel_body, blueROV2HGroundtruthVerification.sim_vel_body);
  connect(auvBluROV2H_params1.out_ang_vel_ome, blueROV2HGroundtruthVerification.sim_ang_vel_body);
  blueROV2HGroundtruthVerification.gt_pos = gt_pos;
  blueROV2HGroundtruthVerification.sim_EA = sim_EA_deg;
  blueROV2HGroundtruthVerification.gt_EA = gt_EA_deg;
  blueROV2HGroundtruthVerification.gt_vel_body = gt_vel_body;
  blueROV2HGroundtruthVerification.gt_ang_vel_body = gt_ang_vel_body;
  connect(pwmToForces.out_thruster_force[1], filter_force_T1.u) annotation(
    Line(points = {{-164.793, -3.59684}, {-148.793, -3.59684}, {-148.793, 88.403}, {-134.793, 88.403}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[2], filter_force_T11.u) annotation(
    Line(points = {{-164.793, -3.59684}, {-148.793, -3.59684}, {-148.793, 60.4032}, {-134.793, 60.4032}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[3], filter_force_T111.u) annotation(
    Line(points = {{-164.793, -3.59684}, {-148.793, -3.59684}, {-148.793, 30.4032}, {-134.793, 30.4032}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[4], filter_force_T1111.u) annotation(
    Line(points = {{-164.793, -3.59684}, {-142.793, -3.59684}, {-142.793, 0.40316}, {-134.793, 0.40316}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[5], filter_force_T11111.u) annotation(
    Line(points = {{-164.793, -3.59684}, {-148.793, -3.59684}, {-148.793, -29.5969}, {-134.793, -29.5969}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[6], filter_force_T111111.u) annotation(
    Line(points = {{-164.793, -3.59684}, {-148.793, -3.59684}, {-148.793, -59.5968}, {-134.793, -59.5968}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[7], filter_force_T1111111.u) annotation(
    Line(points = {{-164.793, -3.59684}, {-148.793, -3.59684}, {-148.793, -91.5968}, {-134.793, -91.5968}}, color = {0, 0, 127}));
  connect(pwmToForces.out_thruster_force[8], filter_force_T11111111.u) annotation(
    Line(points = {{-164.793, -3.59684}, {-148.793, -3.59684}, {-148.793, -123.597}, {-134.793, -123.597}}, color = {0, 0, 127}));
  connect(filter_force_T11111.y, gain.u) annotation(
    Line(points = {{-111, -30}, {-97, -30}, {-97, -28}}, color = {0, 0, 127}));
  connect(filter_force_T111111.y, gain1.u) annotation(
    Line(points = {{-111, -60}, {-95, -60}, {-95, -58}}, color = {0, 0, 127}));
  connect(filter_force_T1111111.y, gain11.u) annotation(
    Line(points = {{-111, -92}, {-102, -92}, {-102, -90}, {-93, -90}}, color = {0, 0, 127}));
  connect(filter_force_T11111111.y, gain111.u) annotation(
    Line(points = {{-111, -124}, {-102, -124}, {-102, -122}, {-93, -122}}, color = {0, 0, 127}));
  connect(filter_force_T1.y, auvBluROV2H_params1.in_thruster_a_s) annotation(
    Line(points = {{-111, 88}, {-81, 88}, {-81, 87}, {47, 87}}, color = {0, 0, 127}));
  connect(filter_force_T11.y, auvBluROV2H_params1.in_thruster_a_p) annotation(
    Line(points = {{-111, 60}, {-85, 60}, {-85, 75}, {46, 75}}, color = {0, 0, 127}));
  connect(filter_force_T111.y, auvBluROV2H_params1.in_thruster_f_s) annotation(
    Line(points = {{-111, 30}, {-89, 30}, {-89, 110}, {47, 110}}, color = {0, 0, 127}));
  connect(filter_force_T1111.y, auvBluROV2H_params1.in_thruster_f_p) annotation(
    Line(points = {{-111, 0}, {-87, 0}, {-87, 98}, {47, 98}}, color = {0, 0, 127}));
  connect(gain.y, auvBluROV2H_params1.in_thruster_v_f_s) annotation(
    Line(points = {{-79.3, -29}, {-73.3, -29}, {-73.3, 64}, {46, 64}}, color = {0, 0, 127}));
  connect(gain1.y, auvBluROV2H_params1.in_thruster_v_f_p) annotation(
    Line(points = {{-77.3, -59}, {-71.3, -59}, {-71.3, 53}, {47, 53}}, color = {0, 0, 127}));
  connect(gain11.y, auvBluROV2H_params1.in_thruster_v_a_s) annotation(
    Line(points = {{-75.3, -91}, {-61.3, -91}, {-61.3, 40}, {47, 40}}, color = {0, 0, 127}));
  connect(gain111.y, auvBluROV2H_params1.in_thruster_v_a_p) annotation(
    Line(points = {{-75.3, -123}, {-55.3, -123}, {-55.3, 26}, {47, 26}}, color = {0, 0, 127}));
  connect(util_filter_wrench_propulsion.out_wrench_filtered, auvBluROV2H_params1.in_wrench) annotation(
    Line(points = {{-108.6, -168.2}, {-48.6, -168.2}, {-48.6, 2.8}, {52.4, 2.8}}, color = {0, 0, 127}, thickness = 0.5));
/*
  annotation(
    __OpenModelica_simulationFlags(
      outputFormat = "mat",
      single = "()"
    )
  );
  */
  annotation(
    experiment(StopTime = 175.0, Interval = 0.02, Tolerance = 1e-05),
    Diagram(coordinateSystem(extent = {{-350, -350}, {350, 350}})),
    Icon(coordinateSystem(extent = {{-350, -350}, {350, 350}})));
end VerificationBlueROV2H;