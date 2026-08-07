within OpenMAUVe.Kinematics;

model ResettableFreeMotion
  "Free-motion joint whose 6-DOF state can be reset for finite-horizon prediction"
  extends Modelica.Mechanics.MultiBody.Joints.FreeMotion(
    final useQuaternions = true,
    final enforceStates = true);

  input Boolean reset "Rising edge requests a state reset";
  input Modelica.Units.SI.Position resetPosition[3]
    "Position resolved in frame_a";
  input Modelica.Units.SI.Velocity resetVelocity[3]
    "Translational velocity resolved in frame_a";
  input Modelica.Units.SI.Angle resetAngles321[3]
    "Attitude in the state order {yaw,pitch,roll}";
  input Modelica.Units.SI.AngularVelocity resetAngularVelocityBody[3]
    "Body angular velocity {p,q,r}";
  Real resetQuaternion[4];

equation
  resetQuaternion = Modelica.Mechanics.MultiBody.Frames.to_Q(
    Modelica.Mechanics.MultiBody.Frames.axesRotations(
      {3, 2, 1}, resetAngles321, zeros(3)));
  when edge(reset) then
    reinit(r_rel_a, resetPosition);
    reinit(v_rel_a, resetVelocity);
    // Q[4] follows from the unit-quaternion constraint; OpenModelica selects
    // Q[1:3] and w_rel_b as the independent rotational states.
    // Keep a small margin inside the unit sphere so the algebraically
    // reconstructed fourth quaternion cannot encounter sqrt(roundoff < 0).
    reinit(Q[1], (1 - 1e-6)*resetQuaternion[1]);
    reinit(Q[2], (1 - 1e-6)*resetQuaternion[2]);
    reinit(Q[3], (1 - 1e-6)*resetQuaternion[3]);
    reinit(w_rel_b, resetAngularVelocityBody);
  end when;
end ResettableFreeMotion;
