## Test description

A test to verify the capability of the CEGIS-LMI-based controller to track a desired time-varying setpoint.
  

### Initial state values
$\bm{x}=[x_1, x_2, x_3, x_4]^T  = [2.0, 2.0, 2.0, 2.0]^T$
  
### Target state values
$x_1  = sin(0.1256t)$ [m/s]  
$x_2  = cos(0.0628t)$ [m/s]  
$x_3 = 0$ [rad/s]  
$x_4 = 0$ [rad]  
  
### Faults
$h_1 = 0$ for 100<=t<300 [s], $h_1 = 1$ otherwise  
$h_2 = 0$ for 500<=t<700 [s], $h_2 = 1$ otherwise  
$h_3 = 0$ for 900<=t<1100 [s], $h_3 = 1$ otherwise  
$h_4 = 0$ for 1300<=t<1500 [s], $h_4 = 1$ otherwise    


### Dynamic parameters
$m$= 500.0  
$J_z$= 300.0  
$X_u$= 6.106  
$X_{uu}$= 5.0  
$Y_v$= 11.203  
$Y_{vv}$= 10.114  
$N_r$= 210.0  
$N_{rr}$= 3.0  
$l_{1x}$= -1.01  
$l_{1y}$= -0.353  
$\alpha_1$= 0.7853981633974483  
$l_{2x}$= -1.01  
$l_{2y}$= 0.353  
$\alpha_2$= -0.7853981633974483  
$l_{3x}$= 1.01  
$l_{3y}$= -0.353   
$\alpha_3$= -0.7853981633974483  
$l_{4x}$= 1.01  
$l_{4y}$= 0.353  
$\alpha_4$= 0.7853981633974483  


### Additional setup paramters
simulation time: 2000 [s]    
integration method: dassl  
tolerance: 1e-06  






