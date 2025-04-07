within OpenMAUVe.Kinematics;
model ComputeRollPitchYaw
  Real lon;
  Real lat;
  Real alt;
  parameter Real a_earth=6378137.0 "Earth's semimajor axis";
  parameter Real e_earth=0.0818191908426 "Earth's eccentricity";
  parameter Real scaleDist=1.0;
  Modelica.Blocks.Interfaces.RealInput r_point_wrt_ecef[3] annotation (
      Placement(transformation(extent={{-126,56},{-86,96}}), iconTransformation(
          extent={{-120,40},{-80,80}})));
  Modelica.Units.SI.Angle roll;
  Modelica.Units.SI.Angle pitch;
  Modelica.Units.SI.Angle yaw;
  Real DCM_NEDbody_from_ECEF[3,3];
  Modelica.Blocks.Interfaces.RealInput DCM_B_from_ECI[3,3] annotation (
      Placement(transformation(extent={{-128,-20},{-88,20}}),
        iconTransformation(extent={{-120,-20},{-80,20}})));
  Modelica.Blocks.Interfaces.RealInput DCM_ECEF_from_ECI[3,3] annotation (
      Placement(transformation(extent={{-128,-60},{-88,-20}}),
        iconTransformation(extent={{-120,-80},{-80,-40}})));
  Real DCM_B_from_NEDbody[3,3];
  Real DCM_B_from_ECEF[3,3];
  Modelica.Blocks.Interfaces.RealOutput roll_pitch_yaw[3](each unit="rad")
                                                          annotation (Placement(
        transformation(extent={{96,-10},{116,10}}), iconTransformation(extent={{94,-10},
            {114,10}})));
equation
  DCM_B_from_ECEF = DCM_B_from_ECI*transpose(DCM_ECEF_from_ECI);
  (lon,lat,alt) = OpenMAUVe.Kinematics.convertEcefToGeodetic(
    r_point_wrt_ecef,
    a_earth,
    e_earth,
    scaleDist);
  DCM_NEDbody_from_ECEF = OpenMAUVe.Kinematics.getEcefToNedDcm(lon, lat);
  DCM_B_from_NEDbody = DCM_B_from_ECEF*transpose(DCM_NEDbody_from_ECEF);
  (roll,pitch,yaw) = dcmToEuler321(DCM_B_from_NEDbody);
  roll_pitch_yaw = {roll, pitch, yaw};
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ComputeRollPitchYaw;
