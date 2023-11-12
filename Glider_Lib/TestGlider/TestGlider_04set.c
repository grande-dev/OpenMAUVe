/* Initial State Set */
#include "TestGlider_model.h"
#include "TestGlider_11mix.h"
#include "TestGlider_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif
/* funtion initialize state sets */
void TestGlider_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data)
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
  statesetData[0].statescandidates[0] = &data->modelData->realVarsData[154].info /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */;
  statesetData[0].statescandidates[1] = &data->modelData->realVarsData[153].info /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */;
  statesetData[0].statescandidates[2] = &data->modelData->realVarsData[152].info /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */;
  statesetData[0].statescandidates[3] = &data->modelData->realVarsData[151].info /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */;
  statesetData[0].A = &data->modelData->integerVarsData[0].info /* $STATESET1.A[1,1] */;
  statesetData[0].rowPivot = (modelica_integer*) calloc(4-3,sizeof(modelica_integer));
  statesetData[0].colPivot = (modelica_integer*) calloc(4,sizeof(modelica_integer));
  statesetData[0].J = (modelica_real*) calloc(4*(4-3),sizeof(modelica_real));
  statesetData[0].analyticalJacobianColumn = TestGlider_functionJacStateSetJac71_column;
  statesetData[0].initialAnalyticalJacobian = TestGlider_initialAnalyticJacobianStateSetJac71;
  statesetData[0].jacobianIndex = 6;
  
}

#if defined(__cplusplus)
}
#endif

