/* Linear Systems */
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_model.h"
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 4787
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a[1] = (addedMassForcesTorques.Y_rdot * hull.w_a[3] ^ 2.0 + addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[3] - addedMassForcesTorques.Z_wdot * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[2] - addedMassForcesTorques.Z_qdot * hull.w_a[2] ^ 2.0 - addedMassForcesTorques.force.force[1]) / addedMassForcesTorques.X_udot
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4787};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */;
  tmp1 = data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */;
  data->localData[0]->realVars[664] /* addedMassForcesTorques.absoluteSensor.a[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((tmp0 * tmp0)) + (data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) - ((data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */))) - ((data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((tmp1 * tmp1))) - data->localData[0]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */,data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */,"addedMassForcesTorques.X_udot",equationIndexes);
  TRACE_POP
}
/*
equation index: 4788
type: SIMPLE_ASSIGN
actuators.frame_a.f[1] = addedMassForcesTorques.force.force[1] - (buoyancyForce.frame_b.f[1] + hull.frame_a.f[1] - hydrodynamicForcesTorques.F_hd_b[1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4788};
  data->localData[0]->realVars[538] /* actuators.frame_a.f[1] variable */ = data->localData[0]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */ - (data->localData[0]->realVars[1313] /* buoyancyForce.frame_b.f[1] variable */ + data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */ - data->localData[0]->realVars[1357] /* hydrodynamicForcesTorques.F_hd_b[1] variable */);
  TRACE_POP
}
/*
equation index: 4789
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f[1] = actuators.frame_a.f[1] - actuators.bodyVariableMass.frame_a.f[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4789};
  data->localData[0]->realVars[595] /* actuators.revolute.frame_a.f[1] variable */ = data->localData[0]->realVars[538] /* actuators.frame_a.f[1] variable */ - data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */;
  TRACE_POP
}
/*
equation index: 4790
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque[1] = ((-addedMassForcesTorques.Y_rdot) - addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[2] + (addedMassForcesTorques.M_qdot - addedMassForcesTorques.N_rdot) * hull.w_a[2] * hull.w_a[3] + (addedMassForcesTorques.Z_qdot + addedMassForcesTorques.Y_rdot) * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[3] + (addedMassForcesTorques.Y_vdot - addedMassForcesTorques.Z_wdot) * addedMassForcesTorques.absoluteSensor.v[2] * addedMassForcesTorques.absoluteSensor.v[3] - addedMassForcesTorques.K_pdot * addedMassForcesTorques.absoluteSensor.z[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4790};
  data->localData[0]->realVars[1226] /* addedMassForcesTorques.torque.torque[1] variable */ = ((-data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) - data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + (data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */ - data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */ + data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */)) - ((data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */) * (data->localData[0]->realVars[1093] /* addedMassForcesTorques.absoluteSensor.z[1] variable */));
  TRACE_POP
}
/*
equation index: 4791
type: SIMPLE_ASSIGN
actuators.frame_a.t[1] = addedMassForcesTorques.torque.torque[1] - (hull.frame_a.t[1] - hydrodynamicForcesTorques.T_hd_b[1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4791};
  data->localData[0]->realVars[541] /* actuators.frame_a.t[1] variable */ = data->localData[0]->realVars[1226] /* addedMassForcesTorques.torque.torque[1] variable */ - (data->localData[0]->realVars[1336] /* hull.frame_a.t[1] variable */ - data->localData[0]->realVars[1372] /* hydrodynamicForcesTorques.T_hd_b[1] variable */);
  TRACE_POP
}
/*
equation index: 4792
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t[1] = actuators.frame_a.t[1] - actuators.revolute.frame_a.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4792};
  data->localData[0]->realVars[152] /* actuators.bodyVariableMass.frame_a.t[1] variable */ = data->localData[0]->realVars[541] /* actuators.frame_a.t[1] variable */ - data->localData[0]->realVars[598] /* actuators.revolute.frame_a.t[1] variable */;
  TRACE_POP
}
/*
equation index: 4793
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[3].y = hull.frame_a.R.T[1,3] * hull.z_a[1] + hull.frame_a.R.T[2,3] * hull.z_a[2] + hull.frame_a.R.T[3,3] * hull.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4793};
  data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 4794
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[2].y = hull.frame_a.R.T[1,2] * hull.z_a[1] + hull.frame_a.R.T[2,2] * hull.z_a[2] + hull.frame_a.R.T[3,2] * hull.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4794};
  data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 4795
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[1].y = hull.frame_a.R.T[1,1] * hull.z_a[1] + hull.frame_a.R.T[2,1] * hull.z_a[2] + hull.frame_a.R.T[3,1] * hull.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4795};
  data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 4796
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z[3] = hull.frame_a.R.T[3,1] * addedMassForcesTorques.absoluteSensor.der2[1].y + hull.frame_a.R.T[3,2] * addedMassForcesTorques.absoluteSensor.der2[2].y + hull.frame_a.R.T[3,3] * addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4796};
  data->localData[0]->realVars[1095] /* addedMassForcesTorques.absoluteSensor.z[3] variable */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */);
  TRACE_POP
}
/*
equation index: 4797
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z[2] = hull.frame_a.R.T[2,1] * addedMassForcesTorques.absoluteSensor.der2[1].y + hull.frame_a.R.T[2,2] * addedMassForcesTorques.absoluteSensor.der2[2].y + hull.frame_a.R.T[2,3] * addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4797};
  data->localData[0]->realVars[1094] /* addedMassForcesTorques.absoluteSensor.z[2] variable */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */);
  TRACE_POP
}
/*
equation index: 4798
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a[3] = actuators.revolute.R_rel.T[3,1] * hull.z_a[1] + actuators.revolute.R_rel.T[3,2] * hull.z_a[2] + actuators.revolute.R_rel.T[3,3] * hull.z_a[3] + actuators.revolute.R_rel.w[2] * (actuators.revolute.R_rel.T[1,1] * hull.w_a[1] + actuators.revolute.R_rel.T[1,2] * hull.w_a[2] + actuators.revolute.R_rel.T[1,3] * hull.w_a[3]) + $DER.actuators.revolute.R_rel.w[3] - actuators.revolute.R_rel.w[1] * (actuators.revolute.R_rel.T[2,1] * hull.w_a[1] + actuators.revolute.R_rel.T[2,2] * hull.w_a[2] + actuators.revolute.R_rel.T[2,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4798};
  data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */ = (data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[582] /* actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + data->localData[0]->realVars[75] /* der(actuators.revolute.R_rel.w[3]) DUMMY_DER */ - ((data->localData[0]->realVars[581] /* actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4799
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a[2] = actuators.revolute.R_rel.T[2,1] * hull.z_a[1] + actuators.revolute.R_rel.T[2,2] * hull.z_a[2] + actuators.revolute.R_rel.T[2,3] * hull.z_a[3] + actuators.revolute.R_rel.w[1] * (actuators.revolute.R_rel.T[3,1] * hull.w_a[1] + actuators.revolute.R_rel.T[3,2] * hull.w_a[2] + actuators.revolute.R_rel.T[3,3] * hull.w_a[3]) + $DER.actuators.revolute.R_rel.w[2] - actuators.revolute.R_rel.w[3] * (actuators.revolute.R_rel.T[1,1] * hull.w_a[1] + actuators.revolute.R_rel.T[1,2] * hull.w_a[2] + actuators.revolute.R_rel.T[1,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4799};
  data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */ = (data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[581] /* actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + data->localData[0]->realVars[74] /* der(actuators.revolute.R_rel.w[2]) DUMMY_DER */ - ((data->localData[0]->realVars[583] /* actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4800
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a[1] = actuators.revolute.R_rel.T[1,1] * hull.z_a[1] + actuators.revolute.R_rel.T[1,2] * hull.z_a[2] + actuators.revolute.R_rel.T[1,3] * hull.z_a[3] + actuators.revolute.R_rel.w[3] * (actuators.revolute.R_rel.T[2,1] * hull.w_a[1] + actuators.revolute.R_rel.T[2,2] * hull.w_a[2] + actuators.revolute.R_rel.T[2,3] * hull.w_a[3]) + $DER.actuators.revolute.R_rel.w[1] - actuators.revolute.R_rel.w[2] * (actuators.revolute.R_rel.T[3,1] * hull.w_a[1] + actuators.revolute.R_rel.T[3,2] * hull.w_a[2] + actuators.revolute.R_rel.T[3,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4800};
  data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[583] /* actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + data->localData[0]->realVars[73] /* der(actuators.revolute.R_rel.w[1]) DUMMY_DER */ - ((data->localData[0]->realVars[582] /* actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4801
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] = hull.a_0[2] + actuators.body_rolling.frame_a.R.T[1,2] * (actuators.position_slidingMass.a + actuators.body_rolling.w_a[2] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s - actuators.position_slidingMass.s * actuators.body_rolling.w_a[3] ^ 2.0) + actuators.body_rolling.frame_a.R.T[2,2] * (2.0 * actuators.body_rolling.w_a[3] * actuators.prismatic.v + actuators.body_rolling.z_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.w_a[1] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s) + actuators.body_rolling.frame_a.R.T[3,2] * (2.0 * (-actuators.body_rolling.w_a[2]) * actuators.prismatic.v + actuators.body_rolling.w_a[1] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.z_a[2] * actuators.position_slidingMass.s)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4801};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[36] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[1322] /* hull.a_0[2] variable */ + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[547] /* actuators.position_slidingMass.a variable */ + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((2.0) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)))) + (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((2.0) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 4802
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0[2] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] + actuators.body_rolling.frame_a.R.T[1,2] * (0.014 * actuators.body_rolling.z_a[2] + (-0.014) * (-actuators.body_rolling.w_a[3]) * actuators.body_rolling.w_a[1]) + actuators.body_rolling.frame_a.R.T[2,2] * ((-0.014) * actuators.body_rolling.z_a[1] + 0.014 * actuators.body_rolling.w_a[3] * actuators.body_rolling.w_a[2]) + (-0.014) * actuators.body_rolling.frame_a.R.T[3,2] * (actuators.body_rolling.w_a[1] ^ 2.0 + actuators.body_rolling.w_a[2] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4802};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */;
  data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */ = data->localData[0]->realVars[36] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */ + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * ((0.014) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (-0.014) * (((-data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */))) + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((-0.014) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (0.014) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */))) + (-0.014) * ((data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 4803
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] = hull.a_0[3] + actuators.body_rolling.frame_a.R.T[1,3] * (actuators.position_slidingMass.a + actuators.body_rolling.w_a[2] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s - actuators.position_slidingMass.s * actuators.body_rolling.w_a[3] ^ 2.0) + actuators.body_rolling.frame_a.R.T[2,3] * (2.0 * actuators.body_rolling.w_a[3] * actuators.prismatic.v + actuators.body_rolling.z_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.w_a[1] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s) + actuators.body_rolling.frame_a.R.T[3,3] * (2.0 * (-actuators.body_rolling.w_a[2]) * actuators.prismatic.v + actuators.body_rolling.w_a[1] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.z_a[2] * actuators.position_slidingMass.s)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4803};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[37] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[1323] /* hull.a_0[3] variable */ + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[547] /* actuators.position_slidingMass.a variable */ + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((2.0) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)))) + (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((2.0) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 4804
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0[3] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] + actuators.body_rolling.frame_a.R.T[1,3] * (0.014 * actuators.body_rolling.z_a[2] + (-0.014) * (-actuators.body_rolling.w_a[3]) * actuators.body_rolling.w_a[1]) + actuators.body_rolling.frame_a.R.T[2,3] * ((-0.014) * actuators.body_rolling.z_a[1] + 0.014 * actuators.body_rolling.w_a[3] * actuators.body_rolling.w_a[2]) + (-0.014) * actuators.body_rolling.frame_a.R.T[3,3] * (actuators.body_rolling.w_a[1] ^ 2.0 + actuators.body_rolling.w_a[2] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4804};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */;
  data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */ = data->localData[0]->realVars[37] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * ((0.014) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (-0.014) * (((-data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */))) + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((-0.014) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (0.014) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */))) + (-0.014) * ((data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 4805
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f[3] = (hull.frame_a.R.T[3,1] * hull.a_0[1] + hull.frame_a.R.T[3,2] * hull.a_0[2] + hull.frame_a.R.T[3,3] * (-9.81 + hull.a_0[3]) + hull.z_a[1] * actuators.bodyVariableMass.r_CM[2] + hull.w_a[1] * (hull.w_a[3] * actuators.bodyVariableMass.r_CM[1] - hull.w_a[1] * actuators.bodyVariableMass.r_CM[3]) + hull.w_a[2] * (hull.w_a[3] * actuators.bodyVariableMass.r_CM[2] - hull.w_a[2] * actuators.bodyVariableMass.r_CM[3]) - hull.z_a[2] * actuators.bodyVariableMass.r_CM[1]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4805};
  data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}
/*
equation index: 4806
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t[2] = actuators.bodyVariableMass.I[2,1] * hull.z_a[1] + actuators.bodyVariableMass.I[2,2] * hull.z_a[2] + actuators.bodyVariableMass.I[2,3] * hull.z_a[3] + hull.w_a[3] * (actuators.bodyVariableMass.I[1,1] * hull.w_a[1] + actuators.bodyVariableMass.I[1,2] * hull.w_a[2] + actuators.bodyVariableMass.I[1,3] * hull.w_a[3]) + actuators.bodyVariableMass.r_CM[3] * actuators.bodyVariableMass.frame_a.f[1] + (-actuators.bodyVariableMass.r_CM[1]) * actuators.bodyVariableMass.frame_a.f[3] - hull.w_a[1] * (actuators.bodyVariableMass.I[3,1] * hull.w_a[1] + actuators.bodyVariableMass.I[3,2] * hull.w_a[2] + actuators.bodyVariableMass.I[3,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4806};
  data->localData[0]->realVars[153] /* actuators.bodyVariableMass.frame_a.t[2] variable */ = (data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) * (data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */) + ((-data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */)) * (data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4807
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f[2] = (hull.frame_a.R.T[2,1] * hull.a_0[1] + hull.frame_a.R.T[2,2] * hull.a_0[2] + hull.frame_a.R.T[2,3] * (-9.81 + hull.a_0[3]) + hull.z_a[3] * actuators.bodyVariableMass.r_CM[1] + hull.w_a[3] * (hull.w_a[2] * actuators.bodyVariableMass.r_CM[3] - hull.w_a[3] * actuators.bodyVariableMass.r_CM[2]) + hull.w_a[1] * (hull.w_a[2] * actuators.bodyVariableMass.r_CM[1] - hull.w_a[1] * actuators.bodyVariableMass.r_CM[2]) - hull.z_a[1] * actuators.bodyVariableMass.r_CM[3]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4807};
  data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}
/*
equation index: 4808
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t[3] = actuators.bodyVariableMass.I[3,1] * hull.z_a[1] + actuators.bodyVariableMass.I[3,2] * hull.z_a[2] + actuators.bodyVariableMass.I[3,3] * hull.z_a[3] + hull.w_a[1] * (actuators.bodyVariableMass.I[2,1] * hull.w_a[1] + actuators.bodyVariableMass.I[2,2] * hull.w_a[2] + actuators.bodyVariableMass.I[2,3] * hull.w_a[3]) + actuators.bodyVariableMass.r_CM[1] * actuators.bodyVariableMass.frame_a.f[2] + (-actuators.bodyVariableMass.r_CM[2]) * actuators.bodyVariableMass.frame_a.f[1] - hull.w_a[2] * (actuators.bodyVariableMass.I[1,1] * hull.w_a[1] + actuators.bodyVariableMass.I[1,2] * hull.w_a[2] + actuators.bodyVariableMass.I[1,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4808};
  data->localData[0]->realVars[154] /* actuators.bodyVariableMass.frame_a.t[3] variable */ = (data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) * (data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */) + ((-data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */)) * (data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4809
type: SIMPLE_ASSIGN
hull.frame_a.f[3] = (hull.frame_a.R.T[3,1] * hull.a_0[1] + hull.frame_a.R.T[3,2] * hull.a_0[2] + hull.frame_a.R.T[3,3] * (-9.81 + hull.a_0[3]) + hull.z_a[1] * hull.r_CM[2] + hull.w_a[1] * (hull.w_a[3] * hull.r_CM[1] - hull.w_a[1] * hull.r_CM[3]) + hull.w_a[2] * (hull.w_a[3] * hull.r_CM[2] - hull.w_a[2] * hull.r_CM[3]) - hull.z_a[2] * hull.r_CM[1]) * hull.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4809};
  data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */);
  TRACE_POP
}
/*
equation index: 4810
type: SIMPLE_ASSIGN
hull.frame_a.f[2] = (hull.I[1,1] * hull.z_a[1] + hull.I[1,2] * hull.z_a[2] + hull.I[1,3] * hull.z_a[3] + hull.w_a[2] * (hull.I[3,1] * hull.w_a[1] + hull.I[3,2] * hull.w_a[2] + hull.I[3,3] * hull.w_a[3]) + hull.r_CM[2] * hull.frame_a.f[3] - hull.w_a[3] * (hull.I[2,1] * hull.w_a[1] + hull.I[2,2] * hull.w_a[2] + hull.I[2,3] * hull.w_a[3]) - hull.frame_a.t[1]) / hull.r_CM[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4810};
  data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */))) - data->localData[0]->realVars[1336] /* hull.frame_a.t[1] variable */,data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */,"hull.r_CM[3]",equationIndexes);
  TRACE_POP
}
/*
equation index: 4811
type: SIMPLE_ASSIGN
hull.frame_a.t[3] = hull.I[3,1] * hull.z_a[1] + hull.I[3,2] * hull.z_a[2] + hull.I[3,3] * hull.z_a[3] + hull.w_a[1] * (hull.I[2,1] * hull.w_a[1] + hull.I[2,2] * hull.w_a[2] + hull.I[2,3] * hull.w_a[3]) + hull.r_CM[1] * hull.frame_a.f[2] - hull.r_CM[2] * hull.frame_a.f[1] - hull.w_a[2] * (hull.I[1,1] * hull.w_a[1] + hull.I[1,2] * hull.w_a[2] + hull.I[1,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4811};
  data->localData[0]->realVars[1338] /* hull.frame_a.t[3] variable */ = (data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */) - ((data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */)) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4812
