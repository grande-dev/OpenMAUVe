/* Jacobians 12 */
#include "TestGlider_model.h"
#include "TestGlider_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 1345
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] = 4.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4])
*/
void TestGlider_eqFunction_1345(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1345};
  jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] SEED_VAR */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[3,3] = 4.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4])
*/
void TestGlider_eqFunction_1346(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1346};
  jacobian->tmpVars[1] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[3,3] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] SEED_VAR */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] = 4.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4])
*/
void TestGlider_eqFunction_1347(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1347};
  jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] SEED_VAR */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1348
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_1348(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1348};
  jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] SEED_VAR */) + (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] SEED_VAR */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] SEED_VAR */) + (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] SEED_VAR */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_1349(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1349};
  jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] SEED_VAR */) + (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] SEED_VAR */) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + ((-data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */)) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] SEED_VAR */) - ((jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] SEED_VAR */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_1350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1350};
  jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] SEED_VAR */) + (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] SEED_VAR */) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] SEED_VAR */) + (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] SEED_VAR */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[3,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_1351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1351};
  jacobian->tmpVars[6] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[3,2] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] SEED_VAR */) + (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] SEED_VAR */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + ((-data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */)) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] SEED_VAR */) - ((jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] SEED_VAR */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_1352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1352};
  jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] SEED_VAR */) + (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] SEED_VAR */) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + ((-data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */)) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] SEED_VAR */) - ((jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] SEED_VAR */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
$res_NLSJac65_1.$pDERNLSJac65.dummyVarNLSJac65 = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4])
*/
void TestGlider_eqFunction_1353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1353};
  jacobian->resultVars[0] /* $res_NLSJac65_1.$pDERNLSJac65.dummyVarNLSJac65 JACOBIAN_VAR */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[1] SEED_VAR */) + (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[2] SEED_VAR */) + (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[3] SEED_VAR */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac65[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
$res_NLSJac65_2.$pDERNLSJac65.dummyVarNLSJac65 = if noEvent(genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08 == 0.0) then genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08 else (((genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2])) * (-9.999999983333334e-05) + (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3])) * 0.9999994950000443 + (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1])) * 0.0009999998283333426) * (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08) - ((genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] - genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 0.0009999998283333426) * (genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] * 9.999998316666754e-08)) / ((genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08) ^ 2.0 * (1.0 + (((genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] - genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 0.0009999998283333426) / (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08)) ^ 2.0))
*/
void TestGlider_eqFunction_1354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1354};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp3 = (modelica_boolean)((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08) == 0.0);
  if(tmp3)
  {
    tmp4 = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08);
  }
  else
  {
    tmp1 = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08);
    tmp2 = DIVISION(((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426),(data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08),"genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08");
    tmp4 = DIVISION((((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426)) * ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08)) - ((((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426)) * ((jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] JACOBIAN_DIFF_VAR */) * (0.999999995) + (jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] JACOBIAN_DIFF_VAR */) * (9.99999498333376e-05) + (jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] JACOBIAN_DIFF_VAR */) * (9.999998316666754e-08))),((tmp1 * tmp1)) * (1.0 + (tmp2 * tmp2)),"(genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08) ^ 2.0 * (1.0 + (((genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] - genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 0.0009999998283333426) / (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08)) ^ 2.0)");
  }
  jacobian->resultVars[1] /* $res_NLSJac65_2.$pDERNLSJac65.dummyVarNLSJac65 JACOBIAN_VAR */ = tmp4;
  TRACE_POP
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
$res_NLSJac65_3.$pDERNLSJac65.dummyVarNLSJac65 = if noEvent(genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417 == 0.0) then genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417 else ((genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] * 9.999998316666754e-08) * (genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417) - (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 9.999998316666754e-08) * (genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[3,3] * 0.9999995000000417)) / ((genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417) ^ 2.0 * (1.0 + ((genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 9.999998316666754e-08) / (genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417)) ^ 2.0))
*/
void TestGlider_eqFunction_1355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1355};
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)((data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417) == 0.0);
  if(tmp8)
  {
    tmp9 = (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417);
  }
  else
  {
    tmp6 = (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417);
    tmp7 = DIVISION((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (9.999998316666754e-08),(data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417),"genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417");
    tmp9 = DIVISION(((jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] JACOBIAN_DIFF_VAR */) * (0.999999995) + (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] JACOBIAN_DIFF_VAR */) * (9.99999498333376e-05) + (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] JACOBIAN_DIFF_VAR */) * (9.999998316666754e-08)) * ((data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417)) - (((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (9.999998316666754e-08)) * ((jacobian->tmpVars[6] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[3,2] JACOBIAN_DIFF_VAR */) * (-0.0009999998333333417) + (jacobian->tmpVars[1] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[3,3] JACOBIAN_DIFF_VAR */) * (0.9999995000000417))),((tmp6 * tmp6)) * (1.0 + (tmp7 * tmp7)),"(genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417) ^ 2.0 * (1.0 + ((genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 9.999998316666754e-08) / (genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417)) ^ 2.0)");
  }
  jacobian->resultVars[2] /* $res_NLSJac65_3.$pDERNLSJac65.dummyVarNLSJac65 JACOBIAN_VAR */ = tmp9;
  TRACE_POP
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
$res_NLSJac65_4.$pDERNLSJac65.dummyVarNLSJac65 = if noEvent(genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426 == 0.0) then genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426 else (((genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1])) * 9.99999498333376e-05 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1])) * 9.999998316666754e-08 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2])) * 0.999999995) * (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426) - ((genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * 0.999999995) * (genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] * 0.0009999998283333426)) / ((genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426) ^ 2.0 * (1.0 + (((genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * 0.999999995) / (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426)) ^ 2.0))
*/
void TestGlider_eqFunction_1356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1356};
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp13 = (modelica_boolean)((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426) == 0.0);
  if(tmp13)
  {
    tmp14 = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426);
  }
  else
  {
    tmp11 = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426);
    tmp12 = DIVISION(((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (0.999999995)),(data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426),"genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426");
    tmp14 = DIVISION((((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (0.999999995))) * ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426)) - ((((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (0.999999995))) * ((jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,1] JACOBIAN_DIFF_VAR */) * (-9.999999983333334e-05) + (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,2] JACOBIAN_DIFF_VAR */) * (0.9999994950000443) + (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac65.dummyVarNLSJac65[2,3] JACOBIAN_DIFF_VAR */) * (0.0009999998283333426))),((tmp11 * tmp11)) * (1.0 + (tmp12 * tmp12)),"(genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426) ^ 2.0 * (1.0 + (((genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * 0.999999995) / (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426)) ^ 2.0)");
  }
  jacobian->resultVars[3] /* $res_NLSJac65_4.$pDERNLSJac65.dummyVarNLSJac65 JACOBIAN_VAR */ = tmp14;
  TRACE_POP
}

OMC_DISABLE_OPT
int TestGlider_functionJacNLSJac65_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_NLSJac65;
  
  
  TRACE_POP
  return 0;
}

