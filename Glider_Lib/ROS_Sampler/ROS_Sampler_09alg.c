/* Algebraic */
#include "ROS_Sampler_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void ROS_Sampler_eqFunction_7(DATA* data, threadData_t *threadData);
extern void ROS_Sampler_eqFunction_8(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    ROS_Sampler_eqFunction_7(data, threadData);

    ROS_Sampler_eqFunction_8(data, threadData);
}
/* for continuous time variables */
int ROS_Sampler_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  functionAlg_system0(data, threadData);

  ROS_Sampler_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
