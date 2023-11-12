/* Linear Systems */
#include "TestGlider_model.h"
#include "TestGlider_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 4788
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] = ((-genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) - genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[2] + (genericGlider_mass_explicit.addedMassForcesTorques.M_qdot - genericGlider_mass_explicit.addedMassForcesTorques.N_rdot) * genericGlider_mass_explicit.hull.w_a[2] * genericGlider_mass_explicit.hull.w_a[3] + (genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot + genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[3] + (genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot - genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] - genericGlider_mass_explicit.addedMassForcesTorques.K_pdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1]
*/
void TestGlider_eqFunction_4788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4788};
  data->localData[0]->realVars[1238] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] variable */ = ((-data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) - data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + (data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */ - data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */ + data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */)) - ((data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */) * (data->localData[0]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */));
  TRACE_POP
}
/*
equation index: 4789
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.t[1] = genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] - (genericGlider_mass_explicit.hull.frame_a.t[1] - genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[1])
*/
void TestGlider_eqFunction_4789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4789};
  data->localData[0]->realVars[553] /* genericGlider_mass_explicit.actuators.frame_a.t[1] variable */ = data->localData[0]->realVars[1238] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] variable */ - (data->localData[0]->realVars[1348] /* genericGlider_mass_explicit.hull.frame_a.t[1] variable */ - data->localData[0]->realVars[1384] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[1] variable */);
  TRACE_POP
}
/*
equation index: 4790
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1] = genericGlider_mass_explicit.actuators.frame_a.t[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1]
*/
void TestGlider_eqFunction_4790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4790};
  data->localData[0]->realVars[514] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1] variable */ = data->localData[0]->realVars[553] /* genericGlider_mass_explicit.actuators.frame_a.t[1] variable */ - data->localData[0]->realVars[164] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] variable */;
  TRACE_POP
}
/*
equation index: 4791
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] = genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1] + 0.04 * genericGlider_mass_explicit.actuators.revolute.frame_a.f[2]
*/
void TestGlider_eqFunction_4791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4791};
  data->localData[0]->realVars[610] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] variable */ = data->localData[0]->realVars[514] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1] variable */ + (0.04) * (data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */);
  TRACE_POP
}
/*
equation index: 4792
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f[2] = genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] + genericGlider_mass_explicit.actuators.revolute.frame_a.f[2]
*/
void TestGlider_eqFunction_4792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4792};
  data->localData[0]->realVars[551] /* genericGlider_mass_explicit.actuators.frame_a.f[2] variable */ = data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */ + data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */;
  TRACE_POP
}
/*
equation index: 4793
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] = genericGlider_mass_explicit.buoyancyForce.frame_b.f[2] + genericGlider_mass_explicit.actuators.frame_a.f[2] + genericGlider_mass_explicit.hull.frame_a.f[2] - genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[2]
*/
void TestGlider_eqFunction_4793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4793};
  data->localData[0]->realVars[1157] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] variable */ = data->localData[0]->realVars[1326] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[2] variable */ + data->localData[0]->realVars[551] /* genericGlider_mass_explicit.actuators.frame_a.f[2] variable */ + data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */ - data->localData[0]->realVars[1370] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[2] variable */;
  TRACE_POP
}
/*
equation index: 4794
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] = genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.hull.w_a[3] ^ 2.0 + genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[3] + (-genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[2] - genericGlider_mass_explicit.addedMassForcesTorques.X_udot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] - genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * genericGlider_mass_explicit.hull.w_a[2] ^ 2.0
*/
void TestGlider_eqFunction_4794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4794};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */;
  tmp1 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[1156] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] variable */ = (data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((tmp0 * tmp0)) + (data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + ((-data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */)) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) - ((data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[676] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] variable */)) - ((data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 4795
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f[1] = genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] - (genericGlider_mass_explicit.buoyancyForce.frame_b.f[1] + genericGlider_mass_explicit.hull.frame_a.f[1] - genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[1])
*/
void TestGlider_eqFunction_4795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4795};
  data->localData[0]->realVars[550] /* genericGlider_mass_explicit.actuators.frame_a.f[1] variable */ = data->localData[0]->realVars[1156] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] variable */ - (data->localData[0]->realVars[1325] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[1] variable */ + data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */ - data->localData[0]->realVars[1369] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[1] variable */);
  TRACE_POP
}
/*
equation index: 4796
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] = genericGlider_mass_explicit.actuators.frame_a.f[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1]
*/
void TestGlider_eqFunction_4796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4796};
  data->localData[0]->realVars[607] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] variable */ = data->localData[0]->realVars[550] /* genericGlider_mass_explicit.actuators.frame_a.f[1] variable */ - data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */;
  TRACE_POP
}
/*
equation index: 4797
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] = genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] - (-0.04) * genericGlider_mass_explicit.actuators.revolute.frame_a.f[1]
*/
void TestGlider_eqFunction_4797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4797};
  data->localData[0]->realVars[515] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] variable */ = data->localData[0]->realVars[611] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] variable */ - ((-0.04) * (data->localData[0]->realVars[607] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] variable */));
  TRACE_POP
}
/*
equation index: 4798
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[2] = genericGlider_mass_explicit.actuators.frame_a.t[2] - genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2]
*/
void TestGlider_eqFunction_4798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4798};
  data->localData[0]->realVars[165] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[2] variable */ = data->localData[0]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */ - data->localData[0]->realVars[515] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] variable */;
  TRACE_POP
}
/*
equation index: 4799
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] = genericGlider_mass_explicit.actuators.frame_a.t[2] + genericGlider_mass_explicit.hull.frame_a.t[2] - genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[2]
*/
void TestGlider_eqFunction_4799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4799};
  data->localData[0]->realVars[1239] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] variable */ = data->localData[0]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */ + data->localData[0]->realVars[1349] /* genericGlider_mass_explicit.hull.frame_a.t[2] variable */ - data->localData[0]->realVars[1385] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[2] variable */;
  TRACE_POP
}
/*
equation index: 4800
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[3] = genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.hull.w_a[1] * (genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] * genericGlider_mass_explicit.hull.w_a[3]) + genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2]) * genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] - genericGlider_mass_explicit.hull.w_a[2] * (genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_4800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4800};
  data->localData[0]->realVars[166] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[3] variable */ = (data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */) + ((-data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */)) * (data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4801
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t[3] = genericGlider_mass_explicit.hull.I[3,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.I[3,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.I[3,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.hull.w_a[1] * (genericGlider_mass_explicit.hull.I[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.hull.I[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.hull.I[2,3] * genericGlider_mass_explicit.hull.w_a[3]) + genericGlider_mass_explicit.hull.r_CM[1] * genericGlider_mass_explicit.hull.frame_a.f[2] - genericGlider_mass_explicit.hull.r_CM[2] * genericGlider_mass_explicit.hull.frame_a.f[1] - genericGlider_mass_explicit.hull.w_a[2] * (genericGlider_mass_explicit.hull.I[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.hull.I[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.hull.I[1,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_4801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4801};
  data->localData[0]->realVars[1350] /* genericGlider_mass_explicit.hull.frame_a.t[3] variable */ = (data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */) - ((data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */)) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4802
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.z_a[3]
*/
void TestGlider_eqFunction_4802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4802};
  data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 4803
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.z_a[3]
*/
void TestGlider_eqFunction_4803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4803};
  data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 4804
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.z_a[3]
*/
void TestGlider_eqFunction_4804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4804};
  data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 4805
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void TestGlider_eqFunction_4805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4805};
  data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */);
  TRACE_POP
}
/*
equation index: 4806
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void TestGlider_eqFunction_4806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4806};
  data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */);
  TRACE_POP
}
/*
equation index: 4807
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a[3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.w_a[3]) + $DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_4807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4807};
  data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */ = (data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[594] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + data->localData[0]->realVars[74] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[3]) DUMMY_DER */ - ((data->localData[0]->realVars[593] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4808
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a[2] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.w_a[3]) + $DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_4808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4808};
  data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */ = (data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[593] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + data->localData[0]->realVars[73] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[2]) DUMMY_DER */ - ((data->localData[0]->realVars[595] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4809
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a[1] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.w_a[3]) + $DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] - genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_4809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4809};
  data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[595] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + data->localData[0]->realVars[72] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[1]) DUMMY_DER */ - ((data->localData[0]->realVars[594] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 4810
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1] = genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * (0.04 * genericGlider_mass_explicit.hull.z_a[2] + (-0.04) * (-genericGlider_mass_explicit.hull.w_a[3]) * genericGlider_mass_explicit.hull.w_a[1]) + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * ((-0.04) * genericGlider_mass_explicit.hull.z_a[1] + 0.04 * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[2]) + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * (genericGlider_mass_explicit.hull.w_a[1] ^ 2.0 + genericGlider_mass_explicit.hull.w_a[2] ^ 2.0)
*/
void TestGlider_eqFunction_4810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4810};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */;
  tmp1 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[32] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */ + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * ((0.04) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (-0.04) * (((-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * ((-0.04) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (0.04) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */))) + (-0.04) * ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 4811
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.a_0[1] = $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] * (genericGlider_mass_explicit.actuators.position_slidingMass.a + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.position_slidingMass.s * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] ^ 2.0) + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * (2.0 * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s) + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * (2.0 * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s)
*/
void TestGlider_eqFunction_4811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4811};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */ = data->localData[0]->realVars[32] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ + (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[559] /* genericGlider_mass_explicit.actuators.position_slidingMass.a variable */ + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((2.0) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)))) + (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((2.0) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 4812
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3] = genericGlider_mass_explicit.hull.a_0[3] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * (0.04 * genericGlider_mass_explicit.hull.z_a[2] + (-0.04) * (-genericGlider_mass_explicit.hull.w_a[3]) * genericGlider_mass_explicit.hull.w_a[1]) + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * ((-0.04) * genericGlider_mass_explicit.hull.z_a[1] + 0.04 * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[2]) + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * (genericGlider_mass_explicit.hull.w_a[1] ^ 2.0 + genericGlider_mass_explicit.hull.w_a[2] ^ 2.0)
*/
void TestGlider_eqFunction_4812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4812};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */;
  tmp1 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[34] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */ + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * ((0.04) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (-0.04) * (((-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * ((-0.04) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (0.04) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */))) + (-0.04) * ((data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 4813
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.a_0[3] = $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * (genericGlider_mass_explicit.actuators.position_slidingMass.a + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.position_slidingMass.s * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] ^ 2.0) + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * (2.0 * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s) + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * (2.0 * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s)
*/
void TestGlider_eqFunction_4813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4813};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */ = data->localData[0]->realVars[34] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */ + (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[559] /* genericGlider_mass_explicit.actuators.position_slidingMass.a variable */ + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((2.0) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)))) + (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((2.0) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 4814
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.f[3] = (genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * (-9.81 + genericGlider_mass_explicit.hull.a_0[3]) + genericGlider_mass_explicit.hull.z_a[1] * genericGlider_mass_explicit.hull.r_CM[2] + genericGlider_mass_explicit.hull.w_a[1] * (genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.r_CM[1] - genericGlider_mass_explicit.hull.w_a[1] * genericGlider_mass_explicit.hull.r_CM[3]) + genericGlider_mass_explicit.hull.w_a[2] * (genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.r_CM[2] - genericGlider_mass_explicit.hull.w_a[2] * genericGlider_mass_explicit.hull.r_CM[3]) - genericGlider_mass_explicit.hull.z_a[2] * genericGlider_mass_explicit.hull.r_CM[1]) * genericGlider_mass_explicit.hull.m
*/
void TestGlider_eqFunction_4814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4814};
  data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */ = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */);
  TRACE_POP
}
/*
equation index: 4815
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] = (genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * (-9.81 + genericGlider_mass_explicit.hull.a_0[3]) + genericGlider_mass_explicit.hull.z_a[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] + genericGlider_mass_explicit.hull.w_a[1] * (genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] - genericGlider_mass_explicit.hull.w_a[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3]) + genericGlider_mass_explicit.hull.w_a[2] * (genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] - genericGlider_mass_explicit.hull.w_a[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3]) - genericGlider_mass_explicit.hull.z_a[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1]) * genericGlider_mass_explicit.actuators.bodyVariableMass.m
*/
void TestGlider_eqFunction_4815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4815};
  data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */ = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */);
  TRACE_POP
}
/*
equation index: 4816
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_4816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4816};
  data->localData[0]->realVars[678] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] variable */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 4817
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_4817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4817};
  data->localData[0]->realVars[677] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] variable */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 4818
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2] = genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * (0.04 * genericGlider_mass_explicit.hull.z_a[2] + (-0.04) * (-genericGlider_mass_explicit.hull.w_a[3]) * genericGlider_mass_explicit.hull.w_a[1]) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * ((-0.04) * genericGlider_mass_explicit.hull.z_a[1] + 0.04 * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[2]) + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (genericGlider_mass_explicit.hull.w_a[1] ^ 2.0 + genericGlider_mass_explicit.hull.w_a[2] ^ 2.0)
*/
void TestGlider_eqFunction_4818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4818};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */;
  tmp1 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[33] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */ + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * ((0.04) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (-0.04) * (((-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * ((-0.04) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (0.04) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */))) + (-0.04) * ((data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 4819
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.a_0[2] = $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] * (genericGlider_mass_explicit.actuators.position_slidingMass.a + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.position_slidingMass.s * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] ^ 2.0) + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * (2.0 * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s) + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * (2.0 * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s)
*/
void TestGlider_eqFunction_4819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4819};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */ = data->localData[0]->realVars[33] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[559] /* genericGlider_mass_explicit.actuators.position_slidingMass.a variable */ + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((2.0) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)))) + (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((2.0) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)));
  TRACE_POP
}
/*
equation index: 4820
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] = (-(genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * (-9.81 + genericGlider_mass_explicit.actuators.body_rolling.a_0[3]) + genericGlider_mass_explicit.actuators.body_rolling.z_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3]) + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] - genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3]) - genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1])) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_4820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4820};
  data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */ = ((-((data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * (data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */))) + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */))))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 4821
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.f = (genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * (-9.81 + genericGlider_mass_explicit.actuators.body_rolling.a_0[3]) + genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] - genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1]) + genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1]) - genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_4821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4821};
  data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */ = ((data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (-9.81 + data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */))) + (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 4822
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] = -(genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) + genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] * genericGlider_mass_explicit.actuators.prismatic.f + genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]))
*/
void TestGlider_eqFunction_4822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4822};
  data->localData[0]->realVars[581] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] variable */ = (-((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) + (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 4823
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] = (-(genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * (-9.81 + genericGlider_mass_explicit.actuators.body_rolling.a_0[3]) + genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] + genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) - genericGlider_mass_explicit.actuators.body_rolling.z_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3])) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_4823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4823};
  data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */ = ((-((data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * (data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) + (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */))))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 4824
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] = -(genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) + genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] + (-genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]))
*/
void TestGlider_eqFunction_4824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4824};
  data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */ = (-((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */) + ((-data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 4825
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] = -(genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) + (-genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.prismatic.f - genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) - genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2])
*/
void TestGlider_eqFunction_4825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4825};
  data->localData[0]->realVars[582] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] variable */ = (-((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)) + ((-data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */))) - ((data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */))));
  TRACE_POP
}
/*
equation index: 4826
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f[3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.actuators.prismatic.f + (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3]
*/
void TestGlider_eqFunction_4826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4826};
  data->localData[0]->realVars[609] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[3] variable */ = (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) + ((-data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */) - ((data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */));
  TRACE_POP
}
/*
equation index: 4827
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] = (genericGlider_mass_explicit.addedMassForcesTorques.K_pdot - genericGlider_mass_explicit.addedMassForcesTorques.M_qdot) * genericGlider_mass_explicit.hull.w_a[1] * genericGlider_mass_explicit.hull.w_a[2] + (-genericGlider_mass_explicit.addedMassForcesTorques.N_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] * ((genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot - genericGlider_mass_explicit.addedMassForcesTorques.X_udot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] + genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.hull.w_a[3]) - genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[1]
*/
void TestGlider_eqFunction_4827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4827};
  data->localData[0]->realVars[1240] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] variable */ = (data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */ - data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */)) * (data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[677] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) + (data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */))) - ((data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 4828
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] = genericGlider_mass_explicit.addedMassForcesTorques.X_udot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] * genericGlider_mass_explicit.hull.w_a[2] + (-genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] - genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[1] - genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[1]
*/
void TestGlider_eqFunction_4828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4828};
  data->localData[0]->realVars[1158] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] variable */ = (data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */)) * (data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */) - ((data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * (data->localData[0]->realVars[678] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] variable */)) - ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) - ((data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 4829
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] + genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4829};
  data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */ = data->localData[0]->realVars[582] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] variable */ + (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */);
  TRACE_POP
}
/*
equation index: 4830
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] - genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4830};
  data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */ = data->localData[0]->realVars[581] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] variable */ - ((data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 4831
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] = (-genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3]) * genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1]
*/
void TestGlider_eqFunction_4831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4831};
  data->localData[0]->realVars[612] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] variable */ = ((-data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */) - ((data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
/*
equation index: 4832
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.t[3] = genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[3] + genericGlider_mass_explicit.actuators.revolute.frame_a.t[3]
*/
void TestGlider_eqFunction_4832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4832};
  data->localData[0]->realVars[555] /* genericGlider_mass_explicit.actuators.frame_a.t[3] variable */ = data->localData[0]->realVars[166] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[3] variable */ + data->localData[0]->realVars[612] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] variable */;
  TRACE_POP
}
/*
equation index: 4833
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f[3] = genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] + genericGlider_mass_explicit.actuators.revolute.frame_a.f[3]
*/
void TestGlider_eqFunction_4833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4833};
  data->localData[0]->realVars[552] /* genericGlider_mass_explicit.actuators.frame_a.f[3] variable */ = data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */ + data->localData[0]->realVars[609] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[3] variable */;
  TRACE_POP
}

