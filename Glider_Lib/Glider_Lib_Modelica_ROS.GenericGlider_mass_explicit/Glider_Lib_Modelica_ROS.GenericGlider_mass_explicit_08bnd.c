/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 5001
type: SIMPLE_ASSIGN
$START.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u = r_0[3]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5001};
  data->modelData->realVarsData[15].attribute /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */.start = data->simulationInfo->realParameter[468] /* r_0[3] PARAM */;
    data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */ = data->modelData->realVarsData[15].attribute /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[15].info /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u */.name, (modelica_real) data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */);
  TRACE_POP
}

/*
equation index: 5002
type: SIMPLE_ASSIGN
$START.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u = r_0[2]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5002};
  data->modelData->realVarsData[14].attribute /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */.start = data->simulationInfo->realParameter[467] /* r_0[2] PARAM */;
    data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */ = data->modelData->realVarsData[14].attribute /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[14].info /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u */.name, (modelica_real) data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */);
  TRACE_POP
}

/*
equation index: 5003
type: SIMPLE_ASSIGN
$START.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u = r_0[1]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5003};
  data->modelData->realVarsData[13].attribute /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */.start = data->simulationInfo->realParameter[466] /* r_0[1] PARAM */;
    data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */ = data->modelData->realVarsData[13].attribute /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[13].info /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u */.name, (modelica_real) data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */);
  TRACE_POP
}

/*
equation index: 5004
type: SIMPLE_ASSIGN
$START.addedMassForcesTorques.absoluteSensor.der1[3].u = v_0[3]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5004};
  data->modelData->realVarsData[9].attribute /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */.start = data->simulationInfo->realParameter[486] /* v_0[3] PARAM */;
    data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */ = data->modelData->realVarsData[9].attribute /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* addedMassForcesTorques.absoluteSensor.der1[3].u */.name, (modelica_real) data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */);
  TRACE_POP
}

/*
equation index: 5005
type: SIMPLE_ASSIGN
$START.addedMassForcesTorques.absoluteSensor.der1[2].u = v_0[2]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5005};
  data->modelData->realVarsData[8].attribute /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */.start = data->simulationInfo->realParameter[485] /* v_0[2] PARAM */;
    data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */ = data->modelData->realVarsData[8].attribute /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* addedMassForcesTorques.absoluteSensor.der1[2].u */.name, (modelica_real) data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */);
  TRACE_POP
}

/*
equation index: 5006
type: SIMPLE_ASSIGN
$START.addedMassForcesTorques.absoluteSensor.der1[1].u = v_0[1]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5006};
  data->modelData->realVarsData[7].attribute /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */.start = data->simulationInfo->realParameter[484] /* v_0[1] PARAM */;
    data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */ = data->modelData->realVarsData[7].attribute /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* addedMassForcesTorques.absoluteSensor.der1[1].u */.name, (modelica_real) data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */);
  TRACE_POP
}

/*
equation index: 5007
type: SIMPLE_ASSIGN
$START.hull.z_a[3] = (-0.0009999998333333417) * hull.z_0_start[2] + 0.9999995000000417 * hull.z_0_start[3]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5007};
  data->modelData->realVarsData[1353].attribute /* hull.z_a[3] variable */.start = (-0.0009999998333333417) * (data->simulationInfo->realParameter[420] /* hull.z_0_start[2] PARAM */) + (0.9999995000000417) * (data->simulationInfo->realParameter[421] /* hull.z_0_start[3] PARAM */);
    data->localData[0]->realVars[1353] /* hull.z_a[3] variable */ = data->modelData->realVarsData[1353].attribute /* hull.z_a[3] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1353].info /* hull.z_a[3] */.name, (modelica_real) data->localData[0]->realVars[1353] /* hull.z_a[3] variable */);
  TRACE_POP
}

/*
equation index: 5008
type: SIMPLE_ASSIGN
$START.hull.z_a[2] = (-9.999999983333334e-05) * hull.z_0_start[1] + 0.9999994950000443 * hull.z_0_start[2] + 0.0009999998283333426 * hull.z_0_start[3]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5008};
  data->modelData->realVarsData[1352].attribute /* hull.z_a[2] variable */.start = (-9.999999983333334e-05) * (data->simulationInfo->realParameter[419] /* hull.z_0_start[1] PARAM */) + (0.9999994950000443) * (data->simulationInfo->realParameter[420] /* hull.z_0_start[2] PARAM */) + (0.0009999998283333426) * (data->simulationInfo->realParameter[421] /* hull.z_0_start[3] PARAM */);
    data->localData[0]->realVars[1352] /* hull.z_a[2] variable */ = data->modelData->realVarsData[1352].attribute /* hull.z_a[2] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1352].info /* hull.z_a[2] */.name, (modelica_real) data->localData[0]->realVars[1352] /* hull.z_a[2] variable */);
  TRACE_POP
}

/*
equation index: 5009
type: SIMPLE_ASSIGN
$START.hull.z_a[1] = 0.999999995 * hull.z_0_start[1] + 9.99999498333376e-05 * hull.z_0_start[2] + 9.999998316666754e-08 * hull.z_0_start[3]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5009};
  data->modelData->realVarsData[1351].attribute /* hull.z_a[1] variable */.start = (0.999999995) * (data->simulationInfo->realParameter[419] /* hull.z_0_start[1] PARAM */) + (9.99999498333376e-05) * (data->simulationInfo->realParameter[420] /* hull.z_0_start[2] PARAM */) + (9.999998316666754e-08) * (data->simulationInfo->realParameter[421] /* hull.z_0_start[3] PARAM */);
    data->localData[0]->realVars[1351] /* hull.z_a[1] variable */ = data->modelData->realVarsData[1351].attribute /* hull.z_a[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1351].info /* hull.z_a[1] */.name, (modelica_real) data->localData[0]->realVars[1351] /* hull.z_a[1] variable */);
  TRACE_POP
}

/*
equation index: 5010
type: SIMPLE_ASSIGN
$START.hull.w_a[3] = (-0.0009999998333333417) * hull.w_0_start[2] + 0.9999995000000417 * hull.w_0_start[3]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5010};
  data->modelData->realVarsData[12].attribute /* hull.w_a[3] STATE(1,hull.z_a[3]) */.start = (-0.0009999998333333417) * (data->simulationInfo->realParameter[417] /* hull.w_0_start[2] PARAM */) + (0.9999995000000417) * (data->simulationInfo->realParameter[418] /* hull.w_0_start[3] PARAM */);
    data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */ = data->modelData->realVarsData[12].attribute /* hull.w_a[3] STATE(1,hull.z_a[3]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[12].info /* hull.w_a[3] */.name, (modelica_real) data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */);
  TRACE_POP
}

/*
equation index: 5011
type: SIMPLE_ASSIGN
$START.hull.w_a[2] = (-9.999999983333334e-05) * hull.w_0_start[1] + 0.9999994950000443 * hull.w_0_start[2] + 0.0009999998283333426 * hull.w_0_start[3]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5011};
  data->modelData->realVarsData[11].attribute /* hull.w_a[2] STATE(1,hull.z_a[2]) */.start = (-9.999999983333334e-05) * (data->simulationInfo->realParameter[416] /* hull.w_0_start[1] PARAM */) + (0.9999994950000443) * (data->simulationInfo->realParameter[417] /* hull.w_0_start[2] PARAM */) + (0.0009999998283333426) * (data->simulationInfo->realParameter[418] /* hull.w_0_start[3] PARAM */);
    data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */ = data->modelData->realVarsData[11].attribute /* hull.w_a[2] STATE(1,hull.z_a[2]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* hull.w_a[2] */.name, (modelica_real) data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */);
  TRACE_POP
}

