/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TestGlider_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 5054
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u = genericGlider_mass_explicit.r_0[3]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5054};
  data->modelData->realVarsData[15].attribute /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */.start = data->simulationInfo->realParameter[486] /* genericGlider_mass_explicit.r_0[3] PARAM */;
    data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */ = data->modelData->realVarsData[15].attribute /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[15].info /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u */.name, (modelica_real) data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */);
  TRACE_POP
}

/*
equation index: 5055
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u = genericGlider_mass_explicit.r_0[2]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5055};
  data->modelData->realVarsData[14].attribute /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */.start = data->simulationInfo->realParameter[485] /* genericGlider_mass_explicit.r_0[2] PARAM */;
    data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */ = data->modelData->realVarsData[14].attribute /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[14].info /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u */.name, (modelica_real) data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */);
  TRACE_POP
}

/*
equation index: 5056
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u = genericGlider_mass_explicit.r_0[1]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5056};
  data->modelData->realVarsData[13].attribute /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */.start = data->simulationInfo->realParameter[484] /* genericGlider_mass_explicit.r_0[1] PARAM */;
    data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */ = data->modelData->realVarsData[13].attribute /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[13].info /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u */.name, (modelica_real) data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */);
  TRACE_POP
}

/*
equation index: 5057
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u = genericGlider_mass_explicit.v_0[3]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5057};
  data->modelData->realVarsData[9].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */.start = data->simulationInfo->realParameter[503] /* genericGlider_mass_explicit.v_0[3] PARAM */;
    data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */ = data->modelData->realVarsData[9].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u */.name, (modelica_real) data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */);
  TRACE_POP
}

/*
equation index: 5058
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u = genericGlider_mass_explicit.v_0[2]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5058};
  data->modelData->realVarsData[8].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */.start = data->simulationInfo->realParameter[502] /* genericGlider_mass_explicit.v_0[2] PARAM */;
    data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */ = data->modelData->realVarsData[8].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u */.name, (modelica_real) data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */);
  TRACE_POP
}

/*
equation index: 5059
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u = genericGlider_mass_explicit.v_0[1]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5059};
  data->modelData->realVarsData[7].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */.start = data->simulationInfo->realParameter[501] /* genericGlider_mass_explicit.v_0[1] PARAM */;
    data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */ = data->modelData->realVarsData[7].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u */.name, (modelica_real) data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */);
  TRACE_POP
}

/*
equation index: 5060
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.hull.z_a[3] = (-0.0009999998333333417) * genericGlider_mass_explicit.hull.z_0_start[2] + 0.9999995000000417 * genericGlider_mass_explicit.hull.z_0_start[3]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5060};
  data->modelData->realVarsData[1365].attribute /* genericGlider_mass_explicit.hull.z_a[3] variable */.start = (-0.0009999998333333417) * (data->simulationInfo->realParameter[437] /* genericGlider_mass_explicit.hull.z_0_start[2] PARAM */) + (0.9999995000000417) * (data->simulationInfo->realParameter[438] /* genericGlider_mass_explicit.hull.z_0_start[3] PARAM */);
    data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */ = data->modelData->realVarsData[1365].attribute /* genericGlider_mass_explicit.hull.z_a[3] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1365].info /* genericGlider_mass_explicit.hull.z_a[3] */.name, (modelica_real) data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */);
  TRACE_POP
}

/*
equation index: 5061
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.hull.z_a[2] = (-9.999999983333334e-05) * genericGlider_mass_explicit.hull.z_0_start[1] + 0.9999994950000443 * genericGlider_mass_explicit.hull.z_0_start[2] + 0.0009999998283333426 * genericGlider_mass_explicit.hull.z_0_start[3]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5061};
  data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] variable */.start = (-9.999999983333334e-05) * (data->simulationInfo->realParameter[436] /* genericGlider_mass_explicit.hull.z_0_start[1] PARAM */) + (0.9999994950000443) * (data->simulationInfo->realParameter[437] /* genericGlider_mass_explicit.hull.z_0_start[2] PARAM */) + (0.0009999998283333426) * (data->simulationInfo->realParameter[438] /* genericGlider_mass_explicit.hull.z_0_start[3] PARAM */);
    data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */ = data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1364].info /* genericGlider_mass_explicit.hull.z_a[2] */.name, (modelica_real) data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */);
  TRACE_POP
}

/*
equation index: 5062
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.hull.z_a[1] = 0.999999995 * genericGlider_mass_explicit.hull.z_0_start[1] + 9.99999498333376e-05 * genericGlider_mass_explicit.hull.z_0_start[2] + 9.999998316666754e-08 * genericGlider_mass_explicit.hull.z_0_start[3]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5062};
  data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] variable */.start = (0.999999995) * (data->simulationInfo->realParameter[436] /* genericGlider_mass_explicit.hull.z_0_start[1] PARAM */) + (9.99999498333376e-05) * (data->simulationInfo->realParameter[437] /* genericGlider_mass_explicit.hull.z_0_start[2] PARAM */) + (9.999998316666754e-08) * (data->simulationInfo->realParameter[438] /* genericGlider_mass_explicit.hull.z_0_start[3] PARAM */);
    data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */ = data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1363].info /* genericGlider_mass_explicit.hull.z_a[1] */.name, (modelica_real) data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */);
  TRACE_POP
}

/*
equation index: 5063
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.hull.w_a[3] = (-0.0009999998333333417) * genericGlider_mass_explicit.hull.w_0_start[2] + 0.9999995000000417 * genericGlider_mass_explicit.hull.w_0_start[3]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5063};
  data->modelData->realVarsData[12].attribute /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */.start = (-0.0009999998333333417) * (data->simulationInfo->realParameter[434] /* genericGlider_mass_explicit.hull.w_0_start[2] PARAM */) + (0.9999995000000417) * (data->simulationInfo->realParameter[435] /* genericGlider_mass_explicit.hull.w_0_start[3] PARAM */);
    data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */ = data->modelData->realVarsData[12].attribute /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[12].info /* genericGlider_mass_explicit.hull.w_a[3] */.name, (modelica_real) data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */);
  TRACE_POP
}

/*
equation index: 5064
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.hull.w_a[2] = (-9.999999983333334e-05) * genericGlider_mass_explicit.hull.w_0_start[1] + 0.9999994950000443 * genericGlider_mass_explicit.hull.w_0_start[2] + 0.0009999998283333426 * genericGlider_mass_explicit.hull.w_0_start[3]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5064};
  data->modelData->realVarsData[11].attribute /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */.start = (-9.999999983333334e-05) * (data->simulationInfo->realParameter[433] /* genericGlider_mass_explicit.hull.w_0_start[1] PARAM */) + (0.9999994950000443) * (data->simulationInfo->realParameter[434] /* genericGlider_mass_explicit.hull.w_0_start[2] PARAM */) + (0.0009999998283333426) * (data->simulationInfo->realParameter[435] /* genericGlider_mass_explicit.hull.w_0_start[3] PARAM */);
    data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */ = data->modelData->realVarsData[11].attribute /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* genericGlider_mass_explicit.hull.w_a[2] */.name, (modelica_real) data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */);
  TRACE_POP
}

/*
equation index: 5065
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.hull.w_a[1] = 0.999999995 * genericGlider_mass_explicit.hull.w_0_start[1] + 9.99999498333376e-05 * genericGlider_mass_explicit.hull.w_0_start[2] + 9.999998316666754e-08 * genericGlider_mass_explicit.hull.w_0_start[3]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5065};
  data->modelData->realVarsData[10].attribute /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */.start = (0.999999995) * (data->simulationInfo->realParameter[433] /* genericGlider_mass_explicit.hull.w_0_start[1] PARAM */) + (9.99999498333376e-05) * (data->simulationInfo->realParameter[434] /* genericGlider_mass_explicit.hull.w_0_start[2] PARAM */) + (9.999998316666754e-08) * (data->simulationInfo->realParameter[435] /* genericGlider_mass_explicit.hull.w_0_start[3] PARAM */);
    data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */ = data->modelData->realVarsData[10].attribute /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* genericGlider_mass_explicit.hull.w_a[1] */.name, (modelica_real) data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */);
  TRACE_POP
}

