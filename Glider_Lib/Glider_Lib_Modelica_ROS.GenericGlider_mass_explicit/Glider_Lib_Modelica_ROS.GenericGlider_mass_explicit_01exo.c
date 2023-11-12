/* External objects file */
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

