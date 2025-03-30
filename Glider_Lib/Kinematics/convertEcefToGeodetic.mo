within Glider_Lib.Kinematics;
function convertEcefToGeodetic
  input Modelica.Units.SI.Position r_point_wrt_ecef[3] "ECEF position [x,y,z] in meters";
  input Real a_earth "Earth's semimajor axis"; // #645 page 25
  input Real e_earth "Earth's eccentricity";   // #645 page 25
  input Real scaleDist;

  output Modelica.Units.SI.Angle latitude;
  output Modelica.Units.SI.Angle longitude;
  output Modelica.Units.SI.Distance altitude;

protected
  Real x = r_point_wrt_ecef[1];
  Real y = r_point_wrt_ecef[2];
  Real z = r_point_wrt_ecef[3];
  Real e2 = e_earth^2;
  Real b = a_earth * scaleDist * sqrt(1 - e2);
  Real r, theta, N;
  Real lat, prevLat;
  Integer i;
algorithm
  // Longitude
  longitude := atan2(y, x);

  // Iterative latitude calculation
  r := sqrt(x^2 + y^2);
  lat := atan2(z, r * (1 - e2)); // Initial guess
  i := 0;

  while i < 10 loop
    N := (a_earth * scaleDist) / sqrt(1 - e2 * sin(lat)^2);
    altitude := r / cos(lat) - N;
    prevLat := lat;
    lat := atan2(z, r * (1 - e2 * (N / (N + altitude))));
    if abs(lat - prevLat) < 1e-12 then
      break;
    end if;
    i := i + 1;
  end while;

  latitude := lat;
end convertEcefToGeodetic;
