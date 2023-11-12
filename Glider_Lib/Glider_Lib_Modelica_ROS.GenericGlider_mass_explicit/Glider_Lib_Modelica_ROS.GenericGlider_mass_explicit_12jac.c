/* Jacobians 12 */
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_model.h"
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 1350
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] = 4.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac260[1] + actuators.bodyVariableMass.Q[4] * actuators.bodyVariableMass.Q.SeedNLSJac260[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1350};
  jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac260[1] SEED_VAR */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac260[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[3,3] = 4.0 * (actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q.SeedNLSJac260[3] + actuators.bodyVariableMass.Q[4] * actuators.bodyVariableMass.Q.SeedNLSJac260[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1351};
  jacobian->tmpVars[1] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[3,3] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac260[3] SEED_VAR */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac260[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] = 4.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q.SeedNLSJac260[2] + actuators.bodyVariableMass.Q[4] * actuators.bodyVariableMass.Q.SeedNLSJac260[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1352};
  jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac260[2] SEED_VAR */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac260[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac260[2] + actuators.bodyVariableMass.Q.SeedNLSJac260[1] * actuators.bodyVariableMass.Q[2] + actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q.SeedNLSJac260[4] + actuators.bodyVariableMass.Q.SeedNLSJac260[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1353};
  jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac260[2] SEED_VAR */) + (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac260[1] SEED_VAR */) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac260[4] SEED_VAR */) + (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac260[3] SEED_VAR */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[3,2] = 2.0 * (actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q.SeedNLSJac260[2] + actuators.bodyVariableMass.Q.SeedNLSJac260[3] * actuators.bodyVariableMass.Q[2] + (-actuators.bodyVariableMass.Q[1]) * actuators.bodyVariableMass.Q.SeedNLSJac260[4] - actuators.bodyVariableMass.Q.SeedNLSJac260[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1354};
  jacobian->tmpVars[4] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[3,2] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac260[2] SEED_VAR */) + (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac260[3] SEED_VAR */) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + ((-data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */)) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac260[4] SEED_VAR */) - ((jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac260[1] SEED_VAR */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] = 2.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q.SeedNLSJac260[3] + actuators.bodyVariableMass.Q.SeedNLSJac260[2] * actuators.bodyVariableMass.Q[3] + actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac260[4] + actuators.bodyVariableMass.Q.SeedNLSJac260[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1355};
  jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac260[3] SEED_VAR */) + (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac260[2] SEED_VAR */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac260[4] SEED_VAR */) + (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac260[1] SEED_VAR */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] = 2.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q.SeedNLSJac260[1] + actuators.bodyVariableMass.Q.SeedNLSJac260[2] * actuators.bodyVariableMass.Q[1] + (-actuators.bodyVariableMass.Q[3]) * actuators.bodyVariableMass.Q.SeedNLSJac260[4] - actuators.bodyVariableMass.Q.SeedNLSJac260[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1356};
  jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac260[1] SEED_VAR */) + (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac260[2] SEED_VAR */) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + ((-data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */)) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac260[4] SEED_VAR */) - ((jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac260[3] SEED_VAR */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac260[3] + actuators.bodyVariableMass.Q.SeedNLSJac260[1] * actuators.bodyVariableMass.Q[3] + (-actuators.bodyVariableMass.Q[2]) * actuators.bodyVariableMass.Q.SeedNLSJac260[4] - actuators.bodyVariableMass.Q.SeedNLSJac260[2] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1357};
  jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac260[3] SEED_VAR */) + (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac260[1] SEED_VAR */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + ((-data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */)) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac260[4] SEED_VAR */) - ((jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac260[2] SEED_VAR */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
$res_NLSJac260_1.$pDERNLSJac260.dummyVarNLSJac260 = if noEvent(hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08 == 0.0) then hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08 else (((hull.frame_a.R.T[1,2] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] * hull.frame_a.R.T[2,3] - (hull.frame_a.R.T[1,3] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] * hull.frame_a.R.T[2,2])) * (-9.999999983333334e-05) + (hull.frame_a.R.T[1,3] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] * hull.frame_a.R.T[2,1] - (hull.frame_a.R.T[1,1] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] * hull.frame_a.R.T[2,3])) * 0.9999994950000443 + (hull.frame_a.R.T[1,1] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] * hull.frame_a.R.T[2,2] - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] * hull.frame_a.R.T[2,1])) * 0.0009999998283333426) * (hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08) - ((hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1] - hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 0.0009999998283333426) * (hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] * 0.999999995 + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] * 9.999998316666754e-08)) / ((hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08) ^ 2.0 * (1.0 + (((hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1] - hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 0.0009999998283333426) / (hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08)) ^ 2.0))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1358};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp3 = (modelica_boolean)((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08) == 0.0);
  if(tmp3)
  {
    tmp4 = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08);
  }
  else
  {
    tmp1 = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08);
    tmp2 = DIVISION(((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426),(data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08),"hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08");
    tmp4 = DIVISION((((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426)) * ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08)) - ((((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426)) * ((jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] JACOBIAN_DIFF_VAR */) * (0.999999995) + (jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] JACOBIAN_DIFF_VAR */) * (9.99999498333376e-05) + (jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] JACOBIAN_DIFF_VAR */) * (9.999998316666754e-08))),((tmp1 * tmp1)) * (1.0 + (tmp2 * tmp2)),"(hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08) ^ 2.0 * (1.0 + (((hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1] - hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 0.0009999998283333426) / (hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08)) ^ 2.0)");
  }
  jacobian->resultVars[0] /* $res_NLSJac260_1.$pDERNLSJac260.dummyVarNLSJac260 JACOBIAN_VAR */ = tmp4;
  TRACE_POP
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
$res_NLSJac260_2.$pDERNLSJac260.dummyVarNLSJac260 = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac260[1] + actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q.SeedNLSJac260[2] + actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q.SeedNLSJac260[3] + actuators.bodyVariableMass.Q[4] * actuators.bodyVariableMass.Q.SeedNLSJac260[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1359(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1359};
  jacobian->resultVars[1] /* $res_NLSJac260_2.$pDERNLSJac260.dummyVarNLSJac260 JACOBIAN_VAR */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac260[1] SEED_VAR */) + (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac260[2] SEED_VAR */) + (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac260[3] SEED_VAR */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac260[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
$res_NLSJac260_3.$pDERNLSJac260.dummyVarNLSJac260 = if noEvent(hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417 == 0.0) then hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417 else ((hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] * 0.999999995 + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] * 9.99999498333376e-05 + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] * 9.999998316666754e-08) * (hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417) - (hull.frame_a.R.T[2,1] * 0.999999995 + hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + hull.frame_a.R.T[2,3] * 9.999998316666754e-08) * (hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[3,3] * 0.9999995000000417)) / ((hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417) ^ 2.0 * (1.0 + ((hull.frame_a.R.T[2,1] * 0.999999995 + hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + hull.frame_a.R.T[2,3] * 9.999998316666754e-08) / (hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417)) ^ 2.0))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1360(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1360};
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)((data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417) == 0.0);
  if(tmp8)
  {
    tmp9 = (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417);
  }
  else
  {
    tmp6 = (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417);
    tmp7 = DIVISION((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (9.999998316666754e-08),(data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417),"hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417");
    tmp9 = DIVISION(((jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] JACOBIAN_DIFF_VAR */) * (0.999999995) + (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] JACOBIAN_DIFF_VAR */) * (9.99999498333376e-05) + (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] JACOBIAN_DIFF_VAR */) * (9.999998316666754e-08)) * ((data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417)) - (((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (9.999998316666754e-08)) * ((jacobian->tmpVars[4] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[3,2] JACOBIAN_DIFF_VAR */) * (-0.0009999998333333417) + (jacobian->tmpVars[1] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[3,3] JACOBIAN_DIFF_VAR */) * (0.9999995000000417))),((tmp6 * tmp6)) * (1.0 + (tmp7 * tmp7)),"(hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417) ^ 2.0 * (1.0 + ((hull.frame_a.R.T[2,1] * 0.999999995 + hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + hull.frame_a.R.T[2,3] * 9.999998316666754e-08) / (hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417)) ^ 2.0)");
  }
  jacobian->resultVars[2] /* $res_NLSJac260_3.$pDERNLSJac260.dummyVarNLSJac260 JACOBIAN_VAR */ = tmp9;
  TRACE_POP
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
$res_NLSJac260_4.$pDERNLSJac260.dummyVarNLSJac260 = if noEvent(hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426 == 0.0) then hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426 else (((hull.frame_a.R.T[1,1] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] * hull.frame_a.R.T[2,3] - (hull.frame_a.R.T[1,3] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] * hull.frame_a.R.T[2,1])) * 9.99999498333376e-05 - (hull.frame_a.R.T[1,1] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] * hull.frame_a.R.T[2,2] - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] * hull.frame_a.R.T[2,1])) * 9.999998316666754e-08 - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] * hull.frame_a.R.T[2,3] - (hull.frame_a.R.T[1,3] * hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] * hull.frame_a.R.T[2,2])) * 0.999999995) * (hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426) - ((hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * 0.999999995) * (hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] * 0.9999994950000443 + hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] * 0.0009999998283333426)) / ((hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426) ^ 2.0 * (1.0 + (((hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * 0.999999995) / (hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426)) ^ 2.0))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1361(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1361};
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp13 = (modelica_boolean)((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426) == 0.0);
  if(tmp13)
  {
    tmp14 = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426);
  }
  else
  {
    tmp11 = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426);
    tmp12 = DIVISION(((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (0.999999995)),(data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426),"hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426");
    tmp14 = DIVISION((((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (0.999999995))) * ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426)) - ((((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (0.999999995))) * ((jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,1] JACOBIAN_DIFF_VAR */) * (-9.999999983333334e-05) + (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,2] JACOBIAN_DIFF_VAR */) * (0.9999994950000443) + (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac260.dummyVarNLSJac260[2,3] JACOBIAN_DIFF_VAR */) * (0.0009999998283333426))),((tmp11 * tmp11)) * (1.0 + (tmp12 * tmp12)),"(hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426) ^ 2.0 * (1.0 + (((hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * 0.999999995) / (hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426)) ^ 2.0)");
  }
  jacobian->resultVars[3] /* $res_NLSJac260_4.$pDERNLSJac260.dummyVarNLSJac260 JACOBIAN_VAR */ = tmp14;
  TRACE_POP
}

OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacNLSJac260_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_NLSJac260;
  
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacNLSJac260_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_NLSJac260;
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1350(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1351(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1352(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1353(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1354(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1355(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1356(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1357(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1358(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1359(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1360(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1361(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1695
type: SIMPLE_ASSIGN
hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] = (hull.frame_a.R.T[2,1] * hull.a_0.SeedLSJac261[1] + hull.frame_a.R.T[2,2] * hull.a_0.SeedLSJac261[2] + hull.frame_a.R.T[2,3] * hull.a_0.SeedLSJac261[3] + hull.z_a.SeedLSJac261[3] * hull.r_CM[1] - hull.z_a.SeedLSJac261[1] * hull.r_CM[3]) * hull.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1695(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1695};
  jacobian->tmpVars[21] /* hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac261[2] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac261[3] SEED_VAR */) + (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) - ((jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */);
  TRACE_POP
}

/*
equation index: 1696
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] = (hull.frame_a.R.T[2,1] * hull.a_0.SeedLSJac261[1] + hull.frame_a.R.T[2,2] * hull.a_0.SeedLSJac261[2] + hull.frame_a.R.T[2,3] * hull.a_0.SeedLSJac261[3] + hull.z_a.SeedLSJac261[3] * actuators.bodyVariableMass.r_CM[1] - hull.z_a.SeedLSJac261[1] * actuators.bodyVariableMass.r_CM[3]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1696(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1696};
  jacobian->tmpVars[17] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac261[2] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac261[3] SEED_VAR */) + (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) - ((jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] = (hull.frame_a.f.SeedLSJac261[1] - hull.m * (hull.frame_a.R.T[1,1] * hull.a_0.SeedLSJac261[1] + hull.frame_a.R.T[1,2] * hull.a_0.SeedLSJac261[2] + hull.frame_a.R.T[1,3] * hull.a_0.SeedLSJac261[3] - hull.z_a.SeedLSJac261[3] * hull.r_CM[2])) / (hull.r_CM[3] * hull.m)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1697(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1697};
  jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[2] /* hull.frame_a.f.SeedLSJac261[1] SEED_VAR */ - ((data->simulationInfo->realParameter[407] /* hull.m PARAM */) * ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac261[2] SEED_VAR */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac261[3] SEED_VAR */) - ((jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */)))),(data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */),"hull.r_CM[3] * hull.m");
  TRACE_POP
}

/*
equation index: 1698
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] = (hull.frame_a.R.T[1,1] * hull.a_0.SeedLSJac261[1] + hull.frame_a.R.T[1,2] * hull.a_0.SeedLSJac261[2] + hull.frame_a.R.T[1,3] * hull.a_0.SeedLSJac261[3] + hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] * actuators.bodyVariableMass.r_CM[3] - hull.z_a.SeedLSJac261[3] * actuators.bodyVariableMass.r_CM[2]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1698(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1698};
  jacobian->tmpVars[13] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac261[2] SEED_VAR */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac261[3] SEED_VAR */) + (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) - ((jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}

/*
equation index: 1699
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] = (hull.frame_a.R.T[3,1] * hull.a_0.SeedLSJac261[1] + hull.frame_a.R.T[3,2] * hull.a_0.SeedLSJac261[2] + hull.frame_a.R.T[3,3] * hull.a_0.SeedLSJac261[3] + hull.z_a.SeedLSJac261[1] * actuators.bodyVariableMass.r_CM[2] - hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] * actuators.bodyVariableMass.r_CM[1]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1699(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1699};
  jacobian->tmpVars[15] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac261[2] SEED_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac261[3] SEED_VAR */) + (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) - ((jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}

/*
equation index: 1700
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] = actuators.bodyVariableMass.I[2,1] * hull.z_a.SeedLSJac261[1] + actuators.bodyVariableMass.I[2,2] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + actuators.bodyVariableMass.I[2,3] * hull.z_a.SeedLSJac261[3] + actuators.bodyVariableMass.r_CM[3] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] - actuators.bodyVariableMass.r_CM[1] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1700(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1700};
  jacobian->tmpVars[16] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */) + (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->tmpVars[13] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->tmpVars[15] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1701
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] = actuators.bodyVariableMass.I[3,1] * hull.z_a.SeedLSJac261[1] + actuators.bodyVariableMass.I[3,2] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + actuators.bodyVariableMass.I[3,3] * hull.z_a.SeedLSJac261[3] + actuators.bodyVariableMass.r_CM[1] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] - actuators.bodyVariableMass.r_CM[2] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1701(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1701};
  jacobian->tmpVars[18] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */) + (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->tmpVars[17] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->tmpVars[13] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] = actuators.bodyVariableMass.I[1,1] * hull.z_a.SeedLSJac261[1] + actuators.bodyVariableMass.I[1,2] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + actuators.bodyVariableMass.I[1,3] * hull.z_a.SeedLSJac261[3] + actuators.bodyVariableMass.r_CM[2] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] - actuators.bodyVariableMass.r_CM[3] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1702(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1702};
  jacobian->tmpVars[19] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */) + (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->tmpVars[15] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->tmpVars[17] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1703
type: SIMPLE_ASSIGN
hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] = (hull.frame_a.R.T[3,1] * hull.a_0.SeedLSJac261[1] + hull.frame_a.R.T[3,2] * hull.a_0.SeedLSJac261[2] + hull.frame_a.R.T[3,3] * hull.a_0.SeedLSJac261[3] + hull.z_a.SeedLSJac261[1] * hull.r_CM[2] - hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] * hull.r_CM[1]) * hull.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1703(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1703};
  jacobian->tmpVars[20] /* hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac261[2] SEED_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac261[3] SEED_VAR */) + (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) - ((jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */);
  TRACE_POP
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] = hull.I[3,1] * hull.z_a.SeedLSJac261[1] + hull.I[3,2] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + hull.I[3,3] * hull.z_a.SeedLSJac261[3] + hull.r_CM[1] * hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] - hull.r_CM[2] * hull.frame_a.f.SeedLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1704(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1704};
  jacobian->tmpVars[22] /* hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */) + (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (jacobian->tmpVars[21] /* hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (jacobian->seedVars[2] /* hull.frame_a.f.SeedLSJac261[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] = hull.I[1,1] * hull.z_a.SeedLSJac261[1] + hull.I[1,2] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + hull.I[1,3] * hull.z_a.SeedLSJac261[3] + hull.r_CM[2] * hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] - hull.r_CM[3] * hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1705(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1705};
  jacobian->tmpVars[23] /* hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */) + (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (jacobian->tmpVars[20] /* hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (jacobian->tmpVars[21] /* hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] = hull.I[2,1] * hull.z_a.SeedLSJac261[1] + hull.I[2,2] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + hull.I[2,3] * hull.z_a.SeedLSJac261[3] + hull.r_CM[3] * hull.frame_a.f.SeedLSJac261[1] - hull.r_CM[1] * hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1706(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1706};
  jacobian->tmpVars[24] /* hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */) + (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (jacobian->seedVars[2] /* hull.frame_a.f.SeedLSJac261[1] SEED_VAR */) - ((data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (jacobian->tmpVars[20] /* hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] = actuators.revolute.R_rel.T[1,1] * hull.z_a.SeedLSJac261[1] + actuators.revolute.R_rel.T[1,2] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + actuators.revolute.R_rel.T[1,3] * hull.z_a.SeedLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1707(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1707};
  jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] = actuators.revolute.R_rel.T[2,1] * hull.z_a.SeedLSJac261[1] + actuators.revolute.R_rel.T[2,2] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + actuators.revolute.R_rel.T[2,3] * hull.z_a.SeedLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1708(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1708};
  jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] = actuators.revolute.R_rel.T[3,1] * hull.z_a.SeedLSJac261[1] + actuators.revolute.R_rel.T[3,2] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + actuators.revolute.R_rel.T[3,3] * hull.z_a.SeedLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1709(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1709};
  jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[2] = hull.a_0.SeedLSJac261[2] + actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] * actuators.position_slidingMass.s - actuators.body_rolling.frame_a.R.T[3,2] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1710(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1710};
  jacobian->tmpVars[34] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[2])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[5] /* hull.a_0.SeedLSJac261[2] SEED_VAR */ + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[2] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[2] + 0.014 * actuators.body_rolling.frame_a.R.T[1,2] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1711(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1711};
  jacobian->tmpVars[35] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[34] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[2])) JACOBIAN_DIFF_VAR */ + (0.014) * ((data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */)) + (-0.014) * ((data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[1] = hull.a_0.SeedLSJac261[1] + actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] * actuators.position_slidingMass.s - actuators.body_rolling.frame_a.R.T[3,1] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1712(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1712};
  jacobian->tmpVars[36] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[1])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[4] /* hull.a_0.SeedLSJac261[1] SEED_VAR */ + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 1713
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[1] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[1] + 0.014 * actuators.body_rolling.frame_a.R.T[1,1] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1713(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1713};
  jacobian->tmpVars[38] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[36] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[1])) JACOBIAN_DIFF_VAR */ + (0.014) * ((data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */)) + (-0.014) * ((data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[3] = hull.a_0.SeedLSJac261[3] + actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] * actuators.position_slidingMass.s - actuators.body_rolling.frame_a.R.T[3,3] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1714(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1714};
  jacobian->tmpVars[37] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[3])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[3] /* hull.a_0.SeedLSJac261[3] SEED_VAR */ + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[3] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[3] + 0.014 * actuators.body_rolling.frame_a.R.T[1,3] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1715(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1715};
  jacobian->tmpVars[39] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[37] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac261.dummyVarLSJac261[3])) JACOBIAN_DIFF_VAR */ + (0.014) * ((data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */)) + (-0.014) * ((data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1716
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] = (actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] * actuators.body_rolling.r_CM[2] - actuators.body_rolling.frame_a.R.T[3,3] * actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[3] - actuators.body_rolling.frame_a.R.T[3,2] * actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[2] - actuators.body_rolling.frame_a.R.T[3,1] * actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[1]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1716(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1716};
  jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) - ((jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */)) - ((data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * (jacobian->tmpVars[39] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * (jacobian->tmpVars[35] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * (jacobian->tmpVars[38] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 1717
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] = (actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[3] - actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[2] - actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[1]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1717(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1717};
  jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */)) - ((data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (jacobian->tmpVars[39] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[35] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (jacobian->tmpVars[38] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 1718
type: SIMPLE_ASSIGN
actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 = (actuators.body_rolling.frame_a.R.T[1,1] * actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[1] + actuators.body_rolling.frame_a.R.T[1,2] * actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[2] + actuators.body_rolling.frame_a.R.T[1,3] * actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[3] + actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] * actuators.body_rolling.r_CM[2]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1718(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1718};
  jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (jacobian->tmpVars[38] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[35] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[39] /* actuators.body_rolling.a_0.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] = actuators.revolute.R_rel.T[1,3] * actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 + (-actuators.revolute.R_rel.T[2,3]) * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] - actuators.revolute.R_rel.T[3,3] * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1719(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1719};
  jacobian->tmpVars[46] /* actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] = actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] + actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1720(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1720};
  jacobian->tmpVars[65] /* actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[15] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[46] /* actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1721
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] = (-actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3]) - hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1721(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1721};
  jacobian->tmpVars[67] /* addedMassForcesTorques.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[65] /* actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[20] /* hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] = actuators.revolute.R_rel.T[1,2] * actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 + (-actuators.revolute.R_rel.T[2,2]) * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] - actuators.revolute.R_rel.T[3,2] * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1722(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1722};
  jacobian->tmpVars[47] /* actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1723
type: SIMPLE_ASSIGN
actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] = actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] + actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1723(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1723};
  jacobian->tmpVars[68] /* actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[17] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[47] /* actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] = (-actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2]) - hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1724(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1724};
  jacobian->tmpVars[69] /* addedMassForcesTorques.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[68] /* actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[21] /* hull.frame_a.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1725
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] = actuators.body_rolling.r_CM[2] * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] - actuators.body_rolling.r_CM[3] * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] - actuators.body_rolling.I[1,3] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] - actuators.body_rolling.I[1,2] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] - actuators.body_rolling.I[1,1] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1725(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1725};
  jacobian->tmpVars[43] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1726
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] = actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] + (-0.014) * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1726(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1726};
  jacobian->tmpVars[54] /* actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[43] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ + (-0.014) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1727
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] = (-actuators.body_rolling.r_CM[3]) * actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 - actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] - actuators.body_rolling.I[2,3] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] - actuators.body_rolling.I[2,2] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] - actuators.body_rolling.I[2,1] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1727(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1727};
  jacobian->tmpVars[44] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */)) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1728
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] = actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] + (-0.014) * actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1728(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1728};
  jacobian->tmpVars[55] /* actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[44] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ + (-0.014) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1729
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] = actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] - actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1729(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1729};
  jacobian->tmpVars[56] /* actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[55] /* actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */));
  TRACE_POP
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] = actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] + actuators.body_rolling.r_CM[2] * actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 - actuators.body_rolling.I[3,3] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] - actuators.body_rolling.I[3,2] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] - actuators.body_rolling.I[3,1] * actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1730(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1730};
  jacobian->tmpVars[45] /* actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1731
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] = actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] + actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1731(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1731};
  jacobian->tmpVars[48] /* actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[45] /* actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */);
  TRACE_POP
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] = (-actuators.revolute.R_rel.T[3,1]) * actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] - actuators.revolute.R_rel.T[1,1] * actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] - actuators.revolute.R_rel.T[2,1] * actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1732(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1732};
  jacobian->tmpVars[57] /* actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */)) * (jacobian->tmpVars[48] /* actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[54] /* actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[56] /* actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] = actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] + actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1733(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1733};
  jacobian->tmpVars[64] /* actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[19] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[57] /* actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1734
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] = (-actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1]) - hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1734(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1734};
  jacobian->tmpVars[66] /* addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[64] /* actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[23] /* hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] = (-actuators.revolute.R_rel.T[3,2]) * actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] - actuators.revolute.R_rel.T[1,2] * actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] - actuators.revolute.R_rel.T[2,2] * actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1735(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1735};
  jacobian->tmpVars[58] /* actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (jacobian->tmpVars[48] /* actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[54] /* actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->tmpVars[56] /* actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1736
type: SIMPLE_ASSIGN
actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] = actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] + actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1736(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1736};
  jacobian->tmpVars[60] /* actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[16] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[58] /* actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] = (-actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2]) - hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1737(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1737};
  jacobian->tmpVars[61] /* addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[60] /* actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[24] /* hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1738
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] = (-actuators.revolute.R_rel.T[3,3]) * actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] - actuators.revolute.R_rel.T[1,3] * actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] - actuators.revolute.R_rel.T[2,3] * actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1738(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1738};
  jacobian->tmpVars[59] /* actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (jacobian->tmpVars[48] /* actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[54] /* actuators.prismatic.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[56] /* actuators.revolute.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] = actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] + actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1739(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1739};
  jacobian->tmpVars[62] /* actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[18] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[59] /* actuators.revolute.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1740
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] = (-actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3]) - hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1740(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1740};
  jacobian->tmpVars[63] /* addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[62] /* actuators.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[22] /* hull.frame_a.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac261.dummyVarLSJac261 = hull.frame_a.R.T[1,1] * hull.z_a.SeedLSJac261[1] + hull.frame_a.R.T[2,1] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + hull.frame_a.R.T[3,1] * hull.z_a.SeedLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1741(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1741};
  jacobian->tmpVars[28] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac261.dummyVarLSJac261 = hull.frame_a.R.T[1,2] * hull.z_a.SeedLSJac261[1] + hull.frame_a.R.T[2,2] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + hull.frame_a.R.T[3,2] * hull.z_a.SeedLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1742(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1742};
  jacobian->tmpVars[29] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac261.dummyVarLSJac261 = hull.frame_a.R.T[1,3] * hull.z_a.SeedLSJac261[1] + hull.frame_a.R.T[2,3] * hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] + hull.frame_a.R.T[3,3] * hull.z_a.SeedLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1743(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1743};
  jacobian->tmpVars[30] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac261[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[1] = hull.frame_a.R.T[1,1] * addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac261.dummyVarLSJac261 + hull.frame_a.R.T[1,2] * addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac261.dummyVarLSJac261 + hull.frame_a.R.T[1,3] * addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac261.dummyVarLSJac261
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1744(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1744};
  jacobian->tmpVars[31] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[28] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[29] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[30] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[1] = (-addedMassForcesTorques.K_pdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1745(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1745};
  jacobian->tmpVars[53] /* addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */)) * (jacobian->tmpVars[31] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
$res_LSJac261_5.$pDERLSJac261.dummyVarLSJac261 = (-addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[1]) - addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1746(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1746};
  jacobian->resultVars[4] /* $res_LSJac261_5.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_VAR */ = (-jacobian->tmpVars[53] /* addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[66] /* addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[2] = hull.frame_a.R.T[2,1] * addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac261.dummyVarLSJac261 + hull.frame_a.R.T[2,2] * addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac261.dummyVarLSJac261 + hull.frame_a.R.T[2,3] * addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac261.dummyVarLSJac261
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1747(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1747};
  jacobian->tmpVars[32] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[28] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[29] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[30] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[3] = hull.frame_a.R.T[3,1] * addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac261.dummyVarLSJac261 + hull.frame_a.R.T[3,2] * addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac261.dummyVarLSJac261 + hull.frame_a.R.T[3,3] * addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac261.dummyVarLSJac261
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1748(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1748};
  jacobian->tmpVars[33] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[28] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->tmpVars[29] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[30] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[3] = hull.frame_a.R.T[3,1] * hull.a_0.SeedLSJac261[1] + hull.frame_a.R.T[3,2] * hull.a_0.SeedLSJac261[2] + hull.frame_a.R.T[3,3] * hull.a_0.SeedLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1749(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1749};
  jacobian->tmpVars[6] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac261[2] SEED_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac261[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1750
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[3] = (-addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[2] - addedMassForcesTorques.Z_wdot * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1750(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1750};
  jacobian->tmpVars[49] /* addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->tmpVars[32] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * (jacobian->tmpVars[6] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
$res_LSJac261_4.$pDERLSJac261.dummyVarLSJac261 = (-addedMassForcesTorques.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3]) - addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1751(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1751};
  jacobian->resultVars[3] /* $res_LSJac261_4.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_VAR */ = (-jacobian->tmpVars[67] /* addedMassForcesTorques.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[49] /* addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[2] = (-addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[3] - addedMassForcesTorques.M_qdot * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1752(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1752};
  jacobian->tmpVars[50] /* addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->tmpVars[6] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */) * (jacobian->tmpVars[32] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
$res_LSJac261_3.$pDERLSJac261.dummyVarLSJac261 = (-addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[2]) - addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1753(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1753};
  jacobian->resultVars[2] /* $res_LSJac261_3.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_VAR */ = (-jacobian->tmpVars[50] /* addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[61] /* addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[2] = hull.frame_a.R.T[2,1] * hull.a_0.SeedLSJac261[1] + hull.frame_a.R.T[2,2] * hull.a_0.SeedLSJac261[2] + hull.frame_a.R.T[2,3] * hull.a_0.SeedLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1754(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1754};
  jacobian->tmpVars[5] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac261[2] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac261[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1755
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[2] = (-addedMassForcesTorques.Y_rdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[3] - addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1755(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1755};
  jacobian->tmpVars[51] /* addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */)) * (jacobian->tmpVars[33] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * (jacobian->tmpVars[5] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
$res_LSJac261_2.$pDERLSJac261.dummyVarLSJac261 = (-addedMassForcesTorques.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2]) - addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1756(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1756};
  jacobian->resultVars[1] /* $res_LSJac261_2.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_VAR */ = (-jacobian->tmpVars[69] /* addedMassForcesTorques.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[51] /* addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[3] = (-addedMassForcesTorques.N_rdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[3] - addedMassForcesTorques.Y_rdot * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1757(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1757};
  jacobian->tmpVars[52] /* addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */)) * (jacobian->tmpVars[33] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * (jacobian->tmpVars[5] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
$res_LSJac261_1.$pDERLSJac261.dummyVarLSJac261 = (-addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[3]) - addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1758(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1758};
  jacobian->resultVars[0] /* $res_LSJac261_1.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_VAR */ = (-jacobian->tmpVars[52] /* addedMassForcesTorques.torque.torque.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[63] /* addedMassForcesTorques.frame_b.t.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[1] = hull.frame_a.R.T[1,1] * hull.a_0.SeedLSJac261[1] + hull.frame_a.R.T[1,2] * hull.a_0.SeedLSJac261[2] + hull.frame_a.R.T[1,3] * hull.a_0.SeedLSJac261[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1759(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1759};
  jacobian->tmpVars[4] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac261[1] SEED_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac261[2] SEED_VAR */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac261[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1760
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[1] = (-addedMassForcesTorques.X_udot) * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1760(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1760};
  jacobian->tmpVars[7] /* addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */)) * (jacobian->tmpVars[4] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1761
type: SIMPLE_ASSIGN
actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] = addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[1] - hull.frame_a.f.SeedLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1761(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1761};
  jacobian->tmpVars[11] /* actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* addedMassForcesTorques.force.force.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[2] /* hull.frame_a.f.SeedLSJac261[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1762
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] = actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] - actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1762(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1762};
  jacobian->tmpVars[14] /* actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* actuators.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[13] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1763
type: SIMPLE_ASSIGN
$res_LSJac261_6.$pDERLSJac261.dummyVarLSJac261 = actuators.revolute.R_rel.T[1,1] * actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 + (-actuators.revolute.R_rel.T[2,1]) * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] - actuators.revolute.R_rel.T[3,1] * actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] - actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1763(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1763};
  jacobian->resultVars[5] /* $res_LSJac261_6.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_VAR */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac261.dummyVarLSJac261 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac261.dummyVarLSJac261[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[14] /* actuators.revolute.frame_a.f.$pDERLSJac261.dummyVarLSJac261[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacLSJac261_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_LSJac261;
  
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacLSJac261_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_LSJac261;
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1695(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1696(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1697(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1698(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1699(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1700(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1701(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1702(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1703(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1704(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1705(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1706(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1707(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1708(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1709(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1710(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1711(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1712(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1713(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1714(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1715(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1716(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1717(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1718(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1719(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1720(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1721(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1722(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1723(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1724(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1725(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1726(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1727(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1728(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1729(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1730(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1731(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1732(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1733(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1734(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1735(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1736(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1737(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1738(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1739(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1740(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1741(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1742(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1743(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1744(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1745(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1746(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1747(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1748(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1749(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1750(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1751(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1752(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1753(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1754(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1755(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1756(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1757(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1758(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1759(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1760(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1761(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1762(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1763(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 3573
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] = 4.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac262[1] + actuators.bodyVariableMass.Q[4] * actuators.bodyVariableMass.Q.SeedNLSJac262[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3573(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3573};
  jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac262[1] SEED_VAR */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac262[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3574
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[3,3] = 4.0 * (actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q.SeedNLSJac262[3] + actuators.bodyVariableMass.Q[4] * actuators.bodyVariableMass.Q.SeedNLSJac262[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3574(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3574};
  jacobian->tmpVars[1] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[3,3] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac262[3] SEED_VAR */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac262[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3575
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] = 4.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q.SeedNLSJac262[2] + actuators.bodyVariableMass.Q[4] * actuators.bodyVariableMass.Q.SeedNLSJac262[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3575(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3575};
  jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] JACOBIAN_DIFF_VAR */ = (4.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac262[2] SEED_VAR */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac262[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3576
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac262[2] + actuators.bodyVariableMass.Q.SeedNLSJac262[1] * actuators.bodyVariableMass.Q[2] + actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q.SeedNLSJac262[4] + actuators.bodyVariableMass.Q.SeedNLSJac262[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3576(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3576};
  jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac262[2] SEED_VAR */) + (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac262[1] SEED_VAR */) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac262[4] SEED_VAR */) + (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac262[3] SEED_VAR */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3577
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[3,2] = 2.0 * (actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q.SeedNLSJac262[2] + actuators.bodyVariableMass.Q.SeedNLSJac262[3] * actuators.bodyVariableMass.Q[2] + (-actuators.bodyVariableMass.Q[1]) * actuators.bodyVariableMass.Q.SeedNLSJac262[4] - actuators.bodyVariableMass.Q.SeedNLSJac262[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3577(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3577};
  jacobian->tmpVars[4] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[3,2] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac262[2] SEED_VAR */) + (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac262[3] SEED_VAR */) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + ((-data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */)) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac262[4] SEED_VAR */) - ((jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac262[1] SEED_VAR */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3578
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] = 2.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q.SeedNLSJac262[3] + actuators.bodyVariableMass.Q.SeedNLSJac262[2] * actuators.bodyVariableMass.Q[3] + actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac262[4] + actuators.bodyVariableMass.Q.SeedNLSJac262[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3578(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3578};
  jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac262[3] SEED_VAR */) + (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac262[2] SEED_VAR */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac262[4] SEED_VAR */) + (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac262[1] SEED_VAR */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3579
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] = 2.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q.SeedNLSJac262[1] + actuators.bodyVariableMass.Q.SeedNLSJac262[2] * actuators.bodyVariableMass.Q[1] + (-actuators.bodyVariableMass.Q[3]) * actuators.bodyVariableMass.Q.SeedNLSJac262[4] - actuators.bodyVariableMass.Q.SeedNLSJac262[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3579(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3579};
  jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac262[1] SEED_VAR */) + (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac262[2] SEED_VAR */) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + ((-data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */)) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac262[4] SEED_VAR */) - ((jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac262[3] SEED_VAR */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3580
type: SIMPLE_ASSIGN
hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac262[3] + actuators.bodyVariableMass.Q.SeedNLSJac262[1] * actuators.bodyVariableMass.Q[3] + (-actuators.bodyVariableMass.Q[2]) * actuators.bodyVariableMass.Q.SeedNLSJac262[4] - actuators.bodyVariableMass.Q.SeedNLSJac262[2] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3580(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3580};
  jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] JACOBIAN_DIFF_VAR */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac262[3] SEED_VAR */) + (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac262[1] SEED_VAR */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + ((-data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */)) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac262[4] SEED_VAR */) - ((jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac262[2] SEED_VAR */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3581
type: SIMPLE_ASSIGN
$res_NLSJac262_1.$pDERNLSJac262.dummyVarNLSJac262 = if noEvent(hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08 == 0.0) then hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08 else (((hull.frame_a.R.T[1,2] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] * hull.frame_a.R.T[2,3] - (hull.frame_a.R.T[1,3] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] * hull.frame_a.R.T[2,2])) * (-9.999999983333334e-05) + (hull.frame_a.R.T[1,3] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] * hull.frame_a.R.T[2,1] - (hull.frame_a.R.T[1,1] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] * hull.frame_a.R.T[2,3])) * 0.9999994950000443 + (hull.frame_a.R.T[1,1] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] * hull.frame_a.R.T[2,2] - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] * hull.frame_a.R.T[2,1])) * 0.0009999998283333426) * (hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08) - ((hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1] - hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 0.0009999998283333426) * (hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] * 0.999999995 + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] * 9.999998316666754e-08)) / ((hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08) ^ 2.0 * (1.0 + (((hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1] - hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 0.0009999998283333426) / (hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08)) ^ 2.0))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3581(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3581};
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp18 = (modelica_boolean)((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08) == 0.0);
  if(tmp18)
  {
    tmp19 = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08);
  }
  else
  {
    tmp16 = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08);
    tmp17 = DIVISION(((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426),(data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08),"hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08");
    tmp19 = DIVISION((((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426)) * ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08)) - ((((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426)) * ((jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] JACOBIAN_DIFF_VAR */) * (0.999999995) + (jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] JACOBIAN_DIFF_VAR */) * (9.99999498333376e-05) + (jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] JACOBIAN_DIFF_VAR */) * (9.999998316666754e-08))),((tmp16 * tmp16)) * (1.0 + (tmp17 * tmp17)),"(hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08) ^ 2.0 * (1.0 + (((hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * (-9.999999983333334e-05) + (hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1] - hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3]) * 0.9999994950000443 + (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 0.0009999998283333426) / (hull.frame_a.R.T[1,1] * 0.999999995 + hull.frame_a.R.T[1,2] * 9.99999498333376e-05 + hull.frame_a.R.T[1,3] * 9.999998316666754e-08)) ^ 2.0)");
  }
  jacobian->resultVars[0] /* $res_NLSJac262_1.$pDERNLSJac262.dummyVarNLSJac262 JACOBIAN_VAR */ = tmp19;
  TRACE_POP
}

