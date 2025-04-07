within OpenMAUVe.Kinematics;
function dcmToEuler321
  input Real dcm[3,3] "Rotation matrix (body to NED or ECEF)";
  output Modelica.Units.SI.Angle roll "rotation about x (rad)";
  output Modelica.Units.SI.Angle pitch "rotation about y (rad)";
  output Modelica.Units.SI.Angle yaw "rotation about z (rad)";
protected
  Real r11 = dcm[1,1];
  Real r12 = dcm[1,2];
  Real r13 = dcm[1,3];
  Real r23 = dcm[2,3];
  Real r33 = dcm[3,3];
algorithm
  pitch := -asin(dcm[1,3]);

  if abs(dcm[1,3]) < 0.999999 then
    roll := atan2(dcm[2,3], dcm[3,3]);
    yaw  := atan2(dcm[1,2], dcm[1,1]);
  else
    // Gimbal lock: pitch is ±90°, yaw and roll are coupled
    roll := 0;
    if dcm[1,3] < 0 then
      yaw := atan2(-dcm[2,1], -dcm[3,1]);
    else
      yaw := atan2(dcm[2,1], dcm[3,1]);
    end if;
  end if;
end dcmToEuler321;