/*
equation index: 5066
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.actuators.body_rolling.z_a[3] = genericGlider_mass_explicit.actuators.body_rolling.z_0_start[3]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5066};
  data->modelData->realVarsData[222].attribute /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */.start = data->simulationInfo->realParameter[158] /* genericGlider_mass_explicit.actuators.body_rolling.z_0_start[3] PARAM */;
    data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */ = data->modelData->realVarsData[222].attribute /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[222].info /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] */.name, (modelica_real) data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */);
  TRACE_POP
}

/*
equation index: 5067
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.actuators.body_rolling.z_a[2] = genericGlider_mass_explicit.actuators.body_rolling.z_0_start[2]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5067};
  data->modelData->realVarsData[221].attribute /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */.start = data->simulationInfo->realParameter[157] /* genericGlider_mass_explicit.actuators.body_rolling.z_0_start[2] PARAM */;
    data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */ = data->modelData->realVarsData[221].attribute /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[221].info /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] */.name, (modelica_real) data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */);
  TRACE_POP
}

/*
equation index: 5068
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.actuators.body_rolling.z_a[1] = genericGlider_mass_explicit.actuators.body_rolling.z_0_start[1]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5068};
  data->modelData->realVarsData[220].attribute /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */.start = data->simulationInfo->realParameter[156] /* genericGlider_mass_explicit.actuators.body_rolling.z_0_start[1] PARAM */;
    data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */ = data->modelData->realVarsData[220].attribute /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[220].info /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] */.name, (modelica_real) data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */);
  TRACE_POP
}

/*
equation index: 5069
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.actuators.body_rolling.w_a[3] = genericGlider_mass_explicit.actuators.body_rolling.w_0_start[3]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5069};
  data->modelData->realVarsData[219].attribute /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */.start = data->simulationInfo->realParameter[155] /* genericGlider_mass_explicit.actuators.body_rolling.w_0_start[3] PARAM */;
    data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */ = data->modelData->realVarsData[219].attribute /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[219].info /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] */.name, (modelica_real) data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5070
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.actuators.body_rolling.w_a[2] = genericGlider_mass_explicit.actuators.body_rolling.w_0_start[2]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5070};
  data->modelData->realVarsData[218].attribute /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */.start = data->simulationInfo->realParameter[154] /* genericGlider_mass_explicit.actuators.body_rolling.w_0_start[2] PARAM */;
    data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */ = data->modelData->realVarsData[218].attribute /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[218].info /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] */.name, (modelica_real) data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5071
