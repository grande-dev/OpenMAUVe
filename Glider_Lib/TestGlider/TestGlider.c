/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TestGlider_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation TestGlider_performSimulation
#define prefixedName_updateContinuousSystem TestGlider_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation TestGlider_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TestGlider_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestGlider_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestGlider_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestGlider_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestGlider_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TestGlider_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestGlider_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestGlider_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 4480
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[1].length = 1.414213562373095 * abs(genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1])
*/
void TestGlider_eqFunction_4480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4480};
  data->localData[0]->realVars[282] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[1].length variable */ = (1.414213562373095) * (fabs(data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */));
  TRACE_POP
}
/*
equation index: 4481
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].length = 1.414213562373095 * abs(genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1])
*/
void TestGlider_eqFunction_4481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4481};
  data->localData[0]->realVars[283] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].length variable */ = (1.414213562373095) * (fabs(data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */));
  TRACE_POP
}
/*
equation index: 4482
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[1].length = abs(genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1])
*/
void TestGlider_eqFunction_4482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4482};
  data->localData[0]->realVars[459] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[1].length variable */ = fabs(data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4483
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].length = abs(genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1])
*/
void TestGlider_eqFunction_4483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4483};
  data->localData[0]->realVars[460] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].length variable */ = fabs(data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4484
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].length = 1.414213562373095 * abs(genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1])
*/
void TestGlider_eqFunction_4484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4484};
  data->localData[0]->realVars[461] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].length variable */ = (1.414213562373095) * (fabs(data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */));
  TRACE_POP
}
/*
equation index: 4485
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,2] = 0.75 * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4485};
  data->localData[0]->realVars[397] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,2] variable */ = (0.75) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4486
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,1] = 0.5 * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4486};
  data->localData[0]->realVars[396] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,1] variable */ = (0.5) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4487
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] = 1.5 * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4487};
  data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */ = (1.5) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4488
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[1].length = sqrt(genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] ^ 2.0 + genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] ^ 2.0)
*/
void TestGlider_eqFunction_4488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4488};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */;
  tmp1 = data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */;
  data->localData[0]->realVars[369] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[1].length variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 4489
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].length = sqrt(genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,1] ^ 2.0 + (genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,2] - genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2]) ^ 2.0)
*/
void TestGlider_eqFunction_4489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4489};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[396] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,1] variable */;
  tmp3 = data->localData[0]->realVars[397] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */;
  data->localData[0]->realVars[370] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].length variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 4490
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[1] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u
*/
void TestGlider_eqFunction_4490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4490};
  data->localData[0]->realVars[42] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[1]) DUMMY_DER */ = data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */;
  TRACE_POP
}
/*
equation index: 4491
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[2] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u
*/
void TestGlider_eqFunction_4491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4491};
  data->localData[0]->realVars[43] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[2]) DUMMY_DER */ = data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */;
  TRACE_POP
}
/*
equation index: 4492
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[3] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void TestGlider_eqFunction_4492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4492};
  data->localData[0]->realVars[44] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[3]) DUMMY_DER */ = data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */;
  TRACE_POP
}
/*
equation index: 4493
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[3] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void TestGlider_eqFunction_4493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4493};
  data->localData[0]->realVars[182] /* genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[3] DUMMY_STATE */ = data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */;
  TRACE_POP
}
/*
equation index: 4494
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[2] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u
*/
void TestGlider_eqFunction_4494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4494};
  data->localData[0]->realVars[181] /* genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[2] DUMMY_STATE */ = data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */;
  TRACE_POP
}
/*
equation index: 4495
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[1] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u
*/
void TestGlider_eqFunction_4495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4495};
  data->localData[0]->realVars[180] /* genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[1] DUMMY_STATE */ = data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */;
  TRACE_POP
}
/*
equation index: 4496
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u
*/
void TestGlider_eqFunction_4496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4496};
  data->localData[0]->realVars[163] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[3] DUMMY_STATE */ = data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */;
  TRACE_POP
}
/*
equation index: 4497
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u
*/
void TestGlider_eqFunction_4497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4497};
  data->localData[0]->realVars[162] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[2] DUMMY_STATE */ = data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */;
  TRACE_POP
}
/*
equation index: 4498
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u
*/
void TestGlider_eqFunction_4498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4498};
  data->localData[0]->realVars[161] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.r_0[1] DUMMY_STATE */ = data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */;
  TRACE_POP
}
/*
equation index: 4499
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.box.length = if noEvent(abs(genericGlider_mass_explicit.actuators.position_slidingMass.s) > 1e-06) then genericGlider_mass_explicit.actuators.position_slidingMass.s else 1e-06
*/
void TestGlider_eqFunction_4499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4499};
  modelica_boolean tmp4;
  tmp4 = Greater(fabs(data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */),1e-06);
  data->localData[0]->realVars[567] /* genericGlider_mass_explicit.actuators.prismatic.box.length variable */ = (tmp4?data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */:1e-06);
  TRACE_POP
}
/*
equation index: 4500
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.position.phi = genericGlider_mass_explicit.actuators.revolute.w
*/
void TestGlider_eqFunction_4500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4500};
  data->localData[0]->realVars[19] /* der(genericGlider_mass_explicit.actuators.position.phi) STATE_DER */ = data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */;
  TRACE_POP
}
/*
equation index: 4501
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.position_slidingMass.s = genericGlider_mass_explicit.actuators.prismatic.v
*/
void TestGlider_eqFunction_4501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4501};
  data->localData[0]->realVars[20] /* der(genericGlider_mass_explicit.actuators.position_slidingMass.s) STATE_DER */ = data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */;
  TRACE_POP
}
/*
equation index: 4502
type: ARRAY_CALL_ASSIGN

genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({1.0, 0.0, 0.0}, {0.0, 1.0, 0.0})
*/
void TestGlider_eqFunction_4502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4502};
  real_array tmp5;
  real_array_create(&tmp5, ((modelica_real*)&((&data->localData[0]->realVars[268] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT11, _OMC_LIT12), tmp5);
  TRACE_POP
}
/*
equation index: 4503
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[1].lengthDirection[3] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] * (genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,3] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,3])
*/
void TestGlider_eqFunction_4503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4503};
  data->localData[0]->realVars[286] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[1].lengthDirection[3] variable */ = (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */) * (data->localData[0]->realVars[270] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,3] variable */ + data->localData[0]->realVars[273] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,3] variable */);
  TRACE_POP
}
/*
equation index: 4504
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].lengthDirection[3] = (genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,3] - genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,3]) * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4504};
  data->localData[0]->realVars[289] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[270] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,3] variable */ - data->localData[0]->realVars[273] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4505
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[1].lengthDirection[1] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] * (genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,1])
*/
void TestGlider_eqFunction_4505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4505};
  data->localData[0]->realVars[284] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[1].lengthDirection[1] variable */ = (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */) * (data->localData[0]->realVars[268] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] variable */ + data->localData[0]->realVars[271] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,1] variable */);
  TRACE_POP
}
/*
equation index: 4506
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].lengthDirection[1] = (genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] - genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,1]) * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4506};
  data->localData[0]->realVars[287] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[268] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] variable */ - data->localData[0]->realVars[271] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4507
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[1].lengthDirection[2] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] * (genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,2] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,2])
*/
void TestGlider_eqFunction_4507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4507};
  data->localData[0]->realVars[285] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[1].lengthDirection[2] variable */ = (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */) * (data->localData[0]->realVars[269] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,2] variable */ + data->localData[0]->realVars[272] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,2] variable */);
  TRACE_POP
}
/*
equation index: 4508
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].lengthDirection[2] = (genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,2] - genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,2]) * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4508};
  data->localData[0]->realVars[288] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[269] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,2] variable */ - data->localData[0]->realVars[272] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4509
type: ARRAY_CALL_ASSIGN

genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 1.0, 0.0}, {-1.0, 0.0, 0.0})
*/
void TestGlider_eqFunction_4509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4509};
  real_array tmp6;
  real_array_create(&tmp6, ((modelica_real*)&((&data->localData[0]->realVars[355] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT12, _OMC_LIT14), tmp6);
  TRACE_POP
}
/*
equation index: 4510
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[1].lengthDirection[3] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,3] * genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2]
*/
void TestGlider_eqFunction_4510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4510};
  data->localData[0]->realVars[373] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[1].lengthDirection[3] variable */ = (data->localData[0]->realVars[357] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */) + (data->localData[0]->realVars[360] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4511
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].lengthDirection[3] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,3] * (genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,2] - genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2])
*/
void TestGlider_eqFunction_4511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4511};
  data->localData[0]->realVars[376] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[357] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[396] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[360] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[397] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4512
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[1].lengthDirection[2] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,2] * genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2]
*/
void TestGlider_eqFunction_4512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4512};
  data->localData[0]->realVars[372] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[1].lengthDirection[2] variable */ = (data->localData[0]->realVars[356] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */) + (data->localData[0]->realVars[359] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4513
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].lengthDirection[2] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,2] * (genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,2] - genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2])
*/
void TestGlider_eqFunction_4513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4513};
  data->localData[0]->realVars[375] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[356] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[396] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[359] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[397] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4514
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[1].lengthDirection[1] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,1] * genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2]
*/
void TestGlider_eqFunction_4514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4514};
  data->localData[0]->realVars[371] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[1].lengthDirection[1] variable */ = (data->localData[0]->realVars[355] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */) + (data->localData[0]->realVars[358] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4515
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].lengthDirection[1] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,1] * (genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,2] - genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2])
*/
void TestGlider_eqFunction_4515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4515};
  data->localData[0]->realVars[374] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[355] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[396] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[358] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[397] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4516
type: ARRAY_CALL_ASSIGN

genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 0.0, 1.0}, {0.0, 1.0, 0.0})
*/
void TestGlider_eqFunction_4516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4516};
  real_array tmp7;
  real_array_create(&tmp7, ((modelica_real*)&((&data->localData[0]->realVars[444] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT13, _OMC_LIT12), tmp7);
  TRACE_POP
}
/*
equation index: 4517
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[1] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4517};
  data->localData[0]->realVars[465] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[444] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4518
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[1].lengthDirection[1] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[1]
*/
void TestGlider_eqFunction_4518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4518};
  data->localData[0]->realVars[462] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[1].lengthDirection[1] variable */ = data->localData[0]->realVars[465] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[1] variable */;
  TRACE_POP
}
/*
equation index: 4519
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].lengthDirection[1] = (genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] - genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,1]) * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4519};
  data->localData[0]->realVars[468] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].lengthDirection[1] variable */ = (data->localData[0]->realVars[444] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] variable */ - data->localData[0]->realVars[447] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4520
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[3] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4520};
  data->localData[0]->realVars[467] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[446] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4521
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[1].lengthDirection[3] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[3]
*/
void TestGlider_eqFunction_4521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4521};
  data->localData[0]->realVars[464] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[1].lengthDirection[3] variable */ = data->localData[0]->realVars[467] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[3] variable */;
  TRACE_POP
}
/*
equation index: 4522
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[2] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4522};
  data->localData[0]->realVars[466] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[445] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4523
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[1].lengthDirection[2] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[2]
*/
void TestGlider_eqFunction_4523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4523};
  data->localData[0]->realVars[463] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[1].lengthDirection[2] variable */ = data->localData[0]->realVars[466] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].lengthDirection[2] variable */;
  TRACE_POP
}
/*
equation index: 4524
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].lengthDirection[2] = (genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,2] - genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,2]) * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4524};
  data->localData[0]->realVars[469] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].lengthDirection[2] variable */ = (data->localData[0]->realVars[445] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,2] variable */ - data->localData[0]->realVars[448] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4525
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].lengthDirection[3] = (genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,3] - genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,3]) * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4525};
  data->localData[0]->realVars[470] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].lengthDirection[3] variable */ = (data->localData[0]->realVars[446] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,3] variable */ - data->localData[0]->realVars[449] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4526
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length = sqrt(genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u ^ 2.0)
*/
void TestGlider_eqFunction_4526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4526};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  tmp8 = data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */;
  tmp9 = data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */;
  tmp10 = data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */;
  data->localData[0]->realVars[882] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length variable */ = sqrt((tmp8 * tmp8) + (tmp9 * tmp9) + (tmp10 * tmp10));
  TRACE_POP
}
/*
equation index: 4527
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[1] = if noEvent(genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length < 1e-10) then 1.0 else genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u / genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length
*/
void TestGlider_eqFunction_4527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4527};
  modelica_boolean tmp11;
  tmp11 = Less(data->localData[0]->realVars[882] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length variable */,1e-10);
  data->localData[0]->realVars[892] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[1] variable */ = (tmp11?1.0:DIVISION_SIM(data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */,data->localData[0]->realVars[882] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length variable */,"genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4528
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[2] = if noEvent(genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length < 1e-10) then 0.0 else genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u / genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length
*/
void TestGlider_eqFunction_4528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4528};
  modelica_boolean tmp12;
  tmp12 = Less(data->localData[0]->realVars[882] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length variable */,1e-10);
  data->localData[0]->realVars[893] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[2] variable */ = (tmp12?0.0:DIVISION_SIM(data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */,data->localData[0]->realVars[882] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length variable */,"genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4529
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[3] = if noEvent(genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length < 1e-10) then 0.0 else genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u / genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length
*/
void TestGlider_eqFunction_4529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4529};
  modelica_boolean tmp13;
  tmp13 = Less(data->localData[0]->realVars[882] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length variable */,1e-10);
  data->localData[0]->realVars[894] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[3] variable */ = (tmp13?0.0:DIVISION_SIM(data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */,data->localData[0]->realVars[882] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length variable */,"genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4530
type: SIMPLE_ASSIGN
$cse5 = min(genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length, 4.0 * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4530};
  data->localData[0]->realVars[86] /* $cse5 variable */ = fmin(data->localData[0]->realVars[882] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4531
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowHead.length = max(0.0, $cse5)
*/
void TestGlider_eqFunction_4531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4531};
  data->localData[0]->realVars[867] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowHead.length variable */ = fmax(0.0,data->localData[0]->realVars[86] /* $cse5 variable */);
  TRACE_POP
}
/*
equation index: 4532
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowLength = max(0.0, genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length + (-4.0) * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4532};
  data->localData[0]->realVars[877] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[882] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.length variable */ + (-4.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4533
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[1] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowLength
*/
void TestGlider_eqFunction_4533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4533};
  data->localData[0]->realVars[868] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[1] variable */ = (data->localData[0]->realVars[892] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[877] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4534
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[2] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowLength
*/
void TestGlider_eqFunction_4534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4534};
  data->localData[0]->realVars[869] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[2] variable */ = (data->localData[0]->realVars[893] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[877] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4535
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[3] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowLength
*/
void TestGlider_eqFunction_4535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4535};
  data->localData[0]->realVars[870] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[3] variable */ = (data->localData[0]->realVars[894] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[877] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4536
type: SIMPLE_ASSIGN
$whenCondition1 = sample(1, genericGlider_mass_explicit.rOS_Sampler.startTime, genericGlider_mass_explicit.rOS_Sampler.samplePeriod)
*/
void TestGlider_eqFunction_4536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4536};
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = data->simulationInfo->samples[0];
  TRACE_POP
}
/*
equation index: 4537
type: WHEN

when {$whenCondition1} then
  genericGlider_mass_explicit.rOS_Sampler.firstTrigger = time <= genericGlider_mass_explicit.rOS_Sampler.startTime + 0.5 * genericGlider_mass_explicit.rOS_Sampler.samplePeriod;
end when;
*/
void TestGlider_eqFunction_4537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4537};
  modelica_boolean tmp14;
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    tmp14 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[483] /* genericGlider_mass_explicit.rOS_Sampler.startTime PARAM */ + (0.5) * (data->simulationInfo->realParameter[482] /* genericGlider_mass_explicit.rOS_Sampler.samplePeriod PARAM */));
    data->localData[0]->booleanVars[1] /* genericGlider_mass_explicit.rOS_Sampler.firstTrigger DISCRETE */ = tmp14;
  }
  TRACE_POP
}
/*
equation index: 4538
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.rOS_Sampler.sampleTrigger = $whenCondition1
*/
void TestGlider_eqFunction_4538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4538};
  data->localData[0]->booleanVars[2] /* genericGlider_mass_explicit.rOS_Sampler.sampleTrigger DISCRETE */ = data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */;
  TRACE_POP
}
/*
equation index: 4539
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u
*/
void TestGlider_eqFunction_4539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4539};
  data->localData[0]->realVars[29] /* der(genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u) STATE_DER */ = data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */;
  TRACE_POP
}
/*
equation index: 4540
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u
*/
void TestGlider_eqFunction_4540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4540};
  data->localData[0]->realVars[30] /* der(genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u) STATE_DER */ = data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */;
  TRACE_POP
}
/*
equation index: 4541
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void TestGlider_eqFunction_4541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4541};
  data->localData[0]->realVars[31] /* der(genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u) STATE_DER */ = data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */;
  TRACE_POP
}
void TestGlider_eqFunction_4545(DATA*, threadData_t*);
void TestGlider_eqFunction_4544(DATA*, threadData_t*);
void TestGlider_eqFunction_4543(DATA*, threadData_t*);
void TestGlider_eqFunction_4542(DATA*, threadData_t*);
/*
equation index: 4550
indexNonlinear: 2
type: NONLINEAR

vars: {genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2], genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1], genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4], genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]}
eqns: {4545, 4544, 4543, 4542}
*/
void TestGlider_eqFunction_4550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4550};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 4550 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,4550};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 4550 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  TRACE_POP
}
/*
equation index: 4551
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[3,3] = -1.0 + 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] ^ 2.0 + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void TestGlider_eqFunction_4551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4551};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 4552
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4552};
  data->localData[0]->realVars[518] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3] DUMMY_STATE */ = data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (0.04) * (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4553
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[1,1] = -1.0 + 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] ^ 2.0 + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void TestGlider_eqFunction_4553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4553};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  tmp3 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */ = -1.0 + (2.0) * ((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 4554
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[3,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_4554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4554};
  data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) - ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 4555
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4555};
  data->localData[0]->realVars[517] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2] DUMMY_STATE */ = data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (0.04) * (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4556
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[3,1] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_4556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4556};
  data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4557
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4557};
  data->localData[0]->realVars[516] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1] DUMMY_STATE */ = data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (0.04) * (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4558
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.frame_b.f[3] = (-genericGlider_mass_explicit.hull.frame_a.R.T[3,2]) * genericGlider_mass_explicit.buoyancyForce.const_buoyancy[2].k - genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.buoyancyForce.const_buoyancy[3].k - genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.buoyancyForce.const_buoyancy[1].k
*/
void TestGlider_eqFunction_4558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4558};
  data->localData[0]->realVars[1327] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[3] variable */ = ((-data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */)) * (data->simulationInfo->realParameter[365] /* genericGlider_mass_explicit.buoyancyForce.const_buoyancy[2].k PARAM */) - ((data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->simulationInfo->realParameter[366] /* genericGlider_mass_explicit.buoyancyForce.const_buoyancy[3].k PARAM */)) - ((data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->simulationInfo->realParameter[364] /* genericGlider_mass_explicit.buoyancyForce.const_buoyancy[1].k PARAM */));
  TRACE_POP
}
/*
equation index: 4559
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3] = genericGlider_mass_explicit.buoyancyForce.frame_b.f[3] / genericGlider_mass_explicit.buoyancyForce.force.N_to_m
*/
void TestGlider_eqFunction_4559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4559};
  data->localData[0]->realVars[1303] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3] variable */ = DIVISION_SIM(data->localData[0]->realVars[1327] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[3] variable */,data->simulationInfo->realParameter[370] /* genericGlider_mass_explicit.buoyancyForce.force.N_to_m PARAM */,"genericGlider_mass_explicit.buoyancyForce.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4560
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void TestGlider_eqFunction_4560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4560};
  data->localData[0]->realVars[999] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[3] variable */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4561
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.absolutePosition.r[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u
*/
void TestGlider_eqFunction_4561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4561};
  data->localData[0]->realVars[129] /* genericGlider_mass_explicit.absolutePosition.r[3] variable */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */);
  TRACE_POP
}
/*
equation index: 4562
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[3] = genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void TestGlider_eqFunction_4562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4562};
  data->localData[0]->realVars[1668] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[3] variable */ = (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4563
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[2,1] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_4563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4563};
  data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) - ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 4564
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.w_a[2] + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.w_a[1]
*/
void TestGlider_eqFunction_4564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4564};
  data->localData[0]->realVars[57] /* der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1]) DUMMY_DER */ = data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */ + (0.04) * ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + (-0.04) * ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */));
  TRACE_POP
}
/*
equation index: 4565
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].u = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hull.w_a[3]
*/
void TestGlider_eqFunction_4565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4565};
  data->localData[0]->realVars[895] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].u DUMMY_STATE */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */);
  TRACE_POP
}
/*
equation index: 4566
type: LINEAR

<var>$DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]</var>
<var>$DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]</var>
<var>$DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]</var>
<var>$DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]</var>
<row>
  <cell>-genericGlider_mass_explicit.hull.w_a[2]</cell>
  <cell>-genericGlider_mass_explicit.hull.w_a[3]</cell>
  <cell>0.0</cell>
  <cell>-genericGlider_mass_explicit.hull.w_a[1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>2.0 * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]</residual>
  </cell><cell row="0" col="1">
    <residual>(-2.0) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]</residual>
  </cell><cell row="0" col="2">
    <residual>(-2.0) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]</residual>
  </cell><cell row="0" col="3">
    <residual>2.0 * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]</residual>
  </cell><cell row="1" col="0">
    <residual>2.0 * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]</residual>
  </cell><cell row="1" col="1">
    <residual>(-2.0) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]</residual>
  </cell><cell row="1" col="2">
    <residual>2.0 * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]</residual>
  </cell><cell row="1" col="3">
    <residual>(-2.0) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]</residual>
  </cell><cell row="2" col="0">
    <residual>(-2.0) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]</residual>
  </cell><cell row="2" col="1">
    <residual>(-2.0) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]</residual>
  </cell><cell row="2" col="2">
    <residual>(-2.0) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]</residual>
  </cell><cell row="2" col="3">
    <residual>(-2.0) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]</residual>
  </cell><cell row="3" col="0">
    <residual>2.0 * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]</residual>
  </cell><cell row="3" col="1">
    <residual>2.0 * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]</residual>
  </cell><cell row="3" col="2">
    <residual>(-2.0) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]</residual>
  </cell><cell row="3" col="3">
    <residual>(-2.0) * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void TestGlider_eqFunction_4566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4566};
  /* Linear equation system */
  int retValue;
  double aux_x[4] = { data->localData[1]->realVars[41] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) DUMMY_DER */,data->localData[1]->realVars[40] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) DUMMY_DER */,data->localData[1]->realVars[39] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) DUMMY_DER */,data->localData[1]->realVars[38] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 4566 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,4566};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 4566 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[41] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) DUMMY_DER */ = aux_x[0];
  data->localData[0]->realVars[40] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) DUMMY_DER */ = aux_x[1];
  data->localData[0]->realVars[39] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) DUMMY_DER */ = aux_x[2];
  data->localData[0]->realVars[38] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) DUMMY_DER */ = aux_x[3];

  TRACE_POP
}
/*
equation index: 4567
type: SIMPLE_ASSIGN
$DER.$STATESET1.x[1] = (*Real*)($STATESET1.A[1,1]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] + (*Real*)($STATESET1.A[1,2]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] + (*Real*)($STATESET1.A[1,3]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + (*Real*)($STATESET1.A[1,4]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]
*/
void TestGlider_eqFunction_4567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4567};
  data->localData[0]->realVars[16] /* der($STATESET1.x[1]) STATE_DER */ = (((modelica_real)data->localData[0]->integerVars[0] /* $STATESET1.A[1,1] variable */)) * (data->localData[0]->realVars[41] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[1] /* $STATESET1.A[1,2] variable */)) * (data->localData[0]->realVars[40] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[2] /* $STATESET1.A[1,3] variable */)) * (data->localData[0]->realVars[39] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[3] /* $STATESET1.A[1,4] variable */)) * (data->localData[0]->realVars[38] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 4568
type: SIMPLE_ASSIGN
$DER.$STATESET1.x[2] = (*Real*)($STATESET1.A[2,1]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] + (*Real*)($STATESET1.A[2,2]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] + (*Real*)($STATESET1.A[2,3]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + (*Real*)($STATESET1.A[2,4]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]
*/
void TestGlider_eqFunction_4568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4568};
  data->localData[0]->realVars[17] /* der($STATESET1.x[2]) STATE_DER */ = (((modelica_real)data->localData[0]->integerVars[4] /* $STATESET1.A[2,1] variable */)) * (data->localData[0]->realVars[41] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[5] /* $STATESET1.A[2,2] variable */)) * (data->localData[0]->realVars[40] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[6] /* $STATESET1.A[2,3] variable */)) * (data->localData[0]->realVars[39] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[7] /* $STATESET1.A[2,4] variable */)) * (data->localData[0]->realVars[38] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 4569
type: SIMPLE_ASSIGN
$DER.$STATESET1.x[3] = (*Real*)($STATESET1.A[3,1]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] + (*Real*)($STATESET1.A[3,2]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] + (*Real*)($STATESET1.A[3,3]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + (*Real*)($STATESET1.A[3,4]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]
*/
void TestGlider_eqFunction_4569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4569};
  data->localData[0]->realVars[18] /* der($STATESET1.x[3]) STATE_DER */ = (((modelica_real)data->localData[0]->integerVars[8] /* $STATESET1.A[3,1] variable */)) * (data->localData[0]->realVars[41] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[9] /* $STATESET1.A[3,2] variable */)) * (data->localData[0]->realVars[40] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[10] /* $STATESET1.A[3,3] variable */)) * (data->localData[0]->realVars[39] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[11] /* $STATESET1.A[3,4] variable */)) * (data->localData[0]->realVars[38] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 4570
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.hull.frame_a.R.T[1,1] = 4.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_4570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4570};
  data->localData[0]->realVars[78] /* der(genericGlider_mass_explicit.hull.frame_a.R.T[1,1]) DUMMY_DER */ = (4.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[38] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) DUMMY_DER */) + (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (data->localData[0]->realVars[41] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4571
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.hull.frame_a.R.T[3,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] - $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_4571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4571};
  data->localData[0]->realVars[81] /* der(genericGlider_mass_explicit.hull.frame_a.R.T[3,2]) DUMMY_DER */ = (2.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[39] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) DUMMY_DER */) + (data->localData[0]->realVars[40] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) DUMMY_DER */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + ((-data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */)) * (data->localData[0]->realVars[41] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) DUMMY_DER */) - ((data->localData[0]->realVars[38] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) DUMMY_DER */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 4572
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.hull.frame_a.R.T[3,1] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] + $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] + $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_4572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4572};
  data->localData[0]->realVars[80] /* der(genericGlider_mass_explicit.hull.frame_a.R.T[3,1]) DUMMY_DER */ = (2.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[38] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) DUMMY_DER */) + (data->localData[0]->realVars[40] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) DUMMY_DER */) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[41] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) DUMMY_DER */) + (data->localData[0]->realVars[39] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) DUMMY_DER */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4573
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[2,3] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_4573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4573};
  data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4574
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[2,2] = -1.0 + 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] ^ 2.0 + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void TestGlider_eqFunction_4574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4574};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp5 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */ = -1.0 + (2.0) * ((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 4575
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.frame_b.f[2] = (-genericGlider_mass_explicit.hull.frame_a.R.T[2,2]) * genericGlider_mass_explicit.buoyancyForce.const_buoyancy[2].k - genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.buoyancyForce.const_buoyancy[3].k - genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.buoyancyForce.const_buoyancy[1].k
*/
void TestGlider_eqFunction_4575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4575};
  data->localData[0]->realVars[1326] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[2] variable */ = ((-data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */)) * (data->simulationInfo->realParameter[365] /* genericGlider_mass_explicit.buoyancyForce.const_buoyancy[2].k PARAM */) - ((data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->simulationInfo->realParameter[366] /* genericGlider_mass_explicit.buoyancyForce.const_buoyancy[3].k PARAM */)) - ((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->simulationInfo->realParameter[364] /* genericGlider_mass_explicit.buoyancyForce.const_buoyancy[1].k PARAM */));
  TRACE_POP
}
/*
equation index: 4576
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] = genericGlider_mass_explicit.buoyancyForce.frame_b.f[2] / genericGlider_mass_explicit.buoyancyForce.force.N_to_m
*/
void TestGlider_eqFunction_4576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4576};
  data->localData[0]->realVars[1302] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[1326] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[2] variable */,data->simulationInfo->realParameter[370] /* genericGlider_mass_explicit.buoyancyForce.force.N_to_m PARAM */,"genericGlider_mass_explicit.buoyancyForce.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4577
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void TestGlider_eqFunction_4577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4577};
  data->localData[0]->realVars[998] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[2] variable */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4578
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.absolutePosition.r[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u
*/
void TestGlider_eqFunction_4578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4578};
  data->localData[0]->realVars[128] /* genericGlider_mass_explicit.absolutePosition.r[2] variable */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */);
  TRACE_POP
}
/*
equation index: 4579
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[2] = genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void TestGlider_eqFunction_4579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4579};
  data->localData[0]->realVars[1667] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[2] variable */ = (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4580
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.hull.frame_a.R.T[2,1] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] + $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] + (-genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) * $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] - $DER.genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_4580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4580};
  data->localData[0]->realVars[79] /* der(genericGlider_mass_explicit.hull.frame_a.R.T[2,1]) DUMMY_DER */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[38] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1]) DUMMY_DER */) + (data->localData[0]->realVars[39] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2]) DUMMY_DER */) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + ((-data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */)) * (data->localData[0]->realVars[41] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4]) DUMMY_DER */) - ((data->localData[0]->realVars[40] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3]) DUMMY_DER */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 4581
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[1,3] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_4581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4581};
  data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) - ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 4582
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].u = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hull.w_a[3]
*/
void TestGlider_eqFunction_4582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4582};
  data->localData[0]->realVars[897] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].u DUMMY_STATE */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */);
  TRACE_POP
}
/*
equation index: 4583
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hull.w_a[2] + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hull.w_a[1]
*/
void TestGlider_eqFunction_4583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4583};
  data->localData[0]->realVars[59] /* der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3]) DUMMY_DER */ = data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */ + (0.04) * ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + (-0.04) * ((data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */));
  TRACE_POP
}
/*
equation index: 4584
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[1,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_4584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4584};
  data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4585
type: ARRAY_CALL_ASSIGN

genericGlider_mass_explicit.absoluteAngles.angles = Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(Modelica.Mechanics.MultiBody.Frames.Orientation(genericGlider_mass_explicit.hull.frame_a.R.T, genericGlider_mass_explicit.hull.w_a), {3, 2, 1}, genericGlider_mass_explicit.absoluteAngles.guessAngle1)
*/
void TestGlider_eqFunction_4585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4585};
  real_array tmp6;
  real_array tmp7;
  real_array tmp8;
  real_array_create(&tmp6, ((modelica_real*)&((&data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_create(&tmp7, ((modelica_real*)&((&data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)[calc_base_index_dims_subs(1, (_index_t)3, ((modelica_integer) 1))])), 1, (_index_t)3);
  real_array_create(&tmp8, ((modelica_real*)&((&data->localData[0]->realVars[106] /* genericGlider_mass_explicit.absoluteAngles.angles[1] variable */)[calc_base_index_dims_subs(1, (_index_t)3, ((modelica_integer) 1))])), 1, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData, omc_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData, tmp6, tmp7), _OMC_LIT15, data->simulationInfo->realParameter[53] /* genericGlider_mass_explicit.absoluteAngles.guessAngle1 PARAM */), tmp8);
  TRACE_POP
}
/*
equation index: 4586
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.frame_b.f[1] = (-genericGlider_mass_explicit.hull.frame_a.R.T[1,2]) * genericGlider_mass_explicit.buoyancyForce.const_buoyancy[2].k - genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.buoyancyForce.const_buoyancy[3].k - genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.buoyancyForce.const_buoyancy[1].k
*/
void TestGlider_eqFunction_4586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4586};
  data->localData[0]->realVars[1325] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[1] variable */ = ((-data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */)) * (data->simulationInfo->realParameter[365] /* genericGlider_mass_explicit.buoyancyForce.const_buoyancy[2].k PARAM */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->simulationInfo->realParameter[366] /* genericGlider_mass_explicit.buoyancyForce.const_buoyancy[3].k PARAM */)) - ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->simulationInfo->realParameter[364] /* genericGlider_mass_explicit.buoyancyForce.const_buoyancy[1].k PARAM */));
  TRACE_POP
}
/*
equation index: 4587
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] = genericGlider_mass_explicit.buoyancyForce.frame_b.f[1] / genericGlider_mass_explicit.buoyancyForce.force.N_to_m
*/
void TestGlider_eqFunction_4587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4587};
  data->localData[0]->realVars[1301] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1325] /* genericGlider_mass_explicit.buoyancyForce.frame_b.f[1] variable */,data->simulationInfo->realParameter[370] /* genericGlider_mass_explicit.buoyancyForce.force.N_to_m PARAM */,"genericGlider_mass_explicit.buoyancyForce.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4588
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.length = sqrt(genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] ^ 2.0 + genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] ^ 2.0 + genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3] ^ 2.0)
*/
void TestGlider_eqFunction_4588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4588};
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  tmp9 = data->localData[0]->realVars[1301] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] variable */;
  tmp10 = data->localData[0]->realVars[1302] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] variable */;
  tmp11 = data->localData[0]->realVars[1303] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3] variable */;
  data->localData[0]->realVars[1285] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.length variable */ = sqrt((tmp9 * tmp9) + (tmp10 * tmp10) + (tmp11 * tmp11));
  TRACE_POP
}
/*
equation index: 4589
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[2] = if noEvent(genericGlider_mass_explicit.buoyancyForce.force.arrow.length < 1e-10) then 0.0 else (-genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2]) / genericGlider_mass_explicit.buoyancyForce.force.arrow.length
*/
void TestGlider_eqFunction_4589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4589};
  modelica_boolean tmp12;
  tmp12 = Less(data->localData[0]->realVars[1285] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1283] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[2] variable */ = (tmp12?0.0:DIVISION_SIM((-data->localData[0]->realVars[1302] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] variable */),data->localData[0]->realVars[1285] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.length variable */,"genericGlider_mass_explicit.buoyancyForce.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4590
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[3] = if noEvent(genericGlider_mass_explicit.buoyancyForce.force.arrow.length < 1e-10) then 0.0 else (-genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3]) / genericGlider_mass_explicit.buoyancyForce.force.arrow.length
*/
void TestGlider_eqFunction_4590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4590};
  modelica_boolean tmp13;
  tmp13 = Less(data->localData[0]->realVars[1285] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1284] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[3] variable */ = (tmp13?0.0:DIVISION_SIM((-data->localData[0]->realVars[1303] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3] variable */),data->localData[0]->realVars[1285] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.length variable */,"genericGlider_mass_explicit.buoyancyForce.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4591
type: SIMPLE_ASSIGN
$cse3 = min(genericGlider_mass_explicit.buoyancyForce.force.arrow.length, 4.0 * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4591};
  data->localData[0]->realVars[84] /* $cse3 variable */ = fmin(data->localData[0]->realVars[1285] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4592
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowHead.length = max(0.0, $cse3)
*/
void TestGlider_eqFunction_4592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4592};
  data->localData[0]->realVars[1267] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowHead.length variable */ = fmax(0.0,data->localData[0]->realVars[84] /* $cse3 variable */);
  TRACE_POP
}
/*
equation index: 4593
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowLength = max(0.0, genericGlider_mass_explicit.buoyancyForce.force.arrow.length + (-4.0) * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4593};
  data->localData[0]->realVars[1277] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[1285] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.length variable */ + (-4.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4594
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[1] = if noEvent(genericGlider_mass_explicit.buoyancyForce.force.arrow.length < 1e-10) then 1.0 else (-genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1]) / genericGlider_mass_explicit.buoyancyForce.force.arrow.length
*/
void TestGlider_eqFunction_4594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4594};
  modelica_boolean tmp14;
  tmp14 = Less(data->localData[0]->realVars[1285] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1282] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[1] variable */ = (tmp14?1.0:DIVISION_SIM((-data->localData[0]->realVars[1301] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] variable */),data->localData[0]->realVars[1285] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.length variable */,"genericGlider_mass_explicit.buoyancyForce.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4595
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[3]
*/
void TestGlider_eqFunction_4595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4595};
  data->localData[0]->realVars[1289] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[1] variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1282] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1283] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1284] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4596
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[3] = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[3]
*/
void TestGlider_eqFunction_4596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4596};
  data->localData[0]->realVars[1291] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[3] variable */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1282] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1283] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1284] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4597
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3]
*/
void TestGlider_eqFunction_4597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4597};
  data->localData[0]->realVars[1286] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[1] variable */ = data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1301] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1302] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1303] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4598
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowHead.r[1] = genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[1] + genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[1] * genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowLength
*/
void TestGlider_eqFunction_4598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4598};
  data->localData[0]->realVars[1268] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowHead.r[1] variable */ = data->localData[0]->realVars[1286] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1289] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1277] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4599
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3]
*/
void TestGlider_eqFunction_4599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4599};
  data->localData[0]->realVars[1288] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[3] variable */ = data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1301] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1302] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1303] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4600
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowHead.r[3] = genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[3] + genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[3] * genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowLength
*/
void TestGlider_eqFunction_4600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4600};
  data->localData[0]->realVars[1270] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowHead.r[3] variable */ = data->localData[0]->realVars[1288] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1291] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1277] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4601
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[2] = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[3]
*/
void TestGlider_eqFunction_4601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4601};
  data->localData[0]->realVars[1290] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[2] variable */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1282] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1283] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1284] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4602
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3]
*/
void TestGlider_eqFunction_4602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4602};
  data->localData[0]->realVars[1287] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[2] variable */ = data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1301] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1302] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1303] /* genericGlider_mass_explicit.buoyancyForce.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4603
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowHead.r[2] = genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[2] + genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[2] * genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowLength
*/
void TestGlider_eqFunction_4603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4603};
  data->localData[0]->realVars[1269] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowHead.r[2] variable */ = data->localData[0]->realVars[1287] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1290] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1277] /* genericGlider_mass_explicit.buoyancyForce.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4604
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void TestGlider_eqFunction_4604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4604};
  data->localData[0]->realVars[997] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.v[1] variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4605
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.absolutePosition.r[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u
*/
void TestGlider_eqFunction_4605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4605};
  data->localData[0]->realVars[127] /* genericGlider_mass_explicit.absolutePosition.r[1] variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */);
  TRACE_POP
}
/*
equation index: 4606
type: WHEN

when {$whenCondition1} then
  genericGlider_mass_explicit.rOS_Sampler.y = ROS_Socket_Call(time, genericGlider_mass_explicit.rOS_Sampler.portNumber, genericGlider_mass_explicit.rOS_Sampler.hostName, 3, 3, genericGlider_mass_explicit.absolutePosition.r);
end when;
*/
void TestGlider_eqFunction_4606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4606};
  real_array tmp15;
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    real_array_create(&tmp15, ((modelica_real*)&((&data->localData[0]->realVars[127] /* genericGlider_mass_explicit.absolutePosition.r[1] variable */)[calc_base_index_dims_subs(1, (_index_t)3, ((modelica_integer) 1))])), 1, (_index_t)3);
    copy_real_array_data_mem(omc_ROS__Socket__Call(threadData, data->localData[0]->timeValue, data->simulationInfo->integerParameter[79] /* genericGlider_mass_explicit.rOS_Sampler.portNumber PARAM */, data->simulationInfo->stringParameter[39] /* genericGlider_mass_explicit.rOS_Sampler.hostName PARAM */, ((modelica_integer) 3), ((modelica_integer) 3), tmp15), &data->localData[0]->realVars[2147] /* genericGlider_mass_explicit.rOS_Sampler.y[1] DISCRETE */);
  }
  TRACE_POP
}
/*
equation index: 4607
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.m = smooth(0, if genericGlider_mass_explicit.rOS_Sampler.y[3] > genericGlider_mass_explicit.actuators.limiter1.uMax then genericGlider_mass_explicit.actuators.limiter1.uMax else if genericGlider_mass_explicit.rOS_Sampler.y[3] < genericGlider_mass_explicit.actuators.limiter1.uMin then genericGlider_mass_explicit.actuators.limiter1.uMin else genericGlider_mass_explicit.rOS_Sampler.y[3])
*/
void TestGlider_eqFunction_4607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4607};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp16 = Greater(data->localData[0]->realVars[2149] /* genericGlider_mass_explicit.rOS_Sampler.y[3] DISCRETE */,data->simulationInfo->realParameter[221] /* genericGlider_mass_explicit.actuators.limiter1.uMax PARAM */);
  tmp18 = (modelica_boolean)tmp16;
  if(tmp18)
  {
    tmp19 = data->simulationInfo->realParameter[221] /* genericGlider_mass_explicit.actuators.limiter1.uMax PARAM */;
  }
  else
  {
    tmp17 = Less(data->localData[0]->realVars[2149] /* genericGlider_mass_explicit.rOS_Sampler.y[3] DISCRETE */,data->simulationInfo->realParameter[222] /* genericGlider_mass_explicit.actuators.limiter1.uMin PARAM */);
    tmp19 = (tmp17?data->simulationInfo->realParameter[222] /* genericGlider_mass_explicit.actuators.limiter1.uMin PARAM */:data->localData[0]->realVars[2149] /* genericGlider_mass_explicit.rOS_Sampler.y[3] DISCRETE */);
  }
  data->localData[0]->realVars[170] /* genericGlider_mass_explicit.actuators.bodyVariableMass.m variable */ = tmp19;
  TRACE_POP
}
/*
equation index: 4608
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.position.phi_ref = smooth(0, if genericGlider_mass_explicit.rOS_Sampler.y[1] > genericGlider_mass_explicit.actuators.limiter.uMax then genericGlider_mass_explicit.actuators.limiter.uMax else if genericGlider_mass_explicit.rOS_Sampler.y[1] < genericGlider_mass_explicit.actuators.limiter.uMin then genericGlider_mass_explicit.actuators.limiter.uMin else genericGlider_mass_explicit.rOS_Sampler.y[1])
*/
void TestGlider_eqFunction_4608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4608};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  tmp20 = Greater(data->localData[0]->realVars[2147] /* genericGlider_mass_explicit.rOS_Sampler.y[1] DISCRETE */,data->simulationInfo->realParameter[219] /* genericGlider_mass_explicit.actuators.limiter.uMax PARAM */);
  tmp22 = (modelica_boolean)tmp20;
  if(tmp22)
  {
    tmp23 = data->simulationInfo->realParameter[219] /* genericGlider_mass_explicit.actuators.limiter.uMax PARAM */;
  }
  else
  {
    tmp21 = Less(data->localData[0]->realVars[2147] /* genericGlider_mass_explicit.rOS_Sampler.y[1] DISCRETE */,data->simulationInfo->realParameter[220] /* genericGlider_mass_explicit.actuators.limiter.uMin PARAM */);
    tmp23 = (tmp21?data->simulationInfo->realParameter[220] /* genericGlider_mass_explicit.actuators.limiter.uMin PARAM */:data->localData[0]->realVars[2147] /* genericGlider_mass_explicit.rOS_Sampler.y[1] DISCRETE */);
  }
  data->localData[0]->realVars[557] /* genericGlider_mass_explicit.actuators.position.phi_ref variable */ = tmp23;
  TRACE_POP
}
/*
equation index: 4609
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.position.a = 1.618122977346278 * ((genericGlider_mass_explicit.actuators.position.phi_ref - genericGlider_mass_explicit.actuators.position.phi) * genericGlider_mass_explicit.actuators.position.w_crit + (-1.3617) * genericGlider_mass_explicit.actuators.revolute.w) * genericGlider_mass_explicit.actuators.position.w_crit
*/
void TestGlider_eqFunction_4609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4609};
  data->localData[0]->realVars[556] /* genericGlider_mass_explicit.actuators.position.a variable */ = (1.618122977346278) * (((data->localData[0]->realVars[557] /* genericGlider_mass_explicit.actuators.position.phi_ref variable */ - data->localData[0]->realVars[3] /* genericGlider_mass_explicit.actuators.position.phi STATE(1,genericGlider_mass_explicit.actuators.revolute.w) */) * (data->simulationInfo->realParameter[227] /* genericGlider_mass_explicit.actuators.position.w_crit PARAM */) + (-1.3617) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */)) * (data->simulationInfo->realParameter[227] /* genericGlider_mass_explicit.actuators.position.w_crit PARAM */));
  TRACE_POP
}
/*
equation index: 4610
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] = genericGlider_mass_explicit.actuators.revolute.e[3] * genericGlider_mass_explicit.actuators.position.a
*/
void TestGlider_eqFunction_4610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4610};
  data->localData[0]->realVars[74] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[3]) DUMMY_DER */ = (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[556] /* genericGlider_mass_explicit.actuators.position.a variable */);
  TRACE_POP
}
/*
equation index: 4611
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] = genericGlider_mass_explicit.actuators.revolute.e[2] * genericGlider_mass_explicit.actuators.position.a
*/
void TestGlider_eqFunction_4611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4611};
  data->localData[0]->realVars[73] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[2]) DUMMY_DER */ = (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[556] /* genericGlider_mass_explicit.actuators.position.a variable */);
  TRACE_POP
}
/*
equation index: 4612
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] = genericGlider_mass_explicit.actuators.revolute.e[1] * genericGlider_mass_explicit.actuators.position.a
*/
void TestGlider_eqFunction_4612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4612};
  data->localData[0]->realVars[72] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.w[1]) DUMMY_DER */ = (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[556] /* genericGlider_mass_explicit.actuators.position.a variable */);
  TRACE_POP
}
/*
equation index: 4613
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.w = genericGlider_mass_explicit.actuators.position.a
*/
void TestGlider_eqFunction_4613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4613};
  data->localData[0]->realVars[22] /* der(genericGlider_mass_explicit.actuators.revolute.w) STATE_DER */ = data->localData[0]->realVars[556] /* genericGlider_mass_explicit.actuators.position.a variable */;
  TRACE_POP
}
/*
equation index: 4614
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.a = genericGlider_mass_explicit.actuators.position.a
*/
void TestGlider_eqFunction_4614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4614};
  data->localData[0]->realVars[596] /* genericGlider_mass_explicit.actuators.revolute.a variable */ = data->localData[0]->realVars[556] /* genericGlider_mass_explicit.actuators.position.a variable */;
  TRACE_POP
}
/*
equation index: 4615
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.position_slidingMass.s_ref = smooth(0, if genericGlider_mass_explicit.rOS_Sampler.y[2] > genericGlider_mass_explicit.actuators.limiter2.uMax then genericGlider_mass_explicit.actuators.limiter2.uMax else if genericGlider_mass_explicit.rOS_Sampler.y[2] < genericGlider_mass_explicit.actuators.limiter2.uMin then genericGlider_mass_explicit.actuators.limiter2.uMin else genericGlider_mass_explicit.rOS_Sampler.y[2])
*/
void TestGlider_eqFunction_4615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4615};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  tmp24 = Greater(data->localData[0]->realVars[2148] /* genericGlider_mass_explicit.rOS_Sampler.y[2] DISCRETE */,data->simulationInfo->realParameter[223] /* genericGlider_mass_explicit.actuators.limiter2.uMax PARAM */);
  tmp26 = (modelica_boolean)tmp24;
  if(tmp26)
  {
    tmp27 = data->simulationInfo->realParameter[223] /* genericGlider_mass_explicit.actuators.limiter2.uMax PARAM */;
  }
  else
  {
    tmp25 = Less(data->localData[0]->realVars[2148] /* genericGlider_mass_explicit.rOS_Sampler.y[2] DISCRETE */,data->simulationInfo->realParameter[224] /* genericGlider_mass_explicit.actuators.limiter2.uMin PARAM */);
    tmp27 = (tmp25?data->simulationInfo->realParameter[224] /* genericGlider_mass_explicit.actuators.limiter2.uMin PARAM */:data->localData[0]->realVars[2148] /* genericGlider_mass_explicit.rOS_Sampler.y[2] DISCRETE */);
  }
  data->localData[0]->realVars[560] /* genericGlider_mass_explicit.actuators.position_slidingMass.s_ref variable */ = tmp27;
  TRACE_POP
}
/*
equation index: 4616
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.position_slidingMass.a = 1.618122977346278 * ((genericGlider_mass_explicit.actuators.position_slidingMass.s_ref - genericGlider_mass_explicit.actuators.position_slidingMass.s) * genericGlider_mass_explicit.actuators.position_slidingMass.w_crit + (-1.3617) * genericGlider_mass_explicit.actuators.prismatic.v) * genericGlider_mass_explicit.actuators.position_slidingMass.w_crit
*/
void TestGlider_eqFunction_4616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4616};
  data->localData[0]->realVars[559] /* genericGlider_mass_explicit.actuators.position_slidingMass.a variable */ = (1.618122977346278) * (((data->localData[0]->realVars[560] /* genericGlider_mass_explicit.actuators.position_slidingMass.s_ref variable */ - data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */) * (data->simulationInfo->realParameter[229] /* genericGlider_mass_explicit.actuators.position_slidingMass.w_crit PARAM */) + (-1.3617) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */)) * (data->simulationInfo->realParameter[229] /* genericGlider_mass_explicit.actuators.position_slidingMass.w_crit PARAM */));
  TRACE_POP
}
/*
equation index: 4617
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.prismatic.v = genericGlider_mass_explicit.actuators.position_slidingMass.a
*/
void TestGlider_eqFunction_4617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4617};
  data->localData[0]->realVars[21] /* der(genericGlider_mass_explicit.actuators.prismatic.v) STATE_DER */ = data->localData[0]->realVars[559] /* genericGlider_mass_explicit.actuators.position_slidingMass.a variable */;
  TRACE_POP
}
/*
equation index: 4618
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.prismatic.a = genericGlider_mass_explicit.actuators.position_slidingMass.a
*/
void TestGlider_eqFunction_4618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4618};
  data->localData[0]->realVars[562] /* genericGlider_mass_explicit.actuators.prismatic.a variable */ = data->localData[0]->realVars[559] /* genericGlider_mass_explicit.actuators.position_slidingMass.a variable */;
  TRACE_POP
}
/*
equation index: 4619
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void TestGlider_eqFunction_4619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4619};
  data->localData[0]->realVars[1666] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[1] variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,genericGlider_mass_explicit.hull.a_0[1]) */) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[9] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,genericGlider_mass_explicit.hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4620
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed = sqrt(genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[1] ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[2] ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[3] ^ 2.0)
*/
void TestGlider_eqFunction_4620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4620};
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  tmp28 = data->localData[0]->realVars[1666] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[1] variable */;
  tmp29 = data->localData[0]->realVars[1667] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[2] variable */;
  tmp30 = data->localData[0]->realVars[1668] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[3] variable */;
  data->localData[0]->realVars[1525] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed variable */ = sqrt((tmp28 * tmp28) + (tmp29 * tmp29) + (tmp30 * tmp30));
  TRACE_POP
}
/*
equation index: 4621
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha = atan2(genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[3], genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[1])
*/
void TestGlider_eqFunction_4621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4621};
  data->localData[0]->realVars[1526] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha variable */ = atan2(data->localData[0]->realVars[1668] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[3] variable */, data->localData[0]->realVars[1666] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[1] variable */);
  TRACE_POP
}
/*
equation index: 4622
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha_deg = 57.29577951308232 * genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha
*/
void TestGlider_eqFunction_4622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4622};
  data->localData[0]->realVars[1527] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha_deg variable */ = (57.29577951308232) * (data->localData[0]->realVars[1526] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha variable */);
  TRACE_POP
}
/*
equation index: 4623
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[1] = ((-genericGlider_mass_explicit.hydrodynamicForcesTorques.K_D0) - genericGlider_mass_explicit.hydrodynamicForcesTorques.K_D * genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha ^ 2.0) * genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed ^ 2.0
*/
void TestGlider_eqFunction_4623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4623};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->localData[0]->realVars[1526] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha variable */;
  tmp32 = data->localData[0]->realVars[1525] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed variable */;
  data->localData[0]->realVars[1366] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[1] variable */ = ((-data->simulationInfo->realParameter[443] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_D0 PARAM */) - ((data->simulationInfo->realParameter[442] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_D PARAM */) * ((tmp31 * tmp31)))) * ((tmp32 * tmp32));
  TRACE_POP
}
/*
equation index: 4624
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[3] = ((-genericGlider_mass_explicit.hydrodynamicForcesTorques.K_L0) - genericGlider_mass_explicit.hydrodynamicForcesTorques.K_alpha * genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha) * genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed ^ 2.0
*/
void TestGlider_eqFunction_4624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4624};
  modelica_real tmp33;
  tmp33 = data->localData[0]->realVars[1525] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed variable */;
  data->localData[0]->realVars[1368] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[3] variable */ = ((-data->simulationInfo->realParameter[444] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_L0 PARAM */) - ((data->simulationInfo->realParameter[455] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_alpha PARAM */) * (data->localData[0]->realVars[1526] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha variable */))) * ((tmp33 * tmp33));
  TRACE_POP
}
/*
equation index: 4625
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[2] = (genericGlider_mass_explicit.hydrodynamicForcesTorques.K_M0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.K_M * genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha + genericGlider_mass_explicit.hydrodynamicForcesTorques.K_q * genericGlider_mass_explicit.hull.w_a[2]) * genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_2_1 * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_2_2 * genericGlider_mass_explicit.hull.w_a[2] ^ 2.0
*/
void TestGlider_eqFunction_4625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4625};
  modelica_real tmp34;
  modelica_real tmp35;
  tmp34 = data->localData[0]->realVars[1525] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed variable */;
  tmp35 = data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */;
  data->localData[0]->realVars[1382] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[2] variable */ = (data->simulationInfo->realParameter[446] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_M0 PARAM */ + (data->simulationInfo->realParameter[445] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_M PARAM */) * (data->localData[0]->realVars[1526] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha variable */) + (data->simulationInfo->realParameter[458] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_q PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) * ((tmp34 * tmp34)) + (data->simulationInfo->realParameter[451] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_2_1 PARAM */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->simulationInfo->realParameter[452] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_2_2 PARAM */) * ((tmp35 * tmp35));
  TRACE_POP
}
/*
equation index: 4626
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,3] = cos(genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha)
*/
void TestGlider_eqFunction_4626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4626};
  data->localData[0]->realVars[1380] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,3] variable */ = cos(data->localData[0]->realVars[1526] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha variable */);
  TRACE_POP
}
/*
equation index: 4627
type: SIMPLE_ASSIGN
$cse9 = sin(genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha)
*/
void TestGlider_eqFunction_4627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4627};
  data->localData[0]->realVars[90] /* $cse9 variable */ = sin(data->localData[0]->realVars[1526] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.alpha variable */);
  TRACE_POP
}
/*
equation index: 4628
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,3] = -$cse9
*/
void TestGlider_eqFunction_4628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4628};
  data->localData[0]->realVars[1374] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,3] variable */ = (-data->localData[0]->realVars[90] /* $cse9 variable */);
  TRACE_POP
}
/*
equation index: 4629
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_norm = Modelica.Math.Vectors.norm(genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b, 2.0)
*/
void TestGlider_eqFunction_4629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4629};
  real_array tmp36;
  real_array_create(&tmp36, ((modelica_real*)&((&data->localData[0]->realVars[1666] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[1] variable */)[calc_base_index_dims_subs(1, (_index_t)3, ((modelica_integer) 1))])), 1, (_index_t)3);
  data->localData[0]->realVars[1669] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_norm variable */ = omc_Modelica_Math_Vectors_norm(threadData, tmp36, 2.0);
  TRACE_POP
}
/*
equation index: 4630
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.beta = asin(genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[2] / genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_norm)
*/
void TestGlider_eqFunction_4630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4630};
  modelica_real tmp37;
  tmp37 = DIVISION_SIM(data->localData[0]->realVars[1667] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[2] variable */,data->localData[0]->realVars[1669] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_norm variable */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_norm",equationIndexes);
  if(!(tmp37 >= -1.0 && tmp37 <= 1.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of asin(genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_b[2] / genericGlider_mass_explicit.hydrodynamicForcesTorques.vel_norm) outside the domain -1.0 <= %g <= 1.0", tmp37);
  }
  data->localData[0]->realVars[1528] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.beta variable */ = asin(tmp37);
  TRACE_POP
}
/*
equation index: 4631
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.beta_deg = 57.29577951308232 * genericGlider_mass_explicit.hydrodynamicForcesTorques.beta
*/
void TestGlider_eqFunction_4631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4631};
  data->localData[0]->realVars[1529] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.beta_deg variable */ = (57.29577951308232) * (data->localData[0]->realVars[1528] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.beta variable */);
  TRACE_POP
}
/*
equation index: 4632
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.K_beta * genericGlider_mass_explicit.hydrodynamicForcesTorques.beta * genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed ^ 2.0
*/
void TestGlider_eqFunction_4632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4632};
  modelica_real tmp38;
  tmp38 = data->localData[0]->realVars[1525] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed variable */;
  data->localData[0]->realVars[1367] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[2] variable */ = (data->simulationInfo->realParameter[456] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_beta PARAM */) * ((data->localData[0]->realVars[1528] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.beta variable */) * ((tmp38 * tmp38)));
  TRACE_POP
}
/*
equation index: 4633
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[1] = (genericGlider_mass_explicit.hydrodynamicForcesTorques.K_MR * genericGlider_mass_explicit.hydrodynamicForcesTorques.beta + genericGlider_mass_explicit.hydrodynamicForcesTorques.K_p * genericGlider_mass_explicit.hull.w_a[1]) * genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_1_1 * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_1_2 * genericGlider_mass_explicit.hull.w_a[1] ^ 2.0
*/
void TestGlider_eqFunction_4633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4633};
  modelica_real tmp39;
  modelica_real tmp40;
  tmp39 = data->localData[0]->realVars[1525] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed variable */;
  tmp40 = data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */;
  data->localData[0]->realVars[1381] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[1] variable */ = ((data->simulationInfo->realParameter[447] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_MR PARAM */) * (data->localData[0]->realVars[1528] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.beta variable */) + (data->simulationInfo->realParameter[457] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_p PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */)) * ((tmp39 * tmp39)) + (data->simulationInfo->realParameter[449] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_1_1 PARAM */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->simulationInfo->realParameter[450] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_1_2 PARAM */) * ((tmp40 * tmp40));
  TRACE_POP
}
/*
equation index: 4634
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[3] = (genericGlider_mass_explicit.hydrodynamicForcesTorques.K_MY * genericGlider_mass_explicit.hydrodynamicForcesTorques.beta + genericGlider_mass_explicit.hydrodynamicForcesTorques.K_r * genericGlider_mass_explicit.hull.w_a[3]) * genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_3_1 * genericGlider_mass_explicit.hull.w_a[3] + genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_3_2 * genericGlider_mass_explicit.hull.w_a[3] ^ 2.0
*/
void TestGlider_eqFunction_4634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4634};
  modelica_real tmp41;
  modelica_real tmp42;
  tmp41 = data->localData[0]->realVars[1525] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.airspeed variable */;
  tmp42 = data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */;
  data->localData[0]->realVars[1383] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[3] variable */ = ((data->simulationInfo->realParameter[448] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_MY PARAM */) * (data->localData[0]->realVars[1528] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.beta variable */) + (data->simulationInfo->realParameter[459] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_r PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */)) * ((tmp41 * tmp41)) + (data->simulationInfo->realParameter[453] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_3_1 PARAM */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) + (data->simulationInfo->realParameter[454] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.K_Ome_3_2 PARAM */) * ((tmp42 * tmp42));
  TRACE_POP
}
/*
equation index: 4635
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,2] = cos(genericGlider_mass_explicit.hydrodynamicForcesTorques.beta)
*/
void TestGlider_eqFunction_4635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4635};
  data->localData[0]->realVars[1376] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,2] variable */ = cos(data->localData[0]->realVars[1528] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.beta variable */);
  TRACE_POP
}
/*
equation index: 4636
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,2]
*/
void TestGlider_eqFunction_4636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4636};
  data->localData[0]->realVars[1372] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,1] variable */ = (data->localData[0]->realVars[1380] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,3] variable */) * (data->localData[0]->realVars[1376] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,2] variable */);
  TRACE_POP
}
/*
equation index: 4637
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,1] = $cse9 * genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,2]
*/
void TestGlider_eqFunction_4637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4637};
  data->localData[0]->realVars[1378] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,1] variable */ = (data->localData[0]->realVars[90] /* $cse9 variable */) * (data->localData[0]->realVars[1376] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,2] variable */);
  TRACE_POP
}
/*
equation index: 4638
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,1] = sin(genericGlider_mass_explicit.hydrodynamicForcesTorques.beta)
*/
void TestGlider_eqFunction_4638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4638};
  data->localData[0]->realVars[1375] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,1] variable */ = sin(data->localData[0]->realVars[1528] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.beta variable */);
  TRACE_POP
}
/*
equation index: 4639
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,2] = (-genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,3]) * genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,1]
*/
void TestGlider_eqFunction_4639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4639};
  data->localData[0]->realVars[1373] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,2] variable */ = ((-data->localData[0]->realVars[1380] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,3] variable */)) * (data->localData[0]->realVars[1375] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,1] variable */);
  TRACE_POP
}
/*
equation index: 4640
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[1] + genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[2] - $cse9 * genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[3]
*/
void TestGlider_eqFunction_4640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4640};
  data->localData[0]->realVars[1369] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[1] variable */ = (data->localData[0]->realVars[1372] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,1] variable */) * (data->localData[0]->realVars[1366] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[1] variable */) + (data->localData[0]->realVars[1373] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,2] variable */) * (data->localData[0]->realVars[1367] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[2] variable */) - ((data->localData[0]->realVars[90] /* $cse9 variable */) * (data->localData[0]->realVars[1368] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[3] variable */));
  TRACE_POP
}
/*
equation index: 4641
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] = (-genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[1]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.force.N_to_m
*/
void TestGlider_eqFunction_4641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4641};
  data->localData[0]->realVars[1569] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1369] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[1] variable */),data->simulationInfo->realParameter[460] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.N_to_m PARAM */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4642
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[1] + genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[2] - $cse9 * genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[3]
*/
void TestGlider_eqFunction_4642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4642};
  data->localData[0]->realVars[1384] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[1] variable */ = (data->localData[0]->realVars[1372] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,1] variable */) * (data->localData[0]->realVars[1381] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[1] variable */) + (data->localData[0]->realVars[1373] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[1,2] variable */) * (data->localData[0]->realVars[1382] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[2] variable */) - ((data->localData[0]->realVars[90] /* $cse9 variable */) * (data->localData[0]->realVars[1383] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[3] variable */));
  TRACE_POP
}
/*
equation index: 4643
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] = (-genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[1]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.Nm_to_m
*/
void TestGlider_eqFunction_4643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4643};
  data->localData[0]->realVars[1642] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1384] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[1] variable */),data->simulationInfo->realParameter[469] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.Nm_to_m PARAM */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4644
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,2] = (-$cse9) * genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,1]
*/
void TestGlider_eqFunction_4644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4644};
  data->localData[0]->realVars[1379] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,2] variable */ = ((-data->localData[0]->realVars[90] /* $cse9 variable */)) * (data->localData[0]->realVars[1375] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,1] variable */);
  TRACE_POP
}
/*
equation index: 4645
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[1] + genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[2] + genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[3]
*/
void TestGlider_eqFunction_4645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4645};
  data->localData[0]->realVars[1371] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[3] variable */ = (data->localData[0]->realVars[1378] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,1] variable */) * (data->localData[0]->realVars[1366] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[1] variable */) + (data->localData[0]->realVars[1379] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,2] variable */) * (data->localData[0]->realVars[1367] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[2] variable */) + (data->localData[0]->realVars[1380] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,3] variable */) * (data->localData[0]->realVars[1368] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[3] variable */);
  TRACE_POP
}
/*
equation index: 4646
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3] = (-genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[3]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.force.N_to_m
*/
void TestGlider_eqFunction_4646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4646};
  data->localData[0]->realVars[1571] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1371] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[3] variable */),data->simulationInfo->realParameter[460] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.N_to_m PARAM */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4647
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[1] + genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[2] + genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[3]
*/
void TestGlider_eqFunction_4647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4647};
  data->localData[0]->realVars[1386] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[3] variable */ = (data->localData[0]->realVars[1378] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,1] variable */) * (data->localData[0]->realVars[1381] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[1] variable */) + (data->localData[0]->realVars[1379] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,2] variable */) * (data->localData[0]->realVars[1382] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[2] variable */) + (data->localData[0]->realVars[1380] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[3,3] variable */) * (data->localData[0]->realVars[1383] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[3] variable */);
  TRACE_POP
}
/*
equation index: 4648
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3] = (-genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[3]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.Nm_to_m
*/
void TestGlider_eqFunction_4648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4648};
  data->localData[0]->realVars[1644] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1386] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[3] variable */),data->simulationInfo->realParameter[469] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.Nm_to_m PARAM */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4649
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[1] + genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[2]
*/
void TestGlider_eqFunction_4649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4649};
  data->localData[0]->realVars[1370] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[2] variable */ = (data->localData[0]->realVars[1375] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,1] variable */) * (data->localData[0]->realVars[1366] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[1] variable */) + (data->localData[0]->realVars[1376] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,2] variable */) * (data->localData[0]->realVars[1367] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd[2] variable */);
  TRACE_POP
}
/*
equation index: 4650
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] = (-genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[2]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.force.N_to_m
*/
void TestGlider_eqFunction_4650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4650};
  data->localData[0]->realVars[1570] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1370] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.F_hd_b[2] variable */),data->simulationInfo->realParameter[460] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.N_to_m PARAM */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4651
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length = sqrt(genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3] ^ 2.0)
*/
void TestGlider_eqFunction_4651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4651};
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  tmp43 = data->localData[0]->realVars[1569] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] variable */;
  tmp44 = data->localData[0]->realVars[1570] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] variable */;
  tmp45 = data->localData[0]->realVars[1571] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3] variable */;
  data->localData[0]->realVars[1553] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length variable */ = sqrt((tmp43 * tmp43) + (tmp44 * tmp44) + (tmp45 * tmp45));
  TRACE_POP
}
/*
equation index: 4652
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[1] = if noEvent(genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length < 1e-10) then 1.0 else (-genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length
*/
void TestGlider_eqFunction_4652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4652};
  modelica_boolean tmp46;
  tmp46 = Less(data->localData[0]->realVars[1553] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1550] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[1] variable */ = (tmp46?1.0:DIVISION_SIM((-data->localData[0]->realVars[1569] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] variable */),data->localData[0]->realVars[1553] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length variable */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4653
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[3] = if noEvent(genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length < 1e-10) then 0.0 else (-genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length
*/
void TestGlider_eqFunction_4653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4653};
  modelica_boolean tmp47;
  tmp47 = Less(data->localData[0]->realVars[1553] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1552] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[3] variable */ = (tmp47?0.0:DIVISION_SIM((-data->localData[0]->realVars[1571] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3] variable */),data->localData[0]->realVars[1553] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length variable */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4654
type: SIMPLE_ASSIGN
$cse7 = min(genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length, 4.0 * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4654};
  data->localData[0]->realVars[88] /* $cse7 variable */ = fmin(data->localData[0]->realVars[1553] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4655
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowHead.length = max(0.0, $cse7)
*/
void TestGlider_eqFunction_4655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4655};
  data->localData[0]->realVars[1535] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowHead.length variable */ = fmax(0.0,data->localData[0]->realVars[88] /* $cse7 variable */);
  TRACE_POP
}
/*
equation index: 4656
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowLength = max(0.0, genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length + (-4.0) * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4656};
  data->localData[0]->realVars[1545] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[1553] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length variable */ + (-4.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4657
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[2] = if noEvent(genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length < 1e-10) then 0.0 else (-genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length
*/
void TestGlider_eqFunction_4657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4657};
  modelica_boolean tmp48;
  tmp48 = Less(data->localData[0]->realVars[1553] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1551] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[2] variable */ = (tmp48?0.0:DIVISION_SIM((-data->localData[0]->realVars[1570] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] variable */),data->localData[0]->realVars[1553] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length variable */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4658
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[3]
*/
void TestGlider_eqFunction_4658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4658};
  data->localData[0]->realVars[1557] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[1] variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1550] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1551] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1552] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4659
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[3] = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[3]
*/
void TestGlider_eqFunction_4659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4659};
  data->localData[0]->realVars[1559] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[3] variable */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1550] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1551] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1552] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4660
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3]
*/
void TestGlider_eqFunction_4660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4660};
  data->localData[0]->realVars[1554] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[1] variable */ = data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1569] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1570] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1571] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4661
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowHead.r[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[1] + genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowLength
*/
void TestGlider_eqFunction_4661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4661};
  data->localData[0]->realVars[1536] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowHead.r[1] variable */ = data->localData[0]->realVars[1554] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1557] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1545] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4662
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3]
*/
void TestGlider_eqFunction_4662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4662};
  data->localData[0]->realVars[1556] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[3] variable */ = data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1569] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1570] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1571] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4663
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowHead.r[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[3] + genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowLength
*/
void TestGlider_eqFunction_4663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4663};
  data->localData[0]->realVars[1538] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowHead.r[3] variable */ = data->localData[0]->realVars[1556] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1559] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1545] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4664
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[1] + genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[2]
*/
void TestGlider_eqFunction_4664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4664};
  data->localData[0]->realVars[1385] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[2] variable */ = (data->localData[0]->realVars[1375] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,1] variable */) * (data->localData[0]->realVars[1381] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[1] variable */) + (data->localData[0]->realVars[1376] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.R_FB[2,2] variable */) * (data->localData[0]->realVars[1382] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd[2] variable */);
  TRACE_POP
}
/*
equation index: 4665
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] = (-genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[2]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.Nm_to_m
*/
void TestGlider_eqFunction_4665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4665};
  data->localData[0]->realVars[1643] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1385] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.T_hd_b[2] variable */),data->simulationInfo->realParameter[469] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.Nm_to_m PARAM */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4666
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length = sqrt(genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] ^ 2.0 + genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3] ^ 2.0)
*/
void TestGlider_eqFunction_4666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4666};
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  tmp49 = data->localData[0]->realVars[1642] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] variable */;
  tmp50 = data->localData[0]->realVars[1643] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] variable */;
  tmp51 = data->localData[0]->realVars[1644] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3] variable */;
  data->localData[0]->realVars[1626] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length variable */ = sqrt((tmp49 * tmp49) + (tmp50 * tmp50) + (tmp51 * tmp51));
  TRACE_POP
}
/*
equation index: 4667
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[1] = if noEvent(genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length < 1e-10) then 1.0 else (-genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length
*/
void TestGlider_eqFunction_4667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4667};
  modelica_boolean tmp52;
  tmp52 = Less(data->localData[0]->realVars[1626] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1621] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[1] variable */ = (tmp52?1.0:DIVISION_SIM((-data->localData[0]->realVars[1642] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] variable */),data->localData[0]->realVars[1626] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length variable */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4668
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[3] = if noEvent(genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length < 1e-10) then 0.0 else (-genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length
*/
void TestGlider_eqFunction_4668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4668};
  modelica_boolean tmp53;
  tmp53 = Less(data->localData[0]->realVars[1626] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1623] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[3] variable */ = (tmp53?0.0:DIVISION_SIM((-data->localData[0]->realVars[1644] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3] variable */),data->localData[0]->realVars[1626] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length variable */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4669
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength = max(0.0, genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length + (-6.0) * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4669};
  data->localData[0]->realVars[1616] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[1626] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length variable */ + (-6.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4670
type: SIMPLE_ASSIGN
$cse8 = min(genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length, 4.0 * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4670};
  data->localData[0]->realVars[89] /* $cse8 variable */ = fmin(data->localData[0]->realVars[1626] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4671
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.headLength = max(0.0, $cse8)
*/
void TestGlider_eqFunction_4671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4671};
  data->localData[0]->realVars[1624] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.headLength variable */ = fmax(0.0,data->localData[0]->realVars[89] /* $cse8 variable */);
  TRACE_POP
}
/*
equation index: 4672
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[2] = if noEvent(genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length < 1e-10) then 0.0 else (-genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2]) / genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length
*/
void TestGlider_eqFunction_4672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4672};
  modelica_boolean tmp54;
  tmp54 = Less(data->localData[0]->realVars[1626] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1622] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[2] variable */ = (tmp54?0.0:DIVISION_SIM((-data->localData[0]->realVars[1643] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] variable */),data->localData[0]->realVars[1626] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length variable */,"genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4673
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[3]
*/
void TestGlider_eqFunction_4673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4673};
  data->localData[0]->realVars[1630] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1621] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1622] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1623] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4674
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[3]
*/
void TestGlider_eqFunction_4674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4674};
  data->localData[0]->realVars[1632] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] variable */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1621] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1622] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1623] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4675
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3]
*/
void TestGlider_eqFunction_4675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4675};
  data->localData[0]->realVars[1627] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[1] variable */ = data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1642] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1643] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1644] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4676
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[1] + genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength
*/
void TestGlider_eqFunction_4676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4676};
  data->localData[0]->realVars[1594] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[1] variable */ = data->localData[0]->realVars[1627] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1630] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1616] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4677
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[1] + genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] * (genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength + 0.5 * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.headLength)
*/
void TestGlider_eqFunction_4677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4677};
  data->localData[0]->realVars[1607] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[1] variable */ = data->localData[0]->realVars[1627] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1630] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1616] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1624] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4678
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3]
*/
void TestGlider_eqFunction_4678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4678};
  data->localData[0]->realVars[1629] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[3] variable */ = data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1642] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1643] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1644] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4679
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[3] + genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength
*/
void TestGlider_eqFunction_4679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4679};
  data->localData[0]->realVars[1596] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[3] variable */ = data->localData[0]->realVars[1629] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1632] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1616] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4680
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[3] + genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] * (genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength + 0.5 * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.headLength)
*/
void TestGlider_eqFunction_4680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4680};
  data->localData[0]->realVars[1609] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[3] variable */ = data->localData[0]->realVars[1629] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1632] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1616] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1624] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4681
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[2] = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[3]
*/
void TestGlider_eqFunction_4681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4681};
  data->localData[0]->realVars[1558] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[2] variable */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1550] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1551] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1552] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4682
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3]
*/
void TestGlider_eqFunction_4682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4682};
  data->localData[0]->realVars[1555] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[2] variable */ = data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1569] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1570] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1571] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4683
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowHead.r[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[2] + genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowLength
*/
void TestGlider_eqFunction_4683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4683};
  data->localData[0]->realVars[1537] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowHead.r[2] variable */ = data->localData[0]->realVars[1555] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1558] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1545] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4684
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[3]
*/
void TestGlider_eqFunction_4684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4684};
  data->localData[0]->realVars[1631] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] variable */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1621] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1622] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1623] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4685
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3]
*/
void TestGlider_eqFunction_4685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4685};
  data->localData[0]->realVars[1628] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[2] variable */ = data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1642] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1643] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1644] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4686
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[2] + genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength
*/
void TestGlider_eqFunction_4686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4686};
  data->localData[0]->realVars[1595] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[2] variable */ = data->localData[0]->realVars[1628] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1631] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1616] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4687
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[2] + genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] * (genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength + 0.5 * genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.headLength)
*/
void TestGlider_eqFunction_4687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4687};
  data->localData[0]->realVars[1608] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[2] variable */ = data->localData[0]->realVars[1628] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1631] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1616] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1624] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4688
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].u = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.hull.w_a[3]
*/
void TestGlider_eqFunction_4688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4688};
  data->localData[0]->realVars[896] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].u DUMMY_STATE */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */);
  TRACE_POP
}
/*
equation index: 4689
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2] = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u + 0.04 * genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.hull.w_a[2] + (-0.04) * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.hull.w_a[1]
*/
void TestGlider_eqFunction_4689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4689};
  data->localData[0]->realVars[58] /* der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2]) DUMMY_DER */ = data->localData[0]->realVars[8] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,genericGlider_mass_explicit.hull.a_0[2]) */ + (0.04) * ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */)) + (-0.04) * ((data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */));
  TRACE_POP
}
/*
equation index: 4690
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] = genericGlider_mass_explicit.actuators.revolute.e[3] * genericGlider_mass_explicit.actuators.revolute.w
*/
void TestGlider_eqFunction_4690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4690};
  data->localData[0]->realVars[595] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] DUMMY_STATE */ = (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */);
  TRACE_POP
}
/*
equation index: 4691
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] = genericGlider_mass_explicit.actuators.revolute.e[2] * genericGlider_mass_explicit.actuators.revolute.w
*/
void TestGlider_eqFunction_4691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4691};
  data->localData[0]->realVars[594] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] DUMMY_STATE */ = (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */);
  TRACE_POP
}
/*
equation index: 4692
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] = genericGlider_mass_explicit.actuators.revolute.e[1] * genericGlider_mass_explicit.actuators.revolute.w
*/
void TestGlider_eqFunction_4692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4692};
  data->localData[0]->realVars[593] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] DUMMY_STATE */ = (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */);
  TRACE_POP
}
/*
equation index: 4693
type: SIMPLE_ASSIGN
$cse2 = cos(genericGlider_mass_explicit.actuators.position.phi)
*/
void TestGlider_eqFunction_4693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4693};
  data->localData[0]->realVars[83] /* $cse2 variable */ = cos(data->localData[0]->realVars[3] /* genericGlider_mass_explicit.actuators.position.phi STATE(1,genericGlider_mass_explicit.actuators.revolute.w) */);
  TRACE_POP
}
/*
equation index: 4694
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] = genericGlider_mass_explicit.actuators.revolute.e[1] ^ 2.0 + (1.0 - genericGlider_mass_explicit.actuators.revolute.e[1] ^ 2.0) * $cse2
*/
void TestGlider_eqFunction_4694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4694};
  modelica_real tmp55;
  modelica_real tmp56;
  tmp55 = data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */;
  tmp56 = data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */;
  data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */ = (tmp55 * tmp55) + (1.0 - ((tmp56 * tmp56))) * (data->localData[0]->realVars[83] /* $cse2 variable */);
  TRACE_POP
}
/*
equation index: 4695
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] = genericGlider_mass_explicit.actuators.revolute.e[2] ^ 2.0 + (1.0 - genericGlider_mass_explicit.actuators.revolute.e[2] ^ 2.0) * $cse2
*/
void TestGlider_eqFunction_4695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4695};
  modelica_real tmp57;
  modelica_real tmp58;
  tmp57 = data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */;
  tmp58 = data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */;
  data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */ = (tmp57 * tmp57) + (1.0 - ((tmp58 * tmp58))) * (data->localData[0]->realVars[83] /* $cse2 variable */);
  TRACE_POP
}
/*
equation index: 4696
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] = genericGlider_mass_explicit.actuators.revolute.e[3] ^ 2.0 + (1.0 - genericGlider_mass_explicit.actuators.revolute.e[3] ^ 2.0) * $cse2
*/
void TestGlider_eqFunction_4696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4696};
  modelica_real tmp59;
  modelica_real tmp60;
  tmp59 = data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */;
  tmp60 = data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */;
  data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */ = (tmp59 * tmp59) + (1.0 - ((tmp60 * tmp60))) * (data->localData[0]->realVars[83] /* $cse2 variable */);
  TRACE_POP
}
/*
equation index: 4697
type: SIMPLE_ASSIGN
$cse1 = sin(genericGlider_mass_explicit.actuators.position.phi)
*/
void TestGlider_eqFunction_4697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4697};
  data->localData[0]->realVars[82] /* $cse1 variable */ = sin(data->localData[0]->realVars[3] /* genericGlider_mass_explicit.actuators.position.phi STATE(1,genericGlider_mass_explicit.actuators.revolute.w) */);
  TRACE_POP
}
/*
equation index: 4698
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] = (genericGlider_mass_explicit.actuators.revolute.e[1] - genericGlider_mass_explicit.actuators.revolute.e[1] * $cse2) * genericGlider_mass_explicit.actuators.revolute.e[2] + genericGlider_mass_explicit.actuators.revolute.e[3] * $cse1
*/
void TestGlider_eqFunction_4698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4698};
  data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */ = (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */ - ((data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[83] /* $cse2 variable */))) * (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) + (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[82] /* $cse1 variable */);
  TRACE_POP
}
/*
equation index: 4699
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] = (genericGlider_mass_explicit.actuators.revolute.e[1] - genericGlider_mass_explicit.actuators.revolute.e[1] * $cse2) * genericGlider_mass_explicit.actuators.revolute.e[3] - genericGlider_mass_explicit.actuators.revolute.e[2] * $cse1
*/
void TestGlider_eqFunction_4699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4699};
  data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */ = (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */ - ((data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[83] /* $cse2 variable */))) * (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) - ((data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[82] /* $cse1 variable */));
  TRACE_POP
}
/*
equation index: 4700
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.w_a[1] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.w_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[1]
*/
void TestGlider_eqFunction_4700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4700};
  data->localData[0]->realVars[217] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[1] DUMMY_STATE */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) + data->localData[0]->realVars[593] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[1] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4701
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4701};
  data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4702
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] = genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4702};
  data->localData[0]->realVars[201] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ = data->localData[0]->realVars[518] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3] DUMMY_STATE */ + (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */);
  TRACE_POP
}
/*
equation index: 4703
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3]
*/
void TestGlider_eqFunction_4703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4703};
  data->localData[0]->realVars[534] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] DUMMY_STATE */ = data->localData[0]->realVars[201] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4704
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_arrowHead.r[3] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * genericGlider_mass_explicit.actuators.fixedFrame.lineLength
*/
void TestGlider_eqFunction_4704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4704};
  data->localData[0]->realVars[242] /* genericGlider_mass_explicit.actuators.fixedFrame.x_arrowHead.r[3] variable */ = data->localData[0]->realVars[201] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[232] /* genericGlider_mass_explicit.actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4705
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[3] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] + 0.525 * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3]
*/
void TestGlider_eqFunction_4705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4705};
  data->localData[0]->realVars[317] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[3] variable */ = data->localData[0]->realVars[201] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */);
  TRACE_POP
}
/*
equation index: 4706
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4706};
  data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4707
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] = genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4707};
  data->localData[0]->realVars[200] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ = data->localData[0]->realVars[517] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2] DUMMY_STATE */ + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */);
  TRACE_POP
}
/*
equation index: 4708
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2]
*/
void TestGlider_eqFunction_4708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4708};
  data->localData[0]->realVars[533] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] DUMMY_STATE */ = data->localData[0]->realVars[200] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4709
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_arrowHead.r[2] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] * genericGlider_mass_explicit.actuators.fixedFrame.lineLength
*/
void TestGlider_eqFunction_4709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4709};
  data->localData[0]->realVars[241] /* genericGlider_mass_explicit.actuators.fixedFrame.x_arrowHead.r[2] variable */ = data->localData[0]->realVars[200] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[232] /* genericGlider_mass_explicit.actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4710
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[2] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] + 0.525 * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2]
*/
void TestGlider_eqFunction_4710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4710};
  data->localData[0]->realVars[316] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[2] variable */ = data->localData[0]->realVars[200] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */);
  TRACE_POP
}
/*
equation index: 4711
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] * genericGlider_mass_explicit.hull.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] * genericGlider_mass_explicit.hull.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4711};
  data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */ = (data->localData[0]->realVars[584] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) + (data->localData[0]->realVars[585] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) + (data->localData[0]->realVars[586] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4712
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] = genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4712};
  data->localData[0]->realVars[199] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ = data->localData[0]->realVars[516] /* genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1] DUMMY_STATE */ + (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */);
  TRACE_POP
}
/*
equation index: 4713
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1]
*/
void TestGlider_eqFunction_4713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4713};
  data->localData[0]->realVars[532] /* genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] DUMMY_STATE */ = data->localData[0]->realVars[199] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4714
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_arrowHead.r[1] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] * genericGlider_mass_explicit.actuators.fixedFrame.lineLength
*/
void TestGlider_eqFunction_4714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4714};
  data->localData[0]->realVars[240] /* genericGlider_mass_explicit.actuators.fixedFrame.x_arrowHead.r[1] variable */ = data->localData[0]->realVars[199] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[232] /* genericGlider_mass_explicit.actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4715
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[1] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] + 0.525 * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1]
*/
void TestGlider_eqFunction_4715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4715};
  data->localData[0]->realVars[315] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[1] variable */ = data->localData[0]->realVars[199] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */);
  TRACE_POP
}
/*
equation index: 4716
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] = (genericGlider_mass_explicit.actuators.revolute.e[2] - genericGlider_mass_explicit.actuators.revolute.e[2] * $cse2) * genericGlider_mass_explicit.actuators.revolute.e[1] - genericGlider_mass_explicit.actuators.revolute.e[3] * $cse1
*/
void TestGlider_eqFunction_4716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4716};
  data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */ = (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */ - ((data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[83] /* $cse2 variable */))) * (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) - ((data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[82] /* $cse1 variable */));
  TRACE_POP
}
/*
equation index: 4717
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] = (genericGlider_mass_explicit.actuators.revolute.e[2] - genericGlider_mass_explicit.actuators.revolute.e[2] * $cse2) * genericGlider_mass_explicit.actuators.revolute.e[3] + genericGlider_mass_explicit.actuators.revolute.e[1] * $cse1
*/
void TestGlider_eqFunction_4717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4717};
  data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */ = (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */ - ((data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[83] /* $cse2 variable */))) * (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) + (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[82] /* $cse1 variable */);
  TRACE_POP
}
/*
equation index: 4718
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.w_a[2] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.w_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[2]
*/
void TestGlider_eqFunction_4718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4718};
  data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */ = (data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) + data->localData[0]->realVars[594] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[2] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4719
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4719};
  data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */ = (data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4720
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_arrowHead.r[3] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * genericGlider_mass_explicit.actuators.fixedFrame.lineLength
*/
void TestGlider_eqFunction_4720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4720};
  data->localData[0]->realVars[329] /* genericGlider_mass_explicit.actuators.fixedFrame.y_arrowHead.r[3] variable */ = data->localData[0]->realVars[201] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[232] /* genericGlider_mass_explicit.actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4721
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[3] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] + 0.525 * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3]
*/
void TestGlider_eqFunction_4721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4721};
  data->localData[0]->realVars[406] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[3] variable */ = data->localData[0]->realVars[201] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */);
  TRACE_POP
}
/*
equation index: 4722
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4722};
  data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */ = (data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4723
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_arrowHead.r[2] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.fixedFrame.lineLength
*/
void TestGlider_eqFunction_4723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4723};
  data->localData[0]->realVars[328] /* genericGlider_mass_explicit.actuators.fixedFrame.y_arrowHead.r[2] variable */ = data->localData[0]->realVars[200] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[232] /* genericGlider_mass_explicit.actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4724
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[2] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] + 0.525 * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2]
*/
void TestGlider_eqFunction_4724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4724};
  data->localData[0]->realVars[405] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[2] variable */ = data->localData[0]->realVars[200] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */);
  TRACE_POP
}
/*
equation index: 4725
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] * genericGlider_mass_explicit.hull.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] * genericGlider_mass_explicit.hull.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4725};
  data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */ = (data->localData[0]->realVars[587] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) + (data->localData[0]->realVars[588] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) + (data->localData[0]->realVars[589] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4726
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_arrowHead.r[1] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.fixedFrame.lineLength
*/
void TestGlider_eqFunction_4726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4726};
  data->localData[0]->realVars[327] /* genericGlider_mass_explicit.actuators.fixedFrame.y_arrowHead.r[1] variable */ = data->localData[0]->realVars[199] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * (data->localData[0]->realVars[232] /* genericGlider_mass_explicit.actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4727
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[1] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] + 0.525 * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1]
*/
void TestGlider_eqFunction_4727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4727};
  data->localData[0]->realVars[404] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[1] variable */ = data->localData[0]->realVars[199] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */);
  TRACE_POP
}
/*
equation index: 4728
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] = (genericGlider_mass_explicit.actuators.revolute.e[3] - genericGlider_mass_explicit.actuators.revolute.e[3] * $cse2) * genericGlider_mass_explicit.actuators.revolute.e[1] + genericGlider_mass_explicit.actuators.revolute.e[2] * $cse1
*/
void TestGlider_eqFunction_4728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4728};
  data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */ = (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */ - ((data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[83] /* $cse2 variable */))) * (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) + (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[82] /* $cse1 variable */);
  TRACE_POP
}
/*
equation index: 4729
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] = (genericGlider_mass_explicit.actuators.revolute.e[3] - genericGlider_mass_explicit.actuators.revolute.e[3] * $cse2) * genericGlider_mass_explicit.actuators.revolute.e[2] - genericGlider_mass_explicit.actuators.revolute.e[1] * $cse1
*/
void TestGlider_eqFunction_4729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4729};
  data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */ = (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */ - ((data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[83] /* $cse2 variable */))) * (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) - ((data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[82] /* $cse1 variable */));
  TRACE_POP
}
/*
equation index: 4730
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.w_a[3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.w_a[1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.w_a[2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.w_a[3] + genericGlider_mass_explicit.actuators.revolute.R_rel.w[3]
*/
void TestGlider_eqFunction_4730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4730};
  data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */ = (data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* genericGlider_mass_explicit.hull.w_a[1] STATE(1,genericGlider_mass_explicit.hull.z_a[1]) */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* genericGlider_mass_explicit.hull.w_a[2] STATE(1,genericGlider_mass_explicit.hull.z_a[2]) */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* genericGlider_mass_explicit.hull.w_a[3] STATE(1,genericGlider_mass_explicit.hull.z_a[3]) */) + data->localData[0]->realVars[595] /* genericGlider_mass_explicit.actuators.revolute.R_rel.w[3] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4731
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4731};
  data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */ = (data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4732
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[1,3] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4732};
  data->localData[0]->realVars[261] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[1,3] variable */ = (data->localData[0]->realVars[268] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[269] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[270] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4733
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,3] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4733};
  data->localData[0]->realVars[264] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,3] variable */ = (data->localData[0]->realVars[271] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[272] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[273] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4734
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].r[3] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[3] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,3] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4734};
  data->localData[0]->realVars[292] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].r[3] variable */ = data->localData[0]->realVars[317] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[3] variable */ + (data->localData[0]->realVars[264] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4735
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[3,3] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4735};
  data->localData[0]->realVars[267] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[3,3] variable */ = (data->localData[0]->realVars[274] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[275] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[276] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4736
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[1,3] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4736};
  data->localData[0]->realVars[348] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[1,3] variable */ = (data->localData[0]->realVars[355] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[356] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[357] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4737
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,3] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4737};
  data->localData[0]->realVars[351] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,3] variable */ = (data->localData[0]->realVars[358] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[359] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[360] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4738
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].r[3] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[3] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,3] * genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2]
*/
void TestGlider_eqFunction_4738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4738};
  data->localData[0]->realVars[379] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].r[3] variable */ = data->localData[0]->realVars[406] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[3] variable */ + (data->localData[0]->realVars[351] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4739
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[3,3] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4739};
  data->localData[0]->realVars[354] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[3,3] variable */ = (data->localData[0]->realVars[361] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[362] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[363] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4740
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[1,3] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4740};
  data->localData[0]->realVars[437] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[1,3] variable */ = (data->localData[0]->realVars[444] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[445] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[446] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4741
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,3] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4741};
  data->localData[0]->realVars[440] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,3] variable */ = (data->localData[0]->realVars[447] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[448] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[449] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4742
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[3,3] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4742};
  data->localData[0]->realVars[443] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[3,3] variable */ = (data->localData[0]->realVars[450] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) + (data->localData[0]->realVars[451] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[452] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4743
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.v_0[3] = $DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4743};
  data->localData[0]->realVars[216] /* genericGlider_mass_explicit.actuators.body_rolling.v_0[3] DUMMY_STATE */ = data->localData[0]->realVars[59] /* der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[3]) DUMMY_DER */ + (data->localData[0]->realVars[192] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */) + (data->localData[0]->realVars[195] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) + (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 4744
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] = genericGlider_mass_explicit.actuators.body_rolling.v_0[3]
*/
void TestGlider_eqFunction_4744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4744};
  data->localData[0]->realVars[62] /* der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3]) DUMMY_DER */ = data->localData[0]->realVars[216] /* genericGlider_mass_explicit.actuators.body_rolling.v_0[3] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4745
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] = genericGlider_mass_explicit.actuators.body_rolling.v_0[3]
*/
void TestGlider_eqFunction_4745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4745};
  data->localData[0]->realVars[50] /* der(genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3]) DUMMY_DER */ = data->localData[0]->realVars[216] /* genericGlider_mass_explicit.actuators.body_rolling.v_0[3] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4746
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_arrowHead.r[3] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] * genericGlider_mass_explicit.actuators.fixedFrame.lineLength
*/
void TestGlider_eqFunction_4746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4746};
  data->localData[0]->realVars[418] /* genericGlider_mass_explicit.actuators.fixedFrame.z_arrowHead.r[3] variable */ = data->localData[0]->realVars[201] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[232] /* genericGlider_mass_explicit.actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4747
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[3] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] + 0.525 * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3]
*/
void TestGlider_eqFunction_4747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4747};
  data->localData[0]->realVars[510] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[3] variable */ = data->localData[0]->realVars[201] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[198] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4748
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[3] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[3] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,3] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4748};
  data->localData[0]->realVars[476] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[3] variable */ = data->localData[0]->realVars[510] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[3] variable */ + (data->localData[0]->realVars[440] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4749
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].r[3] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[3]
*/
void TestGlider_eqFunction_4749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4749};
  data->localData[0]->realVars[473] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].r[3] variable */ = data->localData[0]->realVars[476] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[3] variable */;
  TRACE_POP
}
/*
equation index: 4750
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4750};
  data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */ = (data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4751
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[1,2] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4751};
  data->localData[0]->realVars[260] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[1,2] variable */ = (data->localData[0]->realVars[268] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[269] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[270] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4752
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,2] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4752};
  data->localData[0]->realVars[263] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,2] variable */ = (data->localData[0]->realVars[271] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[272] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[273] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4753
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].r[2] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[2] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,2] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4753};
  data->localData[0]->realVars[291] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].r[2] variable */ = data->localData[0]->realVars[316] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[2] variable */ + (data->localData[0]->realVars[263] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4754
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[3,2] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4754};
  data->localData[0]->realVars[266] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[3,2] variable */ = (data->localData[0]->realVars[274] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[275] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[276] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4755
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[1,2] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4755};
  data->localData[0]->realVars[347] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[1,2] variable */ = (data->localData[0]->realVars[355] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[356] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[357] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4756
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,2] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4756};
  data->localData[0]->realVars[350] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,2] variable */ = (data->localData[0]->realVars[358] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[359] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[360] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4757
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].r[2] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[2] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,2] * genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2]
*/
void TestGlider_eqFunction_4757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4757};
  data->localData[0]->realVars[378] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].r[2] variable */ = data->localData[0]->realVars[405] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[2] variable */ + (data->localData[0]->realVars[350] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4758
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[3,2] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4758};
  data->localData[0]->realVars[353] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[3,2] variable */ = (data->localData[0]->realVars[361] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[362] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[363] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4759
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[1,2] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4759};
  data->localData[0]->realVars[436] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[1,2] variable */ = (data->localData[0]->realVars[444] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[445] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[446] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4760
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,2] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4760};
  data->localData[0]->realVars[439] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,2] variable */ = (data->localData[0]->realVars[447] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[448] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[449] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4761
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[3,2] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4761};
  data->localData[0]->realVars[442] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[3,2] variable */ = (data->localData[0]->realVars[450] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[451] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[452] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4762
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.v_0[2] = $DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4762};
  data->localData[0]->realVars[215] /* genericGlider_mass_explicit.actuators.body_rolling.v_0[2] DUMMY_STATE */ = data->localData[0]->realVars[58] /* der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[2]) DUMMY_DER */ + (data->localData[0]->realVars[191] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */) + (data->localData[0]->realVars[194] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) + (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 4763
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] = genericGlider_mass_explicit.actuators.body_rolling.v_0[2]
*/
void TestGlider_eqFunction_4763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4763};
  data->localData[0]->realVars[61] /* der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2]) DUMMY_DER */ = data->localData[0]->realVars[215] /* genericGlider_mass_explicit.actuators.body_rolling.v_0[2] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4764
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] = genericGlider_mass_explicit.actuators.body_rolling.v_0[2]
*/
void TestGlider_eqFunction_4764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4764};
  data->localData[0]->realVars[49] /* der(genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2]) DUMMY_DER */ = data->localData[0]->realVars[215] /* genericGlider_mass_explicit.actuators.body_rolling.v_0[2] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4765
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_arrowHead.r[2] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] * genericGlider_mass_explicit.actuators.fixedFrame.lineLength
*/
void TestGlider_eqFunction_4765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4765};
  data->localData[0]->realVars[417] /* genericGlider_mass_explicit.actuators.fixedFrame.z_arrowHead.r[2] variable */ = data->localData[0]->realVars[200] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[232] /* genericGlider_mass_explicit.actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4766
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[2] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] + 0.525 * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2]
*/
void TestGlider_eqFunction_4766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4766};
  data->localData[0]->realVars[509] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[2] variable */ = data->localData[0]->realVars[200] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[197] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4767
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[2] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[2] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,2] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4767};
  data->localData[0]->realVars[475] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[2] variable */ = data->localData[0]->realVars[509] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[2] variable */ + (data->localData[0]->realVars[439] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4768
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].r[2] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[2]
*/
void TestGlider_eqFunction_4768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4768};
  data->localData[0]->realVars[472] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].r[2] variable */ = data->localData[0]->realVars[475] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[2] variable */;
  TRACE_POP
}
/*
equation index: 4769
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] = genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] * genericGlider_mass_explicit.hull.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] * genericGlider_mass_explicit.hull.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] * genericGlider_mass_explicit.hull.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4769};
  data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */ = (data->localData[0]->realVars[590] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) + (data->localData[0]->realVars[591] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) + (data->localData[0]->realVars[592] /* genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4770
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[1,1] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4770};
  data->localData[0]->realVars[259] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[1,1] variable */ = (data->localData[0]->realVars[268] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[269] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[270] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4771
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,1] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4771};
  data->localData[0]->realVars[262] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,1] variable */ = (data->localData[0]->realVars[271] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[272] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[273] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4772
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].r[1] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[1] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,1] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4772};
  data->localData[0]->realVars[290] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.cylinders[2].r[1] variable */ = data->localData[0]->realVars[315] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.r_abs[1] variable */ + (data->localData[0]->realVars[262] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4773
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[3,1] = genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4773};
  data->localData[0]->realVars[265] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_lines[3,1] variable */ = (data->localData[0]->realVars[274] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[275] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[276] /* genericGlider_mass_explicit.actuators.fixedFrame.x_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4774
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[1,1] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4774};
  data->localData[0]->realVars[346] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[1,1] variable */ = (data->localData[0]->realVars[355] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[356] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[357] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4775
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,1] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4775};
  data->localData[0]->realVars[349] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,1] variable */ = (data->localData[0]->realVars[358] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[359] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[360] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4776
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].r[1] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,1] * genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2]
*/
void TestGlider_eqFunction_4776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4776};
  data->localData[0]->realVars[377] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.cylinders[2].r[1] variable */ = data->localData[0]->realVars[404] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.r_abs[1] variable */ + (data->localData[0]->realVars[349] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[395] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4777
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[3,1] = genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4777};
  data->localData[0]->realVars[352] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_lines[3,1] variable */ = (data->localData[0]->realVars[361] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[362] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[363] /* genericGlider_mass_explicit.actuators.fixedFrame.y_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4778
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[1,1] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4778};
  data->localData[0]->realVars[435] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[1,1] variable */ = (data->localData[0]->realVars[444] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[445] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[446] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4779
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,1] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4779};
  data->localData[0]->realVars[438] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,1] variable */ = (data->localData[0]->realVars[447] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[448] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[449] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4780
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[3,1] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,1] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,2] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,3] * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4780};
  data->localData[0]->realVars[441] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[3,1] variable */ = (data->localData[0]->realVars[450] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[451] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[452] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4781
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.body_rolling.v_0[1] = $DER.genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] * genericGlider_mass_explicit.actuators.prismatic.v + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] * genericGlider_mass_explicit.actuators.body_rolling.w_a[3] * genericGlider_mass_explicit.actuators.position_slidingMass.s + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * (-genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) * genericGlider_mass_explicit.actuators.position_slidingMass.s
*/
void TestGlider_eqFunction_4781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4781};
  data->localData[0]->realVars[214] /* genericGlider_mass_explicit.actuators.body_rolling.v_0[1] DUMMY_STATE */ = data->localData[0]->realVars[57] /* der(genericGlider_mass_explicit.actuators.fixedTranslation_hinge.frame_b.r_0[1]) DUMMY_DER */ + (data->localData[0]->realVars[190] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[5] /* genericGlider_mass_explicit.actuators.prismatic.v STATE(1,genericGlider_mass_explicit.actuators.position_slidingMass.a) */) + (data->localData[0]->realVars[193] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((data->localData[0]->realVars[219] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */)) + (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * (((-data->localData[0]->realVars[218] /* genericGlider_mass_explicit.actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* genericGlider_mass_explicit.actuators.position_slidingMass.s STATE(1,genericGlider_mass_explicit.actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 4782
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] = genericGlider_mass_explicit.actuators.body_rolling.v_0[1]
*/
void TestGlider_eqFunction_4782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4782};
  data->localData[0]->realVars[60] /* der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1]) DUMMY_DER */ = data->localData[0]->realVars[214] /* genericGlider_mass_explicit.actuators.body_rolling.v_0[1] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4783
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] = genericGlider_mass_explicit.actuators.body_rolling.v_0[1]
*/
void TestGlider_eqFunction_4783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4783};
  data->localData[0]->realVars[48] /* der(genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1]) DUMMY_DER */ = data->localData[0]->realVars[214] /* genericGlider_mass_explicit.actuators.body_rolling.v_0[1] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4784
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_arrowHead.r[1] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] + genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] * genericGlider_mass_explicit.actuators.fixedFrame.lineLength
*/
void TestGlider_eqFunction_4784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4784};
  data->localData[0]->realVars[416] /* genericGlider_mass_explicit.actuators.fixedFrame.z_arrowHead.r[1] variable */ = data->localData[0]->realVars[199] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */) * (data->localData[0]->realVars[232] /* genericGlider_mass_explicit.actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4785
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[1] = genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] + 0.525 * genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1]
*/
void TestGlider_eqFunction_4785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4785};
  data->localData[0]->realVars[508] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[1] variable */ = data->localData[0]->realVars[199] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[196] /* genericGlider_mass_explicit.actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4786
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[1] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[1] + genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,1] * genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1]
*/
void TestGlider_eqFunction_4786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4786};
  data->localData[0]->realVars[474] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[1] variable */ = data->localData[0]->realVars[508] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.r_abs[1] variable */ + (data->localData[0]->realVars[438] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[500] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4787
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].r[1] = genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[1]
*/
void TestGlider_eqFunction_4787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4787};
  data->localData[0]->realVars[471] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[2].r[1] variable */ = data->localData[0]->realVars[474] /* genericGlider_mass_explicit.actuators.fixedFrame.z_label.cylinders[3].r[1] variable */;
  TRACE_POP
}
/*
equation index: 4916
type: LINEAR

<var>genericGlider_mass_explicit.hull.a_0[2]</var>
<var>genericGlider_mass_explicit.hull.a_0[3]</var>
<var>genericGlider_mass_explicit.hull.a_0[1]</var>
<var>genericGlider_mass_explicit.hull.z_a[3]</var>
<var>genericGlider_mass_explicit.hull.z_a[2]</var>
<var>genericGlider_mass_explicit.hull.z_a[1]</var>
<var>genericGlider_mass_explicit.hull.frame_a.t[2]</var>
<var>genericGlider_mass_explicit.actuators.frame_a.t[2]</var>
<var>genericGlider_mass_explicit.actuators.revolute.frame_a.t[2]</var>
<var>genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1]</var>
<var>genericGlider_mass_explicit.hull.frame_a.f[1]</var>
<var>genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1]</var>
<var>genericGlider_mass_explicit.hull.frame_a.f[2]</var>
<var>genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2]</var>
<var>genericGlider_mass_explicit.actuators.revolute.frame_a.f[2]</var>
<var>genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1]</var>
<var>genericGlider_mass_explicit.hull.frame_a.t[1]</var>
<var>genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void TestGlider_eqFunction_4916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4916};
  /* Linear equation system */
  int retValue;
  double aux_x[18] = { data->localData[1]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */,data->localData[1]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */,data->localData[1]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */,data->localData[1]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */,data->localData[1]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */,data->localData[1]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */,data->localData[1]->realVars[1349] /* genericGlider_mass_explicit.hull.frame_a.t[2] variable */,data->localData[1]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */,data->localData[1]->realVars[611] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] variable */,data->localData[1]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */,data->localData[1]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */,data->localData[1]->realVars[676] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] variable */,data->localData[1]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */,data->localData[1]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */,data->localData[1]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */,data->localData[1]->realVars[164] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] variable */,data->localData[1]->realVars[1348] /* genericGlider_mass_explicit.hull.frame_a.t[1] variable */,data->localData[1]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 4916 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,4916};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 4916 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */ = aux_x[0];
  data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */ = aux_x[1];
  data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */ = aux_x[2];
  data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */ = aux_x[3];
  data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */ = aux_x[4];
  data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */ = aux_x[5];
  data->localData[0]->realVars[1349] /* genericGlider_mass_explicit.hull.frame_a.t[2] variable */ = aux_x[6];
  data->localData[0]->realVars[554] /* genericGlider_mass_explicit.actuators.frame_a.t[2] variable */ = aux_x[7];
  data->localData[0]->realVars[611] /* genericGlider_mass_explicit.actuators.revolute.frame_a.t[2] variable */ = aux_x[8];
  data->localData[0]->realVars[158] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[1] variable */ = aux_x[9];
  data->localData[0]->realVars[1345] /* genericGlider_mass_explicit.hull.frame_a.f[1] variable */ = aux_x[10];
  data->localData[0]->realVars[676] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.a[1] variable */ = aux_x[11];
  data->localData[0]->realVars[1346] /* genericGlider_mass_explicit.hull.frame_a.f[2] variable */ = aux_x[12];
  data->localData[0]->realVars[159] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.f[2] variable */ = aux_x[13];
  data->localData[0]->realVars[608] /* genericGlider_mass_explicit.actuators.revolute.frame_a.f[2] variable */ = aux_x[14];
  data->localData[0]->realVars[164] /* genericGlider_mass_explicit.actuators.bodyVariableMass.frame_a.t[1] variable */ = aux_x[15];
  data->localData[0]->realVars[1348] /* genericGlider_mass_explicit.hull.frame_a.t[1] variable */ = aux_x[16];
  data->localData[0]->realVars[1105] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.z[1] variable */ = aux_x[17];

  TRACE_POP
}
/*
equation index: 4917
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.hull.w_a[3] = genericGlider_mass_explicit.hull.z_a[3]
*/
void TestGlider_eqFunction_4917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4917};
  data->localData[0]->realVars[28] /* der(genericGlider_mass_explicit.hull.w_a[3]) STATE_DER */ = data->localData[0]->realVars[1365] /* genericGlider_mass_explicit.hull.z_a[3] variable */;
  TRACE_POP
}
/*
equation index: 4918
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.body_rolling.w_a[2] = genericGlider_mass_explicit.actuators.body_rolling.z_a[2]
*/
void TestGlider_eqFunction_4918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4918};
  data->localData[0]->realVars[55] /* der(genericGlider_mass_explicit.actuators.body_rolling.w_a[2]) DUMMY_DER */ = data->localData[0]->realVars[221] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[2] variable */;
  TRACE_POP
}
/*
equation index: 4919
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u = genericGlider_mass_explicit.hull.a_0[2]
*/
void TestGlider_eqFunction_4919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4919};
  data->localData[0]->realVars[24] /* der(genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) STATE_DER */ = data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 4920
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] = genericGlider_mass_explicit.hull.a_0[2]
*/
void TestGlider_eqFunction_4920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4920};
  data->localData[0]->realVars[156] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[2] variable */ = data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 4921
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[2] = genericGlider_mass_explicit.hull.a_0[2]
*/
void TestGlider_eqFunction_4921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4921};
  data->localData[0]->realVars[46] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[2]) DUMMY_DER */ = data->localData[0]->realVars[1334] /* genericGlider_mass_explicit.hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 4922
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.body_rolling.w_a[3] = genericGlider_mass_explicit.actuators.body_rolling.z_a[3]
*/
void TestGlider_eqFunction_4922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4922};
  data->localData[0]->realVars[56] /* der(genericGlider_mass_explicit.actuators.body_rolling.w_a[3]) DUMMY_DER */ = data->localData[0]->realVars[222] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[3] variable */;
  TRACE_POP
}
/*
equation index: 4923
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] = genericGlider_mass_explicit.actuators.body_rolling.a_0[3]
*/
void TestGlider_eqFunction_4923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4923};
  data->localData[0]->realVars[37] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 4924
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.body_rolling.v_0[3] = genericGlider_mass_explicit.actuators.body_rolling.a_0[3]
*/
void TestGlider_eqFunction_4924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4924};
  data->localData[0]->realVars[53] /* der(genericGlider_mass_explicit.actuators.body_rolling.v_0[3]) DUMMY_DER */ = data->localData[0]->realVars[189] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 4925
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u = genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_4925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4925};
  data->localData[0]->realVars[25] /* der(genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) STATE_DER */ = data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 4926
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] = genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_4926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4926};
  data->localData[0]->realVars[157] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[3] variable */ = data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 4927
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[3] = genericGlider_mass_explicit.hull.a_0[3]
*/
void TestGlider_eqFunction_4927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4927};
  data->localData[0]->realVars[47] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[3]) DUMMY_DER */ = data->localData[0]->realVars[1335] /* genericGlider_mass_explicit.hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 4928
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].u = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y
*/
void TestGlider_eqFunction_4928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4928};
  data->localData[0]->realVars[75] /* der(genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].u) DUMMY_DER */ = data->localData[0]->realVars[898] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[1].y variable */;
  TRACE_POP
}
/*
equation index: 4929
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].u = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y
*/
void TestGlider_eqFunction_4929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4929};
  data->localData[0]->realVars[76] /* der(genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].u) DUMMY_DER */ = data->localData[0]->realVars[899] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[2].y variable */;
  TRACE_POP
}
/*
equation index: 4930
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] = (-genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1]) / genericGlider_mass_explicit.addedMassForcesTorques.torque.Nm_to_m
*/
void TestGlider_eqFunction_4930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4930};
  data->localData[0]->realVars[1235] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1238] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] variable */),data->simulationInfo->realParameter[354] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.Nm_to_m PARAM */,"genericGlider_mass_explicit.addedMassForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4931
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[1] = -genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1]
*/
void TestGlider_eqFunction_4931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4931};
  data->localData[0]->realVars[1183] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[1] variable */ = (-data->localData[0]->realVars[1238] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[1] variable */);
  TRACE_POP
}
/*
equation index: 4932
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].u = genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void TestGlider_eqFunction_4932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4932};
  data->localData[0]->realVars[77] /* der(genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].u) DUMMY_DER */ = data->localData[0]->realVars[900] /* genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der2[3].y variable */;
  TRACE_POP
}
/*
equation index: 4933
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.hull.w_a[1] = genericGlider_mass_explicit.hull.z_a[1]
*/
void TestGlider_eqFunction_4933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4933};
  data->localData[0]->realVars[26] /* der(genericGlider_mass_explicit.hull.w_a[1]) STATE_DER */ = data->localData[0]->realVars[1363] /* genericGlider_mass_explicit.hull.z_a[1] variable */;
  TRACE_POP
}
/*
equation index: 4934
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] = (-genericGlider_mass_explicit.addedMassForcesTorques.force.force[1]) / genericGlider_mass_explicit.addedMassForcesTorques.force.N_to_m
*/
void TestGlider_eqFunction_4934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4934};
  data->localData[0]->realVars[1153] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1156] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] variable */),data->simulationInfo->realParameter[345] /* genericGlider_mass_explicit.addedMassForcesTorques.force.N_to_m PARAM */,"genericGlider_mass_explicit.addedMassForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4935
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[1] = -genericGlider_mass_explicit.addedMassForcesTorques.force.force[1]
*/
void TestGlider_eqFunction_4935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4935};
  data->localData[0]->realVars[1180] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[1] variable */ = (-data->localData[0]->realVars[1156] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[1] variable */);
  TRACE_POP
}
/*
equation index: 4936
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] = (-genericGlider_mass_explicit.addedMassForcesTorques.force.force[2]) / genericGlider_mass_explicit.addedMassForcesTorques.force.N_to_m
*/
void TestGlider_eqFunction_4936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4936};
  data->localData[0]->realVars[1154] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1157] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] variable */),data->simulationInfo->realParameter[345] /* genericGlider_mass_explicit.addedMassForcesTorques.force.N_to_m PARAM */,"genericGlider_mass_explicit.addedMassForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4937
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[2] = -genericGlider_mass_explicit.addedMassForcesTorques.force.force[2]
*/
void TestGlider_eqFunction_4937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4937};
  data->localData[0]->realVars[1181] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[2] variable */ = (-data->localData[0]->realVars[1157] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[2] variable */);
  TRACE_POP
}
/*
equation index: 4938
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3] = (-genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3]) / genericGlider_mass_explicit.addedMassForcesTorques.torque.Nm_to_m
*/
void TestGlider_eqFunction_4938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4938};
  data->localData[0]->realVars[1237] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1240] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] variable */),data->simulationInfo->realParameter[354] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.Nm_to_m PARAM */,"genericGlider_mass_explicit.addedMassForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4939
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[3] = -genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3]
*/
void TestGlider_eqFunction_4939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4939};
  data->localData[0]->realVars[1185] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[3] variable */ = (-data->localData[0]->realVars[1240] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[3] variable */);
  TRACE_POP
}
/*
equation index: 4940
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] = (-genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2]) / genericGlider_mass_explicit.addedMassForcesTorques.torque.Nm_to_m
*/
void TestGlider_eqFunction_4940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4940};
  data->localData[0]->realVars[1236] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1239] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] variable */),data->simulationInfo->realParameter[354] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.Nm_to_m PARAM */,"genericGlider_mass_explicit.addedMassForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4941
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length = sqrt(genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] ^ 2.0 + genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] ^ 2.0 + genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3] ^ 2.0)
*/
void TestGlider_eqFunction_4941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4941};
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  tmp61 = data->localData[0]->realVars[1235] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] variable */;
  tmp62 = data->localData[0]->realVars[1236] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] variable */;
  tmp63 = data->localData[0]->realVars[1237] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3] variable */;
  data->localData[0]->realVars[1219] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length variable */ = sqrt((tmp61 * tmp61) + (tmp62 * tmp62) + (tmp63 * tmp63));
  TRACE_POP
}
/*
equation index: 4942
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[1] = if noEvent(genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length < 1e-10) then 1.0 else (-genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1]) / genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length
*/
void TestGlider_eqFunction_4942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4942};
  modelica_boolean tmp64;
  tmp64 = Less(data->localData[0]->realVars[1219] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1214] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[1] variable */ = (tmp64?1.0:DIVISION_SIM((-data->localData[0]->realVars[1235] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] variable */),data->localData[0]->realVars[1219] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length variable */,"genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4943
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength = max(0.0, genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length + (-6.0) * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4943};
  data->localData[0]->realVars[1209] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[1219] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length variable */ + (-6.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4944
type: SIMPLE_ASSIGN
$cse6 = min(genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length, 4.0 * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4944};
  data->localData[0]->realVars[87] /* $cse6 variable */ = fmin(data->localData[0]->realVars[1219] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4945
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.headLength = max(0.0, $cse6)
*/
void TestGlider_eqFunction_4945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4945};
  data->localData[0]->realVars[1217] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.headLength variable */ = fmax(0.0,data->localData[0]->realVars[87] /* $cse6 variable */);
  TRACE_POP
}
/*
equation index: 4946
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[3] = if noEvent(genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length < 1e-10) then 0.0 else (-genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3]) / genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length
*/
void TestGlider_eqFunction_4946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4946};
  modelica_boolean tmp65;
  tmp65 = Less(data->localData[0]->realVars[1219] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1216] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[3] variable */ = (tmp65?0.0:DIVISION_SIM((-data->localData[0]->realVars[1237] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3] variable */),data->localData[0]->realVars[1219] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length variable */,"genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4947
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[2] = if noEvent(genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length < 1e-10) then 0.0 else (-genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2]) / genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length
*/
void TestGlider_eqFunction_4947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4947};
  modelica_boolean tmp66;
  tmp66 = Less(data->localData[0]->realVars[1219] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1215] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[2] variable */ = (tmp66?0.0:DIVISION_SIM((-data->localData[0]->realVars[1236] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] variable */),data->localData[0]->realVars[1219] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length variable */,"genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4948
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[3]
*/
void TestGlider_eqFunction_4948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4948};
  data->localData[0]->realVars[1223] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[1] variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1214] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1215] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1216] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4949
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[2] = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[3]
*/
void TestGlider_eqFunction_4949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4949};
  data->localData[0]->realVars[1224] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[2] variable */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1214] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1215] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1216] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4950
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[3] = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[3]
*/
void TestGlider_eqFunction_4950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4950};
  data->localData[0]->realVars[1225] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[3] variable */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1214] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1215] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1216] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4951
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3]
*/
void TestGlider_eqFunction_4951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4951};
  data->localData[0]->realVars[1220] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[1] variable */ = data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1235] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1236] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1237] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4952
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead1.r[1] = genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[1] + genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[1] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength
*/
void TestGlider_eqFunction_4952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4952};
  data->localData[0]->realVars[1187] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead1.r[1] variable */ = data->localData[0]->realVars[1220] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1223] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1209] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4953
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead2.r[1] = genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[1] + genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[1] * (genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength + 0.5 * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.headLength)
*/
void TestGlider_eqFunction_4953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4953};
  data->localData[0]->realVars[1200] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead2.r[1] variable */ = data->localData[0]->realVars[1220] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1223] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1209] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1217] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4954
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3]
*/
void TestGlider_eqFunction_4954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4954};
  data->localData[0]->realVars[1221] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[2] variable */ = data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1235] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1236] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1237] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4955
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead1.r[2] = genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[2] + genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[2] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength
*/
void TestGlider_eqFunction_4955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4955};
  data->localData[0]->realVars[1188] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead1.r[2] variable */ = data->localData[0]->realVars[1221] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1224] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1209] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4956
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead2.r[2] = genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[2] + genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[2] * (genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength + 0.5 * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.headLength)
*/
void TestGlider_eqFunction_4956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4956};
  data->localData[0]->realVars[1201] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead2.r[2] variable */ = data->localData[0]->realVars[1221] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1224] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1209] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1217] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4957
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3]
*/
void TestGlider_eqFunction_4957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4957};
  data->localData[0]->realVars[1222] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[3] variable */ = data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1235] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1236] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1237] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4958
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead1.r[3] = genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[3] + genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[3] * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength
*/
void TestGlider_eqFunction_4958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4958};
  data->localData[0]->realVars[1189] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead1.r[3] variable */ = data->localData[0]->realVars[1222] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1225] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1209] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4959
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead2.r[3] = genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[3] + genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[3] * (genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength + 0.5 * genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.headLength)
*/
void TestGlider_eqFunction_4959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4959};
  data->localData[0]->realVars[1202] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowHead2.r[3] variable */ = data->localData[0]->realVars[1222] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1225] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1209] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1217] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4960
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[2] = -genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2]
*/
void TestGlider_eqFunction_4960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4960};
  data->localData[0]->realVars[1184] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.t[2] variable */ = (-data->localData[0]->realVars[1239] /* genericGlider_mass_explicit.addedMassForcesTorques.torque.torque[2] variable */);
  TRACE_POP
}
/*
equation index: 4961
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3] = (-genericGlider_mass_explicit.addedMassForcesTorques.force.force[3]) / genericGlider_mass_explicit.addedMassForcesTorques.force.N_to_m
*/
void TestGlider_eqFunction_4961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4961};
  data->localData[0]->realVars[1155] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1158] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] variable */),data->simulationInfo->realParameter[345] /* genericGlider_mass_explicit.addedMassForcesTorques.force.N_to_m PARAM */,"genericGlider_mass_explicit.addedMassForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4962
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length = sqrt(genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] ^ 2.0 + genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] ^ 2.0 + genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3] ^ 2.0)
*/
void TestGlider_eqFunction_4962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4962};
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  tmp67 = data->localData[0]->realVars[1153] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] variable */;
  tmp68 = data->localData[0]->realVars[1154] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] variable */;
  tmp69 = data->localData[0]->realVars[1155] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3] variable */;
  data->localData[0]->realVars[1137] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length variable */ = sqrt((tmp67 * tmp67) + (tmp68 * tmp68) + (tmp69 * tmp69));
  TRACE_POP
}
/*
equation index: 4963
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[1] = if noEvent(genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length < 1e-10) then 1.0 else (-genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1]) / genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length
*/
void TestGlider_eqFunction_4963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4963};
  modelica_boolean tmp70;
  tmp70 = Less(data->localData[0]->realVars[1137] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1134] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[1] variable */ = (tmp70?1.0:DIVISION_SIM((-data->localData[0]->realVars[1153] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] variable */),data->localData[0]->realVars[1137] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length variable */,"genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4964
type: SIMPLE_ASSIGN
$cse4 = min(genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length, 4.0 * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4964};
  data->localData[0]->realVars[85] /* $cse4 variable */ = fmin(data->localData[0]->realVars[1137] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4965
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowHead.length = max(0.0, $cse4)
*/
void TestGlider_eqFunction_4965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4965};
  data->localData[0]->realVars[1119] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowHead.length variable */ = fmax(0.0,data->localData[0]->realVars[85] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 4966
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowLength = max(0.0, genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length + (-4.0) * genericGlider_mass_explicit.world.defaultArrowDiameter)
*/
void TestGlider_eqFunction_4966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4966};
  data->localData[0]->realVars[1129] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[1137] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length variable */ + (-4.0) * (data->simulationInfo->realParameter[509] /* genericGlider_mass_explicit.world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4967
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[2] = if noEvent(genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length < 1e-10) then 0.0 else (-genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2]) / genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length
*/
void TestGlider_eqFunction_4967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4967};
  modelica_boolean tmp71;
  tmp71 = Less(data->localData[0]->realVars[1137] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1135] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[2] variable */ = (tmp71?0.0:DIVISION_SIM((-data->localData[0]->realVars[1154] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] variable */),data->localData[0]->realVars[1137] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length variable */,"genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4968
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[3] = if noEvent(genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length < 1e-10) then 0.0 else (-genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3]) / genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length
*/
void TestGlider_eqFunction_4968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4968};
  modelica_boolean tmp72;
  tmp72 = Less(data->localData[0]->realVars[1137] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1136] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[3] variable */ = (tmp72?0.0:DIVISION_SIM((-data->localData[0]->realVars[1155] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3] variable */),data->localData[0]->realVars[1137] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length variable */,"genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4969
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[1] = genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[3]
*/
void TestGlider_eqFunction_4969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4969};
  data->localData[0]->realVars[1141] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[1] variable */ = (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1134] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1135] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1136] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4970
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[2] = genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[3]
*/
void TestGlider_eqFunction_4970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4970};
  data->localData[0]->realVars[1142] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[2] variable */ = (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1134] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1135] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1136] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4971
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[3] = genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[3]
*/
void TestGlider_eqFunction_4971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4971};
  data->localData[0]->realVars[1143] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[3] variable */ = (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1134] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1135] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1136] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4972
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[1] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,1] * genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,1] * genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,1] * genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3]
*/
void TestGlider_eqFunction_4972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4972};
  data->localData[0]->realVars[1138] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[1] variable */ = data->localData[0]->realVars[13] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1153] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1154] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1342] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1155] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4973
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowHead.r[1] = genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[1] + genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[1] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowLength
*/
void TestGlider_eqFunction_4973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4973};
  data->localData[0]->realVars[1120] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowHead.r[1] variable */ = data->localData[0]->realVars[1138] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1141] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1129] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4974
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[2] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,2] * genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,2] * genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,2] * genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3]
*/
void TestGlider_eqFunction_4974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4974};
  data->localData[0]->realVars[1139] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[2] variable */ = data->localData[0]->realVars[14] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1153] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1154] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1155] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4975
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowHead.r[2] = genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[2] + genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[2] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowLength
*/
void TestGlider_eqFunction_4975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4975};
  data->localData[0]->realVars[1121] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowHead.r[2] variable */ = data->localData[0]->realVars[1139] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1142] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1129] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4976
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[3] = genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + genericGlider_mass_explicit.hull.frame_a.R.T[1,3] * genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] + genericGlider_mass_explicit.hull.frame_a.R.T[2,3] * genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] + genericGlider_mass_explicit.hull.frame_a.R.T[3,3] * genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3]
*/
void TestGlider_eqFunction_4976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4976};
  data->localData[0]->realVars[1140] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[3] variable */ = data->localData[0]->realVars[15] /* genericGlider_mass_explicit.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1153] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[1154] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[1155] /* genericGlider_mass_explicit.addedMassForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4977
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowHead.r[3] = genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[3] + genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[3] * genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowLength
*/
void TestGlider_eqFunction_4977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4977};
  data->localData[0]->realVars[1122] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowHead.r[3] variable */ = data->localData[0]->realVars[1140] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1143] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1129] /* genericGlider_mass_explicit.addedMassForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4978
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[3] = -genericGlider_mass_explicit.addedMassForcesTorques.force.force[3]
*/
void TestGlider_eqFunction_4978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4978};
  data->localData[0]->realVars[1182] /* genericGlider_mass_explicit.addedMassForcesTorques.frame_b.f[3] variable */ = (-data->localData[0]->realVars[1158] /* genericGlider_mass_explicit.addedMassForcesTorques.force.force[3] variable */);
  TRACE_POP
}
/*
equation index: 4979
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u = genericGlider_mass_explicit.hull.a_0[1]
*/
void TestGlider_eqFunction_4979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4979};
  data->localData[0]->realVars[23] /* der(genericGlider_mass_explicit.addedMassForcesTorques.absoluteSensor.der1[1].u) STATE_DER */ = data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 4980
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] = genericGlider_mass_explicit.hull.a_0[1]
*/
void TestGlider_eqFunction_4980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4980};
  data->localData[0]->realVars[155] /* genericGlider_mass_explicit.actuators.bodyVariableMass.a_0[1] variable */ = data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 4981
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[1] = genericGlider_mass_explicit.hull.a_0[1]
*/
void TestGlider_eqFunction_4981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4981};
  data->localData[0]->realVars[45] /* der(genericGlider_mass_explicit.actuators.bodyVariableMass.v_0[1]) DUMMY_DER */ = data->localData[0]->realVars[1333] /* genericGlider_mass_explicit.hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 4982
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.hull.w_a[2] = genericGlider_mass_explicit.hull.z_a[2]
*/
void TestGlider_eqFunction_4982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4982};
  data->localData[0]->realVars[27] /* der(genericGlider_mass_explicit.hull.w_a[2]) STATE_DER */ = data->localData[0]->realVars[1364] /* genericGlider_mass_explicit.hull.z_a[2] variable */;
  TRACE_POP
}
/*
equation index: 4983
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] = genericGlider_mass_explicit.actuators.body_rolling.a_0[1]
*/
void TestGlider_eqFunction_4983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4983};
  data->localData[0]->realVars[35] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 4984
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.body_rolling.v_0[1] = genericGlider_mass_explicit.actuators.body_rolling.a_0[1]
*/
void TestGlider_eqFunction_4984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4984};
  data->localData[0]->realVars[51] /* der(genericGlider_mass_explicit.actuators.body_rolling.v_0[1]) DUMMY_DER */ = data->localData[0]->realVars[187] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 4985