/*
equation index: 3582
type: SIMPLE_ASSIGN
$res_NLSJac262_2.$pDERNLSJac262.dummyVarNLSJac262 = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac262[1] + actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q.SeedNLSJac262[2] + actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q.SeedNLSJac262[3] + actuators.bodyVariableMass.Q[4] * actuators.bodyVariableMass.Q.SeedNLSJac262[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3582(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3582};
  jacobian->resultVars[1] /* $res_NLSJac262_2.$pDERNLSJac262.dummyVarNLSJac262 JACOBIAN_VAR */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac262[1] SEED_VAR */) + (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac262[2] SEED_VAR */) + (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac262[3] SEED_VAR */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac262[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3583
type: SIMPLE_ASSIGN
$res_NLSJac262_3.$pDERNLSJac262.dummyVarNLSJac262 = if noEvent(hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417 == 0.0) then hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417 else ((hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] * 0.999999995 + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] * 9.99999498333376e-05 + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] * 9.999998316666754e-08) * (hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417) - (hull.frame_a.R.T[2,1] * 0.999999995 + hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + hull.frame_a.R.T[2,3] * 9.999998316666754e-08) * (hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[3,3] * 0.9999995000000417)) / ((hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417) ^ 2.0 * (1.0 + ((hull.frame_a.R.T[2,1] * 0.999999995 + hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + hull.frame_a.R.T[2,3] * 9.999998316666754e-08) / (hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417)) ^ 2.0))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3583(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3583};
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  tmp23 = (modelica_boolean)((data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417) == 0.0);
  if(tmp23)
  {
    tmp24 = (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417);
  }
  else
  {
    tmp21 = (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417);
    tmp22 = DIVISION((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (9.999998316666754e-08),(data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417),"hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417");
    tmp24 = DIVISION(((jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] JACOBIAN_DIFF_VAR */) * (0.999999995) + (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] JACOBIAN_DIFF_VAR */) * (9.99999498333376e-05) + (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] JACOBIAN_DIFF_VAR */) * (9.999998316666754e-08)) * ((data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417)) - (((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (9.999998316666754e-08)) * ((jacobian->tmpVars[4] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[3,2] JACOBIAN_DIFF_VAR */) * (-0.0009999998333333417) + (jacobian->tmpVars[1] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[3,3] JACOBIAN_DIFF_VAR */) * (0.9999995000000417))),((tmp21 * tmp21)) * (1.0 + (tmp22 * tmp22)),"(hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417) ^ 2.0 * (1.0 + ((hull.frame_a.R.T[2,1] * 0.999999995 + hull.frame_a.R.T[2,2] * 9.99999498333376e-05 + hull.frame_a.R.T[2,3] * 9.999998316666754e-08) / (hull.frame_a.R.T[3,2] * (-0.0009999998333333417) + hull.frame_a.R.T[3,3] * 0.9999995000000417)) ^ 2.0)");
  }
  jacobian->resultVars[2] /* $res_NLSJac262_3.$pDERNLSJac262.dummyVarNLSJac262 JACOBIAN_VAR */ = tmp24;
  TRACE_POP
}

