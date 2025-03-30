within Glider_Lib.Kinematics;
function getEcefToNedDcm
  input Modelica.Units.SI.Angle latitude "Geodetic latitude (rad)";
  input Modelica.Units.SI.Angle longitude "Longitude (rad)";

  output Real dcm_ecef_to_ned[3,3] "DCM rotating ECEF to local NED";
protected
  Real sinLat =  sin(latitude);
  Real cosLat =  cos(latitude);
  Real sinLon =  sin(longitude);
  Real cosLon =  cos(longitude);
algorithm
  dcm_ecef_to_ned := [
    -sinLat * cosLon, -sinLat * sinLon,  cosLat;
    -sinLon,           cosLon,           0.0;
    -cosLat * cosLon, -cosLat * sinLon, -sinLat];
end getEcefToNedDcm;
