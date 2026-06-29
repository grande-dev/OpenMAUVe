within OpenMAUVe.Vehicles;

model Generic_AUV_3d_deprecated "Legacy generic AUV model with direct 4-thruster force allocation"
  import SI = Modelica.Units.SI;
  inner Modelica.Mechanics.MultiBody.World world(g = g, n(each displayUnit = "1") = {0, 0, 1}) annotation(
    Placement(visible = true, transformation(extent = {{38, 72}, {58, 92}}, rotation = 0)));
  parameter SI.Density rho = 1000 "Water density [kg/m3]";
  parameter SI.Acceleration g = 9.81 "Gravity constant";
  parameter SI.Position r_CM_hull[3] = {0.0, 0.0, 0.0} "Hull COM position wrt to COB";
  parameter SI.Mass m_h = 500.0 "Mass of rigid body (hull)";
  parameter SI.Inertia I_11 = 300.0 "(1,1) element of inertia tensor of hull";
  parameter SI.Inertia I_22 = 300.0 "(2,2) element of inertia tensor of hull";
  parameter SI.Inertia I_33 = 300.0 "(3,3) element of inertia tensor of hull";
  parameter SI.Volume nabla_0 = 500/1000 "Neutral vehicle volume (mass/rho)";
  parameter Real X_udot(unit = "kg") = 0.0 "(1,1) element of added mass matrix";
  parameter Real Y_vdot(unit = "kg") = 0.0 "(2,2) element of added mass matrix";
  parameter Real Z_wdot(unit = "kg") = 0.0 "(3,3) element of added mass matrix";
  parameter Real K_pdot(unit = "kg.m2") = 0.0 "(4,4) element of added mass matrix";
  parameter Real M_qdot(unit = "kg.m2") = 0.0 "(5,5) element of added mass matrix";
  parameter Real N_rdot(unit = "kg.m2") = 0.0 "(6,6) element of added mass matrix";
  parameter Real Y_rdot(unit = "kg.m") = 0.0 "(2,6) element of added mass matrix";
  parameter Real Z_qdot(unit = "kg.m") = 0.0 "(3,5) element of added mass matrix";
  parameter Real M_wdot(unit = "kg.m") = 0.0 "(5,3) element of added mass matrix";
  parameter Real N_vdot(unit = "kg.m") = 0.0 "(6,2) element of added mass matrix";
  parameter Real X_u(unit = "kg/s") = 6.106 "linear surge drag coefficient";
  parameter Real X_uu(unit = "kg/m") = 5.0 "quadratic surge drag coefficient";
  parameter Real Y_v(unit = "kg/s") = 6.106 "linear sway drag coefficient";
  parameter Real Y_vv(unit = "kg/m") = 5.0 "quadratic sway drag coefficient";
  parameter Real Z_w(unit = "kg/s") = 6.106 "linear heave drag coefficient";
  parameter Real Z_ww(unit = "kg/m") = 5.0 "quadratic heave drag coefficient";
  parameter Real K_p(unit = "kg.m2/s") = 210.0 "linear roll drag coefficient";
  parameter Real K_pp(unit = "kg.m2") = 3.0 "quadratic roll drag coefficient";
  parameter Real M_q(unit = "kg.m2/s") = 210.0 "linear pitch drag coefficient";
  parameter Real M_qq(unit = "kg.m2") = 3.0 "quadratic pitch drag coefficient";
  parameter Real N_r(unit = "kg.m2/s") = 210.0 "linear yaw drag coefficient";
  parameter Real N_rr(unit = "kg.m2") = 3.0 "quadratic yaw drag coefficient";
  parameter SI.Angle alpha1 = Modelica.Units.Conversions.from_deg(110.0) "orientation thruster 1";
  parameter SI.Length l1x = -1.01 "distance from thruster 1 to COG (x-axis)";
  parameter SI.Length l1y = -0.353 "distance from thruster 1 to COG (y-axis)";
  parameter SI.Angle alpha2 = Modelica.Units.Conversions.from_deg(70.0) "orientation thruster 2";
  parameter SI.Length l2x = -1.01 "distance from thruster 2 to COG (x-axis)";
  parameter SI.Length l2y = 0.353 "distance from thruster 2 to COG (y-axis)";
  parameter SI.Angle alpha3 = Modelica.Units.Conversions.from_deg(110.0) "orientation thruster 3";
  parameter SI.Length l3x = 1.01 "distance from thruster 3 to COG (x-axis)";
  parameter SI.Length l3y = -0.353 "distance from thruster 3 to COG (y-axis)";
  parameter SI.Angle alpha4 = Modelica.Units.Conversions.from_deg(70.0) "orientation thruster 4";
  parameter SI.Length l4x = 1.01 "distance from thruster 4 to COG (x-axis)";
  parameter SI.Length l4y = 0.353 "distance from thruster 4 to COG (y-axis)";
  parameter Modelica.Units.SI.Position r_0[3] = {0, 0, 0} "Initial hull position";
  parameter Modelica.Units.SI.Velocity v_0[3] = {0.0, 0, 0.0} "Initial hull velocity";
  parameter Modelica.Units.SI.Angle euler_0[3] = {0, 0, 0} "Initial hull Euler angles";
  parameter Modelica.Units.SI.AngularVelocity w_0[3] = {0, 0, 0} "Initial hull angular velocity";
  parameter Boolean enableAddedMass = true "Enables/disables the added mass contribution";
  parameter Boolean enableBuoyancy = true "Enables/disables buoyancy";
  parameter Boolean enableHydrodynamic = true "Enables/disables hydrodynamic forces/torques";
  parameter Boolean enableActuators = true "Enables/disables the actuators";
  Real[3] Euler_dot;
  Modelica.Mechanics.MultiBody.Parts.Body hull(I_11 = I_11, I_22 = I_22, I_33 = I_33, angles_fixed = true, angles_start(each displayUnit = "rad") = euler_0, animation = false, m = m_h, r_0(each fixed = true, start = r_0), final r_CM = {0, 0, 0}, sequence_start = {3, 2, 1}, v_0(each fixed = true, start = v_0), w_0_fixed = true, w_0_start = w_0, sequence_angleStates = {3, 2, 1}) annotation(
    Placement(visible = true, transformation(origin = {160, -28}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation translation_toComHull(animation = false, r = r_CM_hull) annotation(
    Placement(visible = true, transformation(extent = {{104, -38}, {124, -18}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Visualizers.FixedShape shape_hull(animation = true, color = {0, 0, 255}, height = 0.1, length = 0.1, r_shape = {-0.05, 0.0, 0.0}, width = 0.1) annotation(
    Placement(visible = true, transformation(origin = {150, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Visualizers.FixedFrame fixedFrame annotation(
    Placement(visible = true, transformation(extent = {{179, -54}, {199, -34}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Sensors.RelativeVelocity LinVelBody(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_b) annotation(
    Placement(visible = true, transformation(origin = {84, 68}, extent = {{10, -10}, {-10, 10}}, rotation = 90)));
  Modelica.Mechanics.MultiBody.Sensors.RelativeAngularVelocity relativeAngularVelocity(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameAB.frame_b) annotation(
    Placement(visible = true, transformation(origin = {107, 37}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteAngles absoluteAngles annotation(
    Placement(visible = true, transformation(origin = {131, 9}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.MultiBody.Sensors.AbsolutePosition absolutePosition(resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameA.world) annotation(
    Placement(visible = true, transformation(origin = {162, 64}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Parts.HydrodynamicForcesTorques_generic hydrodynamicForcesTorques_generic(K_p = K_p, K_pp = K_pp, M_q = M_q, M_qq = M_qq, N_r = N_r, N_rr = N_rr, X_u = X_u, X_uu = X_uu, Y_v = Y_v, Y_vv = Y_vv, Z_w = Z_w, Z_ww = Z_ww) if enableHydrodynamic annotation(
    Placement(visible = true, transformation(origin = {-92.5, 10}, extent = {{-29.5, -20}, {29.5, 20}}, rotation = 0)));
  Parts.BuoyancyForce buoyancyForce(g = g, nabla_0 = nabla_0, rho = rho) if enableBuoyancy annotation(
    Placement(visible = true, transformation(origin = {-89, -45.5}, extent = {{-22, -15.5}, {22, 15.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant variable_volume(k = 0.0) if enableBuoyancy annotation(
    Placement(visible = true, transformation(origin = {-135, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Parts.TAM_4Thrusters tAM_4Thrusters(alpha1 = alpha1, alpha2 = alpha2, alpha3 = alpha3, alpha4 = alpha4, l1x = l1x, l1y = l1y, l2x = l2x, l2y = l2y, l3x = l3x, l3y = l3y, l4x = l4x, l4y = l4y) if enableActuators annotation(
    Placement(visible = true, transformation(origin = {-99, 81}, extent = {{-23, -23}, {23, 23}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput F1 annotation(
    Placement(visible = true, transformation(origin = {-220, 127}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-252, 147}, extent = {{-14, -14}, {14, 14}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput F2 annotation(
    Placement(visible = true, transformation(origin = {-219, 96}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-252, 49}, extent = {{-14, -14}, {14, 14}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput F3 annotation(
    Placement(visible = true, transformation(origin = {-218, 65}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-248, -48}, extent = {{-14, -14}, {14, 14}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput F4 annotation(
    Placement(visible = true, transformation(origin = {-218, 32}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-247, -148}, extent = {{-14, -14}, {14, 14}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_lin_vel_u annotation(
    Placement(visible = true, transformation(origin = {236, 208}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {255, 238}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_lin_vel_v annotation(
    Placement(visible = true, transformation(origin = {237, 191}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {255, 205}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_lin_vel_w annotation(
    Placement(visible = true, transformation(origin = {237, 170}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {255, 173}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_ang_vel_p annotation(
    Placement(visible = true, transformation(origin = {238, 153}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {256, 124}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_ang_vel_q annotation(
    Placement(visible = true, transformation(origin = {238, 135}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {255, 87}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_ang_vel_r annotation(
    Placement(visible = true, transformation(origin = {239, 115}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {256, 51}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_angle_roll annotation(
    Placement(visible = true, transformation(origin = {238, 23}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {258, -123}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_angle_pitch annotation(
    Placement(visible = true, transformation(origin = {238, 8}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {258, -152}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_angle_yaw annotation(
    Placement(transformation(origin = {238, -9}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {258, -186}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput out_pos_x annotation(
    Placement(visible = true, transformation(origin = {239, 91}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {258, -16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_pos_y annotation(
    Placement(visible = true, transformation(origin = {239, 74}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {258, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_pos_z annotation(
    Placement(visible = true, transformation(origin = {239, 56}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {258, -75}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput out_angles_DCM[3] annotation(
    Placement(transformation(origin = {239, -32}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {259, -219}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_1 annotation(
    Placement(transformation(origin = {199, -95}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_2 annotation(
    Placement(transformation(origin = {201, -130}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Continuous.Integrator integrator_EA_3 annotation(
    Placement(transformation(origin = {202, -168}, extent = {{-10, -10}, {10, 10}})));
equation
  Euler_dot = hull.frame_a.R.T*hull.w_a;
  integrator_EA_1.u = Euler_dot[1];
  integrator_EA_2.u = Euler_dot[2];
  integrator_EA_3.u = Euler_dot[3];
  connect(LinVelBody.v_rel[1], out_lin_vel_u);
  connect(LinVelBody.v_rel[2], out_lin_vel_v);
  connect(LinVelBody.v_rel[3], out_lin_vel_w);
  connect(relativeAngularVelocity.w_rel[1], out_ang_vel_p);
  connect(relativeAngularVelocity.w_rel[2], out_ang_vel_q);
  connect(relativeAngularVelocity.w_rel[3], out_ang_vel_r);
  connect(absoluteAngles.angles[1], out_angle_roll);
  connect(absoluteAngles.angles[2], out_angle_pitch);
  connect(absoluteAngles.angles[3], out_angle_yaw);
  connect(absolutePosition.r[1], out_pos_x);
  connect(absolutePosition.r[2], out_pos_y);
  connect(absolutePosition.r[3], out_pos_z);
  connect(integrator_EA_1.y, out_angles_DCM[1]);
  connect(integrator_EA_2.y, out_angles_DCM[2]);
  connect(integrator_EA_3.y, out_angles_DCM[3]);
  connect(translation_toComHull.frame_b, hull.frame_a);
  connect(hull.frame_a, shape_hull.frame_a);
  connect(fixedFrame.frame_a, shape_hull.frame_a);
  connect(LinVelBody.frame_b, translation_toComHull.frame_a);
  connect(LinVelBody.frame_a, world.frame_b);
  connect(relativeAngularVelocity.frame_b, translation_toComHull.frame_a);
  connect(relativeAngularVelocity.frame_a, world.frame_b);
  connect(absoluteAngles.frame_a, hull.frame_a);
  connect(absolutePosition.frame_a, translation_toComHull.frame_b);
  connect(hydrodynamicForcesTorques_generic.frame_b, translation_toComHull.frame_a);
  connect(variable_volume.y, buoyancyForce.in_variable_volume);
  connect(buoyancyForce.frame_b, translation_toComHull.frame_a);
  connect(F1, tAM_4Thrusters.F1);
  connect(F2, tAM_4Thrusters.F2);
  connect(F3, tAM_4Thrusters.F3);
  connect(F4, tAM_4Thrusters.F4);
  connect(tAM_4Thrusters.frame_b, translation_toComHull.frame_a);
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-250, -250}, {250, 250}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-250, -250}, {250, 250}}, grid = {1, 1})),
    experiment(StopTime = 30, Interval = 0.1));
end Generic_AUV_3d_deprecated;