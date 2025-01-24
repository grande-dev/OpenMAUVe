# OpenMAUV

An OpenModelica-based simulator for generic Autonomous Underwater Vehicles and Underwater Gliders.


# Code structure
*benchmark_model/ : this folder contains the models created to test the interface between OpenModelica and Python. 
	six_dof_free_falling.mo: represents a 6DOF object free falling due to gravity.
	AUV_falling_with_antigravity.mo: this models embeds the six_dof_free_falling.mo and adds external interface forces and torques.


*glider.mo: contains the model of a generic glider.
*glider_forced.mo: this models embeds the glider.mo and adds external interface forces and torques.


# Forces and torques convention
Added mass force: pink
Added mass torque: dark green 

Drag force: blue 
Lift force: orange
Viscous_moment: red

VBD force: purple



# Branches:  
seaglider: it this branch the Seaglider dynamics is computed. The hydrodynamic coefficients related to drag, lift and side force are obtained from CFD analyses. The mass and geometrical information are obtained from the ballast sheet.  




# References
*1) Grande, Davide, Luca Bascetta, and Alfredo Martins. "Modeling and simulation of a spherical vehicle for underwater surveillance." OCEANS 2018 MTS/IEEE Charleston. IEEE, 2018.

*2) Graver, Joshua Grady. "Underwater gliders: Dynamics, control and design." (2005): 523-528.

*3) Thor, I. Fossen, Handbook of marine craft hydrodynamics and motion control, 2011.

*4) Shaowei Zhang, Jiancheng Yu, Aiqun Zhang, Fumin Zhang, "Spiraling motion of underwater gliders: Modeling, analysis, and experimental results"


# Examples of the reference frames  
<img src="https://github.com/grande-dev/OpenMAUV-test/blob/master/results/frames_rotating.gif"> | <img src="https://github.com/grande-dev/OpenMAUV-test/blob/master/results/frames_rotating.gif">

Reference frames used: ECI in red, ECEF in green and NED in blue.


