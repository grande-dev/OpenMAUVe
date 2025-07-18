## Installation

The software framework was tested on OS: Linux Ubuntu 20.04, Linux Ubuntu 24.04, Windows 10, Windows 11.  
  
First, clone the repository:
```
git clone https://github.com/grande-dev/OpenMAUVe.git
```

  
### 1) Install OpenModelica

The software can be downloaded from the official [webpage](https://openmodelica.org/) where up-to-date instructions are provided. 
  
CAVEAT: if downloading on Linux, make sure that you are downloading the compiler too.   
 


### 2) Load OpenMAUVe in OpenModelica

Open the OpenModelica Connection Editor (found among your software as **OMEdit**).  
  
Press `File` --> `Open Model/Library File(s)` --> navigate to the OpenMAUVe repository path --> open `OpenMAUVe/package.mo`
  
CAVEAT: make sure to be in the top level of the repository (`OpenMAUVe/package.mo` is correct), and not into one subpackage (`OpenMAUVe/Actuators/package.mo` is not correct).
  


### 3) Test OpenMAUVe successful installation
Once OpenMAUVe is loaded among the libraries (left-hand side panel), navigate to `OpenMAUVe.VerificationSimulator.VerificationROGUE`, press `Simulation Setup` (top centre button) --> `Ok` 
  
These tests will run the provided verification model.     