/*
equation index: 5012
type: SIMPLE_ASSIGN
$START.hull.w_a[1] = 0.999999995 * hull.w_0_start[1] + 9.99999498333376e-05 * hull.w_0_start[2] + 9.999998316666754e-08 * hull.w_0_start[3]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5012};
  data->modelData->realVarsData[10].attribute /* hull.w_a[1] STATE(1,hull.z_a[1]) */.start = (0.999999995) * (data->simulationInfo->realParameter[416] /* hull.w_0_start[1] PARAM */) + (9.99999498333376e-05) * (data->simulationInfo->realParameter[417] /* hull.w_0_start[2] PARAM */) + (9.999998316666754e-08) * (data->simulationInfo->realParameter[418] /* hull.w_0_start[3] PARAM */);
    data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */ = data->modelData->realVarsData[10].attribute /* hull.w_a[1] STATE(1,hull.z_a[1]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* hull.w_a[1] */.name, (modelica_real) data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */);
  TRACE_POP
}

/*
equation index: 5013
type: SIMPLE_ASSIGN
$START.actuators.body_rolling.z_a[3] = actuators.body_rolling.z_0_start[3]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5013};
  data->modelData->realVarsData[210].attribute /* actuators.body_rolling.z_a[3] variable */.start = data->simulationInfo->realParameter[139] /* actuators.body_rolling.z_0_start[3] PARAM */;
    data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */ = data->modelData->realVarsData[210].attribute /* actuators.body_rolling.z_a[3] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[210].info /* actuators.body_rolling.z_a[3] */.name, (modelica_real) data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */);
  TRACE_POP
}

/*
equation index: 5014
type: SIMPLE_ASSIGN
$START.actuators.body_rolling.z_a[2] = actuators.body_rolling.z_0_start[2]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5014};
  data->modelData->realVarsData[209].attribute /* actuators.body_rolling.z_a[2] variable */.start = data->simulationInfo->realParameter[138] /* actuators.body_rolling.z_0_start[2] PARAM */;
    data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */ = data->modelData->realVarsData[209].attribute /* actuators.body_rolling.z_a[2] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[209].info /* actuators.body_rolling.z_a[2] */.name, (modelica_real) data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */);
  TRACE_POP
}

/*
equation index: 5015
type: SIMPLE_ASSIGN
$START.actuators.body_rolling.z_a[1] = actuators.body_rolling.z_0_start[1]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5015};
  data->modelData->realVarsData[208].attribute /* actuators.body_rolling.z_a[1] variable */.start = data->simulationInfo->realParameter[137] /* actuators.body_rolling.z_0_start[1] PARAM */;
    data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */ = data->modelData->realVarsData[208].attribute /* actuators.body_rolling.z_a[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[208].info /* actuators.body_rolling.z_a[1] */.name, (modelica_real) data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */);
  TRACE_POP
}

/*
equation index: 5016
type: SIMPLE_ASSIGN
$START.actuators.body_rolling.w_a[3] = actuators.body_rolling.w_0_start[3]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5016};
  data->modelData->realVarsData[207].attribute /* actuators.body_rolling.w_a[3] DUMMY_STATE */.start = data->simulationInfo->realParameter[136] /* actuators.body_rolling.w_0_start[3] PARAM */;
    data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */ = data->modelData->realVarsData[207].attribute /* actuators.body_rolling.w_a[3] DUMMY_STATE */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[207].info /* actuators.body_rolling.w_a[3] */.name, (modelica_real) data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5017
type: SIMPLE_ASSIGN
$START.actuators.body_rolling.w_a[2] = actuators.body_rolling.w_0_start[2]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5017};
  data->modelData->realVarsData[206].attribute /* actuators.body_rolling.w_a[2] DUMMY_STATE */.start = data->simulationInfo->realParameter[135] /* actuators.body_rolling.w_0_start[2] PARAM */;
    data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */ = data->modelData->realVarsData[206].attribute /* actuators.body_rolling.w_a[2] DUMMY_STATE */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[206].info /* actuators.body_rolling.w_a[2] */.name, (modelica_real) data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5018
