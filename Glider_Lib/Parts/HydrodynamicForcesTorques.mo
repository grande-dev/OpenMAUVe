within Glider_Lib.Parts;
model HydrodynamicForcesTorques
  Modelica.Mechanics.MultiBody.Forces.WorldForce force(color = {255, 0, 0}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b)
    annotation (Placement(transformation(extent={{40,-10},{60,10}})));
  Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_b annotation (Placement(
        transformation(extent={{84,-16},{116,16}}), iconTransformation(extent={{
            84,-16},{116,16}})));
  Modelica.Mechanics.MultiBody.Forces.WorldTorque torque(color = {255, 128, 0}, resolveInFrame = Modelica.Mechanics.MultiBody.Types.ResolveInFrameB.frame_b)
    annotation (Placement(transformation(extent={{40,-50},{60,-30}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteAngularVelocity
    absoluteAngularVelocity(resolveInFrame=Modelica.Mechanics.MultiBody.Types.ResolveInFrameA.frame_a)
    annotation (Placement(transformation(extent={{-80,-30},{-60,-10}})));


  Modelica.Mechanics.MultiBody.Sensors.AbsoluteVelocity absoluteVelocity(
      resolveInFrame=Modelica.Mechanics.MultiBody.Types.ResolveInFrameA.frame_a)
    annotation (Placement(transformation(extent={{-80,2},{-60,22}})));

  parameter Real K_D0(unit="kg/m") = 0.0 "drag coefficient zero order";
  parameter Real K_D(unit="kg/(m.rad2)") = 0.0 "drag coefficient";
  parameter Real K_beta(unit="kg/(m.rad)") = 0.0 "side force coefficient";
  parameter Real K_L0(unit="kg/m") = 0.0 "lift force coefficient";
  parameter Real K_alpha(unit="kg/(m.rad)") = 0.0
    "lift coefficient  (related to angle of attch)";
  parameter Real K_MR(unit="kg/rad") = 0.0
    "viscous moment coefficient around x-axis (related to angle of attach)";
  parameter Real K_p(unit="kg.s/rad") = 0.0
    "viscous moment coefficient around x-axis (related to angle of attach)";
  parameter Real K_M0(unit="kg") = 0.0
    "viscous moment coefficient around y-axis";
  parameter Real K_M(unit="kg/rad") = 0.0
    "viscous moment coefficient around y-axis";
  parameter Real K_q(unit="kg.s/rad2") = 0.0
    "viscous moment coefficient around x-axis (related to angle of attach)";
  parameter Real K_MY(unit="kg/rad") = 0.0
    "viscous moment coefficient around x-axis (related to angle of attach)";
  parameter Real K_r(unit="kg.s/rad2") = 0.0
    "viscous moment coefficient around x-axis (related to angle of attach)";
  parameter Real K_Ome_1_1(unit="kg.m2/s") = 0.0
    "rotation linear damping around x-axis";
  parameter Real K_Ome_1_2(unit="kg.m2") = 0.0
    "rotation quadratic damping around x-axis";
  parameter Real K_Ome_2_1(unit="kg.m2/s") = 0.0
    "rotation linear damping around y-axis";
  parameter Real K_Ome_2_2(unit="kg.m2") = 0.0
    "rotation quadratic damping around y-axis";
  parameter Real K_Ome_3_1(unit="kg.m2/s") = 0.0
    "rotation linear damping around z-axis";
  parameter Real K_Ome_3_2(unit="kg.m2") = 0.0
    "rotation quadratic damping around z-axis";

  Real[3] F_hd;   // hydro. force in flow frame
  Real[3] T_hd;   // hydro. torque in flow frame
  Real[3] F_hd_b;   // hydro. force in body frame
  Real[3] T_hd_b;   // hydro. torque in flow frame
  Real flowspeed(unit="m/s");
  Real[3] vel_b; // translational velocity in body frame
  Real[3] omega; // rotational velocity in body frame
  Modelica.Units.SI.Velocity vel_norm;
  Real alpha(unit="rad"); // angle of attack [rad]
  Real beta(unit="rad"); // sideslip angle [rad]
  Real alpha_deg(unit="deg"); // angle of attack [deg]
  Real beta_deg(unit="deg");   // sideslip angle [deg]
  Real[3,3] R_FB;   //rotation matrix: flow to body
  Real D, SF, L, T_DL_1, T_DL_2, T_DL_3;
//components of hydrodynamic forces and torques
equation
  vel_b = absoluteVelocity.v;
  omega = absoluteAngularVelocity.w;

  vel_norm = Modelica.Math.Vectors.norm(absoluteVelocity.v, 2);
  alpha = atan2(absoluteVelocity.v[3], absoluteVelocity.v[1]);
  beta = asin(absoluteVelocity.v[2]/vel_norm);
  alpha_deg = Modelica.Units.Conversions.to_deg(alpha);
  beta_deg = Modelica.Units.Conversions.to_deg(beta);

  flowspeed = sqrt(vel_b[1]^2+vel_b[2]^2+vel_b[3]^2);
  // rotation from flow frame to body frame (ref #72, page 51 and page 82)
  R_FB =[cos(alpha)*cos(beta),-cos(alpha)*sin(beta),-sin(alpha);
         sin(beta),cos(beta),0;
         sin(alpha)*cos(beta),-sin(alpha)*sin(beta),cos(alpha)];

  D =(K_D0 + K_D*alpha^2)*flowspeed^2;
  SF = K_beta*beta*flowspeed^2;
  L =(K_L0 + K_alpha*alpha)*flowspeed^2;
  T_DL_1 =(K_MR*beta + K_p*omega[1])*flowspeed^2 + K_Ome_1_1 * omega[1] + K_Ome_1_2 * omega[1]^2;
  T_DL_2 =(K_M0 + K_M*alpha + K_q*alpha*omega[2])*flowspeed^2 + K_Ome_2_1 * omega[2] + K_Ome_2_2 * omega[2]^2;
  T_DL_3 =(K_MY*beta + K_r*omega[3])*flowspeed^2 + K_Ome_3_1 * omega[3] + K_Ome_3_2 * omega[3]^2;
  //output
  F_hd = {-D, SF, -L};
  T_hd = {T_DL_1, T_DL_2, T_DL_3};
  F_hd_b = R_FB*F_hd;  // Equation from ref. #99
  T_hd_b = R_FB*T_hd;  // Equation from ref. #99
  force.force = F_hd_b;
  torque.torque = T_hd_b;


/*
  (force.force,torque.torque,Fhd,Thd, flowspeed) = ComputeHydroForceTorque(
    alpha,
    beta,
    absoluteAngularVelocity.w,
    absoluteVelocity.v,
    K_D0,
    K_D,
    K_beta,
    K_L0,
    K_alpha,
    K_MR,
    K_p,
    K_M0,
    K_M,
    K_q,
    K_MY,
    K_r,
    K_Ome_1_1,
    K_Ome_1_2,
    K_Ome_2_1,
    K_Ome_2_2,
    K_Ome_3_1,
    K_Ome_3_2);
       */

  connect(force.frame_b, frame_b) annotation (Line(
      points={{60,0},{100,0}},
      color={95,95,95},
      thickness=0.5));
  connect(torque.frame_b, frame_b) annotation (Line(
      points={{60,-40},{80,-40},{80,0},{100,0}},
      color={95,95,95},
      thickness=0.5));
  connect(absoluteVelocity.frame_a, frame_b) annotation (Line(
      points={{-80,12},{-92,12},{-92,60},{80,60},{80,0},{100,0}},
      color={95,95,95},
      thickness=0.5));
  connect(absoluteAngularVelocity.frame_a, frame_b) annotation (Line(
      points={{-80,-20},{-92,-20},{-92,60},{80,60},{80,0},{100,0}},
      color={95,95,95},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false), graphics={Text(
          extent={{-46,10},{28,-18}},
          lineColor={28,108,200},
          textString="Here we use
ComputeHydroForceTorque")}));
end HydrodynamicForcesTorques;