int TestGlider_functionJacNLSJac65_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_NLSJac65;
  TestGlider_eqFunction_1345(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1346(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1347(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1348(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1349(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1350(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1351(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1352(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1353(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1354(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1355(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1356(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1699
type: SIMPLE_ASSIGN
$res_LSJac66_6.$pDERLSJac66.dummyVarLSJac66 = (genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] - genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1]) * genericGlider_mass_explicit.actuators.bodyVariableMass.m - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1699(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1699};
  jacobian->resultVars[5] /* $res_LSJac66_6.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] SEED_VAR */) + (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) - ((jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1700
type: SIMPLE_ASSIGN
$res_LSJac66_3.$pDERLSJac66.dummyVarLSJac66 = (genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] * genericGlider_mass_explicit.hull.r_CM[2] - genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] * genericGlider_mass_explicit.hull.r_CM[1]) * genericGlider_mass_explicit.hull.m - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1700(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1700};
  jacobian->resultVars[2] /* $res_LSJac66_3.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] SEED_VAR */) + (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) - ((jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1701
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[1] = genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1]
*/
void TestGlider_eqFunction_1701(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1701};
  jacobian->tmpVars[50] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[1])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] SEED_VAR */ + (0.04) * ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */)) + (-0.04) * ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[2] = genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1]
*/
void TestGlider_eqFunction_1702(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1702};
  jacobian->tmpVars[49] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[2])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] SEED_VAR */ + (0.04) * ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */)) + (-0.04) * ((data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1703
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[3] = genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1703(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1703};
  jacobian->tmpVars[34] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[3] SEED_VAR */ - jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac66[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2] = genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[2] - genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.SeedLSJac66[2]
*/
void TestGlider_eqFunction_1704(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1704};
  jacobian->tmpVars[31] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[4] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[2] SEED_VAR */ - jacobian->seedVars[5] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.SeedLSJac66[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[1] = (-genericGlider_mass_explicit.addedMassForcesTorques.K_pdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[1]
*/
void TestGlider_eqFunction_1705(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1705};
  jacobian->tmpVars[25] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */)) * (jacobian->seedVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1] = genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[1] - genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[1]
*/
void TestGlider_eqFunction_1706(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1706};
  jacobian->tmpVars[29] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[25] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[6] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1707(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1707};
  jacobian->tmpVars[4] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[2] = (-genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.addedMassForcesTorques.M_qdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[2]
*/
void TestGlider_eqFunction_1708(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1708};
  jacobian->tmpVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->tmpVars[4] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */) * (jacobian->seedVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[2] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2] = genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[2]
*/
void TestGlider_eqFunction_1709(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1709};
  jacobian->tmpVars[32] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[4] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[3] = (-genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[2] - genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[3]
*/
void TestGlider_eqFunction_1710(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1710};
  jacobian->tmpVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->seedVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[2] SEED_VAR */) - ((data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * (jacobian->tmpVars[4] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[3] = genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1711(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1711};
  jacobian->tmpVars[23] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[3] = genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1712(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1712};
  jacobian->tmpVars[24] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[23] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1713
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1713(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1713};
  jacobian->tmpVars[3] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[2] = (-genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[2]
*/
void TestGlider_eqFunction_1714(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1714};
  jacobian->tmpVars[11] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */)) * (jacobian->seedVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[3] SEED_VAR */) - ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * (jacobian->tmpVars[3] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[2] = genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[2]
*/
void TestGlider_eqFunction_1715(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1715};
  jacobian->tmpVars[21] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1716
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[2] = genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[2]
*/
void TestGlider_eqFunction_1716(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1716};
  jacobian->tmpVars[22] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[21] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[11] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1717
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1] = genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac66[1] - 0.04 * genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[2]
*/
void TestGlider_eqFunction_1717(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1717};
  jacobian->tmpVars[27] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[7] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac66[1] SEED_VAR */ - ((0.04) * (jacobian->tmpVars[22] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1718
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1] = genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[1] - genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1]
*/
void TestGlider_eqFunction_1718(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1718};
  jacobian->tmpVars[28] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[6] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[1] SEED_VAR */ - jacobian->tmpVars[27] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[3] = (-genericGlider_mass_explicit.addedMassForcesTorques.N_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[2]
*/
void TestGlider_eqFunction_1719(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1719};
  jacobian->tmpVars[12] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */)) * (jacobian->seedVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[3] SEED_VAR */) - ((data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * (jacobian->tmpVars[3] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[3] = genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1720(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1720};
  jacobian->tmpVars[33] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[12] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac66[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1721
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] = (genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[3] - (genericGlider_mass_explicit.hull.I[3,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + genericGlider_mass_explicit.hull.I[3,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.hull.r_CM[1] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[2] - genericGlider_mass_explicit.hull.r_CM[2] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[1])) / genericGlider_mass_explicit.hull.I[3,3]
*/
void TestGlider_eqFunction_1721(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1721};
  jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[33] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[2] SEED_VAR */) - ((data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (jacobian->seedVars[14] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[1] SEED_VAR */))),data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */,"genericGlider_mass_explicit.hull.I[3,3]");
  TRACE_POP
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3]
*/
void TestGlider_eqFunction_1722(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1722};
  jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1723
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3]
*/
void TestGlider_eqFunction_1723(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1723};
  jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] = (genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[3] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[2] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[1]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_1724(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1724};
  jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) - ((jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */)) - ((data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[18] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[3] SEED_VAR */)) - ((data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[17] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[2] SEED_VAR */)) - ((data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * (jacobian->seedVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[1] SEED_VAR */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 1725
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3]
*/
void TestGlider_eqFunction_1725(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1725};
  jacobian->tmpVars[39] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1726
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3]
*/
void TestGlider_eqFunction_1726(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1726};
  jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1727
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] = (genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[3] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[2] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[1]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_1727(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1727};
  jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */)) - ((data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[18] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[3] SEED_VAR */)) - ((data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[17] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[2] SEED_VAR */)) - ((data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * (jacobian->seedVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[1] SEED_VAR */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 1728
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 = (genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[3] + genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_1728(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1728};
  jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (jacobian->seedVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[17] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[18] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[3] SEED_VAR */) + (jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 1729
type: SIMPLE_ASSIGN
$res_LSJac66_7.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 + (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[3]
*/
void TestGlider_eqFunction_1729(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1729};
  jacobian->resultVars[6] /* $res_LSJac66_7.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[24] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
$res_LSJac66_22.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 + (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[2]
*/
void TestGlider_eqFunction_1730(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1730};
  jacobian->resultVars[21] /* $res_LSJac66_22.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[22] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1731
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[1] = genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1]
*/
void TestGlider_eqFunction_1731(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1731};
  jacobian->tmpVars[43] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2] = (-genericGlider_mass_explicit.actuators.body_rolling.r_CM[3]) * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 - genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1]
*/
void TestGlider_eqFunction_1732(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1732};
  jacobian->tmpVars[44] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */)) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_1733(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1733};
  jacobian->tmpVars[51] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[44] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */));
  TRACE_POP
}

/*
equation index: 1734
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] = genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] + genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 - genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1]
*/
void TestGlider_eqFunction_1734(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1734};
  jacobian->tmpVars[45] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] + genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_1735(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1735};
  jacobian->tmpVars[52] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[45] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */);
  TRACE_POP
}

/*
equation index: 1736
type: SIMPLE_ASSIGN
$res_LSJac66_17.$pDERLSJac66.dummyVarLSJac66 = (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3]) * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[1] - genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac66[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2]
*/
void TestGlider_eqFunction_1736(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1736};
  jacobian->resultVars[16] /* $res_LSJac66_17.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (jacobian->tmpVars[52] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[43] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */)) - jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac66[3] SEED_VAR */ - ((data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[51] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
$res_LSJac66_23.$pDERLSJac66.dummyVarLSJac66 = (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1]) * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[1] - genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac66[1] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2]
*/
void TestGlider_eqFunction_1737(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1737};
  jacobian->resultVars[22] /* $res_LSJac66_23.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */)) * (jacobian->tmpVars[52] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[43] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */)) - jacobian->seedVars[7] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac66[1] SEED_VAR */ - ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[51] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1738
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[3] = genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[3] - (genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s)
*/
void TestGlider_eqFunction_1738(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1738};
  jacobian->tmpVars[48] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[3])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[18] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[3] SEED_VAR */ - ((data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */))));
  TRACE_POP
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
$res_LSJac66_21.$pDERLSJac66.dummyVarLSJac66 = (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] - $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[3]
*/
void TestGlider_eqFunction_1739(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1739};
  jacobian->resultVars[20] /* $res_LSJac66_21.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (-0.04) * ((data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */)) + (0.04) * ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */)) + jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] SEED_VAR */ - jacobian->tmpVars[48] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[3])) JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1740