void residualFunc4916(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4916};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */ = xloc[0];
  data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */ = xloc[1];
  data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */ = xloc[2];
  data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */ = xloc[3];
  data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */ = xloc[4];
  data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */ = xloc[5];
  data->localData[0]->realVars[1349] /* genericGlider_mass_explicit.hull.frame_a.t[2] variable */ = xloc[6];
  data->localData[0]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */ = xloc[7];
  data->localData[0]->realVars[611] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] variable */ = xloc[8];
  data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */ = xloc[9];
  data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */ = xloc[10];
  data->localData[0]->realVars[676] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] variable */ = xloc[11];
  data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */ = xloc[12];
  data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */ = xloc[13];
  data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */ = xloc[14];
  data->localData[0]->realVars[164] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] variable */ = xloc[15];
  data->localData[0]->realVars[1348] /* genericGlider_mass_explicit.hull.frame_a.t[1] variable */ = xloc[16];
  data->localData[0]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */ = xloc[17];
  /* local constraints */
  TestGlider_eqFunction_4788(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4789(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4790(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4791(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4792(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4793(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4794(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4795(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4796(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4797(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4798(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4799(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4800(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4801(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4802(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4803(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4804(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4805(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4806(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4807(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4808(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4809(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4810(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4811(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4812(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4813(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4814(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4815(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4816(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4817(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4818(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4819(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4820(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4821(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4822(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4823(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4824(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4825(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4826(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4827(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4828(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4829(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4830(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4831(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4832(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_4833(data, threadData);
  res[0] = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */;

  res[1] = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */;

  res[2] = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */) - data->localData[0]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */;

  res[3] = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */;

  res[4] = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */;

  res[5] = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) - data->localData[0]->realVars[676] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] variable */;

  res[6] = (data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)) + (data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) - data->localData[0]->realVars[1157] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] variable */ - ((data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */)) - ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * (data->localData[0]->realVars[677] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[7] = (data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) - data->localData[0]->realVars[678] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] variable */) + (data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */ - data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */)) + (data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */ - data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)) + (data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)) - data->localData[0]->realVars[1239] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] variable */ - ((data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */) * (data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */));

  res[8] = (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[1348] /* genericGlider_mass_explicit.hull.frame_a.t[1] variable */ - ((data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */)) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[9] = (-data->localData[0]->realVars[1240] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] variable */) - data->localData[0]->realVars[1386] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[3] variable */ + data->localData[0]->realVars[1350] /* genericGlider_mass_explicit.hull.frame_a.t[3] variable */ + data->localData[0]->realVars[555] /* genericGlider_mass_explicit.actuators.frame_a.t[3] variable */;

  res[10] = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - data->localData[0]->realVars[607] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] variable */ - ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */));

  res[11] = ((-data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */) - data->localData[0]->realVars[611] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] variable */ - ((data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */));

  res[12] = ((-data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */) - data->localData[0]->realVars[610] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] variable */ - ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */));

  res[13] = (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[164] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] variable */ - ((data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */)) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[14] = (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[165] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[2] variable */ - ((data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */)) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[15] = (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[1349] /* genericGlider_mass_explicit.hull.frame_a.t[2] variable */ - ((data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */)) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[16] = (-data->localData[0]->realVars[1158] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] variable */) - data->localData[0]->realVars[1371] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[3] variable */ + data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */ + data->localData[0]->realVars[552] /* genericGlider_mass_explicit.actuators.frame_a.f[3] variable */ + data->localData[0]->realVars[1327] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[3] variable */;

  res[17] = (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */ - ((data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */));
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4916(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for genericGlider_mass_explicit.hull.a_0[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1334].attribute /* genericGlider_mass_explicit.hull.a_0[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1334].attribute /* genericGlider_mass_explicit.hull.a_0[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1334].attribute /* genericGlider_mass_explicit.hull.a_0[2] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.a_0[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1335].attribute /* genericGlider_mass_explicit.hull.a_0[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1335].attribute /* genericGlider_mass_explicit.hull.a_0[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1335].attribute /* genericGlider_mass_explicit.hull.a_0[3] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.a_0[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1333].attribute /* genericGlider_mass_explicit.hull.a_0[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1333].attribute /* genericGlider_mass_explicit.hull.a_0[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1333].attribute /* genericGlider_mass_explicit.hull.a_0[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.z_a[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1365].attribute /* genericGlider_mass_explicit.hull.z_a[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1365].attribute /* genericGlider_mass_explicit.hull.z_a[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1365].attribute /* genericGlider_mass_explicit.hull.z_a[3] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.z_a[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.z_a[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.frame_a.t[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1349].attribute /* genericGlider_mass_explicit.hull.frame_a.t[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1349].attribute /* genericGlider_mass_explicit.hull.frame_a.t[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1349].attribute /* genericGlider_mass_explicit.hull.frame_a.t[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.frame_a.t[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[554].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[554].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[554].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[611].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[611].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[611].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[158].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[158].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[158].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.frame_a.f[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1345].attribute /* genericGlider_mass_explicit.hull.frame_a.f[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1345].attribute /* genericGlider_mass_explicit.hull.frame_a.f[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1345].attribute /* genericGlider_mass_explicit.hull.frame_a.f[1] */.max;
  /* static ls data for genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[676].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[676].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[676].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.frame_a.f[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1346].attribute /* genericGlider_mass_explicit.hull.frame_a.f[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1346].attribute /* genericGlider_mass_explicit.hull.frame_a.f[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1346].attribute /* genericGlider_mass_explicit.hull.frame_a.f[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[159].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[159].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[159].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[608].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[608].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[608].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[164].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[164].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[164].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.frame_a.t[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1348].attribute /* genericGlider_mass_explicit.hull.frame_a.t[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1348].attribute /* genericGlider_mass_explicit.hull.frame_a.t[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1348].attribute /* genericGlider_mass_explicit.hull.frame_a.t[1] */.max;
  /* static ls data for genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1105].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1105].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1105].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA4566(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,4566};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setAElement(0, 0, (2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 0, linearSystemData, threadData);
  linearSystemData->setAElement(0, 1, (-2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 1, linearSystemData, threadData);
  linearSystemData->setAElement(0, 2, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 2, linearSystemData, threadData);
  linearSystemData->setAElement(0, 3, (2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 3, linearSystemData, threadData);
  linearSystemData->setAElement(1, 0, (2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 4, linearSystemData, threadData);
  linearSystemData->setAElement(1, 1, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 5, linearSystemData, threadData);
  linearSystemData->setAElement(1, 2, (2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 6, linearSystemData, threadData);
  linearSystemData->setAElement(1, 3, (-2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 7, linearSystemData, threadData);
  linearSystemData->setAElement(2, 0, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 8, linearSystemData, threadData);
  linearSystemData->setAElement(2, 1, (-2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 9, linearSystemData, threadData);
  linearSystemData->setAElement(2, 2, (-2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 10, linearSystemData, threadData);
  linearSystemData->setAElement(2, 3, (-2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 11, linearSystemData, threadData);
  linearSystemData->setAElement(3, 0, (2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 12, linearSystemData, threadData);
  linearSystemData->setAElement(3, 1, (2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 13, linearSystemData, threadData);
  linearSystemData->setAElement(3, 2, (-2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 14, linearSystemData, threadData);
  linearSystemData->setAElement(3, 3, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 15, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb4566(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,4566};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setBElement(0, (-data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */), linearSystemData, threadData);
  linearSystemData->setBElement(1, (-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */), linearSystemData, threadData);
  linearSystemData->setBElement(2, 0.0, linearSystemData, threadData);
  linearSystemData->setBElement(3, (-data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */), linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData4566(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[41].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[41].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[41].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */.max;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[40].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[40].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[40].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */.max;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[39].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[39].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[39].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */.max;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[38].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[38].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[38].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */.max;
}


/*
equation index: 3864
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] = genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_3864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3864};
  data->localData[0]->realVars[157] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] variable */ = data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 3865
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] = genericGlider_mass_explicit.hull.a_0[2]
*/
void TestGlider_eqFunction_3865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3865};
  data->localData[0]->realVars[156] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] variable */ = data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 3866
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_3866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3866};
  data->localData[0]->realVars[676] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 3867
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_3867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3867};
  data->localData[0]->realVars[677] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] variable */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 3868
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_3868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3868};
  data->localData[0]->realVars[678] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] variable */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 3869
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] = genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.hull.w_a[3] ^ 2.0 + genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[3] + (-genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[2] - genericGlider_mass_explicit.addedMassForcesTorques.X_udot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] - genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * genericGlider_mass_explicit.hull.w_a[2] ^ 2.0
*/
void TestGlider_eqFunction_3869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3869};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */;
  tmp1 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[1156] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] variable */ = (data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((tmp0 * tmp0)) + (data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + ((-data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */)) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) - ((data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[676] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] variable */)) - ((data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 3870
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[1] = -genericGlider_mass_explicit.addedMassForcesTorques.force.force[1]
*/
void TestGlider_eqFunction_3870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3870};
  data->localData[0]->realVars[1180] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[1] variable */ = (-data->localData[0]->realVars[1156] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] variable */);
  TRACE_POP
}
/*
equation index: 3871
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] = genericGlider_mass_explicit.hull.a_0[1]
*/
void TestGlider_eqFunction_3871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3871};
  data->localData[0]->realVars[155] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] variable */ = data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 3872
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] = genericGlider_mass_explicit.actuators.body_rolling.a_0[1]
*/
void TestGlider_eqFunction_3872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3872};
  data->localData[0]->realVars[35] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 3873
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] = genericGlider_mass_explicit.actuators.body_rolling.a_0[3]
*/
void TestGlider_eqFunction_3873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3873};
  data->localData[0]->realVars[37] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 3874
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] = genericGlider_mass_explicit.actuators.body_rolling.a_0[2]
*/
void TestGlider_eqFunction_3874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3874};
  data->localData[0]->realVars[36] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 3875
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] = genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * genericGlider_mass_explicit.hull.w_a[1] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[1] + (-genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] - genericGlider_mass_explicit.addedMassForcesTorques.X_udot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] * genericGlider_mass_explicit.hull.w_a[3]
*/
void TestGlider_eqFunction_3875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3875};
  data->localData[0]->realVars[1157] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] variable */ = (data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + (data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)) + ((-data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */)) * (data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * (data->localData[0]->realVars[677] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3876
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] = (genericGlider_mass_explicit.addedMassForcesTorques.K_pdot - genericGlider_mass_explicit.addedMassForcesTorques.M_qdot) * genericGlider_mass_explicit.hull.w_a[1] * genericGlider_mass_explicit.hull.w_a[2] + (-genericGlider_mass_explicit.addedMassForcesTorques.N_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] * ((genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot - genericGlider_mass_explicit.addedMassForcesTorques.X_udot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] + genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.hull.w_a[3]) - genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[1]
*/
void TestGlider_eqFunction_3876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3876};
  data->localData[0]->realVars[1240] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] variable */ = (data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */ - data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */)) * (data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[677] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) + (data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */))) - ((data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 3877
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[2] = -genericGlider_mass_explicit.addedMassForcesTorques.force.force[2]
*/
void TestGlider_eqFunction_3877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3877};
  data->localData[0]->realVars[1181] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[2] variable */ = (-data->localData[0]->realVars[1157] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] variable */);
  TRACE_POP
}
/*
equation index: 3878
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[3] = -genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3]
*/
void TestGlider_eqFunction_3878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3878};
  data->localData[0]->realVars[1185] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[3] variable */ = (-data->localData[0]->realVars[1240] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] variable */);
  TRACE_POP
}
/*
equation index: 3879
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] = genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[1] + (genericGlider_mass_explicit.addedMassForcesTorques.N_rdot - genericGlider_mass_explicit.addedMassForcesTorques.K_pdot) * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[1] + (genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot - genericGlider_mass_explicit.addedMassForcesTorques.X_udot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] + genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * (genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] * genericGlider_mass_explicit.hull.w_a[2] - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3]) - genericGlider_mass_explicit.addedMassForcesTorques.M_qdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2]
*/
void TestGlider_eqFunction_3879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3879};
  data->localData[0]->realVars[1239] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] variable */ = (data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)) + (data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */ - data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)) + (data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */ - data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */)) + (data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) - data->localData[0]->realVars[678] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] variable */) - ((data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */) * (data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */));
  TRACE_POP
}
/*
equation index: 3880
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] = genericGlider_mass_explicit.addedMassForcesTorques.X_udot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] * genericGlider_mass_explicit.hull.w_a[2] + (-genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] - genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[1] - genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[1]
*/
void TestGlider_eqFunction_3880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3880};
  data->localData[0]->realVars[1158] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] variable */ = (data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */)) * (data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */) - ((data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * (data->localData[0]->realVars[678] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] variable */)) - ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) - ((data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 3881
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[3] = -genericGlider_mass_explicit.addedMassForcesTorques.force.force[3]
*/
void TestGlider_eqFunction_3881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3881};
  data->localData[0]->realVars[1182] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[3] variable */ = (-data->localData[0]->realVars[1158] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] variable */);
  TRACE_POP
}
/*
equation index: 3882
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[2] = -genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2]
*/
void TestGlider_eqFunction_3882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3882};
  data->localData[0]->realVars[1184] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[2] variable */ = (-data->localData[0]->realVars[1239] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] variable */);
  TRACE_POP
}
/*
equation index: 3883
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[1] - (genericGlider_mass_explicit.buoyancyForce.frame_b.f[1] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[1] + genericGlider_mass_explicit.hull.frame_a.f[1])
*/
void TestGlider_eqFunction_3883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3883};
  data->localData[0]->realVars[550] /* genericGlider_mass_explicit.actuators.frame_a.f[1] variable */ = data->localData[0]->realVars[1369] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[1] variable */ - (data->localData[0]->realVars[1325] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[1] variable */ + data->localData[0]->realVars[1180] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[1] variable */ + data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */);
  TRACE_POP
}
/*
equation index: 3884
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] = genericGlider_mass_explicit.actuators.frame_a.f[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1]
*/
void TestGlider_eqFunction_3884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3884};
  data->localData[0]->realVars[607] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] variable */ = data->localData[0]->realVars[550] /* genericGlider_mass_explicit.actuators.frame_a.f[1] variable */ - data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */;
  TRACE_POP
}
/*
equation index: 3885
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[2] - (genericGlider_mass_explicit.buoyancyForce.frame_b.f[2] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[2] + genericGlider_mass_explicit.hull.frame_a.f[2])
*/
void TestGlider_eqFunction_3885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3885};
  data->localData[0]->realVars[551] /* genericGlider_mass_explicit.actuators.frame_a.f[2] variable */ = data->localData[0]->realVars[1370] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[2] variable */ - (data->localData[0]->realVars[1326] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[2] variable */ + data->localData[0]->realVars[1181] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[2] variable */ + data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */);
  TRACE_POP
}
/*
equation index: 3886
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] = genericGlider_mass_explicit.actuators.frame_a.f[2] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2]
*/
void TestGlider_eqFunction_3886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3886};
  data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */ = data->localData[0]->realVars[551] /* genericGlider_mass_explicit.actuators.frame_a.f[2] variable */ - data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */;
  TRACE_POP
}
/*
equation index: 3887
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[3] - (genericGlider_mass_explicit.buoyancyForce.frame_b.f[3] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[3] + genericGlider_mass_explicit.hull.frame_a.f[3])
*/
void TestGlider_eqFunction_3887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3887};
  data->localData[0]->realVars[552] /* genericGlider_mass_explicit.actuators.frame_a.f[3] variable */ = data->localData[0]->realVars[1371] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[3] variable */ - (data->localData[0]->realVars[1327] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[3] variable */ + data->localData[0]->realVars[1182] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[3] variable */ + data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */);
  TRACE_POP
}
/*
equation index: 3888
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f[3] = genericGlider_mass_explicit.actuators.frame_a.f[3] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3]
*/
void TestGlider_eqFunction_3888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3888};
  data->localData[0]->realVars[609] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[3] variable */ = data->localData[0]->realVars[552] /* genericGlider_mass_explicit.actuators.frame_a.f[3] variable */ - data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */;
  TRACE_POP
}
/*
equation index: 3889
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] = ((-genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) - genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[2] + (genericGlider_mass_explicit.addedMassForcesTorques.M_qdot - genericGlider_mass_explicit.addedMassForcesTorques.N_rdot) * genericGlider_mass_explicit.hull.w_a[2] * genericGlider_mass_explicit.hull.w_a[3] + (genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot + genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[3] + (genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot - genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] - genericGlider_mass_explicit.addedMassForcesTorques.K_pdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1]
*/
void TestGlider_eqFunction_3889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3889};
  data->localData[0]->realVars[1238] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] variable */ = ((-data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) - data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + (data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */ - data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */ + data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */)) - ((data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */) * (data->localData[0]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */));
  TRACE_POP
}
/*
equation index: 3890
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[1] = -genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1]
*/
void TestGlider_eqFunction_3890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3890};
  data->localData[0]->realVars[1183] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[1] variable */ = (-data->localData[0]->realVars[1238] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] variable */);
  TRACE_POP
}
/*
equation index: 3891
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1] = genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] - 0.04 * genericGlider_mass_explicit.actuators.revolute.frame_a.f[2]
*/
void TestGlider_eqFunction_3891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3891};
  data->localData[0]->realVars[514] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1] variable */ = data->localData[0]->realVars[610] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] variable */ - ((0.04) * (data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */));
  TRACE_POP
}
/*
equation index: 3892
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] = genericGlider_mass_explicit.actuators.frame_a.t[1] - genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1]
*/
void TestGlider_eqFunction_3892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3892};
  data->localData[0]->realVars[164] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] variable */ = data->localData[0]->realVars[553] /* genericGlider_mass_explicit.actuators.frame_a.t[1] variable */ - data->localData[0]->realVars[514] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1] variable */;
  TRACE_POP
}
/*
equation index: 3893
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[1] - (genericGlider_mass_explicit.actuators.frame_a.t[1] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[1])
*/
void TestGlider_eqFunction_3893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3893};
  data->localData[0]->realVars[1348] /* genericGlider_mass_explicit.hull.frame_a.t[1] variable */ = data->localData[0]->realVars[1384] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[1] variable */ - (data->localData[0]->realVars[553] /* genericGlider_mass_explicit.actuators.frame_a.t[1] variable */ + data->localData[0]->realVars[1183] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[1] variable */);
  TRACE_POP
}
/*
equation index: 3894
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] = genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] + (-0.04) * genericGlider_mass_explicit.actuators.revolute.frame_a.f[1]
*/
void TestGlider_eqFunction_3894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3894};
  data->localData[0]->realVars[611] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] variable */ = data->localData[0]->realVars[515] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] variable */ + (-0.04) * (data->localData[0]->realVars[607] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] variable */);
  TRACE_POP
}
/*
equation index: 3895
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[2] = genericGlider_mass_explicit.actuators.frame_a.t[2] - genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2]
*/
void TestGlider_eqFunction_3895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3895};
  data->localData[0]->realVars[165] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[2] variable */ = data->localData[0]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */ - data->localData[0]->realVars[515] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] variable */;
  TRACE_POP
}
/*
equation index: 3896
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[2] - (genericGlider_mass_explicit.actuators.frame_a.t[2] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[2])
*/
void TestGlider_eqFunction_3896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3896};
  data->localData[0]->realVars[1349] /* genericGlider_mass_explicit.hull.frame_a.t[2] variable */ = data->localData[0]->realVars[1385] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[2] variable */ - (data->localData[0]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */ + data->localData[0]->realVars[1184] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[2] variable */);
  TRACE_POP
}
/*
equation index: 3897
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[3] - (genericGlider_mass_explicit.actuators.frame_a.t[3] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[3])
*/
void TestGlider_eqFunction_3897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3897};
  data->localData[0]->realVars[1350] /* genericGlider_mass_explicit.hull.frame_a.t[3] variable */ = data->localData[0]->realVars[1386] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[3] variable */ - (data->localData[0]->realVars[555] /* genericGlider_mass_explicit.actuators.frame_a.t[3] variable */ + data->localData[0]->realVars[1185] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[3] variable */);
  TRACE_POP
}
/*
equation index: 3898
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[3] = genericGlider_mass_explicit.actuators.frame_a.t[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.t[3]
*/
void TestGlider_eqFunction_3898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3898};
  data->localData[0]->realVars[166] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[3] variable */ = data->localData[0]->realVars[555] /* genericGlider_mass_explicit.actuators.frame_a.t[3] variable */ - data->localData[0]->realVars[612] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] variable */;
  TRACE_POP
}
/*
equation index: 3899
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.z_a[3] = (genericGlider_mass_explicit.hull.frame_a.t[3] - (genericGlider_mass_explicit.hull.I[3,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.I[3,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.w_a[1] * (genericGlider_mass_explicit.hull.I[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.hull.I[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.hull.I[2,3] * genericGlider_mass_explicit.hull.w_a[3]) + genericGlider_mass_explicit.hull.r_CM[1] * genericGlider_mass_explicit.hull.frame_a.f[2] - genericGlider_mass_explicit.hull.r_CM[2] * genericGlider_mass_explicit.hull.frame_a.f[1] - genericGlider_mass_explicit.hull.w_a[2] * (genericGlider_mass_explicit.hull.I[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.hull.I[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.hull.I[1,3] * genericGlider_mass_explicit.hull.w_a[3]))) / genericGlider_mass_explicit.hull.I[3,3]
*/
void TestGlider_eqFunction_3899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3899};
  data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */ = DIVISION_SIM(data->localData[0]->realVars[1350] /* genericGlider_mass_explicit.hull.frame_a.t[3] variable */ - ((data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */) - ((data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */)) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)))),data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */,"genericGlider_mass_explicit.hull.I[3,3]",equationIndexes);
  TRACE_POP
}
/*
equation index: 3900
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a[1] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.w_a[3]) + $DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] - genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_3900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3900};
  data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[595] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + data->localData[0]->realVars[72] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[1]) DUMMY_DER */ - ((data->localData[0]->realVars[594] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3901
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a[2] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.w_a[3]) + $DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_3901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3901};
  data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */ = (data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[593] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + data->localData[0]->realVars[73] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[2]) DUMMY_DER */ - ((data->localData[0]->realVars[595] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3902
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] = (-(genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * (-9.81 + genericGlider_mass_explicit.actuators.body_rolling.a_0[3]) + genericGlider_mass_explicit.actuators.body_rolling.z_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3]) + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] - genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3]) - genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1])) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_3902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3902};
  data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */ = ((-((data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * (data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */))) + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */))))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 3903
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.z_a[3]
*/
void TestGlider_eqFunction_3903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3903};
  data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 3904
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a[3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.w_a[3]) + $DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_3904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3904};
  data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */ = (data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[594] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + data->localData[0]->realVars[74] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[3]) DUMMY_DER */ - ((data->localData[0]->realVars[593] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 3905
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] = (-(genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * (-9.81 + genericGlider_mass_explicit.actuators.body_rolling.a_0[3]) + genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] + genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) - genericGlider_mass_explicit.actuators.body_rolling.z_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3])) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_3905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3905};
  data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */ = ((-((data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * (data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) + (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */))))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 3906
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.f = (genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * (-9.81 + genericGlider_mass_explicit.actuators.body_rolling.a_0[3]) + genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] - genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1]) + genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1]) - genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_3906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3906};
  data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */ = ((data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (-9.81 + data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */))) + (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 3907
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] = -(genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) + genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] + (-genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]))
*/
void TestGlider_eqFunction_3907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3907};
  data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */ = (-((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */) + ((-data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 3908
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] = -(genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) + genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] * genericGlider_mass_explicit.actuators.prismatic.f + genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]))
*/
void TestGlider_eqFunction_3908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3908};
  data->localData[0]->realVars[581] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] variable */ = (-((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) + (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 3909
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] = -(genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) + (-genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.prismatic.f - genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) - genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2])
*/
void TestGlider_eqFunction_3909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3909};
  data->localData[0]->realVars[582] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] variable */ = (-((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)) + ((-data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */))) - ((data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */))));
  TRACE_POP
}
/*
equation index: 3910
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.z_a[3]
*/
void TestGlider_eqFunction_3910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3910};
  data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 3911
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.z_a[3]
*/
void TestGlider_eqFunction_3911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3911};
  data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 3912
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3] = $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] - (genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * (genericGlider_mass_explicit.actuators.prismatic.a + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.position_slidingMass.s * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] ^ 2.0) + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * (2.0 * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s) + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * (2.0 * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s))
*/
void TestGlider_eqFunction_3912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3912};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[34] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[37] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ - ((data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[562] /* genericGlider_mass_explicit.actuators.prismatic.a variable */ + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((2.0) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)))) + (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((2.0) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */))));
  TRACE_POP
}
/*
equation index: 3913
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2] = genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * (0.04 * genericGlider_mass_explicit.hull.z_a[2] + (-0.04) * (-genericGlider_mass_explicit.hull.w_a[3]) * genericGlider_mass_explicit.hull.w_a[1]) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * ((-0.04) * genericGlider_mass_explicit.hull.z_a[1] + 0.04 * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[2]) + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (genericGlider_mass_explicit.hull.w_a[1] ^ 2.0 + genericGlider_mass_explicit.hull.w_a[2] ^ 2.0)
*/
void TestGlider_eqFunction_3913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3913};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */;
  tmp1 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[33] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */ + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * ((0.04) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (-0.04) * (((-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * ((-0.04) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (0.04) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */))) + (-0.04) * ((data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 3914
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1] = genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * (0.04 * genericGlider_mass_explicit.hull.z_a[2] + (-0.04) * (-genericGlider_mass_explicit.hull.w_a[3]) * genericGlider_mass_explicit.hull.w_a[1]) + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * ((-0.04) * genericGlider_mass_explicit.hull.z_a[1] + 0.04 * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[2]) + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * (genericGlider_mass_explicit.hull.w_a[1] ^ 2.0 + genericGlider_mass_explicit.hull.w_a[2] ^ 2.0)
*/
void TestGlider_eqFunction_3914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3914};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */;
  tmp1 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[32] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */ + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * ((0.04) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (-0.04) * (((-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * ((-0.04) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (0.04) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */))) + (-0.04) * ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 3915
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] - genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_3915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3915};
  data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */ = data->localData[0]->realVars[581] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] variable */ - ((data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 3916
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] + genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_3916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3916};
  data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */ = data->localData[0]->realVars[582] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] variable */ + (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */);
  TRACE_POP
}

