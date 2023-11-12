/* Initial State Set */
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_model.h"
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_11mix.h"
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif
/* funtion initialize state sets */
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data)
{
  assertStreamPrint(NULL, nStateSets > 0, "Internal Error: nStateSets mismatch!");
  statesetData[0].nCandidates = 4;
  statesetData[0].nStates = 3;
  statesetData[0].nDummyStates = 4-3;
  statesetData[0].states = (VAR_INFO**) calloc(3,sizeof(VAR_INFO));
  statesetData[0].states[0] = &data->modelData->realVarsData[0].info /* $STATESET1.x[1] */;
  statesetData[0].states[1] = &data->modelData->realVarsData[1].info /* $STATESET1.x[2] */;
  statesetData[0].states[2] = &data->modelData->realVarsData[2].info /* $STATESET1.x[3] */;
  statesetData[0].statescandidates = (VAR_INFO**) calloc(4,sizeof(VAR_INFO));
  statesetData[0].statescandidates[0] = &data->modelData->realVarsData[142].info /* actuators.bodyVariableMass.Q[4] */;
  statesetData[0].statescandidates[1] = &data->modelData->realVarsData[141].info /* actuators.bodyVariableMass.Q[3] */;
  statesetData[0].statescandidates[2] = &data->modelData->realVarsData[140].info /* actuators.bodyVariableMass.Q[2] */;
  statesetData[0].statescandidates[3] = &data->modelData->realVarsData[139].info /* actuators.bodyVariableMass.Q[1] */;
  statesetData[0].A = &data->modelData->integerVarsData[0].info /* $STATESET1.A[1,1] */;
  statesetData[0].rowPivot = (modelica_integer*) calloc(4-3,sizeof(modelica_integer));
  statesetData[0].colPivot = (modelica_integer*) calloc(4,sizeof(modelica_integer));
  statesetData[0].J = (modelica_real*) calloc(4*(4-3),sizeof(modelica_real));
  statesetData[0].analyticalJacobianColumn = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacStateSetJac266_column;
  statesetData[0].initialAnalyticalJacobian = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianStateSetJac266;
  statesetData[0].jacobianIndex = 6;
  
}

#if defined(__cplusplus)
}
#endif

