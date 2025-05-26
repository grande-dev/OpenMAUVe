# OpenMAUVe

OpenMAUVe is an OpenModelica-based simulator for complex Autonomous Underwater Vehicles (AUVs), Underwater Gliders and hybrid AUVs.  
  
OpenMAUVe allows to simulate AUVs with internal moving masses (shifting and rolling), Variable Buoyancy Devices, in addition to the classical set of actuators (e.g. control surfaces such as rudders, stern planes and thrusters).


<img src="https://github.com/grande-dev/OpenMAUVe/blob/master/images/logo_OpenMAUVe.png"> 


## Step-by-step instructions 
Instructions on installation are available within the ![INSTALLATION](./documentation/INSTALLATION.md) file.    
  
Further examples on how to navigate the files, run the models, and check the results are available in the video demo discussed below.   
  


## Video demo
A two-parts video demo is available to provide further examples and instructions of how to use the software tool.     
[Part 1](https://youtu.be/KwfKjwBRIlU) further motivates the development of the simulator.  
[Part 2](https://youtu.be/s6pP4D50OoE) illustrates how to use the software and how to run the validation models.  
  
  
## Examples of the reference frames  
<img src="https://github.com/grande-dev/OpenMAUVe/blob/master/images/frames_rotating.gif"> 

Reference frames used: ECI in red, ECEF in green and NED in blue.
  
  
  
## Current status of the repo  
   
|  | Status  |
| :---:   | :---: |
| Under further development |  :white_check_mark:  |
| Maintained |  :white_check_mark:  |



## Current vehicles included 

| Vehicle | Included  | Verified successfully | Notes |
| :---:   | :---: | :---: | :---: |
| ROGUE glider |  :white_check_mark:  | :white_check_mark: |  |
| Seawing glider |  :white_check_mark:  | :white_check_mark: | |
| Petrel-II glider |  :white_check_mark:  | :yellow_circle: | Full verification not possible: missing deployment data |

The other vehicles available within `OpenMAUVe.Vehicles` require further development and are not certified to work. It was not possible to complete their integration due to missing geometrical or hydrodynamical parameters, or the result cannot be trusted due to the lack of groundtruth data.  





## Contacts
The authors can be contacted for feedback or to report issues at:  
`grande.rdev@gmail.com`
   
If you are interested in developing custom features or need help integrating your vehicle into the repository, we are open to collaboration requests. Feel free to get in touch via the contact address provided above.



## Ackowledgements
Further ackowledgements are provided ![here](./Acknowledgements.md).



## Reference  
The initial OpenMAUVe release and the demo were developed can be cited with the following BibTeX entry:  
  
```bibtex
@inproceedings{grande2025openmauve,
  title={OpenMAUVe: an open-source Modelica-based simulator for multibody underwater vehicle dynamics},
  author={Grande, Davide and Farı̀, Stefano and Corsini, Gianluca and Grech La Rosa, Andrea and Smith, Tom and Pawling, Rachel and Thomas, Giles},
  booktitle={AQ2UASIM workshop, ICRA: Atlanta},
  year={2025}
}
``` 