type: SIMPLE_ASSIGN
$START.actuators.body_rolling.w_a[1] = actuators.body_rolling.w_0_start[1]
*/
OMC_DISABLE_OPT
static void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5018};
  data->modelData->realVarsData[205].attribute /* actuators.body_rolling.w_a[1] DUMMY_STATE */.start = data->simulationInfo->realParameter[134] /* actuators.body_rolling.w_0_start[1] PARAM */;
    data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */ = data->modelData->realVarsData[205].attribute /* actuators.body_rolling.w_a[1] DUMMY_STATE */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[205].info /* actuators.body_rolling.w_a[1] */.name, (modelica_real) data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */);
  TRACE_POP
}
OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5001(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5002(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5003(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5004(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5005(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5006(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5007(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5008(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5009(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5010(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5011(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5012(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5013(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5014(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5015(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5016(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5017(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5018(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_updateBoundParameters_0(DATA *data, threadData_t *threadData);
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_updateBoundParameters_1(DATA *data, threadData_t *threadData);
OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->localData[0]->integerVars[12] /* actuators.bodyVariableMass.sphereColor[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[12].time_unvarying = 1;
  data->localData[0]->integerVars[15] /* actuators.body_rolling.sphereColor[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[15].time_unvarying = 1;
  data->localData[0]->integerVars[18] /* actuators.fixedFrame.color_x[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[18].time_unvarying = 1;
  data->localData[0]->integerVars[19] /* actuators.fixedFrame.color_x[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[19].time_unvarying = 1;
  data->localData[0]->integerVars[20] /* actuators.fixedFrame.color_x[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[20].time_unvarying = 1;
  data->localData[0]->integerVars[28] /* actuators.prismatic.boxColor[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[28].time_unvarying = 1;
  data->localData[0]->integerVars[29] /* actuators.prismatic.boxColor[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[29].time_unvarying = 1;
  data->localData[0]->integerVars[31] /* actuators.revolute.cylinderColor[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[31].time_unvarying = 1;
  data->localData[0]->integerVars[32] /* actuators.revolute.cylinderColor[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[32].time_unvarying = 1;
  data->localData[0]->integerVars[33] /* actuators.shape_green.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[33].time_unvarying = 1;
  data->localData[0]->integerVars[35] /* actuators.shape_green.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[35].time_unvarying = 1;
  data->localData[0]->integerVars[37] /* actuators.shape_red_ballast.color[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[37].time_unvarying = 1;
  data->localData[0]->integerVars[38] /* actuators.shape_red_ballast.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[38].time_unvarying = 1;
  data->localData[0]->integerVars[44] /* addedMassForcesTorques.absoluteSensor.arrowColor[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[44].time_unvarying = 1;
  data->localData[0]->integerVars[45] /* addedMassForcesTorques.force.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[45].time_unvarying = 1;
  data->localData[0]->integerVars[47] /* addedMassForcesTorques.force.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[47].time_unvarying = 1;
  data->localData[0]->integerVars[48] /* addedMassForcesTorques.torque.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[48].time_unvarying = 1;
  data->localData[0]->integerVars[50] /* addedMassForcesTorques.torque.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[50].time_unvarying = 1;
  data->localData[0]->integerVars[51] /* buoyancyForce.force.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[51].time_unvarying = 1;
  data->localData[0]->integerVars[52] /* buoyancyForce.force.color[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[52].time_unvarying = 1;
  data->localData[0]->integerVars[54] /* hull.sphereColor[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[54].time_unvarying = 1;
  data->localData[0]->integerVars[57] /* hydrodynamicForcesTorques.force.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[57].time_unvarying = 1;
  data->localData[0]->integerVars[59] /* hydrodynamicForcesTorques.force.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[59].time_unvarying = 1;
  data->localData[0]->integerVars[60] /* hydrodynamicForcesTorques.torque.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[60].time_unvarying = 1;
  data->localData[0]->integerVars[62] /* hydrodynamicForcesTorques.torque.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[62].time_unvarying = 1;
  data->localData[0]->integerVars[63] /* shape_hull.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[63].time_unvarying = 1;
  data->localData[0]->integerVars[64] /* shape_hull.color[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[64].time_unvarying = 1;
  data->localData[0]->integerVars[66] /* world.axisColor_x[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[66].time_unvarying = 1;
  data->localData[0]->integerVars[67] /* world.axisColor_x[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[67].time_unvarying = 1;
  data->localData[0]->integerVars[68] /* world.axisColor_x[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[68].time_unvarying = 1;
  data->localData[0]->integerVars[69] /* world.gravityArrowColor[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[69].time_unvarying = 1;
  data->localData[0]->integerVars[71] /* world.gravityArrowColor[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[71].time_unvarying = 1;
  data->localData[0]->integerVars[72] /* world.gravitySphereColor[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[72].time_unvarying = 1;
  data->localData[0]->integerVars[74] /* world.gravitySphereColor[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[74].time_unvarying = 1;
  data->simulationInfo->integerParameter[0] /* absoluteAngles.sequence[1] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* absoluteAngles.sequence[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* absoluteAngles.sequence[3] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* actuators.bodyVariableMass.sequence_angleStates[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* actuators.bodyVariableMass.sequence_angleStates[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* actuators.bodyVariableMass.sequence_angleStates[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* actuators.bodyVariableMass.sequence_start[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* actuators.bodyVariableMass.sequence_start[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* actuators.bodyVariableMass.sequence_start[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->simulationInfo->integerParameter[11] /* actuators.body_rolling.sequence_angleStates[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  data->simulationInfo->integerParameter[12] /* actuators.body_rolling.sequence_angleStates[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[12].time_unvarying = 1;
  data->simulationInfo->integerParameter[13] /* actuators.body_rolling.sequence_angleStates[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[13].time_unvarying = 1;
  data->simulationInfo->integerParameter[14] /* actuators.body_rolling.sequence_start[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[14].time_unvarying = 1;
  data->simulationInfo->integerParameter[15] /* actuators.body_rolling.sequence_start[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[15].time_unvarying = 1;
  data->simulationInfo->integerParameter[16] /* actuators.body_rolling.sequence_start[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[16].time_unvarying = 1;
  data->simulationInfo->integerParameter[17] /* actuators.fixedFrame.x_label.n PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[17].time_unvarying = 1;
  data->simulationInfo->integerParameter[18] /* actuators.fixedFrame.y_label.n PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[18].time_unvarying = 1;
  data->simulationInfo->integerParameter[19] /* actuators.fixedFrame.z_label.n PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[19].time_unvarying = 1;
  data->simulationInfo->integerParameter[36] /* addedMassForcesTorques.absoluteSensor.sequence[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[36].time_unvarying = 1;
  data->simulationInfo->integerParameter[37] /* addedMassForcesTorques.absoluteSensor.sequence[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[37].time_unvarying = 1;
  data->simulationInfo->integerParameter[38] /* addedMassForcesTorques.absoluteSensor.sequence[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[38].time_unvarying = 1;
  data->simulationInfo->integerParameter[59] /* hull.sequence_angleStates[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[59].time_unvarying = 1;
  data->simulationInfo->integerParameter[60] /* hull.sequence_angleStates[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[60].time_unvarying = 1;
  data->simulationInfo->integerParameter[61] /* hull.sequence_angleStates[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[61].time_unvarying = 1;
  data->simulationInfo->integerParameter[62] /* hull.sequence_start[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[62].time_unvarying = 1;
  data->simulationInfo->integerParameter[63] /* hull.sequence_start[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[63].time_unvarying = 1;
  data->simulationInfo->integerParameter[64] /* hull.sequence_start[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[64].time_unvarying = 1;
  data->simulationInfo->integerParameter[80] /* world.ndim_pointGravity PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[80].time_unvarying = 1;
  data->simulationInfo->integerParameter[81] /* world.x_label.n PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[81].time_unvarying = 1;
  data->simulationInfo->integerParameter[82] /* world.y_label.n PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[82].time_unvarying = 1;
  data->simulationInfo->integerParameter[83] /* world.z_label.n PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[83].time_unvarying = 1;
  data->localData[0]->realVars[130] /* absolutePosition.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[130].time_unvarying = 1;
  data->localData[0]->realVars[131] /* absolutePosition.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[131].time_unvarying = 1;
  data->localData[0]->realVars[132] /* absolutePosition.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[132].time_unvarying = 1;
  data->localData[0]->realVars[136] /* absolutePosition.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[136].time_unvarying = 1;
  data->localData[0]->realVars[137] /* absolutePosition.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[137].time_unvarying = 1;
  data->localData[0]->realVars[138] /* absolutePosition.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[138].time_unvarying = 1;
  data->localData[0]->realVars[691] /* addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[691].time_unvarying = 1;
  data->localData[0]->realVars[692] /* addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[692].time_unvarying = 1;
  data->localData[0]->realVars[693] /* addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[693].time_unvarying = 1;
  data->localData[0]->realVars[697] /* addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[697].time_unvarying = 1;
  data->localData[0]->realVars[698] /* addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[698].time_unvarying = 1;
  data->localData[0]->realVars[699] /* addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[699].time_unvarying = 1;
  data->localData[0]->realVars[754] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[754].time_unvarying = 1;
  data->localData[0]->realVars[755] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[755].time_unvarying = 1;
  data->localData[0]->realVars[756] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[756].time_unvarying = 1;
  data->localData[0]->realVars[760] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[760].time_unvarying = 1;
  data->localData[0]->realVars[761] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[761].time_unvarying = 1;
  data->localData[0]->realVars[762] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[762].time_unvarying = 1;
  data->localData[0]->realVars[775] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[775].time_unvarying = 1;
  data->localData[0]->realVars[776] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[776].time_unvarying = 1;
  data->localData[0]->realVars[777] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[777].time_unvarying = 1;
  data->localData[0]->realVars[781] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[781].time_unvarying = 1;
  data->localData[0]->realVars[782] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[782].time_unvarying = 1;
  data->localData[0]->realVars[783] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[783].time_unvarying = 1;
  data->localData[0]->realVars[829] /* addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[829].time_unvarying = 1;
  data->localData[0]->realVars[830] /* addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[830].time_unvarying = 1;
  data->localData[0]->realVars[831] /* addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[831].time_unvarying = 1;
  data->localData[0]->realVars[835] /* addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[835].time_unvarying = 1;
  data->localData[0]->realVars[836] /* addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[836].time_unvarying = 1;
  data->localData[0]->realVars[837] /* addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[837].time_unvarying = 1;
  data->localData[0]->realVars[931] /* addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[931].time_unvarying = 1;
  data->localData[0]->realVars[932] /* addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[932].time_unvarying = 1;
  data->localData[0]->realVars[933] /* addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[933].time_unvarying = 1;
  data->localData[0]->realVars[937] /* addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[937].time_unvarying = 1;
  data->localData[0]->realVars[938] /* addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[938].time_unvarying = 1;
  data->localData[0]->realVars[939] /* addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[939].time_unvarying = 1;
  data->localData[0]->realVars[976] /* addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[976].time_unvarying = 1;
  data->localData[0]->realVars[977] /* addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[977].time_unvarying = 1;
  data->localData[0]->realVars[978] /* addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[978].time_unvarying = 1;
  data->localData[0]->realVars[982] /* addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[982].time_unvarying = 1;
  data->localData[0]->realVars[983] /* addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[983].time_unvarying = 1;
  data->localData[0]->realVars[984] /* addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[984].time_unvarying = 1;
  data->localData[0]->realVars[1042] /* addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1042].time_unvarying = 1;
  data->localData[0]->realVars[1043] /* addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1043].time_unvarying = 1;
  data->localData[0]->realVars[1044] /* addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1044].time_unvarying = 1;
  data->localData[0]->realVars[1048] /* addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1048].time_unvarying = 1;
  data->localData[0]->realVars[1049] /* addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1049].time_unvarying = 1;
  data->localData[0]->realVars[1050] /* addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1050].time_unvarying = 1;
  data->localData[0]->realVars[1063] /* addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1063].time_unvarying = 1;
  data->localData[0]->realVars[1064] /* addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1064].time_unvarying = 1;
  data->localData[0]->realVars[1065] /* addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1065].time_unvarying = 1;
  data->localData[0]->realVars[1069] /* addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1069].time_unvarying = 1;
  data->localData[0]->realVars[1070] /* addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1070].time_unvarying = 1;
  data->localData[0]->realVars[1071] /* addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1071].time_unvarying = 1;
  data->localData[0]->realVars[1159] /* addedMassForcesTorques.force.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1159].time_unvarying = 1;
  data->localData[0]->realVars[1160] /* addedMassForcesTorques.force.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1160].time_unvarying = 1;
  data->localData[0]->realVars[1161] /* addedMassForcesTorques.force.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1161].time_unvarying = 1;
  data->localData[0]->realVars[1165] /* addedMassForcesTorques.force.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1165].time_unvarying = 1;
  data->localData[0]->realVars[1166] /* addedMassForcesTorques.force.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1166].time_unvarying = 1;
  data->localData[0]->realVars[1167] /* addedMassForcesTorques.force.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1167].time_unvarying = 1;
  data->localData[0]->realVars[1241] /* addedMassForcesTorques.torque.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1241].time_unvarying = 1;
  data->localData[0]->realVars[1242] /* addedMassForcesTorques.torque.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1242].time_unvarying = 1;
  data->localData[0]->realVars[1243] /* addedMassForcesTorques.torque.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1243].time_unvarying = 1;
  data->localData[0]->realVars[1247] /* addedMassForcesTorques.torque.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1247].time_unvarying = 1;
  data->localData[0]->realVars[1248] /* addedMassForcesTorques.torque.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1248].time_unvarying = 1;
  data->localData[0]->realVars[1249] /* addedMassForcesTorques.torque.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1249].time_unvarying = 1;
  data->localData[0]->realVars[1304] /* buoyancyForce.force.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1304].time_unvarying = 1;
  data->localData[0]->realVars[1305] /* buoyancyForce.force.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1305].time_unvarying = 1;
  data->localData[0]->realVars[1306] /* buoyancyForce.force.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1306].time_unvarying = 1;
  data->localData[0]->realVars[1310] /* buoyancyForce.force.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1310].time_unvarying = 1;
  data->localData[0]->realVars[1311] /* buoyancyForce.force.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1311].time_unvarying = 1;
  data->localData[0]->realVars[1312] /* buoyancyForce.force.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1312].time_unvarying = 1;
  data->localData[0]->realVars[1399] /* hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1399].time_unvarying = 1;
  data->localData[0]->realVars[1400] /* hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1400].time_unvarying = 1;
  data->localData[0]->realVars[1401] /* hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1401].time_unvarying = 1;
  data->localData[0]->realVars[1405] /* hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1405].time_unvarying = 1;
  data->localData[0]->realVars[1406] /* hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1406].time_unvarying = 1;
  data->localData[0]->realVars[1407] /* hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1407].time_unvarying = 1;
  data->localData[0]->realVars[1462] /* hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1462].time_unvarying = 1;
  data->localData[0]->realVars[1463] /* hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1463].time_unvarying = 1;
  data->localData[0]->realVars[1464] /* hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1464].time_unvarying = 1;
  data->localData[0]->realVars[1468] /* hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1468].time_unvarying = 1;
  data->localData[0]->realVars[1469] /* hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1469].time_unvarying = 1;
  data->localData[0]->realVars[1470] /* hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1470].time_unvarying = 1;
  data->localData[0]->realVars[1483] /* hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1483].time_unvarying = 1;
  data->localData[0]->realVars[1484] /* hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1484].time_unvarying = 1;
  data->localData[0]->realVars[1485] /* hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1485].time_unvarying = 1;
  data->localData[0]->realVars[1489] /* hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1489].time_unvarying = 1;
  data->localData[0]->realVars[1490] /* hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1490].time_unvarying = 1;
  data->localData[0]->realVars[1491] /* hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1491].time_unvarying = 1;
  data->localData[0]->realVars[1572] /* hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1572].time_unvarying = 1;
  data->localData[0]->realVars[1573] /* hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1573].time_unvarying = 1;
  data->localData[0]->realVars[1574] /* hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1574].time_unvarying = 1;
  data->localData[0]->realVars[1578] /* hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1578].time_unvarying = 1;
  data->localData[0]->realVars[1579] /* hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1579].time_unvarying = 1;
  data->localData[0]->realVars[1580] /* hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1580].time_unvarying = 1;
  data->localData[0]->realVars[1645] /* hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1645].time_unvarying = 1;
  data->localData[0]->realVars[1646] /* hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1646].time_unvarying = 1;
  data->localData[0]->realVars[1647] /* hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1647].time_unvarying = 1;
  data->localData[0]->realVars[1651] /* hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1651].time_unvarying = 1;
  data->localData[0]->realVars[1652] /* hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1652].time_unvarying = 1;
  data->localData[0]->realVars[1653] /* hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1653].time_unvarying = 1;
  data->simulationInfo->realParameter[53] /* actuators.bodyVariableMass.Q_start[1] PARAM */ = 0.0;
  data->modelData->realParameterData[53].time_unvarying = 1;
  data->simulationInfo->realParameter[54] /* actuators.bodyVariableMass.Q_start[2] PARAM */ = 0.0;
  data->modelData->realParameterData[54].time_unvarying = 1;
  data->simulationInfo->realParameter[55] /* actuators.bodyVariableMass.Q_start[3] PARAM */ = 0.0;
  data->modelData->realParameterData[55].time_unvarying = 1;
  data->simulationInfo->realParameter[56] /* actuators.bodyVariableMass.Q_start[4] PARAM */ = 1.0;
  data->modelData->realParameterData[56].time_unvarying = 1;
  data->simulationInfo->realParameter[57] /* actuators.bodyVariableMass.R_start.T[1,1] PARAM */ = 1.0;
  data->modelData->realParameterData[57].time_unvarying = 1;
  data->simulationInfo->realParameter[58] /* actuators.bodyVariableMass.R_start.T[1,2] PARAM */ = 0.0;
  data->modelData->realParameterData[58].time_unvarying = 1;
  data->simulationInfo->realParameter[59] /* actuators.bodyVariableMass.R_start.T[1,3] PARAM */ = 0.0;
  data->modelData->realParameterData[59].time_unvarying = 1;
  data->simulationInfo->realParameter[60] /* actuators.bodyVariableMass.R_start.T[2,1] PARAM */ = 0.0;
  data->modelData->realParameterData[60].time_unvarying = 1;
  data->simulationInfo->realParameter[61] /* actuators.bodyVariableMass.R_start.T[2,2] PARAM */ = 1.0;
  data->modelData->realParameterData[61].time_unvarying = 1;
  data->simulationInfo->realParameter[62] /* actuators.bodyVariableMass.R_start.T[2,3] PARAM */ = 0.0;
  data->modelData->realParameterData[62].time_unvarying = 1;
  data->simulationInfo->realParameter[63] /* actuators.bodyVariableMass.R_start.T[3,1] PARAM */ = 0.0;
  data->modelData->realParameterData[63].time_unvarying = 1;
  data->simulationInfo->realParameter[64] /* actuators.bodyVariableMass.R_start.T[3,2] PARAM */ = 0.0;
  data->modelData->realParameterData[64].time_unvarying = 1;
  data->simulationInfo->realParameter[65] /* actuators.bodyVariableMass.R_start.T[3,3] PARAM */ = 1.0;
  data->modelData->realParameterData[65].time_unvarying = 1;
  data->simulationInfo->realParameter[66] /* actuators.bodyVariableMass.R_start.w[1] PARAM */ = 0.0;
  data->modelData->realParameterData[66].time_unvarying = 1;
  data->simulationInfo->realParameter[67] /* actuators.bodyVariableMass.R_start.w[2] PARAM */ = 0.0;
  data->modelData->realParameterData[67].time_unvarying = 1;
  data->simulationInfo->realParameter[68] /* actuators.bodyVariableMass.R_start.w[3] PARAM */ = 0.0;
  data->modelData->realParameterData[68].time_unvarying = 1;
  data->simulationInfo->realParameter[105] /* actuators.body_rolling.Q_start[1] PARAM */ = 0.0;
  data->modelData->realParameterData[105].time_unvarying = 1;
  data->simulationInfo->realParameter[106] /* actuators.body_rolling.Q_start[2] PARAM */ = 0.0;
  data->modelData->realParameterData[106].time_unvarying = 1;
  data->simulationInfo->realParameter[107] /* actuators.body_rolling.Q_start[3] PARAM */ = 0.0;
  data->modelData->realParameterData[107].time_unvarying = 1;
  data->simulationInfo->realParameter[108] /* actuators.body_rolling.Q_start[4] PARAM */ = 1.0;
  data->modelData->realParameterData[108].time_unvarying = 1;
  data->simulationInfo->realParameter[109] /* actuators.body_rolling.R_start.T[1,1] PARAM */ = 1.0;
  data->modelData->realParameterData[109].time_unvarying = 1;
  data->simulationInfo->realParameter[110] /* actuators.body_rolling.R_start.T[1,2] PARAM */ = 0.0;
  data->modelData->realParameterData[110].time_unvarying = 1;
  data->simulationInfo->realParameter[111] /* actuators.body_rolling.R_start.T[1,3] PARAM */ = 0.0;
  data->modelData->realParameterData[111].time_unvarying = 1;
  data->simulationInfo->realParameter[112] /* actuators.body_rolling.R_start.T[2,1] PARAM */ = 0.0;
  data->modelData->realParameterData[112].time_unvarying = 1;
  data->simulationInfo->realParameter[113] /* actuators.body_rolling.R_start.T[2,2] PARAM */ = 1.0;
  data->modelData->realParameterData[113].time_unvarying = 1;
  data->simulationInfo->realParameter[114] /* actuators.body_rolling.R_start.T[2,3] PARAM */ = 0.0;
  data->modelData->realParameterData[114].time_unvarying = 1;
  data->simulationInfo->realParameter[115] /* actuators.body_rolling.R_start.T[3,1] PARAM */ = 0.0;
  data->modelData->realParameterData[115].time_unvarying = 1;
  data->simulationInfo->realParameter[116] /* actuators.body_rolling.R_start.T[3,2] PARAM */ = 0.0;
  data->modelData->realParameterData[116].time_unvarying = 1;
  data->simulationInfo->realParameter[117] /* actuators.body_rolling.R_start.T[3,3] PARAM */ = 1.0;
  data->modelData->realParameterData[117].time_unvarying = 1;
  data->simulationInfo->realParameter[118] /* actuators.body_rolling.R_start.w[1] PARAM */ = 0.0;
  data->modelData->realParameterData[118].time_unvarying = 1;
  data->simulationInfo->realParameter[119] /* actuators.body_rolling.R_start.w[2] PARAM */ = 0.0;
  data->modelData->realParameterData[119].time_unvarying = 1;
  data->simulationInfo->realParameter[120] /* actuators.body_rolling.R_start.w[3] PARAM */ = 0.0;
  data->modelData->realParameterData[120].time_unvarying = 1;
  data->simulationInfo->realParameter[161] /* actuators.fixedTranslation_hinge.height PARAM */ = 0.0;
  data->modelData->realParameterData[161].time_unvarying = 1;
  data->simulationInfo->realParameter[162] /* actuators.fixedTranslation_hinge.length PARAM */ = 0.0;
  data->modelData->realParameterData[162].time_unvarying = 1;
  data->simulationInfo->realParameter[163] /* actuators.fixedTranslation_hinge.lengthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[163].time_unvarying = 1;
  data->simulationInfo->realParameter[164] /* actuators.fixedTranslation_hinge.lengthDirection[2] PARAM */ = 0.0;
  data->modelData->realParameterData[164].time_unvarying = 1;
  data->simulationInfo->realParameter[165] /* actuators.fixedTranslation_hinge.lengthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[165].time_unvarying = 1;
  data->simulationInfo->realParameter[166] /* actuators.fixedTranslation_hinge.r[1] PARAM */ = 0.0;
  data->modelData->realParameterData[166].time_unvarying = 1;
  data->simulationInfo->realParameter[167] /* actuators.fixedTranslation_hinge.r[2] PARAM */ = 0.0;
  data->modelData->realParameterData[167].time_unvarying = 1;
  data->simulationInfo->realParameter[168] /* actuators.fixedTranslation_hinge.r[3] PARAM */ = 0.0;
  data->modelData->realParameterData[168].time_unvarying = 1;
  data->simulationInfo->realParameter[169] /* actuators.fixedTranslation_hinge.r_shape[1] PARAM */ = 0.0;
  data->modelData->realParameterData[169].time_unvarying = 1;
  data->simulationInfo->realParameter[170] /* actuators.fixedTranslation_hinge.r_shape[2] PARAM */ = 0.0;
  data->modelData->realParameterData[170].time_unvarying = 1;
  data->simulationInfo->realParameter[171] /* actuators.fixedTranslation_hinge.r_shape[3] PARAM */ = 0.0;
  data->modelData->realParameterData[171].time_unvarying = 1;
  data->simulationInfo->realParameter[175] /* actuators.fixedTranslation_hinge.width PARAM */ = 0.0;
  data->modelData->realParameterData[175].time_unvarying = 1;
  data->simulationInfo->realParameter[176] /* actuators.fixedTranslation_hinge.widthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[176].time_unvarying = 1;
  data->simulationInfo->realParameter[177] /* actuators.fixedTranslation_hinge.widthDirection[2] PARAM */ = 1.0;
  data->modelData->realParameterData[177].time_unvarying = 1;
  data->simulationInfo->realParameter[178] /* actuators.fixedTranslation_hinge.widthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[178].time_unvarying = 1;
  data->simulationInfo->realParameter[181] /* actuators.fixedTranslation_pendulumArm.length PARAM */ = 0.014;
  data->modelData->realParameterData[181].time_unvarying = 1;
  data->simulationInfo->realParameter[182] /* actuators.fixedTranslation_pendulumArm.lengthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[182].time_unvarying = 1;
  data->simulationInfo->realParameter[183] /* actuators.fixedTranslation_pendulumArm.lengthDirection[2] PARAM */ = 0.0;
  data->modelData->realParameterData[183].time_unvarying = 1;
  data->simulationInfo->realParameter[184] /* actuators.fixedTranslation_pendulumArm.lengthDirection[3] PARAM */ = 0.014;
  data->modelData->realParameterData[184].time_unvarying = 1;
  data->simulationInfo->realParameter[185] /* actuators.fixedTranslation_pendulumArm.r[1] PARAM */ = 0.0;
  data->modelData->realParameterData[185].time_unvarying = 1;
  data->simulationInfo->realParameter[186] /* actuators.fixedTranslation_pendulumArm.r[2] PARAM */ = 0.0;
  data->modelData->realParameterData[186].time_unvarying = 1;
  data->simulationInfo->realParameter[187] /* actuators.fixedTranslation_pendulumArm.r[3] PARAM */ = 0.014;
  data->modelData->realParameterData[187].time_unvarying = 1;
  data->simulationInfo->realParameter[188] /* actuators.fixedTranslation_pendulumArm.r_shape[1] PARAM */ = 0.0;
  data->modelData->realParameterData[188].time_unvarying = 1;
  data->simulationInfo->realParameter[189] /* actuators.fixedTranslation_pendulumArm.r_shape[2] PARAM */ = 0.0;
  data->modelData->realParameterData[189].time_unvarying = 1;
  data->simulationInfo->realParameter[190] /* actuators.fixedTranslation_pendulumArm.r_shape[3] PARAM */ = 0.0;
  data->modelData->realParameterData[190].time_unvarying = 1;
  data->simulationInfo->realParameter[197] /* actuators.fixedTranslation_pendulumArm.widthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[197].time_unvarying = 1;
  data->simulationInfo->realParameter[198] /* actuators.fixedTranslation_pendulumArm.widthDirection[2] PARAM */ = 1.0;
  data->modelData->realParameterData[198].time_unvarying = 1;
  data->simulationInfo->realParameter[199] /* actuators.fixedTranslation_pendulumArm.widthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[199].time_unvarying = 1;
  data->simulationInfo->realParameter[216] /* actuators.prismatic.boxWidthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[216].time_unvarying = 1;
  data->simulationInfo->realParameter[217] /* actuators.prismatic.boxWidthDirection[2] PARAM */ = 1.0;
  data->modelData->realParameterData[217].time_unvarying = 1;
  data->simulationInfo->realParameter[218] /* actuators.prismatic.boxWidthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[218].time_unvarying = 1;
  data->simulationInfo->realParameter[219] /* actuators.prismatic.e[1] PARAM */ = 1.0;
  data->modelData->realParameterData[219].time_unvarying = 1;
  data->simulationInfo->realParameter[220] /* actuators.prismatic.e[2] PARAM */ = 0.0;
  data->modelData->realParameterData[220].time_unvarying = 1;
  data->simulationInfo->realParameter[221] /* actuators.prismatic.e[3] PARAM */ = 0.0;
  data->modelData->realParameterData[221].time_unvarying = 1;
  data->simulationInfo->realParameter[223] /* actuators.prismatic.fixed.s0 PARAM */ = 0.0;
  data->modelData->realParameterData[223].time_unvarying = 1;
  data->simulationInfo->realParameter[224] /* actuators.prismatic.n[1] PARAM */ = 1.0;
  data->modelData->realParameterData[224].time_unvarying = 1;
  data->simulationInfo->realParameter[225] /* actuators.prismatic.n[2] PARAM */ = 0.0;
  data->modelData->realParameterData[225].time_unvarying = 1;
  data->simulationInfo->realParameter[226] /* actuators.prismatic.n[3] PARAM */ = 0.0;
  data->modelData->realParameterData[226].time_unvarying = 1;
  data->simulationInfo->realParameter[229] /* actuators.r_b[1] PARAM */ = 0.0;
  data->modelData->realParameterData[229].time_unvarying = 1;
  data->simulationInfo->realParameter[230] /* actuators.r_b[2] PARAM */ = 0.0;
  data->modelData->realParameterData[230].time_unvarying = 1;
  data->simulationInfo->realParameter[231] /* actuators.r_b[3] PARAM */ = 0.0;
  data->modelData->realParameterData[231].time_unvarying = 1;
  data->simulationInfo->realParameter[232] /* actuators.r_p[1] PARAM */ = 0.0;
  data->modelData->realParameterData[232].time_unvarying = 1;
  data->simulationInfo->realParameter[233] /* actuators.r_p[2] PARAM */ = 0.0;
  data->modelData->realParameterData[233].time_unvarying = 1;
  data->simulationInfo->realParameter[234] /* actuators.r_p[3] PARAM */ = 0.0;
  data->modelData->realParameterData[234].time_unvarying = 1;
  data->simulationInfo->realParameter[235] /* actuators.r_r[1] PARAM */ = 0.0;
  data->modelData->realParameterData[235].time_unvarying = 1;
  data->simulationInfo->realParameter[236] /* actuators.r_r[2] PARAM */ = 0.0;
  data->modelData->realParameterData[236].time_unvarying = 1;
  data->simulationInfo->realParameter[237] /* actuators.r_r[3] PARAM */ = 0.014;
  data->modelData->realParameterData[237].time_unvarying = 1;
  data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */ = 1.0;
  data->modelData->realParameterData[247].time_unvarying = 1;
  data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */ = 0.0;
  data->modelData->realParameterData[248].time_unvarying = 1;
  data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */ = 0.0;
  data->modelData->realParameterData[249].time_unvarying = 1;
  data->simulationInfo->realParameter[251] /* actuators.revolute.fixed.phi0 PARAM */ = 0.0;
  data->modelData->realParameterData[251].time_unvarying = 1;
  data->simulationInfo->realParameter[252] /* actuators.revolute.n[1] PARAM */ = 1.0;
  data->modelData->realParameterData[252].time_unvarying = 1;
  data->simulationInfo->realParameter[253] /* actuators.revolute.n[2] PARAM */ = 0.0;
  data->modelData->realParameterData[253].time_unvarying = 1;
  data->simulationInfo->realParameter[254] /* actuators.revolute.n[3] PARAM */ = 0.0;
  data->modelData->realParameterData[254].time_unvarying = 1;
  data->simulationInfo->realParameter[262] /* actuators.static_translation_VBD.height PARAM */ = 0.0;
  data->modelData->realParameterData[262].time_unvarying = 1;
  data->simulationInfo->realParameter[263] /* actuators.static_translation_VBD.length PARAM */ = 0.0;
  data->modelData->realParameterData[263].time_unvarying = 1;
  data->simulationInfo->realParameter[264] /* actuators.static_translation_VBD.lengthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[264].time_unvarying = 1;
  data->simulationInfo->realParameter[265] /* actuators.static_translation_VBD.lengthDirection[2] PARAM */ = 0.0;
  data->modelData->realParameterData[265].time_unvarying = 1;
  data->simulationInfo->realParameter[266] /* actuators.static_translation_VBD.lengthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[266].time_unvarying = 1;
  data->simulationInfo->realParameter[267] /* actuators.static_translation_VBD.r[1] PARAM */ = 0.0;
  data->modelData->realParameterData[267].time_unvarying = 1;
  data->simulationInfo->realParameter[268] /* actuators.static_translation_VBD.r[2] PARAM */ = 0.0;
  data->modelData->realParameterData[268].time_unvarying = 1;
  data->simulationInfo->realParameter[269] /* actuators.static_translation_VBD.r[3] PARAM */ = 0.0;
  data->modelData->realParameterData[269].time_unvarying = 1;
  data->simulationInfo->realParameter[270] /* actuators.static_translation_VBD.r_shape[1] PARAM */ = 0.0;
  data->modelData->realParameterData[270].time_unvarying = 1;
  data->simulationInfo->realParameter[271] /* actuators.static_translation_VBD.r_shape[2] PARAM */ = 0.0;
  data->modelData->realParameterData[271].time_unvarying = 1;
  data->simulationInfo->realParameter[272] /* actuators.static_translation_VBD.r_shape[3] PARAM */ = 0.0;
  data->modelData->realParameterData[272].time_unvarying = 1;
  data->simulationInfo->realParameter[276] /* actuators.static_translation_VBD.width PARAM */ = 0.0;
  data->modelData->realParameterData[276].time_unvarying = 1;
  data->simulationInfo->realParameter[277] /* actuators.static_translation_VBD.widthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[277].time_unvarying = 1;
  data->simulationInfo->realParameter[278] /* actuators.static_translation_VBD.widthDirection[2] PARAM */ = 1.0;
  data->modelData->realParameterData[278].time_unvarying = 1;
  data->simulationInfo->realParameter[279] /* actuators.static_translation_VBD.widthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[279].time_unvarying = 1;
  data->simulationInfo->realParameter[323] /* addedMassForcesTorques.absoluteSensor.guessAngle1 PARAM */ = 0.0;
  data->modelData->realParameterData[323].time_unvarying = 1;
  data->simulationInfo->realParameter[387] /* hull.Q_start[1] PARAM */ = 0.000499999978541667;
  data->modelData->realParameterData[387].time_unvarying = 1;
  data->simulationInfo->realParameter[388] /* hull.Q_start[2] PARAM */ = -2.499999894791668e-08;
  data->modelData->realParameterData[388].time_unvarying = 1;
  data->simulationInfo->realParameter[389] /* hull.Q_start[3] PARAM */ = 4.99999937291668e-05;
  data->modelData->realParameterData[389].time_unvarying = 1;
  data->simulationInfo->realParameter[390] /* hull.Q_start[4] PARAM */ = 0.9999998737500028;
  data->modelData->realParameterData[390].time_unvarying = 1;
  data->simulationInfo->realParameter[391] /* hull.R_start.T[1,1] PARAM */ = 0.999999995;
  data->modelData->realParameterData[391].time_unvarying = 1;
  data->simulationInfo->realParameter[392] /* hull.R_start.T[1,2] PARAM */ = 9.99999498333376e-05;
  data->modelData->realParameterData[392].time_unvarying = 1;
  data->simulationInfo->realParameter[393] /* hull.R_start.T[1,3] PARAM */ = 9.999998316666754e-08;
  data->modelData->realParameterData[393].time_unvarying = 1;
  data->simulationInfo->realParameter[394] /* hull.R_start.T[2,1] PARAM */ = -9.999999983333334e-05;
  data->modelData->realParameterData[394].time_unvarying = 1;
  data->simulationInfo->realParameter[395] /* hull.R_start.T[2,2] PARAM */ = 0.9999994950000443;
  data->modelData->realParameterData[395].time_unvarying = 1;
  data->simulationInfo->realParameter[396] /* hull.R_start.T[2,3] PARAM */ = 0.0009999998283333426;
  data->modelData->realParameterData[396].time_unvarying = 1;
  data->simulationInfo->realParameter[397] /* hull.R_start.T[3,1] PARAM */ = 0.0;
  data->modelData->realParameterData[397].time_unvarying = 1;
  data->simulationInfo->realParameter[398] /* hull.R_start.T[3,2] PARAM */ = -0.0009999998333333417;
  data->modelData->realParameterData[398].time_unvarying = 1;
  data->simulationInfo->realParameter[399] /* hull.R_start.T[3,3] PARAM */ = 0.9999995000000417;
  data->modelData->realParameterData[399].time_unvarying = 1;
  data->simulationInfo->realParameter[400] /* hull.R_start.w[1] PARAM */ = 0.0;
  data->modelData->realParameterData[400].time_unvarying = 1;
  data->simulationInfo->realParameter[401] /* hull.R_start.w[2] PARAM */ = 0.0;
  data->modelData->realParameterData[401].time_unvarying = 1;
  data->simulationInfo->realParameter[402] /* hull.R_start.w[3] PARAM */ = 0.0;
  data->modelData->realParameterData[402].time_unvarying = 1;
  data->simulationInfo->realParameter[472] /* r_b[1] PARAM */ = 0.0;
  data->modelData->realParameterData[472].time_unvarying = 1;
  data->simulationInfo->realParameter[473] /* r_b[2] PARAM */ = 0.0;
  data->modelData->realParameterData[473].time_unvarying = 1;
  data->simulationInfo->realParameter[474] /* r_b[3] PARAM */ = 0.0;
  data->modelData->realParameterData[474].time_unvarying = 1;
  data->simulationInfo->realParameter[475] /* r_p[1] PARAM */ = 0.0;
  data->modelData->realParameterData[475].time_unvarying = 1;
  data->simulationInfo->realParameter[476] /* r_p[2] PARAM */ = 0.0;
  data->modelData->realParameterData[476].time_unvarying = 1;
  data->simulationInfo->realParameter[477] /* r_p[3] PARAM */ = 0.0;
  data->modelData->realParameterData[477].time_unvarying = 1;
  data->simulationInfo->realParameter[478] /* r_r[1] PARAM */ = 0.0;
  data->modelData->realParameterData[478].time_unvarying = 1;
  data->simulationInfo->realParameter[479] /* r_r[2] PARAM */ = 0.0;
  data->modelData->realParameterData[479].time_unvarying = 1;
  data->simulationInfo->realParameter[480] /* r_r[3] PARAM */ = 0.014;
  data->modelData->realParameterData[480].time_unvarying = 1;
  data->simulationInfo->realParameter[525] /* world.groundAxis_u[1] PARAM */ = 1.0;
  data->modelData->realParameterData[525].time_unvarying = 1;
  data->simulationInfo->realParameter[526] /* world.groundAxis_u[2] PARAM */ = 0.0;
  data->modelData->realParameterData[526].time_unvarying = 1;
  data->simulationInfo->realParameter[536] /* world.n[1] PARAM */ = 0.0;
  data->modelData->realParameterData[536].time_unvarying = 1;
  data->simulationInfo->realParameter[537] /* world.n[2] PARAM */ = 0.0;
  data->modelData->realParameterData[537].time_unvarying = 1;
  data->simulationInfo->realParameter[538] /* world.n[3] PARAM */ = 1.0;
  data->modelData->realParameterData[538].time_unvarying = 1;
  data->simulationInfo->booleanParameter[0] /* actuators.bodyVariableMass.angles_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  data->simulationInfo->booleanParameter[1] /* actuators.bodyVariableMass.animation PARAM */ = 0;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  data->simulationInfo->booleanParameter[2] /* actuators.bodyVariableMass.enforceStates PARAM */ = 0;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  data->simulationInfo->booleanParameter[3] /* actuators.bodyVariableMass.useQuaternions PARAM */ = 1;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  data->simulationInfo->booleanParameter[4] /* actuators.bodyVariableMass.w_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  data->simulationInfo->booleanParameter[5] /* actuators.bodyVariableMass.z_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  data->simulationInfo->booleanParameter[6] /* actuators.body_rolling.angles_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  data->simulationInfo->booleanParameter[7] /* actuators.body_rolling.animation PARAM */ = 0;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  data->simulationInfo->booleanParameter[8] /* actuators.body_rolling.enforceStates PARAM */ = 0;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  data->simulationInfo->booleanParameter[9] /* actuators.body_rolling.useQuaternions PARAM */ = 1;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  data->simulationInfo->booleanParameter[10] /* actuators.body_rolling.w_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  data->simulationInfo->booleanParameter[11] /* actuators.body_rolling.z_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  data->simulationInfo->booleanParameter[18] /* actuators.limiter.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[18].time_unvarying = 1;
  data->simulationInfo->booleanParameter[19] /* actuators.limiter.strict PARAM */ = 0;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  data->simulationInfo->booleanParameter[20] /* actuators.limiter1.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[20].time_unvarying = 1;
  data->simulationInfo->booleanParameter[21] /* actuators.limiter1.strict PARAM */ = 0;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  data->simulationInfo->booleanParameter[22] /* actuators.limiter2.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[22].time_unvarying = 1;
  data->simulationInfo->booleanParameter[23] /* actuators.limiter2.strict PARAM */ = 0;
  data->modelData->booleanParameterData[23].time_unvarying = 1;
  data->simulationInfo->booleanParameter[24] /* actuators.position.exact PARAM */ = 0;
  data->modelData->booleanParameterData[24].time_unvarying = 1;
  data->simulationInfo->booleanParameter[25] /* actuators.position.useSupport PARAM */ = 0;
  data->modelData->booleanParameterData[25].time_unvarying = 1;
  data->simulationInfo->booleanParameter[26] /* actuators.position_slidingMass.exact PARAM */ = 0;
  data->modelData->booleanParameterData[26].time_unvarying = 1;
  data->simulationInfo->booleanParameter[27] /* actuators.position_slidingMass.useSupport PARAM */ = 0;
  data->modelData->booleanParameterData[27].time_unvarying = 1;
  data->simulationInfo->booleanParameter[29] /* actuators.prismatic.useAxisFlange PARAM */ = 1;
  data->modelData->booleanParameterData[29].time_unvarying = 1;
  data->simulationInfo->booleanParameter[31] /* actuators.revolute.useAxisFlange PARAM */ = 1;
  data->modelData->booleanParameterData[31].time_unvarying = 1;
  data->simulationInfo->booleanParameter[36] /* addedMassForcesTorques.absoluteSensor.get_a PARAM */ = 1;
  data->modelData->booleanParameterData[36].time_unvarying = 1;
  data->simulationInfo->booleanParameter[37] /* addedMassForcesTorques.absoluteSensor.get_angles PARAM */ = 0;
  data->modelData->booleanParameterData[37].time_unvarying = 1;
  data->simulationInfo->booleanParameter[38] /* addedMassForcesTorques.absoluteSensor.get_r PARAM */ = 0;
  data->modelData->booleanParameterData[38].time_unvarying = 1;
  data->simulationInfo->booleanParameter[39] /* addedMassForcesTorques.absoluteSensor.get_v PARAM */ = 1;
  data->modelData->booleanParameterData[39].time_unvarying = 1;
  data->simulationInfo->booleanParameter[40] /* addedMassForcesTorques.absoluteSensor.get_w PARAM */ = 1;
  data->modelData->booleanParameterData[40].time_unvarying = 1;
  data->simulationInfo->booleanParameter[41] /* addedMassForcesTorques.absoluteSensor.get_z PARAM */ = 1;
  data->modelData->booleanParameterData[41].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] /* hull.angles_fixed PARAM */ = 1;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] /* hull.animation PARAM */ = 0;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] /* hull.enforceStates PARAM */ = 0;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->booleanParameter[48] /* hull.useQuaternions PARAM */ = 1;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  data->simulationInfo->booleanParameter[49] /* hull.w_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  data->simulationInfo->booleanParameter[50] /* hull.z_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[50].time_unvarying = 1;
  data->simulationInfo->booleanParameter[54] /* world.animateGravity PARAM */ = 1;
  data->modelData->booleanParameterData[54].time_unvarying = 1;
  data->simulationInfo->booleanParameter[55] /* world.animateGround PARAM */ = 0;
  data->modelData->booleanParameterData[55].time_unvarying = 1;
  data->simulationInfo->booleanParameter[59] /* world.enableAnimation PARAM */ = 1;
  data->modelData->booleanParameterData[59].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* absolutePosition.position.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* absolutePosition.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[20] /* actuators.limiter.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[20].time_unvarying = 1;
  data->simulationInfo->integerParameter[21] /* actuators.limiter1.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[21].time_unvarying = 1;
  data->simulationInfo->integerParameter[22] /* actuators.limiter2.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[22].time_unvarying = 1;
  data->simulationInfo->integerParameter[25] /* addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.angularVelocity.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[25].time_unvarying = 1;
  data->simulationInfo->integerParameter[26] /* addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[26].time_unvarying = 1;
  data->simulationInfo->integerParameter[27] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.position.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[27].time_unvarying = 1;
  data->simulationInfo->integerParameter[28] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[28].time_unvarying = 1;
  data->simulationInfo->integerParameter[29] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.basicTransformVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[29].time_unvarying = 1;
  data->simulationInfo->integerParameter[30] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.basicTransformVector.frame_r_out PARAM */ = 1;
  data->modelData->integerParameterData[30].time_unvarying = 1;
  data->simulationInfo->integerParameter[31] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[31].time_unvarying = 1;
  data->simulationInfo->integerParameter[32] /* addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.frame_r_out PARAM */ = 1;
  data->modelData->integerParameterData[32].time_unvarying = 1;
  data->simulationInfo->integerParameter[33] /* addedMassForcesTorques.absoluteSensor.angularVelocity.angularVelocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[33].time_unvarying = 1;
  data->simulationInfo->integerParameter[34] /* addedMassForcesTorques.absoluteSensor.angularVelocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[34].time_unvarying = 1;
  data->simulationInfo->integerParameter[35] /* addedMassForcesTorques.absoluteSensor.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[35].time_unvarying = 1;
  data->simulationInfo->integerParameter[39] /* addedMassForcesTorques.absoluteSensor.transformVector_a.basicTransformVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[39].time_unvarying = 1;
  data->simulationInfo->integerParameter[40] /* addedMassForcesTorques.absoluteSensor.transformVector_a.basicTransformVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[40].time_unvarying = 1;
  data->simulationInfo->integerParameter[41] /* addedMassForcesTorques.absoluteSensor.transformVector_a.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[41].time_unvarying = 1;
  data->simulationInfo->integerParameter[42] /* addedMassForcesTorques.absoluteSensor.transformVector_a.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[42].time_unvarying = 1;
  data->simulationInfo->integerParameter[43] /* addedMassForcesTorques.absoluteSensor.transformVector_z.basicTransformVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[43].time_unvarying = 1;
  data->simulationInfo->integerParameter[44] /* addedMassForcesTorques.absoluteSensor.transformVector_z.basicTransformVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[44].time_unvarying = 1;
  data->simulationInfo->integerParameter[45] /* addedMassForcesTorques.absoluteSensor.transformVector_z.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[45].time_unvarying = 1;
  data->simulationInfo->integerParameter[46] /* addedMassForcesTorques.absoluteSensor.transformVector_z.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[46].time_unvarying = 1;
  data->simulationInfo->integerParameter[47] /* addedMassForcesTorques.absoluteSensor.velocity.position.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[47].time_unvarying = 1;
  data->simulationInfo->integerParameter[48] /* addedMassForcesTorques.absoluteSensor.velocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[48].time_unvarying = 1;
  data->simulationInfo->integerParameter[49] /* addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.basicTransformVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[49].time_unvarying = 1;
  data->simulationInfo->integerParameter[50] /* addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.basicTransformVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[50].time_unvarying = 1;
  data->simulationInfo->integerParameter[51] /* addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[51].time_unvarying = 1;
  data->simulationInfo->integerParameter[52] /* addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[52].time_unvarying = 1;
  data->simulationInfo->integerParameter[53] /* addedMassForcesTorques.force.basicWorldForce.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[53].time_unvarying = 1;
  data->simulationInfo->integerParameter[54] /* addedMassForcesTorques.force.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[54].time_unvarying = 1;
  data->simulationInfo->integerParameter[55] /* addedMassForcesTorques.torque.basicWorldTorque.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[55].time_unvarying = 1;
  data->simulationInfo->integerParameter[56] /* addedMassForcesTorques.torque.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[56].time_unvarying = 1;
  data->simulationInfo->integerParameter[57] /* buoyancyForce.force.basicWorldForce.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[57].time_unvarying = 1;
  data->simulationInfo->integerParameter[58] /* buoyancyForce.force.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[58].time_unvarying = 1;
  data->simulationInfo->integerParameter[65] /* hydrodynamicForcesTorques.absoluteAngularVelocity.angularVelocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[65].time_unvarying = 1;
  data->simulationInfo->integerParameter[66] /* hydrodynamicForcesTorques.absoluteAngularVelocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[66].time_unvarying = 1;
  data->simulationInfo->integerParameter[67] /* hydrodynamicForcesTorques.absoluteVelocity.position.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[67].time_unvarying = 1;
  data->simulationInfo->integerParameter[68] /* hydrodynamicForcesTorques.absoluteVelocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[68].time_unvarying = 1;
  data->simulationInfo->integerParameter[69] /* hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.basicTransformVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[69].time_unvarying = 1;
  data->simulationInfo->integerParameter[70] /* hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.basicTransformVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[70].time_unvarying = 1;
  data->simulationInfo->integerParameter[71] /* hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[71].time_unvarying = 1;
  data->simulationInfo->integerParameter[72] /* hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[72].time_unvarying = 1;
  data->simulationInfo->integerParameter[73] /* hydrodynamicForcesTorques.force.basicWorldForce.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[73].time_unvarying = 1;
  data->simulationInfo->integerParameter[74] /* hydrodynamicForcesTorques.force.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[74].time_unvarying = 1;
  data->simulationInfo->integerParameter[75] /* hydrodynamicForcesTorques.torque.basicWorldTorque.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[75].time_unvarying = 1;
  data->simulationInfo->integerParameter[76] /* hydrodynamicForcesTorques.torque.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[76].time_unvarying = 1;
  data->simulationInfo->integerParameter[77] /* world.gravityType PARAM */ = 2;
  data->modelData->integerParameterData[77].time_unvarying = 1;
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_updateBoundParameters_0(data, threadData);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_updateBoundParameters_1(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