void residualFunc4004(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4004};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */ = xloc[0];
  data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */ = xloc[1];
  data->localData[0]->realVars[612] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] variable */ = xloc[2];
  data->localData[0]->realVars[555] /* genericGlider_mass_explicit.actuators.frame_a.t[3] variable */ = xloc[3];
  data->localData[0]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */ = xloc[4];
  data->localData[0]->realVars[515] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] variable */ = xloc[5];
  data->localData[0]->realVars[553] /* genericGlider_mass_explicit.actuators.frame_a.t[1] variable */ = xloc[6];
  data->localData[0]->realVars[610] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] variable */ = xloc[7];
  data->localData[0]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */ = xloc[8];
  data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */ = xloc[9];
  data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */ = xloc[10];
  data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */ = xloc[11];
  data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */ = xloc[12];
  data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */ = xloc[13];
  data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */ = xloc[14];
  data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */ = xloc[15];
  data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */ = xloc[16];
  data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */ = xloc[17];
  data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */ = xloc[18];
  data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */ = xloc[19];
  data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */ = xloc[20];
  data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */ = xloc[21];
  data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */ = xloc[22];
  /* local constraints */
  TestGlider_eqFunction_3864(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3865(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3866(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3867(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3868(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3869(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3870(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3871(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3872(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3873(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3874(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3875(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3876(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3877(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3878(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3879(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3880(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3881(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3882(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3883(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3884(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3885(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3886(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3887(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3888(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3889(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3890(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3891(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3892(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3893(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3894(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3895(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3896(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3897(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3898(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3899(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3900(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3901(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3902(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3903(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3904(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3905(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3906(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3907(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3908(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3909(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3910(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3911(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3912(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3913(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3914(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3915(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3916(data, threadData);
  tmp0 = data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */;
  res[0] = (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((2.0) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */))) + (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((2.0) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)))) + (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[562] /* genericGlider_mass_explicit.actuators.prismatic.a variable */ + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + data->localData[0]->realVars[32] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ - data->localData[0]->realVars[35] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */;

  res[1] = (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[1349] /* genericGlider_mass_explicit.hull.frame_a.t[2] variable */ - ((data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */)) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[2] = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */;

  res[3] = (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[1348] /* genericGlider_mass_explicit.hull.frame_a.t[1] variable */ - ((data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */)) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[4] = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */;

  res[5] = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[155] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[156] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[157] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */;

  res[6] = (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - data->localData[0]->realVars[609] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[3] variable */ - ((data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */));

  res[7] = (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */) - data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */;

  res[8] = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */) - data->localData[0]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */;

  res[9] = (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */) - data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */;

  res[10] = (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[166] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[3] variable */ - ((data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */)) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[11] = (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[164] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] variable */ - ((data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */)) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[12] = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[155] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[156] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[157] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */;

  tmp1 = data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */;
  res[13] = (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((2.0) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */))) + (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((2.0) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)))) + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[562] /* genericGlider_mass_explicit.actuators.prismatic.a variable */ + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) * ((tmp1 * tmp1)))) + data->localData[0]->realVars[33] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ - data->localData[0]->realVars[36] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */;

  res[14] = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */;

  res[15] = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - data->localData[0]->realVars[607] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] variable */ - ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */));

  res[16] = ((-data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */) - data->localData[0]->realVars[612] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] variable */ - ((data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */));

  res[17] = ((-data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */) - data->localData[0]->realVars[611] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] variable */ - ((data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */));

  res[18] = (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[165] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[2] variable */ - ((data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */)) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[19] = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[155] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[156] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (-9.81 + data->localData[0]->realVars[157] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */;

  tmp2 = data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */;
  tmp3 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  res[20] = (-0.04) * ((data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * ((tmp2 * tmp2) + (tmp3 * tmp3))) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * ((-0.04) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (0.04) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */))) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * ((0.04) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (-0.04) * (((-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */ - data->localData[0]->realVars[34] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */;

  res[21] = (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */ - ((data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */));

  res[22] = ((-data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */) - data->localData[0]->realVars[610] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] variable */ - ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4004(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for genericGlider_mass_explicit.hull.z_a[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.z_a[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[612].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[612].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[612].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.frame_a.t[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[555].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[555].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[555].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[3] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.frame_a.t[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[554].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[554].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[554].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[515].attribute /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[515].attribute /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[515].attribute /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.frame_a.t[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[553].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[553].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[553].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[1] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[610].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[610].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[610].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] */.max;
  /* static ls data for genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1105].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1105].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1105].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[160].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[160].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[160].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.frame_a.f[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1347].attribute /* genericGlider_mass_explicit.hull.frame_a.f[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1347].attribute /* genericGlider_mass_explicit.hull.frame_a.f[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1347].attribute /* genericGlider_mass_explicit.hull.frame_a.f[3] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[159].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[159].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[159].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.frame_a.f[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1346].attribute /* genericGlider_mass_explicit.hull.frame_a.f[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1346].attribute /* genericGlider_mass_explicit.hull.frame_a.f[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1346].attribute /* genericGlider_mass_explicit.hull.frame_a.f[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[158].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[158].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[158].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.frame_a.f[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1345].attribute /* genericGlider_mass_explicit.hull.frame_a.f[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1345].attribute /* genericGlider_mass_explicit.hull.frame_a.f[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1345].attribute /* genericGlider_mass_explicit.hull.frame_a.f[1] */.max;
  /* static ls data for genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1106].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1106].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1106].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] */.max;
  /* static ls data for genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1107].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1107].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1107].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.body_rolling.a_0[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[188].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[188].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[188].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.body_rolling.a_0[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[189].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[189].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[189].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.body_rolling.a_0[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[187].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[187].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[187].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.a_0[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1333].attribute /* genericGlider_mass_explicit.hull.a_0[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1333].attribute /* genericGlider_mass_explicit.hull.a_0[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1333].attribute /* genericGlider_mass_explicit.hull.a_0[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.a_0[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1334].attribute /* genericGlider_mass_explicit.hull.a_0[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1334].attribute /* genericGlider_mass_explicit.hull.a_0[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1334].attribute /* genericGlider_mass_explicit.hull.a_0[2] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.a_0[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1335].attribute /* genericGlider_mass_explicit.hull.a_0[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1335].attribute /* genericGlider_mass_explicit.hull.a_0[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1335].attribute /* genericGlider_mass_explicit.hull.a_0[3] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA3606(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,3606};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setAElement(0, 0, (2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 0, linearSystemData, threadData);
  linearSystemData->setAElement(0, 1, (2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 1, linearSystemData, threadData);
  linearSystemData->setAElement(0, 2, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 2, linearSystemData, threadData);
  linearSystemData->setAElement(0, 3, (-2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 3, linearSystemData, threadData);
  linearSystemData->setAElement(1, 0, (2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 4, linearSystemData, threadData);
  linearSystemData->setAElement(1, 1, (-2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 5, linearSystemData, threadData);
  linearSystemData->setAElement(1, 2, (2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 6, linearSystemData, threadData);
  linearSystemData->setAElement(1, 3, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 7, linearSystemData, threadData);
  linearSystemData->setAElement(2, 0, (2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 8, linearSystemData, threadData);
  linearSystemData->setAElement(2, 1, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 9, linearSystemData, threadData);
  linearSystemData->setAElement(2, 2, (-2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 10, linearSystemData, threadData);
  linearSystemData->setAElement(2, 3, (2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 11, linearSystemData, threadData);
  linearSystemData->setAElement(3, 0, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 12, linearSystemData, threadData);
  linearSystemData->setAElement(3, 1, (-2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 13, linearSystemData, threadData);
  linearSystemData->setAElement(3, 2, (-2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 14, linearSystemData, threadData);
  linearSystemData->setAElement(3, 3, (-2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 15, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb3606(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,3606};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setBElement(0, (-data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */), linearSystemData, threadData);
  linearSystemData->setBElement(1, (-data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */), linearSystemData, threadData);
  linearSystemData->setBElement(2, (-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */), linearSystemData, threadData);
  linearSystemData->setBElement(3, 0.0, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData3606(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[41].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[41].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[41].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */.max;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[40].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[40].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[40].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */.max;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[38].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[38].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[38].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */.max;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[39].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[39].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[39].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */.max;
}


/*
equation index: 1623
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] = genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1623};
  data->localData[0]->realVars[157] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] variable */ = data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 1624
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] = genericGlider_mass_explicit.hull.a_0[2]
*/
void TestGlider_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1624};
  data->localData[0]->realVars[156] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] variable */ = data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 1625
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1625};
  data->localData[0]->realVars[676] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 1626
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1626};
  data->localData[0]->realVars[677] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] variable */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 1627
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1627};
  data->localData[0]->realVars[678] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] variable */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */);
  TRACE_POP
}
/*
equation index: 1628
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] = genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.hull.w_a[3] ^ 2.0 + genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[3] + (-genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[2] - genericGlider_mass_explicit.addedMassForcesTorques.X_udot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] - genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * genericGlider_mass_explicit.hull.w_a[2] ^ 2.0
*/
void TestGlider_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1628};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */;
  tmp1 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[1156] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] variable */ = (data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((tmp0 * tmp0)) + (data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + ((-data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */)) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) - ((data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[676] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] variable */)) - ((data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 1629
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[1] = -genericGlider_mass_explicit.addedMassForcesTorques.force.force[1]
*/
void TestGlider_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1629};
  data->localData[0]->realVars[1180] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[1] variable */ = (-data->localData[0]->realVars[1156] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] variable */);
  TRACE_POP
}
/*
equation index: 1630
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] = genericGlider_mass_explicit.hull.a_0[1]
*/
void TestGlider_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1630};
  data->localData[0]->realVars[155] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] variable */ = data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 1631
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] = genericGlider_mass_explicit.actuators.body_rolling.a_0[1]
*/
void TestGlider_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1631};
  data->localData[0]->realVars[35] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 1632
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] = genericGlider_mass_explicit.actuators.body_rolling.a_0[3]
*/
void TestGlider_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1632};
  data->localData[0]->realVars[37] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 1633
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] = genericGlider_mass_explicit.actuators.body_rolling.a_0[2]
*/
void TestGlider_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1633};
  data->localData[0]->realVars[36] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 1634
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] = genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * genericGlider_mass_explicit.hull.w_a[1] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[1] + (-genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] - genericGlider_mass_explicit.addedMassForcesTorques.X_udot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] * genericGlider_mass_explicit.hull.w_a[3]
*/
void TestGlider_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1634};
  data->localData[0]->realVars[1157] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] variable */ = (data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + (data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)) + ((-data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */)) * (data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * (data->localData[0]->realVars[677] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1635
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] = (genericGlider_mass_explicit.addedMassForcesTorques.K_pdot - genericGlider_mass_explicit.addedMassForcesTorques.M_qdot) * genericGlider_mass_explicit.hull.w_a[1] * genericGlider_mass_explicit.hull.w_a[2] + (-genericGlider_mass_explicit.addedMassForcesTorques.N_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] * ((genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot - genericGlider_mass_explicit.addedMassForcesTorques.X_udot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] + genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.hull.w_a[3]) - genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[1]
*/
void TestGlider_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1635};
  data->localData[0]->realVars[1240] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] variable */ = (data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */ - data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */)) * (data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */) - ((data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[677] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[2] variable */)) - ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * (data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) + (data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */))) - ((data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 1636
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[2] = -genericGlider_mass_explicit.addedMassForcesTorques.force.force[2]
*/
void TestGlider_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1636};
  data->localData[0]->realVars[1181] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[2] variable */ = (-data->localData[0]->realVars[1157] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] variable */);
  TRACE_POP
}
/*
equation index: 1637
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[3] = -genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3]
*/
void TestGlider_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1637};
  data->localData[0]->realVars[1185] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[3] variable */ = (-data->localData[0]->realVars[1240] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] variable */);
  TRACE_POP
}
/*
equation index: 1638
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] = genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[1] + (genericGlider_mass_explicit.addedMassForcesTorques.N_rdot - genericGlider_mass_explicit.addedMassForcesTorques.K_pdot) * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[1] + (genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot - genericGlider_mass_explicit.addedMassForcesTorques.X_udot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] + genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot * (genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] * genericGlider_mass_explicit.hull.w_a[2] - genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3]) - genericGlider_mass_explicit.addedMassForcesTorques.M_qdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2]
*/
void TestGlider_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1638};
  data->localData[0]->realVars[1239] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] variable */ = (data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)) + (data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */ - data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)) + (data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */ - data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */)) + (data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) - data->localData[0]->realVars[678] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] variable */) - ((data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */) * (data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */));
  TRACE_POP
}
/*
equation index: 1639
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] = genericGlider_mass_explicit.addedMassForcesTorques.X_udot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] * genericGlider_mass_explicit.hull.w_a[2] + (-genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] - genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] - genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[1] - genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[1]
*/
void TestGlider_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1639};
  data->localData[0]->realVars[1158] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] variable */ = (data->simulationInfo->realParameter[320] /* genericGlider_mass_explicit.addedMassForcesTorques.X_udot PARAM */) * ((data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + ((-data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */)) * (data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */) - ((data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * (data->localData[0]->realVars[678] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[3] variable */)) - ((data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) - ((data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)));
  TRACE_POP
}
/*
equation index: 1640
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[3] = -genericGlider_mass_explicit.addedMassForcesTorques.force.force[3]
*/
void TestGlider_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1640};
  data->localData[0]->realVars[1182] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[3] variable */ = (-data->localData[0]->realVars[1158] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] variable */);
  TRACE_POP
}
/*
equation index: 1641
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[2] = -genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2]
*/
void TestGlider_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1641};
  data->localData[0]->realVars[1184] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[2] variable */ = (-data->localData[0]->realVars[1239] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] variable */);
  TRACE_POP
}
/*
equation index: 1642
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[1] - (genericGlider_mass_explicit.buoyancyForce.frame_b.f[1] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[1] + genericGlider_mass_explicit.hull.frame_a.f[1])
*/
void TestGlider_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1642};
  data->localData[0]->realVars[550] /* genericGlider_mass_explicit.actuators.frame_a.f[1] variable */ = data->localData[0]->realVars[1369] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[1] variable */ - (data->localData[0]->realVars[1325] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[1] variable */ + data->localData[0]->realVars[1180] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[1] variable */ + data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */);
  TRACE_POP
}
/*
equation index: 1643
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] = genericGlider_mass_explicit.actuators.frame_a.f[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1]
*/
void TestGlider_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1643};
  data->localData[0]->realVars[607] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] variable */ = data->localData[0]->realVars[550] /* genericGlider_mass_explicit.actuators.frame_a.f[1] variable */ - data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */;
  TRACE_POP
}
/*
equation index: 1644
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[2] - (genericGlider_mass_explicit.buoyancyForce.frame_b.f[2] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[2] + genericGlider_mass_explicit.hull.frame_a.f[2])
*/
void TestGlider_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1644};
  data->localData[0]->realVars[551] /* genericGlider_mass_explicit.actuators.frame_a.f[2] variable */ = data->localData[0]->realVars[1370] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[2] variable */ - (data->localData[0]->realVars[1326] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[2] variable */ + data->localData[0]->realVars[1181] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[2] variable */ + data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */);
  TRACE_POP
}
/*
equation index: 1645
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] = genericGlider_mass_explicit.actuators.frame_a.f[2] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2]
*/
void TestGlider_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1645};
  data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */ = data->localData[0]->realVars[551] /* genericGlider_mass_explicit.actuators.frame_a.f[2] variable */ - data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */;
  TRACE_POP
}
/*
equation index: 1646
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.frame_a.f[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[3] - (genericGlider_mass_explicit.buoyancyForce.frame_b.f[3] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[3] + genericGlider_mass_explicit.hull.frame_a.f[3])
*/
void TestGlider_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1646};
  data->localData[0]->realVars[552] /* genericGlider_mass_explicit.actuators.frame_a.f[3] variable */ = data->localData[0]->realVars[1371] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[3] variable */ - (data->localData[0]->realVars[1327] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[3] variable */ + data->localData[0]->realVars[1182] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[3] variable */ + data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */);
  TRACE_POP
}
/*
equation index: 1647
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.f[3] = genericGlider_mass_explicit.actuators.frame_a.f[3] - genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3]
*/
void TestGlider_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1647};
  data->localData[0]->realVars[609] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[3] variable */ = data->localData[0]->realVars[552] /* genericGlider_mass_explicit.actuators.frame_a.f[3] variable */ - data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */;
  TRACE_POP
}
/*
equation index: 1648
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] = ((-genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) - genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.hull.w_a[2] + (genericGlider_mass_explicit.addedMassForcesTorques.M_qdot - genericGlider_mass_explicit.addedMassForcesTorques.N_rdot) * genericGlider_mass_explicit.hull.w_a[2] * genericGlider_mass_explicit.hull.w_a[3] + (genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot + genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] * genericGlider_mass_explicit.hull.w_a[3] + (genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot - genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot) * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] - genericGlider_mass_explicit.addedMassForcesTorques.K_pdot * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1]
*/
void TestGlider_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1648};
  data->localData[0]->realVars[1238] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] variable */ = ((-data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) - data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + (data->simulationInfo->realParameter[306] /* genericGlider_mass_explicit.addedMassForcesTorques.M_qdot PARAM */ - data->simulationInfo->realParameter[313] /* genericGlider_mass_explicit.addedMassForcesTorques.N_rdot PARAM */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[330] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_qdot PARAM */ + data->simulationInfo->realParameter[325] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_rdot PARAM */) * ((data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[327] /* genericGlider_mass_explicit.addedMassForcesTorques.Y_vdot PARAM */ - data->simulationInfo->realParameter[334] /* genericGlider_mass_explicit.addedMassForcesTorques.Z_wdot PARAM */) * ((data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */) * (data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */)) - ((data->simulationInfo->realParameter[299] /* genericGlider_mass_explicit.addedMassForcesTorques.K_pdot PARAM */) * (data->localData[0]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */));
  TRACE_POP
}
/*
equation index: 1649
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[1] = -genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1]
*/
void TestGlider_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1649};
  data->localData[0]->realVars[1183] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[1] variable */ = (-data->localData[0]->realVars[1238] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] variable */);
  TRACE_POP
}
/*
equation index: 1650
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1] = genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] - 0.04 * genericGlider_mass_explicit.actuators.revolute.frame_a.f[2]
*/
void TestGlider_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1650};
  data->localData[0]->realVars[514] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1] variable */ = data->localData[0]->realVars[610] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] variable */ - ((0.04) * (data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */));
  TRACE_POP
}
/*
equation index: 1651
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] = genericGlider_mass_explicit.actuators.frame_a.t[1] - genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1]
*/
void TestGlider_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1651};
  data->localData[0]->realVars[164] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] variable */ = data->localData[0]->realVars[553] /* genericGlider_mass_explicit.actuators.frame_a.t[1] variable */ - data->localData[0]->realVars[514] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[1] variable */;
  TRACE_POP
}
/*
equation index: 1652
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[1] - (genericGlider_mass_explicit.actuators.frame_a.t[1] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[1])
*/
void TestGlider_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1652};
  data->localData[0]->realVars[1348] /* genericGlider_mass_explicit.hull.frame_a.t[1] variable */ = data->localData[0]->realVars[1384] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[1] variable */ - (data->localData[0]->realVars[553] /* genericGlider_mass_explicit.actuators.frame_a.t[1] variable */ + data->localData[0]->realVars[1183] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[1] variable */);
  TRACE_POP
}
/*
equation index: 1653
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] = genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] + (-0.04) * genericGlider_mass_explicit.actuators.revolute.frame_a.f[1]
*/
void TestGlider_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1653};
  data->localData[0]->realVars[611] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] variable */ = data->localData[0]->realVars[515] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] variable */ + (-0.04) * (data->localData[0]->realVars[607] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] variable */);
  TRACE_POP
}
/*
equation index: 1654
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[2] = genericGlider_mass_explicit.actuators.frame_a.t[2] - genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2]
*/
void TestGlider_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1654};
  data->localData[0]->realVars[165] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[2] variable */ = data->localData[0]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */ - data->localData[0]->realVars[515] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] variable */;
  TRACE_POP
}
/*
equation index: 1655
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[2] - (genericGlider_mass_explicit.actuators.frame_a.t[2] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[2])
*/
void TestGlider_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1655};
  data->localData[0]->realVars[1349] /* genericGlider_mass_explicit.hull.frame_a.t[2] variable */ = data->localData[0]->realVars[1385] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[2] variable */ - (data->localData[0]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */ + data->localData[0]->realVars[1184] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[2] variable */);
  TRACE_POP
}
/*
equation index: 1656
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.t[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[3] - (genericGlider_mass_explicit.actuators.frame_a.t[3] + genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[3])
*/
void TestGlider_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1656};
  data->localData[0]->realVars[1350] /* genericGlider_mass_explicit.hull.frame_a.t[3] variable */ = data->localData[0]->realVars[1386] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[3] variable */ - (data->localData[0]->realVars[555] /* genericGlider_mass_explicit.actuators.frame_a.t[3] variable */ + data->localData[0]->realVars[1185] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[3] variable */);
  TRACE_POP
}
/*
equation index: 1657
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[3] = genericGlider_mass_explicit.actuators.frame_a.t[3] - genericGlider_mass_explicit.actuators.revolute.frame_a.t[3]
*/
void TestGlider_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1657};
  data->localData[0]->realVars[166] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[3] variable */ = data->localData[0]->realVars[555] /* genericGlider_mass_explicit.actuators.frame_a.t[3] variable */ - data->localData[0]->realVars[612] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] variable */;
  TRACE_POP
}
/*
equation index: 1658
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.z_a[3] = (genericGlider_mass_explicit.hull.frame_a.t[3] - (genericGlider_mass_explicit.hull.I[3,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.I[3,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.w_a[1] * (genericGlider_mass_explicit.hull.I[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.hull.I[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.hull.I[2,3] * genericGlider_mass_explicit.hull.w_a[3]) + genericGlider_mass_explicit.hull.r_CM[1] * genericGlider_mass_explicit.hull.frame_a.f[2] - genericGlider_mass_explicit.hull.r_CM[2] * genericGlider_mass_explicit.hull.frame_a.f[1] - genericGlider_mass_explicit.hull.w_a[2] * (genericGlider_mass_explicit.hull.I[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.hull.I[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.hull.I[1,3] * genericGlider_mass_explicit.hull.w_a[3]))) / genericGlider_mass_explicit.hull.I[3,3]
*/
void TestGlider_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1658};
  data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */ = DIVISION_SIM(data->localData[0]->realVars[1350] /* genericGlider_mass_explicit.hull.frame_a.t[3] variable */ - ((data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */) - ((data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */)) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)))),data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */,"genericGlider_mass_explicit.hull.I[3,3]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1659
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a[1] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.w_a[3]) + $DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] - genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1659};
  data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[595] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + data->localData[0]->realVars[72] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[1]) DUMMY_DER */ - ((data->localData[0]->realVars[594] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1660
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a[2] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.w_a[3]) + $DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] - genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1660};
  data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */ = (data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[593] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + data->localData[0]->realVars[73] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[2]) DUMMY_DER */ - ((data->localData[0]->realVars[595] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] DUMMY_STATE */) * ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1661
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] = (-(genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * (-9.81 + genericGlider_mass_explicit.actuators.body_rolling.a_0[3]) + genericGlider_mass_explicit.actuators.body_rolling.z_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3]) + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] - genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3]) - genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1])) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1661};
  data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */ = ((-((data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * (data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */))) + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */))))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 1662
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.z_a[3]
*/
void TestGlider_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1662};
  data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 1663
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.z_a[3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.z_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.w_a[3]) + $DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] - genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] * (genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.w_a[3])
*/
void TestGlider_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1663};
  data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */ = (data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->localData[0]->realVars[594] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] DUMMY_STATE */) * ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + data->localData[0]->realVars[74] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[3]) DUMMY_DER */ - ((data->localData[0]->realVars[593] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] DUMMY_STATE */) * ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));
  TRACE_POP
}
/*
equation index: 1664
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] = (-(genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * (-9.81 + genericGlider_mass_explicit.actuators.body_rolling.a_0[3]) + genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] + genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) - genericGlider_mass_explicit.actuators.body_rolling.z_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3])) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1664};
  data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */ = ((-((data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * (data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) + (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */))))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 1665
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.f = (genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] * genericGlider_mass_explicit.actuators.body_rolling.a_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] * genericGlider_mass_explicit.actuators.body_rolling.a_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * (-9.81 + genericGlider_mass_explicit.actuators.body_rolling.a_0[3]) + genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] - genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1]) + genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[1]) - genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.body_rolling.m
*/
void TestGlider_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1665};
  data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */ = ((data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */) + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */) + (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (-9.81 + data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */) + (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */) - ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */))) + (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) - ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[144] /* genericGlider_mass_explicit.actuators.body_rolling.m PARAM */);
  TRACE_POP
}
/*
equation index: 1666
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] = -(genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) + genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] + (-genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]))
*/
void TestGlider_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1666};
  data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */ = (-((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */) + ((-data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 1667
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] = -(genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * (genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) + genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] * genericGlider_mass_explicit.actuators.prismatic.f + genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]))
*/
void TestGlider_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1667};
  data->localData[0]->realVars[581] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] variable */ = (-((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)) + (data->simulationInfo->realParameter[150] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[3] PARAM */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) + (data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)))));
  TRACE_POP
}
/*
equation index: 1668
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] = -(genericGlider_mass_explicit.actuators.body_rolling.I[3,1] * genericGlider_mass_explicit.actuators.body_rolling.z_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[3,2] * genericGlider_mass_explicit.actuators.body_rolling.z_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[3,3] * genericGlider_mass_explicit.actuators.body_rolling.z_a[3] + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (genericGlider_mass_explicit.actuators.body_rolling.I[2,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[2,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[2,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) + (-genericGlider_mass_explicit.actuators.body_rolling.r_CM[2]) * genericGlider_mass_explicit.actuators.prismatic.f - genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (genericGlider_mass_explicit.actuators.body_rolling.I[1,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[1] + genericGlider_mass_explicit.actuators.body_rolling.I[1,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[2] + genericGlider_mass_explicit.actuators.body_rolling.I[1,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) - genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] * genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2])
*/
void TestGlider_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1668};
  data->localData[0]->realVars[582] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] variable */ = (-((data->simulationInfo->realParameter[115] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,1] PARAM */) * (data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */) + (data->simulationInfo->realParameter[116] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,2] PARAM */) * (data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) + (data->simulationInfo->realParameter[117] /* genericGlider_mass_explicit.actuators.body_rolling.I[3,3] PARAM */) * (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[112] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[113] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[114] /* genericGlider_mass_explicit.actuators.body_rolling.I[2,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */)) + ((-data->simulationInfo->realParameter[149] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[2] PARAM */)) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - ((data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[109] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,1] PARAM */) * (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) + (data->simulationInfo->realParameter[110] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,2] PARAM */) * (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) + (data->simulationInfo->realParameter[111] /* genericGlider_mass_explicit.actuators.body_rolling.I[1,3] PARAM */) * (data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */))) - ((data->simulationInfo->realParameter[148] /* genericGlider_mass_explicit.actuators.body_rolling.r_CM[1] PARAM */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */))));
  TRACE_POP
}
/*
equation index: 1669
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.z_a[3]
*/
void TestGlider_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1669};
  data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 1670
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.z_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.z_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.z_a[3]
*/
void TestGlider_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1670};
  data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 1671
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3] = $DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] - (genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * (genericGlider_mass_explicit.actuators.prismatic.a + genericGlider_mass_explicit.actuators.body_rolling.w_a[2] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.position_slidingMass.s * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] ^ 2.0) + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * (2.0 * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.z_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s) + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * (2.0 * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.w_a[1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s - genericGlider_mass_explicit.actuators.body_rolling.z_a[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s))
*/
void TestGlider_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1671};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */;
  data->localData[0]->realVars[34] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[37] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ - ((data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[562] /* genericGlider_mass_explicit.actuators.prismatic.a variable */ + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((2.0) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)))) + (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * ((2.0) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */))));
  TRACE_POP
}
/*
equation index: 1672
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2] = genericGlider_mass_explicit.hull.a_0[2] + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * (0.04 * genericGlider_mass_explicit.hull.z_a[2] + (-0.04) * (-genericGlider_mass_explicit.hull.w_a[3]) * genericGlider_mass_explicit.hull.w_a[1]) + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * ((-0.04) * genericGlider_mass_explicit.hull.z_a[1] + 0.04 * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[2]) + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * (genericGlider_mass_explicit.hull.w_a[1] ^ 2.0 + genericGlider_mass_explicit.hull.w_a[2] ^ 2.0)
*/
void TestGlider_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1672};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */;
  tmp1 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[33] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */ + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * ((0.04) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (-0.04) * (((-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * ((-0.04) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (0.04) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */))) + (-0.04) * ((data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 1673
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1] = genericGlider_mass_explicit.hull.a_0[1] + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * (0.04 * genericGlider_mass_explicit.hull.z_a[2] + (-0.04) * (-genericGlider_mass_explicit.hull.w_a[3]) * genericGlider_mass_explicit.hull.w_a[1]) + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * ((-0.04) * genericGlider_mass_explicit.hull.z_a[1] + 0.04 * genericGlider_mass_explicit.hull.w_a[3] * genericGlider_mass_explicit.hull.w_a[2]) + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * (genericGlider_mass_explicit.hull.w_a[1] ^ 2.0 + genericGlider_mass_explicit.hull.w_a[2] ^ 2.0)
*/
void TestGlider_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1673};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */;
  tmp1 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[32] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */ + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * ((0.04) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (-0.04) * (((-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * ((-0.04) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (0.04) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */))) + (-0.04) * ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * ((tmp0 * tmp0) + (tmp1 * tmp1)));
  TRACE_POP
}
/*
equation index: 1674
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] - genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1674};
  data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */ = data->localData[0]->realVars[581] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[2] variable */ - ((data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 1675
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] = genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] + genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1675};
  data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */ = data->localData[0]->realVars[582] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[3] variable */ + (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */);
  TRACE_POP
}

