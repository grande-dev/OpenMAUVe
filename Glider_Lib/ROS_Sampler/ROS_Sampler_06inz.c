/* Initialization */
#include "ROS_Sampler_model.h"
#include "ROS_Sampler_11mix.h"
#include "ROS_Sampler_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void ROS_Sampler_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
sampleTrigger = false
*/
void ROS_Sampler_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->booleanVars[2] /* sampleTrigger DISCRETE */ = 0;
  TRACE_POP
}
extern void ROS_Sampler_eqFunction_8(DATA *data, threadData_t *threadData);


/*
equation index: 3
type: SIMPLE_ASSIGN
$PRE.firstTrigger = false
*/
void ROS_Sampler_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->simulationInfo->booleanVarsPre[1] /* firstTrigger DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
firstTrigger = $PRE.firstTrigger
*/
void ROS_Sampler_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->booleanVars[1] /* firstTrigger DISCRETE */ = data->simulationInfo->booleanVarsPre[1] /* firstTrigger DISCRETE */;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
$PRE.y[1] = $START.y[1]
*/
void ROS_Sampler_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->simulationInfo->realVarsPre[1] /* y[1] DISCRETE */ = data->modelData->realVarsData[1].attribute /* y[1] DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
y[1] = $PRE.y[1]
*/
void ROS_Sampler_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[1] /* y[1] DISCRETE */ = data->simulationInfo->realVarsPre[1] /* y[1] DISCRETE */;
  TRACE_POP
}
OMC_DISABLE_OPT
void ROS_Sampler_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  ROS_Sampler_eqFunction_1(data, threadData);
  ROS_Sampler_eqFunction_8(data, threadData);
  ROS_Sampler_eqFunction_3(data, threadData);
  ROS_Sampler_eqFunction_4(data, threadData);
  ROS_Sampler_eqFunction_5(data, threadData);
  ROS_Sampler_eqFunction_6(data, threadData);
  TRACE_POP
}

int ROS_Sampler_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  ROS_Sampler_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No ROS_Sampler_functionInitialEquations_lambda0 function */

int ROS_Sampler_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