type: SIMPLE_ASSIGN
$DER.$DER.genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] = genericGlider_mass_explicit.actuators.body_rolling.a_0[2]
*/
void TestGlider_eqFunction_4985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4985};
  data->localData[0]->realVars[36] /* der(der(genericGlider_mass_explicit.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 4986
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.body_rolling.v_0[2] = genericGlider_mass_explicit.actuators.body_rolling.a_0[2]
*/
void TestGlider_eqFunction_4986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4986};
  data->localData[0]->realVars[52] /* der(genericGlider_mass_explicit.actuators.body_rolling.v_0[2]) DUMMY_DER */ = data->localData[0]->realVars[188] /* genericGlider_mass_explicit.actuators.body_rolling.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 4987
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.body_rolling.w_a[1] = genericGlider_mass_explicit.actuators.body_rolling.z_a[1]
*/
void TestGlider_eqFunction_4987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4987};
  data->localData[0]->realVars[54] /* der(genericGlider_mass_explicit.actuators.body_rolling.w_a[1]) DUMMY_DER */ = data->localData[0]->realVars[220] /* genericGlider_mass_explicit.actuators.body_rolling.z_a[1] variable */;
  TRACE_POP
}
/*
equation index: 4988
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.actuators.revolute.tau = (-genericGlider_mass_explicit.actuators.revolute.frame_b.t[2]) * genericGlider_mass_explicit.actuators.revolute.e[2] - genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] * genericGlider_mass_explicit.actuators.revolute.e[3] - genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] * genericGlider_mass_explicit.actuators.revolute.e[1]
*/
void TestGlider_eqFunction_4988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4988};
  data->localData[0]->realVars[616] /* genericGlider_mass_explicit.actuators.revolute.tau variable */ = ((-data->localData[0]->realVars[613] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[2] variable */)) * (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) - ((data->localData[0]->realVars[614] /* genericGlider_mass_explicit.actuators.revolute.frame_b.t[3] variable */) * (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */)) - ((data->localData[0]->realVars[580] /* genericGlider_mass_explicit.actuators.prismatic.frame_b.t[1] variable */) * (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */));
  TRACE_POP
}
/*
equation index: 4989
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3] = (1.0 - genericGlider_mass_explicit.actuators.revolute.e[3] ^ 2.0) * (-$cse1) * genericGlider_mass_explicit.actuators.revolute.w
*/
void TestGlider_eqFunction_4989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4989};
  modelica_real tmp73;
  tmp73 = data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */;
  data->localData[0]->realVars[71] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,3]) DUMMY_DER */ = (1.0 - ((tmp73 * tmp73))) * (((-data->localData[0]->realVars[82] /* $cse1 variable */)) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */));
  TRACE_POP
}
/*
equation index: 4990
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2] = (-genericGlider_mass_explicit.actuators.revolute.e[3]) * (-$cse1) * genericGlider_mass_explicit.actuators.revolute.w * genericGlider_mass_explicit.actuators.revolute.e[2] - genericGlider_mass_explicit.actuators.revolute.e[1] * $cse2 * genericGlider_mass_explicit.actuators.revolute.w
*/
void TestGlider_eqFunction_4990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4990};
  data->localData[0]->realVars[70] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,2]) DUMMY_DER */ = ((-data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */)) * (((-data->localData[0]->realVars[82] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */) * (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */))) - ((data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) * ((data->localData[0]->realVars[83] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */)));
  TRACE_POP
}
/*
equation index: 4991
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1] = genericGlider_mass_explicit.actuators.revolute.e[2] * $cse2 * genericGlider_mass_explicit.actuators.revolute.w - genericGlider_mass_explicit.actuators.revolute.e[3] * (-$cse1) * genericGlider_mass_explicit.actuators.revolute.w * genericGlider_mass_explicit.actuators.revolute.e[1]
*/
void TestGlider_eqFunction_4991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4991};
  data->localData[0]->realVars[69] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.T[3,1]) DUMMY_DER */ = (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) * ((data->localData[0]->realVars[83] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */)) - ((data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) * (((-data->localData[0]->realVars[82] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */) * (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */))));
  TRACE_POP
}
/*
equation index: 4992
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3] = genericGlider_mass_explicit.actuators.revolute.e[1] * $cse2 * genericGlider_mass_explicit.actuators.revolute.w - genericGlider_mass_explicit.actuators.revolute.e[2] * (-$cse1) * genericGlider_mass_explicit.actuators.revolute.w * genericGlider_mass_explicit.actuators.revolute.e[3]
*/
void TestGlider_eqFunction_4992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4992};
  data->localData[0]->realVars[68] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,3]) DUMMY_DER */ = (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) * ((data->localData[0]->realVars[83] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */)) - ((data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) * (((-data->localData[0]->realVars[82] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */) * (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */))));
  TRACE_POP
}
/*
equation index: 4993
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2] = (1.0 - genericGlider_mass_explicit.actuators.revolute.e[2] ^ 2.0) * (-$cse1) * genericGlider_mass_explicit.actuators.revolute.w
*/
void TestGlider_eqFunction_4993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4993};
  modelica_real tmp74;
  tmp74 = data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */;
  data->localData[0]->realVars[67] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,2]) DUMMY_DER */ = (1.0 - ((tmp74 * tmp74))) * (((-data->localData[0]->realVars[82] /* $cse1 variable */)) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */));
  TRACE_POP
}
/*
equation index: 4994
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1] = (-genericGlider_mass_explicit.actuators.revolute.e[2]) * (-$cse1) * genericGlider_mass_explicit.actuators.revolute.w * genericGlider_mass_explicit.actuators.revolute.e[1] - genericGlider_mass_explicit.actuators.revolute.e[3] * $cse2 * genericGlider_mass_explicit.actuators.revolute.w
*/
void TestGlider_eqFunction_4994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4994};
  data->localData[0]->realVars[66] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.T[2,1]) DUMMY_DER */ = ((-data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */)) * (((-data->localData[0]->realVars[82] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */) * (data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */))) - ((data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) * ((data->localData[0]->realVars[83] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */)));
  TRACE_POP
}
/*
equation index: 4995
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3] = (-genericGlider_mass_explicit.actuators.revolute.e[1]) * (-$cse1) * genericGlider_mass_explicit.actuators.revolute.w * genericGlider_mass_explicit.actuators.revolute.e[3] - genericGlider_mass_explicit.actuators.revolute.e[2] * $cse2 * genericGlider_mass_explicit.actuators.revolute.w
*/
void TestGlider_eqFunction_4995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4995};
  data->localData[0]->realVars[65] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,3]) DUMMY_DER */ = ((-data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */)) * (((-data->localData[0]->realVars[82] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */) * (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */))) - ((data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */) * ((data->localData[0]->realVars[83] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */)));
  TRACE_POP
}
/*
equation index: 4996
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2] = genericGlider_mass_explicit.actuators.revolute.e[3] * $cse2 * genericGlider_mass_explicit.actuators.revolute.w - genericGlider_mass_explicit.actuators.revolute.e[1] * (-$cse1) * genericGlider_mass_explicit.actuators.revolute.w * genericGlider_mass_explicit.actuators.revolute.e[2]
*/
void TestGlider_eqFunction_4996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4996};
  data->localData[0]->realVars[64] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,2]) DUMMY_DER */ = (data->simulationInfo->realParameter[268] /* genericGlider_mass_explicit.actuators.revolute.e[3] PARAM */) * ((data->localData[0]->realVars[83] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */)) - ((data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */) * (((-data->localData[0]->realVars[82] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */) * (data->simulationInfo->realParameter[267] /* genericGlider_mass_explicit.actuators.revolute.e[2] PARAM */))));
  TRACE_POP
}
/*
equation index: 4997
type: SIMPLE_ASSIGN
$DER.genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1] = (1.0 - genericGlider_mass_explicit.actuators.revolute.e[1] ^ 2.0) * (-$cse1) * genericGlider_mass_explicit.actuators.revolute.w
*/
void TestGlider_eqFunction_4997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4997};
  modelica_real tmp75;
  tmp75 = data->simulationInfo->realParameter[266] /* genericGlider_mass_explicit.actuators.revolute.e[1] PARAM */;
  data->localData[0]->realVars[63] /* der(genericGlider_mass_explicit.actuators.revolute.R_rel.T[1,1]) DUMMY_DER */ = (1.0 - ((tmp75 * tmp75))) * (((-data->localData[0]->realVars[82] /* $cse1 variable */)) * (data->localData[0]->realVars[6] /* genericGlider_mass_explicit.actuators.revolute.w STATE(1,genericGlider_mass_explicit.actuators.position.a) */));
  TRACE_POP
}
/*
equation index: 4998
type: SIMPLE_ASSIGN
VBD_mass_change.y = VBD_mass_change.offset + (if time < VBD_mass_change.startTime then 0.0 else if time < VBD_mass_change.startTime + VBD_mass_change.duration then (time - VBD_mass_change.startTime) * VBD_mass_change.height / VBD_mass_change.duration else VBD_mass_change.height)
*/
void TestGlider_eqFunction_4998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4998};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[3] /* VBD_mass_change.startTime PARAM */, 6, Less);
  tmp78 = (modelica_boolean)tmp76;
  if(tmp78)
  {
    tmp79 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[3] /* VBD_mass_change.startTime PARAM */ + data->simulationInfo->realParameter[0] /* VBD_mass_change.duration PARAM */, 7, Less);
    tmp79 = (tmp77?(data->localData[0]->timeValue - data->simulationInfo->realParameter[3] /* VBD_mass_change.startTime PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[1] /* VBD_mass_change.height PARAM */,data->simulationInfo->realParameter[0] /* VBD_mass_change.duration PARAM */,"VBD_mass_change.duration",equationIndexes)):data->simulationInfo->realParameter[1] /* VBD_mass_change.height PARAM */);
  }
  data->localData[0]->realVars[91] /* VBD_mass_change.y variable */ = data->simulationInfo->realParameter[2] /* VBD_mass_change.offset PARAM */ + tmp79;
  TRACE_POP
}
/*
equation index: 4999
type: SIMPLE_ASSIGN
add1.u2 = ramp.offset + (if time < ramp.startTime then 0.0 else if time < ramp.startTime + ramp.duration then (time - ramp.startTime) * ramp.height / ramp.duration else ramp.height)
*/
void TestGlider_eqFunction_4999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4999};
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[625] /* ramp.startTime PARAM */, 4, Less);
  tmp82 = (modelica_boolean)tmp80;
  if(tmp82)
  {
    tmp83 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[625] /* ramp.startTime PARAM */ + data->simulationInfo->realParameter[622] /* ramp.duration PARAM */, 5, Less);
    tmp83 = (tmp81?(data->localData[0]->timeValue - data->simulationInfo->realParameter[625] /* ramp.startTime PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[623] /* ramp.height PARAM */,data->simulationInfo->realParameter[622] /* ramp.duration PARAM */,"ramp.duration",equationIndexes)):data->simulationInfo->realParameter[623] /* ramp.height PARAM */);
  }
  data->localData[0]->realVars[94] /* add1.u2 variable */ = data->simulationInfo->realParameter[624] /* ramp.offset PARAM */ + tmp83;
  TRACE_POP
}
/*
equation index: 5000
type: SIMPLE_ASSIGN
add1.y = add1.k1 * VBD_mass_change.y + add1.k2 * add1.u2
*/
void TestGlider_eqFunction_5000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5000};
  data->localData[0]->realVars[95] /* add1.y variable */ = (data->simulationInfo->realParameter[7] /* add1.k1 PARAM */) * (data->localData[0]->realVars[91] /* VBD_mass_change.y variable */) + (data->simulationInfo->realParameter[8] /* add1.k2 PARAM */) * (data->localData[0]->realVars[94] /* add1.u2 variable */);
  TRACE_POP
}
/*
equation index: 5001
type: SIMPLE_ASSIGN
add6.u2 = ramp4.offset + (if time < ramp4.startTime then 0.0 else if time < ramp4.startTime + ramp4.duration then (time - ramp4.startTime) * ramp4.height / ramp4.duration else ramp4.height)
*/
void TestGlider_eqFunction_5001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5001};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[641] /* ramp4.startTime PARAM */, 2, Less);
  tmp86 = (modelica_boolean)tmp84;
  if(tmp86)
  {
    tmp87 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[641] /* ramp4.startTime PARAM */ + data->simulationInfo->realParameter[638] /* ramp4.duration PARAM */, 3, Less);
    tmp87 = (tmp85?(data->localData[0]->timeValue - data->simulationInfo->realParameter[641] /* ramp4.startTime PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[639] /* ramp4.height PARAM */,data->simulationInfo->realParameter[638] /* ramp4.duration PARAM */,"ramp4.duration",equationIndexes)):data->simulationInfo->realParameter[639] /* ramp4.height PARAM */);
  }
  data->localData[0]->realVars[105] /* add6.u2 variable */ = data->simulationInfo->realParameter[640] /* ramp4.offset PARAM */ + tmp87;
  TRACE_POP
}
/*
equation index: 5002
type: SIMPLE_ASSIGN
add6.u1 = ramp5.offset + (if time < ramp5.startTime then 0.0 else if time < ramp5.startTime + ramp5.duration then (time - ramp5.startTime) * ramp5.height / ramp5.duration else ramp5.height)
*/
void TestGlider_eqFunction_5002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5002};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[645] /* ramp5.startTime PARAM */, 0, Less);
  tmp90 = (modelica_boolean)tmp88;
  if(tmp90)
  {
    tmp91 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[645] /* ramp5.startTime PARAM */ + data->simulationInfo->realParameter[642] /* ramp5.duration PARAM */, 1, Less);
    tmp91 = (tmp89?(data->localData[0]->timeValue - data->simulationInfo->realParameter[645] /* ramp5.startTime PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[643] /* ramp5.height PARAM */,data->simulationInfo->realParameter[642] /* ramp5.duration PARAM */,"ramp5.duration",equationIndexes)):data->simulationInfo->realParameter[643] /* ramp5.height PARAM */);
  }
  data->localData[0]->realVars[104] /* add6.u1 variable */ = data->simulationInfo->realParameter[644] /* ramp5.offset PARAM */ + tmp91;
  TRACE_POP
}
/*
equation index: 5003
type: SIMPLE_ASSIGN
add5.u2 = add6.k1 * add6.u1 + add6.k2 * add6.u2
*/
void TestGlider_eqFunction_5003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5003};
  data->localData[0]->realVars[102] /* add5.u2 variable */ = (data->simulationInfo->realParameter[17] /* add6.k1 PARAM */) * (data->localData[0]->realVars[104] /* add6.u1 variable */) + (data->simulationInfo->realParameter[18] /* add6.k2 PARAM */) * (data->localData[0]->realVars[105] /* add6.u2 variable */);
  TRACE_POP
}
/*
equation index: 5004
type: SIMPLE_ASSIGN
add5.y = add5.k1 * add1.y + add5.k2 * add5.u2
*/
void TestGlider_eqFunction_5004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5004};
  data->localData[0]->realVars[103] /* add5.y variable */ = (data->simulationInfo->realParameter[15] /* add5.k1 PARAM */) * (data->localData[0]->realVars[95] /* add1.y variable */) + (data->simulationInfo->realParameter[16] /* add5.k2 PARAM */) * (data->localData[0]->realVars[102] /* add5.u2 variable */);
  TRACE_POP
}
/*
equation index: 5005
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.m_0 = genericGlider_mass_explicit.m_h + genericGlider_mass_explicit.m_r + add5.y - genericGlider_mass_explicit.m_w
*/
void TestGlider_eqFunction_5005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5005};
  data->localData[0]->realVars[1671] /* genericGlider_mass_explicit.m_0 variable */ = data->simulationInfo->realParameter[479] /* genericGlider_mass_explicit.m_h PARAM */ + data->simulationInfo->realParameter[480] /* genericGlider_mass_explicit.m_r PARAM */ + data->localData[0]->realVars[103] /* add5.y variable */ - data->simulationInfo->realParameter[481] /* genericGlider_mass_explicit.m_w PARAM */;
  TRACE_POP
}
/*
equation index: 5006
type: SIMPLE_ASSIGN
add2.u1 = movable_mass_displacement.offset + (if time < movable_mass_displacement.startTime then 0.0 else if time < movable_mass_displacement.startTime + movable_mass_displacement.duration then (time - movable_mass_displacement.startTime) * movable_mass_displacement.height / movable_mass_displacement.duration else movable_mass_displacement.height)
*/
void TestGlider_eqFunction_5006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5006};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  modelica_real tmp95;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[619] /* movable_mass_displacement.startTime PARAM */, 14, Less);
  tmp94 = (modelica_boolean)tmp92;
  if(tmp94)
  {
    tmp95 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[619] /* movable_mass_displacement.startTime PARAM */ + data->simulationInfo->realParameter[616] /* movable_mass_displacement.duration PARAM */, 15, Less);
    tmp95 = (tmp93?(data->localData[0]->timeValue - data->simulationInfo->realParameter[619] /* movable_mass_displacement.startTime PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[617] /* movable_mass_displacement.height PARAM */,data->simulationInfo->realParameter[616] /* movable_mass_displacement.duration PARAM */,"movable_mass_displacement.duration",equationIndexes)):data->simulationInfo->realParameter[617] /* movable_mass_displacement.height PARAM */);
  }
  data->localData[0]->realVars[96] /* add2.u1 variable */ = data->simulationInfo->realParameter[618] /* movable_mass_displacement.offset PARAM */ + tmp95;
  TRACE_POP
}
/*
equation index: 5007
type: SIMPLE_ASSIGN
add2.u2 = ramp1.offset + (if time < ramp1.startTime then 0.0 else if time < ramp1.startTime + ramp1.duration then (time - ramp1.startTime) * ramp1.height / ramp1.duration else ramp1.height)
*/
void TestGlider_eqFunction_5007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5007};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_real tmp99;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[629] /* ramp1.startTime PARAM */, 12, Less);
  tmp98 = (modelica_boolean)tmp96;
  if(tmp98)
  {
    tmp99 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[629] /* ramp1.startTime PARAM */ + data->simulationInfo->realParameter[626] /* ramp1.duration PARAM */, 13, Less);
    tmp99 = (tmp97?(data->localData[0]->timeValue - data->simulationInfo->realParameter[629] /* ramp1.startTime PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[627] /* ramp1.height PARAM */,data->simulationInfo->realParameter[626] /* ramp1.duration PARAM */,"ramp1.duration",equationIndexes)):data->simulationInfo->realParameter[627] /* ramp1.height PARAM */);
  }
  data->localData[0]->realVars[97] /* add2.u2 variable */ = data->simulationInfo->realParameter[628] /* ramp1.offset PARAM */ + tmp99;
  TRACE_POP
}
/*
equation index: 5008
type: SIMPLE_ASSIGN
add2.y = add2.k1 * add2.u1 + add2.k2 * add2.u2
*/
void TestGlider_eqFunction_5008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5008};
  data->localData[0]->realVars[98] /* add2.y variable */ = (data->simulationInfo->realParameter[9] /* add2.k1 PARAM */) * (data->localData[0]->realVars[96] /* add2.u1 variable */) + (data->simulationInfo->realParameter[10] /* add2.k2 PARAM */) * (data->localData[0]->realVars[97] /* add2.u2 variable */);
  TRACE_POP
}
/*
equation index: 5009
type: SIMPLE_ASSIGN
add3.u1 = ramp2.offset + (if time < ramp2.startTime then 0.0 else if time < ramp2.startTime + ramp2.duration then (time - ramp2.startTime) * ramp2.height / ramp2.duration else ramp2.height)
*/
void TestGlider_eqFunction_5009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5009};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[633] /* ramp2.startTime PARAM */, 10, Less);
  tmp102 = (modelica_boolean)tmp100;
  if(tmp102)
  {
    tmp103 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[633] /* ramp2.startTime PARAM */ + data->simulationInfo->realParameter[630] /* ramp2.duration PARAM */, 11, Less);
    tmp103 = (tmp101?(data->localData[0]->timeValue - data->simulationInfo->realParameter[633] /* ramp2.startTime PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[631] /* ramp2.height PARAM */,data->simulationInfo->realParameter[630] /* ramp2.duration PARAM */,"ramp2.duration",equationIndexes)):data->simulationInfo->realParameter[631] /* ramp2.height PARAM */);
  }
  data->localData[0]->realVars[99] /* add3.u1 variable */ = data->simulationInfo->realParameter[632] /* ramp2.offset PARAM */ + tmp103;
  TRACE_POP
}
/*
equation index: 5010
type: SIMPLE_ASSIGN
add3.u2 = ramp3.offset + (if time < ramp3.startTime then 0.0 else if time < ramp3.startTime + ramp3.duration then (time - ramp3.startTime) * ramp3.height / ramp3.duration else ramp3.height)
*/
void TestGlider_eqFunction_5010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5010};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  modelica_real tmp107;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[637] /* ramp3.startTime PARAM */, 8, Less);
  tmp106 = (modelica_boolean)tmp104;
  if(tmp106)
  {
    tmp107 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[637] /* ramp3.startTime PARAM */ + data->simulationInfo->realParameter[634] /* ramp3.duration PARAM */, 9, Less);
    tmp107 = (tmp105?(data->localData[0]->timeValue - data->simulationInfo->realParameter[637] /* ramp3.startTime PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[635] /* ramp3.height PARAM */,data->simulationInfo->realParameter[634] /* ramp3.duration PARAM */,"ramp3.duration",equationIndexes)):data->simulationInfo->realParameter[635] /* ramp3.height PARAM */);
  }
  data->localData[0]->realVars[100] /* add3.u2 variable */ = data->simulationInfo->realParameter[636] /* ramp3.offset PARAM */ + tmp107;
  TRACE_POP
}
/*
equation index: 5011
type: SIMPLE_ASSIGN
add3.y = add3.k1 * add3.u1 + add3.k2 * add3.u2
*/
void TestGlider_eqFunction_5011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5011};
  data->localData[0]->realVars[101] /* add3.y variable */ = (data->simulationInfo->realParameter[11] /* add3.k1 PARAM */) * (data->localData[0]->realVars[99] /* add3.u1 variable */) + (data->simulationInfo->realParameter[12] /* add3.k2 PARAM */) * (data->localData[0]->realVars[100] /* add3.u2 variable */);
  TRACE_POP
}
/*
equation index: 5012
type: SIMPLE_ASSIGN
add.u2 = add4.k1 * add2.y + add4.k2 * add3.y
*/
void TestGlider_eqFunction_5012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5012};
  data->localData[0]->realVars[92] /* add.u2 variable */ = (data->simulationInfo->realParameter[13] /* add4.k1 PARAM */) * (data->localData[0]->realVars[98] /* add2.y variable */) + (data->simulationInfo->realParameter[14] /* add4.k2 PARAM */) * (data->localData[0]->realVars[101] /* add3.y variable */);
  TRACE_POP
}
/*
equation index: 5013
type: SIMPLE_ASSIGN
add.y = add.k1 * movable_mass_init_pos.k + add.k2 * add.u2
*/
void TestGlider_eqFunction_5013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5013};
  data->localData[0]->realVars[93] /* add.y variable */ = (data->simulationInfo->realParameter[4] /* add.k1 PARAM */) * (data->simulationInfo->realParameter[620] /* movable_mass_init_pos.k PARAM */) + (data->simulationInfo->realParameter[5] /* add.k2 PARAM */) * (data->localData[0]->realVars[92] /* add.u2 variable */);
  TRACE_POP
}
/*
equation index: 5014
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.in_pos_m_r = rotating_mass_pos.offset + (if time < rotating_mass_pos.startTime then 0.0 else if time < rotating_mass_pos.startTime + rotating_mass_pos.duration then (time - rotating_mass_pos.startTime) * rotating_mass_pos.height / rotating_mass_pos.duration else rotating_mass_pos.height)
*/
void TestGlider_eqFunction_5014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5014};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[649] /* rotating_mass_pos.startTime PARAM */, 16, Less);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[649] /* rotating_mass_pos.startTime PARAM */ + data->simulationInfo->realParameter[646] /* rotating_mass_pos.duration PARAM */, 17, Less);
    tmp111 = (tmp109?(data->localData[0]->timeValue - data->simulationInfo->realParameter[649] /* rotating_mass_pos.startTime PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[647] /* rotating_mass_pos.height PARAM */,data->simulationInfo->realParameter[646] /* rotating_mass_pos.duration PARAM */,"rotating_mass_pos.duration",equationIndexes)):data->simulationInfo->realParameter[647] /* rotating_mass_pos.height PARAM */);
  }
  data->localData[0]->realVars[1670] /* genericGlider_mass_explicit.in_pos_m_r variable */ = data->simulationInfo->realParameter[648] /* rotating_mass_pos.offset PARAM */ + tmp111;
  TRACE_POP
}
/*
equation index: 5015
type: ARRAY_CALL_ASSIGN

genericGlider_mass_explicit.world.z_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 0.0, 1.0}, {0.0, 1.0, 0.0})
*/
void TestGlider_eqFunction_5015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5015};
  real_array tmp112;
  real_array_create(&tmp112, ((modelica_real*)&((&data->localData[0]->realVars[2076] /* genericGlider_mass_explicit.world.z_label.R_lines[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT13, _OMC_LIT12), tmp112);
  TRACE_POP
}
/*
equation index: 5016
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[2] = genericGlider_mass_explicit.world.z_label.R_lines[1,2] * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5016};
  data->localData[0]->realVars[2098] /* genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[2077] /* genericGlider_mass_explicit.world.z_label.R_lines[1,2] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5017
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[1].lengthDirection[2] = genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[2]
*/
void TestGlider_eqFunction_5017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5017};
  data->localData[0]->realVars[2095] /* genericGlider_mass_explicit.world.z_label.cylinders[1].lengthDirection[2] variable */ = data->localData[0]->realVars[2098] /* genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[2] variable */;
  TRACE_POP
}
/*
equation index: 5018
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[1] = genericGlider_mass_explicit.world.z_label.R_lines[1,1] * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5018};
  data->localData[0]->realVars[2097] /* genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[2076] /* genericGlider_mass_explicit.world.z_label.R_lines[1,1] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5019
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[1].lengthDirection[1] = genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[1]
*/
void TestGlider_eqFunction_5019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5019};
  data->localData[0]->realVars[2094] /* genericGlider_mass_explicit.world.z_label.cylinders[1].lengthDirection[1] variable */ = data->localData[0]->realVars[2097] /* genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[1] variable */;
  TRACE_POP
}
/*
equation index: 5020
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[3].r[2] = genericGlider_mass_explicit.world.z_label.R_lines[2,2] * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5020};
  data->localData[0]->realVars[2107] /* genericGlider_mass_explicit.world.z_label.cylinders[3].r[2] variable */ = (data->localData[0]->realVars[2080] /* genericGlider_mass_explicit.world.z_label.R_lines[2,2] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5021
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[2].r[2] = genericGlider_mass_explicit.world.z_label.cylinders[3].r[2]
*/
void TestGlider_eqFunction_5021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5021};
  data->localData[0]->realVars[2104] /* genericGlider_mass_explicit.world.z_label.cylinders[2].r[2] variable */ = data->localData[0]->realVars[2107] /* genericGlider_mass_explicit.world.z_label.cylinders[3].r[2] variable */;
  TRACE_POP
}
/*
equation index: 5022
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[3].lengthDirection[2] = (genericGlider_mass_explicit.world.z_label.R_lines[1,2] - genericGlider_mass_explicit.world.z_label.R_lines[2,2]) * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5022};
  data->localData[0]->realVars[2101] /* genericGlider_mass_explicit.world.z_label.cylinders[3].lengthDirection[2] variable */ = (data->localData[0]->realVars[2077] /* genericGlider_mass_explicit.world.z_label.R_lines[1,2] variable */ - data->localData[0]->realVars[2080] /* genericGlider_mass_explicit.world.z_label.R_lines[2,2] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5023
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[3].r[1] = genericGlider_mass_explicit.world.z_label.R_lines[2,1] * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5023};
  data->localData[0]->realVars[2106] /* genericGlider_mass_explicit.world.z_label.cylinders[3].r[1] variable */ = (data->localData[0]->realVars[2079] /* genericGlider_mass_explicit.world.z_label.R_lines[2,1] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5024
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[2].r[1] = genericGlider_mass_explicit.world.z_label.cylinders[3].r[1]
*/
void TestGlider_eqFunction_5024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5024};
  data->localData[0]->realVars[2103] /* genericGlider_mass_explicit.world.z_label.cylinders[2].r[1] variable */ = data->localData[0]->realVars[2106] /* genericGlider_mass_explicit.world.z_label.cylinders[3].r[1] variable */;
  TRACE_POP
}
/*
equation index: 5025
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[3].lengthDirection[1] = (genericGlider_mass_explicit.world.z_label.R_lines[1,1] - genericGlider_mass_explicit.world.z_label.R_lines[2,1]) * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5025};
  data->localData[0]->realVars[2100] /* genericGlider_mass_explicit.world.z_label.cylinders[3].lengthDirection[1] variable */ = (data->localData[0]->realVars[2076] /* genericGlider_mass_explicit.world.z_label.R_lines[1,1] variable */ - data->localData[0]->realVars[2079] /* genericGlider_mass_explicit.world.z_label.R_lines[2,1] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5026
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[3] = genericGlider_mass_explicit.world.z_label.R_lines[1,3] * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5026};
  data->localData[0]->realVars[2099] /* genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[2078] /* genericGlider_mass_explicit.world.z_label.R_lines[1,3] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5027
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[1].lengthDirection[3] = genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[3]
*/
void TestGlider_eqFunction_5027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5027};
  data->localData[0]->realVars[2096] /* genericGlider_mass_explicit.world.z_label.cylinders[1].lengthDirection[3] variable */ = data->localData[0]->realVars[2099] /* genericGlider_mass_explicit.world.z_label.cylinders[2].lengthDirection[3] variable */;
  TRACE_POP
}
/*
equation index: 5028
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[3].r[3] = genericGlider_mass_explicit.world.labelStart + genericGlider_mass_explicit.world.z_label.R_lines[2,3] * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5028};
  data->localData[0]->realVars[2108] /* genericGlider_mass_explicit.world.z_label.cylinders[3].r[3] variable */ = data->simulationInfo->realParameter[549] /* genericGlider_mass_explicit.world.labelStart PARAM */ + (data->localData[0]->realVars[2081] /* genericGlider_mass_explicit.world.z_label.R_lines[2,3] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5029
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[2].r[3] = genericGlider_mass_explicit.world.z_label.cylinders[3].r[3]
*/
void TestGlider_eqFunction_5029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5029};
  data->localData[0]->realVars[2105] /* genericGlider_mass_explicit.world.z_label.cylinders[2].r[3] variable */ = data->localData[0]->realVars[2108] /* genericGlider_mass_explicit.world.z_label.cylinders[3].r[3] variable */;
  TRACE_POP
}
/*
equation index: 5030
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.z_label.cylinders[3].lengthDirection[3] = (genericGlider_mass_explicit.world.z_label.R_lines[1,3] - genericGlider_mass_explicit.world.z_label.R_lines[2,3]) * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5030};
  data->localData[0]->realVars[2102] /* genericGlider_mass_explicit.world.z_label.cylinders[3].lengthDirection[3] variable */ = (data->localData[0]->realVars[2078] /* genericGlider_mass_explicit.world.z_label.R_lines[1,3] variable */ - data->localData[0]->realVars[2081] /* genericGlider_mass_explicit.world.z_label.R_lines[2,3] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5031
type: ARRAY_CALL_ASSIGN

genericGlider_mass_explicit.world.y_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 1.0, 0.0}, {-1.0, 0.0, 0.0})
*/
void TestGlider_eqFunction_5031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5031};
  real_array tmp113;
  real_array_create(&tmp113, ((modelica_real*)&((&data->localData[0]->realVars[1952] /* genericGlider_mass_explicit.world.y_label.R_lines[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT12, _OMC_LIT14), tmp113);
  TRACE_POP
}
/*
equation index: 5032
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.y_label.cylinders[2].r[2] = genericGlider_mass_explicit.world.labelStart + genericGlider_mass_explicit.world.y_label.R_lines[2,2] * genericGlider_mass_explicit.world.y_label.lines[2,1,2]
*/
void TestGlider_eqFunction_5032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5032};
  data->localData[0]->realVars[1975] /* genericGlider_mass_explicit.world.y_label.cylinders[2].r[2] variable */ = data->simulationInfo->realParameter[549] /* genericGlider_mass_explicit.world.labelStart PARAM */ + (data->localData[0]->realVars[1956] /* genericGlider_mass_explicit.world.y_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[1993] /* genericGlider_mass_explicit.world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 5033
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.y_label.cylinders[1].lengthDirection[1] = genericGlider_mass_explicit.world.y_label.R_lines[1,1] * genericGlider_mass_explicit.world.scaledLabel + genericGlider_mass_explicit.world.y_label.R_lines[2,1] * genericGlider_mass_explicit.world.y_label.lines[1,2,2]
*/
void TestGlider_eqFunction_5033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5033};
  data->localData[0]->realVars[1968] /* genericGlider_mass_explicit.world.y_label.cylinders[1].lengthDirection[1] variable */ = (data->localData[0]->realVars[1952] /* genericGlider_mass_explicit.world.y_label.R_lines[1,1] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */) + (data->localData[0]->realVars[1955] /* genericGlider_mass_explicit.world.y_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[1991] /* genericGlider_mass_explicit.world.y_label.lines[1,2,2] variable */);
  TRACE_POP
}
/*
equation index: 5034
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.y_label.cylinders[2].r[1] = genericGlider_mass_explicit.world.y_label.R_lines[2,1] * genericGlider_mass_explicit.world.y_label.lines[2,1,2]
*/
void TestGlider_eqFunction_5034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5034};
  data->localData[0]->realVars[1974] /* genericGlider_mass_explicit.world.y_label.cylinders[2].r[1] variable */ = (data->localData[0]->realVars[1955] /* genericGlider_mass_explicit.world.y_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[1993] /* genericGlider_mass_explicit.world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 5035
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.y_label.cylinders[2].lengthDirection[1] = genericGlider_mass_explicit.world.y_label.R_lines[1,1] * genericGlider_mass_explicit.world.y_label.lines[2,2,1] + genericGlider_mass_explicit.world.y_label.R_lines[2,1] * (genericGlider_mass_explicit.world.y_label.lines[2,2,2] - genericGlider_mass_explicit.world.y_label.lines[2,1,2])
*/
void TestGlider_eqFunction_5035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5035};
  data->localData[0]->realVars[1971] /* genericGlider_mass_explicit.world.y_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[1952] /* genericGlider_mass_explicit.world.y_label.R_lines[1,1] variable */) * (data->localData[0]->realVars[1994] /* genericGlider_mass_explicit.world.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[1955] /* genericGlider_mass_explicit.world.y_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[1995] /* genericGlider_mass_explicit.world.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[1993] /* genericGlider_mass_explicit.world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 5036
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.y_label.cylinders[1].lengthDirection[2] = genericGlider_mass_explicit.world.y_label.R_lines[1,2] * genericGlider_mass_explicit.world.scaledLabel + genericGlider_mass_explicit.world.y_label.R_lines[2,2] * genericGlider_mass_explicit.world.y_label.lines[1,2,2]
*/
void TestGlider_eqFunction_5036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5036};
  data->localData[0]->realVars[1969] /* genericGlider_mass_explicit.world.y_label.cylinders[1].lengthDirection[2] variable */ = (data->localData[0]->realVars[1953] /* genericGlider_mass_explicit.world.y_label.R_lines[1,2] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */) + (data->localData[0]->realVars[1956] /* genericGlider_mass_explicit.world.y_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[1991] /* genericGlider_mass_explicit.world.y_label.lines[1,2,2] variable */);
  TRACE_POP
}
/*
equation index: 5037
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.y_label.cylinders[2].lengthDirection[2] = genericGlider_mass_explicit.world.y_label.R_lines[1,2] * genericGlider_mass_explicit.world.y_label.lines[2,2,1] + genericGlider_mass_explicit.world.y_label.R_lines[2,2] * (genericGlider_mass_explicit.world.y_label.lines[2,2,2] - genericGlider_mass_explicit.world.y_label.lines[2,1,2])
*/
void TestGlider_eqFunction_5037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5037};
  data->localData[0]->realVars[1972] /* genericGlider_mass_explicit.world.y_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[1953] /* genericGlider_mass_explicit.world.y_label.R_lines[1,2] variable */) * (data->localData[0]->realVars[1994] /* genericGlider_mass_explicit.world.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[1956] /* genericGlider_mass_explicit.world.y_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[1995] /* genericGlider_mass_explicit.world.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[1993] /* genericGlider_mass_explicit.world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 5038
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.y_label.cylinders[2].r[3] = genericGlider_mass_explicit.world.y_label.R_lines[2,3] * genericGlider_mass_explicit.world.y_label.lines[2,1,2]
*/
void TestGlider_eqFunction_5038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5038};
  data->localData[0]->realVars[1976] /* genericGlider_mass_explicit.world.y_label.cylinders[2].r[3] variable */ = (data->localData[0]->realVars[1957] /* genericGlider_mass_explicit.world.y_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[1993] /* genericGlider_mass_explicit.world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 5039
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.y_label.cylinders[1].lengthDirection[3] = genericGlider_mass_explicit.world.y_label.R_lines[1,3] * genericGlider_mass_explicit.world.scaledLabel + genericGlider_mass_explicit.world.y_label.R_lines[2,3] * genericGlider_mass_explicit.world.y_label.lines[1,2,2]
*/
void TestGlider_eqFunction_5039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5039};
  data->localData[0]->realVars[1970] /* genericGlider_mass_explicit.world.y_label.cylinders[1].lengthDirection[3] variable */ = (data->localData[0]->realVars[1954] /* genericGlider_mass_explicit.world.y_label.R_lines[1,3] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */) + (data->localData[0]->realVars[1957] /* genericGlider_mass_explicit.world.y_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[1991] /* genericGlider_mass_explicit.world.y_label.lines[1,2,2] variable */);
  TRACE_POP
}
/*
equation index: 5040
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.y_label.cylinders[2].lengthDirection[3] = genericGlider_mass_explicit.world.y_label.R_lines[1,3] * genericGlider_mass_explicit.world.y_label.lines[2,2,1] + genericGlider_mass_explicit.world.y_label.R_lines[2,3] * (genericGlider_mass_explicit.world.y_label.lines[2,2,2] - genericGlider_mass_explicit.world.y_label.lines[2,1,2])
*/
void TestGlider_eqFunction_5040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5040};
  data->localData[0]->realVars[1973] /* genericGlider_mass_explicit.world.y_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[1954] /* genericGlider_mass_explicit.world.y_label.R_lines[1,3] variable */) * (data->localData[0]->realVars[1994] /* genericGlider_mass_explicit.world.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[1957] /* genericGlider_mass_explicit.world.y_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[1995] /* genericGlider_mass_explicit.world.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[1993] /* genericGlider_mass_explicit.world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 5041
type: ARRAY_CALL_ASSIGN

genericGlider_mass_explicit.world.x_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({1.0, 0.0, 0.0}, {0.0, 1.0, 0.0})
*/
void TestGlider_eqFunction_5041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5041};
  real_array tmp114;
  real_array_create(&tmp114, ((modelica_real*)&((&data->localData[0]->realVars[1831] /* genericGlider_mass_explicit.world.x_label.R_lines[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT11, _OMC_LIT12), tmp114);
  TRACE_POP
}
/*
equation index: 5042
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.x_label.cylinders[2].r[2] = genericGlider_mass_explicit.world.x_label.R_lines[2,2] * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5042};
  data->localData[0]->realVars[1854] /* genericGlider_mass_explicit.world.x_label.cylinders[2].r[2] variable */ = (data->localData[0]->realVars[1835] /* genericGlider_mass_explicit.world.x_label.R_lines[2,2] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5043
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.x_label.cylinders[1].lengthDirection[1] = genericGlider_mass_explicit.world.scaledLabel * (genericGlider_mass_explicit.world.x_label.R_lines[1,1] + genericGlider_mass_explicit.world.x_label.R_lines[2,1])
*/
void TestGlider_eqFunction_5043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5043};
  data->localData[0]->realVars[1847] /* genericGlider_mass_explicit.world.x_label.cylinders[1].lengthDirection[1] variable */ = (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */) * (data->localData[0]->realVars[1831] /* genericGlider_mass_explicit.world.x_label.R_lines[1,1] variable */ + data->localData[0]->realVars[1834] /* genericGlider_mass_explicit.world.x_label.R_lines[2,1] variable */);
  TRACE_POP
}
/*
equation index: 5044
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.x_label.cylinders[2].r[1] = genericGlider_mass_explicit.world.labelStart + genericGlider_mass_explicit.world.x_label.R_lines[2,1] * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5044};
  data->localData[0]->realVars[1853] /* genericGlider_mass_explicit.world.x_label.cylinders[2].r[1] variable */ = data->simulationInfo->realParameter[549] /* genericGlider_mass_explicit.world.labelStart PARAM */ + (data->localData[0]->realVars[1834] /* genericGlider_mass_explicit.world.x_label.R_lines[2,1] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5045
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.x_label.cylinders[2].lengthDirection[1] = (genericGlider_mass_explicit.world.x_label.R_lines[1,1] - genericGlider_mass_explicit.world.x_label.R_lines[2,1]) * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5045};
  data->localData[0]->realVars[1850] /* genericGlider_mass_explicit.world.x_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[1831] /* genericGlider_mass_explicit.world.x_label.R_lines[1,1] variable */ - data->localData[0]->realVars[1834] /* genericGlider_mass_explicit.world.x_label.R_lines[2,1] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5046
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.x_label.cylinders[1].lengthDirection[2] = genericGlider_mass_explicit.world.scaledLabel * (genericGlider_mass_explicit.world.x_label.R_lines[1,2] + genericGlider_mass_explicit.world.x_label.R_lines[2,2])
*/
void TestGlider_eqFunction_5046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5046};
  data->localData[0]->realVars[1848] /* genericGlider_mass_explicit.world.x_label.cylinders[1].lengthDirection[2] variable */ = (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */) * (data->localData[0]->realVars[1832] /* genericGlider_mass_explicit.world.x_label.R_lines[1,2] variable */ + data->localData[0]->realVars[1835] /* genericGlider_mass_explicit.world.x_label.R_lines[2,2] variable */);
  TRACE_POP
}
/*
equation index: 5047
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.x_label.cylinders[2].lengthDirection[2] = (genericGlider_mass_explicit.world.x_label.R_lines[1,2] - genericGlider_mass_explicit.world.x_label.R_lines[2,2]) * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5047};
  data->localData[0]->realVars[1851] /* genericGlider_mass_explicit.world.x_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[1832] /* genericGlider_mass_explicit.world.x_label.R_lines[1,2] variable */ - data->localData[0]->realVars[1835] /* genericGlider_mass_explicit.world.x_label.R_lines[2,2] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5048
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.x_label.cylinders[2].r[3] = genericGlider_mass_explicit.world.x_label.R_lines[2,3] * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5048};
  data->localData[0]->realVars[1855] /* genericGlider_mass_explicit.world.x_label.cylinders[2].r[3] variable */ = (data->localData[0]->realVars[1836] /* genericGlider_mass_explicit.world.x_label.R_lines[2,3] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5049
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.x_label.cylinders[1].lengthDirection[3] = genericGlider_mass_explicit.world.scaledLabel * (genericGlider_mass_explicit.world.x_label.R_lines[1,3] + genericGlider_mass_explicit.world.x_label.R_lines[2,3])
*/
void TestGlider_eqFunction_5049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5049};
  data->localData[0]->realVars[1849] /* genericGlider_mass_explicit.world.x_label.cylinders[1].lengthDirection[3] variable */ = (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */) * (data->localData[0]->realVars[1833] /* genericGlider_mass_explicit.world.x_label.R_lines[1,3] variable */ + data->localData[0]->realVars[1836] /* genericGlider_mass_explicit.world.x_label.R_lines[2,3] variable */);
  TRACE_POP
}
/*
equation index: 5050
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.world.x_label.cylinders[2].lengthDirection[3] = (genericGlider_mass_explicit.world.x_label.R_lines[1,3] - genericGlider_mass_explicit.world.x_label.R_lines[2,3]) * genericGlider_mass_explicit.world.scaledLabel
*/
void TestGlider_eqFunction_5050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5050};
  data->localData[0]->realVars[1852] /* genericGlider_mass_explicit.world.x_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[1833] /* genericGlider_mass_explicit.world.x_label.R_lines[1,3] variable */ - data->localData[0]->realVars[1836] /* genericGlider_mass_explicit.world.x_label.R_lines[2,3] variable */) * (data->simulationInfo->realParameter[557] /* genericGlider_mass_explicit.world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 5053
type: ALGORITHM

  assert(genericGlider_mass_explicit.actuators.limiter2.uMax >= genericGlider_mass_explicit.actuators.limiter2.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(genericGlider_mass_explicit.actuators.limiter2.uMax, 6, 0, true) + ") < uMin (=" + String(genericGlider_mass_explicit.actuators.limiter2.uMin, 6, 0, true) + ")");
*/
void TestGlider_eqFunction_5053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5053};
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,11,") < uMin (=");
  modelica_string tmp119;
  static int tmp120 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp115 = GreaterEq(data->simulationInfo->realParameter[223] /* genericGlider_mass_explicit.actuators.limiter2.uMax PARAM */,data->simulationInfo->realParameter[224] /* genericGlider_mass_explicit.actuators.limiter2.uMin PARAM */);
    if(!tmp115)
    {
      tmp117 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[223] /* genericGlider_mass_explicit.actuators.limiter2.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp118));
      tmp119 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[224] /* genericGlider_mass_explicit.actuators.limiter2.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp119);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngenericGlider_mass_explicit.actuators.limiter2.uMax >= genericGlider_mass_explicit.actuators.limiter2.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 5052
type: ALGORITHM

  assert(genericGlider_mass_explicit.actuators.limiter1.uMax >= genericGlider_mass_explicit.actuators.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(genericGlider_mass_explicit.actuators.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(genericGlider_mass_explicit.actuators.limiter1.uMin, 6, 0, true) + ")");
*/
void TestGlider_eqFunction_5052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5052};
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp123;
  static const MMC_DEFSTRINGLIT(tmp124,11,") < uMin (=");
  modelica_string tmp125;
  static int tmp126 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp121 = GreaterEq(data->simulationInfo->realParameter[221] /* genericGlider_mass_explicit.actuators.limiter1.uMax PARAM */,data->simulationInfo->realParameter[222] /* genericGlider_mass_explicit.actuators.limiter1.uMin PARAM */);
    if(!tmp121)
    {
      tmp123 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[221] /* genericGlider_mass_explicit.actuators.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp124));
      tmp125 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[222] /* genericGlider_mass_explicit.actuators.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp125);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngenericGlider_mass_explicit.actuators.limiter1.uMax >= genericGlider_mass_explicit.actuators.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 5051
type: ALGORITHM

  assert(genericGlider_mass_explicit.actuators.limiter.uMax >= genericGlider_mass_explicit.actuators.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(genericGlider_mass_explicit.actuators.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(genericGlider_mass_explicit.actuators.limiter.uMin, 6, 0, true) + ")");
*/
void TestGlider_eqFunction_5051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5051};
  modelica_boolean tmp127;
  static const MMC_DEFSTRINGLIT(tmp128,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp129;
  static const MMC_DEFSTRINGLIT(tmp130,11,") < uMin (=");
  modelica_string tmp131;
  static int tmp132 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp127 = GreaterEq(data->simulationInfo->realParameter[219] /* genericGlider_mass_explicit.actuators.limiter.uMax PARAM */,data->simulationInfo->realParameter[220] /* genericGlider_mass_explicit.actuators.limiter.uMin PARAM */);
    if(!tmp127)
    {
      tmp129 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[219] /* genericGlider_mass_explicit.actuators.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp128),tmp129);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp130));
      tmp131 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[220] /* genericGlider_mass_explicit.actuators.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp131);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngenericGlider_mass_explicit.actuators.limiter.uMax >= genericGlider_mass_explicit.actuators.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int TestGlider_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TestGlider_functionLocalKnownVars(data, threadData);
  TestGlider_eqFunction_4480(data, threadData);

  TestGlider_eqFunction_4481(data, threadData);

  TestGlider_eqFunction_4482(data, threadData);

  TestGlider_eqFunction_4483(data, threadData);

  TestGlider_eqFunction_4484(data, threadData);

  TestGlider_eqFunction_4485(data, threadData);

  TestGlider_eqFunction_4486(data, threadData);

  TestGlider_eqFunction_4487(data, threadData);

  TestGlider_eqFunction_4488(data, threadData);

  TestGlider_eqFunction_4489(data, threadData);

  TestGlider_eqFunction_4490(data, threadData);

  TestGlider_eqFunction_4491(data, threadData);

  TestGlider_eqFunction_4492(data, threadData);

  TestGlider_eqFunction_4493(data, threadData);

  TestGlider_eqFunction_4494(data, threadData);

  TestGlider_eqFunction_4495(data, threadData);

  TestGlider_eqFunction_4496(data, threadData);

  TestGlider_eqFunction_4497(data, threadData);

  TestGlider_eqFunction_4498(data, threadData);

  TestGlider_eqFunction_4499(data, threadData);

  TestGlider_eqFunction_4500(data, threadData);

  TestGlider_eqFunction_4501(data, threadData);

  TestGlider_eqFunction_4502(data, threadData);

  TestGlider_eqFunction_4503(data, threadData);

  TestGlider_eqFunction_4504(data, threadData);

  TestGlider_eqFunction_4505(data, threadData);

  TestGlider_eqFunction_4506(data, threadData);

  TestGlider_eqFunction_4507(data, threadData);

  TestGlider_eqFunction_4508(data, threadData);

  TestGlider_eqFunction_4509(data, threadData);

  TestGlider_eqFunction_4510(data, threadData);

  TestGlider_eqFunction_4511(data, threadData);

  TestGlider_eqFunction_4512(data, threadData);

  TestGlider_eqFunction_4513(data, threadData);

  TestGlider_eqFunction_4514(data, threadData);

  TestGlider_eqFunction_4515(data, threadData);

  TestGlider_eqFunction_4516(data, threadData);

  TestGlider_eqFunction_4517(data, threadData);

  TestGlider_eqFunction_4518(data, threadData);

  TestGlider_eqFunction_4519(data, threadData);

  TestGlider_eqFunction_4520(data, threadData);

  TestGlider_eqFunction_4521(data, threadData);

  TestGlider_eqFunction_4522(data, threadData);

  TestGlider_eqFunction_4523(data, threadData);

  TestGlider_eqFunction_4524(data, threadData);

  TestGlider_eqFunction_4525(data, threadData);

  TestGlider_eqFunction_4526(data, threadData);

  TestGlider_eqFunction_4527(data, threadData);

  TestGlider_eqFunction_4528(data, threadData);

  TestGlider_eqFunction_4529(data, threadData);

  TestGlider_eqFunction_4530(data, threadData);

  TestGlider_eqFunction_4531(data, threadData);

  TestGlider_eqFunction_4532(data, threadData);

  TestGlider_eqFunction_4533(data, threadData);

  TestGlider_eqFunction_4534(data, threadData);

  TestGlider_eqFunction_4535(data, threadData);

  TestGlider_eqFunction_4536(data, threadData);

  TestGlider_eqFunction_4537(data, threadData);

  TestGlider_eqFunction_4538(data, threadData);

  TestGlider_eqFunction_4539(data, threadData);

  TestGlider_eqFunction_4540(data, threadData);

  TestGlider_eqFunction_4541(data, threadData);

  TestGlider_eqFunction_4550(data, threadData);

  TestGlider_eqFunction_4551(data, threadData);

  TestGlider_eqFunction_4552(data, threadData);

  TestGlider_eqFunction_4553(data, threadData);

  TestGlider_eqFunction_4554(data, threadData);

  TestGlider_eqFunction_4555(data, threadData);

  TestGlider_eqFunction_4556(data, threadData);

  TestGlider_eqFunction_4557(data, threadData);

  TestGlider_eqFunction_4558(data, threadData);

  TestGlider_eqFunction_4559(data, threadData);

  TestGlider_eqFunction_4560(data, threadData);

  TestGlider_eqFunction_4561(data, threadData);

  TestGlider_eqFunction_4562(data, threadData);

  TestGlider_eqFunction_4563(data, threadData);

  TestGlider_eqFunction_4564(data, threadData);

  TestGlider_eqFunction_4565(data, threadData);

  TestGlider_eqFunction_4566(data, threadData);

  TestGlider_eqFunction_4567(data, threadData);

  TestGlider_eqFunction_4568(data, threadData);

  TestGlider_eqFunction_4569(data, threadData);

  TestGlider_eqFunction_4570(data, threadData);

  TestGlider_eqFunction_4571(data, threadData);

  TestGlider_eqFunction_4572(data, threadData);

  TestGlider_eqFunction_4573(data, threadData);

  TestGlider_eqFunction_4574(data, threadData);

  TestGlider_eqFunction_4575(data, threadData);

  TestGlider_eqFunction_4576(data, threadData);

  TestGlider_eqFunction_4577(data, threadData);

  TestGlider_eqFunction_4578(data, threadData);

  TestGlider_eqFunction_4579(data, threadData);

  TestGlider_eqFunction_4580(data, threadData);

  TestGlider_eqFunction_4581(data, threadData);

  TestGlider_eqFunction_4582(data, threadData);

  TestGlider_eqFunction_4583(data, threadData);

  TestGlider_eqFunction_4584(data, threadData);

  TestGlider_eqFunction_4585(data, threadData);

  TestGlider_eqFunction_4586(data, threadData);

  TestGlider_eqFunction_4587(data, threadData);

  TestGlider_eqFunction_4588(data, threadData);

  TestGlider_eqFunction_4589(data, threadData);

  TestGlider_eqFunction_4590(data, threadData);

  TestGlider_eqFunction_4591(data, threadData);

  TestGlider_eqFunction_4592(data, threadData);

  TestGlider_eqFunction_4593(data, threadData);

  TestGlider_eqFunction_4594(data, threadData);

  TestGlider_eqFunction_4595(data, threadData);

  TestGlider_eqFunction_4596(data, threadData);

  TestGlider_eqFunction_4597(data, threadData);

  TestGlider_eqFunction_4598(data, threadData);

  TestGlider_eqFunction_4599(data, threadData);

  TestGlider_eqFunction_4600(data, threadData);

  TestGlider_eqFunction_4601(data, threadData);

  TestGlider_eqFunction_4602(data, threadData);

  TestGlider_eqFunction_4603(data, threadData);

  TestGlider_eqFunction_4604(data, threadData);

  TestGlider_eqFunction_4605(data, threadData);

  TestGlider_eqFunction_4606(data, threadData);

  TestGlider_eqFunction_4607(data, threadData);

  TestGlider_eqFunction_4608(data, threadData);

  TestGlider_eqFunction_4609(data, threadData);

  TestGlider_eqFunction_4610(data, threadData);

  TestGlider_eqFunction_4611(data, threadData);

  TestGlider_eqFunction_4612(data, threadData);

  TestGlider_eqFunction_4613(data, threadData);

  TestGlider_eqFunction_4614(data, threadData);

  TestGlider_eqFunction_4615(data, threadData);

  TestGlider_eqFunction_4616(data, threadData);

  TestGlider_eqFunction_4617(data, threadData);

  TestGlider_eqFunction_4618(data, threadData);

  TestGlider_eqFunction_4619(data, threadData);

  TestGlider_eqFunction_4620(data, threadData);

  TestGlider_eqFunction_4621(data, threadData);

  TestGlider_eqFunction_4622(data, threadData);

  TestGlider_eqFunction_4623(data, threadData);

  TestGlider_eqFunction_4624(data, threadData);

  TestGlider_eqFunction_4625(data, threadData);

  TestGlider_eqFunction_4626(data, threadData);

  TestGlider_eqFunction_4627(data, threadData);

  TestGlider_eqFunction_4628(data, threadData);

  TestGlider_eqFunction_4629(data, threadData);

  TestGlider_eqFunction_4630(data, threadData);

  TestGlider_eqFunction_4631(data, threadData);

  TestGlider_eqFunction_4632(data, threadData);

  TestGlider_eqFunction_4633(data, threadData);

  TestGlider_eqFunction_4634(data, threadData);

  TestGlider_eqFunction_4635(data, threadData);

  TestGlider_eqFunction_4636(data, threadData);

  TestGlider_eqFunction_4637(data, threadData);

  TestGlider_eqFunction_4638(data, threadData);

  TestGlider_eqFunction_4639(data, threadData);

  TestGlider_eqFunction_4640(data, threadData);

  TestGlider_eqFunction_4641(data, threadData);

  TestGlider_eqFunction_4642(data, threadData);

  TestGlider_eqFunction_4643(data, threadData);

  TestGlider_eqFunction_4644(data, threadData);

  TestGlider_eqFunction_4645(data, threadData);

  TestGlider_eqFunction_4646(data, threadData);

  TestGlider_eqFunction_4647(data, threadData);

  TestGlider_eqFunction_4648(data, threadData);

  TestGlider_eqFunction_4649(data, threadData);

  TestGlider_eqFunction_4650(data, threadData);

  TestGlider_eqFunction_4651(data, threadData);

  TestGlider_eqFunction_4652(data, threadData);

  TestGlider_eqFunction_4653(data, threadData);

  TestGlider_eqFunction_4654(data, threadData);

  TestGlider_eqFunction_4655(data, threadData);

  TestGlider_eqFunction_4656(data, threadData);

  TestGlider_eqFunction_4657(data, threadData);

  TestGlider_eqFunction_4658(data, threadData);

  TestGlider_eqFunction_4659(data, threadData);

  TestGlider_eqFunction_4660(data, threadData);

  TestGlider_eqFunction_4661(data, threadData);

  TestGlider_eqFunction_4662(data, threadData);

  TestGlider_eqFunction_4663(data, threadData);

  TestGlider_eqFunction_4664(data, threadData);

  TestGlider_eqFunction_4665(data, threadData);

  TestGlider_eqFunction_4666(data, threadData);

  TestGlider_eqFunction_4667(data, threadData);

  TestGlider_eqFunction_4668(data, threadData);

  TestGlider_eqFunction_4669(data, threadData);

  TestGlider_eqFunction_4670(data, threadData);

  TestGlider_eqFunction_4671(data, threadData);

  TestGlider_eqFunction_4672(data, threadData);

  TestGlider_eqFunction_4673(data, threadData);

  TestGlider_eqFunction_4674(data, threadData);

  TestGlider_eqFunction_4675(data, threadData);

  TestGlider_eqFunction_4676(data, threadData);

  TestGlider_eqFunction_4677(data, threadData);

  TestGlider_eqFunction_4678(data, threadData);

  TestGlider_eqFunction_4679(data, threadData);

  TestGlider_eqFunction_4680(data, threadData);

  TestGlider_eqFunction_4681(data, threadData);

  TestGlider_eqFunction_4682(data, threadData);

  TestGlider_eqFunction_4683(data, threadData);

  TestGlider_eqFunction_4684(data, threadData);

  TestGlider_eqFunction_4685(data, threadData);

  TestGlider_eqFunction_4686(data, threadData);

  TestGlider_eqFunction_4687(data, threadData);

  TestGlider_eqFunction_4688(data, threadData);

  TestGlider_eqFunction_4689(data, threadData);

  TestGlider_eqFunction_4690(data, threadData);

  TestGlider_eqFunction_4691(data, threadData);

  TestGlider_eqFunction_4692(data, threadData);

  TestGlider_eqFunction_4693(data, threadData);

  TestGlider_eqFunction_4694(data, threadData);

  TestGlider_eqFunction_4695(data, threadData);

  TestGlider_eqFunction_4696(data, threadData);

  TestGlider_eqFunction_4697(data, threadData);

  TestGlider_eqFunction_4698(data, threadData);

  TestGlider_eqFunction_4699(data, threadData);

  TestGlider_eqFunction_4700(data, threadData);

  TestGlider_eqFunction_4701(data, threadData);

  TestGlider_eqFunction_4702(data, threadData);

  TestGlider_eqFunction_4703(data, threadData);

  TestGlider_eqFunction_4704(data, threadData);

  TestGlider_eqFunction_4705(data, threadData);

  TestGlider_eqFunction_4706(data, threadData);

  TestGlider_eqFunction_4707(data, threadData);

  TestGlider_eqFunction_4708(data, threadData);

  TestGlider_eqFunction_4709(data, threadData);

  TestGlider_eqFunction_4710(data, threadData);

  TestGlider_eqFunction_4711(data, threadData);

  TestGlider_eqFunction_4712(data, threadData);

  TestGlider_eqFunction_4713(data, threadData);

  TestGlider_eqFunction_4714(data, threadData);

  TestGlider_eqFunction_4715(data, threadData);

  TestGlider_eqFunction_4716(data, threadData);

  TestGlider_eqFunction_4717(data, threadData);

  TestGlider_eqFunction_4718(data, threadData);

  TestGlider_eqFunction_4719(data, threadData);

  TestGlider_eqFunction_4720(data, threadData);

  TestGlider_eqFunction_4721(data, threadData);

  TestGlider_eqFunction_4722(data, threadData);

  TestGlider_eqFunction_4723(data, threadData);

  TestGlider_eqFunction_4724(data, threadData);

  TestGlider_eqFunction_4725(data, threadData);

  TestGlider_eqFunction_4726(data, threadData);

  TestGlider_eqFunction_4727(data, threadData);

  TestGlider_eqFunction_4728(data, threadData);

  TestGlider_eqFunction_4729(data, threadData);

  TestGlider_eqFunction_4730(data, threadData);

  TestGlider_eqFunction_4731(data, threadData);

  TestGlider_eqFunction_4732(data, threadData);

  TestGlider_eqFunction_4733(data, threadData);

  TestGlider_eqFunction_4734(data, threadData);

  TestGlider_eqFunction_4735(data, threadData);

  TestGlider_eqFunction_4736(data, threadData);

  TestGlider_eqFunction_4737(data, threadData);

  TestGlider_eqFunction_4738(data, threadData);

  TestGlider_eqFunction_4739(data, threadData);

  TestGlider_eqFunction_4740(data, threadData);

  TestGlider_eqFunction_4741(data, threadData);

  TestGlider_eqFunction_4742(data, threadData);

  TestGlider_eqFunction_4743(data, threadData);

  TestGlider_eqFunction_4744(data, threadData);

  TestGlider_eqFunction_4745(data, threadData);

  TestGlider_eqFunction_4746(data, threadData);

  TestGlider_eqFunction_4747(data, threadData);

  TestGlider_eqFunction_4748(data, threadData);

  TestGlider_eqFunction_4749(data, threadData);

  TestGlider_eqFunction_4750(data, threadData);

  TestGlider_eqFunction_4751(data, threadData);

  TestGlider_eqFunction_4752(data, threadData);

  TestGlider_eqFunction_4753(data, threadData);

  TestGlider_eqFunction_4754(data, threadData);

  TestGlider_eqFunction_4755(data, threadData);

  TestGlider_eqFunction_4756(data, threadData);

  TestGlider_eqFunction_4757(data, threadData);

  TestGlider_eqFunction_4758(data, threadData);

  TestGlider_eqFunction_4759(data, threadData);

  TestGlider_eqFunction_4760(data, threadData);

  TestGlider_eqFunction_4761(data, threadData);

  TestGlider_eqFunction_4762(data, threadData);

  TestGlider_eqFunction_4763(data, threadData);

  TestGlider_eqFunction_4764(data, threadData);

  TestGlider_eqFunction_4765(data, threadData);

  TestGlider_eqFunction_4766(data, threadData);

  TestGlider_eqFunction_4767(data, threadData);

  TestGlider_eqFunction_4768(data, threadData);

  TestGlider_eqFunction_4769(data, threadData);

  TestGlider_eqFunction_4770(data, threadData);

  TestGlider_eqFunction_4771(data, threadData);

  TestGlider_eqFunction_4772(data, threadData);

  TestGlider_eqFunction_4773(data, threadData);

  TestGlider_eqFunction_4774(data, threadData);

  TestGlider_eqFunction_4775(data, threadData);

  TestGlider_eqFunction_4776(data, threadData);

  TestGlider_eqFunction_4777(data, threadData);

  TestGlider_eqFunction_4778(data, threadData);

  TestGlider_eqFunction_4779(data, threadData);

  TestGlider_eqFunction_4780(data, threadData);

  TestGlider_eqFunction_4781(data, threadData);

  TestGlider_eqFunction_4782(data, threadData);

  TestGlider_eqFunction_4783(data, threadData);

  TestGlider_eqFunction_4784(data, threadData);

  TestGlider_eqFunction_4785(data, threadData);

  TestGlider_eqFunction_4786(data, threadData);

  TestGlider_eqFunction_4787(data, threadData);

  TestGlider_eqFunction_4916(data, threadData);

  TestGlider_eqFunction_4917(data, threadData);

  TestGlider_eqFunction_4918(data, threadData);

  TestGlider_eqFunction_4919(data, threadData);

  TestGlider_eqFunction_4920(data, threadData);

  TestGlider_eqFunction_4921(data, threadData);

  TestGlider_eqFunction_4922(data, threadData);

  TestGlider_eqFunction_4923(data, threadData);

  TestGlider_eqFunction_4924(data, threadData);

  TestGlider_eqFunction_4925(data, threadData);

  TestGlider_eqFunction_4926(data, threadData);

  TestGlider_eqFunction_4927(data, threadData);

  TestGlider_eqFunction_4928(data, threadData);

  TestGlider_eqFunction_4929(data, threadData);

  TestGlider_eqFunction_4930(data, threadData);

  TestGlider_eqFunction_4931(data, threadData);

  TestGlider_eqFunction_4932(data, threadData);

  TestGlider_eqFunction_4933(data, threadData);

  TestGlider_eqFunction_4934(data, threadData);

  TestGlider_eqFunction_4935(data, threadData);

  TestGlider_eqFunction_4936(data, threadData);

  TestGlider_eqFunction_4937(data, threadData);

  TestGlider_eqFunction_4938(data, threadData);

  TestGlider_eqFunction_4939(data, threadData);

  TestGlider_eqFunction_4940(data, threadData);

  TestGlider_eqFunction_4941(data, threadData);

  TestGlider_eqFunction_4942(data, threadData);

  TestGlider_eqFunction_4943(data, threadData);

  TestGlider_eqFunction_4944(data, threadData);

  TestGlider_eqFunction_4945(data, threadData);

  TestGlider_eqFunction_4946(data, threadData);

  TestGlider_eqFunction_4947(data, threadData);

  TestGlider_eqFunction_4948(data, threadData);

  TestGlider_eqFunction_4949(data, threadData);

  TestGlider_eqFunction_4950(data, threadData);

  TestGlider_eqFunction_4951(data, threadData);

  TestGlider_eqFunction_4952(data, threadData);

  TestGlider_eqFunction_4953(data, threadData);

  TestGlider_eqFunction_4954(data, threadData);

  TestGlider_eqFunction_4955(data, threadData);

  TestGlider_eqFunction_4956(data, threadData);

  TestGlider_eqFunction_4957(data, threadData);

  TestGlider_eqFunction_4958(data, threadData);

  TestGlider_eqFunction_4959(data, threadData);

  TestGlider_eqFunction_4960(data, threadData);

  TestGlider_eqFunction_4961(data, threadData);

  TestGlider_eqFunction_4962(data, threadData);

  TestGlider_eqFunction_4963(data, threadData);

  TestGlider_eqFunction_4964(data, threadData);

  TestGlider_eqFunction_4965(data, threadData);

  TestGlider_eqFunction_4966(data, threadData);

  TestGlider_eqFunction_4967(data, threadData);

  TestGlider_eqFunction_4968(data, threadData);

  TestGlider_eqFunction_4969(data, threadData);

  TestGlider_eqFunction_4970(data, threadData);

  TestGlider_eqFunction_4971(data, threadData);

  TestGlider_eqFunction_4972(data, threadData);

  TestGlider_eqFunction_4973(data, threadData);

  TestGlider_eqFunction_4974(data, threadData);

  TestGlider_eqFunction_4975(data, threadData);

  TestGlider_eqFunction_4976(data, threadData);

  TestGlider_eqFunction_4977(data, threadData);

  TestGlider_eqFunction_4978(data, threadData);

  TestGlider_eqFunction_4979(data, threadData);

  TestGlider_eqFunction_4980(data, threadData);

  TestGlider_eqFunction_4981(data, threadData);

  TestGlider_eqFunction_4982(data, threadData);

  TestGlider_eqFunction_4983(data, threadData);

  TestGlider_eqFunction_4984(data, threadData);

  TestGlider_eqFunction_4985(data, threadData);

  TestGlider_eqFunction_4986(data, threadData);

  TestGlider_eqFunction_4987(data, threadData);

  TestGlider_eqFunction_4988(data, threadData);

  TestGlider_eqFunction_4989(data, threadData);

  TestGlider_eqFunction_4990(data, threadData);

  TestGlider_eqFunction_4991(data, threadData);

  TestGlider_eqFunction_4992(data, threadData);

  TestGlider_eqFunction_4993(data, threadData);

  TestGlider_eqFunction_4994(data, threadData);

  TestGlider_eqFunction_4995(data, threadData);

  TestGlider_eqFunction_4996(data, threadData);

  TestGlider_eqFunction_4997(data, threadData);

  TestGlider_eqFunction_4998(data, threadData);

  TestGlider_eqFunction_4999(data, threadData);

  TestGlider_eqFunction_5000(data, threadData);

  TestGlider_eqFunction_5001(data, threadData);

  TestGlider_eqFunction_5002(data, threadData);

  TestGlider_eqFunction_5003(data, threadData);

  TestGlider_eqFunction_5004(data, threadData);

  TestGlider_eqFunction_5005(data, threadData);

  TestGlider_eqFunction_5006(data, threadData);

  TestGlider_eqFunction_5007(data, threadData);

  TestGlider_eqFunction_5008(data, threadData);

  TestGlider_eqFunction_5009(data, threadData);

  TestGlider_eqFunction_5010(data, threadData);

  TestGlider_eqFunction_5011(data, threadData);

  TestGlider_eqFunction_5012(data, threadData);

  TestGlider_eqFunction_5013(data, threadData);

  TestGlider_eqFunction_5014(data, threadData);

  TestGlider_eqFunction_5015(data, threadData);

  TestGlider_eqFunction_5016(data, threadData);

  TestGlider_eqFunction_5017(data, threadData);

  TestGlider_eqFunction_5018(data, threadData);

  TestGlider_eqFunction_5019(data, threadData);

  TestGlider_eqFunction_5020(data, threadData);

  TestGlider_eqFunction_5021(data, threadData);

  TestGlider_eqFunction_5022(data, threadData);

  TestGlider_eqFunction_5023(data, threadData);

  TestGlider_eqFunction_5024(data, threadData);

  TestGlider_eqFunction_5025(data, threadData);

  TestGlider_eqFunction_5026(data, threadData);

  TestGlider_eqFunction_5027(data, threadData);

  TestGlider_eqFunction_5028(data, threadData);

  TestGlider_eqFunction_5029(data, threadData);

  TestGlider_eqFunction_5030(data, threadData);

  TestGlider_eqFunction_5031(data, threadData);

  TestGlider_eqFunction_5032(data, threadData);

  TestGlider_eqFunction_5033(data, threadData);

  TestGlider_eqFunction_5034(data, threadData);

  TestGlider_eqFunction_5035(data, threadData);

  TestGlider_eqFunction_5036(data, threadData);

  TestGlider_eqFunction_5037(data, threadData);

  TestGlider_eqFunction_5038(data, threadData);

  TestGlider_eqFunction_5039(data, threadData);

  TestGlider_eqFunction_5040(data, threadData);

  TestGlider_eqFunction_5041(data, threadData);

  TestGlider_eqFunction_5042(data, threadData);

  TestGlider_eqFunction_5043(data, threadData);

  TestGlider_eqFunction_5044(data, threadData);

  TestGlider_eqFunction_5045(data, threadData);

  TestGlider_eqFunction_5046(data, threadData);

  TestGlider_eqFunction_5047(data, threadData);

  TestGlider_eqFunction_5048(data, threadData);

  TestGlider_eqFunction_5049(data, threadData);

  TestGlider_eqFunction_5050(data, threadData);

  TestGlider_eqFunction_5053(data, threadData);

  TestGlider_eqFunction_5052(data, threadData);

  TestGlider_eqFunction_5051(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TestGlider_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void TestGlider_eqFunction_4500(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4501(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4536(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4539(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4540(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4541(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4550(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4551(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4553(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4554(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4556(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4558(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4560(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4561(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4562(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4563(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4566(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4567(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4568(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4569(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4573(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4574(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4575(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4577(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4578(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4579(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4581(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4584(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4586(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4604(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4605(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4607(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4608(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4609(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4610(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4611(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4612(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4613(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4615(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4616(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4617(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4619(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4620(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4621(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4623(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4624(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4625(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4626(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4627(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4629(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4630(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4632(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4633(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4634(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4635(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4636(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4637(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4638(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4639(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4640(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4642(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4644(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4645(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4647(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4649(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4664(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4690(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4691(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4692(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4693(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4694(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4695(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4696(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4697(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4698(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4699(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4700(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4701(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4706(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4711(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4716(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4717(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4718(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4719(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4722(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4725(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4728(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4729(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4730(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4731(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4750(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4769(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4916(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4917(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4919(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4925(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4933(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4979(DATA* data, threadData_t *threadData);
extern void TestGlider_eqFunction_4982(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    TestGlider_eqFunction_4500(data, threadData);

    TestGlider_eqFunction_4501(data, threadData);

    TestGlider_eqFunction_4536(data, threadData);

    TestGlider_eqFunction_4539(data, threadData);

    TestGlider_eqFunction_4540(data, threadData);

    TestGlider_eqFunction_4541(data, threadData);

    TestGlider_eqFunction_4550(data, threadData);

    TestGlider_eqFunction_4551(data, threadData);

    TestGlider_eqFunction_4553(data, threadData);

    TestGlider_eqFunction_4554(data, threadData);

    TestGlider_eqFunction_4556(data, threadData);

    TestGlider_eqFunction_4558(data, threadData);

    TestGlider_eqFunction_4560(data, threadData);

    TestGlider_eqFunction_4561(data, threadData);

    TestGlider_eqFunction_4562(data, threadData);

    TestGlider_eqFunction_4563(data, threadData);

    TestGlider_eqFunction_4566(data, threadData);

    TestGlider_eqFunction_4567(data, threadData);

    TestGlider_eqFunction_4568(data, threadData);

    TestGlider_eqFunction_4569(data, threadData);

    TestGlider_eqFunction_4573(data, threadData);

    TestGlider_eqFunction_4574(data, threadData);

    TestGlider_eqFunction_4575(data, threadData);

    TestGlider_eqFunction_4577(data, threadData);

    TestGlider_eqFunction_4578(data, threadData);

    TestGlider_eqFunction_4579(data, threadData);

    TestGlider_eqFunction_4581(data, threadData);

    TestGlider_eqFunction_4584(data, threadData);

    TestGlider_eqFunction_4586(data, threadData);

    TestGlider_eqFunction_4604(data, threadData);

    TestGlider_eqFunction_4605(data, threadData);

    TestGlider_eqFunction_4607(data, threadData);

    TestGlider_eqFunction_4608(data, threadData);

    TestGlider_eqFunction_4609(data, threadData);

    TestGlider_eqFunction_4610(data, threadData);

    TestGlider_eqFunction_4611(data, threadData);

    TestGlider_eqFunction_4612(data, threadData);

    TestGlider_eqFunction_4613(data, threadData);

    TestGlider_eqFunction_4615(data, threadData);

    TestGlider_eqFunction_4616(data, threadData);

    TestGlider_eqFunction_4617(data, threadData);

    TestGlider_eqFunction_4619(data, threadData);

    TestGlider_eqFunction_4620(data, threadData);

    TestGlider_eqFunction_4621(data, threadData);

    TestGlider_eqFunction_4623(data, threadData);

    TestGlider_eqFunction_4624(data, threadData);

    TestGlider_eqFunction_4625(data, threadData);

    TestGlider_eqFunction_4626(data, threadData);

    TestGlider_eqFunction_4627(data, threadData);

    TestGlider_eqFunction_4629(data, threadData);

    TestGlider_eqFunction_4630(data, threadData);

    TestGlider_eqFunction_4632(data, threadData);

    TestGlider_eqFunction_4633(data, threadData);

    TestGlider_eqFunction_4634(data, threadData);

    TestGlider_eqFunction_4635(data, threadData);

    TestGlider_eqFunction_4636(data, threadData);

    TestGlider_eqFunction_4637(data, threadData);

    TestGlider_eqFunction_4638(data, threadData);

    TestGlider_eqFunction_4639(data, threadData);

    TestGlider_eqFunction_4640(data, threadData);

    TestGlider_eqFunction_4642(data, threadData);

    TestGlider_eqFunction_4644(data, threadData);

    TestGlider_eqFunction_4645(data, threadData);

    TestGlider_eqFunction_4647(data, threadData);

    TestGlider_eqFunction_4649(data, threadData);

    TestGlider_eqFunction_4664(data, threadData);

    TestGlider_eqFunction_4690(data, threadData);

    TestGlider_eqFunction_4691(data, threadData);

    TestGlider_eqFunction_4692(data, threadData);

    TestGlider_eqFunction_4693(data, threadData);

    TestGlider_eqFunction_4694(data, threadData);

    TestGlider_eqFunction_4695(data, threadData);

    TestGlider_eqFunction_4696(data, threadData);

    TestGlider_eqFunction_4697(data, threadData);

    TestGlider_eqFunction_4698(data, threadData);

    TestGlider_eqFunction_4699(data, threadData);

    TestGlider_eqFunction_4700(data, threadData);

    TestGlider_eqFunction_4701(data, threadData);

    TestGlider_eqFunction_4706(data, threadData);

    TestGlider_eqFunction_4711(data, threadData);

    TestGlider_eqFunction_4716(data, threadData);

    TestGlider_eqFunction_4717(data, threadData);

    TestGlider_eqFunction_4718(data, threadData);

    TestGlider_eqFunction_4719(data, threadData);

    TestGlider_eqFunction_4722(data, threadData);

    TestGlider_eqFunction_4725(data, threadData);

    TestGlider_eqFunction_4728(data, threadData);

    TestGlider_eqFunction_4729(data, threadData);

    TestGlider_eqFunction_4730(data, threadData);

    TestGlider_eqFunction_4731(data, threadData);

    TestGlider_eqFunction_4750(data, threadData);

    TestGlider_eqFunction_4769(data, threadData);

    TestGlider_eqFunction_4916(data, threadData);

    TestGlider_eqFunction_4917(data, threadData);

    TestGlider_eqFunction_4919(data, threadData);

    TestGlider_eqFunction_4925(data, threadData);

    TestGlider_eqFunction_4933(data, threadData);

    TestGlider_eqFunction_4979(data, threadData);

    TestGlider_eqFunction_4982(data, threadData);
}

int TestGlider_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TestGlider_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TestGlider_12jac.h"
#include "TestGlider_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TestGlider_callback = {
   (int (*)(DATA *, threadData_t *, void *)) TestGlider_performSimulation,    /* performSimulation */
   (int (*)(DATA *, threadData_t *, void *)) TestGlider_performQSSSimulation,    /* performQSSSimulation */
   TestGlider_updateContinuousSystem,    /* updateContinuousSystem */
   TestGlider_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   TestGlider_initialNonLinearSystem,    /* initialNonLinearSystem */
   TestGlider_initialLinearSystem,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   TestGlider_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   TestGlider_initializeDAEmodeData,
   TestGlider_functionODE,
   TestGlider_functionAlgebraics,
   TestGlider_functionDAE,
   TestGlider_functionLocalKnownVars,
   TestGlider_input_function,
   TestGlider_input_function_init,
   TestGlider_input_function_updateStartValues,
   TestGlider_data_function,
   TestGlider_output_function,
   TestGlider_setc_function,
   TestGlider_function_storeDelayed,
   TestGlider_updateBoundVariableAttributes,
   TestGlider_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TestGlider_functionInitialEquations_lambda0,
   TestGlider_functionRemovedInitialEquations,
   TestGlider_updateBoundParameters,
   TestGlider_checkForAsserts,
   TestGlider_function_ZeroCrossingsEquations,
   TestGlider_function_ZeroCrossings,
   TestGlider_function_updateRelations,
   TestGlider_zeroCrossingDescription,
   TestGlider_relationDescription,
   TestGlider_function_initSample,
   TestGlider_INDEX_JAC_A,
   TestGlider_INDEX_JAC_B,
   TestGlider_INDEX_JAC_C,
   TestGlider_INDEX_JAC_D,
   TestGlider_INDEX_JAC_F,
   TestGlider_initialAnalyticJacobianA,
   TestGlider_initialAnalyticJacobianB,
   TestGlider_initialAnalyticJacobianC,
   TestGlider_initialAnalyticJacobianD,
   TestGlider_initialAnalyticJacobianF,
   TestGlider_functionJacA_column,
   TestGlider_functionJacB_column,
   TestGlider_functionJacC_column,
   TestGlider_functionJacD_column,
   TestGlider_functionJacF_column,
   TestGlider_linear_model_frame,
   TestGlider_linear_model_datarecovery_frame,
   TestGlider_mayer,
   TestGlider_lagrange,
   TestGlider_pickUpBoundsForInputsInOptimization,
   TestGlider_setInputData,
   TestGlider_getTimeGrid,
   TestGlider_symbolicInlineSystem,
   TestGlider_function_initSynchronous,
   TestGlider_function_updateSynchronous,
   TestGlider_function_equationsSynchronous,
   TestGlider_inputNames,
   TestGlider_dataReconciliationInputNames,
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
void TestGlider_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TestGlider_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TestGlider";
  data->modelData->modelFilePrefix = "TestGlider";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/automata/repos/Glider_Lib_Modelica_ROS";
  data->modelData->modelGUID = "{c0c7a522-36e9-456b-aebd-6f0b6945f46e}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "TestGlider_init.c"
    ;
  static const char contents_info[] =
    #include "TestGlider_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "TestGlider_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "TestGlider_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 16;
  data->modelData->nVariablesReal = 2150;
  data->modelData->nDiscreteReal = 3;
  data->modelData->nVariablesInteger = 78;
  data->modelData->nVariablesBoolean = 3;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 650;
  data->modelData->nParametersInteger = 87;
  data->modelData->nParametersBoolean = 60;
  data->modelData->nParametersString = 59;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 2481;
  data->modelData->nAliasInteger = 57;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 18;
  data->modelData->nSamples = 1;
  data->modelData->nRelations = 18;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "TestGlider_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 12;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 7554;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 6;
  data->modelData->nNonLinearSystems = 3;
  data->modelData->nStateSets = 1;
  data->modelData->nJacobians = 12;
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
  
    TestGlider_setupDataStruc(&data, threadData);
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


