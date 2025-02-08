within OpenMAUVe.Utilities;
function convertGeodeticToEcef
  input Modelica.Units.NonSI.Angle_deg latitude;
  input Modelica.Units.NonSI.Angle_deg longitude;
  input Modelica.Units.SI.Distance altitude;
  output Modelica.Units.SI.Position r_point_wrt_ecef[3];
algorithm
  r_point_wrt_ecef :={0,0,0};
end convertGeodeticToEcef;