void residualFunc1763(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1763};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */ = xloc[0];
  data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */ = xloc[1];
  data->localData[0]->realVars[612] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] variable */ = xloc[2];
  data->localData[0]->realVars[555] /* genericGlider_mass_explicit.actuators.frame_a.t[3] variable */ = xloc[3];
  data->localData[0]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */ = xloc[4];
  data->localData[0]->realVars[515] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] variable */ = xloc[5];
  data->localData[0]->realVars[553] /* genericGlider_mass_explicit.actuators.frame_a.t[1] variable */ = xloc[6];
  data->localData[0]->realVars[610] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] variable */ = xloc[7];
  data->localData[0]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */ = xloc[8];
  data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */ = xloc[9];
  data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */ = xloc[10];
  data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */ = xloc[11];
  data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */ = xloc[12];
  data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */ = xloc[13];
  data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */ = xloc[14];
  data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */ = xloc[15];
  data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */ = xloc[16];
  data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */ = xloc[17];
  data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */ = xloc[18];
  data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */ = xloc[19];
  data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */ = xloc[20];
  data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */ = xloc[21];
  data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */ = xloc[22];
  /* local constraints */
  TestGlider_eqFunction_1623(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1624(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1625(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1626(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1627(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1628(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1629(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1630(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1631(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1632(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1633(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1634(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1635(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1636(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1637(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1638(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1639(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1640(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1641(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1642(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1643(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1644(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1645(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1646(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1647(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1648(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1649(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1650(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1651(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1652(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1653(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1654(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1655(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1656(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1657(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1658(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1659(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1660(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1661(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1662(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1663(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1664(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1665(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1666(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1667(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1668(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1669(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1670(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1671(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1672(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1673(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1674(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1675(data, threadData);
  tmp0 = data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */;
  res[0] = (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * ((2.0) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */))) + (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((2.0) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)))) + (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[562] /* genericGlider_mass_explicit.actuators.prismatic.a variable */ + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) * ((tmp0 * tmp0)))) + data->localData[0]->realVars[32] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ - data->localData[0]->realVars[35] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */;

  res[1] = (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[1349] /* genericGlider_mass_explicit.hull.frame_a.t[2] variable */ - ((data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) * (data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */)) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[2] = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */;

  res[3] = (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) * (data->localData[0]->realVars[1347] /* genericGlider_mass_explicit.hull.frame_a.f[3] variable */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[395] /* genericGlider_mass_explicit.hull.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[396] /* genericGlider_mass_explicit.hull.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[397] /* genericGlider_mass_explicit.hull.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[391] /* genericGlider_mass_explicit.hull.I[1,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[390] /* genericGlider_mass_explicit.hull.I[1,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[389] /* genericGlider_mass_explicit.hull.I[1,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[1348] /* genericGlider_mass_explicit.hull.frame_a.t[1] variable */ - ((data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) * (data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */)) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[392] /* genericGlider_mass_explicit.hull.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[393] /* genericGlider_mass_explicit.hull.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[394] /* genericGlider_mass_explicit.hull.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[4] = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */;

  res[5] = ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[155] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[156] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (-9.81 + data->localData[0]->realVars[157] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) - ((data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */;

  res[6] = (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - data->localData[0]->realVars[609] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[3] variable */ - ((data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */));

  res[7] = (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */) - data->localData[0]->realVars[1106] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] variable */;

  res[8] = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */) - data->localData[0]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */;

  res[9] = (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */) - data->localData[0]->realVars[1107] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] variable */;

  res[10] = (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[166] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[3] variable */ - ((data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */)) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[11] = (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) * (data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[164] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] variable */ - ((data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */)) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[12] = ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[155] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[156] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (-9.81 + data->localData[0]->realVars[157] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) + (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) - ((data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */;

  tmp1 = data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */;
  res[13] = (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * ((2.0) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */))) + (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((2.0) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) + (data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) - ((data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)))) + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[562] /* genericGlider_mass_explicit.actuators.prismatic.a variable */ + (data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) - ((data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) * ((tmp1 * tmp1)))) + data->localData[0]->realVars[33] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ - data->localData[0]->realVars[36] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */;

  res[14] = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (-9.81 + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */) + (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[430] /* genericGlider_mass_explicit.hull.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[428] /* genericGlider_mass_explicit.hull.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[429] /* genericGlider_mass_explicit.hull.r_CM[2] PARAM */))) * (data->simulationInfo->realParameter[424] /* genericGlider_mass_explicit.hull.m PARAM */) - data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */;

  res[15] = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - data->localData[0]->realVars[607] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[1] variable */ - ((data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */));

  res[16] = ((-data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */)) * (data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */) - data->localData[0]->realVars[612] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] variable */ - ((data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */));

  res[17] = ((-data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */)) * (data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */) - data->localData[0]->realVars[611] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] variable */ - ((data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */));

  res[18] = (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) * (data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->simulationInfo->realParameter[57] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[58] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[59] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[1,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) + (data->simulationInfo->realParameter[62] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,3] PARAM */) * (data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) + (data->simulationInfo->realParameter[61] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,2] PARAM */) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (data->simulationInfo->realParameter[60] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[2,1] PARAM */) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) - data->localData[0]->realVars[165] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[2] variable */ - ((data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */) * (data->localData[0]->realVars[160] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] variable */)) - ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * ((data->simulationInfo->realParameter[63] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,1] PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[64] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,2] PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[65] /* genericGlider_mass_explicit.actuators.bodyVariableMass.I[3,3] PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)));

  res[19] = ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[155] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] variable */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[156] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] variable */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (-9.81 + data->localData[0]->realVars[157] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] variable */) + (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) + (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */) - ((data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) + (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * ((data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) * (data->simulationInfo->realParameter[97] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[3] PARAM */) - ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->simulationInfo->realParameter[95] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[1] PARAM */))) - ((data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */) * (data->simulationInfo->realParameter[96] /* genericGlider_mass_explicit.actuators.bodyVariableMass.r_CM[2] PARAM */))) * (data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */) - data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */;

  tmp2 = data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */;
  tmp3 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  res[20] = (-0.04) * ((data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * ((tmp2 * tmp2) + (tmp3 * tmp3))) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * ((-0.04) * (data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */) + (0.04) * ((data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */))) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * ((0.04) * (data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */) + (-0.04) * (((-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */))) + data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */ - data->localData[0]->realVars[34] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */;

  res[21] = (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[577] /* genericGlider_mass_explicit.actuators.prismatic.f variable */) - data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */ - ((data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[578] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[2] variable */)) - ((data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[579] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.f[3] variable */));

  res[22] = ((-data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */)) * (data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */) - data->localData[0]->realVars[610] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] variable */ - ((data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */)) - ((data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */));
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1763(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for genericGlider_mass_explicit.hull.z_a[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1363].attribute /* genericGlider_mass_explicit.hull.z_a[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.z_a[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1364].attribute /* genericGlider_mass_explicit.hull.z_a[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[612].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[612].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[612].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[3] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.frame_a.t[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[555].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[555].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[555].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[3] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.frame_a.t[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[554].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[554].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[554].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[515].attribute /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[515].attribute /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[515].attribute /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_a.t[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.frame_a.t[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[553].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[553].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[553].attribute /* genericGlider_mass_explicit.actuators.frame_a.t[1] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[610].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[610].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[610].attribute /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[1] */.max;
  /* static ls data for genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1105].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1105].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1105].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[160].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[160].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[160].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[3] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.frame_a.f[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1347].attribute /* genericGlider_mass_explicit.hull.frame_a.f[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1347].attribute /* genericGlider_mass_explicit.hull.frame_a.f[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1347].attribute /* genericGlider_mass_explicit.hull.frame_a.f[3] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[159].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[159].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[159].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.frame_a.f[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1346].attribute /* genericGlider_mass_explicit.hull.frame_a.f[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1346].attribute /* genericGlider_mass_explicit.hull.frame_a.f[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1346].attribute /* genericGlider_mass_explicit.hull.frame_a.f[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[158].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[158].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[158].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.frame_a.f[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1345].attribute /* genericGlider_mass_explicit.hull.frame_a.f[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1345].attribute /* genericGlider_mass_explicit.hull.frame_a.f[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1345].attribute /* genericGlider_mass_explicit.hull.frame_a.f[1] */.max;
  /* static ls data for genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1106].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1106].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1106].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[2] */.max;
  /* static ls data for genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1107].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1107].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1107].attribute /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[3] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.body_rolling.a_0[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[188].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[188].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[188].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.body_rolling.a_0[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[189].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[189].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[189].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] */.max;
  /* static ls data for genericGlider_mass_explicit.actuators.body_rolling.a_0[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[187].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[187].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[187].attribute /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.a_0[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1333].attribute /* genericGlider_mass_explicit.hull.a_0[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1333].attribute /* genericGlider_mass_explicit.hull.a_0[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1333].attribute /* genericGlider_mass_explicit.hull.a_0[1] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.a_0[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1334].attribute /* genericGlider_mass_explicit.hull.a_0[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1334].attribute /* genericGlider_mass_explicit.hull.a_0[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1334].attribute /* genericGlider_mass_explicit.hull.a_0[2] */.max;
  /* static ls data for genericGlider_mass_explicit.hull.a_0[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[1335].attribute /* genericGlider_mass_explicit.hull.a_0[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[1335].attribute /* genericGlider_mass_explicit.hull.a_0[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[1335].attribute /* genericGlider_mass_explicit.hull.a_0[3] */.max;
}

OMC_DISABLE_OPT
void setLinearMatrixA1365(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,1365};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setAElement(0, 0, (2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 0, linearSystemData, threadData);
  linearSystemData->setAElement(0, 1, (2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 1, linearSystemData, threadData);
  linearSystemData->setAElement(0, 2, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 2, linearSystemData, threadData);
  linearSystemData->setAElement(0, 3, (-2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 3, linearSystemData, threadData);
  linearSystemData->setAElement(1, 0, (2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 4, linearSystemData, threadData);
  linearSystemData->setAElement(1, 1, (-2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 5, linearSystemData, threadData);
  linearSystemData->setAElement(1, 2, (2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 6, linearSystemData, threadData);
  linearSystemData->setAElement(1, 3, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 7, linearSystemData, threadData);
  linearSystemData->setAElement(2, 0, (2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 8, linearSystemData, threadData);
  linearSystemData->setAElement(2, 1, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 9, linearSystemData, threadData);
  linearSystemData->setAElement(2, 2, (-2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 10, linearSystemData, threadData);
  linearSystemData->setAElement(2, 3, (2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 11, linearSystemData, threadData);
  linearSystemData->setAElement(3, 0, (-2.0) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */), 12, linearSystemData, threadData);
  linearSystemData->setAElement(3, 1, (-2.0) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */), 13, linearSystemData, threadData);
  linearSystemData->setAElement(3, 2, (-2.0) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */), 14, linearSystemData, threadData);
  linearSystemData->setAElement(3, 3, (-2.0) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */), 15, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void setLinearVectorb1365(void *inData, threadData_t *threadData, void *systemData)
{
  const int equationIndexes[2] = {1,1365};
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  linearSystemData->setBElement(0, (-data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */), linearSystemData, threadData);
  linearSystemData->setBElement(1, (-data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */), linearSystemData, threadData);
  linearSystemData->setBElement(2, (-data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */), linearSystemData, threadData);
  linearSystemData->setBElement(3, 0.0, linearSystemData, threadData);
}
OMC_DISABLE_OPT
void initializeStaticLSData1365(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[41].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[41].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[41].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) */.max;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[40].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[40].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[40].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) */.max;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[38].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[38].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[38].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) */.max;
  /* static ls data for der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[39].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[39].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[39].attribute /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void TestGlider_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[5].equationIndex = 4916;
  linearSystemData[5].size = 18;
  linearSystemData[5].nnz = 0;
  linearSystemData[5].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[5].residualFunc = residualFunc4916;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].analyticalJacobianColumn = TestGlider_functionJacLSJac70_column;
  linearSystemData[5].initialAnalyticalJacobian = TestGlider_initialAnalyticJacobianLSJac70;
  linearSystemData[5].jacobianIndex = 5 /*jacInx*/;
  linearSystemData[5].setA = NULL;  //setLinearMatrixA4916;
  linearSystemData[5].setb = NULL;  //setLinearVectorb4916;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData4916;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[4].equationIndex = 4566;
  linearSystemData[4].size = 4;
  linearSystemData[4].nnz = 16;
  linearSystemData[4].method = 0;   /* No symbolic Jacobian available */
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].setA = setLinearMatrixA4566;
  linearSystemData[4].setb = setLinearVectorb4566;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData4566;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[3].equationIndex = 4004;
  linearSystemData[3].size = 23;
  linearSystemData[3].nnz = 0;
  linearSystemData[3].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[3].residualFunc = residualFunc4004;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].analyticalJacobianColumn = TestGlider_functionJacLSJac68_column;
  linearSystemData[3].initialAnalyticalJacobian = TestGlider_initialAnalyticJacobianLSJac68;
  linearSystemData[3].jacobianIndex = 3 /*jacInx*/;
  linearSystemData[3].setA = NULL;  //setLinearMatrixA4004;
  linearSystemData[3].setb = NULL;  //setLinearVectorb4004;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData4004;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[2].equationIndex = 3606;
  linearSystemData[2].size = 4;
  linearSystemData[2].nnz = 16;
  linearSystemData[2].method = 0;   /* No symbolic Jacobian available */
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].setA = setLinearMatrixA3606;
  linearSystemData[2].setb = setLinearVectorb3606;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData3606;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 1763;
  linearSystemData[1].size = 23;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc1763;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = TestGlider_functionJacLSJac66_column;
  linearSystemData[1].initialAnalyticalJacobian = TestGlider_initialAnalyticJacobianLSJac66;
  linearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA1763;
  linearSystemData[1].setb = NULL;  //setLinearVectorb1763;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData1763;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: nLinearSystems mismatch!");
  linearSystemData[0].equationIndex = 1365;
  linearSystemData[0].size = 4;
  linearSystemData[0].nnz = 16;
  linearSystemData[0].method = 0;   /* No symbolic Jacobian available */
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].setA = setLinearMatrixA1365;
  linearSystemData[0].setb = setLinearVectorb1365;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData1365;
}

#if defined(__cplusplus)
}
#endif

