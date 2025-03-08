within OpenMAUVe.Parts;
function ComputeHydroForceTorque

  input Real alpha;
  input Real beta;
  input Real[3] omega;
  input Real[3] vel_b;
  input Real K_D0(unit="kg/m") = 7.19 "drag coefficient zero order";
  input Real K_D(unit="kg/(m.rad2)") = 386.29 "drag coefficient";
  input Real K_beta(unit="kg/(m.rad)") = -115.65 "side force coefficient";
  input Real K_L0(unit="kg/m") = -0.36 "lift force coefficient";
  input Real K_alpha(unit="kg/(m.rad)") = 440.99
    "lift coefficient  (related to angle of attch)";
  input Real K_MR(unit="kg/rad") = -58.27
    "viscous moment coefficient around x-axis (related to angle of attach)";
  input Real K_p(unit="kg.s/rad") = -19.83
    "viscous moment coefficient around x-axis (related to angle of attach)";
  input Real K_M0(unit="kg") = 0.28
    "viscous moment coefficient around y-axis";
  input Real K_M(unit="kg/rad") = -65.84
    "viscous moment coefficient around y-axis";
  input Real K_q(unit="kg.s/rad2") = -205.64
    "viscous moment coefficient around x-axis (related to angle of attach)";
  input Real K_MY(unit="kg/rad") = 34.10
    "viscous moment coefficient around x-axis (related to angle of attach)";
  input Real K_r(unit="kg.s/rad2") = -389.30
    "viscous moment coefficient around x-axis (related to angle of attach)";
  input Real K_Ome_1_1(unit="kg.m2/s") = 0.0
    "rotation linear damping around x-axis";
  input Real K_Ome_1_2(unit="kg.m2") = 0.0
    "rotation quadratic damping around x-axis";
  input Real K_Ome_2_1(unit="kg.m2/s") = 0.0
    "rotation linear damping around y-axis";
  input Real K_Ome_2_2(unit="kg.m2") = 0.0
    "rotation quadratic damping around y-axis";
  input Real K_Ome_3_1(unit="kg.m2/s") = 0.0
    "rotation linear damping around z-axis";
  input Real K_Ome_3_2(unit="kg.m2") = 0.0
    "rotation quadratic damping around z-axis";

  output Real[3] F_hd_b "Hydrodynamic force - body frame";
  output Real[3] T_hd_b "Hydrodynamic torque - body frame";
  output Real[3] F_hd "Hydrodynamic force - flow frame";
  output Real[3] T_hd "Hydrodynamic torque - flow frame";
  output Real airspeed;

protected   Real[3,3] R_FB;
            Real D, SF, L, T_DL_1, T_DL_2, T_DL_3;

algorithm
  airspeed := sqrt(vel_b[1]^2+vel_b[2]^2+vel_b[3]^2);
  R_FB :=[cos(alpha)*cos(beta),-cos(alpha)*sin(beta),-sin(alpha); sin(beta),cos(
     beta),0; sin(alpha)*cos(beta),-sin(alpha)*sin(beta),cos(alpha)];

  D :=(K_D0 + K_D*alpha^2)*airspeed^2;
  SF :=K_beta*beta*airspeed^2;
  L :=(K_L0 + K_alpha*alpha)*airspeed^2;
  T_DL_1 :=(K_MR*beta + K_p*omega[1])*airspeed^2 + K_Ome_1_1 * omega[1] + K_Ome_1_2 * omega[1]^2;
  T_DL_2 :=(K_M0 + K_M*alpha + K_q*omega[2])*airspeed^2 + K_Ome_2_1 * omega[2] + K_Ome_2_2 * omega[2]^2;
  T_DL_3 :=(K_MY*beta + K_r*omega[3])*airspeed^2 + K_Ome_3_1 * omega[3] + K_Ome_3_2 * omega[3]^2;
  //output
  F_hd := {-D, SF, -L};
  T_hd := {T_DL_1, T_DL_2, T_DL_3};
  F_hd_b :=R_FB*F_hd;
  T_hd_b :=R_FB*T_hd;

end ComputeHydroForceTorque;