/*
equation index: 3584
type: SIMPLE_ASSIGN
$res_NLSJac262_4.$pDERNLSJac262.dummyVarNLSJac262 = if noEvent(hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426 == 0.0) then hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426 else (((hull.frame_a.R.T[1,1] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] * hull.frame_a.R.T[2,3] - (hull.frame_a.R.T[1,3] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] * hull.frame_a.R.T[2,1])) * 9.99999498333376e-05 - (hull.frame_a.R.T[1,1] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] * hull.frame_a.R.T[2,2] - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] * hull.frame_a.R.T[2,1])) * 9.999998316666754e-08 - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] * hull.frame_a.R.T[2,3] - (hull.frame_a.R.T[1,3] * hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] * hull.frame_a.R.T[2,2])) * 0.999999995) * (hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426) - ((hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * 0.999999995) * (hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] * 0.9999994950000443 + hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] * 0.0009999998283333426)) / ((hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426) ^ 2.0 * (1.0 + (((hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * 0.999999995) / (hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426)) ^ 2.0))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3584(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3584};
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  tmp28 = (modelica_boolean)((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426) == 0.0);
  if(tmp28)
  {
    tmp29 = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426);
  }
  else
  {
    tmp26 = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426);
    tmp27 = DIVISION(((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (0.999999995)),(data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426),"hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426");
    tmp29 = DIVISION((((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,1] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[7] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[1,3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (0.999999995))) * ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426)) - ((((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (0.999999995))) * ((jacobian->tmpVars[6] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,1] JACOBIAN_DIFF_VAR */) * (-9.999999983333334e-05) + (jacobian->tmpVars[2] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,2] JACOBIAN_DIFF_VAR */) * (0.9999994950000443) + (jacobian->tmpVars[5] /* hull.frame_a.R.T.$pDERNLSJac262.dummyVarNLSJac262[2,3] JACOBIAN_DIFF_VAR */) * (0.0009999998283333426))),((tmp26 * tmp26)) * (1.0 + (tmp27 * tmp27)),"(hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426) ^ 2.0 * (1.0 + (((hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,1]) * 9.99999498333376e-05 - (hull.frame_a.R.T[1,1] * hull.frame_a.R.T[2,2] - hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,1]) * 9.999998316666754e-08 - (hull.frame_a.R.T[1,2] * hull.frame_a.R.T[2,3] - hull.frame_a.R.T[1,3] * hull.frame_a.R.T[2,2]) * 0.999999995) / (hull.frame_a.R.T[2,1] * (-9.999999983333334e-05) + hull.frame_a.R.T[2,2] * 0.9999994950000443 + hull.frame_a.R.T[2,3] * 0.0009999998283333426)) ^ 2.0)");
  }
  jacobian->resultVars[3] /* $res_NLSJac262_4.$pDERNLSJac262.dummyVarNLSJac262 JACOBIAN_VAR */ = tmp29;
  TRACE_POP
}

OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacNLSJac262_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_NLSJac262;
  
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacNLSJac262_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_NLSJac262;
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3573(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3574(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3575(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3576(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3577(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3578(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3579(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3580(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3581(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3582(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3583(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3584(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 3918
type: SIMPLE_ASSIGN
hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] = (hull.frame_a.R.T[2,1] * hull.a_0.SeedLSJac263[1] + hull.frame_a.R.T[2,2] * hull.a_0.SeedLSJac263[2] + hull.frame_a.R.T[2,3] * hull.a_0.SeedLSJac263[3] + hull.z_a.SeedLSJac263[3] * hull.r_CM[1] - hull.z_a.SeedLSJac263[1] * hull.r_CM[3]) * hull.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3918(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3918};
  jacobian->tmpVars[21] /* hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac263[2] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac263[3] SEED_VAR */) + (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) - ((jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */);
  TRACE_POP
}

/*
equation index: 3919
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] = (hull.frame_a.R.T[2,1] * hull.a_0.SeedLSJac263[1] + hull.frame_a.R.T[2,2] * hull.a_0.SeedLSJac263[2] + hull.frame_a.R.T[2,3] * hull.a_0.SeedLSJac263[3] + hull.z_a.SeedLSJac263[3] * actuators.bodyVariableMass.r_CM[1] - hull.z_a.SeedLSJac263[1] * actuators.bodyVariableMass.r_CM[3]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3919(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3919};
  jacobian->tmpVars[17] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac263[2] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac263[3] SEED_VAR */) + (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) - ((jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}

/*
equation index: 3920
type: SIMPLE_ASSIGN
hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] = (hull.frame_a.f.SeedLSJac263[1] - hull.m * (hull.frame_a.R.T[1,1] * hull.a_0.SeedLSJac263[1] + hull.frame_a.R.T[1,2] * hull.a_0.SeedLSJac263[2] + hull.frame_a.R.T[1,3] * hull.a_0.SeedLSJac263[3] - hull.z_a.SeedLSJac263[3] * hull.r_CM[2])) / (hull.r_CM[3] * hull.m)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3920(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3920};
  jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[2] /* hull.frame_a.f.SeedLSJac263[1] SEED_VAR */ - ((data->simulationInfo->realParameter[407] /* hull.m PARAM */) * ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac263[2] SEED_VAR */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac263[3] SEED_VAR */) - ((jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */)))),(data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */),"hull.r_CM[3] * hull.m");
  TRACE_POP
}

/*
equation index: 3921
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] = (hull.frame_a.R.T[1,1] * hull.a_0.SeedLSJac263[1] + hull.frame_a.R.T[1,2] * hull.a_0.SeedLSJac263[2] + hull.frame_a.R.T[1,3] * hull.a_0.SeedLSJac263[3] + hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] * actuators.bodyVariableMass.r_CM[3] - hull.z_a.SeedLSJac263[3] * actuators.bodyVariableMass.r_CM[2]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3921(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3921};
  jacobian->tmpVars[13] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac263[2] SEED_VAR */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac263[3] SEED_VAR */) + (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) - ((jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}

/*
equation index: 3922
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] = (hull.frame_a.R.T[3,1] * hull.a_0.SeedLSJac263[1] + hull.frame_a.R.T[3,2] * hull.a_0.SeedLSJac263[2] + hull.frame_a.R.T[3,3] * hull.a_0.SeedLSJac263[3] + hull.z_a.SeedLSJac263[1] * actuators.bodyVariableMass.r_CM[2] - hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] * actuators.bodyVariableMass.r_CM[1]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3922(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3922};
  jacobian->tmpVars[15] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac263[2] SEED_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac263[3] SEED_VAR */) + (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) - ((jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}

/*
equation index: 3923
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] = actuators.bodyVariableMass.I[2,1] * hull.z_a.SeedLSJac263[1] + actuators.bodyVariableMass.I[2,2] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + actuators.bodyVariableMass.I[2,3] * hull.z_a.SeedLSJac263[3] + actuators.bodyVariableMass.r_CM[3] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] - actuators.bodyVariableMass.r_CM[1] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3923(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3923};
  jacobian->tmpVars[16] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */) + (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->tmpVars[13] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->tmpVars[15] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3924
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] = actuators.bodyVariableMass.I[3,1] * hull.z_a.SeedLSJac263[1] + actuators.bodyVariableMass.I[3,2] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + actuators.bodyVariableMass.I[3,3] * hull.z_a.SeedLSJac263[3] + actuators.bodyVariableMass.r_CM[1] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] - actuators.bodyVariableMass.r_CM[2] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3924(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3924};
  jacobian->tmpVars[18] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */) + (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->tmpVars[17] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->tmpVars[13] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3925
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] = actuators.bodyVariableMass.I[1,1] * hull.z_a.SeedLSJac263[1] + actuators.bodyVariableMass.I[1,2] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + actuators.bodyVariableMass.I[1,3] * hull.z_a.SeedLSJac263[3] + actuators.bodyVariableMass.r_CM[2] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] - actuators.bodyVariableMass.r_CM[3] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3925(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3925};
  jacobian->tmpVars[19] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */) + (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->tmpVars[15] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->tmpVars[17] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3926
type: SIMPLE_ASSIGN
hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] = (hull.frame_a.R.T[3,1] * hull.a_0.SeedLSJac263[1] + hull.frame_a.R.T[3,2] * hull.a_0.SeedLSJac263[2] + hull.frame_a.R.T[3,3] * hull.a_0.SeedLSJac263[3] + hull.z_a.SeedLSJac263[1] * hull.r_CM[2] - hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] * hull.r_CM[1]) * hull.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3926(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3926};
  jacobian->tmpVars[20] /* hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac263[2] SEED_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac263[3] SEED_VAR */) + (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) - ((jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */);
  TRACE_POP
}

/*
equation index: 3927
type: SIMPLE_ASSIGN
hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] = hull.I[3,1] * hull.z_a.SeedLSJac263[1] + hull.I[3,2] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + hull.I[3,3] * hull.z_a.SeedLSJac263[3] + hull.r_CM[1] * hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] - hull.r_CM[2] * hull.frame_a.f.SeedLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3927(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3927};
  jacobian->tmpVars[22] /* hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */) + (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (jacobian->tmpVars[21] /* hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (jacobian->seedVars[2] /* hull.frame_a.f.SeedLSJac263[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 3928
type: SIMPLE_ASSIGN
hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] = hull.I[1,1] * hull.z_a.SeedLSJac263[1] + hull.I[1,2] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + hull.I[1,3] * hull.z_a.SeedLSJac263[3] + hull.r_CM[2] * hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] - hull.r_CM[3] * hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3928(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3928};
  jacobian->tmpVars[23] /* hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */) + (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (jacobian->tmpVars[20] /* hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (jacobian->tmpVars[21] /* hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3929
type: SIMPLE_ASSIGN
hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] = hull.I[2,1] * hull.z_a.SeedLSJac263[1] + hull.I[2,2] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + hull.I[2,3] * hull.z_a.SeedLSJac263[3] + hull.r_CM[3] * hull.frame_a.f.SeedLSJac263[1] - hull.r_CM[1] * hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3929(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3929};
  jacobian->tmpVars[24] /* hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */) + (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (jacobian->seedVars[2] /* hull.frame_a.f.SeedLSJac263[1] SEED_VAR */) - ((data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (jacobian->tmpVars[20] /* hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3930
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] = actuators.revolute.R_rel.T[1,1] * hull.z_a.SeedLSJac263[1] + actuators.revolute.R_rel.T[1,2] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + actuators.revolute.R_rel.T[1,3] * hull.z_a.SeedLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3930(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3930};
  jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3931
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] = actuators.revolute.R_rel.T[2,1] * hull.z_a.SeedLSJac263[1] + actuators.revolute.R_rel.T[2,2] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + actuators.revolute.R_rel.T[2,3] * hull.z_a.SeedLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3931(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3931};
  jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3932
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] = actuators.revolute.R_rel.T[3,1] * hull.z_a.SeedLSJac263[1] + actuators.revolute.R_rel.T[3,2] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + actuators.revolute.R_rel.T[3,3] * hull.z_a.SeedLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3932(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3932};
  jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3933
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[2] = hull.a_0.SeedLSJac263[2] + actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] * actuators.position_slidingMass.s - actuators.body_rolling.frame_a.R.T[3,2] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3933(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3933};
  jacobian->tmpVars[34] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[2])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[5] /* hull.a_0.SeedLSJac263[2] SEED_VAR */ + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 3934
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[2] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[2] + 0.014 * actuators.body_rolling.frame_a.R.T[1,2] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3934(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3934};
  jacobian->tmpVars[35] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[34] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[2])) JACOBIAN_DIFF_VAR */ + (0.014) * ((data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */)) + (-0.014) * ((data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3935
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[1] = hull.a_0.SeedLSJac263[1] + actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] * actuators.position_slidingMass.s - actuators.body_rolling.frame_a.R.T[3,1] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3935(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3935};
  jacobian->tmpVars[36] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[1])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[4] /* hull.a_0.SeedLSJac263[1] SEED_VAR */ + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 3936
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[1] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[1] + 0.014 * actuators.body_rolling.frame_a.R.T[1,1] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3936(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3936};
  jacobian->tmpVars[38] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[36] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[1])) JACOBIAN_DIFF_VAR */ + (0.014) * ((data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */)) + (-0.014) * ((data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3937
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[3] = hull.a_0.SeedLSJac263[3] + actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] * actuators.position_slidingMass.s - actuators.body_rolling.frame_a.R.T[3,3] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3937(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3937};
  jacobian->tmpVars[37] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[3])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[3] /* hull.a_0.SeedLSJac263[3] SEED_VAR */ + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 3938
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[3] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[3] + 0.014 * actuators.body_rolling.frame_a.R.T[1,3] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3938(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3938};
  jacobian->tmpVars[39] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[37] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac263.dummyVarLSJac263[3])) JACOBIAN_DIFF_VAR */ + (0.014) * ((data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */)) + (-0.014) * ((data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3939
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] = (actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] * actuators.body_rolling.r_CM[2] - actuators.body_rolling.frame_a.R.T[3,3] * actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[3] - actuators.body_rolling.frame_a.R.T[3,2] * actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[2] - actuators.body_rolling.frame_a.R.T[3,1] * actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[1]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3939(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3939};
  jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) - ((jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */)) - ((data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * (jacobian->tmpVars[39] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * (jacobian->tmpVars[35] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * (jacobian->tmpVars[38] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 3940
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] = (actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[3] - actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[2] - actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[1]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3940(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3940};
  jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */)) - ((data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (jacobian->tmpVars[39] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[35] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (jacobian->tmpVars[38] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 3941
type: SIMPLE_ASSIGN
actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 = (actuators.body_rolling.frame_a.R.T[1,1] * actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[1] + actuators.body_rolling.frame_a.R.T[1,2] * actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[2] + actuators.body_rolling.frame_a.R.T[1,3] * actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[3] + actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] * actuators.body_rolling.r_CM[2]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3941(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3941};
  jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (jacobian->tmpVars[38] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[35] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[39] /* actuators.body_rolling.a_0.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 3942
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] = actuators.revolute.R_rel.T[1,3] * actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 + (-actuators.revolute.R_rel.T[2,3]) * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] - actuators.revolute.R_rel.T[3,3] * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3942(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3942};
  jacobian->tmpVars[46] /* actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3943
type: SIMPLE_ASSIGN
actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] = actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] + actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3943(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3943};
  jacobian->tmpVars[65] /* actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[15] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[46] /* actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3944
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] = (-actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3]) - hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3944(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3944};
  jacobian->tmpVars[67] /* addedMassForcesTorques.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[65] /* actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[20] /* hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3945
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] = actuators.revolute.R_rel.T[1,2] * actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 + (-actuators.revolute.R_rel.T[2,2]) * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] - actuators.revolute.R_rel.T[3,2] * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3945(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3945};
  jacobian->tmpVars[47] /* actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3946
type: SIMPLE_ASSIGN
actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] = actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] + actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3946(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3946};
  jacobian->tmpVars[68] /* actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[17] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[47] /* actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3947
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] = (-actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2]) - hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3947(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3947};
  jacobian->tmpVars[69] /* addedMassForcesTorques.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[68] /* actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[21] /* hull.frame_a.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3948
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] = actuators.body_rolling.r_CM[2] * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] - actuators.body_rolling.r_CM[3] * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] - actuators.body_rolling.I[1,3] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] - actuators.body_rolling.I[1,2] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] - actuators.body_rolling.I[1,1] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3948(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3948};
  jacobian->tmpVars[43] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3949
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] = actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] + (-0.014) * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3949(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3949};
  jacobian->tmpVars[54] /* actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[43] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ + (-0.014) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3950
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] = (-actuators.body_rolling.r_CM[3]) * actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 - actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] - actuators.body_rolling.I[2,3] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] - actuators.body_rolling.I[2,2] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] - actuators.body_rolling.I[2,1] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3950(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3950};
  jacobian->tmpVars[44] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */)) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3951
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] = actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] + (-0.014) * actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3951(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3951};
  jacobian->tmpVars[55] /* actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[44] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ + (-0.014) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3952
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] = actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] - actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3952(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3952};
  jacobian->tmpVars[56] /* actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[55] /* actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */));
  TRACE_POP
}

/*
equation index: 3953
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] = actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] + actuators.body_rolling.r_CM[2] * actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 - actuators.body_rolling.I[3,3] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] - actuators.body_rolling.I[3,2] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] - actuators.body_rolling.I[3,1] * actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3953(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3953};
  jacobian->tmpVars[45] /* actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (jacobian->tmpVars[27] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (jacobian->tmpVars[26] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (jacobian->tmpVars[25] /* actuators.body_rolling.z_a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3954
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] = actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] + actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3954(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3954};
  jacobian->tmpVars[48] /* actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[45] /* actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */);
  TRACE_POP
}

