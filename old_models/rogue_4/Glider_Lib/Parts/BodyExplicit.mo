within Glider_Lib.Parts;

model BodyExplicit "Rigid body with mass, inertia tensor and one frame connector (12 potential states)"

  import Modelica.Mechanics.MultiBody.Types;
  import Modelica.Mechanics.MultiBody.Frames;
  import Visualizers = Modelica.Mechanics.MultiBody.Visualizers;
  import SI = Modelica.Units.SI;
  import C = Modelica.Constants;

  
  Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_a "Coordinate system fixed at body" annotation(Placement(transformation(extent = {{-116, -16}, {-84, 16}})));
  parameter Boolean animation = true "= true, if animation shall be enabled (show cylinder and sphere)";
  parameter SI.Position r_CM[3](start = {0, 0, 0}) "Vector from frame_a to center of mass, resolved in frame_a";
  parameter SI.Mass m(min = 0, start = 1) = 0.0 "Mass of rigid body";

  parameter SI.Inertia I_11(min = 0) = 0.00 "(1,1) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_22(min = 0) = 0.00 "(2,2) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_33(min = 0) = 0.00 "(3,3) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_21(min = 0) = 0.0 "(2,1) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_31(min = 0) = 0.0 "(3,1) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_32(min = 0) = 0.0 "(3,2) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_12(min = 0) = 0.0 "(2,1) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_13(min = 0) = 0.0 "(2,1) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_23(min = 0) = 0.0 "(2,1) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  final parameter SI.Inertia I_xx(min = 0) = I_11 "(1,1) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  final parameter SI.Inertia I_xy(min = 0) = I_12 "(1,2) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  final parameter SI.Inertia I_xz(min = 0) = I_13 "(1,3) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  final parameter SI.Inertia I_yx(min = 0) = I_21 "(2,1) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  final parameter SI.Inertia I_yy(min = 0) = I_22 "(2,2) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  final parameter SI.Inertia I_yz(min = 0) = I_23 "(2,3) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  final parameter SI.Inertia I_zx(min = 0) = I_31 "(3,1) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  final parameter SI.Inertia I_zy(min = 0) = I_32 "(3,2) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  final parameter SI.Inertia I_zz(min = 0) = I_33 "(3,3) element of inertia tensor" annotation(Dialog(group = "Inertia tensor (resolved in center of mass, parallel to frame_a)"));
  // Added mass parameters:
  parameter SI.Mass m_f11(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass m_f22(min = 0, start = 0.0) = 0.0 "(2,2) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass m_f33(min = 0, start = 0.0) = 0.0 "(3,3) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass m_f12(min = 0, start = 0.0) = 0.0 "(1,2) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass m_f13(min = 0, start = 0.0) = 0.0 "(1,3) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass m_f21(min = 0, start = 0.0) = 0.0 "(2,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass m_f23(min = 0, start = 0.0) = 0.0 "(2,3) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass m_f31(min = 0, start = 0.0) = 0.0 "(3,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  // TODO mising = 0.0
  parameter SI.Mass m_f32(min = 0, start = 0.0) = 0.0 "(3,2) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  // Added inertias parameters:
  parameter SI.Inertia I_f11(min = 0, start = 0.0) = 0.0 "(1,1) element of added inertia tensor" annotation(Dialog(group = "Inertia added tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_f22(min = 0, start = 0.0) = 0.0 "(2,2) element of added inertia tensor" annotation(Dialog(group = "Inertia added tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_f33(min = 0, start = 0.0) = 0.0 "(3,3) element of added inertia tensor" annotation(Dialog(group = "Inertia added tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_f12(min = 0, start = 0.0) = 0.0 "(1,2) element of added inertia tensor" annotation(Dialog(group = "Inertia added tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_f13(min = 0, start = 0.0) = 0.0 "(1,3) element of added inertia tensor" annotation(Dialog(group = "Inertia added tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_f21(min = 0, start = 0.0) = 0.0 "(2,1) element of added inertia tensor" annotation(Dialog(group = "Inertia added tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_f23(min = 0, start = 0.0) = 0.0 "(2,3) element of added inertia tensor" annotation(Dialog(group = "Inertia added tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_f31(min = 0, start = 0.0) = 0.0 "(3,1) element of added inertia tensor" annotation(Dialog(group = "Inertia added tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Inertia I_f32(min = 0, start = 0.0) = 0.0 "(3,2) element of added inertia tensor" annotation(Dialog(group = "Inertia added tensor (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass X_udot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass X_vdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass X_wdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass X_pdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass X_qdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass X_rdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Y_udot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Y_vdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Y_wdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Y_pdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Y_qdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Y_rdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Z_udot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Z_vdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Z_wdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Z_pdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Z_qdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass Z_rdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass K_udot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass K_vdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass K_wdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass K_pdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass K_qdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass K_rdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass M_udot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass M_vdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass M_wdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass M_pdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass M_qdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass M_rdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass N_udot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass N_vdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass N_wdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass N_pdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass N_qdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Mass N_rdot(min = 0, start = 0.0) = 0.0 "(1,1) element of added mass matrix" annotation(Dialog(group = "Added mass matrix (resolved in center of mass, parallel to frame_a)"));
  parameter SI.Position x_g = r_CM[1];
  parameter SI.Position y_g = r_CM[2];
  parameter SI.Position z_g = r_CM[3];
  parameter Real M_RB[6, 6] = [m_tot, 0, 0, 0, m_tot * z_g, -m_tot * y_g; 0, m_tot, 0, -m_tot * z_g, 0, m_tot * x_g; 0, 0, m_tot, m_tot * y_g, -m_tot * x_g, 0; 0, -m_tot * z_g, m_tot * y_g, I_xx, -I_xy, -I_xz; m_tot * z_g, 0, -m_tot * x_g, -I_yx, I_yy, -I_yz; -m_tot * y_g, m_tot * x_g, 0, -I_zx, -I_zy, I_zz] "rigid body mass matrix";
  parameter SI.Mass M_A[6, 6] = [X_udot, X_vdot, X_wdot, X_pdot, X_qdot, X_rdot; Y_udot, Y_vdot, Y_wdot, Y_pdot, Y_qdot, Y_rdot; Z_udot, Z_vdot, Z_wdot, Z_pdot, Z_qdot, Z_rdot; K_udot, K_vdot, K_wdot, K_pdot, K_qdot, K_rdot; M_udot, M_vdot, M_wdot, M_pdot, M_qdot, M_rdot; N_udot, N_vdot, N_wdot, N_pdot, N_qdot, N_rdot] "added mass matrix";
  parameter Real M[6, 6] = M_RB + 0* M_A "system inertia matrix";
  final parameter SI.Mass m_tot = m + 11.0 + 0.3 "Mass of rigid body";

  SI.Position r_0[3](start = {0, 0, 0}, each stateSelect = if enforceStates then StateSelect.always else StateSelect.avoid) "Position vector from origin of world frame to origin of frame_a" annotation(Dialog(tab = "Initialization", showStartAttribute = true));
  SI.Velocity v_0[3](start = {0, 0, 0}, each stateSelect = if enforceStates then StateSelect.always else StateSelect.avoid) "Absolute velocity of frame_a, resolved in world frame (= der(r_0))" annotation(Dialog(tab = "Initialization", showStartAttribute = true));
  SI.Acceleration a_0[3](start = {0, 0, 0}) "Absolute acceleration of frame_a resolved in world frame (= der(v_0))" annotation(Dialog(tab = "Initialization", showStartAttribute = true));
  parameter Boolean angles_fixed = false "= true, if angles_start are used as initial values, else as guess values" annotation(Evaluate = true, choices(checkBox = true), Dialog(tab = "Initialization"));
  parameter SI.Angle angles_start[3] = {0, 0, 0} "Initial values of angles to rotate frame_a around 'sequence_start' axes into frame_b" annotation(Dialog(tab = "Initialization"));
  parameter Types.RotationSequence sequence_start = {1, 2, 3} "Sequence of rotations to rotate frame_a into frame_b at initial time" annotation(Evaluate = true, Dialog(tab = "Initialization"));
  parameter Boolean w_0_fixed = false "= true, if w_0_start are used as initial values, else as guess values" annotation(Evaluate = true, choices(checkBox = true), Dialog(tab = "Initialization"));
  parameter SI.AngularVelocity w_0_start[3] = {0, 0, 0} "Initial or guess values of angular velocity of frame_a resolved in world frame" annotation(Dialog(tab = "Initialization"));
  parameter Boolean z_0_fixed = false "= true, if z_0_start are used as initial values, else as guess values" annotation(Evaluate = true, choices(checkBox = true), Dialog(tab = "Initialization"));
  parameter SI.AngularAcceleration z_0_start[3] = {0, 0, 0} "Initial values of angular acceleration z_0 = der(w_0)" annotation(Dialog(tab = "Initialization"));
  parameter SI.Diameter sphereDiameter = world.defaultBodyDiameter "Diameter of sphere" annotation(Dialog(tab = "Animation", group = "if animation = true", enable = animation));
  input Types.Color sphereColor = Modelica.Mechanics.MultiBody.Types.Defaults.BodyColor "Color of sphere" annotation(Dialog(colorSelector = true, tab = "Animation", group = "if animation = true", enable = animation));
  parameter SI.Diameter cylinderDiameter = sphereDiameter / Types.Defaults.BodyCylinderDiameterFraction "Diameter of cylinder" annotation(Dialog(tab = "Animation", group = "if animation = true", enable = animation));
  input Types.Color cylinderColor = sphereColor "Color of cylinder" annotation(Dialog(colorSelector = true, tab = "Animation", group = "if animation = true", enable = animation));
  input Types.SpecularCoefficient specularCoefficient = world.defaultSpecularCoefficient "Reflection of ambient light (= 0: light is completely absorbed)" annotation(Dialog(tab = "Animation", group = "if animation = true", enable = animation));
  parameter Boolean enforceStates = false "= true, if absolute variables of body object shall be used as states (StateSelect.always)" annotation(Evaluate = true, Dialog(tab = "Advanced"));
  parameter Boolean useQuaternions = true "= true, if quaternions shall be used as potential states otherwise use 3 angles as potential states" annotation(Evaluate = true, Dialog(tab = "Advanced"));
  parameter Types.RotationSequence sequence_angleStates = {1, 2, 3} "Sequence of rotations to rotate world frame into frame_a around the 3 angles used as potential states" annotation(Evaluate = true, Dialog(tab = "Advanced", enable = not useQuaternions));
  //final parameter SI.Inertia I[3, 3]=[I_11 + I_f11, I_21, I_31; I_21, I_22 + I_f22, I_32;
  //    I_31, I_32, I_33 + I_f33] "inertia tensor";
  //final parameter SI.Mass M[3, 3]=[m + m_f11, 0, 0; 0, m + m_f22, 0;
  //    0, 0, m + m_f33] "mass tensor";
  final parameter Frames.Orientation R_start = Modelica.Mechanics.MultiBody.Frames.axesRotations(sequence_start, angles_start, zeros(3)) "Orientation object from world frame to frame_a at initial time";
  final parameter SI.AngularAcceleration z_a_start[3] = Frames.resolve2(R_start, z_0_start) "Initial values of angular acceleration z_a = der(w_a), i.e., time derivative of angular velocity resolved in frame_a";
  SI.AngularVelocity w_a[3](start = Frames.resolve2(R_start, w_0_start), fixed = fill(w_0_fixed, 3), each stateSelect = if enforceStates then if useQuaternions then StateSelect.always else StateSelect.never else StateSelect.avoid) "Absolute angular velocity of frame_a resolved in frame_a";
  SI.AngularAcceleration z_a[3](start = Frames.resolve2(R_start, z_0_start), fixed = fill(z_0_fixed, 3)) "Absolute angular acceleration of frame_a resolved in frame_a";
  SI.Acceleration g_0[3] "Gravity acceleration resolved in world frame";
protected
  outer Modelica.Mechanics.MultiBody.World world;
  // Declarations for quaternions (dummies, if quaternions are not used)
  parameter Frames.Quaternions.Orientation Q_start = Frames.to_Q(R_start) "Quaternion orientation object from world frame to frame_a at initial time";
  Frames.Quaternions.Orientation Q(start = Q_start, each stateSelect = if enforceStates then if useQuaternions then StateSelect.prefer else StateSelect.never else StateSelect.avoid) "Quaternion orientation object from world frame to frame_a (dummy value, if quaternions are not used as states)";
  // Declaration for 3 angles
  parameter SI.Angle phi_start[3] = if sequence_start[1] == sequence_angleStates[1] and sequence_start[2] == sequence_angleStates[2] and sequence_start[3] == sequence_angleStates[3] then angles_start else Frames.axesRotationsAngles(R_start, sequence_angleStates) "Potential angle states at initial time";
  SI.Angle phi[3](start = phi_start, each stateSelect = if enforceStates then if useQuaternions then StateSelect.never else StateSelect.always else StateSelect.avoid) "Dummy or 3 angles to rotate world frame into frame_a of body";
  SI.AngularVelocity phi_d[3](each stateSelect = if enforceStates then if useQuaternions then StateSelect.never else StateSelect.always else StateSelect.avoid) "= der(phi)";
  SI.AngularAcceleration phi_dd[3] "= der(phi_d)";
  // Declarations for animation
  Visualizers.Advanced.Shape cylinder(shapeType = "cylinder", color = cylinderColor, specularCoefficient = specularCoefficient, length = if Modelica.Math.Vectors.length(r_CM) > sphereDiameter / 2 then Modelica.Math.Vectors.length(r_CM) - (if cylinderDiameter > 1.1 * sphereDiameter then sphereDiameter / 2 else 0) else 0, width = cylinderDiameter, height = cylinderDiameter, lengthDirection = {1,0,0}, widthDirection = {0, 1, 0}, r = frame_a.r_0, R = frame_a.R) if world.enableAnimation and animation;
  Visualizers.Advanced.Shape sphere(shapeType = "sphere", color = sphereColor, specularCoefficient = specularCoefficient, length = sphereDiameter, width = sphereDiameter, height = sphereDiameter, lengthDirection = {1, 0, 0}, widthDirection = {0, 1, 0}, r_shape = r_CM - {1, 0, 0} * sphereDiameter / 2, r = frame_a.r_0, R = frame_a.R) if world.enableAnimation and animation and sphereDiameter > 0;
public
  // Utilities
  SI.Velocity u;
  SI.Velocity v;
  SI.Velocity w;
  SI.AngularVelocity p;
  SI.AngularVelocity q;
  SI.AngularVelocity r;
  SI.Acceleration u_dot;
  SI.Acceleration v_dot;
  SI.Acceleration w_dot;
  SI.AngularAcceleration p_dot;
  SI.AngularAcceleration q_dot;
  SI.AngularAcceleration r_dot;
  Real a1, a2, a3, b1, b2, b3;
  Real C_RB[6, 6] "rigid body mass matrix";
  Real C_A[6, 6] "rigid body mass matrix";
  Real C[6, 6] "Coriolis–centripetal matrix";
  Real vi[6] "vector of body velocities";
  Real vi_dot[6] "vector of body accelerations";
  Real gravity_force[3], gravity_torque[3], a_a[3], v_a[3];
  Real M_der[6, 6] "derivative of mass matrix";
initial equation
  if angles_fixed then
    // Initialize positional variables
    if not Connections.isRoot(frame_a.R) then
      // frame_a.R is computed somewhere else
      zeros(3) = Frames.Orientation.equalityConstraint(frame_a.R, R_start);
    elseif useQuaternions then
      // frame_a.R is computed from quaternions Q
      zeros(3) = Frames.Quaternions.Orientation.equalityConstraint(Q, Q_start);
    else
      // frame_a.R is computed from the 3 angles 'phi'
      phi = phi_start;
    end if;
  end if;
equation
  if enforceStates then
    Connections.root(frame_a.R);
  else
    Connections.potentialRoot(frame_a.R);
  end if;
  r_0 = frame_a.r_0;
  if not Connections.isRoot(frame_a.R) then
    // Body does not have states
    // Dummies
    Q = {0, 0, 0, 1};
    phi = zeros(3);
    phi_d = zeros(3);
    phi_dd = zeros(3);
  elseif useQuaternions then
    // Use Quaternions as states (with dynamic state selection)
    frame_a.R = Frames.from_Q(Q, Frames.Quaternions.angularVelocity2(Q, der(Q)));
    {0} = Frames.Quaternions.orientationConstraint(Q);
    // Dummies
    phi = zeros(3);
    phi_d = zeros(3);
    phi_dd = zeros(3);
  else
    // Use Cardan angles as states
    phi_d = der(phi);
    phi_dd = der(phi_d);
    frame_a.R = Frames.axesRotations(sequence_angleStates, phi, phi_d);
    // Dummies
    Q = {0, 0, 0, 1};
  end if;
  // gravity acceleration at center of mass resolved in world frame
  g_0 = world.gravityAcceleration(frame_a.r_0 + Frames.resolve1(frame_a.R, r_CM));
  // translational kinematic differential equations
  v_0 = der(frame_a.r_0);
  a_0 = der(v_0);
  // rotational kinematic differential equations
  w_a = Frames.angularVelocity2(frame_a.R);
  z_a = der(w_a);
  /* Newton/Euler equations with respect to center of mass
          a_CM = a_a + cross(z_a, r_CM) + cross(w_a, cross(w_a, r_CM));
          f_CM = m*(a_CM - g_a);
          t_CM = I*z_a + cross(w_a, I*w_a);
     frame_a.f = f_CM
     frame_a.t = t_CM + cross(r_CM, f_CM);
  Inserting the first three equations in the last two results in:
*/
  a_a = Frames.resolve2(frame_a.R, a_0);
  v_a = Frames.resolve2(frame_a.R, v_0);
  u = v_a[1];
  v = v_a[2];
  w = v_a[3];
  p = w_a[1];
  q = w_a[2];
  r = w_a[3];
  u_dot = a_a[1];
  v_dot = a_a[2];
  w_dot = a_a[3];
  p_dot = z_a[1];
  q_dot = z_a[2];
  r_dot = z_a[3];
  vi = {u, v, w, p, q, r};
  vi_dot = {u_dot, v_dot, w_dot, p_dot, q_dot, r_dot};
  C_RB = [0, 0, 0, m_tot * (y_g * q + z_g * r), -m_tot * (x_g * q - w), -m_tot * (x_g * r + v); 0, 0, 0, -m_tot * (y_g * p + w), m_tot * (z_g * r + x_g * p), -m_tot * (y_g * r - u); 0, 0, 0, -m_tot * (z_g * p - v), -m_tot * (z_g * q + u), -m_tot * (x_g * p + y_g * q); -m_tot * (y_g * q + z_g * r), m_tot * (y_g * p + w), m_tot * (z_g * q - v), 0, (-I_yz * q) - I_xz * p + I_zz * r, I_yz * r + I_xy * p - I_yy * q; m_tot * (x_g * q - w), -m_tot * (z_g * r + x_g * p), m_tot * (z_g * q + u), I_yz * q + I_xz * p - I_zz * r, 0, (-I_xz * r) - I_xy * q + I_xx * p; m_tot * (x_g * r + v), -m_tot * (y_g * r - u), -m_tot * (x_g * p + y_g * q), (-I_yz * r) - I_xy * p + I_yy * q, I_xz * r + I_xy * q - I_xx * p, 0] "rigid body Coriolis matrix";
  a1 = X_udot * u + X_vdot * v + X_wdot * w + X_pdot * p + X_qdot * q + X_rdot * r;
  a2 = Y_udot * u + Y_vdot * v + Y_wdot * w + Y_pdot * p + Y_qdot * q + Y_rdot * r;
  a3 = Z_udot * u + Z_vdot * v + Z_wdot * w + Z_pdot * p + Z_qdot * q + Z_rdot * r;
  b1 = K_udot * u + K_vdot * v + K_wdot * w + K_pdot * p + K_qdot * q + K_rdot * r;
  b2 = M_udot * u + M_vdot * v + M_wdot * w + M_pdot * p + M_qdot * q + M_rdot * r;
  b3 = N_udot * u + N_vdot * v + N_wdot * w + N_pdot * p + N_qdot * q + N_rdot * r;
  C_A = [0, 0, 0, 0, -a3, a2; 0, 0, 0, a3, 0, -a1; 0, 0, 0, -a2, a1, 0; 0, -a3, a2, 0, -b3, b2; a3, 0, -a1, b3, 0, -b1; -a2, a1, 0, -b2, b1, 0] "added mass Coriolios matrix";
  C = C_RB + 0 * C_A;
  //M RB ν̇ + C ∗ RB ν + M A ν̇ r + C ∗ A ν r + Dν r + μ + Gη + g o
  gravity_force = m * Frames.resolve2(frame_a.R, g_0);
  gravity_torque = cross(r_CM, gravity_force);
  // dynamics
  //cat(1, frame_a.f, frame_a.t) = M * vi_dot + C * vi + cat(1, gravity_force, gravity_torque);
  M_der = der(M);
  frame_a.f = M[1:3, :] * vi_dot + C[1:3, :] * vi - gravity_force;
  frame_a.t = M[4:6, :] * vi_dot + C[4:6, :] * vi - gravity_torque;
  /*
  (Frames.resolve2(frame_a.R, a_0 - g_0) + cross(z_a, r_CM) +
    cross(w_a, cross(w_a, r_CM)));
  frame_a.t = I*z_a + cross(w_a, I*w_a) + cross(r_CM, frame_a.f);
  */
  annotation(Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, 30}, {-3, -30}}, lineColor = {0, 24, 48}, fillPattern = FillPattern.HorizontalCylinder, fillColor = {0, 127, 255}, radius = 10), Text(extent = {{150, -100}, {-150, -70}}, textString = "m=%m"), Text(extent = {{-150, 110}, {150, 70}}, textString = "%name", lineColor = {0, 0, 255}), Ellipse(extent = {{-20, 60}, {100, -60}}, lineColor = {0, 24, 48}, fillPattern = FillPattern.Sphere, fillColor = {0, 127, 255})}), Documentation(info = "<html>
<p>
<strong>Rigid body</strong> with mass and inertia tensor.
All parameter vectors have to be resolved in frame_a.
The <strong>inertia tensor</strong> has to be defined with respect to a
coordinate system that is parallel to frame_a with the
origin at the center of mass of the body.
</p>
<p>
By default, this component is visualized by a <strong>cylinder</strong> located
between frame_a and the center of mass and by a <strong>sphere</strong> that has
its center at the center of mass. If the cylinder length is smaller as
the radius of the sphere, e.g., since frame_a is located at the
center of mass, the cylinder is not displayed. Note, that
the animation may be switched off via parameter animation = <strong>false</strong>.
</p>
<p>
<img src=\"modelica://Modelica/Resources/Images/Mechanics/MultiBody/Body.png\" alt=\"Parts.Body\">
</p>

<p>
<strong>States of Body Components</strong>
</p>
<p>
Every body has potential states. If possible a tool will select
the states of joints and not the states of bodies because this is
usually the most efficient choice. In this case the position, orientation,
velocity and angular velocity of frame_a of the body will be computed
by the component that is connected to frame_a. However, if a body is moving
freely in space, variables of the body have to be used as states. The potential
states of the body are:
</p>
<ul>
<li> The <strong>position vector</strong> frame_a.r_0 from the origin of the
   world frame to the origin of frame_a of the body, resolved in
   the world frame and the <strong>absolute velocity</strong> v_0 of the origin of
   frame_a, resolved in the world frame (= der(frame_a.r_0)).
</li>
<li> If parameter <strong>useQuaternions</strong> in the \"Advanced\" menu
   is <strong>true</strong> (this is the default), then <strong>4 quaternions</strong>
   are potential states. Additionally, the coordinates of the
   absolute angular velocity vector of the
   body are 3 potential states.<br>
   If <strong>useQuaternions</strong> in the \"Advanced\" menu
   is <strong>false</strong>, then <strong>3 angles</strong> and the derivatives of
   these angles are potential states. The orientation of frame_a
   is computed by rotating the world frame along the axes defined
   in parameter vector \"sequence_angleStates\" (default = {1,2,3}, i.e.,
   the Cardan angle sequence) around the angles used as potential states.
   For example, the default is to rotate the x-axis of the world frame
   around angles[1], the new y-axis around angles[2] and the new z-axis
   around angles[3], arriving at frame_a.
</li>
</ul>
<p>
The quaternions have the slight disadvantage that there is a
non-linear constraint equation between the 4 quaternions.
Therefore, at least one non-linear equation has to be solved
during simulation. A tool might, however, analytically solve this
simple constraint equation. Using the 3 angles as states has the
disadvantage that there is a singular configuration in which a
division by zero will occur. If it is possible to determine in advance
for an application class that this singular configuration is outside
of the operating region, the 3 angles might be used as potential
states by setting <strong>useQuaternions</strong> = <strong>false</strong>.
</p>
<p>
In text books about 3-dimensional mechanics often 3 angles and the
angular velocity are used as states. This is not the case here, since
3 angles and their derivatives are used as potential states
(if useQuaternions = false). The reason
is that for real-time simulation the discretization formula of the
integrator might be \"inlined\" and solved together with the body equations.
By appropriate symbolic transformation the performance is
drastically increased if angles and their
derivatives are used as states, instead of angles and the angular
velocity.
</p>
<p>
Whether or not variables of the body are used as states is usually
automatically selected by the Modelica translator. If parameter
<strong>enforceStates</strong> is set to <strong>true</strong> in the \"Advanced\" menu,
then body variables are forced to be used as states according
to the setting of parameters \"useQuaternions\" and
\"sequence_angleStates\".
</p>
</html>"));
end BodyExplicit;