type: SIMPLE_ASSIGN
hull.frame_a.t[2] = hull.I[2,1] * hull.z_a[1] + hull.I[2,2] * hull.z_a[2] + hull.I[2,3] * hull.z_a[3] + hull.w_a[3] * (hull.I[1,1] * hull.w_a[1] + hull.I[1,2] * hull.w_a[2] + hull.I[1,3] * hull.w_a[3]) + hull.r_CM[3] * hull.frame_a.f[1] - hull.r_CM[1] * hull.frame_a.f[3] - hull.w_a[1] * (hull.I[3,1] * hull.w_a[1] + hull.I[3,2] * hull.w_a[2] + hull.I[3,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4812};
  data->localData[0]->realVars[1337] /* hull.frame_a.t[2] variable */ = (data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */) - ((data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */)) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4813
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a[3] = hull.frame_a.R.T[3,1] * hull.a_0[1] + hull.frame_a.R.T[3,2] * hull.a_0[2] + hull.frame_a.R.T[3,3] * hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4813};
  data->localData[0]->realVars[666] /* addedMassForcesTorques.absoluteSensor.a[3] variable */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1323] /* hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 4814
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a[2] = hull.frame_a.R.T[2,1] * hull.a_0[1] + hull.frame_a.R.T[2,2] * hull.a_0[2] + hull.frame_a.R.T[2,3] * hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4814};
  data->localData[0]->realVars[665] /* addedMassForcesTorques.absoluteSensor.a[2] variable */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1323] /* hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 4815
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] = hull.a_0[1] + actuators.body_rolling.frame_a.R.T[1,1] * (actuators.position_slidingMass.a + actuators.body_rolling.w_a[2] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s - actuators.position_slidingMass.s * actuators.body_rolling.w_a[3] ^ 2.0) + actuators.body_rolling.frame_a.R.T[2,1] * (2.0 * actuators.body_rolling.w_a[3] * actuators.prismatic.v + actuators.body_rolling.z_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.w_a[1] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s) + actuators.body_rolling.frame_a.R.T[3,1] * (2.0 * (-actuators.body_rolling.w_a[2]) * actuators.prismatic.v + actuators.body_rolling.w_a[1] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.z_a[2] * actuators.position_slidingMass.s)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4815};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[35] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[1321] /* hull.a_0[1] variable */ + (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[547] /* actuators.position_slidingMass.a variable */ + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((2.0) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)))) + (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((2.0) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 4816
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0[1] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] + actuators.body_rolling.frame_a.R.T[1,1] * (0.014 * actuators.body_rolling.z_a[2] + (-0.014) * (-actuators.body_rolling.w_a[3]) * actuators.body_rolling.w_a[1]) + actuators.body_rolling.frame_a.R.T[2,1] * ((-0.014) * actuators.body_rolling.z_a[1] + 0.014 * actuators.body_rolling.w_a[3] * actuators.body_rolling.w_a[2]) + (-0.014) * actuators.body_rolling.frame_a.R.T[3,1] * (actuators.body_rolling.w_a[1] ^ 2.0 + actuators.body_rolling.w_a[2] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4816};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */;
  data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */ = data->localData[0]->realVars[35] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */ + (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * ((0.014) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (-0.014) * (((-data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */))) + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((-0.014) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (0.014) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */))) + (-0.014) * ((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 4817
type: SIMPLE_ASSIGN
actuators.prismatic.f = (actuators.body_rolling.frame_a.R.T[1,1] * actuators.body_rolling.a_0[1] + actuators.body_rolling.frame_a.R.T[1,2] * actuators.body_rolling.a_0[2] + actuators.body_rolling.frame_a.R.T[1,3] * (-9.81 + actuators.body_rolling.a_0[3]) + actuators.body_rolling.z_a[2] * actuators.body_rolling.r_CM[3] + actuators.body_rolling.w_a[2] * (actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[2] - actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[1]) + actuators.body_rolling.w_a[3] * (actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[1]) - actuators.body_rolling.z_a[3] * actuators.body_rolling.r_CM[2]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4817};
  data->localData[0]->realVars[565] /* actuators.prismatic.f variable */ = ((data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */))) + (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 4818
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f[2] = (-(actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.a_0[1] + actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.a_0[2] + actuators.body_rolling.frame_a.R.T[2,3] * (-9.81 + actuators.body_rolling.a_0[3]) + actuators.body_rolling.z_a[3] * actuators.body_rolling.r_CM[1] + actuators.body_rolling.w_a[3] * (actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[2]) + actuators.body_rolling.w_a[1] * (actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[2]) - actuators.body_rolling.z_a[1] * actuators.body_rolling.r_CM[3])) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4818};
  data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */ = ((-((data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) + (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */))))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 4819
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f[3] = (-(actuators.body_rolling.frame_a.R.T[3,1] * actuators.body_rolling.a_0[1] + actuators.body_rolling.frame_a.R.T[3,2] * actuators.body_rolling.a_0[2] + actuators.body_rolling.frame_a.R.T[3,3] * (-9.81 + actuators.body_rolling.a_0[3]) + actuators.body_rolling.z_a[1] * actuators.body_rolling.r_CM[2] + actuators.body_rolling.w_a[1] * (actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[3]) + actuators.body_rolling.w_a[2] * (actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[2] - actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[3]) - actuators.body_rolling.z_a[2] * actuators.body_rolling.r_CM[1])) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4819};
  data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */ = ((-((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * (data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */))) + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */))))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 4820
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t[2] = -(actuators.body_rolling.I[2,1] * actuators.body_rolling.z_a[1] + actuators.body_rolling.I[2,2] * actuators.body_rolling.z_a[2] + actuators.body_rolling.I[2,3] * actuators.body_rolling.z_a[3] + actuators.body_rolling.w_a[3] * (actuators.body_rolling.I[1,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[1,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[1,3] * actuators.body_rolling.w_a[3]) + actuators.body_rolling.r_CM[3] * actuators.prismatic.f + actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f[3] - actuators.body_rolling.w_a[1] * (actuators.body_rolling.I[3,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[3,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[3,3] * actuators.body_rolling.w_a[3]))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4820};
  data->localData[0]->realVars[524] /* actuators.fixedTranslation_pendulumArm.frame_b.t[2] variable */ = (-((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) + (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 4821
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t[3] = -(actuators.body_rolling.I[3,1] * actuators.body_rolling.z_a[1] + actuators.body_rolling.I[3,2] * actuators.body_rolling.z_a[2] + actuators.body_rolling.I[3,3] * actuators.body_rolling.z_a[3] + actuators.body_rolling.w_a[1] * (actuators.body_rolling.I[2,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[2,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[2,3] * actuators.body_rolling.w_a[3]) + (-actuators.body_rolling.r_CM[2]) * actuators.prismatic.f - actuators.body_rolling.w_a[2] * (actuators.body_rolling.I[1,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[1,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[1,3] * actuators.body_rolling.w_a[3]) - actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f[2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4821};
  data->localData[0]->realVars[570] /* actuators.prismatic.frame_b.t[3] variable */ = (-((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) + ((-data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) - ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */))) - ((data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */))));
  TRACE_POP
}
/*
equation index: 4822
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t[1] = -(actuators.body_rolling.I[1,1] * actuators.body_rolling.z_a[1] + actuators.body_rolling.I[1,2] * actuators.body_rolling.z_a[2] + actuators.body_rolling.I[1,3] * actuators.body_rolling.z_a[3] + actuators.body_rolling.w_a[2] * (actuators.body_rolling.I[3,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[3,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[3,3] * actuators.body_rolling.w_a[3]) + actuators.body_rolling.r_CM[3] * actuators.prismatic.frame_b.f[2] + (-actuators.body_rolling.r_CM[2]) * actuators.prismatic.frame_b.f[3] - actuators.body_rolling.w_a[3] * (actuators.body_rolling.I[2,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[2,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[2,3] * actuators.body_rolling.w_a[3]))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4822};
  data->localData[0]->realVars[523] /* actuators.fixedTranslation_pendulumArm.frame_b.t[1] variable */ = (-((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) + ((-data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 4823
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f[2] = actuators.revolute.R_rel.T[1,2] * actuators.prismatic.f + (-actuators.revolute.R_rel.T[2,2]) * actuators.prismatic.frame_b.f[2] - actuators.revolute.R_rel.T[3,2] * actuators.prismatic.frame_b.f[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4823};
  data->localData[0]->realVars[596] /* actuators.revolute.frame_a.f[2] variable */ = (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) + ((-data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) - ((data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */));
  TRACE_POP
}
/*
equation index: 4824
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f[3] = actuators.revolute.R_rel.T[1,3] * actuators.prismatic.f + (-actuators.revolute.R_rel.T[2,3]) * actuators.prismatic.frame_b.f[2] - actuators.revolute.R_rel.T[3,3] * actuators.prismatic.frame_b.f[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4824};
  data->localData[0]->realVars[597] /* actuators.revolute.frame_a.f[3] variable */ = (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) + ((-data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) - ((data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */));
  TRACE_POP
}
/*
equation index: 4825
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t[3] = actuators.prismatic.frame_b.t[3] + actuators.prismatic.frame_b.f[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4825};
  data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */ = data->localData[0]->realVars[570] /* actuators.prismatic.frame_b.t[3] variable */ + (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */);
  TRACE_POP
}
/*
equation index: 4826
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque[2] = addedMassForcesTorques.Y_rdot * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[1] + (addedMassForcesTorques.N_rdot - addedMassForcesTorques.K_pdot) * hull.w_a[3] * hull.w_a[1] + (addedMassForcesTorques.Z_wdot - addedMassForcesTorques.X_udot) * addedMassForcesTorques.absoluteSensor.v[3] * addedMassForcesTorques.absoluteSensor.v[1] + addedMassForcesTorques.Z_qdot * (addedMassForcesTorques.absoluteSensor.v[1] * hull.w_a[2] - addedMassForcesTorques.absoluteSensor.a[3]) - addedMassForcesTorques.M_qdot * addedMassForcesTorques.absoluteSensor.z[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4826};
  data->localData[0]->realVars[1227] /* addedMassForcesTorques.torque.torque[2] variable */ = (data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)) + (data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */ - data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)) + (data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */ - data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */)) + (data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) - data->localData[0]->realVars[666] /* addedMassForcesTorques.absoluteSensor.a[3] variable */) - ((data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */) * (data->localData[0]->realVars[1094] /* addedMassForcesTorques.absoluteSensor.z[2] variable */));
  TRACE_POP
}
/*
equation index: 4827
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force[3] = addedMassForcesTorques.X_udot * addedMassForcesTorques.absoluteSensor.v[1] * hull.w_a[2] + (-addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.z[2] - addedMassForcesTorques.Z_wdot * addedMassForcesTorques.absoluteSensor.a[3] - addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[1] - addedMassForcesTorques.Y_rdot * hull.w_a[3] * hull.w_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4827};
  data->localData[0]->realVars[1146] /* addedMassForcesTorques.force.force[3] variable */ = (data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */)) * (data->localData[0]->realVars[1094] /* addedMassForcesTorques.absoluteSensor.z[2] variable */) - ((data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * (data->localData[0]->realVars[666] /* addedMassForcesTorques.absoluteSensor.a[3] variable */)) - ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */))) - ((data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 4828
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque[3] = (addedMassForcesTorques.K_pdot - addedMassForcesTorques.M_qdot) * hull.w_a[1] * hull.w_a[2] + (-addedMassForcesTorques.N_rdot) * addedMassForcesTorques.absoluteSensor.z[3] - addedMassForcesTorques.Y_rdot * addedMassForcesTorques.absoluteSensor.a[2] - addedMassForcesTorques.absoluteSensor.v[1] * ((addedMassForcesTorques.Y_vdot - addedMassForcesTorques.X_udot) * addedMassForcesTorques.absoluteSensor.v[2] + addedMassForcesTorques.Y_rdot * hull.w_a[3]) - addedMassForcesTorques.Z_qdot * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4828};
  data->localData[0]->realVars[1228] /* addedMassForcesTorques.torque.torque[3] variable */ = (data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */ - data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */)) * (data->localData[0]->realVars[1095] /* addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[665] /* addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) + (data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */))) - ((data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 4829
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force[2] = addedMassForcesTorques.Z_qdot * hull.w_a[1] * hull.w_a[2] + addedMassForcesTorques.Z_wdot * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[1] + (-addedMassForcesTorques.Y_rdot) * addedMassForcesTorques.absoluteSensor.z[3] - addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.a[2] - addedMassForcesTorques.X_udot * addedMassForcesTorques.absoluteSensor.v[1] * hull.w_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4829};
  data->localData[0]->realVars[1145] /* addedMassForcesTorques.force.force[2] variable */ = (data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + (data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)) + ((-data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */)) * (data->localData[0]->realVars[1095] /* addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * (data->localData[0]->realVars[665] /* addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4830
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t[2] = actuators.fixedTranslation_pendulumArm.frame_b.t[2] + (-0.014) * actuators.prismatic.f
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4830};
  data->localData[0]->realVars[569] /* actuators.prismatic.frame_b.t[2] variable */ = data->localData[0]->realVars[524] /* actuators.fixedTranslation_pendulumArm.frame_b.t[2] variable */ + (-0.014) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */);
  TRACE_POP
}
/*
equation index: 4831
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t[2] = actuators.prismatic.frame_b.t[2] - actuators.prismatic.frame_b.f[3] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4831};
  data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */ = data->localData[0]->realVars[569] /* actuators.prismatic.frame_b.t[2] variable */ - ((data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 4832
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t[1] = actuators.fixedTranslation_pendulumArm.frame_b.t[1] + (-0.014) * actuators.prismatic.frame_b.f[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4832};
  data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */ = data->localData[0]->realVars[523] /* actuators.fixedTranslation_pendulumArm.frame_b.t[1] variable */ + (-0.014) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */);
  TRACE_POP
}
/*
equation index: 4833
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t[3] = (-actuators.revolute.R_rel.T[2,3]) * actuators.revolute.frame_b.t[2] - actuators.revolute.R_rel.T[3,3] * actuators.revolute.frame_b.t[3] - actuators.revolute.R_rel.T[1,3] * actuators.prismatic.frame_b.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4833};
  data->localData[0]->realVars[600] /* actuators.revolute.frame_a.t[3] variable */ = ((-data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */) - ((data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
/*
equation index: 4834
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t[2] = (-actuators.revolute.R_rel.T[2,2]) * actuators.revolute.frame_b.t[2] - actuators.revolute.R_rel.T[3,2] * actuators.revolute.frame_b.t[3] - actuators.revolute.R_rel.T[1,2] * actuators.prismatic.frame_b.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4834};
  data->localData[0]->realVars[599] /* actuators.revolute.frame_a.t[2] variable */ = ((-data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */) - ((data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
/*
equation index: 4835
type: SIMPLE_ASSIGN
actuators.frame_a.f[3] = actuators.bodyVariableMass.frame_a.f[3] + actuators.revolute.frame_a.f[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4835};
  data->localData[0]->realVars[540] /* actuators.frame_a.f[3] variable */ = data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */ + data->localData[0]->realVars[597] /* actuators.revolute.frame_a.f[3] variable */;
  TRACE_POP
}
/*
equation index: 4836
type: SIMPLE_ASSIGN
actuators.frame_a.t[2] = actuators.bodyVariableMass.frame_a.t[2] + actuators.revolute.frame_a.t[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4836};
  data->localData[0]->realVars[542] /* actuators.frame_a.t[2] variable */ = data->localData[0]->realVars[153] /* actuators.bodyVariableMass.frame_a.t[2] variable */ + data->localData[0]->realVars[599] /* actuators.revolute.frame_a.t[2] variable */;
  TRACE_POP
}
/*
equation index: 4837
type: SIMPLE_ASSIGN
actuators.frame_a.t[3] = addedMassForcesTorques.torque.torque[3] - (hull.frame_a.t[3] - hydrodynamicForcesTorques.T_hd_b[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4837};
  data->localData[0]->realVars[543] /* actuators.frame_a.t[3] variable */ = data->localData[0]->realVars[1228] /* addedMassForcesTorques.torque.torque[3] variable */ - (data->localData[0]->realVars[1338] /* hull.frame_a.t[3] variable */ - data->localData[0]->realVars[1374] /* hydrodynamicForcesTorques.T_hd_b[3] variable */);
  TRACE_POP
}
/*
equation index: 4838
type: SIMPLE_ASSIGN
actuators.frame_a.f[2] = addedMassForcesTorques.force.force[2] - (buoyancyForce.frame_b.f[2] + hull.frame_a.f[2] - hydrodynamicForcesTorques.F_hd_b[2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4838};
  data->localData[0]->realVars[539] /* actuators.frame_a.f[2] variable */ = data->localData[0]->realVars[1145] /* addedMassForcesTorques.force.force[2] variable */ - (data->localData[0]->realVars[1314] /* buoyancyForce.frame_b.f[2] variable */ + data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */ - data->localData[0]->realVars[1358] /* hydrodynamicForcesTorques.F_hd_b[2] variable */);
  TRACE_POP
}

void residualFunc4915(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4915};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[1321] /* hull.a_0[1] variable */ = xloc[0];
  data->localData[0]->realVars[1323] /* hull.a_0[3] variable */ = xloc[1];
  data->localData[0]->realVars[1322] /* hull.a_0[2] variable */ = xloc[2];
  data->localData[0]->realVars[1352] /* hull.z_a[2] variable */ = xloc[3];
  data->localData[0]->realVars[1353] /* hull.z_a[3] variable */ = xloc[4];
  data->localData[0]->realVars[1351] /* hull.z_a[1] variable */ = xloc[5];
  data->localData[0]->realVars[598] /* actuators.revolute.frame_a.t[1] variable */ = xloc[6];
  data->localData[0]->realVars[1336] /* hull.frame_a.t[1] variable */ = xloc[7];
  data->localData[0]->realVars[1093] /* addedMassForcesTorques.absoluteSensor.z[1] variable */ = xloc[8];
  data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */ = xloc[9];
  data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */ = xloc[10];
  data->localData[0]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */ = xloc[11];
  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4787(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4788(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4789(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4790(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4791(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4792(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4793(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4794(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4795(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4796(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4797(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4798(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4799(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4800(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4801(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4802(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4803(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4804(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4805(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4806(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4807(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4808(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4809(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4810(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4811(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4812(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4813(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4814(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4815(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4816(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4817(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4818(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4819(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4820(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4821(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4822(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4823(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4824(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4825(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4826(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4827(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4828(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4829(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4830(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4831(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4832(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4833(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4834(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4835(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4836(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4837(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4838(data, threadData);
  res[0] = ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */) - data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */;

  res[1] = ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */) - data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */;

  res[2] = (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) * (data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) - data->localData[0]->realVars[152] /* actuators.bodyVariableMass.frame_a.t[1] variable */ - ((data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) * (data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */)) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));

  res[3] = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */) - data->localData[0]->realVars[1093] /* addedMassForcesTorques.absoluteSensor.z[1] variable */;

  res[4] = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) - data->localData[0]->realVars[595] /* actuators.revolute.frame_a.f[1] variable */ - ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */));

  res[5] = data->localData[0]->realVars[596] /* actuators.revolute.frame_a.f[2] variable */ - data->localData[0]->realVars[539] /* actuators.frame_a.f[2] variable */ + data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */;

  res[6] = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */) - data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */;

  res[7] = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) - data->localData[0]->realVars[664] /* addedMassForcesTorques.absoluteSensor.a[1] variable */;

  res[8] = data->localData[0]->realVars[600] /* actuators.revolute.frame_a.t[3] variable */ - data->localData[0]->realVars[543] /* actuators.frame_a.t[3] variable */ + data->localData[0]->realVars[154] /* actuators.bodyVariableMass.frame_a.t[3] variable */;

  res[9] = (-data->localData[0]->realVars[1227] /* addedMassForcesTorques.torque.torque[2] variable */) - data->localData[0]->realVars[1373] /* hydrodynamicForcesTorques.T_hd_b[2] variable */ + data->localData[0]->realVars[1337] /* hull.frame_a.t[2] variable */ + data->localData[0]->realVars[542] /* actuators.frame_a.t[2] variable */;

  res[10] = ((-data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */) - data->localData[0]->realVars[598] /* actuators.revolute.frame_a.t[1] variable */ - ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */));

  res[11] = (-data->localData[0]->realVars[1146] /* addedMassForcesTorques.force.force[3] variable */) - data->localData[0]->realVars[1359] /* hydrodynamicForcesTorques.F_hd_b[3] variable */ + data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */ + data->localData[0]->realVars[1315] /* buoyancyForce.frame_b.f[3] variable */ + data->localData[0]->realVars[540] /* actuators.frame_a.f[3] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4915(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for hull.a_0[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1321].attribute /* hull.a_0[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1321].attribute /* hull.a_0[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1321].attribute /* hull.a_0[1] */.max;
  /* static ls data for hull.a_0[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1323].attribute /* hull.a_0[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1323].attribute /* hull.a_0[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1323].attribute /* hull.a_0[3] */.max;
  /* static ls data for hull.a_0[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1322].attribute /* hull.a_0[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1322].attribute /* hull.a_0[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1322].attribute /* hull.a_0[2] */.max;
  /* static ls data for hull.z_a[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1352].attribute /* hull.z_a[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1352].attribute /* hull.z_a[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1352].attribute /* hull.z_a[2] */.max;
  /* static ls data for hull.z_a[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1353].attribute /* hull.z_a[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1353].attribute /* hull.z_a[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1353].attribute /* hull.z_a[3] */.max;
  /* static ls data for hull.z_a[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1351].attribute /* hull.z_a[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1351].attribute /* hull.z_a[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1351].attribute /* hull.z_a[1] */.max;
  /* static ls data for actuators.revolute.frame_a.t[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[598].attribute /* actuators.revolute.frame_a.t[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[598].attribute /* actuators.revolute.frame_a.t[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[598].attribute /* actuators.revolute.frame_a.t[1] */.max;
  /* static ls data for hull.frame_a.t[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1336].attribute /* hull.frame_a.t[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1336].attribute /* hull.frame_a.t[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1336].attribute /* hull.frame_a.t[1] */.max;
  /* static ls data for addedMassForcesTorques.absoluteSensor.z[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1093].attribute /* addedMassForcesTorques.absoluteSensor.z[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1093].attribute /* addedMassForcesTorques.absoluteSensor.z[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1093].attribute /* addedMassForcesTorques.absoluteSensor.z[1] */.max;
  /* static ls data for actuators.bodyVariableMass.frame_a.f[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[146].attribute /* actuators.bodyVariableMass.frame_a.f[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[146].attribute /* actuators.bodyVariableMass.frame_a.f[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[146].attribute /* actuators.bodyVariableMass.frame_a.f[1] */.max;
  /* static ls data for hull.frame_a.f[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1333].attribute /* hull.frame_a.f[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1333].attribute /* hull.frame_a.f[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1333].attribute /* hull.frame_a.f[1] */.max;
  /* static ls data for addedMassForcesTorques.force.force[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1144].attribute /* addedMassForcesTorques.force.force[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1144].attribute /* addedMassForcesTorques.force.force[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1144].attribute /* addedMassForcesTorques.force.force[1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA4581(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,4581};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setAElement(0, 0, (2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 0, linearSystemData, threadData);
  linearSystemData->setAElement(0, 1, (2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 1, linearSystemData, threadData);
  linearSystemData->setAElement(0, 2, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 2, linearSystemData, threadData);
  linearSystemData->setAElement(0, 3, (-2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 3, linearSystemData, threadData);
  linearSystemData->setAElement(1, 0, (2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 4, linearSystemData, threadData);
  linearSystemData->setAElement(1, 1, (-2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 5, linearSystemData, threadData);
  linearSystemData->setAElement(1, 2, (2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 6, linearSystemData, threadData);
  linearSystemData->setAElement(1, 3, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 7, linearSystemData, threadData);
  linearSystemData->setAElement(2, 0, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 8, linearSystemData, threadData);
  linearSystemData->setAElement(2, 1, (-2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 9, linearSystemData, threadData);
  linearSystemData->setAElement(2, 2, (-2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 10, linearSystemData, threadData);
  linearSystemData->setAElement(2, 3, (-2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 11, linearSystemData, threadData);
  linearSystemData->setAElement(3, 0, (2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 12, linearSystemData, threadData);
  linearSystemData->setAElement(3, 1, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 13, linearSystemData, threadData);
  linearSystemData->setAElement(3, 2, (-2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 14, linearSystemData, threadData);
  linearSystemData->setAElement(3, 3, (2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 15, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb4581(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,4581};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setBElement(0, (-data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */), linearSystemData, threadData);
  linearSystemData->setBElement(1, (-data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */), linearSystemData, threadData);
  linearSystemData->setBElement(2, 0.0, linearSystemData, threadData);
  linearSystemData->setBElement(3, (-data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */), linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData4581(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(actuators.bodyVariableMass.Q[4]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[41].attribute /* der(actuators.bodyVariableMass.Q[4]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[41].attribute /* der(actuators.bodyVariableMass.Q[4]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[41].attribute /* der(actuators.bodyVariableMass.Q[4]) */.max;
  /* static ls data for der(actuators.bodyVariableMass.Q[1]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[38].attribute /* der(actuators.bodyVariableMass.Q[1]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[38].attribute /* der(actuators.bodyVariableMass.Q[1]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[38].attribute /* der(actuators.bodyVariableMass.Q[1]) */.max;
  /* static ls data for der(actuators.bodyVariableMass.Q[2]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[39].attribute /* der(actuators.bodyVariableMass.Q[2]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[39].attribute /* der(actuators.bodyVariableMass.Q[2]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[39].attribute /* der(actuators.bodyVariableMass.Q[2]) */.max;
  /* static ls data for der(actuators.bodyVariableMass.Q[3]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[40].attribute /* der(actuators.bodyVariableMass.Q[3]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[40].attribute /* der(actuators.bodyVariableMass.Q[3]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[40].attribute /* der(actuators.bodyVariableMass.Q[3]) */.max;
}


/*
equation index: 3842
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.a_0[2] = hull.a_0[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3842};
  data->localData[0]->realVars[144] /* actuators.bodyVariableMass.a_0[2] variable */ = data->localData[0]->realVars[1322] /* hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 3843
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[2] = hull.a_0[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3843};
  data->localData[0]->realVars[33] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[1322] /* hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 3844
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[1] = hull.a_0[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3844};
  data->localData[0]->realVars[32] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[1321] /* hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 3845
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.a_0[1] = hull.a_0[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3845};
  data->localData[0]->realVars[143] /* actuators.bodyVariableMass.a_0[1] variable */ = data->localData[0]->realVars[1321] /* hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 3846
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a[1] = hull.frame_a.R.T[1,1] * hull.a_0[1] + hull.frame_a.R.T[1,2] * hull.a_0[2] + hull.frame_a.R.T[1,3] * hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3846};
  data->localData[0]->realVars[664] /* addedMassForcesTorques.absoluteSensor.a[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1323] /* hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 3847
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a[2] = hull.frame_a.R.T[2,1] * hull.a_0[1] + hull.frame_a.R.T[2,2] * hull.a_0[2] + hull.frame_a.R.T[2,3] * hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3847};
  data->localData[0]->realVars[665] /* addedMassForcesTorques.absoluteSensor.a[2] variable */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1323] /* hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 3848
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a[3] = hull.frame_a.R.T[3,1] * hull.a_0[1] + hull.frame_a.R.T[3,2] * hull.a_0[2] + hull.frame_a.R.T[3,3] * hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3848};
  data->localData[0]->realVars[666] /* addedMassForcesTorques.absoluteSensor.a[3] variable */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1323] /* hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 3849
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force[1] = addedMassForcesTorques.Y_rdot * hull.w_a[3] ^ 2.0 + addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[3] + (-addedMassForcesTorques.Z_wdot) * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[2] - addedMassForcesTorques.X_udot * addedMassForcesTorques.absoluteSensor.a[1] - addedMassForcesTorques.Z_qdot * hull.w_a[2] ^ 2.0
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3849};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */;
  tmp1 = data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */;
  data->localData[0]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */ = (data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((tmp0 * tmp0)) + (data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + ((-data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */)) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) - ((data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[664] /* addedMassForcesTorques.absoluteSensor.a[1] variable */)) - ((data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 3850
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f[1] = -addedMassForcesTorques.force.force[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3850};
  data->localData[0]->realVars[1168] /* addedMassForcesTorques.frame_b.f[1] variable */ = (-data->localData[0]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */);
  TRACE_POP
}
/*
equation index: 3851
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[3] = hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3851};
  data->localData[0]->realVars[34] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[1323] /* hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 3852
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.a_0[3] = hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3852};
  data->localData[0]->realVars[145] /* actuators.bodyVariableMass.a_0[3] variable */ = data->localData[0]->realVars[1323] /* hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 3853
type: SIMPLE_ASSIGN
actuators.frame_a.f[1] = hydrodynamicForcesTorques.F_hd_b[1] - (addedMassForcesTorques.frame_b.f[1] + buoyancyForce.frame_b.f[1] + hull.frame_a.f[1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3853};
  data->localData[0]->realVars[538] /* actuators.frame_a.f[1] variable */ = data->localData[0]->realVars[1357] /* hydrodynamicForcesTorques.F_hd_b[1] variable */ - (data->localData[0]->realVars[1168] /* addedMassForcesTorques.frame_b.f[1] variable */ + data->localData[0]->realVars[1313] /* buoyancyForce.frame_b.f[1] variable */ + data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */);
  TRACE_POP
}
/*
equation index: 3854
type: SIMPLE_ASSIGN
hull.z_a[2] = (hull.frame_a.f[1] - hull.m * (hull.frame_a.R.T[1,1] * hull.a_0[1] + hull.frame_a.R.T[1,2] * hull.a_0[2] + hull.frame_a.R.T[1,3] * (-9.81 + hull.a_0[3]) + hull.w_a[2] * (hull.w_a[1] * hull.r_CM[2] - hull.w_a[2] * hull.r_CM[1]) + hull.w_a[3] * (hull.w_a[1] * hull.r_CM[3] - hull.w_a[3] * hull.r_CM[1]) - hull.z_a[3] * hull.r_CM[2])) / (hull.r_CM[3] * hull.m)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3854};
  data->localData[0]->realVars[1352] /* hull.z_a[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */ - ((data->simulationInfo->realParameter[407] /* hull.m PARAM */) * ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */)))),(data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */),"hull.r_CM[3] * hull.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 3855
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f[1] = (hull.frame_a.R.T[1,1] * actuators.bodyVariableMass.a_0[1] + hull.frame_a.R.T[1,2] * actuators.bodyVariableMass.a_0[2] + hull.frame_a.R.T[1,3] * (-9.81 + actuators.bodyVariableMass.a_0[3]) + hull.z_a[2] * actuators.bodyVariableMass.r_CM[3] + hull.w_a[2] * (hull.w_a[1] * actuators.bodyVariableMass.r_CM[2] - hull.w_a[2] * actuators.bodyVariableMass.r_CM[1]) + hull.w_a[3] * (hull.w_a[1] * actuators.bodyVariableMass.r_CM[3] - hull.w_a[3] * actuators.bodyVariableMass.r_CM[1]) - hull.z_a[3] * actuators.bodyVariableMass.r_CM[2]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3855};
  data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */ = ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[143] /* actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[144] /* actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[145] /* actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}
/*
equation index: 3856
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f[1] = actuators.frame_a.f[1] - actuators.bodyVariableMass.frame_a.f[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3856};
  data->localData[0]->realVars[595] /* actuators.revolute.frame_a.f[1] variable */ = data->localData[0]->realVars[538] /* actuators.frame_a.f[1] variable */ - data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */;
  TRACE_POP
}
/*
equation index: 3857
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f[3] = (hull.frame_a.R.T[3,1] * actuators.bodyVariableMass.a_0[1] + hull.frame_a.R.T[3,2] * actuators.bodyVariableMass.a_0[2] + hull.frame_a.R.T[3,3] * (-9.81 + actuators.bodyVariableMass.a_0[3]) + hull.z_a[1] * actuators.bodyVariableMass.r_CM[2] + hull.w_a[1] * (hull.w_a[3] * actuators.bodyVariableMass.r_CM[1] - hull.w_a[1] * actuators.bodyVariableMass.r_CM[3]) + hull.w_a[2] * (hull.w_a[3] * actuators.bodyVariableMass.r_CM[2] - hull.w_a[2] * actuators.bodyVariableMass.r_CM[3]) - hull.z_a[2] * actuators.bodyVariableMass.r_CM[1]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3857};
  data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[143] /* actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[144] /* actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[145] /* actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}
/*
equation index: 3858
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t[2] = actuators.bodyVariableMass.I[2,1] * hull.z_a[1] + actuators.bodyVariableMass.I[2,2] * hull.z_a[2] + actuators.bodyVariableMass.I[2,3] * hull.z_a[3] + hull.w_a[3] * (actuators.bodyVariableMass.I[1,1] * hull.w_a[1] + actuators.bodyVariableMass.I[1,2] * hull.w_a[2] + actuators.bodyVariableMass.I[1,3] * hull.w_a[3]) + actuators.bodyVariableMass.r_CM[3] * actuators.bodyVariableMass.frame_a.f[1] + (-actuators.bodyVariableMass.r_CM[1]) * actuators.bodyVariableMass.frame_a.f[3] - hull.w_a[1] * (actuators.bodyVariableMass.I[3,1] * hull.w_a[1] + actuators.bodyVariableMass.I[3,2] * hull.w_a[2] + actuators.bodyVariableMass.I[3,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3858};
  data->localData[0]->realVars[153] /* actuators.bodyVariableMass.frame_a.t[2] variable */ = (data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) * (data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */) + ((-data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */)) * (data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3859
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f[2] = (hull.frame_a.R.T[2,1] * actuators.bodyVariableMass.a_0[1] + hull.frame_a.R.T[2,2] * actuators.bodyVariableMass.a_0[2] + hull.frame_a.R.T[2,3] * (-9.81 + actuators.bodyVariableMass.a_0[3]) + hull.z_a[3] * actuators.bodyVariableMass.r_CM[1] + hull.w_a[3] * (hull.w_a[2] * actuators.bodyVariableMass.r_CM[3] - hull.w_a[3] * actuators.bodyVariableMass.r_CM[2]) + hull.w_a[1] * (hull.w_a[2] * actuators.bodyVariableMass.r_CM[1] - hull.w_a[1] * actuators.bodyVariableMass.r_CM[2]) - hull.z_a[1] * actuators.bodyVariableMass.r_CM[3]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3859};
  data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[143] /* actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[144] /* actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[145] /* actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}
/*
equation index: 3860
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t[3] = actuators.bodyVariableMass.I[3,1] * hull.z_a[1] + actuators.bodyVariableMass.I[3,2] * hull.z_a[2] + actuators.bodyVariableMass.I[3,3] * hull.z_a[3] + hull.w_a[1] * (actuators.bodyVariableMass.I[2,1] * hull.w_a[1] + actuators.bodyVariableMass.I[2,2] * hull.w_a[2] + actuators.bodyVariableMass.I[2,3] * hull.w_a[3]) + actuators.bodyVariableMass.r_CM[1] * actuators.bodyVariableMass.frame_a.f[2] + (-actuators.bodyVariableMass.r_CM[2]) * actuators.bodyVariableMass.frame_a.f[1] - hull.w_a[2] * (actuators.bodyVariableMass.I[1,1] * hull.w_a[1] + actuators.bodyVariableMass.I[1,2] * hull.w_a[2] + actuators.bodyVariableMass.I[1,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3860};
  data->localData[0]->realVars[154] /* actuators.bodyVariableMass.frame_a.t[3] variable */ = (data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) * (data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */) + ((-data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */)) * (data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3861
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t[1] = actuators.bodyVariableMass.I[1,1] * hull.z_a[1] + actuators.bodyVariableMass.I[1,2] * hull.z_a[2] + actuators.bodyVariableMass.I[1,3] * hull.z_a[3] + hull.w_a[2] * (actuators.bodyVariableMass.I[3,1] * hull.w_a[1] + actuators.bodyVariableMass.I[3,2] * hull.w_a[2] + actuators.bodyVariableMass.I[3,3] * hull.w_a[3]) + actuators.bodyVariableMass.r_CM[2] * actuators.bodyVariableMass.frame_a.f[3] + (-actuators.bodyVariableMass.r_CM[3]) * actuators.bodyVariableMass.frame_a.f[2] - hull.w_a[3] * (actuators.bodyVariableMass.I[2,1] * hull.w_a[1] + actuators.bodyVariableMass.I[2,2] * hull.w_a[2] + actuators.bodyVariableMass.I[2,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3861};
  data->localData[0]->realVars[152] /* actuators.bodyVariableMass.frame_a.t[1] variable */ = (data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) * (data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */) + ((-data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */)) * (data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3862
type: SIMPLE_ASSIGN
hull.frame_a.f[3] = (hull.frame_a.R.T[3,1] * hull.a_0[1] + hull.frame_a.R.T[3,2] * hull.a_0[2] + hull.frame_a.R.T[3,3] * (-9.81 + hull.a_0[3]) + hull.z_a[1] * hull.r_CM[2] + hull.w_a[1] * (hull.w_a[3] * hull.r_CM[1] - hull.w_a[1] * hull.r_CM[3]) + hull.w_a[2] * (hull.w_a[3] * hull.r_CM[2] - hull.w_a[2] * hull.r_CM[3]) - hull.z_a[2] * hull.r_CM[1]) * hull.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3862};
  data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */);
  TRACE_POP
}
/*
equation index: 3863
type: SIMPLE_ASSIGN
hull.frame_a.f[2] = (hull.frame_a.R.T[2,1] * hull.a_0[1] + hull.frame_a.R.T[2,2] * hull.a_0[2] + hull.frame_a.R.T[2,3] * (-9.81 + hull.a_0[3]) + hull.z_a[3] * hull.r_CM[1] + hull.w_a[3] * (hull.w_a[2] * hull.r_CM[3] - hull.w_a[3] * hull.r_CM[2]) + hull.w_a[1] * (hull.w_a[2] * hull.r_CM[1] - hull.w_a[1] * hull.r_CM[2]) - hull.z_a[1] * hull.r_CM[3]) * hull.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3863};
  data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */);
  TRACE_POP
}
/*
equation index: 3864
type: SIMPLE_ASSIGN
hull.frame_a.t[3] = hull.I[3,1] * hull.z_a[1] + hull.I[3,2] * hull.z_a[2] + hull.I[3,3] * hull.z_a[3] + hull.w_a[1] * (hull.I[2,1] * hull.w_a[1] + hull.I[2,2] * hull.w_a[2] + hull.I[2,3] * hull.w_a[3]) + hull.r_CM[1] * hull.frame_a.f[2] - hull.r_CM[2] * hull.frame_a.f[1] - hull.w_a[2] * (hull.I[1,1] * hull.w_a[1] + hull.I[1,2] * hull.w_a[2] + hull.I[1,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3864};
  data->localData[0]->realVars[1338] /* hull.frame_a.t[3] variable */ = (data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */) - ((data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */)) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3865
type: SIMPLE_ASSIGN
hull.frame_a.t[1] = hull.I[1,1] * hull.z_a[1] + hull.I[1,2] * hull.z_a[2] + hull.I[1,3] * hull.z_a[3] + hull.w_a[2] * (hull.I[3,1] * hull.w_a[1] + hull.I[3,2] * hull.w_a[2] + hull.I[3,3] * hull.w_a[3]) + hull.r_CM[2] * hull.frame_a.f[3] - hull.r_CM[3] * hull.frame_a.f[2] - hull.w_a[3] * (hull.I[2,1] * hull.w_a[1] + hull.I[2,2] * hull.w_a[2] + hull.I[2,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3865};
  data->localData[0]->realVars[1336] /* hull.frame_a.t[1] variable */ = (data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */) - ((data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */)) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3866
type: SIMPLE_ASSIGN
hull.frame_a.t[2] = hull.I[2,1] * hull.z_a[1] + hull.I[2,2] * hull.z_a[2] + hull.I[2,3] * hull.z_a[3] + hull.w_a[3] * (hull.I[1,1] * hull.w_a[1] + hull.I[1,2] * hull.w_a[2] + hull.I[1,3] * hull.w_a[3]) + hull.r_CM[3] * hull.frame_a.f[1] - hull.r_CM[1] * hull.frame_a.f[3] - hull.w_a[1] * (hull.I[3,1] * hull.w_a[1] + hull.I[3,2] * hull.w_a[2] + hull.I[3,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3866};
  data->localData[0]->realVars[1337] /* hull.frame_a.t[2] variable */ = (data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */) - ((data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */)) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3867
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a[1] = actuators.revolute.R_rel.T[1,1] * hull.z_a[1] + actuators.revolute.R_rel.T[1,2] * hull.z_a[2] + actuators.revolute.R_rel.T[1,3] * hull.z_a[3] + actuators.revolute.R_rel.w[3] * (actuators.revolute.R_rel.T[2,1] * hull.w_a[1] + actuators.revolute.R_rel.T[2,2] * hull.w_a[2] + actuators.revolute.R_rel.T[2,3] * hull.w_a[3]) + $DER.actuators.revolute.R_rel.w[1] - actuators.revolute.R_rel.w[2] * (actuators.revolute.R_rel.T[3,1] * hull.w_a[1] + actuators.revolute.R_rel.T[3,2] * hull.w_a[2] + actuators.revolute.R_rel.T[3,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3867};
  data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[583] /* actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + data->localData[0]->realVars[73] /* der(actuators.revolute.R_rel.w[1]) DUMMY_DER */ - ((data->localData[0]->realVars[582] /* actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3868
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a[2] = actuators.revolute.R_rel.T[2,1] * hull.z_a[1] + actuators.revolute.R_rel.T[2,2] * hull.z_a[2] + actuators.revolute.R_rel.T[2,3] * hull.z_a[3] + actuators.revolute.R_rel.w[1] * (actuators.revolute.R_rel.T[3,1] * hull.w_a[1] + actuators.revolute.R_rel.T[3,2] * hull.w_a[2] + actuators.revolute.R_rel.T[3,3] * hull.w_a[3]) + $DER.actuators.revolute.R_rel.w[2] - actuators.revolute.R_rel.w[3] * (actuators.revolute.R_rel.T[1,1] * hull.w_a[1] + actuators.revolute.R_rel.T[1,2] * hull.w_a[2] + actuators.revolute.R_rel.T[1,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3868};
  data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */ = (data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[581] /* actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + data->localData[0]->realVars[74] /* der(actuators.revolute.R_rel.w[2]) DUMMY_DER */ - ((data->localData[0]->realVars[583] /* actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3869
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a[3] = actuators.revolute.R_rel.T[3,1] * hull.z_a[1] + actuators.revolute.R_rel.T[3,2] * hull.z_a[2] + actuators.revolute.R_rel.T[3,3] * hull.z_a[3] + actuators.revolute.R_rel.w[2] * (actuators.revolute.R_rel.T[1,1] * hull.w_a[1] + actuators.revolute.R_rel.T[1,2] * hull.w_a[2] + actuators.revolute.R_rel.T[1,3] * hull.w_a[3]) + $DER.actuators.revolute.R_rel.w[3] - actuators.revolute.R_rel.w[1] * (actuators.revolute.R_rel.T[2,1] * hull.w_a[1] + actuators.revolute.R_rel.T[2,2] * hull.w_a[2] + actuators.revolute.R_rel.T[2,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3869};
  data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */ = (data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[582] /* actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + data->localData[0]->realVars[75] /* der(actuators.revolute.R_rel.w[3]) DUMMY_DER */ - ((data->localData[0]->realVars[581] /* actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3870
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[1].y = hull.frame_a.R.T[1,1] * hull.z_a[1] + hull.frame_a.R.T[2,1] * hull.z_a[2] + hull.frame_a.R.T[3,1] * hull.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3870};
  data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 3871
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[2].y = hull.frame_a.R.T[1,2] * hull.z_a[1] + hull.frame_a.R.T[2,2] * hull.z_a[2] + hull.frame_a.R.T[3,2] * hull.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3871};
  data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 3872
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[3].y = hull.frame_a.R.T[1,3] * hull.z_a[1] + hull.frame_a.R.T[2,3] * hull.z_a[2] + hull.frame_a.R.T[3,3] * hull.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3872};
  data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 3873
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z[1] = hull.frame_a.R.T[1,1] * addedMassForcesTorques.absoluteSensor.der2[1].y + hull.frame_a.R.T[1,2] * addedMassForcesTorques.absoluteSensor.der2[2].y + hull.frame_a.R.T[1,3] * addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3873};
  data->localData[0]->realVars[1093] /* addedMassForcesTorques.absoluteSensor.z[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */);
  TRACE_POP
}
/*
equation index: 3874
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z[2] = hull.frame_a.R.T[2,1] * addedMassForcesTorques.absoluteSensor.der2[1].y + hull.frame_a.R.T[2,2] * addedMassForcesTorques.absoluteSensor.der2[2].y + hull.frame_a.R.T[2,3] * addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3874};
  data->localData[0]->realVars[1094] /* addedMassForcesTorques.absoluteSensor.z[2] variable */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */);
  TRACE_POP
}
/*
equation index: 3875
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z[3] = hull.frame_a.R.T[3,1] * addedMassForcesTorques.absoluteSensor.der2[1].y + hull.frame_a.R.T[3,2] * addedMassForcesTorques.absoluteSensor.der2[2].y + hull.frame_a.R.T[3,3] * addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3875};
  data->localData[0]->realVars[1095] /* addedMassForcesTorques.absoluteSensor.z[3] variable */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */);
  TRACE_POP
}
/*
equation index: 3876
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] = $DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[2] + actuators.body_rolling.frame_a.R.T[1,2] * (actuators.prismatic.a + actuators.body_rolling.w_a[2] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s - actuators.position_slidingMass.s * actuators.body_rolling.w_a[3] ^ 2.0) + actuators.body_rolling.frame_a.R.T[2,2] * (2.0 * actuators.body_rolling.w_a[3] * actuators.prismatic.v + actuators.body_rolling.z_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.w_a[1] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s) + actuators.body_rolling.frame_a.R.T[3,2] * (2.0 * (-actuators.body_rolling.w_a[2]) * actuators.prismatic.v + actuators.body_rolling.w_a[1] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.z_a[2] * actuators.position_slidingMass.s)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3876};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[36] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[33] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[550] /* actuators.prismatic.a variable */ + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((2.0) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)))) + (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((2.0) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 3877
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0[2] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] + actuators.body_rolling.frame_a.R.T[1,2] * (0.014 * actuators.body_rolling.z_a[2] + (-0.014) * (-actuators.body_rolling.w_a[3]) * actuators.body_rolling.w_a[1]) + actuators.body_rolling.frame_a.R.T[2,2] * ((-0.014) * actuators.body_rolling.z_a[1] + 0.014 * actuators.body_rolling.w_a[3] * actuators.body_rolling.w_a[2]) + (-0.014) * actuators.body_rolling.frame_a.R.T[3,2] * (actuators.body_rolling.w_a[1] ^ 2.0 + actuators.body_rolling.w_a[2] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3877};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */;
  data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */ = data->localData[0]->realVars[36] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */ + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * ((0.014) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (-0.014) * (((-data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */))) + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((-0.014) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (0.014) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */))) + (-0.014) * ((data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 3878
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] = $DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[1] + actuators.body_rolling.frame_a.R.T[1,1] * (actuators.prismatic.a + actuators.body_rolling.w_a[2] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s - actuators.position_slidingMass.s * actuators.body_rolling.w_a[3] ^ 2.0) + actuators.body_rolling.frame_a.R.T[2,1] * (2.0 * actuators.body_rolling.w_a[3] * actuators.prismatic.v + actuators.body_rolling.z_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.w_a[1] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s) + actuators.body_rolling.frame_a.R.T[3,1] * (2.0 * (-actuators.body_rolling.w_a[2]) * actuators.prismatic.v + actuators.body_rolling.w_a[1] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.z_a[2] * actuators.position_slidingMass.s)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3878};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[35] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[32] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ + (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[550] /* actuators.prismatic.a variable */ + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((2.0) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)))) + (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((2.0) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 3879
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] = $DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[3] + actuators.body_rolling.frame_a.R.T[1,3] * (actuators.prismatic.a + actuators.body_rolling.w_a[2] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s - actuators.position_slidingMass.s * actuators.body_rolling.w_a[3] ^ 2.0) + actuators.body_rolling.frame_a.R.T[2,3] * (2.0 * actuators.body_rolling.w_a[3] * actuators.prismatic.v + actuators.body_rolling.z_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.w_a[1] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s) + actuators.body_rolling.frame_a.R.T[3,3] * (2.0 * (-actuators.body_rolling.w_a[2]) * actuators.prismatic.v + actuators.body_rolling.w_a[1] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.z_a[2] * actuators.position_slidingMass.s)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3879};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[37] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[34] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */ + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[550] /* actuators.prismatic.a variable */ + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((2.0) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)))) + (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((2.0) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 3880
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0[1] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] + actuators.body_rolling.frame_a.R.T[1,1] * (0.014 * actuators.body_rolling.z_a[2] + (-0.014) * (-actuators.body_rolling.w_a[3]) * actuators.body_rolling.w_a[1]) + actuators.body_rolling.frame_a.R.T[2,1] * ((-0.014) * actuators.body_rolling.z_a[1] + 0.014 * actuators.body_rolling.w_a[3] * actuators.body_rolling.w_a[2]) + (-0.014) * actuators.body_rolling.frame_a.R.T[3,1] * (actuators.body_rolling.w_a[1] ^ 2.0 + actuators.body_rolling.w_a[2] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3880};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */;
  data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */ = data->localData[0]->realVars[35] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */ + (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * ((0.014) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (-0.014) * (((-data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */))) + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((-0.014) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (0.014) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */))) + (-0.014) * ((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 3881
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0[3] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] + actuators.body_rolling.frame_a.R.T[1,3] * (0.014 * actuators.body_rolling.z_a[2] + (-0.014) * (-actuators.body_rolling.w_a[3]) * actuators.body_rolling.w_a[1]) + actuators.body_rolling.frame_a.R.T[2,3] * ((-0.014) * actuators.body_rolling.z_a[1] + 0.014 * actuators.body_rolling.w_a[3] * actuators.body_rolling.w_a[2]) + (-0.014) * actuators.body_rolling.frame_a.R.T[3,3] * (actuators.body_rolling.w_a[1] ^ 2.0 + actuators.body_rolling.w_a[2] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3881};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */;
  data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */ = data->localData[0]->realVars[37] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * ((0.014) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (-0.014) * (((-data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */))) + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((-0.014) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (0.014) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */))) + (-0.014) * ((data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 3882
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f[2] = (-(actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.a_0[1] + actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.a_0[2] + actuators.body_rolling.frame_a.R.T[2,3] * (-9.81 + actuators.body_rolling.a_0[3]) + actuators.body_rolling.z_a[3] * actuators.body_rolling.r_CM[1] + actuators.body_rolling.w_a[3] * (actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[2]) + actuators.body_rolling.w_a[1] * (actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[2]) - actuators.body_rolling.z_a[1] * actuators.body_rolling.r_CM[3])) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3882};
  data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */ = ((-((data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) + (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */))))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 3883
type: SIMPLE_ASSIGN
actuators.prismatic.f = (actuators.body_rolling.frame_a.R.T[1,1] * actuators.body_rolling.a_0[1] + actuators.body_rolling.frame_a.R.T[1,2] * actuators.body_rolling.a_0[2] + actuators.body_rolling.frame_a.R.T[1,3] * (-9.81 + actuators.body_rolling.a_0[3]) + actuators.body_rolling.z_a[2] * actuators.body_rolling.r_CM[3] + actuators.body_rolling.w_a[2] * (actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[2] - actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[1]) + actuators.body_rolling.w_a[3] * (actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[1]) - actuators.body_rolling.z_a[3] * actuators.body_rolling.r_CM[2]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3883};
  data->localData[0]->realVars[565] /* actuators.prismatic.f variable */ = ((data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */))) + (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 3884
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f[3] = (-(actuators.body_rolling.frame_a.R.T[3,1] * actuators.body_rolling.a_0[1] + actuators.body_rolling.frame_a.R.T[3,2] * actuators.body_rolling.a_0[2] + actuators.body_rolling.frame_a.R.T[3,3] * (-9.81 + actuators.body_rolling.a_0[3]) + actuators.body_rolling.z_a[1] * actuators.body_rolling.r_CM[2] + actuators.body_rolling.w_a[1] * (actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[3]) + actuators.body_rolling.w_a[2] * (actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[2] - actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[3]) - actuators.body_rolling.z_a[2] * actuators.body_rolling.r_CM[1])) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3884};
  data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */ = ((-((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * (data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */))) + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */))))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 3885
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t[1] = -(actuators.body_rolling.I[1,1] * actuators.body_rolling.z_a[1] + actuators.body_rolling.I[1,2] * actuators.body_rolling.z_a[2] + actuators.body_rolling.I[1,3] * actuators.body_rolling.z_a[3] + actuators.body_rolling.w_a[2] * (actuators.body_rolling.I[3,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[3,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[3,3] * actuators.body_rolling.w_a[3]) + actuators.body_rolling.r_CM[3] * actuators.prismatic.frame_b.f[2] + (-actuators.body_rolling.r_CM[2]) * actuators.prismatic.frame_b.f[3] - actuators.body_rolling.w_a[3] * (actuators.body_rolling.I[2,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[2,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[2,3] * actuators.body_rolling.w_a[3]))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3885};
  data->localData[0]->realVars[523] /* actuators.fixedTranslation_pendulumArm.frame_b.t[1] variable */ = (-((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) + ((-data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 3886
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t[2] = -(actuators.body_rolling.I[2,1] * actuators.body_rolling.z_a[1] + actuators.body_rolling.I[2,2] * actuators.body_rolling.z_a[2] + actuators.body_rolling.I[2,3] * actuators.body_rolling.z_a[3] + actuators.body_rolling.w_a[3] * (actuators.body_rolling.I[1,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[1,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[1,3] * actuators.body_rolling.w_a[3]) + actuators.body_rolling.r_CM[3] * actuators.prismatic.f + actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f[3] - actuators.body_rolling.w_a[1] * (actuators.body_rolling.I[3,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[3,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[3,3] * actuators.body_rolling.w_a[3]))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3886};
  data->localData[0]->realVars[524] /* actuators.fixedTranslation_pendulumArm.frame_b.t[2] variable */ = (-((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) + (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 3887
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t[3] = -(actuators.body_rolling.I[3,1] * actuators.body_rolling.z_a[1] + actuators.body_rolling.I[3,2] * actuators.body_rolling.z_a[2] + actuators.body_rolling.I[3,3] * actuators.body_rolling.z_a[3] + actuators.body_rolling.w_a[1] * (actuators.body_rolling.I[2,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[2,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[2,3] * actuators.body_rolling.w_a[3]) + (-actuators.body_rolling.r_CM[2]) * actuators.prismatic.f - actuators.body_rolling.w_a[2] * (actuators.body_rolling.I[1,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[1,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[1,3] * actuators.body_rolling.w_a[3]) - actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f[2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3887};
  data->localData[0]->realVars[570] /* actuators.prismatic.frame_b.t[3] variable */ = (-((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) + ((-data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) - ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */))) - ((data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */))));
  TRACE_POP
}
/*
equation index: 3888
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f[3] = actuators.revolute.R_rel.T[1,3] * actuators.prismatic.f + (-actuators.revolute.R_rel.T[2,3]) * actuators.prismatic.frame_b.f[2] - actuators.revolute.R_rel.T[3,3] * actuators.prismatic.frame_b.f[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3888};
  data->localData[0]->realVars[597] /* actuators.revolute.frame_a.f[3] variable */ = (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) + ((-data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) - ((data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */));
  TRACE_POP
}
/*
equation index: 3889
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f[2] = actuators.revolute.R_rel.T[1,2] * actuators.prismatic.f + (-actuators.revolute.R_rel.T[2,2]) * actuators.prismatic.frame_b.f[2] - actuators.revolute.R_rel.T[3,2] * actuators.prismatic.frame_b.f[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3889};
  data->localData[0]->realVars[596] /* actuators.revolute.frame_a.f[2] variable */ = (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) + ((-data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) - ((data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */));
  TRACE_POP
}
/*
equation index: 3890
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t[3] = actuators.prismatic.frame_b.t[3] + actuators.prismatic.frame_b.f[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3890};
  data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */ = data->localData[0]->realVars[570] /* actuators.prismatic.frame_b.t[3] variable */ + (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */);
  TRACE_POP
}
/*
equation index: 3891
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force[3] = addedMassForcesTorques.X_udot * addedMassForcesTorques.absoluteSensor.v[1] * hull.w_a[2] + (-addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.z[2] - addedMassForcesTorques.Z_wdot * addedMassForcesTorques.absoluteSensor.a[3] - addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[1] - addedMassForcesTorques.Y_rdot * hull.w_a[3] * hull.w_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3891};
  data->localData[0]->realVars[1146] /* addedMassForcesTorques.force.force[3] variable */ = (data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */)) * (data->localData[0]->realVars[1094] /* addedMassForcesTorques.absoluteSensor.z[2] variable */) - ((data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * (data->localData[0]->realVars[666] /* addedMassForcesTorques.absoluteSensor.a[3] variable */)) - ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */))) - ((data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 3892
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque[2] = addedMassForcesTorques.Y_rdot * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[1] + (addedMassForcesTorques.N_rdot - addedMassForcesTorques.K_pdot) * hull.w_a[3] * hull.w_a[1] + (addedMassForcesTorques.Z_wdot - addedMassForcesTorques.X_udot) * addedMassForcesTorques.absoluteSensor.v[3] * addedMassForcesTorques.absoluteSensor.v[1] + addedMassForcesTorques.Z_qdot * (addedMassForcesTorques.absoluteSensor.v[1] * hull.w_a[2] - addedMassForcesTorques.absoluteSensor.a[3]) - addedMassForcesTorques.M_qdot * addedMassForcesTorques.absoluteSensor.z[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3892};
  data->localData[0]->realVars[1227] /* addedMassForcesTorques.torque.torque[2] variable */ = (data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)) + (data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */ - data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)) + (data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */ - data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */)) + (data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) - data->localData[0]->realVars[666] /* addedMassForcesTorques.absoluteSensor.a[3] variable */) - ((data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */) * (data->localData[0]->realVars[1094] /* addedMassForcesTorques.absoluteSensor.z[2] variable */));
  TRACE_POP
}
/*
equation index: 3893
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force[2] = addedMassForcesTorques.Z_qdot * hull.w_a[1] * hull.w_a[2] + addedMassForcesTorques.Z_wdot * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[1] + (-addedMassForcesTorques.Y_rdot) * addedMassForcesTorques.absoluteSensor.z[3] - addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.a[2] - addedMassForcesTorques.X_udot * addedMassForcesTorques.absoluteSensor.v[1] * hull.w_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3893};
  data->localData[0]->realVars[1145] /* addedMassForcesTorques.force.force[2] variable */ = (data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + (data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)) + ((-data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */)) * (data->localData[0]->realVars[1095] /* addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * (data->localData[0]->realVars[665] /* addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3894
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque[3] = (addedMassForcesTorques.K_pdot - addedMassForcesTorques.M_qdot) * hull.w_a[1] * hull.w_a[2] + (-addedMassForcesTorques.N_rdot) * addedMassForcesTorques.absoluteSensor.z[3] - addedMassForcesTorques.Y_rdot * addedMassForcesTorques.absoluteSensor.a[2] - addedMassForcesTorques.absoluteSensor.v[1] * ((addedMassForcesTorques.Y_vdot - addedMassForcesTorques.X_udot) * addedMassForcesTorques.absoluteSensor.v[2] + addedMassForcesTorques.Y_rdot * hull.w_a[3]) - addedMassForcesTorques.Z_qdot * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3894};
  data->localData[0]->realVars[1228] /* addedMassForcesTorques.torque.torque[3] variable */ = (data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */ - data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */)) * (data->localData[0]->realVars[1095] /* addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[665] /* addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) + (data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */))) - ((data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 3895
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque[1] = ((-addedMassForcesTorques.Y_rdot) - addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[2] + (addedMassForcesTorques.M_qdot - addedMassForcesTorques.N_rdot) * hull.w_a[2] * hull.w_a[3] + (addedMassForcesTorques.Z_qdot + addedMassForcesTorques.Y_rdot) * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[3] + (addedMassForcesTorques.Y_vdot - addedMassForcesTorques.Z_wdot) * addedMassForcesTorques.absoluteSensor.v[2] * addedMassForcesTorques.absoluteSensor.v[3] - addedMassForcesTorques.K_pdot * addedMassForcesTorques.absoluteSensor.z[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3895};
  data->localData[0]->realVars[1226] /* addedMassForcesTorques.torque.torque[1] variable */ = ((-data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) - data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + (data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */ - data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */ + data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */)) - ((data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */) * (data->localData[0]->realVars[1093] /* addedMassForcesTorques.absoluteSensor.z[1] variable */));
  TRACE_POP
}
/*
equation index: 3896
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t[1] = actuators.fixedTranslation_pendulumArm.frame_b.t[1] + (-0.014) * actuators.prismatic.frame_b.f[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3896};
  data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */ = data->localData[0]->realVars[523] /* actuators.fixedTranslation_pendulumArm.frame_b.t[1] variable */ + (-0.014) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */);
  TRACE_POP
}
/*
equation index: 3897
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t[2] = actuators.fixedTranslation_pendulumArm.frame_b.t[2] + (-0.014) * actuators.prismatic.f
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3897};
  data->localData[0]->realVars[569] /* actuators.prismatic.frame_b.t[2] variable */ = data->localData[0]->realVars[524] /* actuators.fixedTranslation_pendulumArm.frame_b.t[2] variable */ + (-0.014) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */);
  TRACE_POP
}
/*
equation index: 3898
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t[2] = actuators.prismatic.frame_b.t[2] - actuators.prismatic.frame_b.f[3] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3898};
  data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */ = data->localData[0]->realVars[569] /* actuators.prismatic.frame_b.t[2] variable */ - ((data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 3899
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t[1] = (-actuators.revolute.R_rel.T[2,1]) * actuators.revolute.frame_b.t[2] - actuators.revolute.R_rel.T[3,1] * actuators.revolute.frame_b.t[3] - actuators.revolute.R_rel.T[1,1] * actuators.prismatic.frame_b.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3899};
  data->localData[0]->realVars[598] /* actuators.revolute.frame_a.t[1] variable */ = ((-data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */) - ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
/*
equation index: 3900
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t[2] = (-actuators.revolute.R_rel.T[2,2]) * actuators.revolute.frame_b.t[2] - actuators.revolute.R_rel.T[3,2] * actuators.revolute.frame_b.t[3] - actuators.revolute.R_rel.T[1,2] * actuators.prismatic.frame_b.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3900};
  data->localData[0]->realVars[599] /* actuators.revolute.frame_a.t[2] variable */ = ((-data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */) - ((data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
/*
equation index: 3901
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t[3] = (-actuators.revolute.R_rel.T[2,3]) * actuators.revolute.frame_b.t[2] - actuators.revolute.R_rel.T[3,3] * actuators.revolute.frame_b.t[3] - actuators.revolute.R_rel.T[1,3] * actuators.prismatic.frame_b.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3901};
  data->localData[0]->realVars[600] /* actuators.revolute.frame_a.t[3] variable */ = ((-data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */) - ((data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
/*
equation index: 3902
type: SIMPLE_ASSIGN
actuators.frame_a.t[2] = actuators.bodyVariableMass.frame_a.t[2] + actuators.revolute.frame_a.t[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3902};
  data->localData[0]->realVars[542] /* actuators.frame_a.t[2] variable */ = data->localData[0]->realVars[153] /* actuators.bodyVariableMass.frame_a.t[2] variable */ + data->localData[0]->realVars[599] /* actuators.revolute.frame_a.t[2] variable */;
  TRACE_POP
}
/*
equation index: 3903
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t[2] = hydrodynamicForcesTorques.T_hd_b[2] - (actuators.frame_a.t[2] + hull.frame_a.t[2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3903};
  data->localData[0]->realVars[1172] /* addedMassForcesTorques.frame_b.t[2] variable */ = data->localData[0]->realVars[1373] /* hydrodynamicForcesTorques.T_hd_b[2] variable */ - (data->localData[0]->realVars[542] /* actuators.frame_a.t[2] variable */ + data->localData[0]->realVars[1337] /* hull.frame_a.t[2] variable */);
  TRACE_POP
}
/*
equation index: 3904
type: SIMPLE_ASSIGN
actuators.frame_a.t[3] = actuators.bodyVariableMass.frame_a.t[3] + actuators.revolute.frame_a.t[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3904};
  data->localData[0]->realVars[543] /* actuators.frame_a.t[3] variable */ = data->localData[0]->realVars[154] /* actuators.bodyVariableMass.frame_a.t[3] variable */ + data->localData[0]->realVars[600] /* actuators.revolute.frame_a.t[3] variable */;
  TRACE_POP
}
/*
equation index: 3905
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t[3] = hydrodynamicForcesTorques.T_hd_b[3] - (actuators.frame_a.t[3] + hull.frame_a.t[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3905};
  data->localData[0]->realVars[1173] /* addedMassForcesTorques.frame_b.t[3] variable */ = data->localData[0]->realVars[1374] /* hydrodynamicForcesTorques.T_hd_b[3] variable */ - (data->localData[0]->realVars[543] /* actuators.frame_a.t[3] variable */ + data->localData[0]->realVars[1338] /* hull.frame_a.t[3] variable */);
  TRACE_POP
}
/*
equation index: 3906
type: SIMPLE_ASSIGN
actuators.frame_a.t[1] = actuators.bodyVariableMass.frame_a.t[1] + actuators.revolute.frame_a.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3906};
  data->localData[0]->realVars[541] /* actuators.frame_a.t[1] variable */ = data->localData[0]->realVars[152] /* actuators.bodyVariableMass.frame_a.t[1] variable */ + data->localData[0]->realVars[598] /* actuators.revolute.frame_a.t[1] variable */;
  TRACE_POP
}
/*
equation index: 3907
type: SIMPLE_ASSIGN
actuators.frame_a.f[3] = actuators.bodyVariableMass.frame_a.f[3] + actuators.revolute.frame_a.f[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3907};
  data->localData[0]->realVars[540] /* actuators.frame_a.f[3] variable */ = data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */ + data->localData[0]->realVars[597] /* actuators.revolute.frame_a.f[3] variable */;
  TRACE_POP
}
/*
equation index: 3908
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t[1] = hydrodynamicForcesTorques.T_hd_b[1] - (actuators.frame_a.t[1] + hull.frame_a.t[1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3908};
  data->localData[0]->realVars[1171] /* addedMassForcesTorques.frame_b.t[1] variable */ = data->localData[0]->realVars[1372] /* hydrodynamicForcesTorques.T_hd_b[1] variable */ - (data->localData[0]->realVars[541] /* actuators.frame_a.t[1] variable */ + data->localData[0]->realVars[1336] /* hull.frame_a.t[1] variable */);
  TRACE_POP
}
/*
equation index: 3909
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f[3] = hydrodynamicForcesTorques.F_hd_b[3] - (actuators.frame_a.f[3] + buoyancyForce.frame_b.f[3] + hull.frame_a.f[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3909};
  data->localData[0]->realVars[1170] /* addedMassForcesTorques.frame_b.f[3] variable */ = data->localData[0]->realVars[1359] /* hydrodynamicForcesTorques.F_hd_b[3] variable */ - (data->localData[0]->realVars[540] /* actuators.frame_a.f[3] variable */ + data->localData[0]->realVars[1315] /* buoyancyForce.frame_b.f[3] variable */ + data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */);
  TRACE_POP
}
/*
equation index: 3910
type: SIMPLE_ASSIGN
actuators.frame_a.f[2] = actuators.bodyVariableMass.frame_a.f[2] + actuators.revolute.frame_a.f[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3910};
  data->localData[0]->realVars[539] /* actuators.frame_a.f[2] variable */ = data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */ + data->localData[0]->realVars[596] /* actuators.revolute.frame_a.f[2] variable */;
  TRACE_POP
}
/*
equation index: 3911
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f[2] = hydrodynamicForcesTorques.F_hd_b[2] - (actuators.frame_a.f[2] + buoyancyForce.frame_b.f[2] + hull.frame_a.f[2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3911};
  data->localData[0]->realVars[1169] /* addedMassForcesTorques.frame_b.f[2] variable */ = data->localData[0]->realVars[1358] /* hydrodynamicForcesTorques.F_hd_b[2] variable */ - (data->localData[0]->realVars[539] /* actuators.frame_a.f[2] variable */ + data->localData[0]->realVars[1314] /* buoyancyForce.frame_b.f[2] variable */ + data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */);
  TRACE_POP
}

void residualFunc3987(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3987};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[1351] /* hull.z_a[1] variable */ = xloc[0];
  data->localData[0]->realVars[1353] /* hull.z_a[3] variable */ = xloc[1];
  data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */ = xloc[2];
  data->localData[0]->realVars[1323] /* hull.a_0[3] variable */ = xloc[3];
  data->localData[0]->realVars[1321] /* hull.a_0[1] variable */ = xloc[4];
  data->localData[0]->realVars[1322] /* hull.a_0[2] variable */ = xloc[5];
  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3842(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3843(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3844(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3845(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3846(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3847(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3848(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3849(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3850(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3851(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3852(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3853(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3854(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3855(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3856(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3857(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3858(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3859(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3860(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3861(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3862(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3863(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3864(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3865(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3866(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3867(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3868(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3869(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3870(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3871(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3872(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3873(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3874(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3875(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3876(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3877(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3878(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3879(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3880(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3881(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3882(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3883(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3884(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3885(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3886(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3887(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3888(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3889(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3890(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3891(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3892(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3893(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3894(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3895(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3896(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3897(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3898(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3899(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3900(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3901(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3902(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3903(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3904(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3905(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3906(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3907(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3908(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3909(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3910(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3911(data, threadData);
  res[0] = (-data->localData[0]->realVars[1173] /* addedMassForcesTorques.frame_b.t[3] variable */) - data->localData[0]->realVars[1228] /* addedMassForcesTorques.torque.torque[3] variable */;

  res[1] = (-data->localData[0]->realVars[1145] /* addedMassForcesTorques.force.force[2] variable */) - data->localData[0]->realVars[1169] /* addedMassForcesTorques.frame_b.f[2] variable */;

  res[2] = (-data->localData[0]->realVars[1172] /* addedMassForcesTorques.frame_b.t[2] variable */) - data->localData[0]->realVars[1227] /* addedMassForcesTorques.torque.torque[2] variable */;

  res[3] = (-data->localData[0]->realVars[1146] /* addedMassForcesTorques.force.force[3] variable */) - data->localData[0]->realVars[1170] /* addedMassForcesTorques.frame_b.f[3] variable */;

  res[4] = (-data->localData[0]->realVars[1171] /* addedMassForcesTorques.frame_b.t[1] variable */) - data->localData[0]->realVars[1226] /* addedMassForcesTorques.torque.torque[1] variable */;

  res[5] = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) - data->localData[0]->realVars[595] /* actuators.revolute.frame_a.f[1] variable */ - ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */));
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData3987(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for hull.z_a[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1351].attribute /* hull.z_a[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1351].attribute /* hull.z_a[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1351].attribute /* hull.z_a[1] */.max;
  /* static ls data for hull.z_a[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1353].attribute /* hull.z_a[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1353].attribute /* hull.z_a[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1353].attribute /* hull.z_a[3] */.max;
  /* static ls data for hull.frame_a.f[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1333].attribute /* hull.frame_a.f[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1333].attribute /* hull.frame_a.f[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1333].attribute /* hull.frame_a.f[1] */.max;
  /* static ls data for hull.a_0[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1323].attribute /* hull.a_0[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1323].attribute /* hull.a_0[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1323].attribute /* hull.a_0[3] */.max;
  /* static ls data for hull.a_0[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1321].attribute /* hull.a_0[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1321].attribute /* hull.a_0[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1321].attribute /* hull.a_0[1] */.max;
  /* static ls data for hull.a_0[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1322].attribute /* hull.a_0[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1322].attribute /* hull.a_0[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1322].attribute /* hull.a_0[2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA3592(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,3592};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setAElement(0, 0, (2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 0, linearSystemData, threadData);
  linearSystemData->setAElement(0, 1, (2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 1, linearSystemData, threadData);
  linearSystemData->setAElement(0, 2, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 2, linearSystemData, threadData);
  linearSystemData->setAElement(0, 3, (-2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 3, linearSystemData, threadData);
  linearSystemData->setAElement(1, 0, (-2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 4, linearSystemData, threadData);
  linearSystemData->setAElement(1, 1, (2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 5, linearSystemData, threadData);
  linearSystemData->setAElement(1, 2, (2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 6, linearSystemData, threadData);
  linearSystemData->setAElement(1, 3, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 7, linearSystemData, threadData);
  linearSystemData->setAElement(2, 0, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 8, linearSystemData, threadData);
  linearSystemData->setAElement(2, 1, (2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 9, linearSystemData, threadData);
  linearSystemData->setAElement(2, 2, (-2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 10, linearSystemData, threadData);
  linearSystemData->setAElement(2, 3, (2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 11, linearSystemData, threadData);
  linearSystemData->setAElement(3, 0, (-2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 12, linearSystemData, threadData);
  linearSystemData->setAElement(3, 1, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 13, linearSystemData, threadData);
  linearSystemData->setAElement(3, 2, (-2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 14, linearSystemData, threadData);
  linearSystemData->setAElement(3, 3, (-2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 15, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb3592(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,3592};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setBElement(0, (-data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */), linearSystemData, threadData);
  linearSystemData->setBElement(1, (-data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */), linearSystemData, threadData);
  linearSystemData->setBElement(2, (-data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */), linearSystemData, threadData);
  linearSystemData->setBElement(3, 0.0, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData3592(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(actuators.bodyVariableMass.Q[3]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[40].attribute /* der(actuators.bodyVariableMass.Q[3]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[40].attribute /* der(actuators.bodyVariableMass.Q[3]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[40].attribute /* der(actuators.bodyVariableMass.Q[3]) */.max;
  /* static ls data for der(actuators.bodyVariableMass.Q[4]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[41].attribute /* der(actuators.bodyVariableMass.Q[4]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[41].attribute /* der(actuators.bodyVariableMass.Q[4]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[41].attribute /* der(actuators.bodyVariableMass.Q[4]) */.max;
  /* static ls data for der(actuators.bodyVariableMass.Q[1]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[38].attribute /* der(actuators.bodyVariableMass.Q[1]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[38].attribute /* der(actuators.bodyVariableMass.Q[1]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[38].attribute /* der(actuators.bodyVariableMass.Q[1]) */.max;
  /* static ls data for der(actuators.bodyVariableMass.Q[2]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[39].attribute /* der(actuators.bodyVariableMass.Q[2]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[39].attribute /* der(actuators.bodyVariableMass.Q[2]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[39].attribute /* der(actuators.bodyVariableMass.Q[2]) */.max;
}


/*
equation index: 1619
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.a_0[2] = hull.a_0[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1619};
  data->localData[0]->realVars[144] /* actuators.bodyVariableMass.a_0[2] variable */ = data->localData[0]->realVars[1322] /* hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 1620
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[2] = hull.a_0[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1620};
  data->localData[0]->realVars[33] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[1322] /* hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 1621
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[1] = hull.a_0[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1621};
  data->localData[0]->realVars[32] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[1321] /* hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 1622
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.a_0[1] = hull.a_0[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1622};
  data->localData[0]->realVars[143] /* actuators.bodyVariableMass.a_0[1] variable */ = data->localData[0]->realVars[1321] /* hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 1623
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a[1] = hull.frame_a.R.T[1,1] * hull.a_0[1] + hull.frame_a.R.T[1,2] * hull.a_0[2] + hull.frame_a.R.T[1,3] * hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1623};
  data->localData[0]->realVars[664] /* addedMassForcesTorques.absoluteSensor.a[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1323] /* hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 1624
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a[2] = hull.frame_a.R.T[2,1] * hull.a_0[1] + hull.frame_a.R.T[2,2] * hull.a_0[2] + hull.frame_a.R.T[2,3] * hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1624};
  data->localData[0]->realVars[665] /* addedMassForcesTorques.absoluteSensor.a[2] variable */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1323] /* hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 1625
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.a[3] = hull.frame_a.R.T[3,1] * hull.a_0[1] + hull.frame_a.R.T[3,2] * hull.a_0[2] + hull.frame_a.R.T[3,3] * hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1625};
  data->localData[0]->realVars[666] /* addedMassForcesTorques.absoluteSensor.a[3] variable */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1323] /* hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 1626
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force[1] = addedMassForcesTorques.Y_rdot * hull.w_a[3] ^ 2.0 + addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[3] + (-addedMassForcesTorques.Z_wdot) * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[2] - addedMassForcesTorques.X_udot * addedMassForcesTorques.absoluteSensor.a[1] - addedMassForcesTorques.Z_qdot * hull.w_a[2] ^ 2.0
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1626};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */;
  tmp1 = data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */;
  data->localData[0]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */ = (data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((tmp0 * tmp0)) + (data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + ((-data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */)) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) - ((data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[664] /* addedMassForcesTorques.absoluteSensor.a[1] variable */)) - ((data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 1627
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f[1] = -addedMassForcesTorques.force.force[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1627};
  data->localData[0]->realVars[1168] /* addedMassForcesTorques.frame_b.f[1] variable */ = (-data->localData[0]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */);
  TRACE_POP
}
/*
equation index: 1628
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[3] = hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1628};
  data->localData[0]->realVars[34] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[1323] /* hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 1629
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.a_0[3] = hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1629};
  data->localData[0]->realVars[145] /* actuators.bodyVariableMass.a_0[3] variable */ = data->localData[0]->realVars[1323] /* hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 1630
type: SIMPLE_ASSIGN
actuators.frame_a.f[1] = hydrodynamicForcesTorques.F_hd_b[1] - (addedMassForcesTorques.frame_b.f[1] + buoyancyForce.frame_b.f[1] + hull.frame_a.f[1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1630};
  data->localData[0]->realVars[538] /* actuators.frame_a.f[1] variable */ = data->localData[0]->realVars[1357] /* hydrodynamicForcesTorques.F_hd_b[1] variable */ - (data->localData[0]->realVars[1168] /* addedMassForcesTorques.frame_b.f[1] variable */ + data->localData[0]->realVars[1313] /* buoyancyForce.frame_b.f[1] variable */ + data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */);
  TRACE_POP
}
/*
equation index: 1631
type: SIMPLE_ASSIGN
hull.z_a[2] = (hull.frame_a.f[1] - hull.m * (hull.frame_a.R.T[1,1] * hull.a_0[1] + hull.frame_a.R.T[1,2] * hull.a_0[2] + hull.frame_a.R.T[1,3] * (-9.81 + hull.a_0[3]) + hull.w_a[2] * (hull.w_a[1] * hull.r_CM[2] - hull.w_a[2] * hull.r_CM[1]) + hull.w_a[3] * (hull.w_a[1] * hull.r_CM[3] - hull.w_a[3] * hull.r_CM[1]) - hull.z_a[3] * hull.r_CM[2])) / (hull.r_CM[3] * hull.m)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1631};
  data->localData[0]->realVars[1352] /* hull.z_a[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */ - ((data->simulationInfo->realParameter[407] /* hull.m PARAM */) * ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */)))),(data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */),"hull.r_CM[3] * hull.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 1632
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f[1] = (hull.frame_a.R.T[1,1] * actuators.bodyVariableMass.a_0[1] + hull.frame_a.R.T[1,2] * actuators.bodyVariableMass.a_0[2] + hull.frame_a.R.T[1,3] * (-9.81 + actuators.bodyVariableMass.a_0[3]) + hull.z_a[2] * actuators.bodyVariableMass.r_CM[3] + hull.w_a[2] * (hull.w_a[1] * actuators.bodyVariableMass.r_CM[2] - hull.w_a[2] * actuators.bodyVariableMass.r_CM[1]) + hull.w_a[3] * (hull.w_a[1] * actuators.bodyVariableMass.r_CM[3] - hull.w_a[3] * actuators.bodyVariableMass.r_CM[1]) - hull.z_a[3] * actuators.bodyVariableMass.r_CM[2]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1632};
  data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */ = ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[143] /* actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[144] /* actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[145] /* actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}
/*
equation index: 1633
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f[1] = actuators.frame_a.f[1] - actuators.bodyVariableMass.frame_a.f[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1633};
  data->localData[0]->realVars[595] /* actuators.revolute.frame_a.f[1] variable */ = data->localData[0]->realVars[538] /* actuators.frame_a.f[1] variable */ - data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */;
  TRACE_POP
}
/*
equation index: 1634
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f[3] = (hull.frame_a.R.T[3,1] * actuators.bodyVariableMass.a_0[1] + hull.frame_a.R.T[3,2] * actuators.bodyVariableMass.a_0[2] + hull.frame_a.R.T[3,3] * (-9.81 + actuators.bodyVariableMass.a_0[3]) + hull.z_a[1] * actuators.bodyVariableMass.r_CM[2] + hull.w_a[1] * (hull.w_a[3] * actuators.bodyVariableMass.r_CM[1] - hull.w_a[1] * actuators.bodyVariableMass.r_CM[3]) + hull.w_a[2] * (hull.w_a[3] * actuators.bodyVariableMass.r_CM[2] - hull.w_a[2] * actuators.bodyVariableMass.r_CM[3]) - hull.z_a[2] * actuators.bodyVariableMass.r_CM[1]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1634};
  data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[143] /* actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[144] /* actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[145] /* actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}
/*
equation index: 1635
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t[2] = actuators.bodyVariableMass.I[2,1] * hull.z_a[1] + actuators.bodyVariableMass.I[2,2] * hull.z_a[2] + actuators.bodyVariableMass.I[2,3] * hull.z_a[3] + hull.w_a[3] * (actuators.bodyVariableMass.I[1,1] * hull.w_a[1] + actuators.bodyVariableMass.I[1,2] * hull.w_a[2] + actuators.bodyVariableMass.I[1,3] * hull.w_a[3]) + actuators.bodyVariableMass.r_CM[3] * actuators.bodyVariableMass.frame_a.f[1] + (-actuators.bodyVariableMass.r_CM[1]) * actuators.bodyVariableMass.frame_a.f[3] - hull.w_a[1] * (actuators.bodyVariableMass.I[3,1] * hull.w_a[1] + actuators.bodyVariableMass.I[3,2] * hull.w_a[2] + actuators.bodyVariableMass.I[3,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1635};
  data->localData[0]->realVars[153] /* actuators.bodyVariableMass.frame_a.t[2] variable */ = (data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) * (data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */) + ((-data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */)) * (data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1636
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.f[2] = (hull.frame_a.R.T[2,1] * actuators.bodyVariableMass.a_0[1] + hull.frame_a.R.T[2,2] * actuators.bodyVariableMass.a_0[2] + hull.frame_a.R.T[2,3] * (-9.81 + actuators.bodyVariableMass.a_0[3]) + hull.z_a[3] * actuators.bodyVariableMass.r_CM[1] + hull.w_a[3] * (hull.w_a[2] * actuators.bodyVariableMass.r_CM[3] - hull.w_a[3] * actuators.bodyVariableMass.r_CM[2]) + hull.w_a[1] * (hull.w_a[2] * actuators.bodyVariableMass.r_CM[1] - hull.w_a[1] * actuators.bodyVariableMass.r_CM[2]) - hull.z_a[1] * actuators.bodyVariableMass.r_CM[3]) * actuators.bodyVariableMass.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1636};
  data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[143] /* actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[144] /* actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[145] /* actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */);
  TRACE_POP
}
/*
equation index: 1637
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t[3] = actuators.bodyVariableMass.I[3,1] * hull.z_a[1] + actuators.bodyVariableMass.I[3,2] * hull.z_a[2] + actuators.bodyVariableMass.I[3,3] * hull.z_a[3] + hull.w_a[1] * (actuators.bodyVariableMass.I[2,1] * hull.w_a[1] + actuators.bodyVariableMass.I[2,2] * hull.w_a[2] + actuators.bodyVariableMass.I[2,3] * hull.w_a[3]) + actuators.bodyVariableMass.r_CM[1] * actuators.bodyVariableMass.frame_a.f[2] + (-actuators.bodyVariableMass.r_CM[2]) * actuators.bodyVariableMass.frame_a.f[1] - hull.w_a[2] * (actuators.bodyVariableMass.I[1,1] * hull.w_a[1] + actuators.bodyVariableMass.I[1,2] * hull.w_a[2] + actuators.bodyVariableMass.I[1,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1637};
  data->localData[0]->realVars[154] /* actuators.bodyVariableMass.frame_a.t[3] variable */ = (data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[76] /* actuators.bodyVariableMass.r_CM[1] PARAM */) * (data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */) + ((-data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */)) * (data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1638
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.t[1] = actuators.bodyVariableMass.I[1,1] * hull.z_a[1] + actuators.bodyVariableMass.I[1,2] * hull.z_a[2] + actuators.bodyVariableMass.I[1,3] * hull.z_a[3] + hull.w_a[2] * (actuators.bodyVariableMass.I[3,1] * hull.w_a[1] + actuators.bodyVariableMass.I[3,2] * hull.w_a[2] + actuators.bodyVariableMass.I[3,3] * hull.w_a[3]) + actuators.bodyVariableMass.r_CM[2] * actuators.bodyVariableMass.frame_a.f[3] + (-actuators.bodyVariableMass.r_CM[3]) * actuators.bodyVariableMass.frame_a.f[2] - hull.w_a[3] * (actuators.bodyVariableMass.I[2,1] * hull.w_a[1] + actuators.bodyVariableMass.I[2,2] * hull.w_a[2] + actuators.bodyVariableMass.I[2,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1638};
  data->localData[0]->realVars[152] /* actuators.bodyVariableMass.frame_a.t[1] variable */ = (data->simulationInfo->realParameter[38] /* actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[39] /* actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[40] /* actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[44] /* actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[45] /* actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[46] /* actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[77] /* actuators.bodyVariableMass.r_CM[2] PARAM */) * (data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */) + ((-data->simulationInfo->realParameter[78] /* actuators.bodyVariableMass.r_CM[3] PARAM */)) * (data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[41] /* actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[42] /* actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[43] /* actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1639
type: SIMPLE_ASSIGN
hull.frame_a.f[3] = (hull.frame_a.R.T[3,1] * hull.a_0[1] + hull.frame_a.R.T[3,2] * hull.a_0[2] + hull.frame_a.R.T[3,3] * (-9.81 + hull.a_0[3]) + hull.z_a[1] * hull.r_CM[2] + hull.w_a[1] * (hull.w_a[3] * hull.r_CM[1] - hull.w_a[1] * hull.r_CM[3]) + hull.w_a[2] * (hull.w_a[3] * hull.r_CM[2] - hull.w_a[2] * hull.r_CM[3]) - hull.z_a[2] * hull.r_CM[1]) * hull.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1639};
  data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */ = ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */);
  TRACE_POP
}
/*
equation index: 1640
type: SIMPLE_ASSIGN
hull.frame_a.f[2] = (hull.frame_a.R.T[2,1] * hull.a_0[1] + hull.frame_a.R.T[2,2] * hull.a_0[2] + hull.frame_a.R.T[2,3] * (-9.81 + hull.a_0[3]) + hull.z_a[3] * hull.r_CM[1] + hull.w_a[3] * (hull.w_a[2] * hull.r_CM[3] - hull.w_a[3] * hull.r_CM[2]) + hull.w_a[1] * (hull.w_a[2] * hull.r_CM[1] - hull.w_a[1] * hull.r_CM[2]) - hull.z_a[1] * hull.r_CM[3]) * hull.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1640};
  data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */ = ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1321] /* hull.a_0[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1322] /* hull.a_0[2] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[1323] /* hull.a_0[3] variable */) + (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) * (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[407] /* hull.m PARAM */);
  TRACE_POP
}
/*
equation index: 1641
type: SIMPLE_ASSIGN
hull.frame_a.t[3] = hull.I[3,1] * hull.z_a[1] + hull.I[3,2] * hull.z_a[2] + hull.I[3,3] * hull.z_a[3] + hull.w_a[1] * (hull.I[2,1] * hull.w_a[1] + hull.I[2,2] * hull.w_a[2] + hull.I[2,3] * hull.w_a[3]) + hull.r_CM[1] * hull.frame_a.f[2] - hull.r_CM[2] * hull.frame_a.f[1] - hull.w_a[2] * (hull.I[1,1] * hull.w_a[1] + hull.I[1,2] * hull.w_a[2] + hull.I[1,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1641};
  data->localData[0]->realVars[1338] /* hull.frame_a.t[3] variable */ = (data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */) - ((data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */)) - ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1642
type: SIMPLE_ASSIGN
hull.frame_a.t[1] = hull.I[1,1] * hull.z_a[1] + hull.I[1,2] * hull.z_a[2] + hull.I[1,3] * hull.z_a[3] + hull.w_a[2] * (hull.I[3,1] * hull.w_a[1] + hull.I[3,2] * hull.w_a[2] + hull.I[3,3] * hull.w_a[3]) + hull.r_CM[2] * hull.frame_a.f[3] - hull.r_CM[3] * hull.frame_a.f[2] - hull.w_a[3] * (hull.I[2,1] * hull.w_a[1] + hull.I[2,2] * hull.w_a[2] + hull.I[2,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1642};
  data->localData[0]->realVars[1336] /* hull.frame_a.t[1] variable */ = (data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * ((data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[412] /* hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */) - ((data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */)) - ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1643
type: SIMPLE_ASSIGN
hull.frame_a.t[2] = hull.I[2,1] * hull.z_a[1] + hull.I[2,2] * hull.z_a[2] + hull.I[2,3] * hull.z_a[3] + hull.w_a[3] * (hull.I[1,1] * hull.w_a[1] + hull.I[1,2] * hull.w_a[2] + hull.I[1,3] * hull.w_a[3]) + hull.r_CM[3] * hull.frame_a.f[1] - hull.r_CM[1] * hull.frame_a.f[3] - hull.w_a[1] * (hull.I[3,1] * hull.w_a[1] + hull.I[3,2] * hull.w_a[2] + hull.I[3,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1643};
  data->localData[0]->realVars[1337] /* hull.frame_a.t[2] variable */ = (data->simulationInfo->realParameter[375] /* hull.I[2,1] PARAM */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->simulationInfo->realParameter[376] /* hull.I[2,2] PARAM */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->simulationInfo->realParameter[377] /* hull.I[2,3] PARAM */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * ((data->simulationInfo->realParameter[372] /* hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[373] /* hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[374] /* hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[413] /* hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */) - ((data->simulationInfo->realParameter[411] /* hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */)) - ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * ((data->simulationInfo->realParameter[378] /* hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[379] /* hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[380] /* hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1644
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a[1] = actuators.revolute.R_rel.T[1,1] * hull.z_a[1] + actuators.revolute.R_rel.T[1,2] * hull.z_a[2] + actuators.revolute.R_rel.T[1,3] * hull.z_a[3] + actuators.revolute.R_rel.w[3] * (actuators.revolute.R_rel.T[2,1] * hull.w_a[1] + actuators.revolute.R_rel.T[2,2] * hull.w_a[2] + actuators.revolute.R_rel.T[2,3] * hull.w_a[3]) + $DER.actuators.revolute.R_rel.w[1] - actuators.revolute.R_rel.w[2] * (actuators.revolute.R_rel.T[3,1] * hull.w_a[1] + actuators.revolute.R_rel.T[3,2] * hull.w_a[2] + actuators.revolute.R_rel.T[3,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1644};
  data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[583] /* actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + data->localData[0]->realVars[73] /* der(actuators.revolute.R_rel.w[1]) DUMMY_DER */ - ((data->localData[0]->realVars[582] /* actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1645
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a[2] = actuators.revolute.R_rel.T[2,1] * hull.z_a[1] + actuators.revolute.R_rel.T[2,2] * hull.z_a[2] + actuators.revolute.R_rel.T[2,3] * hull.z_a[3] + actuators.revolute.R_rel.w[1] * (actuators.revolute.R_rel.T[3,1] * hull.w_a[1] + actuators.revolute.R_rel.T[3,2] * hull.w_a[2] + actuators.revolute.R_rel.T[3,3] * hull.w_a[3]) + $DER.actuators.revolute.R_rel.w[2] - actuators.revolute.R_rel.w[3] * (actuators.revolute.R_rel.T[1,1] * hull.w_a[1] + actuators.revolute.R_rel.T[1,2] * hull.w_a[2] + actuators.revolute.R_rel.T[1,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1645};
  data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */ = (data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[581] /* actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + data->localData[0]->realVars[74] /* der(actuators.revolute.R_rel.w[2]) DUMMY_DER */ - ((data->localData[0]->realVars[583] /* actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1646
type: SIMPLE_ASSIGN
actuators.body_rolling.z_a[3] = actuators.revolute.R_rel.T[3,1] * hull.z_a[1] + actuators.revolute.R_rel.T[3,2] * hull.z_a[2] + actuators.revolute.R_rel.T[3,3] * hull.z_a[3] + actuators.revolute.R_rel.w[2] * (actuators.revolute.R_rel.T[1,1] * hull.w_a[1] + actuators.revolute.R_rel.T[1,2] * hull.w_a[2] + actuators.revolute.R_rel.T[1,3] * hull.w_a[3]) + $DER.actuators.revolute.R_rel.w[3] - actuators.revolute.R_rel.w[1] * (actuators.revolute.R_rel.T[2,1] * hull.w_a[1] + actuators.revolute.R_rel.T[2,2] * hull.w_a[2] + actuators.revolute.R_rel.T[2,3] * hull.w_a[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1646};
  data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */ = (data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */) + (data->localData[0]->realVars[582] /* actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + data->localData[0]->realVars[75] /* der(actuators.revolute.R_rel.w[3]) DUMMY_DER */ - ((data->localData[0]->realVars[581] /* actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1647
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[1].y = hull.frame_a.R.T[1,1] * hull.z_a[1] + hull.frame_a.R.T[2,1] * hull.z_a[2] + hull.frame_a.R.T[3,1] * hull.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1647};
  data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 1648
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[2].y = hull.frame_a.R.T[1,2] * hull.z_a[1] + hull.frame_a.R.T[2,2] * hull.z_a[2] + hull.frame_a.R.T[3,2] * hull.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1648};
  data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 1649
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[3].y = hull.frame_a.R.T[1,3] * hull.z_a[1] + hull.frame_a.R.T[2,3] * hull.z_a[2] + hull.frame_a.R.T[3,3] * hull.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1649};
  data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1351] /* hull.z_a[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1352] /* hull.z_a[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1353] /* hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 1650
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z[1] = hull.frame_a.R.T[1,1] * addedMassForcesTorques.absoluteSensor.der2[1].y + hull.frame_a.R.T[1,2] * addedMassForcesTorques.absoluteSensor.der2[2].y + hull.frame_a.R.T[1,3] * addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1650};
  data->localData[0]->realVars[1093] /* addedMassForcesTorques.absoluteSensor.z[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */);
  TRACE_POP
}
/*
equation index: 1651
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z[2] = hull.frame_a.R.T[2,1] * addedMassForcesTorques.absoluteSensor.der2[1].y + hull.frame_a.R.T[2,2] * addedMassForcesTorques.absoluteSensor.der2[2].y + hull.frame_a.R.T[2,3] * addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1651};
  data->localData[0]->realVars[1094] /* addedMassForcesTorques.absoluteSensor.z[2] variable */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */);
  TRACE_POP
}
/*
equation index: 1652
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.z[3] = hull.frame_a.R.T[3,1] * addedMassForcesTorques.absoluteSensor.der2[1].y + hull.frame_a.R.T[3,2] * addedMassForcesTorques.absoluteSensor.der2[2].y + hull.frame_a.R.T[3,3] * addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1652};
  data->localData[0]->realVars[1095] /* addedMassForcesTorques.absoluteSensor.z[3] variable */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */);
  TRACE_POP
}
/*
equation index: 1653
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] = $DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[2] + actuators.body_rolling.frame_a.R.T[1,2] * (actuators.prismatic.a + actuators.body_rolling.w_a[2] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s - actuators.position_slidingMass.s * actuators.body_rolling.w_a[3] ^ 2.0) + actuators.body_rolling.frame_a.R.T[2,2] * (2.0 * actuators.body_rolling.w_a[3] * actuators.prismatic.v + actuators.body_rolling.z_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.w_a[1] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s) + actuators.body_rolling.frame_a.R.T[3,2] * (2.0 * (-actuators.body_rolling.w_a[2]) * actuators.prismatic.v + actuators.body_rolling.w_a[1] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.z_a[2] * actuators.position_slidingMass.s)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1653};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[36] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[33] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[550] /* actuators.prismatic.a variable */ + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((2.0) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)))) + (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((2.0) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 1654
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0[2] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] + actuators.body_rolling.frame_a.R.T[1,2] * (0.014 * actuators.body_rolling.z_a[2] + (-0.014) * (-actuators.body_rolling.w_a[3]) * actuators.body_rolling.w_a[1]) + actuators.body_rolling.frame_a.R.T[2,2] * ((-0.014) * actuators.body_rolling.z_a[1] + 0.014 * actuators.body_rolling.w_a[3] * actuators.body_rolling.w_a[2]) + (-0.014) * actuators.body_rolling.frame_a.R.T[3,2] * (actuators.body_rolling.w_a[1] ^ 2.0 + actuators.body_rolling.w_a[2] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1654};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */;
  data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */ = data->localData[0]->realVars[36] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */ + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * ((0.014) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (-0.014) * (((-data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */))) + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((-0.014) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (0.014) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */))) + (-0.014) * ((data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 1655
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] = $DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[1] + actuators.body_rolling.frame_a.R.T[1,1] * (actuators.prismatic.a + actuators.body_rolling.w_a[2] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s - actuators.position_slidingMass.s * actuators.body_rolling.w_a[3] ^ 2.0) + actuators.body_rolling.frame_a.R.T[2,1] * (2.0 * actuators.body_rolling.w_a[3] * actuators.prismatic.v + actuators.body_rolling.z_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.w_a[1] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s) + actuators.body_rolling.frame_a.R.T[3,1] * (2.0 * (-actuators.body_rolling.w_a[2]) * actuators.prismatic.v + actuators.body_rolling.w_a[1] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.z_a[2] * actuators.position_slidingMass.s)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1655};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[35] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[32] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ + (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[550] /* actuators.prismatic.a variable */ + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((2.0) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)))) + (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((2.0) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 1656
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] = $DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[3] + actuators.body_rolling.frame_a.R.T[1,3] * (actuators.prismatic.a + actuators.body_rolling.w_a[2] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s - actuators.position_slidingMass.s * actuators.body_rolling.w_a[3] ^ 2.0) + actuators.body_rolling.frame_a.R.T[2,3] * (2.0 * actuators.body_rolling.w_a[3] * actuators.prismatic.v + actuators.body_rolling.z_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.w_a[1] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s) + actuators.body_rolling.frame_a.R.T[3,3] * (2.0 * (-actuators.body_rolling.w_a[2]) * actuators.prismatic.v + actuators.body_rolling.w_a[1] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s - actuators.body_rolling.z_a[2] * actuators.position_slidingMass.s)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1656};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[37] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[34] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */ + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[550] /* actuators.prismatic.a variable */ + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((2.0) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)))) + (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((2.0) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 1657
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0[1] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] + actuators.body_rolling.frame_a.R.T[1,1] * (0.014 * actuators.body_rolling.z_a[2] + (-0.014) * (-actuators.body_rolling.w_a[3]) * actuators.body_rolling.w_a[1]) + actuators.body_rolling.frame_a.R.T[2,1] * ((-0.014) * actuators.body_rolling.z_a[1] + 0.014 * actuators.body_rolling.w_a[3] * actuators.body_rolling.w_a[2]) + (-0.014) * actuators.body_rolling.frame_a.R.T[3,1] * (actuators.body_rolling.w_a[1] ^ 2.0 + actuators.body_rolling.w_a[2] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1657};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */;
  data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */ = data->localData[0]->realVars[35] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */ + (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * ((0.014) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (-0.014) * (((-data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */))) + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((-0.014) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (0.014) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */))) + (-0.014) * ((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 1658
type: SIMPLE_ASSIGN
actuators.body_rolling.a_0[3] = $DER.$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] + actuators.body_rolling.frame_a.R.T[1,3] * (0.014 * actuators.body_rolling.z_a[2] + (-0.014) * (-actuators.body_rolling.w_a[3]) * actuators.body_rolling.w_a[1]) + actuators.body_rolling.frame_a.R.T[2,3] * ((-0.014) * actuators.body_rolling.z_a[1] + 0.014 * actuators.body_rolling.w_a[3] * actuators.body_rolling.w_a[2]) + (-0.014) * actuators.body_rolling.frame_a.R.T[3,3] * (actuators.body_rolling.w_a[1] ^ 2.0 + actuators.body_rolling.w_a[2] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1658};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */;
  data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */ = data->localData[0]->realVars[37] /* der(der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * ((0.014) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (-0.014) * (((-data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */))) + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((-0.014) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (0.014) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */))) + (-0.014) * ((data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 1659
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f[2] = (-(actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.a_0[1] + actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.a_0[2] + actuators.body_rolling.frame_a.R.T[2,3] * (-9.81 + actuators.body_rolling.a_0[3]) + actuators.body_rolling.z_a[3] * actuators.body_rolling.r_CM[1] + actuators.body_rolling.w_a[3] * (actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[2]) + actuators.body_rolling.w_a[1] * (actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[2]) - actuators.body_rolling.z_a[1] * actuators.body_rolling.r_CM[3])) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1659};
  data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */ = ((-((data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) + (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */))))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 1660
type: SIMPLE_ASSIGN
actuators.prismatic.f = (actuators.body_rolling.frame_a.R.T[1,1] * actuators.body_rolling.a_0[1] + actuators.body_rolling.frame_a.R.T[1,2] * actuators.body_rolling.a_0[2] + actuators.body_rolling.frame_a.R.T[1,3] * (-9.81 + actuators.body_rolling.a_0[3]) + actuators.body_rolling.z_a[2] * actuators.body_rolling.r_CM[3] + actuators.body_rolling.w_a[2] * (actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[2] - actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[1]) + actuators.body_rolling.w_a[3] * (actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[3] - actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[1]) - actuators.body_rolling.z_a[3] * actuators.body_rolling.r_CM[2]) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1660};
  data->localData[0]->realVars[565] /* actuators.prismatic.f variable */ = ((data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (-9.81 + data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */))) + (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 1661
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.f[3] = (-(actuators.body_rolling.frame_a.R.T[3,1] * actuators.body_rolling.a_0[1] + actuators.body_rolling.frame_a.R.T[3,2] * actuators.body_rolling.a_0[2] + actuators.body_rolling.frame_a.R.T[3,3] * (-9.81 + actuators.body_rolling.a_0[3]) + actuators.body_rolling.z_a[1] * actuators.body_rolling.r_CM[2] + actuators.body_rolling.w_a[1] * (actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[1] - actuators.body_rolling.w_a[1] * actuators.body_rolling.r_CM[3]) + actuators.body_rolling.w_a[2] * (actuators.body_rolling.w_a[3] * actuators.body_rolling.r_CM[2] - actuators.body_rolling.w_a[2] * actuators.body_rolling.r_CM[3]) - actuators.body_rolling.z_a[2] * actuators.body_rolling.r_CM[1])) * actuators.body_rolling.m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1661};
  data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */ = ((-((data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * (data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */))) + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */))))) * (data->simulationInfo->realParameter[125] /* actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 1662
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t[1] = -(actuators.body_rolling.I[1,1] * actuators.body_rolling.z_a[1] + actuators.body_rolling.I[1,2] * actuators.body_rolling.z_a[2] + actuators.body_rolling.I[1,3] * actuators.body_rolling.z_a[3] + actuators.body_rolling.w_a[2] * (actuators.body_rolling.I[3,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[3,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[3,3] * actuators.body_rolling.w_a[3]) + actuators.body_rolling.r_CM[3] * actuators.prismatic.frame_b.f[2] + (-actuators.body_rolling.r_CM[2]) * actuators.prismatic.frame_b.f[3] - actuators.body_rolling.w_a[3] * (actuators.body_rolling.I[2,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[2,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[2,3] * actuators.body_rolling.w_a[3]))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1662};
  data->localData[0]->realVars[523] /* actuators.fixedTranslation_pendulumArm.frame_b.t[1] variable */ = (-((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) + ((-data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 1663
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_b.t[2] = -(actuators.body_rolling.I[2,1] * actuators.body_rolling.z_a[1] + actuators.body_rolling.I[2,2] * actuators.body_rolling.z_a[2] + actuators.body_rolling.I[2,3] * actuators.body_rolling.z_a[3] + actuators.body_rolling.w_a[3] * (actuators.body_rolling.I[1,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[1,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[1,3] * actuators.body_rolling.w_a[3]) + actuators.body_rolling.r_CM[3] * actuators.prismatic.f + actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f[3] - actuators.body_rolling.w_a[1] * (actuators.body_rolling.I[3,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[3,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[3,3] * actuators.body_rolling.w_a[3]))
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1663};
  data->localData[0]->realVars[524] /* actuators.fixedTranslation_pendulumArm.frame_b.t[2] variable */ = (-((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[131] /* actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) + (data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 1664
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t[3] = -(actuators.body_rolling.I[3,1] * actuators.body_rolling.z_a[1] + actuators.body_rolling.I[3,2] * actuators.body_rolling.z_a[2] + actuators.body_rolling.I[3,3] * actuators.body_rolling.z_a[3] + actuators.body_rolling.w_a[1] * (actuators.body_rolling.I[2,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[2,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[2,3] * actuators.body_rolling.w_a[3]) + (-actuators.body_rolling.r_CM[2]) * actuators.prismatic.f - actuators.body_rolling.w_a[2] * (actuators.body_rolling.I[1,1] * actuators.body_rolling.w_a[1] + actuators.body_rolling.I[1,2] * actuators.body_rolling.w_a[2] + actuators.body_rolling.I[1,3] * actuators.body_rolling.w_a[3]) - actuators.body_rolling.r_CM[1] * actuators.prismatic.frame_b.f[2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1664};
  data->localData[0]->realVars[570] /* actuators.prismatic.frame_b.t[3] variable */ = (-((data->simulationInfo->realParameter[96] /* actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[97] /* actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[98] /* actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[93] /* actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[94] /* actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[95] /* actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */)) + ((-data->simulationInfo->realParameter[130] /* actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) - ((data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[90] /* actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[91] /* actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[92] /* actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */))) - ((data->simulationInfo->realParameter[129] /* actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */))));
  TRACE_POP
}
/*
equation index: 1665
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f[3] = actuators.revolute.R_rel.T[1,3] * actuators.prismatic.f + (-actuators.revolute.R_rel.T[2,3]) * actuators.prismatic.frame_b.f[2] - actuators.revolute.R_rel.T[3,3] * actuators.prismatic.frame_b.f[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1665};
  data->localData[0]->realVars[597] /* actuators.revolute.frame_a.f[3] variable */ = (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) + ((-data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) - ((data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */));
  TRACE_POP
}
/*
equation index: 1666
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.f[2] = actuators.revolute.R_rel.T[1,2] * actuators.prismatic.f + (-actuators.revolute.R_rel.T[2,2]) * actuators.prismatic.frame_b.f[2] - actuators.revolute.R_rel.T[3,2] * actuators.prismatic.frame_b.f[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1666};
  data->localData[0]->realVars[596] /* actuators.revolute.frame_a.f[2] variable */ = (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) + ((-data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) - ((data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */));
  TRACE_POP
}
/*
equation index: 1667
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t[3] = actuators.prismatic.frame_b.t[3] + actuators.prismatic.frame_b.f[2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1667};
  data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */ = data->localData[0]->realVars[570] /* actuators.prismatic.frame_b.t[3] variable */ + (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */);
  TRACE_POP
}
/*
equation index: 1668
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force[3] = addedMassForcesTorques.X_udot * addedMassForcesTorques.absoluteSensor.v[1] * hull.w_a[2] + (-addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.z[2] - addedMassForcesTorques.Z_wdot * addedMassForcesTorques.absoluteSensor.a[3] - addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[1] - addedMassForcesTorques.Y_rdot * hull.w_a[3] * hull.w_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1668};
  data->localData[0]->realVars[1146] /* addedMassForcesTorques.force.force[3] variable */ = (data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */)) * (data->localData[0]->realVars[1094] /* addedMassForcesTorques.absoluteSensor.z[2] variable */) - ((data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * (data->localData[0]->realVars[666] /* addedMassForcesTorques.absoluteSensor.a[3] variable */)) - ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */))) - ((data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 1669
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque[2] = addedMassForcesTorques.Y_rdot * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[1] + (addedMassForcesTorques.N_rdot - addedMassForcesTorques.K_pdot) * hull.w_a[3] * hull.w_a[1] + (addedMassForcesTorques.Z_wdot - addedMassForcesTorques.X_udot) * addedMassForcesTorques.absoluteSensor.v[3] * addedMassForcesTorques.absoluteSensor.v[1] + addedMassForcesTorques.Z_qdot * (addedMassForcesTorques.absoluteSensor.v[1] * hull.w_a[2] - addedMassForcesTorques.absoluteSensor.a[3]) - addedMassForcesTorques.M_qdot * addedMassForcesTorques.absoluteSensor.z[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1669};
  data->localData[0]->realVars[1227] /* addedMassForcesTorques.torque.torque[2] variable */ = (data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)) + (data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */ - data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */) * ((data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)) + (data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */ - data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */)) + (data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) - data->localData[0]->realVars[666] /* addedMassForcesTorques.absoluteSensor.a[3] variable */) - ((data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */) * (data->localData[0]->realVars[1094] /* addedMassForcesTorques.absoluteSensor.z[2] variable */));
  TRACE_POP
}
/*
equation index: 1670
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.force[2] = addedMassForcesTorques.Z_qdot * hull.w_a[1] * hull.w_a[2] + addedMassForcesTorques.Z_wdot * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[1] + (-addedMassForcesTorques.Y_rdot) * addedMassForcesTorques.absoluteSensor.z[3] - addedMassForcesTorques.Y_vdot * addedMassForcesTorques.absoluteSensor.a[2] - addedMassForcesTorques.X_udot * addedMassForcesTorques.absoluteSensor.v[1] * hull.w_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1670};
  data->localData[0]->realVars[1145] /* addedMassForcesTorques.force.force[2] variable */ = (data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + (data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)) + ((-data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */)) * (data->localData[0]->realVars[1095] /* addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */) * (data->localData[0]->realVars[665] /* addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1671
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque[3] = (addedMassForcesTorques.K_pdot - addedMassForcesTorques.M_qdot) * hull.w_a[1] * hull.w_a[2] + (-addedMassForcesTorques.N_rdot) * addedMassForcesTorques.absoluteSensor.z[3] - addedMassForcesTorques.Y_rdot * addedMassForcesTorques.absoluteSensor.a[2] - addedMassForcesTorques.absoluteSensor.v[1] * ((addedMassForcesTorques.Y_vdot - addedMassForcesTorques.X_udot) * addedMassForcesTorques.absoluteSensor.v[2] + addedMassForcesTorques.Y_rdot * hull.w_a[3]) - addedMassForcesTorques.Z_qdot * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1671};
  data->localData[0]->realVars[1228] /* addedMassForcesTorques.torque.torque[3] variable */ = (data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */ - data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */) * ((data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */)) * (data->localData[0]->realVars[1095] /* addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[665] /* addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */) * ((data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[301] /* addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) + (data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */))) - ((data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 1672
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.torque[1] = ((-addedMassForcesTorques.Y_rdot) - addedMassForcesTorques.Z_qdot) * addedMassForcesTorques.absoluteSensor.v[2] * hull.w_a[2] + (addedMassForcesTorques.M_qdot - addedMassForcesTorques.N_rdot) * hull.w_a[2] * hull.w_a[3] + (addedMassForcesTorques.Z_qdot + addedMassForcesTorques.Y_rdot) * addedMassForcesTorques.absoluteSensor.v[3] * hull.w_a[3] + (addedMassForcesTorques.Y_vdot - addedMassForcesTorques.Z_wdot) * addedMassForcesTorques.absoluteSensor.v[2] * addedMassForcesTorques.absoluteSensor.v[3] - addedMassForcesTorques.K_pdot * addedMassForcesTorques.absoluteSensor.z[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1672};
  data->localData[0]->realVars[1226] /* addedMassForcesTorques.torque.torque[1] variable */ = ((-data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) - data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) + (data->simulationInfo->realParameter[287] /* addedMassForcesTorques.M_qdot PARAM */ - data->simulationInfo->realParameter[294] /* addedMassForcesTorques.N_rdot PARAM */) * ((data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[311] /* addedMassForcesTorques.Z_qdot PARAM */ + data->simulationInfo->realParameter[306] /* addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) + (data->simulationInfo->realParameter[308] /* addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[315] /* addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */)) - ((data->simulationInfo->realParameter[280] /* addedMassForcesTorques.K_pdot PARAM */) * (data->localData[0]->realVars[1093] /* addedMassForcesTorques.absoluteSensor.z[1] variable */));
  TRACE_POP
}
/*
equation index: 1673
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t[1] = actuators.fixedTranslation_pendulumArm.frame_b.t[1] + (-0.014) * actuators.prismatic.frame_b.f[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1673};
  data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */ = data->localData[0]->realVars[523] /* actuators.fixedTranslation_pendulumArm.frame_b.t[1] variable */ + (-0.014) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */);
  TRACE_POP
}
/*
equation index: 1674
type: SIMPLE_ASSIGN
actuators.prismatic.frame_b.t[2] = actuators.fixedTranslation_pendulumArm.frame_b.t[2] + (-0.014) * actuators.prismatic.f
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1674};
  data->localData[0]->realVars[569] /* actuators.prismatic.frame_b.t[2] variable */ = data->localData[0]->realVars[524] /* actuators.fixedTranslation_pendulumArm.frame_b.t[2] variable */ + (-0.014) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */);
  TRACE_POP
}
/*
equation index: 1675
type: SIMPLE_ASSIGN
actuators.revolute.frame_b.t[2] = actuators.prismatic.frame_b.t[2] - actuators.prismatic.frame_b.f[3] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1675};
  data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */ = data->localData[0]->realVars[569] /* actuators.prismatic.frame_b.t[2] variable */ - ((data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 1676
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t[1] = (-actuators.revolute.R_rel.T[2,1]) * actuators.revolute.frame_b.t[2] - actuators.revolute.R_rel.T[3,1] * actuators.revolute.frame_b.t[3] - actuators.revolute.R_rel.T[1,1] * actuators.prismatic.frame_b.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1676};
  data->localData[0]->realVars[598] /* actuators.revolute.frame_a.t[1] variable */ = ((-data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */) - ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
/*
equation index: 1677
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t[2] = (-actuators.revolute.R_rel.T[2,2]) * actuators.revolute.frame_b.t[2] - actuators.revolute.R_rel.T[3,2] * actuators.revolute.frame_b.t[3] - actuators.revolute.R_rel.T[1,2] * actuators.prismatic.frame_b.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1677};
  data->localData[0]->realVars[599] /* actuators.revolute.frame_a.t[2] variable */ = ((-data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */) - ((data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
/*
equation index: 1678
type: SIMPLE_ASSIGN
actuators.revolute.frame_a.t[3] = (-actuators.revolute.R_rel.T[2,3]) * actuators.revolute.frame_b.t[2] - actuators.revolute.R_rel.T[3,3] * actuators.revolute.frame_b.t[3] - actuators.revolute.R_rel.T[1,3] * actuators.prismatic.frame_b.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1678};
  data->localData[0]->realVars[600] /* actuators.revolute.frame_a.t[3] variable */ = ((-data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */) - ((data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
/*
equation index: 1679
type: SIMPLE_ASSIGN
actuators.frame_a.t[2] = actuators.bodyVariableMass.frame_a.t[2] + actuators.revolute.frame_a.t[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1679};
  data->localData[0]->realVars[542] /* actuators.frame_a.t[2] variable */ = data->localData[0]->realVars[153] /* actuators.bodyVariableMass.frame_a.t[2] variable */ + data->localData[0]->realVars[599] /* actuators.revolute.frame_a.t[2] variable */;
  TRACE_POP
}
/*
equation index: 1680
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t[2] = hydrodynamicForcesTorques.T_hd_b[2] - (actuators.frame_a.t[2] + hull.frame_a.t[2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1680};
  data->localData[0]->realVars[1172] /* addedMassForcesTorques.frame_b.t[2] variable */ = data->localData[0]->realVars[1373] /* hydrodynamicForcesTorques.T_hd_b[2] variable */ - (data->localData[0]->realVars[542] /* actuators.frame_a.t[2] variable */ + data->localData[0]->realVars[1337] /* hull.frame_a.t[2] variable */);
  TRACE_POP
}
/*
equation index: 1681
type: SIMPLE_ASSIGN
actuators.frame_a.t[3] = actuators.bodyVariableMass.frame_a.t[3] + actuators.revolute.frame_a.t[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1681};
  data->localData[0]->realVars[543] /* actuators.frame_a.t[3] variable */ = data->localData[0]->realVars[154] /* actuators.bodyVariableMass.frame_a.t[3] variable */ + data->localData[0]->realVars[600] /* actuators.revolute.frame_a.t[3] variable */;
  TRACE_POP
}
/*
equation index: 1682
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t[3] = hydrodynamicForcesTorques.T_hd_b[3] - (actuators.frame_a.t[3] + hull.frame_a.t[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1682};
  data->localData[0]->realVars[1173] /* addedMassForcesTorques.frame_b.t[3] variable */ = data->localData[0]->realVars[1374] /* hydrodynamicForcesTorques.T_hd_b[3] variable */ - (data->localData[0]->realVars[543] /* actuators.frame_a.t[3] variable */ + data->localData[0]->realVars[1338] /* hull.frame_a.t[3] variable */);
  TRACE_POP
}
/*
equation index: 1683
type: SIMPLE_ASSIGN
actuators.frame_a.t[1] = actuators.bodyVariableMass.frame_a.t[1] + actuators.revolute.frame_a.t[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1683};
  data->localData[0]->realVars[541] /* actuators.frame_a.t[1] variable */ = data->localData[0]->realVars[152] /* actuators.bodyVariableMass.frame_a.t[1] variable */ + data->localData[0]->realVars[598] /* actuators.revolute.frame_a.t[1] variable */;
  TRACE_POP
}
/*
equation index: 1684
type: SIMPLE_ASSIGN
actuators.frame_a.f[3] = actuators.bodyVariableMass.frame_a.f[3] + actuators.revolute.frame_a.f[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1684};
  data->localData[0]->realVars[540] /* actuators.frame_a.f[3] variable */ = data->localData[0]->realVars[148] /* actuators.bodyVariableMass.frame_a.f[3] variable */ + data->localData[0]->realVars[597] /* actuators.revolute.frame_a.f[3] variable */;
  TRACE_POP
}
/*
equation index: 1685
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t[1] = hydrodynamicForcesTorques.T_hd_b[1] - (actuators.frame_a.t[1] + hull.frame_a.t[1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1685};
  data->localData[0]->realVars[1171] /* addedMassForcesTorques.frame_b.t[1] variable */ = data->localData[0]->realVars[1372] /* hydrodynamicForcesTorques.T_hd_b[1] variable */ - (data->localData[0]->realVars[541] /* actuators.frame_a.t[1] variable */ + data->localData[0]->realVars[1336] /* hull.frame_a.t[1] variable */);
  TRACE_POP
}
/*
equation index: 1686
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f[3] = hydrodynamicForcesTorques.F_hd_b[3] - (actuators.frame_a.f[3] + buoyancyForce.frame_b.f[3] + hull.frame_a.f[3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1686};
  data->localData[0]->realVars[1170] /* addedMassForcesTorques.frame_b.f[3] variable */ = data->localData[0]->realVars[1359] /* hydrodynamicForcesTorques.F_hd_b[3] variable */ - (data->localData[0]->realVars[540] /* actuators.frame_a.f[3] variable */ + data->localData[0]->realVars[1315] /* buoyancyForce.frame_b.f[3] variable */ + data->localData[0]->realVars[1335] /* hull.frame_a.f[3] variable */);
  TRACE_POP
}
/*
equation index: 1687
type: SIMPLE_ASSIGN
actuators.frame_a.f[2] = actuators.bodyVariableMass.frame_a.f[2] + actuators.revolute.frame_a.f[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1687};
  data->localData[0]->realVars[539] /* actuators.frame_a.f[2] variable */ = data->localData[0]->realVars[147] /* actuators.bodyVariableMass.frame_a.f[2] variable */ + data->localData[0]->realVars[596] /* actuators.revolute.frame_a.f[2] variable */;
  TRACE_POP
}
/*
equation index: 1688
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f[2] = hydrodynamicForcesTorques.F_hd_b[2] - (actuators.frame_a.f[2] + buoyancyForce.frame_b.f[2] + hull.frame_a.f[2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1688};
  data->localData[0]->realVars[1169] /* addedMassForcesTorques.frame_b.f[2] variable */ = data->localData[0]->realVars[1358] /* hydrodynamicForcesTorques.F_hd_b[2] variable */ - (data->localData[0]->realVars[539] /* actuators.frame_a.f[2] variable */ + data->localData[0]->realVars[1314] /* buoyancyForce.frame_b.f[2] variable */ + data->localData[0]->realVars[1334] /* hull.frame_a.f[2] variable */);
  TRACE_POP
}

void residualFunc1764(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1764};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[1351] /* hull.z_a[1] variable */ = xloc[0];
  data->localData[0]->realVars[1353] /* hull.z_a[3] variable */ = xloc[1];
  data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */ = xloc[2];
  data->localData[0]->realVars[1323] /* hull.a_0[3] variable */ = xloc[3];
  data->localData[0]->realVars[1321] /* hull.a_0[1] variable */ = xloc[4];
  data->localData[0]->realVars[1322] /* hull.a_0[2] variable */ = xloc[5];
  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1619(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1620(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1621(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1622(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1623(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1624(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1625(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1626(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1627(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1628(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1629(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1630(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1631(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1632(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1633(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1634(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1635(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1636(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1637(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1638(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1639(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1640(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1641(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1642(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1643(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1644(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1645(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1646(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1647(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1648(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1649(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1650(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1651(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1652(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1653(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1654(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1655(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1656(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1657(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1658(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1659(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1660(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1661(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1662(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1663(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1664(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1665(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1666(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1667(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1668(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1669(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1670(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1671(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1672(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1673(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1674(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1675(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1676(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1677(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1678(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1679(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1680(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1681(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1682(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1683(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1684(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1685(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1686(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1687(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1688(data, threadData);
  res[0] = (-data->localData[0]->realVars[1173] /* addedMassForcesTorques.frame_b.t[3] variable */) - data->localData[0]->realVars[1228] /* addedMassForcesTorques.torque.torque[3] variable */;

  res[1] = (-data->localData[0]->realVars[1145] /* addedMassForcesTorques.force.force[2] variable */) - data->localData[0]->realVars[1169] /* addedMassForcesTorques.frame_b.f[2] variable */;

  res[2] = (-data->localData[0]->realVars[1172] /* addedMassForcesTorques.frame_b.t[2] variable */) - data->localData[0]->realVars[1227] /* addedMassForcesTorques.torque.torque[2] variable */;

  res[3] = (-data->localData[0]->realVars[1146] /* addedMassForcesTorques.force.force[3] variable */) - data->localData[0]->realVars[1170] /* addedMassForcesTorques.frame_b.f[3] variable */;

  res[4] = (-data->localData[0]->realVars[1171] /* addedMassForcesTorques.frame_b.t[1] variable */) - data->localData[0]->realVars[1226] /* addedMassForcesTorques.torque.torque[1] variable */;

  res[5] = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[565] /* actuators.prismatic.f variable */) - data->localData[0]->realVars[595] /* actuators.revolute.frame_a.f[1] variable */ - ((data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[566] /* actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[567] /* actuators.prismatic.frame_b.f[3] variable */));
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1764(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for hull.z_a[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1351].attribute /* hull.z_a[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1351].attribute /* hull.z_a[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1351].attribute /* hull.z_a[1] */.max;
  /* static ls data for hull.z_a[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1353].attribute /* hull.z_a[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1353].attribute /* hull.z_a[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1353].attribute /* hull.z_a[3] */.max;
  /* static ls data for hull.frame_a.f[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1333].attribute /* hull.frame_a.f[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1333].attribute /* hull.frame_a.f[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1333].attribute /* hull.frame_a.f[1] */.max;
  /* static ls data for hull.a_0[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1323].attribute /* hull.a_0[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1323].attribute /* hull.a_0[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1323].attribute /* hull.a_0[3] */.max;
  /* static ls data for hull.a_0[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1321].attribute /* hull.a_0[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1321].attribute /* hull.a_0[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1321].attribute /* hull.a_0[1] */.max;
  /* static ls data for hull.a_0[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1322].attribute /* hull.a_0[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1322].attribute /* hull.a_0[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1322].attribute /* hull.a_0[2] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA1369(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,1369};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setAElement(0, 0, (2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 0, linearSystemData, threadData);
  linearSystemData->setAElement(0, 1, (2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 1, linearSystemData, threadData);
  linearSystemData->setAElement(0, 2, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 2, linearSystemData, threadData);
  linearSystemData->setAElement(0, 3, (-2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 3, linearSystemData, threadData);
  linearSystemData->setAElement(1, 0, (-2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 4, linearSystemData, threadData);
  linearSystemData->setAElement(1, 1, (2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 5, linearSystemData, threadData);
  linearSystemData->setAElement(1, 2, (2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 6, linearSystemData, threadData);
  linearSystemData->setAElement(1, 3, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 7, linearSystemData, threadData);
  linearSystemData->setAElement(2, 0, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 8, linearSystemData, threadData);
  linearSystemData->setAElement(2, 1, (2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 9, linearSystemData, threadData);
  linearSystemData->setAElement(2, 2, (-2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 10, linearSystemData, threadData);
  linearSystemData->setAElement(2, 3, (2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 11, linearSystemData, threadData);
  linearSystemData->setAElement(3, 0, (-2.0) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 12, linearSystemData, threadData);
  linearSystemData->setAElement(3, 1, (-2.0) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 13, linearSystemData, threadData);
  linearSystemData->setAElement(3, 2, (-2.0) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 14, linearSystemData, threadData);
  linearSystemData->setAElement(3, 3, (-2.0) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 15, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb1369(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,1369};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setBElement(0, (-data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */), linearSystemData, threadData);
  linearSystemData->setBElement(1, (-data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */), linearSystemData, threadData);
  linearSystemData->setBElement(2, (-data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */), linearSystemData, threadData);
  linearSystemData->setBElement(3, 0.0, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData1369(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(actuators.bodyVariableMass.Q[3]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[40].attribute /* der(actuators.bodyVariableMass.Q[3]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[40].attribute /* der(actuators.bodyVariableMass.Q[3]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[40].attribute /* der(actuators.bodyVariableMass.Q[3]) */.max;
  /* static ls data for der(actuators.bodyVariableMass.Q[4]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[41].attribute /* der(actuators.bodyVariableMass.Q[4]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[41].attribute /* der(actuators.bodyVariableMass.Q[4]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[41].attribute /* der(actuators.bodyVariableMass.Q[4]) */.max;
  /* static ls data for der(actuators.bodyVariableMass.Q[1]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[38].attribute /* der(actuators.bodyVariableMass.Q[1]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[38].attribute /* der(actuators.bodyVariableMass.Q[1]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[38].attribute /* der(actuators.bodyVariableMass.Q[1]) */.max;
  /* static ls data for der(actuators.bodyVariableMass.Q[2]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[39].attribute /* der(actuators.bodyVariableMass.Q[2]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[39].attribute /* der(actuators.bodyVariableMass.Q[2]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[39].attribute /* der(actuators.bodyVariableMass.Q[2]) */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[5].equationIndex = 4915;
  linearSystemData[5].size = 12;
  linearSystemData[5].nnz = 0;
  linearSystemData[5].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[5].residualFunc = residualFunc4915;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].analyticalJacobianColumn = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacLSJac265_column;
  linearSystemData[5].initialAnalyticalJacobian = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianLSJac265;
  linearSystemData[5].jacobianIndex = 5 /*jacInx*/;
  linearSystemData[5].setA = NULL;  //setLinearMatrixA4915;
  linearSystemData[5].setb = NULL;  //setLinearVectorb4915;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData4915;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 4581;
  linearSystemData[4].size = 4;
  linearSystemData[4].nnz = 16;
  linearSystemData[4].method = 0;   /* No symbolic Jacobian available */
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA4581;
  linearSystemData[4].setb = setLinearVectorb4581;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData4581;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[3].equationIndex = 3987;
  linearSystemData[3].size = 6;
  linearSystemData[3].nnz = 0;
  linearSystemData[3].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[3].residualFunc = residualFunc3987;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].analyticalJacobianColumn = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacLSJac263_column;
  linearSystemData[3].initialAnalyticalJacobian = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianLSJac263;
  linearSystemData[3].jacobianIndex = 3 /*jacInx*/;
  linearSystemData[3].setA = NULL;  //setLinearMatrixA3987;
  linearSystemData[3].setb = NULL;  //setLinearVectorb3987;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData3987;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 3592;
  linearSystemData[2].size = 4;
  linearSystemData[2].nnz = 16;
  linearSystemData[2].method = 0;   /* No symbolic Jacobian available */
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA3592;
  linearSystemData[2].setb = setLinearVectorb3592;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData3592;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 1764;
  linearSystemData[1].size = 6;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc1764;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacLSJac261_column;
  linearSystemData[1].initialAnalyticalJacobian = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianLSJac261;
  linearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA1764;
  linearSystemData[1].setb = NULL;  //setLinearVectorb1764;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData1764;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 1369;
  linearSystemData[0].size = 4;
  linearSystemData[0].nnz = 16;
  linearSystemData[0].method = 0;   /* No symbolic Jacobian available */
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA1369;
  linearSystemData[0].setb = setLinearVectorb1369;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData1369;
}

#if defined(__cplusplus)
}
#endif