type: SIMPLE_ASSIGN
$res_LSJac66_1.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s + $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[1] + (-genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[1]) - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_1740(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1740};
  jacobian->resultVars[0] /* $res_LSJac66_1.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) + jacobian->tmpVars[50] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[1])) JACOBIAN_DIFF_VAR */ + (-jacobian->seedVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[1] SEED_VAR */) - ((data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
$res_LSJac66_14.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s + $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[2] + (-genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[2]) - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_1741(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1741};
  jacobian->resultVars[13] /* $res_LSJac66_14.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) + jacobian->tmpVars[49] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac66.dummyVarLSJac66[2])) JACOBIAN_DIFF_VAR */ + (-jacobian->seedVars[17] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac66[2] SEED_VAR */) - ((data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3]
*/
void TestGlider_eqFunction_1742(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1742};
  jacobian->tmpVars[46] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3]
*/
void TestGlider_eqFunction_1743(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1743};
  jacobian->tmpVars[47] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
$res_LSJac66_8.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac66.dummyVarLSJac66 + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac66.dummyVarLSJac66 + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac66.dummyVarLSJac66 - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[2]
*/
void TestGlider_eqFunction_1744(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1744};
  jacobian->resultVars[7] /* $res_LSJac66_8.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->tmpVars[39] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[47] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[46] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
$res_LSJac66_9.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac66.dummyVarLSJac66 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac66.dummyVarLSJac66 + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac66.dummyVarLSJac66 - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[1]
*/
void TestGlider_eqFunction_1745(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1745};
  jacobian->resultVars[8] /* $res_LSJac66_9.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[39] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[47] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[46] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
$res_LSJac66_10.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac66.dummyVarLSJac66 + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac66.dummyVarLSJac66 + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac66.dummyVarLSJac66 - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1746(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1746};
  jacobian->resultVars[9] /* $res_LSJac66_10.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->tmpVars[39] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[47] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[46] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac66[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
$res_LSJac66_2.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.hull.r_CM[3] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[1] + genericGlider_mass_explicit.hull.I[2,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] + genericGlider_mass_explicit.hull.I[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.hull.I[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + (-genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2]) - genericGlider_mass_explicit.hull.r_CM[1] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1747(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1747};
  jacobian->resultVars[1] /* $res_LSJac66_2.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (jacobian->seedVars[14] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[1] SEED_VAR */) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (-jacobian->tmpVars[32] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[3] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
$res_LSJac66_4.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.hull.r_CM[2] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[3] + genericGlider_mass_explicit.hull.I[1,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] + genericGlider_mass_explicit.hull.I[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.hull.I[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + (-genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1]) - genericGlider_mass_explicit.hull.r_CM[3] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[2]
*/
void TestGlider_eqFunction_1748(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1748};
  jacobian->resultVars[3] /* $res_LSJac66_4.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[3] SEED_VAR */) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (-jacobian->tmpVars[29] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[2] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
$res_LSJac66_5.$pDERLSJac66.dummyVarLSJac66 = (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] + genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] * genericGlider_mass_explicit.hull.r_CM[1] - genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] * genericGlider_mass_explicit.hull.r_CM[3]) * genericGlider_mass_explicit.hull.m - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[2]
*/
void TestGlider_eqFunction_1749(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1749};
  jacobian->resultVars[4] /* $res_LSJac66_5.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] SEED_VAR */) + (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) - ((jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1750
type: SIMPLE_ASSIGN
$res_LSJac66_11.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[3]) - genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[1]
*/
void TestGlider_eqFunction_1750(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1750};
  jacobian->resultVars[10] /* $res_LSJac66_11.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->seedVars[11] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[2] SEED_VAR */) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (-jacobian->tmpVars[34] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
$res_LSJac66_12.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1]) - genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[2]
*/
void TestGlider_eqFunction_1751(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1751};
  jacobian->resultVars[11] /* $res_LSJac66_12.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[3] SEED_VAR */) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (-jacobian->tmpVars[28] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->seedVars[11] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[2] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
$res_LSJac66_13.$pDERLSJac66.dummyVarLSJac66 = (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] + genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] - genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3]) * genericGlider_mass_explicit.actuators.bodyVariableMass.m - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[2]
*/
void TestGlider_eqFunction_1752(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1752};
  jacobian->resultVars[12] /* $res_LSJac66_13.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] SEED_VAR */) + (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) - ((jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - jacobian->seedVars[11] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
$res_LSJac66_15.$pDERLSJac66.dummyVarLSJac66 = (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] * genericGlider_mass_explicit.hull.r_CM[3] - genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] * genericGlider_mass_explicit.hull.r_CM[2]) * genericGlider_mass_explicit.hull.m - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[1]
*/
void TestGlider_eqFunction_1753(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1753};
  jacobian->resultVars[14] /* $res_LSJac66_15.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] SEED_VAR */) + (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) - ((jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - jacobian->seedVars[14] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
$res_LSJac66_19.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2]) - genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1754(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1754};
  jacobian->resultVars[18] /* $res_LSJac66_19.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[1] SEED_VAR */) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) + (data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[1] SEED_VAR */) + (-jacobian->tmpVars[31] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[3] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1755
type: SIMPLE_ASSIGN
$res_LSJac66_20.$pDERLSJac66.dummyVarLSJac66 = (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] - genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2]) * genericGlider_mass_explicit.actuators.bodyVariableMass.m - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[1]
*/
void TestGlider_eqFunction_1755(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1755};
  jacobian->resultVars[19] /* $res_LSJac66_20.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] SEED_VAR */) + (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac66[2] SEED_VAR */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) - ((jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3]
*/
void TestGlider_eqFunction_1756(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1756};
  jacobian->tmpVars[2] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[1] SEED_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[2] SEED_VAR */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac66[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[1] = (-genericGlider_mass_explicit.addedMassForcesTorques.X_udot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[1]
*/
void TestGlider_eqFunction_1757(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1757};
  jacobian->tmpVars[5] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */)) * (jacobian->tmpVars[2] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[1] = genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[1] - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[1]
*/
void TestGlider_eqFunction_1758(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1758};
  jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[14] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac66[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[1] = genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[1]
*/
void TestGlider_eqFunction_1759(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1759};
  jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac66[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1760
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2] = genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.SeedLSJac66[2] + (-0.04) * genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[1]
*/
void TestGlider_eqFunction_1760(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1760};
  jacobian->tmpVars[30] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[5] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.SeedLSJac66[2] SEED_VAR */ + (-0.04) * (jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1761
type: SIMPLE_ASSIGN
$res_LSJac66_18.$pDERLSJac66.dummyVarLSJac66 = (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2]) * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[1] - genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2]
*/
void TestGlider_eqFunction_1761(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1761};
  jacobian->resultVars[17] /* $res_LSJac66_18.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (jacobian->tmpVars[52] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[43] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[30] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->tmpVars[51] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1762
type: SIMPLE_ASSIGN
$res_LSJac66_16.$pDERLSJac66.dummyVarLSJac66 = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 + (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[1]
*/
void TestGlider_eqFunction_1762(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1762};
  jacobian->resultVars[15] /* $res_LSJac66_16.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_VAR */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac66.dummyVarLSJac66 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac66.dummyVarLSJac66[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac66.dummyVarLSJac66[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TestGlider_functionJacLSJac66_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_LSJac66;
  
  
  TRACE_POP
  return 0;
}

int TestGlider_functionJacLSJac66_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_LSJac66;
  TestGlider_eqFunction_1699(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1700(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1701(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1702(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1703(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1704(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1705(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1706(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1707(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1708(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1709(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1710(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1711(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1712(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1713(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1714(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1715(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1716(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1717(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1718(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1719(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1720(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1721(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1722(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1723(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1724(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1725(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1726(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1727(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1728(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1729(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1730(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1731(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1732(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1733(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1734(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1735(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1736(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1737(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1738(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1739(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1740(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1741(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1742(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1743(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1744(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1745(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1746(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1747(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1748(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1749(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1750(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1751(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1752(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1753(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1754(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1755(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1756(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1757(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1758(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1759(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1760(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1761(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_1762(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 3586
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] = 4.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4])
*/
void TestGlider_eqFunction_3586(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3586};
  jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] SEED_VAR */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3587
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[3,3] = 4.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4])
*/
void TestGlider_eqFunction_3587(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3587};
  jacobian->tmpVars[1] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[3,3] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] SEED_VAR */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3588
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] = 4.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4])
*/
void TestGlider_eqFunction_3588(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3588};
  jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] SEED_VAR */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3589
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_3589(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3589};
  jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] SEED_VAR */) + (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] SEED_VAR */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] SEED_VAR */) + (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] SEED_VAR */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3590
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_3590(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3590};
  jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] SEED_VAR */) + (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] SEED_VAR */) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + ((-data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */)) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] SEED_VAR */) - ((jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] SEED_VAR */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3591
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_3591(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3591};
  jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] SEED_VAR */) + (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] SEED_VAR */) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] SEED_VAR */) + (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] SEED_VAR */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3592
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[3,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_3592(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3592};
  jacobian->tmpVars[6] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[3,2] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] SEED_VAR */) + (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] SEED_VAR */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + ((-data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */)) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] SEED_VAR */) - ((jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] SEED_VAR */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3593
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_3593(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3593};
  jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] SEED_VAR */) + (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] SEED_VAR */) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + ((-data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */)) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] SEED_VAR */) - ((jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] SEED_VAR */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3594
type: SIMPLE_ASSIGN
$res_NLSJac67_1.$pDERNLSJac67.dummyVarNLSJac67 = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4])
*/
void TestGlider_eqFunction_3594(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3594};
  jacobian->resultVars[0] /* $res_NLSJac67_1.$pDERNLSJac67.dummyVarNLSJac67 JACOBIAN_VAR */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[1] SEED_VAR */) + (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[2] SEED_VAR */) + (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[3] SEED_VAR */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac67[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3595
type: SIMPLE_ASSIGN
$res_NLSJac67_2.$pDERNLSJac67.dummyVarNLSJac67 = if noEvent(genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08 == 0.0) then genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08 else (((genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2])) * (-9.999999983333334e-05) + (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3])) * 0.9999994950000443 + (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1])) * 0.0009999998283333426) * (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08) - ((genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] - genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 0.0009999998283333426) * (genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] * 9.999998316666754e-08)) / ((genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08) ^ 2.0 * (1.0 + (((genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] - genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 0.0009999998283333426) / (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08)) ^ 2.0))
*/
void TestGlider_eqFunction_3595(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3595};
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp18 = (modelica_boolean)((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08) == 0.0);
  if(tmp18)
  {
    tmp19 = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08);
  }
  else
  {
    tmp16 = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08);
    tmp17 = DIVISION(((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426),(data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08),"genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08");
    tmp19 = DIVISION((((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426)) * ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08)) - ((((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426)) * ((jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] JACOBIAN_DIFF_VAR */) * (0.999999995) + (jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] JACOBIAN_DIFF_VAR */) * (9.99999498333376e-05) + (jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] JACOBIAN_DIFF_VAR */) * (9.999998316666754e-08))),((tmp16 * tmp16)) * (1.0 + (tmp17 * tmp17)),"(genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08) ^ 2.0 * (1.0 + (((genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] - genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 0.0009999998283333426) / (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * 9.999998316666754e-08)) ^ 2.0)");
  }
  jacobian->resultVars[1] /* $res_NLSJac67_2.$pDERNLSJac67.dummyVarNLSJac67 JACOBIAN_VAR */ = tmp19;
  TRACE_POP
}

/*
equation index: 3596
type: SIMPLE_ASSIGN
$res_NLSJac67_3.$pDERNLSJac67.dummyVarNLSJac67 = if noEvent(genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417 == 0.0) then genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417 else ((genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] * 9.999998316666754e-08) * (genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417) - (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 9.999998316666754e-08) * (genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[3,3] * 0.9999995000000417)) / ((genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417) ^ 2.0 * (1.0 + ((genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 9.999998316666754e-08) / (genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417)) ^ 2.0))
*/
void TestGlider_eqFunction_3596(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3596};
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  tmp23 = (modelica_boolean)((data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417) == 0.0);
  if(tmp23)
  {
    tmp24 = (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417);
  }
  else
  {
    tmp21 = (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417);
    tmp22 = DIVISION((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (9.999998316666754e-08),(data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417),"genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417");
    tmp24 = DIVISION(((jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] JACOBIAN_DIFF_VAR */) * (0.999999995) + (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] JACOBIAN_DIFF_VAR */) * (9.99999498333376e-05) + (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] JACOBIAN_DIFF_VAR */) * (9.999998316666754e-08)) * ((data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417)) - (((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (9.999998316666754e-08)) * ((jacobian->tmpVars[6] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[3,2] JACOBIAN_DIFF_VAR */) * (-0.0009999998333333417) + (jacobian->tmpVars[1] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[3,3] JACOBIAN_DIFF_VAR */) * (0.9999995000000417))),((tmp21 * tmp21)) * (1.0 + (tmp22 * tmp22)),"(genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417) ^ 2.0 * (1.0 + ((genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * 0.999999995 + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 9.999998316666754e-08) / (genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * 0.9999995000000417)) ^ 2.0)");
  }
  jacobian->resultVars[2] /* $res_NLSJac67_3.$pDERNLSJac67.dummyVarNLSJac67 JACOBIAN_VAR */ = tmp24;
  TRACE_POP
}

/*
equation index: 3597
type: SIMPLE_ASSIGN
$res_NLSJac67_4.$pDERNLSJac67.dummyVarNLSJac67 = if noEvent(genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426 == 0.0) then genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426 else (((genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1])) * 9.99999498333376e-05 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1])) * 9.999998316666754e-08 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - (genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2])) * 0.999999995) * (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426) - ((genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * 0.999999995) * (genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] * 0.0009999998283333426)) / ((genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426) ^ 2.0 * (1.0 + (((genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * 0.999999995) / (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426)) ^ 2.0))
*/
void TestGlider_eqFunction_3597(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3597};
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  tmp28 = (modelica_boolean)((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426) == 0.0);
  if(tmp28)
  {
    tmp29 = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426);
  }
  else
  {
    tmp26 = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426);
    tmp27 = DIVISION(((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (0.999999995)),(data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426),"genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426");
    tmp29 = DIVISION((((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[4] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (0.999999995))) * ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426)) - ((((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (0.999999995))) * ((jacobian->tmpVars[7] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,1] JACOBIAN_DIFF_VAR */) * (-9.999999983333334e-05) + (jacobian->tmpVars[2] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,2] JACOBIAN_DIFF_VAR */) * (0.9999994950000443) + (jacobian->tmpVars[5] /* genericGlider_mass_explicit.hull.frame_a.R.T.$pDERNLSJac67.dummyVarNLSJac67[2,3] JACOBIAN_DIFF_VAR */) * (0.0009999998283333426))),((tmp26 * tmp26)) * (1.0 + (tmp27 * tmp27)),"(genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426) ^ 2.0 * (1.0 + (((genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] - genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * 0.999999995) / (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * 0.9999994950000443 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * 0.0009999998283333426)) ^ 2.0)");
  }
  jacobian->resultVars[3] /* $res_NLSJac67_4.$pDERNLSJac67.dummyVarNLSJac67 JACOBIAN_VAR */ = tmp29;
  TRACE_POP
}

OMC_DISABLE_OPT
int TestGlider_functionJacNLSJac67_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_NLSJac67;
  
  
  TRACE_POP
  return 0;
}

int TestGlider_functionJacNLSJac67_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_NLSJac67;
  TestGlider_eqFunction_3586(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3587(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3588(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3589(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3590(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3591(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3592(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3593(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3594(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3595(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3596(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3597(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 3940
type: SIMPLE_ASSIGN
$res_LSJac68_6.$pDERLSJac68.dummyVarLSJac68 = (genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] - genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1]) * genericGlider_mass_explicit.actuators.bodyVariableMass.m - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3940(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3940};
  jacobian->resultVars[5] /* $res_LSJac68_6.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] SEED_VAR */) + (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) - ((jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3941
type: SIMPLE_ASSIGN
$res_LSJac68_3.$pDERLSJac68.dummyVarLSJac68 = (genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] * genericGlider_mass_explicit.hull.r_CM[2] - genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] * genericGlider_mass_explicit.hull.r_CM[1]) * genericGlider_mass_explicit.hull.m - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3941(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3941};
  jacobian->resultVars[2] /* $res_LSJac68_3.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] SEED_VAR */) + (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) - ((jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3942
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[1] = genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1]
*/
void TestGlider_eqFunction_3942(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3942};
  jacobian->tmpVars[50] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[1])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] SEED_VAR */ + (0.04) * ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */)) + (-0.04) * ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3943
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[2] = genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1]
*/
void TestGlider_eqFunction_3943(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3943};
  jacobian->tmpVars[49] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[2])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] SEED_VAR */ + (0.04) * ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */)) + (-0.04) * ((data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3944
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[3] = genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3944(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3944};
  jacobian->tmpVars[34] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[3] SEED_VAR */ - jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac68[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3945
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2] = genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[2] - genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.SeedLSJac68[2]
*/
void TestGlider_eqFunction_3945(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3945};
  jacobian->tmpVars[31] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[4] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[2] SEED_VAR */ - jacobian->seedVars[5] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.SeedLSJac68[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3946
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[1] = (-genericGlider_mass_explicit.addedMassForcesTorques.K_pdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[1]
*/
void TestGlider_eqFunction_3946(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3946};
  jacobian->tmpVars[25] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */)) * (jacobian->seedVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3947
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1] = genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[1] - genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[1]
*/
void TestGlider_eqFunction_3947(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3947};
  jacobian->tmpVars[29] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[25] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[6] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3948
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3948(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3948};
  jacobian->tmpVars[4] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3949
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[2] = (-genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.addedMassForcesTorques.M_qdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[2]
*/
void TestGlider_eqFunction_3949(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3949};
  jacobian->tmpVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->tmpVars[4] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */) * (jacobian->seedVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[2] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3950
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2] = genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[2]
*/
void TestGlider_eqFunction_3950(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3950};
  jacobian->tmpVars[32] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[4] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3951
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[3] = (-genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[2] - genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[3]
*/
void TestGlider_eqFunction_3951(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3951};
  jacobian->tmpVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->seedVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[2] SEED_VAR */) - ((data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * (jacobian->tmpVars[4] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3952
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[3] = genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3952(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3952};
  jacobian->tmpVars[23] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3953
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[3] = genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3953(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3953};
  jacobian->tmpVars[24] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[23] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3954
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3954(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3954};
  jacobian->tmpVars[3] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3955
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[2] = (-genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[2]
*/
void TestGlider_eqFunction_3955(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3955};
  jacobian->tmpVars[11] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */)) * (jacobian->seedVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[3] SEED_VAR */) - ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * (jacobian->tmpVars[3] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3956
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[2] = genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[2]
*/
void TestGlider_eqFunction_3956(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3956};
  jacobian->tmpVars[21] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3957
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[2] = genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[2]
*/
void TestGlider_eqFunction_3957(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3957};
  jacobian->tmpVars[22] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[21] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[11] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3958
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1] = genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac68[1] - 0.04 * genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[2]
*/
void TestGlider_eqFunction_3958(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3958};
  jacobian->tmpVars[27] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[7] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac68[1] SEED_VAR */ - ((0.04) * (jacobian->tmpVars[22] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3959
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1] = genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[1] - genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1]
*/
void TestGlider_eqFunction_3959(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3959};
  jacobian->tmpVars[28] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[6] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[1] SEED_VAR */ - jacobian->tmpVars[27] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3960
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[3] = (-genericGlider_mass_explicit.addedMassForcesTorques.N_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[2]
*/
void TestGlider_eqFunction_3960(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3960};
  jacobian->tmpVars[12] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */)) * (jacobian->seedVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[3] SEED_VAR */) - ((data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * (jacobian->tmpVars[3] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3961
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[3] = genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3961(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3961};
  jacobian->tmpVars[33] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[12] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac68[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3962
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] = (genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[3] - (genericGlider_mass_explicit.hull.I[3,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + genericGlider_mass_explicit.hull.I[3,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.hull.r_CM[1] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[2] - genericGlider_mass_explicit.hull.r_CM[2] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[1])) / genericGlider_mass_explicit.hull.I[3,3]
*/
void TestGlider_eqFunction_3962(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3962};
  jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[33] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[2] SEED_VAR */) - ((data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (jacobian->seedVars[14] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[1] SEED_VAR */))),data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */,"genericGlider_mass_explicit.hull.I[3,3]");
  TRACE_POP
}

/*
equation index: 3963
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3]
*/
void TestGlider_eqFunction_3963(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3963};
  jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3964
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3]
*/
void TestGlider_eqFunction_3964(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3964};
  jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3965
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] = (genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[3] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[2] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[1]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_3965(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3965};
  jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) - ((jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */)) - ((data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[18] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[3] SEED_VAR */)) - ((data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[17] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[2] SEED_VAR */)) - ((data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * (jacobian->seedVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[1] SEED_VAR */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 3966
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3]
*/
void TestGlider_eqFunction_3966(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3966};
  jacobian->tmpVars[39] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3967
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3]
*/
void TestGlider_eqFunction_3967(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3967};
  jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3968
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] = (genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[3] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[2] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[1]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_3968(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3968};
  jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */)) - ((data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[18] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[3] SEED_VAR */)) - ((data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[17] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[2] SEED_VAR */)) - ((data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * (jacobian->seedVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[1] SEED_VAR */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 3969
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 = (genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[3] + genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_3969(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3969};
  jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (jacobian->seedVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[17] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[18] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[3] SEED_VAR */) + (jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 3970
type: SIMPLE_ASSIGN
$res_LSJac68_7.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 + (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[3]
*/
void TestGlider_eqFunction_3970(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3970};
  jacobian->resultVars[6] /* $res_LSJac68_7.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[24] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3971
type: SIMPLE_ASSIGN
$res_LSJac68_22.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 + (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[2]
*/
void TestGlider_eqFunction_3971(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3971};
  jacobian->resultVars[21] /* $res_LSJac68_22.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[22] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3972
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[1] = genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1]
*/
void TestGlider_eqFunction_3972(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3972};
  jacobian->tmpVars[43] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3973
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2] = (-genericGlider_mass_explicit.actuators.body_rolling.r_CM[3]) * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 - genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1]
*/
void TestGlider_eqFunction_3973(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3973};
  jacobian->tmpVars[44] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */)) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3974
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_3974(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3974};
  jacobian->tmpVars[51] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[44] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */));
  TRACE_POP
}

/*
equation index: 3975
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] = genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] + genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 - genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1]
*/
void TestGlider_eqFunction_3975(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3975};
  jacobian->tmpVars[45] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3976
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] + genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_3976(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3976};
  jacobian->tmpVars[52] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[45] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */);
  TRACE_POP
}

/*
equation index: 3977
type: SIMPLE_ASSIGN
$res_LSJac68_17.$pDERLSJac68.dummyVarLSJac68 = (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3]) * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[1] - genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac68[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2]
*/
void TestGlider_eqFunction_3977(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3977};
  jacobian->resultVars[16] /* $res_LSJac68_17.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (jacobian->tmpVars[52] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[43] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */)) - jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac68[3] SEED_VAR */ - ((data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[51] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3978
type: SIMPLE_ASSIGN
$res_LSJac68_23.$pDERLSJac68.dummyVarLSJac68 = (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1]) * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[1] - genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac68[1] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2]
*/
void TestGlider_eqFunction_3978(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3978};
  jacobian->resultVars[22] /* $res_LSJac68_23.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */)) * (jacobian->tmpVars[52] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[43] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */)) - jacobian->seedVars[7] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac68[1] SEED_VAR */ - ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[51] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3979
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[3] = genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[3] - (genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s)
*/
void TestGlider_eqFunction_3979(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3979};
  jacobian->tmpVars[48] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[3])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[18] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[3] SEED_VAR */ - ((data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */))));
  TRACE_POP
}

/*
equation index: 3980
type: SIMPLE_ASSIGN
$res_LSJac68_21.$pDERLSJac68.dummyVarLSJac68 = (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] - $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[3]
*/
void TestGlider_eqFunction_3980(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3980};
  jacobian->resultVars[20] /* $res_LSJac68_21.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (-0.04) * ((data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */)) + (0.04) * ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */)) + jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] SEED_VAR */ - jacobian->tmpVars[48] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[3])) JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3981
