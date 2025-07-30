# Colours

When running an OpenMAUVe modelica Modelica with "Simulate with animation", the forces, moments and torques will be visualised as follows:   
  
 |  | Colour  | RGB |
| :---:   | :---: | :---: |
| Hydrodynamic damping force |  green  | {0, 255, 0} |
| Hydrodynamic damping torque |  dark green  | {0, 112, 0} |
| Buoyancy force | red  | {255, 0, 0} |
| Added mass force | yellow  | {238, 246, 16} |
| Added mass torque | dark yellow  | {190, 196, 19} |
| Lift force | fuchsia | {255, 0, 255} |
| Thrust force | dark green | {0,255,0} |
| Thrust induced moment | dark green | {0,128,0} |
  

Different reference frames are shown as:  

 |  | Colour  | RGB | Axis length | Additional shape |
| :---:   | :---: | :---: | :---: | :---: |
| ECI |  red  | {199, 55, 36} |  1.0 |  |
| ECEF |  green  | {13, 163, 48} | 0.6  |  |
| NED | blue  | {0, 0, 227} | 0.4 |  |
| NED0 | purple  | {160, 32, 240} | 0.4 |  |
| {O_b} | red | {200, 0, 0} | 0.2 |  |
| COB | blue | {0, 0, 255} (this overrides {O_b}) | 0.3 |  |
| COM | black | {0, 0, 0} |  0.2 | Blue sphere  |
| Winglet (origin) frame | fuchsia | {255, 0, 255} | 0.5 |  |
| Winglet lift frame | wine red | {114, 47, 55} | 0.5 |   |
| Thruster frame | black | {0, 0, 0} | 0.1  | Blue cone | 

