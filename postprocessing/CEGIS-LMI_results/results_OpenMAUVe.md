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


### Control gain 
F_1 = 37.5*(-50.92738942* err_1 -48.31304262* err_2 + 592.26745526 * err_3 + 114.93231216 * err_4 + 5.49255093 * err_5)  
F_2 = 37.5*(45.28452798* err_1 -45.56259187* err_2 + 540.6057194* err_3 + 107.57184302* err_4 + 5.1409641 * err_5)    
F_3 = 37.5*(46.77022163* err_1 -47.90461272* err_2 -540.79809262* err_3 -104.30642495* err_4 -4.98476203 * err_5)    
F_4 = 37.5*(-41.89811099* err_1 -44.06994184* err_2 -492.74953155* err_3 -96.09962048* err_4-4.59201013* err_5)    
  
  
### Additional setup paramters
simulation time: 2000 [s]    
integration method: dassl  
tolerance: 1e-06  







