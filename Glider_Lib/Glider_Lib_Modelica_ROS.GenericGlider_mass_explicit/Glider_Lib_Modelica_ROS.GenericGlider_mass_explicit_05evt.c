/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  *out_EquationIndexes = NULL;
  return "empty";
}

/* forwarded equations */

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;


#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_relationDescription(int i)
{
  return "empty";
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  
  if(evalforZeroCross) {
  } else {
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