type: SIMPLE_ASSIGN
$res_LSJac68_1.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s + $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[1] + (-genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[1]) - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_3981(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3981};
  jacobian->resultVars[0] /* $res_LSJac68_1.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) + jacobian->tmpVars[50] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[1])) JACOBIAN_DIFF_VAR */ + (-jacobian->seedVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[1] SEED_VAR */) - ((data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 3982
type: SIMPLE_ASSIGN
$res_LSJac68_14.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s + $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[2] + (-genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[2]) - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_3982(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3982};
  jacobian->resultVars[13] /* $res_LSJac68_14.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((jacobian->tmpVars[40] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) + jacobian->tmpVars[49] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac68.dummyVarLSJac68[2])) JACOBIAN_DIFF_VAR */ + (-jacobian->seedVars[17] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.SeedLSJac68[2] SEED_VAR */) - ((data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 3983
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3]
*/
void TestGlider_eqFunction_3983(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3983};
  jacobian->tmpVars[46] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3984
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3]
*/
void TestGlider_eqFunction_3984(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3984};
  jacobian->tmpVars[47] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3985
type: SIMPLE_ASSIGN
$res_LSJac68_8.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac68.dummyVarLSJac68 + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac68.dummyVarLSJac68 + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac68.dummyVarLSJac68 - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[2]
*/
void TestGlider_eqFunction_3985(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3985};
  jacobian->resultVars[7] /* $res_LSJac68_8.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->tmpVars[39] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[47] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[46] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3986
type: SIMPLE_ASSIGN
$res_LSJac68_9.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac68.dummyVarLSJac68 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac68.dummyVarLSJac68 + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac68.dummyVarLSJac68 - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[1]
*/
void TestGlider_eqFunction_3986(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3986};
  jacobian->resultVars[8] /* $res_LSJac68_9.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[39] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[47] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[46] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3987
type: SIMPLE_ASSIGN
$res_LSJac68_10.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac68.dummyVarLSJac68 + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac68.dummyVarLSJac68 + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac68.dummyVarLSJac68 - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3987(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3987};
  jacobian->resultVars[9] /* $res_LSJac68_10.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->tmpVars[39] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[47] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[46] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac68[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3988
type: SIMPLE_ASSIGN
$res_LSJac68_2.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.hull.r_CM[3] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[1] + genericGlider_mass_explicit.hull.I[2,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] + genericGlider_mass_explicit.hull.I[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.hull.I[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + (-genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2]) - genericGlider_mass_explicit.hull.r_CM[1] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3988(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3988};
  jacobian->resultVars[1] /* $res_LSJac68_2.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (jacobian->seedVars[14] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[1] SEED_VAR */) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (-jacobian->tmpVars[32] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[3] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3989
type: SIMPLE_ASSIGN
$res_LSJac68_4.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.hull.r_CM[2] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[3] + genericGlider_mass_explicit.hull.I[1,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] + genericGlider_mass_explicit.hull.I[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.hull.I[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + (-genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1]) - genericGlider_mass_explicit.hull.r_CM[3] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[2]
*/
void TestGlider_eqFunction_3989(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3989};
  jacobian->resultVars[3] /* $res_LSJac68_4.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[3] SEED_VAR */) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (-jacobian->tmpVars[29] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[2] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3990
type: SIMPLE_ASSIGN
$res_LSJac68_5.$pDERLSJac68.dummyVarLSJac68 = (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] + genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] * genericGlider_mass_explicit.hull.r_CM[1] - genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] * genericGlider_mass_explicit.hull.r_CM[3]) * genericGlider_mass_explicit.hull.m - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[2]
*/
void TestGlider_eqFunction_3990(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3990};
  jacobian->resultVars[4] /* $res_LSJac68_5.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] SEED_VAR */) + (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) - ((jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3991
type: SIMPLE_ASSIGN
$res_LSJac68_11.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[3]) - genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[1]
*/
void TestGlider_eqFunction_3991(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3991};
  jacobian->resultVars[10] /* $res_LSJac68_11.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->seedVars[11] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[2] SEED_VAR */) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (-jacobian->tmpVars[34] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3992
type: SIMPLE_ASSIGN
$res_LSJac68_12.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1]) - genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[2]
*/
void TestGlider_eqFunction_3992(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3992};
  jacobian->resultVars[11] /* $res_LSJac68_12.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[3] SEED_VAR */) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (-jacobian->tmpVars[28] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->seedVars[11] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[2] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3993
type: SIMPLE_ASSIGN
$res_LSJac68_13.$pDERLSJac68.dummyVarLSJac68 = (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] + genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] - genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3]) * genericGlider_mass_explicit.actuators.bodyVariableMass.m - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[2]
*/
void TestGlider_eqFunction_3993(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3993};
  jacobian->resultVars[12] /* $res_LSJac68_13.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] SEED_VAR */) + (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) - ((jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - jacobian->seedVars[11] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3994
type: SIMPLE_ASSIGN
$res_LSJac68_15.$pDERLSJac68.dummyVarLSJac68 = (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] * genericGlider_mass_explicit.hull.r_CM[3] - genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] * genericGlider_mass_explicit.hull.r_CM[2]) * genericGlider_mass_explicit.hull.m - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[1]
*/
void TestGlider_eqFunction_3994(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3994};
  jacobian->resultVars[14] /* $res_LSJac68_15.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] SEED_VAR */) + (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) - ((jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - jacobian->seedVars[14] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3995
type: SIMPLE_ASSIGN
$res_LSJac68_19.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] * genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2]) - genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3995(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3995};
  jacobian->resultVars[18] /* $res_LSJac68_19.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[1] SEED_VAR */) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) + (data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[1] SEED_VAR */) + (-jacobian->tmpVars[31] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[3] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3996
type: SIMPLE_ASSIGN
$res_LSJac68_20.$pDERLSJac68.dummyVarLSJac68 = (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] - genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2]) * genericGlider_mass_explicit.actuators.bodyVariableMass.m - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[1]
*/
void TestGlider_eqFunction_3996(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3996};
  jacobian->resultVars[19] /* $res_LSJac68_20.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] SEED_VAR */) + (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac68[2] SEED_VAR */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) - ((jacobian->tmpVars[35] /* genericGlider_mass_explicit.hull.z_a.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3997
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3]
*/
void TestGlider_eqFunction_3997(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3997};
  jacobian->tmpVars[2] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[20] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[1] SEED_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[21] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[2] SEED_VAR */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[22] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac68[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3998
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[1] = (-genericGlider_mass_explicit.addedMassForcesTorques.X_udot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[1]
*/
void TestGlider_eqFunction_3998(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3998};
  jacobian->tmpVars[5] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */)) * (jacobian->tmpVars[2] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3999
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[1] = genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[1] - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[1]
*/
void TestGlider_eqFunction_3999(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3999};
  jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[14] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac68[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4000
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[1] = genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[1]
*/
void TestGlider_eqFunction_4000(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4000};
  jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac68[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4001
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2] = genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.SeedLSJac68[2] + (-0.04) * genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[1]
*/
void TestGlider_eqFunction_4001(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4001};
  jacobian->tmpVars[30] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[5] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.SeedLSJac68[2] SEED_VAR */ + (-0.04) * (jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 4002
type: SIMPLE_ASSIGN
$res_LSJac68_18.$pDERLSJac68.dummyVarLSJac68 = (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2]) * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[1] - genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2]
*/
void TestGlider_eqFunction_4002(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4002};
  jacobian->resultVars[17] /* $res_LSJac68_18.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (jacobian->tmpVars[52] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[43] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[30] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->tmpVars[51] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4003
type: SIMPLE_ASSIGN
$res_LSJac68_16.$pDERLSJac68.dummyVarLSJac68 = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 + (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[1]
*/
void TestGlider_eqFunction_4003(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4003};
  jacobian->resultVars[15] /* $res_LSJac68_16.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_VAR */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac68.dummyVarLSJac68 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac68.dummyVarLSJac68[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac68.dummyVarLSJac68[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TestGlider_functionJacLSJac68_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_LSJac68;
  
  
  TRACE_POP
  return 0;
}

int TestGlider_functionJacLSJac68_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_LSJac68;
  TestGlider_eqFunction_3940(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3941(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3942(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3943(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3944(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3945(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3946(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3947(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3948(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3949(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3950(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3951(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3952(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3953(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3954(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3955(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3956(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3957(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3958(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3959(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3960(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3961(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3962(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3963(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3964(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3965(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3966(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3967(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3968(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3969(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3970(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3971(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3972(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3973(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3974(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3975(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3976(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3977(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3978(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3979(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3980(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3981(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3982(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3983(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3984(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3985(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3986(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3987(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3988(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3989(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3990(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3991(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3992(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3993(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3994(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3995(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3996(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3997(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3998(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_3999(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4000(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4001(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4002(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4003(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 4546
type: SIMPLE_ASSIGN
$res_NLSJac69_1.$pDERNLSJac69.dummyVarNLSJac69 = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[4])
*/
void TestGlider_eqFunction_4546(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4546};
  jacobian->resultVars[0] /* $res_NLSJac69_1.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[1] SEED_VAR */) + (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[2] SEED_VAR */) + (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[3] SEED_VAR */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4547
type: SIMPLE_ASSIGN
$res_NLSJac69_2.$pDERNLSJac69.dummyVarNLSJac69 = (*Real*)($STATESET1.A[1,4]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[1] + (*Real*)($STATESET1.A[1,3]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[2] + (*Real*)($STATESET1.A[1,2]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[3] + (*Real*)($STATESET1.A[1,1]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[4]
*/
void TestGlider_eqFunction_4547(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4547};
  jacobian->resultVars[1] /* $res_NLSJac69_2.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = (((modelica_real)data->localData[0]->integerVars[3] /* $STATESET1.A[1,4] variable */)) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[1] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[2] /* $STATESET1.A[1,3] variable */)) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[2] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[1] /* $STATESET1.A[1,2] variable */)) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[3] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[0] /* $STATESET1.A[1,1] variable */)) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[4] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4548
type: SIMPLE_ASSIGN
$res_NLSJac69_3.$pDERNLSJac69.dummyVarNLSJac69 = (*Real*)($STATESET1.A[2,4]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[1] + (*Real*)($STATESET1.A[2,3]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[2] + (*Real*)($STATESET1.A[2,2]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[3] + (*Real*)($STATESET1.A[2,1]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[4]
*/
void TestGlider_eqFunction_4548(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4548};
  jacobian->resultVars[2] /* $res_NLSJac69_3.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = (((modelica_real)data->localData[0]->integerVars[7] /* $STATESET1.A[2,4] variable */)) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[1] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[6] /* $STATESET1.A[2,3] variable */)) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[2] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[5] /* $STATESET1.A[2,2] variable */)) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[3] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[4] /* $STATESET1.A[2,1] variable */)) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[4] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4549
type: SIMPLE_ASSIGN
$res_NLSJac69_4.$pDERNLSJac69.dummyVarNLSJac69 = (*Real*)($STATESET1.A[3,4]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[1] + (*Real*)($STATESET1.A[3,3]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[2] + (*Real*)($STATESET1.A[3,2]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[3] + (*Real*)($STATESET1.A[3,1]) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[4]
*/
void TestGlider_eqFunction_4549(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4549};
  jacobian->resultVars[3] /* $res_NLSJac69_4.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = (((modelica_real)data->localData[0]->integerVars[11] /* $STATESET1.A[3,4] variable */)) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[1] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[10] /* $STATESET1.A[3,3] variable */)) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[2] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[9] /* $STATESET1.A[3,2] variable */)) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[3] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[8] /* $STATESET1.A[3,1] variable */)) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedNLSJac69[4] SEED_VAR */);
  TRACE_POP
}

OMC_DISABLE_OPT
int TestGlider_functionJacNLSJac69_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_NLSJac69;
  
  
  TRACE_POP
  return 0;
}

int TestGlider_functionJacNLSJac69_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_NLSJac69;
  TestGlider_eqFunction_4546(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4547(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4548(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4549(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 4852
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[1] = (-genericGlider_mass_explicit.addedMassForcesTorques.K_pdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4852};
  jacobian->tmpVars[0] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */)) * (jacobian->seedVars[17] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac70[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4853
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] = genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[1] - genericGlider_mass_explicit.hull.frame_a.t.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4853(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4853};
  jacobian->tmpVars[1] /* genericGlider_mass_explicit.actuators.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[0] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[16] /* genericGlider_mass_explicit.hull.frame_a.t.SeedLSJac70[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4854
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] = genericGlider_mass_explicit.actuators.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4854(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4854};
  jacobian->tmpVars[2] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* genericGlider_mass_explicit.actuators.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[15] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.SeedLSJac70[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4855
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] = genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] + 0.04 * genericGlider_mass_explicit.actuators.revolute.frame_a.f.SeedLSJac70[2]
*/
void TestGlider_eqFunction_4855(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4855};
  jacobian->tmpVars[3] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[2] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ + (0.04) * (jacobian->seedVars[14] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.SeedLSJac70[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4856
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[2] = genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[2] + genericGlider_mass_explicit.actuators.revolute.frame_a.f.SeedLSJac70[2]
*/
void TestGlider_eqFunction_4856(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4856};
  jacobian->tmpVars[4] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[2] SEED_VAR */ + jacobian->seedVars[14] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.SeedLSJac70[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4857
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[2] = genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[2]
*/
void TestGlider_eqFunction_4857(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4857};
  jacobian->tmpVars[5] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4858
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[1] = (-genericGlider_mass_explicit.addedMassForcesTorques.X_udot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4858(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4858};
  jacobian->tmpVars[6] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */)) * (jacobian->seedVars[11] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.SeedLSJac70[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4859
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[1] = genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[1] - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4859(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4859};
  jacobian->tmpVars[7] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4860
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac70.dummyVarLSJac70[1] = genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4860(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4860};
  jacobian->tmpVars[8] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4861
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac70.dummyVarLSJac70[2] = genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac70[2] - (-0.04) * genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac70.dummyVarLSJac70[1]
*/
void TestGlider_eqFunction_4861(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4861};
  jacobian->tmpVars[9] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[8] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac70[2] SEED_VAR */ - ((-0.04) * (jacobian->tmpVars[8] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4862
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac70.dummyVarLSJac70[2] = genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac70[2] - genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac70.dummyVarLSJac70[2]
*/
void TestGlider_eqFunction_4862(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4862};
  jacobian->tmpVars[10] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[7] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac70[2] SEED_VAR */ - jacobian->tmpVars[9] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4863
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[2] = genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.t.SeedLSJac70[2]
*/
void TestGlider_eqFunction_4863(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4863};
  jacobian->tmpVars[11] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[7] /* genericGlider_mass_explicit.actuators.frame_a.t.SeedLSJac70[2] SEED_VAR */ + jacobian->seedVars[6] /* genericGlider_mass_explicit.hull.frame_a.t.SeedLSJac70[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4864
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[2] - genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4864(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4864};
  jacobian->tmpVars[12] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */) + (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[2] SEED_VAR */) - ((data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4865
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.hull.I[3,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + genericGlider_mass_explicit.hull.I[3,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.hull.I[3,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] + genericGlider_mass_explicit.hull.r_CM[1] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[2] - genericGlider_mass_explicit.hull.r_CM[2] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4865(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4865};
  jacobian->tmpVars[13] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */) + (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[2] SEED_VAR */) - ((data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4866
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3]
*/
void TestGlider_eqFunction_4866(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4866};
  jacobian->tmpVars[14] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4867
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3]
*/
void TestGlider_eqFunction_4867(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4867};
  jacobian->tmpVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4868
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3]
*/
void TestGlider_eqFunction_4868(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4868};
  jacobian->tmpVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4869
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac70.dummyVarLSJac70 + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac70.dummyVarLSJac70 + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac70.dummyVarLSJac70
*/
void TestGlider_eqFunction_4869(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4869};
  jacobian->tmpVars[17] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->tmpVars[14] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 4870
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac70.dummyVarLSJac70 + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac70.dummyVarLSJac70 + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac70.dummyVarLSJac70
*/
void TestGlider_eqFunction_4870(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4870};
  jacobian->tmpVars[18] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->tmpVars[14] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 4871
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3]
*/
void TestGlider_eqFunction_4871(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4871};
  jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4872
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3]
*/
void TestGlider_eqFunction_4872(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4872};
  jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4873
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3]
*/
void TestGlider_eqFunction_4873(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4873};
  jacobian->tmpVars[21] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4874
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[1] = genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4874(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4874};
  jacobian->tmpVars[22] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[1])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[2] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] SEED_VAR */ + (0.04) * ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */)) + (-0.04) * ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4875
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[1] = $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4875(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4875};
  jacobian->tmpVars[23] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[22] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[1])) JACOBIAN_DIFF_VAR */ + (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 4876
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4876(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4876};
  jacobian->tmpVars[24] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[3])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] SEED_VAR */ + (0.04) * ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */)) + (-0.04) * ((data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4877
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[3] = $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[3] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4877(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4877};
  jacobian->tmpVars[25] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[24] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[3])) JACOBIAN_DIFF_VAR */ + (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 4878
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] = (genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] * genericGlider_mass_explicit.hull.r_CM[2] - genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] * genericGlider_mass_explicit.hull.r_CM[1]) * genericGlider_mass_explicit.hull.m
*/
void TestGlider_eqFunction_4878(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4878};
  jacobian->tmpVars[26] /* genericGlider_mass_explicit.hull.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] SEED_VAR */) + (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) - ((jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */);
  TRACE_POP
}

/*
equation index: 4879
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] = (genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] - genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1]) * genericGlider_mass_explicit.actuators.bodyVariableMass.m
*/
void TestGlider_eqFunction_4879(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4879};
  jacobian->tmpVars[27] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] SEED_VAR */) + (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) - ((jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */);
  TRACE_POP
}

/*
equation index: 4880
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3]
*/
void TestGlider_eqFunction_4880(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4880};
  jacobian->tmpVars[28] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4881
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3]
*/
void TestGlider_eqFunction_4881(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4881};
  jacobian->tmpVars[29] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4882
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[2] = genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4882(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4882};
  jacobian->tmpVars[30] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[2])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] SEED_VAR */ + (0.04) * ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */)) + (-0.04) * ((data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4883
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[2] = $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4883(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4883};
  jacobian->tmpVars[31] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[30] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0.$pDERLSJac70.dummyVarLSJac70[2])) JACOBIAN_DIFF_VAR */ + (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 4884
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] = (genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[1]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_4884(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4884};
  jacobian->tmpVars[32] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) - ((jacobian->tmpVars[21] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */)) - ((data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * (jacobian->tmpVars[25] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * (jacobian->tmpVars[31] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * (jacobian->tmpVars[23] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 4885
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 = (genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[3] + genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_4885(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4885};
  jacobian->tmpVars[33] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (jacobian->tmpVars[23] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[31] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[25] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 4886
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2] = (-genericGlider_mass_explicit.actuators.body_rolling.r_CM[3]) * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 - genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1]
*/
void TestGlider_eqFunction_4886(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4886};
  jacobian->tmpVars[34] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */)) * (jacobian->tmpVars[33] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[32] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (jacobian->tmpVars[21] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4887
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] = (genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[1]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_4887(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4887};
  jacobian->tmpVars[35] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[21] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */)) - ((data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * (jacobian->tmpVars[25] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[31] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * (jacobian->tmpVars[23] /* genericGlider_mass_explicit.actuators.body_rolling.a_0.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 4888
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[1] = genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1]
*/
void TestGlider_eqFunction_4888(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4888};
  jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[32] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (jacobian->tmpVars[21] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4889
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] + genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 - genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1]
*/
void TestGlider_eqFunction_4889(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4889};
  jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[33] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (jacobian->tmpVars[19] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (jacobian->tmpVars[20] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (jacobian->tmpVars[21] /* genericGlider_mass_explicit.actuators.body_rolling.z_a.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4890
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 + (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3]
*/
void TestGlider_eqFunction_4890(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4890};
  jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[33] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[32] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4891
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[3] = (-genericGlider_mass_explicit.addedMassForcesTorques.N_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[2]
*/
void TestGlider_eqFunction_4891(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4891};
  jacobian->tmpVars[39] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */)) * (jacobian->tmpVars[17] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * (jacobian->tmpVars[29] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4892
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[3] = (-genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[3]
*/
void TestGlider_eqFunction_4892(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4892};
  jacobian->tmpVars[40] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->tmpVars[18] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * (jacobian->tmpVars[28] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4893
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] + genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4893(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4893};
  jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[37] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[35] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */);
  TRACE_POP
}

/*
equation index: 4894
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4894(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4894};
  jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[34] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[32] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */));
  TRACE_POP
}

/*
equation index: 4895
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] = (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3]) * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[1] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2]
*/
void TestGlider_eqFunction_4895(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4895};
  jacobian->tmpVars[43] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4896
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] + genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3]
*/
void TestGlider_eqFunction_4896(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4896};
  jacobian->tmpVars[44] /* genericGlider_mass_explicit.actuators.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[12] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[43] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4897
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] = genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] + genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3]
*/
void TestGlider_eqFunction_4897(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4897};
  jacobian->tmpVars[45] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[27] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[38] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4898
type: SIMPLE_ASSIGN
$res_LSJac70_1.$pDERLSJac70.dummyVarLSJac70 = (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] - genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2]) * genericGlider_mass_explicit.actuators.bodyVariableMass.m - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4898(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4898};
  jacobian->resultVars[0] /* $res_LSJac70_1.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] SEED_VAR */) + (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) - ((jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4899
type: SIMPLE_ASSIGN
$res_LSJac70_2.$pDERLSJac70.dummyVarLSJac70 = (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] - genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3]) * genericGlider_mass_explicit.actuators.bodyVariableMass.m - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[2]
*/
void TestGlider_eqFunction_4899(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4899};
  jacobian->resultVars[1] /* $res_LSJac70_2.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] SEED_VAR */) + (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) - ((jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4900
type: SIMPLE_ASSIGN
$res_LSJac70_3.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac70.dummyVarLSJac70 + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac70.dummyVarLSJac70 + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac70.dummyVarLSJac70 - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4900(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4900};
  jacobian->resultVars[2] /* $res_LSJac70_3.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->tmpVars[14] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[15] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[16] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[17] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.SeedLSJac70[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4901
type: SIMPLE_ASSIGN
$res_LSJac70_4.$pDERLSJac70.dummyVarLSJac70 = (genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] * genericGlider_mass_explicit.hull.r_CM[3] - genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] * genericGlider_mass_explicit.hull.r_CM[2]) * genericGlider_mass_explicit.hull.m - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4901(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4901};
  jacobian->resultVars[3] /* $res_LSJac70_4.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] SEED_VAR */) + (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) - ((jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4902
type: SIMPLE_ASSIGN
$res_LSJac70_5.$pDERLSJac70.dummyVarLSJac70 = (genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] + genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] * genericGlider_mass_explicit.hull.r_CM[1] - genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] * genericGlider_mass_explicit.hull.r_CM[3]) * genericGlider_mass_explicit.hull.m - genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[2]
*/
void TestGlider_eqFunction_4902(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4902};
  jacobian->resultVars[4] /* $res_LSJac70_5.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] SEED_VAR */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] SEED_VAR */) + (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) - ((jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4903
type: SIMPLE_ASSIGN
$res_LSJac70_6.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.SeedLSJac70[1]
*/
void TestGlider_eqFunction_4903(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4903};
  jacobian->resultVars[5] /* $res_LSJac70_6.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[3] SEED_VAR */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[2] SEED_VAR */) + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.hull.a_0.SeedLSJac70[1] SEED_VAR */) - jacobian->seedVars[11] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.SeedLSJac70[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4904
type: SIMPLE_ASSIGN
$res_LSJac70_7.$pDERLSJac70.dummyVarLSJac70 = (-genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[2]
*/
void TestGlider_eqFunction_4904(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4904};
  jacobian->resultVars[6] /* $res_LSJac70_7.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = ((-data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */)) * (jacobian->tmpVars[17] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * (jacobian->tmpVars[29] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[5] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4905
type: SIMPLE_ASSIGN
$res_LSJac70_8.$pDERLSJac70.dummyVarLSJac70 = (-genericGlider_mass_explicit.addedMassForcesTorques.M_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[2]
*/
void TestGlider_eqFunction_4905(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4905};
  jacobian->resultVars[7] /* $res_LSJac70_8.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = ((-data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */)) * (jacobian->tmpVars[18] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * (jacobian->tmpVars[28] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[11] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4906
type: SIMPLE_ASSIGN
$res_LSJac70_9.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.hull.r_CM[2] * genericGlider_mass_explicit.hull.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] + genericGlider_mass_explicit.hull.I[1,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] + genericGlider_mass_explicit.hull.I[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.hull.I[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + (-genericGlider_mass_explicit.hull.frame_a.t.SeedLSJac70[1]) - genericGlider_mass_explicit.hull.r_CM[3] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[2]
*/
void TestGlider_eqFunction_4906(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4906};
  jacobian->resultVars[8] /* $res_LSJac70_9.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (jacobian->tmpVars[26] /* genericGlider_mass_explicit.hull.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (-jacobian->seedVars[16] /* genericGlider_mass_explicit.hull.frame_a.t.SeedLSJac70[1] SEED_VAR */) - ((data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (jacobian->seedVars[12] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[2] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4907
type: SIMPLE_ASSIGN
$res_LSJac70_10.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.actuators.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] + genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[3]
*/
void TestGlider_eqFunction_4907(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4907};
  jacobian->resultVars[9] /* $res_LSJac70_10.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = jacobian->tmpVars[44] /* genericGlider_mass_explicit.actuators.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[13] /* genericGlider_mass_explicit.hull.frame_a.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[39] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4908
type: SIMPLE_ASSIGN
$res_LSJac70_11.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 + (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac70.dummyVarLSJac70[1]
*/
void TestGlider_eqFunction_4908(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4908};
  jacobian->resultVars[10] /* $res_LSJac70_11.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[33] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[32] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[8] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4909
type: SIMPLE_ASSIGN
$res_LSJac70_12.$pDERLSJac70.dummyVarLSJac70 = (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2]) * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[1] - genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac70[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2]
*/
void TestGlider_eqFunction_4909(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4909};
  jacobian->resultVars[11] /* $res_LSJac70_12.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */)) - jacobian->seedVars[8] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.SeedLSJac70[2] SEED_VAR */ - ((data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4910
type: SIMPLE_ASSIGN
$res_LSJac70_13.$pDERLSJac70.dummyVarLSJac70 = (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1]) * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[1] - genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2]
*/
void TestGlider_eqFunction_4910(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4910};
  jacobian->resultVars[12] /* $res_LSJac70_13.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */)) * (jacobian->tmpVars[41] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[36] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[3] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t.$pDERLSJac70.dummyVarLSJac70[1] JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[42] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4911
type: SIMPLE_ASSIGN
$res_LSJac70_14.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.SeedLSJac70[1]) - genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[2]
*/
void TestGlider_eqFunction_4911(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4911};
  jacobian->resultVars[13] /* $res_LSJac70_14.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->tmpVars[27] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (-jacobian->seedVars[15] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.SeedLSJac70[1] SEED_VAR */) - ((data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->seedVars[13] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[2] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4912
type: SIMPLE_ASSIGN
$res_LSJac70_15.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac70.dummyVarLSJac70[2]) - genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3]
*/
void TestGlider_eqFunction_4912(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4912};
  jacobian->resultVars[14] /* $res_LSJac70_15.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->seedVars[9] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.SeedLSJac70[1] SEED_VAR */) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (-jacobian->tmpVars[10] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->tmpVars[27] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4913
type: SIMPLE_ASSIGN
$res_LSJac70_16.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.hull.r_CM[3] * genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[1] + genericGlider_mass_explicit.hull.I[2,3] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] + genericGlider_mass_explicit.hull.I[2,2] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] + genericGlider_mass_explicit.hull.I[2,1] * genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] + (-genericGlider_mass_explicit.hull.frame_a.t.SeedLSJac70[2]) - genericGlider_mass_explicit.hull.r_CM[1] * genericGlider_mass_explicit.hull.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3]
*/
void TestGlider_eqFunction_4913(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4913};
  jacobian->resultVars[15] /* $res_LSJac70_16.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (jacobian->seedVars[10] /* genericGlider_mass_explicit.hull.frame_a.f.SeedLSJac70[1] SEED_VAR */) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[3] SEED_VAR */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (jacobian->seedVars[4] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[2] SEED_VAR */) + (data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (jacobian->seedVars[5] /* genericGlider_mass_explicit.hull.z_a.SeedLSJac70[1] SEED_VAR */) + (-jacobian->seedVars[6] /* genericGlider_mass_explicit.hull.frame_a.t.SeedLSJac70[2] SEED_VAR */) - ((data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (jacobian->tmpVars[26] /* genericGlider_mass_explicit.hull.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4914
type: SIMPLE_ASSIGN
$res_LSJac70_17.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] + genericGlider_mass_explicit.hull.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[3]
*/
void TestGlider_eqFunction_4914(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4914};
  jacobian->resultVars[16] /* $res_LSJac70_17.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = jacobian->tmpVars[45] /* genericGlider_mass_explicit.actuators.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[26] /* genericGlider_mass_explicit.hull.frame_a.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[40] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4915
type: SIMPLE_ASSIGN
$res_LSJac70_18.$pDERLSJac70.dummyVarLSJac70 = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 + (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.f.SeedLSJac70[2]
*/
void TestGlider_eqFunction_4915(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4915};
  jacobian->resultVars[17] /* $res_LSJac70_18.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_VAR */ = (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[33] /* genericGlider_mass_explicit.actuators.prismatic.f.$pDERLSJac70.dummyVarLSJac70 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (jacobian->tmpVars[35] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[32] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f.$pDERLSJac70.dummyVarLSJac70[3] JACOBIAN_DIFF_VAR */)) - jacobian->seedVars[14] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f.SeedLSJac70[2] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TestGlider_functionJacLSJac70_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_LSJac70;
  
  
  TRACE_POP
  return 0;
}

int TestGlider_functionJacLSJac70_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_LSJac70;
  TestGlider_eqFunction_4852(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4853(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4854(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4855(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4856(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4857(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4858(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4859(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4860(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4861(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4862(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4863(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4864(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4865(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4866(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4867(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4868(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4869(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4870(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4871(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4872(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4873(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4874(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4875(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4876(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4877(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4878(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4879(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4880(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4881(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4882(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4883(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4884(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4885(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4886(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4887(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4888(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4889(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4890(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4891(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4892(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4893(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4894(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4895(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4896(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4897(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4898(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4899(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4900(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4901(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4902(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4903(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4904(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4905(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4906(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4907(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4908(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4909(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4910(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4911(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4912(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4913(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4914(data, threadData, jacobian, parentJacobian);
  TestGlider_eqFunction_4915(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int TestGlider_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TestGlider_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TestGlider_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TestGlider_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int TestGlider_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int TestGlider_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_A;
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 7553
type: SIMPLE_ASSIGN
$STATESET1.J.$pDERStateSetJac71.dummyVarStateSetJac71 = (-2.0) * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedStateSetJac71[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedStateSetJac71[4] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedStateSetJac71[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedStateSetJac71[1])
*/
void TestGlider_eqFunction_7553(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,7553};
  jacobian->resultVars[0] /* $STATESET1.J.$pDERStateSetJac71.dummyVarStateSetJac71 JACOBIAN_VAR */ = (-2.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[1] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedStateSetJac71[3] SEED_VAR */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[0] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedStateSetJac71[4] SEED_VAR */) + (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[2] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedStateSetJac71[2] SEED_VAR */) + (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[3] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q.SeedStateSetJac71[1] SEED_VAR */));
  TRACE_POP
}

OMC_DISABLE_OPT
int TestGlider_functionJacStateSetJac71_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_StateSetJac71;
  
  
  TRACE_POP
  return 0;
}

int TestGlider_functionJacStateSetJac71_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TestGlider_INDEX_JAC_StateSetJac71;
  TestGlider_eqFunction_7553(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int TestGlider_initialAnalyticJacobianNLSJac65(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+4] = {0,4,4,4,4};
  const int rowIndex[16] = {0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3};
  int i = 0;
  
  jacobian->sizeCols = 4;
  jacobian->sizeRows = 4;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((4+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(16*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 16;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(4*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 4;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (4+1)*sizeof(unsigned int));
  
  for(i=2;i<4+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 16*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[2] = 2;
  jacobian->sparsePattern->colorCols[1] = 3;
  jacobian->sparsePattern->colorCols[0] = 4;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TestGlider_initialAnalyticJacobianLSJac66(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+23] = {0,23,23,2,21,2,2,2,2,2,4,4,4,21,5,21,3,21,7,7,7,23,23,23};
  const int rowIndex[252] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,10,16,0,1,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,1,18,17,18,3,11,11,22,3,8,5,6,11,18,1,2,3,6,10,11,12,21,0,1,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,10,15,17,18,19,0,1,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,1,6,7,0,1,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,6,13,15,16,17,21,22,6,15,16,17,20,21,22,0,6,15,16,17,21,22,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};
  int i = 0;
  
  jacobian->sizeCols = 23;
  jacobian->sizeRows = 23;
  jacobian->sizeTmpVars = 76;
  jacobian->seedVars = (modelica_real*) calloc(23,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(23,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(76,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((23+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(252*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 252;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(23*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 17;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (23+1)*sizeof(unsigned int));
  
  for(i=2;i<23+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 252*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[22] = 1;
  jacobian->sparsePattern->colorCols[21] = 2;
  jacobian->sparsePattern->colorCols[20] = 3;
  jacobian->sparsePattern->colorCols[19] = 4;
  jacobian->sparsePattern->colorCols[18] = 5;
  jacobian->sparsePattern->colorCols[17] = 6;
  jacobian->sparsePattern->colorCols[16] = 7;
  jacobian->sparsePattern->colorCols[14] = 8;
  jacobian->sparsePattern->colorCols[13] = 9;
  jacobian->sparsePattern->colorCols[12] = 10;
  jacobian->sparsePattern->colorCols[10] = 11;
  jacobian->sparsePattern->colorCols[11] = 11;
  jacobian->sparsePattern->colorCols[9] = 12;
  jacobian->sparsePattern->colorCols[5] = 13;
  jacobian->sparsePattern->colorCols[7] = 13;
  jacobian->sparsePattern->colorCols[8] = 13;
  jacobian->sparsePattern->colorCols[15] = 13;
  jacobian->sparsePattern->colorCols[3] = 14;
  jacobian->sparsePattern->colorCols[2] = 15;
  jacobian->sparsePattern->colorCols[4] = 15;
  jacobian->sparsePattern->colorCols[6] = 15;
  jacobian->sparsePattern->colorCols[1] = 16;
  jacobian->sparsePattern->colorCols[0] = 17;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TestGlider_initialAnalyticJacobianNLSJac67(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+4] = {0,4,4,4,4};
  const int rowIndex[16] = {0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3};
  int i = 0;
  
  jacobian->sizeCols = 4;
  jacobian->sizeRows = 4;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((4+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(16*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 16;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(4*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 4;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (4+1)*sizeof(unsigned int));
  
  for(i=2;i<4+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 16*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[2] = 2;
  jacobian->sparsePattern->colorCols[1] = 3;
  jacobian->sparsePattern->colorCols[0] = 4;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TestGlider_initialAnalyticJacobianLSJac68(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+23] = {0,23,23,2,21,2,2,2,2,2,4,4,4,21,5,21,3,21,7,7,7,23,23,23};
  const int rowIndex[252] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,10,16,0,1,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,1,18,17,18,3,11,11,22,3,8,5,6,11,18,1,2,3,6,10,11,12,21,0,1,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,10,15,17,18,19,0,1,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,1,6,7,0,1,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,6,13,15,16,17,21,22,6,15,16,17,20,21,22,0,6,15,16,17,21,22,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};
  int i = 0;
  
  jacobian->sizeCols = 23;
  jacobian->sizeRows = 23;
  jacobian->sizeTmpVars = 76;
  jacobian->seedVars = (modelica_real*) calloc(23,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(23,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(76,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((23+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(252*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 252;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(23*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 17;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (23+1)*sizeof(unsigned int));
  
  for(i=2;i<23+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 252*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[22] = 1;
  jacobian->sparsePattern->colorCols[21] = 2;
  jacobian->sparsePattern->colorCols[20] = 3;
  jacobian->sparsePattern->colorCols[19] = 4;
  jacobian->sparsePattern->colorCols[18] = 5;
  jacobian->sparsePattern->colorCols[17] = 6;
  jacobian->sparsePattern->colorCols[16] = 7;
  jacobian->sparsePattern->colorCols[14] = 8;
  jacobian->sparsePattern->colorCols[13] = 9;
  jacobian->sparsePattern->colorCols[12] = 10;
  jacobian->sparsePattern->colorCols[10] = 11;
  jacobian->sparsePattern->colorCols[11] = 11;
  jacobian->sparsePattern->colorCols[9] = 12;
  jacobian->sparsePattern->colorCols[5] = 13;
  jacobian->sparsePattern->colorCols[7] = 13;
  jacobian->sparsePattern->colorCols[8] = 13;
  jacobian->sparsePattern->colorCols[15] = 13;
  jacobian->sparsePattern->colorCols[3] = 14;
  jacobian->sparsePattern->colorCols[2] = 15;
  jacobian->sparsePattern->colorCols[4] = 15;
  jacobian->sparsePattern->colorCols[6] = 15;
  jacobian->sparsePattern->colorCols[1] = 16;
  jacobian->sparsePattern->colorCols[0] = 17;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TestGlider_initialAnalyticJacobianNLSJac69(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+4] = {0,4,4,4,4};
  const int rowIndex[16] = {0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3};
  int i = 0;
  
  jacobian->sizeCols = 4;
  jacobian->sizeRows = 4;
  jacobian->sizeTmpVars = 4;
  jacobian->seedVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((4+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(16*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 16;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(4*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 4;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (4+1)*sizeof(unsigned int));
  
  for(i=2;i<4+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 16*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[2] = 2;
  jacobian->sparsePattern->colorCols[1] = 3;
  jacobian->sparsePattern->colorCols[0] = 4;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TestGlider_initialAnalyticJacobianLSJac70(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+18] = {0,17,17,17,17,15,15,2,2,2,4,5,3,4,4,3,2,2,2};
  const int rowIndex[133] = {0,1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,0,1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,0,1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,0,1,2,3,4,6,7,8,9,10,11,12,13,14,15,16,17,0,2,3,6,7,8,9,10,11,12,13,14,15,16,17,1,2,4,6,7,8,9,10,11,12,13,14,15,16,17,7,15,7,14,11,14,0,9,10,14,3,9,10,14,15,5,10,14,4,6,8,9,1,6,9,13,6,12,17,12,13,8,12,2,12};
  int i = 0;
  
  jacobian->sizeCols = 18;
  jacobian->sizeRows = 18;
  jacobian->sizeTmpVars = 64;
  jacobian->seedVars = (modelica_real*) calloc(18,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(18,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(64,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((18+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(133*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 133;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(18*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 11;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (18+1)*sizeof(unsigned int));
  
  for(i=2;i<18+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 133*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[11] = 1;
  jacobian->sparsePattern->colorCols[10] = 2;
  jacobian->sparsePattern->colorCols[17] = 2;
  jacobian->sparsePattern->colorCols[9] = 3;
  jacobian->sparsePattern->colorCols[14] = 3;
  jacobian->sparsePattern->colorCols[7] = 4;
  jacobian->sparsePattern->colorCols[13] = 4;
  jacobian->sparsePattern->colorCols[16] = 4;
  jacobian->sparsePattern->colorCols[6] = 5;
  jacobian->sparsePattern->colorCols[8] = 5;
  jacobian->sparsePattern->colorCols[12] = 5;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[5] = 6;
  jacobian->sparsePattern->colorCols[4] = 7;
  jacobian->sparsePattern->colorCols[3] = 8;
  jacobian->sparsePattern->colorCols[2] = 9;
  jacobian->sparsePattern->colorCols[1] = 10;
  jacobian->sparsePattern->colorCols[0] = 11;
  TRACE_POP
  return 0;
}
int TestGlider_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TestGlider_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TestGlider_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TestGlider_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int TestGlider_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+16] = {0,11,11,11,7,7,8,8,7,7,7,9,9,9,8,8,8};
  const int rowIndex[135] = {0,1,2,5,6,7,8,9,10,11,12,0,1,2,5,6,7,8,9,10,11,12,0,1,2,5,6,7,8,9,10,11,12,6,7,8,9,10,11,12,5,7,8,9,10,11,12,4,5,7,8,9,10,11,12,3,6,7,8,9,10,11,12,7,8,9,10,11,12,13,7,8,9,10,11,12,14,7,8,9,10,11,12,15,0,1,2,7,8,9,10,11,12,0,1,2,7,8,9,10,11,12,0,1,2,7,8,9,10,11,12,5,6,7,8,9,10,11,12,5,6,7,8,9,10,11,12,5,6,7,8,9,10,11,12};
  int i = 0;
  
  jacobian->sizeCols = 16;
  jacobian->sizeRows = 16;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(16,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(16,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((16+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(135*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 135;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(16*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 16;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (16+1)*sizeof(unsigned int));
  
  for(i=2;i<16+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 135*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[15] = 1;
  jacobian->sparsePattern->colorCols[14] = 2;
  jacobian->sparsePattern->colorCols[13] = 3;
  jacobian->sparsePattern->colorCols[9] = 4;
  jacobian->sparsePattern->colorCols[8] = 5;
  jacobian->sparsePattern->colorCols[7] = 6;
  jacobian->sparsePattern->colorCols[12] = 7;
  jacobian->sparsePattern->colorCols[11] = 8;
  jacobian->sparsePattern->colorCols[10] = 9;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[3] = 11;
  jacobian->sparsePattern->colorCols[5] = 12;
  jacobian->sparsePattern->colorCols[6] = 13;
  jacobian->sparsePattern->colorCols[0] = 14;
  jacobian->sparsePattern->colorCols[1] = 15;
  jacobian->sparsePattern->colorCols[2] = 16;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TestGlider_initialAnalyticJacobianStateSetJac71(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+4] = {0,1,1,1,1};
  const int rowIndex[4] = {0,0,0,0};
  int i = 0;
  
  jacobian->sizeCols = 4;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 1;
  jacobian->seedVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((4+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(4*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 4;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(4*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 4;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (4+1)*sizeof(unsigned int));
  
  for(i=2;i<4+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 4*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[2] = 2;
  jacobian->sparsePattern->colorCols[1] = 3;
  jacobian->sparsePattern->colorCols[0] = 4;
  TRACE_POP
  return 0;
}