type: SIMPLE_ASSIGN
$START.genericGlider_mass_explicit.actuators.body_rolling.w_a[1] = genericGlider_mass_explicit.actuators.body_rolling.w_0_start[1]
*/
OMC_DISABLE_OPT
static void TestGlider_eqFunction_5071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5071};
  data->modelData->realVarsData[217].attribute /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */.start = data->simulationInfo->realParameter[153] /* genericGlider_mass_explicit.actuators.body_rolling.w_0_start[1] PARAM */;
    data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */ = data->modelData->realVarsData[217].attribute /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[217].info /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] */.name, (modelica_real) data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */);
  TRACE_POP
}
OMC_DISABLE_OPT
int TestGlider_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  TestGlider_eqFunction_5054(data, threadData);

  TestGlider_eqFunction_5055(data, threadData);

  TestGlider_eqFunction_5056(data, threadData);

  TestGlider_eqFunction_5057(data, threadData);

  TestGlider_eqFunction_5058(data, threadData);

  TestGlider_eqFunction_5059(data, threadData);

  TestGlider_eqFunction_5060(data, threadData);

  TestGlider_eqFunction_5061(data, threadData);

  TestGlider_eqFunction_5062(data, threadData);

  TestGlider_eqFunction_5063(data, threadData);

  TestGlider_eqFunction_5064(data, threadData);

  TestGlider_eqFunction_5065(data, threadData);

  TestGlider_eqFunction_5066(data, threadData);

  TestGlider_eqFunction_5067(data, threadData);

  TestGlider_eqFunction_5068(data, threadData);

  TestGlider_eqFunction_5069(data, threadData);

  TestGlider_eqFunction_5070(data, threadData);

  TestGlider_eqFunction_5071(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void TestGlider_updateBoundParameters_0(DATA *data, threadData_t *threadData);
void TestGlider_updateBoundParameters_1(DATA *data, threadData_t *threadData);
OMC_DISABLE_OPT
int TestGlider_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->localData[0]->integerVars[12] /* genericGlider_mass_explicit.actuators.bodyVariableMass.sphereColor[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[12].time_unvarying = 1;
  data->localData[0]->integerVars[15] /* genericGlider_mass_explicit.actuators.body_rolling.sphereColor[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[15].time_unvarying = 1;
  data->localData[0]->integerVars[18] /* genericGlider_mass_explicit.actuators.fixedFrame.color_x[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[18].time_unvarying = 1;
  data->localData[0]->integerVars[19] /* genericGlider_mass_explicit.actuators.fixedFrame.color_x[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[19].time_unvarying = 1;
  data->localData[0]->integerVars[20] /* genericGlider_mass_explicit.actuators.fixedFrame.color_x[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[20].time_unvarying = 1;
  data->localData[0]->integerVars[28] /* genericGlider_mass_explicit.actuators.prismatic.boxColor[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[28].time_unvarying = 1;
  data->localData[0]->integerVars[29] /* genericGlider_mass_explicit.actuators.prismatic.boxColor[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[29].time_unvarying = 1;
  data->localData[0]->integerVars[31] /* genericGlider_mass_explicit.actuators.revolute.cylinderColor[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[31].time_unvarying = 1;
  data->localData[0]->integerVars[32] /* genericGlider_mass_explicit.actuators.revolute.cylinderColor[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[32].time_unvarying = 1;
  data->localData[0]->integerVars[33] /* genericGlider_mass_explicit.actuators.shape_green.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[33].time_unvarying = 1;
  data->localData[0]->integerVars[35] /* genericGlider_mass_explicit.actuators.shape_green.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[35].time_unvarying = 1;
  data->localData[0]->integerVars[37] /* genericGlider_mass_explicit.actuators.shape_red_ballast.color[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[37].time_unvarying = 1;
  data->localData[0]->integerVars[38] /* genericGlider_mass_explicit.actuators.shape_red_ballast.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[38].time_unvarying = 1;
  data->localData[0]->integerVars[44] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrowColor[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[44].time_unvarying = 1;
  data->localData[0]->integerVars[45] /* genericGlider_mass_explicit.addedMassForcesTorques.force.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[45].time_unvarying = 1;
  data->localData[0]->integerVars[47] /* genericGlider_mass_explicit.addedMassForcesTorques.force.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[47].time_unvarying = 1;
  data->localData[0]->integerVars[48] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[48].time_unvarying = 1;
  data->localData[0]->integerVars[50] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[50].time_unvarying = 1;
  data->localData[0]->integerVars[51] /* genericGlider_mass_explicit.buoyancyForce.force.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[51].time_unvarying = 1;
  data->localData[0]->integerVars[52] /* genericGlider_mass_explicit.buoyancyForce.force.color[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[52].time_unvarying = 1;
  data->localData[0]->integerVars[54] /* genericGlider_mass_explicit.hull.sphereColor[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[54].time_unvarying = 1;
  data->localData[0]->integerVars[57] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[57].time_unvarying = 1;
  data->localData[0]->integerVars[59] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[59].time_unvarying = 1;
  data->localData[0]->integerVars[60] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[60].time_unvarying = 1;
  data->localData[0]->integerVars[62] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.color[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[62].time_unvarying = 1;
  data->localData[0]->integerVars[63] /* genericGlider_mass_explicit.shape_hull.color[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[63].time_unvarying = 1;
  data->localData[0]->integerVars[64] /* genericGlider_mass_explicit.shape_hull.color[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[64].time_unvarying = 1;
  data->localData[0]->integerVars[66] /* genericGlider_mass_explicit.world.axisColor_x[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[66].time_unvarying = 1;
  data->localData[0]->integerVars[67] /* genericGlider_mass_explicit.world.axisColor_x[2] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[67].time_unvarying = 1;
  data->localData[0]->integerVars[68] /* genericGlider_mass_explicit.world.axisColor_x[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[68].time_unvarying = 1;
  data->localData[0]->integerVars[69] /* genericGlider_mass_explicit.world.gravityArrowColor[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[69].time_unvarying = 1;
  data->localData[0]->integerVars[71] /* genericGlider_mass_explicit.world.gravityArrowColor[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[71].time_unvarying = 1;
  data->localData[0]->integerVars[72] /* genericGlider_mass_explicit.world.gravitySphereColor[1] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[72].time_unvarying = 1;
  data->localData[0]->integerVars[74] /* genericGlider_mass_explicit.world.gravitySphereColor[3] DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[74].time_unvarying = 1;
  data->simulationInfo->integerParameter[0] /* genericGlider_mass_explicit.absoluteAngles.sequence[1] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* genericGlider_mass_explicit.absoluteAngles.sequence[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* genericGlider_mass_explicit.absoluteAngles.sequence[3] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* genericGlider_mass_explicit.actuators.bodyVariableMass.sequence_angleStates[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* genericGlider_mass_explicit.actuators.bodyVariableMass.sequence_angleStates[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* genericGlider_mass_explicit.actuators.bodyVariableMass.sequence_angleStates[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* genericGlider_mass_explicit.actuators.bodyVariableMass.sequence_start[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.sequence_start[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* genericGlider_mass_explicit.actuators.bodyVariableMass.sequence_start[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->simulationInfo->integerParameter[11] /* genericGlider_mass_explicit.actuators.body_rolling.sequence_angleStates[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  data->simulationInfo->integerParameter[12] /* genericGlider_mass_explicit.actuators.body_rolling.sequence_angleStates[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[12].time_unvarying = 1;
  data->simulationInfo->integerParameter[13] /* genericGlider_mass_explicit.actuators.body_rolling.sequence_angleStates[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[13].time_unvarying = 1;
  data->simulationInfo->integerParameter[14] /* genericGlider_mass_explicit.actuators.body_rolling.sequence_start[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[14].time_unvarying = 1;
  data->simulationInfo->integerParameter[15] /* genericGlider_mass_explicit.actuators.body_rolling.sequence_start[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[15].time_unvarying = 1;
  data->simulationInfo->integerParameter[16] /* genericGlider_mass_explicit.actuators.body_rolling.sequence_start[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[16].time_unvarying = 1;
  data->simulationInfo->integerParameter[17] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.n PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[17].time_unvarying = 1;
  data->simulationInfo->integerParameter[18] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.n PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[18].time_unvarying = 1;
  data->simulationInfo->integerParameter[19] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.n PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[19].time_unvarying = 1;
  data->simulationInfo->integerParameter[36] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.sequence[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[36].time_unvarying = 1;
  data->simulationInfo->integerParameter[37] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.sequence[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[37].time_unvarying = 1;
  data->simulationInfo->integerParameter[38] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.sequence[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[38].time_unvarying = 1;
  data->simulationInfo->integerParameter[59] /* genericGlider_mass_explicit.hull.sequence_angleStates[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[59].time_unvarying = 1;
  data->simulationInfo->integerParameter[60] /* genericGlider_mass_explicit.hull.sequence_angleStates[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[60].time_unvarying = 1;
  data->simulationInfo->integerParameter[61] /* genericGlider_mass_explicit.hull.sequence_angleStates[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[61].time_unvarying = 1;
  data->simulationInfo->integerParameter[62] /* genericGlider_mass_explicit.hull.sequence_start[1] PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[62].time_unvarying = 1;
  data->simulationInfo->integerParameter[63] /* genericGlider_mass_explicit.hull.sequence_start[2] PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[63].time_unvarying = 1;
  data->simulationInfo->integerParameter[64] /* genericGlider_mass_explicit.hull.sequence_start[3] PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[64].time_unvarying = 1;
  data->simulationInfo->integerParameter[77] /* genericGlider_mass_explicit.rOS_Sampler.nin PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[77].time_unvarying = 1;
  data->simulationInfo->integerParameter[78] /* genericGlider_mass_explicit.rOS_Sampler.nout PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[78].time_unvarying = 1;
  data->simulationInfo->integerParameter[83] /* genericGlider_mass_explicit.world.ndim_pointGravity PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[83].time_unvarying = 1;
  data->simulationInfo->integerParameter[84] /* genericGlider_mass_explicit.world.x_label.n PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[84].time_unvarying = 1;
  data->simulationInfo->integerParameter[85] /* genericGlider_mass_explicit.world.y_label.n PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[85].time_unvarying = 1;
  data->simulationInfo->integerParameter[86] /* genericGlider_mass_explicit.world.z_label.n PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[86].time_unvarying = 1;
  data->localData[0]->realVars[142] /* genericGlider_mass_explicit.absolutePosition.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[142].time_unvarying = 1;
  data->localData[0]->realVars[143] /* genericGlider_mass_explicit.absolutePosition.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[143].time_unvarying = 1;
  data->localData[0]->realVars[144] /* genericGlider_mass_explicit.absolutePosition.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[144].time_unvarying = 1;
  data->localData[0]->realVars[148] /* genericGlider_mass_explicit.absolutePosition.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[148].time_unvarying = 1;
  data->localData[0]->realVars[149] /* genericGlider_mass_explicit.absolutePosition.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[149].time_unvarying = 1;
  data->localData[0]->realVars[150] /* genericGlider_mass_explicit.absolutePosition.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[150].time_unvarying = 1;
  data->localData[0]->realVars[703] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[703].time_unvarying = 1;
  data->localData[0]->realVars[704] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[704].time_unvarying = 1;
  data->localData[0]->realVars[705] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[705].time_unvarying = 1;
  data->localData[0]->realVars[709] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[709].time_unvarying = 1;
  data->localData[0]->realVars[710] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[710].time_unvarying = 1;
  data->localData[0]->realVars[711] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[711].time_unvarying = 1;
  data->localData[0]->realVars[766] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[766].time_unvarying = 1;
  data->localData[0]->realVars[767] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[767].time_unvarying = 1;
  data->localData[0]->realVars[768] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[768].time_unvarying = 1;
  data->localData[0]->realVars[772] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[772].time_unvarying = 1;
  data->localData[0]->realVars[773] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[773].time_unvarying = 1;
  data->localData[0]->realVars[774] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[774].time_unvarying = 1;
  data->localData[0]->realVars[787] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[787].time_unvarying = 1;
  data->localData[0]->realVars[788] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[788].time_unvarying = 1;
  data->localData[0]->realVars[789] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[789].time_unvarying = 1;
  data->localData[0]->realVars[793] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[793].time_unvarying = 1;
  data->localData[0]->realVars[794] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[794].time_unvarying = 1;
  data->localData[0]->realVars[795] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[795].time_unvarying = 1;
  data->localData[0]->realVars[841] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[841].time_unvarying = 1;
  data->localData[0]->realVars[842] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[842].time_unvarying = 1;
  data->localData[0]->realVars[843] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[843].time_unvarying = 1;
  data->localData[0]->realVars[847] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[847].time_unvarying = 1;
  data->localData[0]->realVars[848] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[848].time_unvarying = 1;
  data->localData[0]->realVars[849] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.angularVelocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[849].time_unvarying = 1;
  data->localData[0]->realVars[943] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[943].time_unvarying = 1;
  data->localData[0]->realVars[944] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[944].time_unvarying = 1;
  data->localData[0]->realVars[945] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[945].time_unvarying = 1;
  data->localData[0]->realVars[949] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[949].time_unvarying = 1;
  data->localData[0]->realVars[950] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[950].time_unvarying = 1;
  data->localData[0]->realVars[951] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_a.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[951].time_unvarying = 1;
  data->localData[0]->realVars[988] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[988].time_unvarying = 1;
  data->localData[0]->realVars[989] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[989].time_unvarying = 1;
  data->localData[0]->realVars[990] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[990].time_unvarying = 1;
  data->localData[0]->realVars[994] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[994].time_unvarying = 1;
  data->localData[0]->realVars[995] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[995].time_unvarying = 1;
  data->localData[0]->realVars[996] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_z.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[996].time_unvarying = 1;
  data->localData[0]->realVars[1054] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1054].time_unvarying = 1;
  data->localData[0]->realVars[1055] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1055].time_unvarying = 1;
  data->localData[0]->realVars[1056] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1056].time_unvarying = 1;
  data->localData[0]->realVars[1060] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1060].time_unvarying = 1;
  data->localData[0]->realVars[1061] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1061].time_unvarying = 1;
  data->localData[0]->realVars[1062] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1062].time_unvarying = 1;
  data->localData[0]->realVars[1075] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1075].time_unvarying = 1;
  data->localData[0]->realVars[1076] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1076].time_unvarying = 1;
  data->localData[0]->realVars[1077] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1077].time_unvarying = 1;
  data->localData[0]->realVars[1081] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1081].time_unvarying = 1;
  data->localData[0]->realVars[1082] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1082].time_unvarying = 1;
  data->localData[0]->realVars[1083] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1083].time_unvarying = 1;
  data->localData[0]->realVars[1171] /* genericGlider_mass_explicit.addedMassForcesTorques.force.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1171].time_unvarying = 1;
  data->localData[0]->realVars[1172] /* genericGlider_mass_explicit.addedMassForcesTorques.force.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1172].time_unvarying = 1;
  data->localData[0]->realVars[1173] /* genericGlider_mass_explicit.addedMassForcesTorques.force.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1173].time_unvarying = 1;
  data->localData[0]->realVars[1177] /* genericGlider_mass_explicit.addedMassForcesTorques.force.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1177].time_unvarying = 1;
  data->localData[0]->realVars[1178] /* genericGlider_mass_explicit.addedMassForcesTorques.force.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1178].time_unvarying = 1;
  data->localData[0]->realVars[1179] /* genericGlider_mass_explicit.addedMassForcesTorques.force.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1179].time_unvarying = 1;
  data->localData[0]->realVars[1253] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1253].time_unvarying = 1;
  data->localData[0]->realVars[1254] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1254].time_unvarying = 1;
  data->localData[0]->realVars[1255] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1255].time_unvarying = 1;
  data->localData[0]->realVars[1259] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1259].time_unvarying = 1;
  data->localData[0]->realVars[1260] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1260].time_unvarying = 1;
  data->localData[0]->realVars[1261] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1261].time_unvarying = 1;
  data->localData[0]->realVars[1316] /* genericGlider_mass_explicit.buoyancyForce.force.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1316].time_unvarying = 1;
  data->localData[0]->realVars[1317] /* genericGlider_mass_explicit.buoyancyForce.force.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1317].time_unvarying = 1;
  data->localData[0]->realVars[1318] /* genericGlider_mass_explicit.buoyancyForce.force.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1318].time_unvarying = 1;
  data->localData[0]->realVars[1322] /* genericGlider_mass_explicit.buoyancyForce.force.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1322].time_unvarying = 1;
  data->localData[0]->realVars[1323] /* genericGlider_mass_explicit.buoyancyForce.force.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1323].time_unvarying = 1;
  data->localData[0]->realVars[1324] /* genericGlider_mass_explicit.buoyancyForce.force.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1324].time_unvarying = 1;
  data->localData[0]->realVars[1411] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1411].time_unvarying = 1;
  data->localData[0]->realVars[1412] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1412].time_unvarying = 1;
  data->localData[0]->realVars[1413] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1413].time_unvarying = 1;
  data->localData[0]->realVars[1417] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1417].time_unvarying = 1;
  data->localData[0]->realVars[1418] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1418].time_unvarying = 1;
  data->localData[0]->realVars[1419] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteAngularVelocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1419].time_unvarying = 1;
  data->localData[0]->realVars[1474] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1474].time_unvarying = 1;
  data->localData[0]->realVars[1475] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1475].time_unvarying = 1;
  data->localData[0]->realVars[1476] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1476].time_unvarying = 1;
  data->localData[0]->realVars[1480] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1480].time_unvarying = 1;
  data->localData[0]->realVars[1481] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1481].time_unvarying = 1;
  data->localData[0]->realVars[1482] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1482].time_unvarying = 1;
  data->localData[0]->realVars[1495] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1495].time_unvarying = 1;
  data->localData[0]->realVars[1496] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1496].time_unvarying = 1;
  data->localData[0]->realVars[1497] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1497].time_unvarying = 1;
  data->localData[0]->realVars[1501] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1501].time_unvarying = 1;
  data->localData[0]->realVars[1502] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1502].time_unvarying = 1;
  data->localData[0]->realVars[1503] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1503].time_unvarying = 1;
  data->localData[0]->realVars[1584] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1584].time_unvarying = 1;
  data->localData[0]->realVars[1585] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1585].time_unvarying = 1;
  data->localData[0]->realVars[1586] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1586].time_unvarying = 1;
  data->localData[0]->realVars[1590] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1590].time_unvarying = 1;
  data->localData[0]->realVars[1591] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1591].time_unvarying = 1;
  data->localData[0]->realVars[1592] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1592].time_unvarying = 1;
  data->localData[0]->realVars[1657] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.f[1] variable */ = -0.0;
  data->modelData->realVarsData[1657].time_unvarying = 1;
  data->localData[0]->realVars[1658] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.f[2] variable */ = -0.0;
  data->modelData->realVarsData[1658].time_unvarying = 1;
  data->localData[0]->realVars[1659] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.f[3] variable */ = -0.0;
  data->modelData->realVarsData[1659].time_unvarying = 1;
  data->localData[0]->realVars[1663] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.t[1] variable */ = -0.0;
  data->modelData->realVarsData[1663].time_unvarying = 1;
  data->localData[0]->realVars[1664] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.t[2] variable */ = -0.0;
  data->modelData->realVarsData[1664].time_unvarying = 1;
  data->localData[0]->realVars[1665] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.zeroPosition.frame_resolve.t[3] variable */ = -0.0;
  data->modelData->realVarsData[1665].time_unvarying = 1;
  data->simulationInfo->realParameter[72] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q_start[1] PARAM */ = 0.0;
  data->modelData->realParameterData[72].time_unvarying = 1;
  data->simulationInfo->realParameter[73] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q_start[2] PARAM */ = 0.0;
  data->modelData->realParameterData[73].time_unvarying = 1;
  data->simulationInfo->realParameter[74] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q_start[3] PARAM */ = 0.0;
  data->modelData->realParameterData[74].time_unvarying = 1;
  data->simulationInfo->realParameter[75] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q_start[4] PARAM */ = 1.0;
  data->modelData->realParameterData[75].time_unvarying = 1;
  data->simulationInfo->realParameter[76] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.T[1,1] PARAM */ = 1.0;
  data->modelData->realParameterData[76].time_unvarying = 1;
  data->simulationInfo->realParameter[77] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.T[1,2] PARAM */ = 0.0;
  data->modelData->realParameterData[77].time_unvarying = 1;
  data->simulationInfo->realParameter[78] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.T[1,3] PARAM */ = 0.0;
  data->modelData->realParameterData[78].time_unvarying = 1;
  data->simulationInfo->realParameter[79] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.T[2,1] PARAM */ = 0.0;
  data->modelData->realParameterData[79].time_unvarying = 1;
  data->simulationInfo->realParameter[80] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.T[2,2] PARAM */ = 1.0;
  data->modelData->realParameterData[80].time_unvarying = 1;
  data->simulationInfo->realParameter[81] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.T[2,3] PARAM */ = 0.0;
  data->modelData->realParameterData[81].time_unvarying = 1;
  data->simulationInfo->realParameter[82] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.T[3,1] PARAM */ = 0.0;
  data->modelData->realParameterData[82].time_unvarying = 1;
  data->simulationInfo->realParameter[83] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.T[3,2] PARAM */ = 0.0;
  data->modelData->realParameterData[83].time_unvarying = 1;
  data->simulationInfo->realParameter[84] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.T[3,3] PARAM */ = 1.0;
  data->modelData->realParameterData[84].time_unvarying = 1;
  data->simulationInfo->realParameter[85] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.w[1] PARAM */ = 0.0;
  data->modelData->realParameterData[85].time_unvarying = 1;
  data->simulationInfo->realParameter[86] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.w[2] PARAM */ = 0.0;
  data->modelData->realParameterData[86].time_unvarying = 1;
  data->simulationInfo->realParameter[87] /* genericGlider_mass_explicit.actuators.bodyVariableMass.R_start.w[3] PARAM */ = 0.0;
  data->modelData->realParameterData[87].time_unvarying = 1;
  data->simulationInfo->realParameter[124] /* genericGlider_mass_explicit.actuators.body_rolling.Q_start[1] PARAM */ = 0.0;
  data->modelData->realParameterData[124].time_unvarying = 1;
  data->simulationInfo->realParameter[125] /* genericGlider_mass_explicit.actuators.body_rolling.Q_start[2] PARAM */ = 0.0;
  data->modelData->realParameterData[125].time_unvarying = 1;
  data->simulationInfo->realParameter[126] /* genericGlider_mass_explicit.actuators.body_rolling.Q_start[3] PARAM */ = 0.0;
  data->modelData->realParameterData[126].time_unvarying = 1;
  data->simulationInfo->realParameter[127] /* genericGlider_mass_explicit.actuators.body_rolling.Q_start[4] PARAM */ = 1.0;
  data->modelData->realParameterData[127].time_unvarying = 1;
  data->simulationInfo->realParameter[128] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.T[1,1] PARAM */ = 1.0;
  data->modelData->realParameterData[128].time_unvarying = 1;
  data->simulationInfo->realParameter[129] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.T[1,2] PARAM */ = 0.0;
  data->modelData->realParameterData[129].time_unvarying = 1;
  data->simulationInfo->realParameter[130] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.T[1,3] PARAM */ = 0.0;
  data->modelData->realParameterData[130].time_unvarying = 1;
  data->simulationInfo->realParameter[131] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.T[2,1] PARAM */ = 0.0;
  data->modelData->realParameterData[131].time_unvarying = 1;
  data->simulationInfo->realParameter[132] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.T[2,2] PARAM */ = 1.0;
  data->modelData->realParameterData[132].time_unvarying = 1;
  data->simulationInfo->realParameter[133] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.T[2,3] PARAM */ = 0.0;
  data->modelData->realParameterData[133].time_unvarying = 1;
  data->simulationInfo->realParameter[134] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.T[3,1] PARAM */ = 0.0;
  data->modelData->realParameterData[134].time_unvarying = 1;
  data->simulationInfo->realParameter[135] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.T[3,2] PARAM */ = 0.0;
  data->modelData->realParameterData[135].time_unvarying = 1;
  data->simulationInfo->realParameter[136] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.T[3,3] PARAM */ = 1.0;
  data->modelData->realParameterData[136].time_unvarying = 1;
  data->simulationInfo->realParameter[137] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.w[1] PARAM */ = 0.0;
  data->modelData->realParameterData[137].time_unvarying = 1;
  data->simulationInfo->realParameter[138] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.w[2] PARAM */ = 0.0;
  data->modelData->realParameterData[138].time_unvarying = 1;
  data->simulationInfo->realParameter[139] /* genericGlider_mass_explicit.actuators.body_rolling.R_start.w[3] PARAM */ = 0.0;
  data->modelData->realParameterData[139].time_unvarying = 1;
  data->simulationInfo->realParameter[181] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.length PARAM */ = 0.04;
  data->modelData->realParameterData[181].time_unvarying = 1;
  data->simulationInfo->realParameter[182] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.lengthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[182].time_unvarying = 1;
  data->simulationInfo->realParameter[183] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.lengthDirection[2] PARAM */ = 0.0;
  data->modelData->realParameterData[183].time_unvarying = 1;
  data->simulationInfo->realParameter[184] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.lengthDirection[3] PARAM */ = 0.04;
  data->modelData->realParameterData[184].time_unvarying = 1;
  data->simulationInfo->realParameter[185] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.r[1] PARAM */ = 0.0;
  data->modelData->realParameterData[185].time_unvarying = 1;
  data->simulationInfo->realParameter[186] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.r[2] PARAM */ = 0.0;
  data->modelData->realParameterData[186].time_unvarying = 1;
  data->simulationInfo->realParameter[187] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.r[3] PARAM */ = 0.04;
  data->modelData->realParameterData[187].time_unvarying = 1;
  data->simulationInfo->realParameter[188] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.r_shape[1] PARAM */ = 0.0;
  data->modelData->realParameterData[188].time_unvarying = 1;
  data->simulationInfo->realParameter[189] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.r_shape[2] PARAM */ = 0.0;
  data->modelData->realParameterData[189].time_unvarying = 1;
  data->simulationInfo->realParameter[190] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.r_shape[3] PARAM */ = 0.0;
  data->modelData->realParameterData[190].time_unvarying = 1;
  data->simulationInfo->realParameter[197] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.widthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[197].time_unvarying = 1;
  data->simulationInfo->realParameter[198] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.widthDirection[2] PARAM */ = 1.0;
  data->modelData->realParameterData[198].time_unvarying = 1;
  data->simulationInfo->realParameter[199] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.widthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[199].time_unvarying = 1;
  data->simulationInfo->realParameter[201] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.height PARAM */ = 0.0;
  data->modelData->realParameterData[201].time_unvarying = 1;
  data->simulationInfo->realParameter[202] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.length PARAM */ = 0.0;
  data->modelData->realParameterData[202].time_unvarying = 1;
  data->simulationInfo->realParameter[203] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.lengthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[203].time_unvarying = 1;
  data->simulationInfo->realParameter[204] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.lengthDirection[2] PARAM */ = 0.0;
  data->modelData->realParameterData[204].time_unvarying = 1;
  data->simulationInfo->realParameter[205] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.lengthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[205].time_unvarying = 1;
  data->simulationInfo->realParameter[206] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.r[1] PARAM */ = 0.0;
  data->modelData->realParameterData[206].time_unvarying = 1;
  data->simulationInfo->realParameter[207] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.r[2] PARAM */ = 0.0;
  data->modelData->realParameterData[207].time_unvarying = 1;
  data->simulationInfo->realParameter[208] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.r[3] PARAM */ = 0.0;
  data->modelData->realParameterData[208].time_unvarying = 1;
  data->simulationInfo->realParameter[209] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.r_shape[1] PARAM */ = 0.0;
  data->modelData->realParameterData[209].time_unvarying = 1;
  data->simulationInfo->realParameter[210] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.r_shape[2] PARAM */ = 0.0;
  data->modelData->realParameterData[210].time_unvarying = 1;
  data->simulationInfo->realParameter[211] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.r_shape[3] PARAM */ = 0.0;
  data->modelData->realParameterData[211].time_unvarying = 1;
  data->simulationInfo->realParameter[215] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.width PARAM */ = 0.0;
  data->modelData->realParameterData[215].time_unvarying = 1;
  data->simulationInfo->realParameter[216] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.widthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[216].time_unvarying = 1;
  data->simulationInfo->realParameter[217] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.widthDirection[2] PARAM */ = 1.0;
  data->modelData->realParameterData[217].time_unvarying = 1;
  data->simulationInfo->realParameter[218] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.widthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[218].time_unvarying = 1;
  data->simulationInfo->realParameter[235] /* genericGlider_mass_explicit.actuators.prismatic.boxWidthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[235].time_unvarying = 1;
  data->simulationInfo->realParameter[236] /* genericGlider_mass_explicit.actuators.prismatic.boxWidthDirection[2] PARAM */ = 1.0;
  data->modelData->realParameterData[236].time_unvarying = 1;
  data->simulationInfo->realParameter[237] /* genericGlider_mass_explicit.actuators.prismatic.boxWidthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[237].time_unvarying = 1;
  data->simulationInfo->realParameter[238] /* genericGlider_mass_explicit.actuators.prismatic.e[1] PARAM */ = 1.0;
  data->modelData->realParameterData[238].time_unvarying = 1;
  data->simulationInfo->realParameter[239] /* genericGlider_mass_explicit.actuators.prismatic.e[2] PARAM */ = 0.0;
  data->modelData->realParameterData[239].time_unvarying = 1;
  data->simulationInfo->realParameter[240] /* genericGlider_mass_explicit.actuators.prismatic.e[3] PARAM */ = 0.0;
  data->modelData->realParameterData[240].time_unvarying = 1;
  data->simulationInfo->realParameter[242] /* genericGlider_mass_explicit.actuators.prismatic.fixed.s0 PARAM */ = 0.0;
  data->modelData->realParameterData[242].time_unvarying = 1;
  data->simulationInfo->realParameter[243] /* genericGlider_mass_explicit.actuators.prismatic.n[1] PARAM */ = 1.0;
  data->modelData->realParameterData[243].time_unvarying = 1;
  data->simulationInfo->realParameter[244] /* genericGlider_mass_explicit.actuators.prismatic.n[2] PARAM */ = 0.0;
  data->modelData->realParameterData[244].time_unvarying = 1;
  data->simulationInfo->realParameter[245] /* genericGlider_mass_explicit.actuators.prismatic.n[3] PARAM */ = 0.0;
  data->modelData->realParameterData[245].time_unvarying = 1;
  data->simulationInfo->realParameter[248] /* genericGlider_mass_explicit.actuators.r_b[1] PARAM */ = 0.0;
  data->modelData->realParameterData[248].time_unvarying = 1;
  data->simulationInfo->realParameter[249] /* genericGlider_mass_explicit.actuators.r_b[2] PARAM */ = 0.0;
  data->modelData->realParameterData[249].time_unvarying = 1;
  data->simulationInfo->realParameter[250] /* genericGlider_mass_explicit.actuators.r_b[3] PARAM */ = 0.0;
  data->modelData->realParameterData[250].time_unvarying = 1;
  data->simulationInfo->realParameter[251] /* genericGlider_mass_explicit.actuators.r_p[1] PARAM */ = 0.0;
  data->modelData->realParameterData[251].time_unvarying = 1;
  data->simulationInfo->realParameter[252] /* genericGlider_mass_explicit.actuators.r_p[2] PARAM */ = 0.0;
  data->modelData->realParameterData[252].time_unvarying = 1;
  data->simulationInfo->realParameter[253] /* genericGlider_mass_explicit.actuators.r_p[3] PARAM */ = 0.04;
  data->modelData->realParameterData[253].time_unvarying = 1;
  data->simulationInfo->realParameter[254] /* genericGlider_mass_explicit.actuators.r_r[1] PARAM */ = 0.0;
  data->modelData->realParameterData[254].time_unvarying = 1;
  data->simulationInfo->realParameter[255] /* genericGlider_mass_explicit.actuators.r_r[2] PARAM */ = 0.0;
  data->modelData->realParameterData[255].time_unvarying = 1;
  data->simulationInfo->realParameter[256] /* genericGlider_mass_explicit.actuators.r_r[3] PARAM */ = 0.0;
  data->modelData->realParameterData[256].time_unvarying = 1;
  data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */ = 1.0;
  data->modelData->realParameterData[266].time_unvarying = 1;
  data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */ = 0.0;
  data->modelData->realParameterData[267].time_unvarying = 1;
  data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */ = 0.0;
  data->modelData->realParameterData[268].time_unvarying = 1;
  data->simulationInfo->realParameter[270] /* genericGlider_mass_explicit.actuators.revolute.fixed.phi0 PARAM */ = 0.0;
  data->modelData->realParameterData[270].time_unvarying = 1;
  data->simulationInfo->realParameter[271] /* genericGlider_mass_explicit.actuators.revolute.n[1] PARAM */ = 1.0;
  data->modelData->realParameterData[271].time_unvarying = 1;
  data->simulationInfo->realParameter[272] /* genericGlider_mass_explicit.actuators.revolute.n[2] PARAM */ = 0.0;
  data->modelData->realParameterData[272].time_unvarying = 1;
  data->simulationInfo->realParameter[273] /* genericGlider_mass_explicit.actuators.revolute.n[3] PARAM */ = 0.0;
  data->modelData->realParameterData[273].time_unvarying = 1;
  data->simulationInfo->realParameter[281] /* genericGlider_mass_explicit.actuators.static_translation_VBD.height PARAM */ = 0.0;
  data->modelData->realParameterData[281].time_unvarying = 1;
  data->simulationInfo->realParameter[282] /* genericGlider_mass_explicit.actuators.static_translation_VBD.length PARAM */ = 0.0;
  data->modelData->realParameterData[282].time_unvarying = 1;
  data->simulationInfo->realParameter[283] /* genericGlider_mass_explicit.actuators.static_translation_VBD.lengthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[283].time_unvarying = 1;
  data->simulationInfo->realParameter[284] /* genericGlider_mass_explicit.actuators.static_translation_VBD.lengthDirection[2] PARAM */ = 0.0;
  data->modelData->realParameterData[284].time_unvarying = 1;
  data->simulationInfo->realParameter[285] /* genericGlider_mass_explicit.actuators.static_translation_VBD.lengthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[285].time_unvarying = 1;
  data->simulationInfo->realParameter[286] /* genericGlider_mass_explicit.actuators.static_translation_VBD.r[1] PARAM */ = 0.0;
  data->modelData->realParameterData[286].time_unvarying = 1;
  data->simulationInfo->realParameter[287] /* genericGlider_mass_explicit.actuators.static_translation_VBD.r[2] PARAM */ = 0.0;
  data->modelData->realParameterData[287].time_unvarying = 1;
  data->simulationInfo->realParameter[288] /* genericGlider_mass_explicit.actuators.static_translation_VBD.r[3] PARAM */ = 0.0;
  data->modelData->realParameterData[288].time_unvarying = 1;
  data->simulationInfo->realParameter[289] /* genericGlider_mass_explicit.actuators.static_translation_VBD.r_shape[1] PARAM */ = 0.0;
  data->modelData->realParameterData[289].time_unvarying = 1;
  data->simulationInfo->realParameter[290] /* genericGlider_mass_explicit.actuators.static_translation_VBD.r_shape[2] PARAM */ = 0.0;
  data->modelData->realParameterData[290].time_unvarying = 1;
  data->simulationInfo->realParameter[291] /* genericGlider_mass_explicit.actuators.static_translation_VBD.r_shape[3] PARAM */ = 0.0;
  data->modelData->realParameterData[291].time_unvarying = 1;
  data->simulationInfo->realParameter[295] /* genericGlider_mass_explicit.actuators.static_translation_VBD.width PARAM */ = 0.0;
  data->modelData->realParameterData[295].time_unvarying = 1;
  data->simulationInfo->realParameter[296] /* genericGlider_mass_explicit.actuators.static_translation_VBD.widthDirection[1] PARAM */ = 0.0;
  data->modelData->realParameterData[296].time_unvarying = 1;
  data->simulationInfo->realParameter[297] /* genericGlider_mass_explicit.actuators.static_translation_VBD.widthDirection[2] PARAM */ = 1.0;
  data->modelData->realParameterData[297].time_unvarying = 1;
  data->simulationInfo->realParameter[298] /* genericGlider_mass_explicit.actuators.static_translation_VBD.widthDirection[3] PARAM */ = 0.0;
  data->modelData->realParameterData[298].time_unvarying = 1;
  data->simulationInfo->realParameter[342] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.guessAngle1 PARAM */ = 0.0;
  data->modelData->realParameterData[342].time_unvarying = 1;
  data->simulationInfo->realParameter[404] /* genericGlider_mass_explicit.hull.Q_start[1] PARAM */ = 0.000499999978541667;
  data->modelData->realParameterData[404].time_unvarying = 1;
  data->simulationInfo->realParameter[405] /* genericGlider_mass_explicit.hull.Q_start[2] PARAM */ = -2.499999894791668e-08;
  data->modelData->realParameterData[405].time_unvarying = 1;
  data->simulationInfo->realParameter[406] /* genericGlider_mass_explicit.hull.Q_start[3] PARAM */ = 4.99999937291668e-05;
  data->modelData->realParameterData[406].time_unvarying = 1;
  data->simulationInfo->realParameter[407] /* genericGlider_mass_explicit.hull.Q_start[4] PARAM */ = 0.9999998737500028;
  data->modelData->realParameterData[407].time_unvarying = 1;
  data->simulationInfo->realParameter[408] /* genericGlider_mass_explicit.hull.R_start.T[1,1] PARAM */ = 0.999999995;
  data->modelData->realParameterData[408].time_unvarying = 1;
  data->simulationInfo->realParameter[409] /* genericGlider_mass_explicit.hull.R_start.T[1,2] PARAM */ = 9.99999498333376e-05;
  data->modelData->realParameterData[409].time_unvarying = 1;
  data->simulationInfo->realParameter[410] /* genericGlider_mass_explicit.hull.R_start.T[1,3] PARAM */ = 9.999998316666754e-08;
  data->modelData->realParameterData[410].time_unvarying = 1;
  data->simulationInfo->realParameter[411] /* genericGlider_mass_explicit.hull.R_start.T[2,1] PARAM */ = -9.999999983333334e-05;
  data->modelData->realParameterData[411].time_unvarying = 1;
  data->simulationInfo->realParameter[412] /* genericGlider_mass_explicit.hull.R_start.T[2,2] PARAM */ = 0.9999994950000443;
  data->modelData->realParameterData[412].time_unvarying = 1;
  data->simulationInfo->realParameter[413] /* genericGlider_mass_explicit.hull.R_start.T[2,3] PARAM */ = 0.0009999998283333426;
  data->modelData->realParameterData[413].time_unvarying = 1;
  data->simulationInfo->realParameter[414] /* genericGlider_mass_explicit.hull.R_start.T[3,1] PARAM */ = 0.0;
  data->modelData->realParameterData[414].time_unvarying = 1;
  data->simulationInfo->realParameter[415] /* genericGlider_mass_explicit.hull.R_start.T[3,2] PARAM */ = -0.0009999998333333417;
  data->modelData->realParameterData[415].time_unvarying = 1;
  data->simulationInfo->realParameter[416] /* genericGlider_mass_explicit.hull.R_start.T[3,3] PARAM */ = 0.9999995000000417;
  data->modelData->realParameterData[416].time_unvarying = 1;
  data->simulationInfo->realParameter[417] /* genericGlider_mass_explicit.hull.R_start.w[1] PARAM */ = 0.0;
  data->modelData->realParameterData[417].time_unvarying = 1;
  data->simulationInfo->realParameter[418] /* genericGlider_mass_explicit.hull.R_start.w[2] PARAM */ = 0.0;
  data->modelData->realParameterData[418].time_unvarying = 1;
  data->simulationInfo->realParameter[419] /* genericGlider_mass_explicit.hull.R_start.w[3] PARAM */ = 0.0;
  data->modelData->realParameterData[419].time_unvarying = 1;
  data->simulationInfo->realParameter[490] /* genericGlider_mass_explicit.r_b[1] PARAM */ = 0.0;
  data->modelData->realParameterData[490].time_unvarying = 1;
  data->simulationInfo->realParameter[491] /* genericGlider_mass_explicit.r_b[2] PARAM */ = 0.0;
  data->modelData->realParameterData[491].time_unvarying = 1;
  data->simulationInfo->realParameter[492] /* genericGlider_mass_explicit.r_b[3] PARAM */ = 0.0;
  data->modelData->realParameterData[492].time_unvarying = 1;
  data->simulationInfo->realParameter[493] /* genericGlider_mass_explicit.r_p[1] PARAM */ = 0.0;
  data->modelData->realParameterData[493].time_unvarying = 1;
  data->simulationInfo->realParameter[494] /* genericGlider_mass_explicit.r_p[2] PARAM */ = 0.0;
  data->modelData->realParameterData[494].time_unvarying = 1;
  data->simulationInfo->realParameter[495] /* genericGlider_mass_explicit.r_p[3] PARAM */ = 0.04;
  data->modelData->realParameterData[495].time_unvarying = 1;
  data->simulationInfo->realParameter[496] /* genericGlider_mass_explicit.r_r[1] PARAM */ = 0.0;
  data->modelData->realParameterData[496].time_unvarying = 1;
  data->simulationInfo->realParameter[497] /* genericGlider_mass_explicit.r_r[2] PARAM */ = 0.0;
  data->modelData->realParameterData[497].time_unvarying = 1;
  data->simulationInfo->realParameter[498] /* genericGlider_mass_explicit.r_r[3] PARAM */ = 0.0;
  data->modelData->realParameterData[498].time_unvarying = 1;
  data->simulationInfo->realParameter[542] /* genericGlider_mass_explicit.world.groundAxis_u[1] PARAM */ = 1.0;
  data->modelData->realParameterData[542].time_unvarying = 1;
  data->simulationInfo->realParameter[543] /* genericGlider_mass_explicit.world.groundAxis_u[2] PARAM */ = 0.0;
  data->modelData->realParameterData[543].time_unvarying = 1;
  data->simulationInfo->realParameter[553] /* genericGlider_mass_explicit.world.n[1] PARAM */ = 0.0;
  data->modelData->realParameterData[553].time_unvarying = 1;
  data->simulationInfo->realParameter[554] /* genericGlider_mass_explicit.world.n[2] PARAM */ = 0.0;
  data->modelData->realParameterData[554].time_unvarying = 1;
  data->simulationInfo->realParameter[555] /* genericGlider_mass_explicit.world.n[3] PARAM */ = 1.0;
  data->modelData->realParameterData[555].time_unvarying = 1;
  data->simulationInfo->booleanParameter[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.angles_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  data->simulationInfo->booleanParameter[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.animation PARAM */ = 0;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  data->simulationInfo->booleanParameter[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.enforceStates PARAM */ = 0;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  data->simulationInfo->booleanParameter[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.useQuaternions PARAM */ = 1;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  data->simulationInfo->booleanParameter[4] /* genericGlider_mass_explicit.actuators.bodyVariableMass.w_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  data->simulationInfo->booleanParameter[5] /* genericGlider_mass_explicit.actuators.bodyVariableMass.z_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  data->simulationInfo->booleanParameter[6] /* genericGlider_mass_explicit.actuators.body_rolling.angles_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  data->simulationInfo->booleanParameter[7] /* genericGlider_mass_explicit.actuators.body_rolling.animation PARAM */ = 0;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  data->simulationInfo->booleanParameter[8] /* genericGlider_mass_explicit.actuators.body_rolling.enforceStates PARAM */ = 0;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  data->simulationInfo->booleanParameter[9] /* genericGlider_mass_explicit.actuators.body_rolling.useQuaternions PARAM */ = 1;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  data->simulationInfo->booleanParameter[10] /* genericGlider_mass_explicit.actuators.body_rolling.w_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  data->simulationInfo->booleanParameter[11] /* genericGlider_mass_explicit.actuators.body_rolling.z_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  data->simulationInfo->booleanParameter[18] /* genericGlider_mass_explicit.actuators.limiter.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[18].time_unvarying = 1;
  data->simulationInfo->booleanParameter[19] /* genericGlider_mass_explicit.actuators.limiter.strict PARAM */ = 0;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  data->simulationInfo->booleanParameter[20] /* genericGlider_mass_explicit.actuators.limiter1.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[20].time_unvarying = 1;
  data->simulationInfo->booleanParameter[21] /* genericGlider_mass_explicit.actuators.limiter1.strict PARAM */ = 0;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  data->simulationInfo->booleanParameter[22] /* genericGlider_mass_explicit.actuators.limiter2.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[22].time_unvarying = 1;
  data->simulationInfo->booleanParameter[23] /* genericGlider_mass_explicit.actuators.limiter2.strict PARAM */ = 0;
  data->modelData->booleanParameterData[23].time_unvarying = 1;
  data->simulationInfo->booleanParameter[24] /* genericGlider_mass_explicit.actuators.position.exact PARAM */ = 0;
  data->modelData->booleanParameterData[24].time_unvarying = 1;
  data->simulationInfo->booleanParameter[25] /* genericGlider_mass_explicit.actuators.position.useSupport PARAM */ = 0;
  data->modelData->booleanParameterData[25].time_unvarying = 1;
  data->simulationInfo->booleanParameter[26] /* genericGlider_mass_explicit.actuators.position_slidingMass.exact PARAM */ = 0;
  data->modelData->booleanParameterData[26].time_unvarying = 1;
  data->simulationInfo->booleanParameter[27] /* genericGlider_mass_explicit.actuators.position_slidingMass.useSupport PARAM */ = 0;
  data->modelData->booleanParameterData[27].time_unvarying = 1;
  data->simulationInfo->booleanParameter[29] /* genericGlider_mass_explicit.actuators.prismatic.useAxisFlange PARAM */ = 1;
  data->modelData->booleanParameterData[29].time_unvarying = 1;
  data->simulationInfo->booleanParameter[31] /* genericGlider_mass_explicit.actuators.revolute.useAxisFlange PARAM */ = 1;
  data->modelData->booleanParameterData[31].time_unvarying = 1;
  data->simulationInfo->booleanParameter[36] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.get_a PARAM */ = 1;
  data->modelData->booleanParameterData[36].time_unvarying = 1;
  data->simulationInfo->booleanParameter[37] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.get_angles PARAM */ = 0;
  data->modelData->booleanParameterData[37].time_unvarying = 1;
  data->simulationInfo->booleanParameter[38] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.get_r PARAM */ = 0;
  data->modelData->booleanParameterData[38].time_unvarying = 1;
  data->simulationInfo->booleanParameter[39] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.get_v PARAM */ = 1;
  data->modelData->booleanParameterData[39].time_unvarying = 1;
  data->simulationInfo->booleanParameter[40] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.get_w PARAM */ = 1;
  data->modelData->booleanParameterData[40].time_unvarying = 1;
  data->simulationInfo->booleanParameter[41] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.get_z PARAM */ = 1;
  data->modelData->booleanParameterData[41].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] /* genericGlider_mass_explicit.hull.angles_fixed PARAM */ = 1;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] /* genericGlider_mass_explicit.hull.animation PARAM */ = 0;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] /* genericGlider_mass_explicit.hull.enforceStates PARAM */ = 0;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->booleanParameter[48] /* genericGlider_mass_explicit.hull.useQuaternions PARAM */ = 1;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  data->simulationInfo->booleanParameter[49] /* genericGlider_mass_explicit.hull.w_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  data->simulationInfo->booleanParameter[50] /* genericGlider_mass_explicit.hull.z_0_fixed PARAM */ = 0;
  data->modelData->booleanParameterData[50].time_unvarying = 1;
  data->simulationInfo->booleanParameter[54] /* genericGlider_mass_explicit.world.animateGravity PARAM */ = 1;
  data->modelData->booleanParameterData[54].time_unvarying = 1;
  data->simulationInfo->booleanParameter[55] /* genericGlider_mass_explicit.world.animateGround PARAM */ = 0;
  data->modelData->booleanParameterData[55].time_unvarying = 1;
  data->simulationInfo->booleanParameter[59] /* genericGlider_mass_explicit.world.enableAnimation PARAM */ = 1;
  data->modelData->booleanParameterData[59].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* genericGlider_mass_explicit.absolutePosition.position.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* genericGlider_mass_explicit.absolutePosition.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[20] /* genericGlider_mass_explicit.actuators.limiter.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[20].time_unvarying = 1;
  data->simulationInfo->integerParameter[21] /* genericGlider_mass_explicit.actuators.limiter1.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[21].time_unvarying = 1;
  data->simulationInfo->integerParameter[22] /* genericGlider_mass_explicit.actuators.limiter2.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[22].time_unvarying = 1;
  data->simulationInfo->integerParameter[25] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.angularVelocity.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[25].time_unvarying = 1;
  data->simulationInfo->integerParameter[26] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteAngularVelocity.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[26].time_unvarying = 1;
  data->simulationInfo->integerParameter[27] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.position.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[27].time_unvarying = 1;
  data->simulationInfo->integerParameter[28] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[28].time_unvarying = 1;
  data->simulationInfo->integerParameter[29] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.basicTransformVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[29].time_unvarying = 1;
  data->simulationInfo->integerParameter[30] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.basicTransformVector.frame_r_out PARAM */ = 1;
  data->modelData->integerParameterData[30].time_unvarying = 1;
  data->simulationInfo->integerParameter[31] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[31].time_unvarying = 1;
  data->simulationInfo->integerParameter[32] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.absoluteVelocity.tansformAbsoluteVector.frame_r_out PARAM */ = 1;
  data->modelData->integerParameterData[32].time_unvarying = 1;
  data->simulationInfo->integerParameter[33] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.angularVelocity.angularVelocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[33].time_unvarying = 1;
  data->simulationInfo->integerParameter[34] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.angularVelocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[34].time_unvarying = 1;
  data->simulationInfo->integerParameter[35] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[35].time_unvarying = 1;
  data->simulationInfo->integerParameter[39] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_a.basicTransformVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[39].time_unvarying = 1;
  data->simulationInfo->integerParameter[40] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_a.basicTransformVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[40].time_unvarying = 1;
  data->simulationInfo->integerParameter[41] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_a.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[41].time_unvarying = 1;
  data->simulationInfo->integerParameter[42] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_a.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[42].time_unvarying = 1;
  data->simulationInfo->integerParameter[43] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_z.basicTransformVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[43].time_unvarying = 1;
  data->simulationInfo->integerParameter[44] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_z.basicTransformVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[44].time_unvarying = 1;
  data->simulationInfo->integerParameter[45] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_z.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[45].time_unvarying = 1;
  data->simulationInfo->integerParameter[46] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.transformVector_z.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[46].time_unvarying = 1;
  data->simulationInfo->integerParameter[47] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.position.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[47].time_unvarying = 1;
  data->simulationInfo->integerParameter[48] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[48].time_unvarying = 1;
  data->simulationInfo->integerParameter[49] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.basicTransformVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[49].time_unvarying = 1;
  data->simulationInfo->integerParameter[50] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.basicTransformVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[50].time_unvarying = 1;
  data->simulationInfo->integerParameter[51] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[51].time_unvarying = 1;
  data->simulationInfo->integerParameter[52] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.velocity.tansformAbsoluteVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[52].time_unvarying = 1;
  data->simulationInfo->integerParameter[53] /* genericGlider_mass_explicit.addedMassForcesTorques.force.basicWorldForce.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[53].time_unvarying = 1;
  data->simulationInfo->integerParameter[54] /* genericGlider_mass_explicit.addedMassForcesTorques.force.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[54].time_unvarying = 1;
  data->simulationInfo->integerParameter[55] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.basicWorldTorque.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[55].time_unvarying = 1;
  data->simulationInfo->integerParameter[56] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[56].time_unvarying = 1;
  data->simulationInfo->integerParameter[57] /* genericGlider_mass_explicit.buoyancyForce.force.basicWorldForce.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[57].time_unvarying = 1;
  data->simulationInfo->integerParameter[58] /* genericGlider_mass_explicit.buoyancyForce.force.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[58].time_unvarying = 1;
  data->simulationInfo->integerParameter[65] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteAngularVelocity.angularVelocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[65].time_unvarying = 1;
  data->simulationInfo->integerParameter[66] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteAngularVelocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[66].time_unvarying = 1;
  data->simulationInfo->integerParameter[67] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.position.resolveInFrame PARAM */ = 1;
  data->modelData->integerParameterData[67].time_unvarying = 1;
  data->simulationInfo->integerParameter[68] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[68].time_unvarying = 1;
  data->simulationInfo->integerParameter[69] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.basicTransformVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[69].time_unvarying = 1;
  data->simulationInfo->integerParameter[70] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.basicTransformVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[70].time_unvarying = 1;
  data->simulationInfo->integerParameter[71] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.frame_r_in PARAM */ = 1;
  data->modelData->integerParameterData[71].time_unvarying = 1;
  data->simulationInfo->integerParameter[72] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.tansformAbsoluteVector.frame_r_out PARAM */ = 2;
  data->modelData->integerParameterData[72].time_unvarying = 1;
  data->simulationInfo->integerParameter[73] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.basicWorldForce.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[73].time_unvarying = 1;
  data->simulationInfo->integerParameter[74] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[74].time_unvarying = 1;
  data->simulationInfo->integerParameter[75] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.basicWorldTorque.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[75].time_unvarying = 1;
  data->simulationInfo->integerParameter[76] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.resolveInFrame PARAM */ = 2;
  data->modelData->integerParameterData[76].time_unvarying = 1;
  data->simulationInfo->integerParameter[80] /* genericGlider_mass_explicit.world.gravityType PARAM */ = 2;
  data->modelData->integerParameterData[80].time_unvarying = 1;
  TestGlider_updateBoundParameters_0(data, threadData);
  TestGlider_updateBoundParameters_1(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