/*
equation index: 3955
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] = (-actuators.revolute.R_rel.T[3,1]) * actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] - actuators.revolute.R_rel.T[1,1] * actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] - actuators.revolute.R_rel.T[2,1] * actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3955(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3955};
  jacobian->tmpVars[57] /* actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */)) * (jacobian->tmpVars[48] /* actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[54] /* actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[56] /* actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3956
type: SIMPLE_ASSIGN
actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] = actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] + actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3956(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3956};
  jacobian->tmpVars[64] /* actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[19] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[57] /* actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3957
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] = (-actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1]) - hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3957(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3957};
  jacobian->tmpVars[66] /* addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[64] /* actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[23] /* hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3958
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] = (-actuators.revolute.R_rel.T[3,2]) * actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] - actuators.revolute.R_rel.T[1,2] * actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] - actuators.revolute.R_rel.T[2,2] * actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3958(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3958};
  jacobian->tmpVars[58] /* actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (jacobian->tmpVars[48] /* actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[54] /* actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->tmpVars[56] /* actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3959
type: SIMPLE_ASSIGN
actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] = actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] + actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3959(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3959};
  jacobian->tmpVars[60] /* actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[16] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[58] /* actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3960
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] = (-actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2]) - hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3960(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3960};
  jacobian->tmpVars[61] /* addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[60] /* actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[24] /* hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3961
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] = (-actuators.revolute.R_rel.T[3,3]) * actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] - actuators.revolute.R_rel.T[1,3] * actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] - actuators.revolute.R_rel.T[2,3] * actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3961(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3961};
  jacobian->tmpVars[59] /* actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (jacobian->tmpVars[48] /* actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[54] /* actuators.prismatic.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[56] /* actuators.revolute.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3962
type: SIMPLE_ASSIGN
actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] = actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] + actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3962(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3962};
  jacobian->tmpVars[62] /* actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[18] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[59] /* actuators.revolute.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3963
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] = (-actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3]) - hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3963(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3963};
  jacobian->tmpVars[63] /* addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[62] /* actuators.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[22] /* hull.frame_a.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3964
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac263.dummyVarLSJac263 = hull.frame_a.R.T[1,1] * hull.z_a.SeedLSJac263[1] + hull.frame_a.R.T[2,1] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + hull.frame_a.R.T[3,1] * hull.z_a.SeedLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3964(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3964};
  jacobian->tmpVars[28] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3965
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac263.dummyVarLSJac263 = hull.frame_a.R.T[1,2] * hull.z_a.SeedLSJac263[1] + hull.frame_a.R.T[2,2] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + hull.frame_a.R.T[3,2] * hull.z_a.SeedLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3965(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3965};
  jacobian->tmpVars[29] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3966
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac263.dummyVarLSJac263 = hull.frame_a.R.T[1,3] * hull.z_a.SeedLSJac263[1] + hull.frame_a.R.T[2,3] * hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] + hull.frame_a.R.T[3,3] * hull.z_a.SeedLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3966(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3966};
  jacobian->tmpVars[30] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.z_a.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[12] /* hull.z_a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.z_a.SeedLSJac263[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3967
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[1] = hull.frame_a.R.T[1,1] * addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac263.dummyVarLSJac263 + hull.frame_a.R.T[1,2] * addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac263.dummyVarLSJac263 + hull.frame_a.R.T[1,3] * addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac263.dummyVarLSJac263
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3967(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3967};
  jacobian->tmpVars[31] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[28] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[29] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[30] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3968
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[1] = (-addedMassForcesTorques.K_pdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3968(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3968};
  jacobian->tmpVars[53] /* addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */)) * (jacobian->tmpVars[31] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3969
type: SIMPLE_ASSIGN
$res_LSJac263_5.$pDERLSJac263.dummyVarLSJac263 = (-addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[1]) - addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3969(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3969};
  jacobian->resultVars[4] /* $res_LSJac263_5.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_VAR */ = (-jacobian->tmpVars[53] /* addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[66] /* addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3970
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[2] = hull.frame_a.R.T[2,1] * addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac263.dummyVarLSJac263 + hull.frame_a.R.T[2,2] * addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac263.dummyVarLSJac263 + hull.frame_a.R.T[2,3] * addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac263.dummyVarLSJac263
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3970(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3970};
  jacobian->tmpVars[32] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[28] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[29] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[30] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3971
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[3] = hull.frame_a.R.T[3,1] * addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac263.dummyVarLSJac263 + hull.frame_a.R.T[3,2] * addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac263.dummyVarLSJac263 + hull.frame_a.R.T[3,3] * addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac263.dummyVarLSJac263
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3971(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3971};
  jacobian->tmpVars[33] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[28] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->tmpVars[29] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[30] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3972
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[3] = hull.frame_a.R.T[3,1] * hull.a_0.SeedLSJac263[1] + hull.frame_a.R.T[3,2] * hull.a_0.SeedLSJac263[2] + hull.frame_a.R.T[3,3] * hull.a_0.SeedLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3972(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3972};
  jacobian->tmpVars[6] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac263[2] SEED_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac263[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3973
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[3] = (-addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[2] - addedMassForcesTorques.Z_wdot * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3973(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3973};
  jacobian->tmpVars[49] /* addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->tmpVars[32] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * (jacobian->tmpVars[6] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3974
type: SIMPLE_ASSIGN
$res_LSJac263_4.$pDERLSJac263.dummyVarLSJac263 = (-addedMassForcesTorques.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3]) - addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3974(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3974};
  jacobian->resultVars[3] /* $res_LSJac263_4.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_VAR */ = (-jacobian->tmpVars[67] /* addedMassForcesTorques.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[49] /* addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3975
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[2] = (-addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[3] - addedMassForcesTorques.M_qdot * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3975(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3975};
  jacobian->tmpVars[50] /* addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->tmpVars[6] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */) * (jacobian->tmpVars[32] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3976
type: SIMPLE_ASSIGN
$res_LSJac263_3.$pDERLSJac263.dummyVarLSJac263 = (-addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[2]) - addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3976(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3976};
  jacobian->resultVars[2] /* $res_LSJac263_3.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_VAR */ = (-jacobian->tmpVars[50] /* addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[61] /* addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3977
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[2] = hull.frame_a.R.T[2,1] * hull.a_0.SeedLSJac263[1] + hull.frame_a.R.T[2,2] * hull.a_0.SeedLSJac263[2] + hull.frame_a.R.T[2,3] * hull.a_0.SeedLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3977(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3977};
  jacobian->tmpVars[5] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac263[2] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac263[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3978
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[2] = (-addedMassForcesTorques.Y_rdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[3] - addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3978(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3978};
  jacobian->tmpVars[51] /* addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */)) * (jacobian->tmpVars[33] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * (jacobian->tmpVars[5] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3979
type: SIMPLE_ASSIGN
$res_LSJac263_2.$pDERLSJac263.dummyVarLSJac263 = (-addedMassForcesTorques.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2]) - addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3979(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3979};
  jacobian->resultVars[1] /* $res_LSJac263_2.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_VAR */ = (-jacobian->tmpVars[69] /* addedMassForcesTorques.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[51] /* addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3980
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[3] = (-addedMassForcesTorques.N_rdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[3] - addedMassForcesTorques.Y_rdot * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3980(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3980};
  jacobian->tmpVars[52] /* addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */)) * (jacobian->tmpVars[33] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * (jacobian->tmpVars[5] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 3981
type: SIMPLE_ASSIGN
$res_LSJac263_1.$pDERLSJac263.dummyVarLSJac263 = (-addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[3]) - addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3981(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3981};
  jacobian->resultVars[0] /* $res_LSJac263_1.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_VAR */ = (-jacobian->tmpVars[52] /* addedMassForcesTorques.torque.torque.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[63] /* addedMassForcesTorques.frame_b.t.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3982
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[1] = hull.frame_a.R.T[1,1] * hull.a_0.SeedLSJac263[1] + hull.frame_a.R.T[1,2] * hull.a_0.SeedLSJac263[2] + hull.frame_a.R.T[1,3] * hull.a_0.SeedLSJac263[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3982(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3982};
  jacobian->tmpVars[4] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.a_0.SeedLSJac263[1] SEED_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[5] /* hull.a_0.SeedLSJac263[2] SEED_VAR */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.a_0.SeedLSJac263[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 3983
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[1] = (-addedMassForcesTorques.X_udot) * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3983(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3983};
  jacobian->tmpVars[7] /* addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */)) * (jacobian->tmpVars[4] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 3984
type: SIMPLE_ASSIGN
actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] = addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[1] - hull.frame_a.f.SeedLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3984(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3984};
  jacobian->tmpVars[11] /* actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* addedMassForcesTorques.force.force.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[2] /* hull.frame_a.f.SeedLSJac263[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 3985
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] = actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] - actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3985(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3985};
  jacobian->tmpVars[14] /* actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* actuators.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[13] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 3986
type: SIMPLE_ASSIGN
$res_LSJac263_6.$pDERLSJac263.dummyVarLSJac263 = actuators.revolute.R_rel.T[1,1] * actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 + (-actuators.revolute.R_rel.T[2,1]) * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] - actuators.revolute.R_rel.T[3,1] * actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] - actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3986(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,3986};
  jacobian->resultVars[5] /* $res_LSJac263_6.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_VAR */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[41] /* actuators.prismatic.f.$pDERLSJac263.dummyVarLSJac263 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (jacobian->tmpVars[40] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[42] /* actuators.prismatic.frame_b.f.$pDERLSJac263.dummyVarLSJac263[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[14] /* actuators.revolute.frame_a.f.$pDERLSJac263.dummyVarLSJac263[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacLSJac263_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_LSJac263;
  
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacLSJac263_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_LSJac263;
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3918(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3919(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3920(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3921(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3922(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3923(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3924(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3925(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3926(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3927(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3928(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3929(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3930(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3931(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3932(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3933(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3934(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3935(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3936(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3937(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3938(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3939(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3940(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3941(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3942(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3943(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3944(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3945(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3946(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3947(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3948(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3949(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3950(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3951(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3952(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3953(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3954(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3955(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3956(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3957(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3958(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3959(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3960(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3961(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3962(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3963(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3964(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3965(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3966(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3967(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3968(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3969(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3970(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3971(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3972(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3973(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3974(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3975(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3976(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3977(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3978(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3979(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3980(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3981(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3982(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3983(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3984(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3985(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3986(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 4562
type: SIMPLE_ASSIGN
$res_NLSJac264_1.$pDERNLSJac264.dummyVarNLSJac264 = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedNLSJac264[1] + actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q.SeedNLSJac264[2] + actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q.SeedNLSJac264[3] + actuators.bodyVariableMass.Q[4] * actuators.bodyVariableMass.Q.SeedNLSJac264[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4562(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4562};
  jacobian->resultVars[0] /* $res_NLSJac264_1.$pDERNLSJac264.dummyVarNLSJac264 JACOBIAN_VAR */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac264[1] SEED_VAR */) + (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac264[2] SEED_VAR */) + (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac264[3] SEED_VAR */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac264[4] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4563
type: SIMPLE_ASSIGN
$res_NLSJac264_2.$pDERNLSJac264.dummyVarNLSJac264 = (*Real*)($STATESET1.A[1,4]) * actuators.bodyVariableMass.Q.SeedNLSJac264[1] + (*Real*)($STATESET1.A[1,3]) * actuators.bodyVariableMass.Q.SeedNLSJac264[2] + (*Real*)($STATESET1.A[1,2]) * actuators.bodyVariableMass.Q.SeedNLSJac264[3] + (*Real*)($STATESET1.A[1,1]) * actuators.bodyVariableMass.Q.SeedNLSJac264[4]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4563(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4563};
  jacobian->resultVars[1] /* $res_NLSJac264_2.$pDERNLSJac264.dummyVarNLSJac264 JACOBIAN_VAR */ = (((modelica_real)data->localData[0]->integerVars[3] /* $STATESET1.A[1,4] variable */)) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac264[1] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[2] /* $STATESET1.A[1,3] variable */)) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac264[2] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[1] /* $STATESET1.A[1,2] variable */)) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac264[3] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[0] /* $STATESET1.A[1,1] variable */)) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac264[4] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4564
