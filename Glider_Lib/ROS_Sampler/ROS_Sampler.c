/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "ROS_Sampler_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation ROS_Sampler_performSimulation
#define prefixedName_updateContinuousSystem ROS_Sampler_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation ROS_Sampler_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int ROS_Sampler_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[0] /* u[1] variable */ = data->simulationInfo->inputVars[0];
  
  TRACE_POP
  return 0;
}

int ROS_Sampler_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[0].attribute.start;
  
  TRACE_POP
  return 0;
}

int ROS_Sampler_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[0].attribute.start = data->simulationInfo->inputVars[0];
  
  TRACE_POP
  return 0;
}

int ROS_Sampler_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[0].info.name;
  
  TRACE_POP
  return 0;
}

int ROS_Sampler_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int ROS_Sampler_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int ROS_Sampler_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[1] /* y[1] DISCRETE */;
  
  TRACE_POP
  return 0;
}

int ROS_Sampler_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 7
type: SIMPLE_ASSIGN
sampleTrigger = sample(1, startTime, samplePeriod)
*/
void ROS_Sampler_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->booleanVars[2] /* sampleTrigger DISCRETE */ = data->simulationInfo->samples[0];
  TRACE_POP
}
/*
equation index: 8
type: SIMPLE_ASSIGN
$whenCondition1 = sampleTrigger
*/
void ROS_Sampler_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = data->localData[0]->booleanVars[2] /* sampleTrigger DISCRETE */;
  TRACE_POP
}
/*
equation index: 9
type: WHEN

when {$whenCondition1} then
  firstTrigger = time <= startTime + 0.5 * samplePeriod;
end when;
*/
void ROS_Sampler_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  modelica_boolean tmp0;
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    tmp0 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[1] /* startTime PARAM */ + (0.5) * (data->simulationInfo->realParameter[0] /* samplePeriod PARAM */));
    data->localData[0]->booleanVars[1] /* firstTrigger DISCRETE */ = tmp0;
  }
  TRACE_POP
}
/*
equation index: 10
type: WHEN

when {$whenCondition1} then
  y = ROS_Socket_Call(time, portNumber, hostName, 1, 1, u);
end when;
*/
void ROS_Sampler_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  real_array tmp1;
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    real_array_create(&tmp1, ((modelica_real*)&((&data->localData[0]->realVars[0] /* u[1] variable */)[calc_base_index_dims_subs(1, (_index_t)1, ((modelica_integer) 1))])), 1, (_index_t)1);
    copy_real_array_data_mem(omc_ROS__Socket__Call(threadData, data->localData[0]->timeValue, data->simulationInfo->integerParameter[2] /* portNumber PARAM */, data->simulationInfo->stringParameter[0] /* hostName PARAM */, ((modelica_integer) 1), ((modelica_integer) 1), tmp1), &data->localData[0]->realVars[1] /* y[1] DISCRETE */);
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int ROS_Sampler_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  ROS_Sampler_functionLocalKnownVars(data, threadData);
  ROS_Sampler_eqFunction_7(data, threadData);

  ROS_Sampler_eqFunction_8(data, threadData);

  ROS_Sampler_eqFunction_9(data, threadData);

  ROS_Sampler_eqFunction_10(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int ROS_Sampler_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int ROS_Sampler_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  ROS_Sampler_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "ROS_Sampler_12jac.h"
#include "ROS_Sampler_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks ROS_Sampler_callback = {
   (int (*)(DATA *, threadData_t *, void *)) ROS_Sampler_performSimulation,    /* performSimulation */
   (int (*)(DATA *, threadData_t *, void *)) ROS_Sampler_performQSSSimulation,    /* performQSSSimulation */
   ROS_Sampler_updateContinuousSystem,    /* updateContinuousSystem */
   ROS_Sampler_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   NULL,    /* initialNonLinearSystem */
   NULL,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   ROS_Sampler_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   ROS_Sampler_initializeDAEmodeData,
   ROS_Sampler_functionODE,
   ROS_Sampler_functionAlgebraics,
   ROS_Sampler_functionDAE,
   ROS_Sampler_functionLocalKnownVars,
   ROS_Sampler_input_function,
   ROS_Sampler_input_function_init,
   ROS_Sampler_input_function_updateStartValues,
   ROS_Sampler_data_function,
   ROS_Sampler_output_function,
   ROS_Sampler_setc_function,
   ROS_Sampler_function_storeDelayed,
   ROS_Sampler_updateBoundVariableAttributes,
   ROS_Sampler_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   ROS_Sampler_functionRemovedInitialEquations,
   ROS_Sampler_updateBoundParameters,
   ROS_Sampler_checkForAsserts,
   ROS_Sampler_function_ZeroCrossingsEquations,
   ROS_Sampler_function_ZeroCrossings,
   ROS_Sampler_function_updateRelations,
   ROS_Sampler_zeroCrossingDescription,
   ROS_Sampler_relationDescription,
   ROS_Sampler_function_initSample,
   ROS_Sampler_INDEX_JAC_A,
   ROS_Sampler_INDEX_JAC_B,
   ROS_Sampler_INDEX_JAC_C,
   ROS_Sampler_INDEX_JAC_D,
   ROS_Sampler_INDEX_JAC_F,
   ROS_Sampler_initialAnalyticJacobianA,
   ROS_Sampler_initialAnalyticJacobianB,
   ROS_Sampler_initialAnalyticJacobianC,
   ROS_Sampler_initialAnalyticJacobianD,
   ROS_Sampler_initialAnalyticJacobianF,
   ROS_Sampler_functionJacA_column,
   ROS_Sampler_functionJacB_column,
   ROS_Sampler_functionJacC_column,
   ROS_Sampler_functionJacD_column,
   ROS_Sampler_functionJacF_column,
   ROS_Sampler_linear_model_frame,
   ROS_Sampler_linear_model_datarecovery_frame,
   ROS_Sampler_mayer,
   ROS_Sampler_lagrange,
   ROS_Sampler_pickUpBoundsForInputsInOptimization,
   ROS_Sampler_setInputData,
   ROS_Sampler_getTimeGrid,
   ROS_Sampler_symbolicInlineSystem,
   ROS_Sampler_function_initSynchronous,
   ROS_Sampler_function_updateSynchronous,
   ROS_Sampler_function_equationsSynchronous,
   ROS_Sampler_inputNames,
   ROS_Sampler_dataReconciliationInputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Actuators"
#define _OMC_LIT_RESOURCE_0_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,9,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,44,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "AddedForcesTorques"
#define _OMC_LIT_RESOURCE_1_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,18,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,44,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "AddedMass"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,9,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,44,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "AddedMassForcesTorques"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,22,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,44,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "BodyExplicit"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,12,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,44,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "BodyVariableMass"
#define _OMC_LIT_RESOURCE_5_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,16,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,44,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "BodyWithAddedTerms"
#define _OMC_LIT_RESOURCE_6_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,18,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,44,_OMC_LIT_RESOURCE_6_dir_data);

#define _OMC_LIT_RESOURCE_7_name_data "BuoyancyForce"
#define _OMC_LIT_RESOURCE_7_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_name,13,_OMC_LIT_RESOURCE_7_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir,44,_OMC_LIT_RESOURCE_7_dir_data);

#define _OMC_LIT_RESOURCE_8_name_data "Complex"
#define _OMC_LIT_RESOURCE_8_dir_data "/usr/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_name,7,_OMC_LIT_RESOURCE_8_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir,18,_OMC_LIT_RESOURCE_8_dir_data);

#define _OMC_LIT_RESOURCE_9_name_data "ComputeHydroForceTorque"
#define _OMC_LIT_RESOURCE_9_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_name,23,_OMC_LIT_RESOURCE_9_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir,44,_OMC_LIT_RESOURCE_9_dir_data);

#define _OMC_LIT_RESOURCE_10_name_data "GenericGlider_mass_explicit"
#define _OMC_LIT_RESOURCE_10_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_name,27,_OMC_LIT_RESOURCE_10_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir,44,_OMC_LIT_RESOURCE_10_dir_data);

#define _OMC_LIT_RESOURCE_11_name_data "HydrodynamicForcesTorques"
#define _OMC_LIT_RESOURCE_11_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_name,25,_OMC_LIT_RESOURCE_11_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir,44,_OMC_LIT_RESOURCE_11_dir_data);

#define _OMC_LIT_RESOURCE_12_name_data "Modelica"
#define _OMC_LIT_RESOURCE_12_dir_data "/usr/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_name,8,_OMC_LIT_RESOURCE_12_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir,33,_OMC_LIT_RESOURCE_12_dir_data);

#define _OMC_LIT_RESOURCE_13_name_data "ModelicaReference"
#define _OMC_LIT_RESOURCE_13_dir_data "/usr/lib/omlibrary/ModelicaReference"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_name,17,_OMC_LIT_RESOURCE_13_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir,36,_OMC_LIT_RESOURCE_13_dir_data);

#define _OMC_LIT_RESOURCE_14_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_14_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_name,16,_OMC_LIT_RESOURCE_14_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir,41,_OMC_LIT_RESOURCE_14_dir_data);

#define _OMC_LIT_RESOURCE_15_name_data "ROS_Sampler"
#define _OMC_LIT_RESOURCE_15_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_name,11,_OMC_LIT_RESOURCE_15_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir,44,_OMC_LIT_RESOURCE_15_dir_data);

#define _OMC_LIT_RESOURCE_16_name_data "ROS_Socket_Call"
#define _OMC_LIT_RESOURCE_16_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_name,15,_OMC_LIT_RESOURCE_16_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir,44,_OMC_LIT_RESOURCE_16_dir_data);

#define _OMC_LIT_RESOURCE_17_name_data "TestGlider"
#define _OMC_LIT_RESOURCE_17_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_name,10,_OMC_LIT_RESOURCE_17_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir,44,_OMC_LIT_RESOURCE_17_dir_data);

#define _OMC_LIT_RESOURCE_18_name_data "TestModel"
#define _OMC_LIT_RESOURCE_18_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_name,9,_OMC_LIT_RESOURCE_18_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir,44,_OMC_LIT_RESOURCE_18_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,38,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir)}};
void ROS_Sampler_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &ROS_Sampler_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "ROS_Sampler";
  data->modelData->modelFilePrefix = "ROS_Sampler";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/automata/repos/Glider_Lib_Modelica_ROS";
  data->modelData->modelGUID = "{7a89ad1a-8ddb-4997-a724-4e61a1eb3955}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "ROS_Sampler_init.c"
    ;
  static const char contents_info[] =
    #include "ROS_Sampler_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "ROS_Sampler_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "ROS_Sampler_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 2;
  data->modelData->nDiscreteReal = 1;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 3;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 2;
  data->modelData->nParametersInteger = 3;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 1;
  data->modelData->nInputVars = 1;
  data->modelData->nOutputVars = 3;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 1;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "ROS_Sampler_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 14;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    ROS_Sampler_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