type: SIMPLE_ASSIGN
$res_NLSJac264_3.$pDERNLSJac264.dummyVarNLSJac264 = (*Real*)($STATESET1.A[2,4]) * actuators.bodyVariableMass.Q.SeedNLSJac264[1] + (*Real*)($STATESET1.A[2,3]) * actuators.bodyVariableMass.Q.SeedNLSJac264[2] + (*Real*)($STATESET1.A[2,2]) * actuators.bodyVariableMass.Q.SeedNLSJac264[3] + (*Real*)($STATESET1.A[2,1]) * actuators.bodyVariableMass.Q.SeedNLSJac264[4]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4564(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4564};
  jacobian->resultVars[2] /* $res_NLSJac264_3.$pDERNLSJac264.dummyVarNLSJac264 JACOBIAN_VAR */ = (((modelica_real)data->localData[0]->integerVars[7] /* $STATESET1.A[2,4] variable */)) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac264[1] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[6] /* $STATESET1.A[2,3] variable */)) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac264[2] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[5] /* $STATESET1.A[2,2] variable */)) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac264[3] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[4] /* $STATESET1.A[2,1] variable */)) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac264[4] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4565
type: SIMPLE_ASSIGN
$res_NLSJac264_4.$pDERNLSJac264.dummyVarNLSJac264 = (*Real*)($STATESET1.A[3,4]) * actuators.bodyVariableMass.Q.SeedNLSJac264[1] + (*Real*)($STATESET1.A[3,3]) * actuators.bodyVariableMass.Q.SeedNLSJac264[2] + (*Real*)($STATESET1.A[3,2]) * actuators.bodyVariableMass.Q.SeedNLSJac264[3] + (*Real*)($STATESET1.A[3,1]) * actuators.bodyVariableMass.Q.SeedNLSJac264[4]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4565(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4565};
  jacobian->resultVars[3] /* $res_NLSJac264_4.$pDERNLSJac264.dummyVarNLSJac264 JACOBIAN_VAR */ = (((modelica_real)data->localData[0]->integerVars[11] /* $STATESET1.A[3,4] variable */)) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedNLSJac264[1] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[10] /* $STATESET1.A[3,3] variable */)) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedNLSJac264[2] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[9] /* $STATESET1.A[3,2] variable */)) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedNLSJac264[3] SEED_VAR */) + (((modelica_real)data->localData[0]->integerVars[8] /* $STATESET1.A[3,1] variable */)) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedNLSJac264[4] SEED_VAR */);
  TRACE_POP
}

OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacNLSJac264_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_NLSJac264;
  
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacNLSJac264_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_NLSJac264;
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4562(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4563(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4564(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4565(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 4851
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[1] = (-addedMassForcesTorques.force.force.SeedLSJac265[1]) / addedMassForcesTorques.X_udot
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4851(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4851};
  jacobian->tmpVars[0] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[11] /* addedMassForcesTorques.force.force.SeedLSJac265[1] SEED_VAR */),data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */,"addedMassForcesTorques.X_udot");
  TRACE_POP
}

/*
equation index: 4852
type: SIMPLE_ASSIGN
actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[1] = addedMassForcesTorques.force.force.SeedLSJac265[1] - hull.frame_a.f.SeedLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4852};
  jacobian->tmpVars[1] /* actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[11] /* addedMassForcesTorques.force.force.SeedLSJac265[1] SEED_VAR */ - jacobian->seedVars[10] /* hull.frame_a.f.SeedLSJac265[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4853
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[1] = actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[1] - actuators.bodyVariableMass.frame_a.f.SeedLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4853(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4853};
  jacobian->tmpVars[2] /* actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[9] /* actuators.bodyVariableMass.frame_a.f.SeedLSJac265[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4854
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[1] = (-addedMassForcesTorques.K_pdot) * addedMassForcesTorques.absoluteSensor.z.SeedLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4854(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4854};
  jacobian->tmpVars[3] /* addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */)) * (jacobian->seedVars[8] /* addedMassForcesTorques.absoluteSensor.z.SeedLSJac265[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4855
type: SIMPLE_ASSIGN
actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[1] = addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[1] - hull.frame_a.t.SeedLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4855(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4855};
  jacobian->tmpVars[4] /* actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[3] /* addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[7] /* hull.frame_a.t.SeedLSJac265[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4856
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[1] = actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[1] - actuators.revolute.frame_a.t.SeedLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4856(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4856};
  jacobian->tmpVars[5] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ - jacobian->seedVars[6] /* actuators.revolute.frame_a.t.SeedLSJac265[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4857
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac265.dummyVarLSJac265 = hull.frame_a.R.T[1,3] * hull.z_a.SeedLSJac265[1] + hull.frame_a.R.T[2,3] * hull.z_a.SeedLSJac265[2] + hull.frame_a.R.T[3,3] * hull.z_a.SeedLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4857(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4857};
  jacobian->tmpVars[6] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4858
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac265.dummyVarLSJac265 = hull.frame_a.R.T[1,2] * hull.z_a.SeedLSJac265[1] + hull.frame_a.R.T[2,2] * hull.z_a.SeedLSJac265[2] + hull.frame_a.R.T[3,2] * hull.z_a.SeedLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4858(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4858};
  jacobian->tmpVars[7] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4859
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac265.dummyVarLSJac265 = hull.frame_a.R.T[1,1] * hull.z_a.SeedLSJac265[1] + hull.frame_a.R.T[2,1] * hull.z_a.SeedLSJac265[2] + hull.frame_a.R.T[3,1] * hull.z_a.SeedLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4859(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4859};
  jacobian->tmpVars[8] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4860
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[3] = hull.frame_a.R.T[3,1] * addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac265.dummyVarLSJac265 + hull.frame_a.R.T[3,2] * addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac265.dummyVarLSJac265 + hull.frame_a.R.T[3,3] * addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac265.dummyVarLSJac265
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4860(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4860};
  jacobian->tmpVars[9] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[8] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->tmpVars[7] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[6] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 4861
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[2] = hull.frame_a.R.T[2,1] * addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac265.dummyVarLSJac265 + hull.frame_a.R.T[2,2] * addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac265.dummyVarLSJac265 + hull.frame_a.R.T[2,3] * addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac265.dummyVarLSJac265
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4861(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4861};
  jacobian->tmpVars[10] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[8] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[7] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[6] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 4862
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] = actuators.revolute.R_rel.T[3,1] * hull.z_a.SeedLSJac265[1] + actuators.revolute.R_rel.T[3,2] * hull.z_a.SeedLSJac265[2] + actuators.revolute.R_rel.T[3,3] * hull.z_a.SeedLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4862(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4862};
  jacobian->tmpVars[11] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4863
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] = actuators.revolute.R_rel.T[2,1] * hull.z_a.SeedLSJac265[1] + actuators.revolute.R_rel.T[2,2] * hull.z_a.SeedLSJac265[2] + actuators.revolute.R_rel.T[2,3] * hull.z_a.SeedLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4863(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4863};
  jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4864
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] = actuators.revolute.R_rel.T[1,1] * hull.z_a.SeedLSJac265[1] + actuators.revolute.R_rel.T[1,2] * hull.z_a.SeedLSJac265[2] + actuators.revolute.R_rel.T[1,3] * hull.z_a.SeedLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4864(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4864};
  jacobian->tmpVars[13] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4865
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[2] = hull.a_0.SeedLSJac265[2] + actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] * actuators.position_slidingMass.s - actuators.body_rolling.frame_a.R.T[3,2] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4865(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4865};
  jacobian->tmpVars[14] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[2])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[2] /* hull.a_0.SeedLSJac265[2] SEED_VAR */ + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((jacobian->tmpVars[11] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 4866
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[2] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[2] + 0.014 * actuators.body_rolling.frame_a.R.T[1,2] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4866(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4866};
  jacobian->tmpVars[15] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[14] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[2])) JACOBIAN_DIFF_VAR */ + (0.014) * ((data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */)) + (-0.014) * ((data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[13] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4867
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[3] = hull.a_0.SeedLSJac265[3] + actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] * actuators.position_slidingMass.s - actuators.body_rolling.frame_a.R.T[3,3] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4867(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4867};
  jacobian->tmpVars[16] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[3])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[1] /* hull.a_0.SeedLSJac265[3] SEED_VAR */ + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((jacobian->tmpVars[11] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 4868
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[3] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[3] + 0.014 * actuators.body_rolling.frame_a.R.T[1,3] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4868(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4868};
  jacobian->tmpVars[17] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[16] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[3])) JACOBIAN_DIFF_VAR */ + (0.014) * ((data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */)) + (-0.014) * ((data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (jacobian->tmpVars[13] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4869
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] = (hull.frame_a.R.T[3,1] * hull.a_0.SeedLSJac265[1] + hull.frame_a.R.T[3,2] * hull.a_0.SeedLSJac265[2] + hull.frame_a.R.T[3,3] * hull.a_0.SeedLSJac265[3] + hull.z_a.SeedLSJac265[1] * actuators.bodyVariableMass.r_CM[2] - hull.z_a.SeedLSJac265[2] * actuators.bodyVariableMass.r_CM[1]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4869(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4869};
  jacobian->tmpVars[18] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.a_0.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[2] /* hull.a_0.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.a_0.SeedLSJac265[3] SEED_VAR */) + (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) - ((jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}

/*
equation index: 4870
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] = actuators.bodyVariableMass.I[2,1] * hull.z_a.SeedLSJac265[1] + actuators.bodyVariableMass.I[2,2] * hull.z_a.SeedLSJac265[2] + actuators.bodyVariableMass.I[2,3] * hull.z_a.SeedLSJac265[3] + actuators.bodyVariableMass.r_CM[3] * actuators.bodyVariableMass.frame_a.f.SeedLSJac265[1] - actuators.bodyVariableMass.r_CM[1] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4870(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4870};
  jacobian->tmpVars[19] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */) + (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->seedVars[9] /* actuators.bodyVariableMass.frame_a.f.SeedLSJac265[1] SEED_VAR */) - ((data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->tmpVars[18] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4871
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] = (hull.frame_a.R.T[2,1] * hull.a_0.SeedLSJac265[1] + hull.frame_a.R.T[2,2] * hull.a_0.SeedLSJac265[2] + hull.frame_a.R.T[2,3] * hull.a_0.SeedLSJac265[3] + hull.z_a.SeedLSJac265[3] * actuators.bodyVariableMass.r_CM[1] - hull.z_a.SeedLSJac265[1] * actuators.bodyVariableMass.r_CM[3]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4871(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4871};
  jacobian->tmpVars[20] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.a_0.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[2] /* hull.a_0.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.a_0.SeedLSJac265[3] SEED_VAR */) + (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) - ((jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}

/*
equation index: 4872
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] = actuators.bodyVariableMass.I[3,1] * hull.z_a.SeedLSJac265[1] + actuators.bodyVariableMass.I[3,2] * hull.z_a.SeedLSJac265[2] + actuators.bodyVariableMass.I[3,3] * hull.z_a.SeedLSJac265[3] + actuators.bodyVariableMass.r_CM[1] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] - actuators.bodyVariableMass.r_CM[2] * actuators.bodyVariableMass.frame_a.f.SeedLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4872(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4872};
  jacobian->tmpVars[21] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */) + (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) * (jacobian->tmpVars[20] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->seedVars[9] /* actuators.bodyVariableMass.frame_a.f.SeedLSJac265[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4873
type: SIMPLE_ASSIGN
hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] = (hull.frame_a.R.T[3,1] * hull.a_0.SeedLSJac265[1] + hull.frame_a.R.T[3,2] * hull.a_0.SeedLSJac265[2] + hull.frame_a.R.T[3,3] * hull.a_0.SeedLSJac265[3] + hull.z_a.SeedLSJac265[1] * hull.r_CM[2] - hull.z_a.SeedLSJac265[2] * hull.r_CM[1]) * hull.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4873(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4873};
  jacobian->tmpVars[22] /* hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.a_0.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[2] /* hull.a_0.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.a_0.SeedLSJac265[3] SEED_VAR */) + (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) - ((jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */);
  TRACE_POP
}

/*
equation index: 4874
type: SIMPLE_ASSIGN
hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] = (hull.I[1,1] * hull.z_a.SeedLSJac265[1] + hull.I[1,2] * hull.z_a.SeedLSJac265[2] + hull.I[1,3] * hull.z_a.SeedLSJac265[3] + hull.r_CM[2] * hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] - hull.frame_a.t.SeedLSJac265[1]) / hull.r_CM[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4874(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4874};
  jacobian->tmpVars[23] /* hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = DIVISION((data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */) + (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (jacobian->tmpVars[22] /* hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[7] /* hull.frame_a.t.SeedLSJac265[1] SEED_VAR */,data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */,"hull.r_CM[3]");
  TRACE_POP
}

/*
equation index: 4875
type: SIMPLE_ASSIGN
hull.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] = hull.I[3,1] * hull.z_a.SeedLSJac265[1] + hull.I[3,2] * hull.z_a.SeedLSJac265[2] + hull.I[3,3] * hull.z_a.SeedLSJac265[3] + hull.r_CM[1] * hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] - hull.r_CM[2] * hull.frame_a.f.SeedLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4875(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4875};
  jacobian->tmpVars[24] /* hull.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */) + (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (jacobian->tmpVars[23] /* hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (jacobian->seedVars[10] /* hull.frame_a.f.SeedLSJac265[1] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 4876
type: SIMPLE_ASSIGN
hull.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] = hull.I[2,1] * hull.z_a.SeedLSJac265[1] + hull.I[2,2] * hull.z_a.SeedLSJac265[2] + hull.I[2,3] * hull.z_a.SeedLSJac265[3] + hull.r_CM[3] * hull.frame_a.f.SeedLSJac265[1] - hull.r_CM[1] * hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4876(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4876};
  jacobian->tmpVars[25] /* hull.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */) + (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (jacobian->seedVars[10] /* hull.frame_a.f.SeedLSJac265[1] SEED_VAR */) - ((data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (jacobian->tmpVars[22] /* hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4877
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[3] = hull.frame_a.R.T[3,1] * hull.a_0.SeedLSJac265[1] + hull.frame_a.R.T[3,2] * hull.a_0.SeedLSJac265[2] + hull.frame_a.R.T[3,3] * hull.a_0.SeedLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4877(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4877};
  jacobian->tmpVars[26] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.a_0.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (jacobian->seedVars[2] /* hull.a_0.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.a_0.SeedLSJac265[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4878
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[2] = hull.frame_a.R.T[2,1] * hull.a_0.SeedLSJac265[1] + hull.frame_a.R.T[2,2] * hull.a_0.SeedLSJac265[2] + hull.frame_a.R.T[2,3] * hull.a_0.SeedLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4878(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4878};
  jacobian->tmpVars[27] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.a_0.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[2] /* hull.a_0.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.a_0.SeedLSJac265[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 4879
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[1] = hull.a_0.SeedLSJac265[1] + actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] * actuators.position_slidingMass.s - actuators.body_rolling.frame_a.R.T[3,1] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4879(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4879};
  jacobian->tmpVars[28] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[1])) JACOBIAN_DIFF_VAR */ = jacobian->seedVars[0] /* hull.a_0.SeedLSJac265[1] SEED_VAR */ + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((jacobian->tmpVars[11] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}

/*
equation index: 4880
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[1] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[1] + 0.014 * actuators.body_rolling.frame_a.R.T[1,1] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4880(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4880};
  jacobian->tmpVars[29] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[28] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0.$pDERLSJac265.dummyVarLSJac265[1])) JACOBIAN_DIFF_VAR */ + (0.014) * ((data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */)) + (-0.014) * ((data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (jacobian->tmpVars[13] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4881
type: SIMPLE_ASSIGN
actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 = (actuators.body_rolling.frame_a.R.T[1,1] * actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[1] + actuators.body_rolling.frame_a.R.T[1,2] * actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[2] + actuators.body_rolling.frame_a.R.T[1,3] * actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[3] + actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] * actuators.body_rolling.r_CM[2]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4881(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4881};
  jacobian->tmpVars[30] /* actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (jacobian->tmpVars[29] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[15] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[17] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[11] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 4882
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] = (actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[3] - actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[2] - actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[1]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4882(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4882};
  jacobian->tmpVars[31] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[13] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((jacobian->tmpVars[11] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */)) - ((data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (jacobian->tmpVars[17] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (jacobian->tmpVars[15] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (jacobian->tmpVars[29] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 4883
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] = (actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] * actuators.body_rolling.r_CM[2] - actuators.body_rolling.frame_a.R.T[3,3] * actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[3] - actuators.body_rolling.frame_a.R.T[3,2] * actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[2] - actuators.body_rolling.frame_a.R.T[3,1] * actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[1]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4883(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4883};
  jacobian->tmpVars[32] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) - ((jacobian->tmpVars[13] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */)) - ((data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * (jacobian->tmpVars[17] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * (jacobian->tmpVars[15] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * (jacobian->tmpVars[29] /* actuators.body_rolling.a_0.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}

/*
equation index: 4884
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] = (-actuators.body_rolling.r_CM[3]) * actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 - actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] - actuators.body_rolling.I[2,3] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] - actuators.body_rolling.I[2,2] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] - actuators.body_rolling.I[2,1] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4884(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4884};
  jacobian->tmpVars[33] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */)) * (jacobian->tmpVars[30] /* actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[32] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (jacobian->tmpVars[11] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (jacobian->tmpVars[13] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4885
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] = actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] + actuators.body_rolling.r_CM[2] * actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 - actuators.body_rolling.I[3,3] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] - actuators.body_rolling.I[3,2] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] - actuators.body_rolling.I[3,1] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4885(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4885};
  jacobian->tmpVars[34] /* actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (jacobian->tmpVars[31] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[30] /* actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (jacobian->tmpVars[11] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (jacobian->tmpVars[13] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4886
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] = actuators.body_rolling.r_CM[2] * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] - actuators.body_rolling.r_CM[3] * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] - actuators.body_rolling.I[1,3] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] - actuators.body_rolling.I[1,2] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] - actuators.body_rolling.I[1,1] * actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4886(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4886};
  jacobian->tmpVars[35] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) * (jacobian->tmpVars[32] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) * (jacobian->tmpVars[31] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (jacobian->tmpVars[11] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (jacobian->tmpVars[12] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */)) - ((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (jacobian->tmpVars[13] /* actuators.body_rolling.z_a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4887
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] = actuators.revolute.R_rel.T[1,2] * actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 + (-actuators.revolute.R_rel.T[2,2]) * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] - actuators.revolute.R_rel.T[3,2] * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4887(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4887};
  jacobian->tmpVars[36] /* actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[30] /* actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (jacobian->tmpVars[31] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (jacobian->tmpVars[32] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4888
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] = actuators.revolute.R_rel.T[1,3] * actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 + (-actuators.revolute.R_rel.T[2,3]) * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] - actuators.revolute.R_rel.T[3,3] * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4888(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4888};
  jacobian->tmpVars[37] /* actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[30] /* actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (jacobian->tmpVars[31] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (jacobian->tmpVars[32] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4889
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] = actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] + actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4889(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4889};
  jacobian->tmpVars[38] /* actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[34] /* actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[31] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */);
  TRACE_POP
}

/*
equation index: 4890
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[2] = (-addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[3] - addedMassForcesTorques.M_qdot * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4890(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4890};
  jacobian->tmpVars[39] /* addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->tmpVars[26] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */) * (jacobian->tmpVars[10] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4891
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force.$pDERLSJac265.dummyVarLSJac265[3] = (-addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[2] - addedMassForcesTorques.Z_wdot * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4891(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4891};
  jacobian->tmpVars[40] /* addedMassForcesTorques.force.force.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */)) * (jacobian->tmpVars[10] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * (jacobian->tmpVars[26] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4892
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[3] = (-addedMassForcesTorques.N_rdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[3] - addedMassForcesTorques.Y_rdot * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4892(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4892};
  jacobian->tmpVars[41] /* addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */)) * (jacobian->tmpVars[9] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * (jacobian->tmpVars[27] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4893
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force.$pDERLSJac265.dummyVarLSJac265[2] = (-addedMassForcesTorques.Y_rdot) * addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[3] - addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4893(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4893};
  jacobian->tmpVars[42] /* addedMassForcesTorques.force.force.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */)) * (jacobian->tmpVars[9] /* addedMassForcesTorques.absoluteSensor.z.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * (jacobian->tmpVars[27] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4894
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] = actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] + (-0.014) * actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4894(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4894};
  jacobian->tmpVars[43] /* actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[33] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ + (-0.014) * (jacobian->tmpVars[30] /* actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 4895
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] = actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] - actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4895(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4895};
  jacobian->tmpVars[44] /* actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[43] /* actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[32] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */));
  TRACE_POP
}

/*
equation index: 4896
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] = actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] + (-0.014) * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4896(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4896};
  jacobian->tmpVars[45] /* actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[35] /* actuators.fixedTranslation_pendulumArm.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */ + (-0.014) * (jacobian->tmpVars[31] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 4897
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] = (-actuators.revolute.R_rel.T[3,3]) * actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] - actuators.revolute.R_rel.T[1,3] * actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] - actuators.revolute.R_rel.T[2,3] * actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4897(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4897};
  jacobian->tmpVars[46] /* actuators.revolute.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (jacobian->tmpVars[38] /* actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[45] /* actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (jacobian->tmpVars[44] /* actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4898
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] = (-actuators.revolute.R_rel.T[3,2]) * actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] - actuators.revolute.R_rel.T[1,2] * actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] - actuators.revolute.R_rel.T[2,2] * actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4898(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4898};
  jacobian->tmpVars[47] /* actuators.revolute.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (jacobian->tmpVars[38] /* actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (jacobian->tmpVars[45] /* actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */)) - ((data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (jacobian->tmpVars[44] /* actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4899
type: SIMPLE_ASSIGN
actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] = actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] + actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4899(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4899};
  jacobian->tmpVars[48] /* actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[18] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[37] /* actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4900
type: SIMPLE_ASSIGN
actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] = actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] + actuators.revolute.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4900(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4900};
  jacobian->tmpVars[49] /* actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[19] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[47] /* actuators.revolute.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4901
type: SIMPLE_ASSIGN
actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] = addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[3] - hull.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4901(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4901};
  jacobian->tmpVars[50] /* actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[41] /* addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[24] /* hull.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4902
type: SIMPLE_ASSIGN
actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] = addedMassForcesTorques.force.force.$pDERLSJac265.dummyVarLSJac265[2] - hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4902(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4902};
  jacobian->tmpVars[51] /* actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[42] /* addedMassForcesTorques.force.force.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[23] /* hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4903
type: SIMPLE_ASSIGN
$res_LSJac265_1.$pDERLSJac265.dummyVarLSJac265 = (hull.frame_a.R.T[1,1] * hull.a_0.SeedLSJac265[1] + hull.frame_a.R.T[1,2] * hull.a_0.SeedLSJac265[2] + hull.frame_a.R.T[1,3] * hull.a_0.SeedLSJac265[3] + hull.z_a.SeedLSJac265[2] * actuators.bodyVariableMass.r_CM[3] - hull.z_a.SeedLSJac265[3] * actuators.bodyVariableMass.r_CM[2]) * actuators.bodyVariableMass.m - actuators.bodyVariableMass.frame_a.f.SeedLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4903(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4903};
  jacobian->resultVars[0] /* $res_LSJac265_1.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.a_0.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[2] /* hull.a_0.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.a_0.SeedLSJac265[3] SEED_VAR */) + (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) - ((jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */) - jacobian->seedVars[9] /* actuators.bodyVariableMass.frame_a.f.SeedLSJac265[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4904
type: SIMPLE_ASSIGN
$res_LSJac265_2.$pDERLSJac265.dummyVarLSJac265 = (hull.frame_a.R.T[1,1] * hull.a_0.SeedLSJac265[1] + hull.frame_a.R.T[1,2] * hull.a_0.SeedLSJac265[2] + hull.frame_a.R.T[1,3] * hull.a_0.SeedLSJac265[3] + hull.z_a.SeedLSJac265[2] * hull.r_CM[3] - hull.z_a.SeedLSJac265[3] * hull.r_CM[2]) * hull.m - hull.frame_a.f.SeedLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4904(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4904};
  jacobian->resultVars[1] /* $res_LSJac265_2.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.a_0.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[2] /* hull.a_0.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.a_0.SeedLSJac265[3] SEED_VAR */) + (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) - ((jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */) - jacobian->seedVars[10] /* hull.frame_a.f.SeedLSJac265[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4905
type: SIMPLE_ASSIGN
$res_LSJac265_3.$pDERLSJac265.dummyVarLSJac265 = actuators.bodyVariableMass.r_CM[2] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] + actuators.bodyVariableMass.I[1,3] * hull.z_a.SeedLSJac265[3] + actuators.bodyVariableMass.I[1,2] * hull.z_a.SeedLSJac265[2] + actuators.bodyVariableMass.I[1,1] * hull.z_a.SeedLSJac265[1] + (-actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[1]) - actuators.bodyVariableMass.r_CM[3] * actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4905(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4905};
  jacobian->resultVars[2] /* $res_LSJac265_3.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) * (jacobian->tmpVars[18] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (jacobian->seedVars[3] /* hull.z_a.SeedLSJac265[2] SEED_VAR */) + (data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) + (-jacobian->tmpVars[5] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) * (jacobian->tmpVars[20] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4906
type: SIMPLE_ASSIGN
$res_LSJac265_4.$pDERLSJac265.dummyVarLSJac265 = hull.frame_a.R.T[1,3] * addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac265.dummyVarLSJac265 + hull.frame_a.R.T[1,2] * addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac265.dummyVarLSJac265 + hull.frame_a.R.T[1,1] * addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac265.dummyVarLSJac265 - addedMassForcesTorques.absoluteSensor.z.SeedLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4906(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4906};
  jacobian->resultVars[3] /* $res_LSJac265_4.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->tmpVars[6] /* addedMassForcesTorques.absoluteSensor.der2.3.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->tmpVars[7] /* addedMassForcesTorques.absoluteSensor.der2.2.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[8] /* addedMassForcesTorques.absoluteSensor.der2.1.y.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[8] /* addedMassForcesTorques.absoluteSensor.z.SeedLSJac265[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 4907
type: SIMPLE_ASSIGN
$res_LSJac265_5.$pDERLSJac265.dummyVarLSJac265 = actuators.revolute.R_rel.T[1,1] * actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 + (-actuators.revolute.R_rel.T[2,1]) * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] - actuators.revolute.R_rel.T[3,1] * actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] - actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4907(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4907};
  jacobian->resultVars[4] /* $res_LSJac265_5.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[30] /* actuators.prismatic.f.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (jacobian->tmpVars[31] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (jacobian->tmpVars[32] /* actuators.prismatic.frame_b.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */)) - jacobian->tmpVars[2] /* actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4908
type: SIMPLE_ASSIGN
$res_LSJac265_6.$pDERLSJac265.dummyVarLSJac265 = actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] + actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] - actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4908(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4908};
  jacobian->resultVars[5] /* $res_LSJac265_6.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = jacobian->tmpVars[20] /* actuators.bodyVariableMass.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[36] /* actuators.revolute.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[51] /* actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4909
type: SIMPLE_ASSIGN
$res_LSJac265_7.$pDERLSJac265.dummyVarLSJac265 = (hull.frame_a.R.T[2,1] * hull.a_0.SeedLSJac265[1] + hull.frame_a.R.T[2,2] * hull.a_0.SeedLSJac265[2] + hull.frame_a.R.T[2,3] * hull.a_0.SeedLSJac265[3] + hull.z_a.SeedLSJac265[3] * hull.r_CM[1] - hull.z_a.SeedLSJac265[1] * hull.r_CM[3]) * hull.m - hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4909(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4909};
  jacobian->resultVars[6] /* $res_LSJac265_7.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.a_0.SeedLSJac265[1] SEED_VAR */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (jacobian->seedVars[2] /* hull.a_0.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.a_0.SeedLSJac265[3] SEED_VAR */) + (jacobian->seedVars[4] /* hull.z_a.SeedLSJac265[3] SEED_VAR */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) - ((jacobian->seedVars[5] /* hull.z_a.SeedLSJac265[1] SEED_VAR */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */) - jacobian->tmpVars[23] /* hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4910
type: SIMPLE_ASSIGN
$res_LSJac265_8.$pDERLSJac265.dummyVarLSJac265 = hull.frame_a.R.T[1,3] * hull.a_0.SeedLSJac265[3] + hull.frame_a.R.T[1,2] * hull.a_0.SeedLSJac265[2] + hull.frame_a.R.T[1,1] * hull.a_0.SeedLSJac265[1] - addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4910(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4910};
  jacobian->resultVars[7] /* $res_LSJac265_8.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (jacobian->seedVars[1] /* hull.a_0.SeedLSJac265[3] SEED_VAR */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (jacobian->seedVars[2] /* hull.a_0.SeedLSJac265[2] SEED_VAR */) + (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (jacobian->seedVars[0] /* hull.a_0.SeedLSJac265[1] SEED_VAR */) - jacobian->tmpVars[0] /* addedMassForcesTorques.absoluteSensor.a.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4911
type: SIMPLE_ASSIGN
$res_LSJac265_9.$pDERLSJac265.dummyVarLSJac265 = actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] + actuators.revolute.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] - actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4911(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4911};
  jacobian->resultVars[8] /* $res_LSJac265_9.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = jacobian->tmpVars[21] /* actuators.bodyVariableMass.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[46] /* actuators.revolute.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[50] /* actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4912
type: SIMPLE_ASSIGN
$res_LSJac265_10.$pDERLSJac265.dummyVarLSJac265 = actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] + hull.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] - addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4912(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4912};
  jacobian->resultVars[9] /* $res_LSJac265_10.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = jacobian->tmpVars[49] /* actuators.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[25] /* hull.frame_a.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[39] /* addedMassForcesTorques.torque.torque.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 4913
type: SIMPLE_ASSIGN
$res_LSJac265_11.$pDERLSJac265.dummyVarLSJac265 = (-actuators.revolute.R_rel.T[3,1]) * actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] - actuators.revolute.R_rel.T[1,1] * actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] - actuators.revolute.frame_a.t.SeedLSJac265[1] - actuators.revolute.R_rel.T[2,1] * actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4913(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4913};
  jacobian->resultVars[10] /* $res_LSJac265_11.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */)) * (jacobian->tmpVars[38] /* actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (jacobian->tmpVars[45] /* actuators.prismatic.frame_b.t.$pDERLSJac265.dummyVarLSJac265[1] JACOBIAN_DIFF_VAR */)) - jacobian->seedVars[6] /* actuators.revolute.frame_a.t.SeedLSJac265[1] SEED_VAR */ - ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (jacobian->tmpVars[44] /* actuators.revolute.frame_b.t.$pDERLSJac265.dummyVarLSJac265[2] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 4914
type: SIMPLE_ASSIGN
$res_LSJac265_12.$pDERLSJac265.dummyVarLSJac265 = actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] + hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] - addedMassForcesTorques.force.force.$pDERLSJac265.dummyVarLSJac265[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4914(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,4914};
  jacobian->resultVars[11] /* $res_LSJac265_12.$pDERLSJac265.dummyVarLSJac265 JACOBIAN_VAR */ = jacobian->tmpVars[48] /* actuators.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[22] /* hull.frame_a.f.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[40] /* addedMassForcesTorques.force.force.$pDERLSJac265.dummyVarLSJac265[3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacLSJac265_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_LSJac265;
  
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacLSJac265_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_LSJac265;
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4851(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4852(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4853(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4854(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4855(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4856(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4857(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4858(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4859(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4860(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4861(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4862(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4863(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4864(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4865(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4866(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4867(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4868(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4869(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4870(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4871(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4872(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4873(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4874(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4875(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4876(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4877(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4878(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4879(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4880(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4881(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4882(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4883(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4884(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4885(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4886(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4887(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4888(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4889(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4890(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4891(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4892(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4893(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4894(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4895(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4896(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4897(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4898(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4899(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4900(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4901(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4902(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4903(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4904(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4905(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4906(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4907(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4908(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4909(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4910(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4911(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4912(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4913(data, threadData, jacobian, parentJacobian);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4914(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_A;
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 7444
type: SIMPLE_ASSIGN
$STATESET1.J.$pDERStateSetJac266.dummyVarStateSetJac266 = (-2.0) * (actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q.SeedStateSetJac266[3] + actuators.bodyVariableMass.Q[4] * actuators.bodyVariableMass.Q.SeedStateSetJac266[4] + actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q.SeedStateSetJac266[2] + actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q.SeedStateSetJac266[1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_7444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,7444};
  jacobian->resultVars[0] /* $STATESET1.J.$pDERStateSetJac266.dummyVarStateSetJac266 JACOBIAN_VAR */ = (-2.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (jacobian->seedVars[1] /* actuators.bodyVariableMass.Q.SeedStateSetJac266[3] SEED_VAR */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (jacobian->seedVars[0] /* actuators.bodyVariableMass.Q.SeedStateSetJac266[4] SEED_VAR */) + (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (jacobian->seedVars[2] /* actuators.bodyVariableMass.Q.SeedStateSetJac266[2] SEED_VAR */) + (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (jacobian->seedVars[3] /* actuators.bodyVariableMass.Q.SeedStateSetJac266[1] SEED_VAR */));
  TRACE_POP
}

OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacStateSetJac266_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_StateSetJac266;
  
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacStateSetJac266_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_StateSetJac266;
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_7444(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianNLSJac260(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianLSJac261(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+6] = {0,6,6,6,6,6,6};
  const int rowIndex[36] = {0,1,2,3,4,5,0,1,2,3,4,5,0,1,2,3,4,5,0,1,2,3,4,5,0,1,2,3,4,5,0,1,2,3,4,5};
  int i = 0;
  
  jacobian->sizeCols = 6;
  jacobian->sizeRows = 6;
  jacobian->sizeTmpVars = 76;
  jacobian->seedVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(76,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(36*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 36;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(6*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 6;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (6+1)*sizeof(unsigned int));
  
  for(i=2;i<6+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 36*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[5] = 1;
  jacobian->sparsePattern->colorCols[4] = 2;
  jacobian->sparsePattern->colorCols[3] = 3;
  jacobian->sparsePattern->colorCols[2] = 4;
  jacobian->sparsePattern->colorCols[1] = 5;
  jacobian->sparsePattern->colorCols[0] = 6;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianNLSJac262(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianLSJac263(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+6] = {0,6,6,6,6,6,6};
  const int rowIndex[36] = {0,1,2,3,4,5,0,1,2,3,4,5,0,1,2,3,4,5,0,1,2,3,4,5,0,1,2,3,4,5,0,1,2,3,4,5};
  int i = 0;
  
  jacobian->sizeCols = 6;
  jacobian->sizeRows = 6;
  jacobian->sizeTmpVars = 76;
  jacobian->seedVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(76,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(36*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 36;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(6*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 6;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (6+1)*sizeof(unsigned int));
  
  for(i=2;i<6+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 36*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[5] = 1;
  jacobian->sparsePattern->colorCols[4] = 2;
  jacobian->sparsePattern->colorCols[3] = 3;
  jacobian->sparsePattern->colorCols[2] = 4;
  jacobian->sparsePattern->colorCols[1] = 5;
  jacobian->sparsePattern->colorCols[0] = 6;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianNLSJac264(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianLSJac265(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+12] = {0,11,11,11,11,11,9,2,4,2,4,4,2};
  const int rowIndex[82] = {0,1,2,4,5,6,7,8,9,10,11,0,1,2,4,5,6,7,8,9,10,11,0,1,2,4,5,6,7,8,9,10,11,0,1,2,3,4,5,6,8,9,10,11,0,1,2,3,4,5,6,8,9,10,11,2,3,4,5,6,8,9,10,11,2,10,2,5,6,8,2,3,0,4,8,9,1,4,8,9,4,7};
  int i = 0;
  
  jacobian->sizeCols = 12;
  jacobian->sizeRows = 12;
  jacobian->sizeTmpVars = 64;
  jacobian->seedVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(64,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((12+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(82*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 82;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(12*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 9;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (12+1)*sizeof(unsigned int));
  
  for(i=2;i<12+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 82*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[8] = 1;
  jacobian->sparsePattern->colorCols[10] = 1;
  jacobian->sparsePattern->colorCols[7] = 2;
  jacobian->sparsePattern->colorCols[11] = 2;
  jacobian->sparsePattern->colorCols[6] = 3;
  jacobian->sparsePattern->colorCols[9] = 3;
  jacobian->sparsePattern->colorCols[5] = 4;
  jacobian->sparsePattern->colorCols[4] = 5;
  jacobian->sparsePattern->colorCols[3] = 6;
  jacobian->sparsePattern->colorCols[2] = 7;
  jacobian->sparsePattern->colorCols[1] = 8;
  jacobian->sparsePattern->colorCols[0] = 9;
  TRACE_POP
  return 0;
}
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+16] = {0,9,9,9,7,7,8,8,7,7,7,9,9,9,0,0,0};
  const int rowIndex[105] = {0,1,2,7,8,9,10,11,12,0,1,2,7,8,9,10,11,12,0,1,2,7,8,9,10,11,12,6,7,8,9,10,11,12,5,7,8,9,10,11,12,4,5,7,8,9,10,11,12,3,6,7,8,9,10,11,12,7,8,9,10,11,12,13,7,8,9,10,11,12,14,7,8,9,10,11,12,15,0,1,2,7,8,9,10,11,12,0,1,2,7,8,9,10,11,12,0,1,2,7,8,9,10,11,12};
  int i = 0;
  
  jacobian->sizeCols = 16;
  jacobian->sizeRows = 16;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(16,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(16,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((16+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(105*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNoneZeros = 105;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(16*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 13;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (16+1)*sizeof(unsigned int));
  
  for(i=2;i<16+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 105*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[9] = 1;
  jacobian->sparsePattern->colorCols[8] = 2;
  jacobian->sparsePattern->colorCols[7] = 3;
  jacobian->sparsePattern->colorCols[12] = 4;
  jacobian->sparsePattern->colorCols[11] = 5;
  jacobian->sparsePattern->colorCols[10] = 6;
  jacobian->sparsePattern->colorCols[4] = 7;
  jacobian->sparsePattern->colorCols[3] = 8;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[6] = 10;
  jacobian->sparsePattern->colorCols[0] = 11;
  jacobian->sparsePattern->colorCols[1] = 12;
  jacobian->sparsePattern->colorCols[2] = 13;
  jacobian->sparsePattern->colorCols[13] = 13;
  jacobian->sparsePattern->colorCols[14] = 13;
  jacobian->sparsePattern->colorCols[15] = 13;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianStateSetJac266(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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


