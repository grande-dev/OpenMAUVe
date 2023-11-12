/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_performSimulation
#define prefixedName_updateContinuousSystem Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[1658] /* in_pos_m_r variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[1659] /* in_pos_m_s variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[1660] /* in_variable_ballast variable */ = data->simulationInfo->inputVars[2];
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[1658].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[1659].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[1660].attribute.start;
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[1658].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[1659].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[1660].attribute.start = data->simulationInfo->inputVars[2];
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[1658].info.name;
  names[1] = (char *) data->modelData->realVarsData[1659].info.name;
  names[2] = (char *) data->modelData->realVarsData[1660].info.name;
  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 4444
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[3].length = 1.414213562373095 * abs(actuators.fixedFrame.z_label.lines[3,2,1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4444};
  data->localData[0]->realVars[449] /* actuators.fixedFrame.z_label.cylinders[3].length variable */ = (1.414213562373095) * (fabs(data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */));
  TRACE_POP
}
/*
equation index: 4445
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[2].length = abs(actuators.fixedFrame.z_label.lines[3,2,1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4445};
  data->localData[0]->realVars[448] /* actuators.fixedFrame.z_label.cylinders[2].length variable */ = fabs(data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4446
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[1].length = abs(actuators.fixedFrame.z_label.lines[3,2,1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4446};
  data->localData[0]->realVars[447] /* actuators.fixedFrame.z_label.cylinders[1].length variable */ = fabs(data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4447
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.lines[2,2,2] = 0.75 * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4447};
  data->localData[0]->realVars[385] /* actuators.fixedFrame.y_label.lines[2,2,2] variable */ = (0.75) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4448
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.lines[2,2,1] = 0.5 * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4448};
  data->localData[0]->realVars[384] /* actuators.fixedFrame.y_label.lines[2,2,1] variable */ = (0.5) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4449
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.lines[2,1,2] = 1.5 * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4449};
  data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */ = (1.5) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4450
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[1].length = sqrt(actuators.fixedFrame.z_label.lines[3,2,1] ^ 2.0 + actuators.fixedFrame.y_label.lines[2,1,2] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4450};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */;
  tmp1 = data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */;
  data->localData[0]->realVars[357] /* actuators.fixedFrame.y_label.cylinders[1].length variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 4451
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[2].length = sqrt(actuators.fixedFrame.y_label.lines[2,2,1] ^ 2.0 + (actuators.fixedFrame.y_label.lines[2,2,2] - actuators.fixedFrame.y_label.lines[2,1,2]) ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4451};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[384] /* actuators.fixedFrame.y_label.lines[2,2,1] variable */;
  tmp3 = data->localData[0]->realVars[385] /* actuators.fixedFrame.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */;
  data->localData[0]->realVars[358] /* actuators.fixedFrame.y_label.cylinders[2].length variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 4452
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[2].length = 1.414213562373095 * abs(actuators.fixedFrame.z_label.lines[3,2,1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4452};
  data->localData[0]->realVars[271] /* actuators.fixedFrame.x_label.cylinders[2].length variable */ = (1.414213562373095) * (fabs(data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */));
  TRACE_POP
}
/*
equation index: 4453
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[1].length = 1.414213562373095 * abs(actuators.fixedFrame.z_label.lines[3,2,1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4453};
  data->localData[0]->realVars[270] /* actuators.fixedFrame.x_label.cylinders[1].length variable */ = (1.414213562373095) * (fabs(data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */));
  TRACE_POP
}
/*
equation index: 4454
type: SIMPLE_ASSIGN
$DER.actuators.bodyVariableMass.frame_a.r_0[1] = addedMassForcesTorques.absoluteSensor.der1[1].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4454};
  data->localData[0]->realVars[42] /* der(actuators.bodyVariableMass.frame_a.r_0[1]) DUMMY_DER */ = data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */;
  TRACE_POP
}
/*
equation index: 4455
type: SIMPLE_ASSIGN
$DER.actuators.bodyVariableMass.frame_a.r_0[2] = addedMassForcesTorques.absoluteSensor.der1[2].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4455};
  data->localData[0]->realVars[43] /* der(actuators.bodyVariableMass.frame_a.r_0[2]) DUMMY_DER */ = data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */;
  TRACE_POP
}
/*
equation index: 4456
type: SIMPLE_ASSIGN
$DER.actuators.bodyVariableMass.frame_a.r_0[3] = addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4456};
  data->localData[0]->realVars[44] /* der(actuators.bodyVariableMass.frame_a.r_0[3]) DUMMY_DER */ = data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */;
  TRACE_POP
}
/*
equation index: 4457
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.v_0[3] = addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4457};
  data->localData[0]->realVars[170] /* actuators.bodyVariableMass.v_0[3] DUMMY_STATE */ = data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */;
  TRACE_POP
}
/*
equation index: 4458
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.v_0[2] = addedMassForcesTorques.absoluteSensor.der1[2].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4458};
  data->localData[0]->realVars[169] /* actuators.bodyVariableMass.v_0[2] DUMMY_STATE */ = data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */;
  TRACE_POP
}
/*
equation index: 4459
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.v_0[1] = addedMassForcesTorques.absoluteSensor.der1[1].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4459};
  data->localData[0]->realVars[168] /* actuators.bodyVariableMass.v_0[1] DUMMY_STATE */ = data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */;
  TRACE_POP
}
/*
equation index: 4460
type: SIMPLE_ASSIGN
$DER.actuators.fixedTranslation_hinge.frame_b.r_0[3] = addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4460};
  data->localData[0]->realVars[60] /* der(actuators.fixedTranslation_hinge.frame_b.r_0[3]) DUMMY_DER */ = data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */;
  TRACE_POP
}
/*
equation index: 4461
type: SIMPLE_ASSIGN
$DER.actuators.fixedTranslation_hinge.frame_b.r_0[2] = addedMassForcesTorques.absoluteSensor.der1[2].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4461};
  data->localData[0]->realVars[59] /* der(actuators.fixedTranslation_hinge.frame_b.r_0[2]) DUMMY_DER */ = data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */;
  TRACE_POP
}
/*
equation index: 4462
type: SIMPLE_ASSIGN
$DER.actuators.fixedTranslation_hinge.frame_b.r_0[1] = addedMassForcesTorques.absoluteSensor.der1[1].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4462};
  data->localData[0]->realVars[58] /* der(actuators.fixedTranslation_hinge.frame_b.r_0[1]) DUMMY_DER */ = data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */;
  TRACE_POP
}
/*
equation index: 4463
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.r_0[3] = hydrodynamicForcesTorques.absoluteVelocity.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4463};
  data->localData[0]->realVars[151] /* actuators.bodyVariableMass.frame_a.r_0[3] DUMMY_STATE */ = data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */;
  TRACE_POP
}
/*
equation index: 4464
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.r_0[2] = hydrodynamicForcesTorques.absoluteVelocity.der1[2].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4464};
  data->localData[0]->realVars[150] /* actuators.bodyVariableMass.frame_a.r_0[2] DUMMY_STATE */ = data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */;
  TRACE_POP
}
/*
equation index: 4465
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.frame_a.r_0[1] = hydrodynamicForcesTorques.absoluteVelocity.der1[1].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4465};
  data->localData[0]->realVars[149] /* actuators.bodyVariableMass.frame_a.r_0[1] DUMMY_STATE */ = data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */;
  TRACE_POP
}
/*
equation index: 4466
type: SIMPLE_ASSIGN
actuators.fixedTranslation_hinge.frame_b.r_0[3] = hydrodynamicForcesTorques.absoluteVelocity.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4466};
  data->localData[0]->realVars[504] /* actuators.fixedTranslation_hinge.frame_b.r_0[3] DUMMY_STATE */ = data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */;
  TRACE_POP
}
/*
equation index: 4467
type: SIMPLE_ASSIGN
actuators.fixedTranslation_hinge.frame_b.r_0[2] = hydrodynamicForcesTorques.absoluteVelocity.der1[2].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4467};
  data->localData[0]->realVars[503] /* actuators.fixedTranslation_hinge.frame_b.r_0[2] DUMMY_STATE */ = data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */;
  TRACE_POP
}
/*
equation index: 4468
type: SIMPLE_ASSIGN
actuators.fixedTranslation_hinge.frame_b.r_0[1] = hydrodynamicForcesTorques.absoluteVelocity.der1[1].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4468};
  data->localData[0]->realVars[502] /* actuators.fixedTranslation_hinge.frame_b.r_0[1] DUMMY_STATE */ = data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */;
  TRACE_POP
}
/*
equation index: 4469
type: ARRAY_CALL_ASSIGN

world.x_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({1.0, 0.0, 0.0}, {0.0, 1.0, 0.0})
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4469};
  real_array tmp4;
  real_array_create(&tmp4, ((modelica_real*)&((&data->localData[0]->realVars[1821] /* world.x_label.R_lines[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT11, _OMC_LIT12), tmp4);
  TRACE_POP
}
/*
equation index: 4470
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[2] = world.x_label.R_lines[2,2] * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4470};
  data->localData[0]->realVars[1844] /* world.x_label.cylinders[2].r[2] variable */ = (data->localData[0]->realVars[1825] /* world.x_label.R_lines[2,2] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4471
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[1] = world.scaledLabel * (world.x_label.R_lines[1,1] + world.x_label.R_lines[2,1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4471};
  data->localData[0]->realVars[1837] /* world.x_label.cylinders[1].lengthDirection[1] variable */ = (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */) * (data->localData[0]->realVars[1821] /* world.x_label.R_lines[1,1] variable */ + data->localData[0]->realVars[1824] /* world.x_label.R_lines[2,1] variable */);
  TRACE_POP
}
/*
equation index: 4472
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[1] = world.labelStart + world.x_label.R_lines[2,1] * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4472};
  data->localData[0]->realVars[1843] /* world.x_label.cylinders[2].r[1] variable */ = data->simulationInfo->realParameter[532] /* world.labelStart PARAM */ + (data->localData[0]->realVars[1824] /* world.x_label.R_lines[2,1] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4473
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[1] = (world.x_label.R_lines[1,1] - world.x_label.R_lines[2,1]) * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4473};
  data->localData[0]->realVars[1840] /* world.x_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[1821] /* world.x_label.R_lines[1,1] variable */ - data->localData[0]->realVars[1824] /* world.x_label.R_lines[2,1] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4474
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[2] = world.scaledLabel * (world.x_label.R_lines[1,2] + world.x_label.R_lines[2,2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4474};
  data->localData[0]->realVars[1838] /* world.x_label.cylinders[1].lengthDirection[2] variable */ = (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */) * (data->localData[0]->realVars[1822] /* world.x_label.R_lines[1,2] variable */ + data->localData[0]->realVars[1825] /* world.x_label.R_lines[2,2] variable */);
  TRACE_POP
}
/*
equation index: 4475
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[2] = (world.x_label.R_lines[1,2] - world.x_label.R_lines[2,2]) * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4475};
  data->localData[0]->realVars[1841] /* world.x_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[1822] /* world.x_label.R_lines[1,2] variable */ - data->localData[0]->realVars[1825] /* world.x_label.R_lines[2,2] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4476
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[3] = world.x_label.R_lines[2,3] * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4476};
  data->localData[0]->realVars[1845] /* world.x_label.cylinders[2].r[3] variable */ = (data->localData[0]->realVars[1826] /* world.x_label.R_lines[2,3] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4477
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[3] = world.scaledLabel * (world.x_label.R_lines[1,3] + world.x_label.R_lines[2,3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4477};
  data->localData[0]->realVars[1839] /* world.x_label.cylinders[1].lengthDirection[3] variable */ = (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */) * (data->localData[0]->realVars[1823] /* world.x_label.R_lines[1,3] variable */ + data->localData[0]->realVars[1826] /* world.x_label.R_lines[2,3] variable */);
  TRACE_POP
}
/*
equation index: 4478
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[3] = (world.x_label.R_lines[1,3] - world.x_label.R_lines[2,3]) * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4478};
  data->localData[0]->realVars[1842] /* world.x_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[1823] /* world.x_label.R_lines[1,3] variable */ - data->localData[0]->realVars[1826] /* world.x_label.R_lines[2,3] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4479
type: ARRAY_CALL_ASSIGN

world.y_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 1.0, 0.0}, {-1.0, 0.0, 0.0})
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4479};
  real_array tmp5;
  real_array_create(&tmp5, ((modelica_real*)&((&data->localData[0]->realVars[1942] /* world.y_label.R_lines[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT12, _OMC_LIT14), tmp5);
  TRACE_POP
}
/*
equation index: 4480
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[2] = world.labelStart + world.y_label.R_lines[2,2] * world.y_label.lines[2,1,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4480};
  data->localData[0]->realVars[1965] /* world.y_label.cylinders[2].r[2] variable */ = data->simulationInfo->realParameter[532] /* world.labelStart PARAM */ + (data->localData[0]->realVars[1946] /* world.y_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[1983] /* world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4481
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[1] = world.y_label.R_lines[1,1] * world.scaledLabel + world.y_label.R_lines[2,1] * world.y_label.lines[1,2,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4481};
  data->localData[0]->realVars[1958] /* world.y_label.cylinders[1].lengthDirection[1] variable */ = (data->localData[0]->realVars[1942] /* world.y_label.R_lines[1,1] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */) + (data->localData[0]->realVars[1945] /* world.y_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[1981] /* world.y_label.lines[1,2,2] variable */);
  TRACE_POP
}
/*
equation index: 4482
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[1] = world.y_label.R_lines[2,1] * world.y_label.lines[2,1,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4482};
  data->localData[0]->realVars[1964] /* world.y_label.cylinders[2].r[1] variable */ = (data->localData[0]->realVars[1945] /* world.y_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[1983] /* world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4483
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[1] = world.y_label.R_lines[1,1] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,1] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4483};
  data->localData[0]->realVars[1961] /* world.y_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[1942] /* world.y_label.R_lines[1,1] variable */) * (data->localData[0]->realVars[1984] /* world.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[1945] /* world.y_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[1985] /* world.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[1983] /* world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4484
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[2] = world.y_label.R_lines[1,2] * world.scaledLabel + world.y_label.R_lines[2,2] * world.y_label.lines[1,2,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4484};
  data->localData[0]->realVars[1959] /* world.y_label.cylinders[1].lengthDirection[2] variable */ = (data->localData[0]->realVars[1943] /* world.y_label.R_lines[1,2] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */) + (data->localData[0]->realVars[1946] /* world.y_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[1981] /* world.y_label.lines[1,2,2] variable */);
  TRACE_POP
}
/*
equation index: 4485
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[2] = world.y_label.R_lines[1,2] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,2] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4485};
  data->localData[0]->realVars[1962] /* world.y_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[1943] /* world.y_label.R_lines[1,2] variable */) * (data->localData[0]->realVars[1984] /* world.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[1946] /* world.y_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[1985] /* world.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[1983] /* world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4486
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[3] = world.y_label.R_lines[2,3] * world.y_label.lines[2,1,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4486};
  data->localData[0]->realVars[1966] /* world.y_label.cylinders[2].r[3] variable */ = (data->localData[0]->realVars[1947] /* world.y_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[1983] /* world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4487
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[3] = world.y_label.R_lines[1,3] * world.scaledLabel + world.y_label.R_lines[2,3] * world.y_label.lines[1,2,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4487};
  data->localData[0]->realVars[1960] /* world.y_label.cylinders[1].lengthDirection[3] variable */ = (data->localData[0]->realVars[1944] /* world.y_label.R_lines[1,3] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */) + (data->localData[0]->realVars[1947] /* world.y_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[1981] /* world.y_label.lines[1,2,2] variable */);
  TRACE_POP
}
/*
equation index: 4488
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[3] = world.y_label.R_lines[1,3] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,3] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4488};
  data->localData[0]->realVars[1963] /* world.y_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[1944] /* world.y_label.R_lines[1,3] variable */) * (data->localData[0]->realVars[1984] /* world.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[1947] /* world.y_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[1985] /* world.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[1983] /* world.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4489
type: ARRAY_CALL_ASSIGN

world.z_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 0.0, 1.0}, {0.0, 1.0, 0.0})
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4489};
  real_array tmp6;
  real_array_create(&tmp6, ((modelica_real*)&((&data->localData[0]->realVars[2066] /* world.z_label.R_lines[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT13, _OMC_LIT12), tmp6);
  TRACE_POP
}
/*
equation index: 4490
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[2] = world.z_label.R_lines[1,2] * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4490};
  data->localData[0]->realVars[2088] /* world.z_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[2067] /* world.z_label.R_lines[1,2] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4491
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[2] = world.z_label.cylinders[2].lengthDirection[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4491};
  data->localData[0]->realVars[2085] /* world.z_label.cylinders[1].lengthDirection[2] variable */ = data->localData[0]->realVars[2088] /* world.z_label.cylinders[2].lengthDirection[2] variable */;
  TRACE_POP
}
/*
equation index: 4492
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[1] = world.z_label.R_lines[1,1] * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4492};
  data->localData[0]->realVars[2087] /* world.z_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[2066] /* world.z_label.R_lines[1,1] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4493
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[1] = world.z_label.cylinders[2].lengthDirection[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4493};
  data->localData[0]->realVars[2084] /* world.z_label.cylinders[1].lengthDirection[1] variable */ = data->localData[0]->realVars[2087] /* world.z_label.cylinders[2].lengthDirection[1] variable */;
  TRACE_POP
}
/*
equation index: 4494
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[2] = world.z_label.R_lines[2,2] * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4494};
  data->localData[0]->realVars[2097] /* world.z_label.cylinders[3].r[2] variable */ = (data->localData[0]->realVars[2070] /* world.z_label.R_lines[2,2] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4495
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[2] = world.z_label.cylinders[3].r[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4495};
  data->localData[0]->realVars[2094] /* world.z_label.cylinders[2].r[2] variable */ = data->localData[0]->realVars[2097] /* world.z_label.cylinders[3].r[2] variable */;
  TRACE_POP
}
/*
equation index: 4496
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[2] = (world.z_label.R_lines[1,2] - world.z_label.R_lines[2,2]) * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4496};
  data->localData[0]->realVars[2091] /* world.z_label.cylinders[3].lengthDirection[2] variable */ = (data->localData[0]->realVars[2067] /* world.z_label.R_lines[1,2] variable */ - data->localData[0]->realVars[2070] /* world.z_label.R_lines[2,2] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4497
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[1] = world.z_label.R_lines[2,1] * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4497};
  data->localData[0]->realVars[2096] /* world.z_label.cylinders[3].r[1] variable */ = (data->localData[0]->realVars[2069] /* world.z_label.R_lines[2,1] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4498
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[1] = world.z_label.cylinders[3].r[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4498};
  data->localData[0]->realVars[2093] /* world.z_label.cylinders[2].r[1] variable */ = data->localData[0]->realVars[2096] /* world.z_label.cylinders[3].r[1] variable */;
  TRACE_POP
}
/*
equation index: 4499
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[1] = (world.z_label.R_lines[1,1] - world.z_label.R_lines[2,1]) * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4499};
  data->localData[0]->realVars[2090] /* world.z_label.cylinders[3].lengthDirection[1] variable */ = (data->localData[0]->realVars[2066] /* world.z_label.R_lines[1,1] variable */ - data->localData[0]->realVars[2069] /* world.z_label.R_lines[2,1] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4500
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[3] = world.z_label.R_lines[1,3] * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4500};
  data->localData[0]->realVars[2089] /* world.z_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[2068] /* world.z_label.R_lines[1,3] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4501
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[3] = world.z_label.cylinders[2].lengthDirection[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4501};
  data->localData[0]->realVars[2086] /* world.z_label.cylinders[1].lengthDirection[3] variable */ = data->localData[0]->realVars[2089] /* world.z_label.cylinders[2].lengthDirection[3] variable */;
  TRACE_POP
}
/*
equation index: 4502
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[3] = world.labelStart + world.z_label.R_lines[2,3] * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4502};
  data->localData[0]->realVars[2098] /* world.z_label.cylinders[3].r[3] variable */ = data->simulationInfo->realParameter[532] /* world.labelStart PARAM */ + (data->localData[0]->realVars[2071] /* world.z_label.R_lines[2,3] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4503
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[3] = world.z_label.cylinders[3].r[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4503};
  data->localData[0]->realVars[2095] /* world.z_label.cylinders[2].r[3] variable */ = data->localData[0]->realVars[2098] /* world.z_label.cylinders[3].r[3] variable */;
  TRACE_POP
}
/*
equation index: 4504
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[3] = (world.z_label.R_lines[1,3] - world.z_label.R_lines[2,3]) * world.scaledLabel
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4504};
  data->localData[0]->realVars[2092] /* world.z_label.cylinders[3].lengthDirection[3] variable */ = (data->localData[0]->realVars[2068] /* world.z_label.R_lines[1,3] variable */ - data->localData[0]->realVars[2071] /* world.z_label.R_lines[2,3] variable */) * (data->simulationInfo->realParameter[540] /* world.scaledLabel PARAM */);
  TRACE_POP
}
/*
equation index: 4505
type: SIMPLE_ASSIGN
m_0 = m_h + m_r + in_variable_ballast - m_w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4505};
  data->localData[0]->realVars[1661] /* m_0 variable */ = data->simulationInfo->realParameter[462] /* m_h PARAM */ + data->simulationInfo->realParameter[463] /* m_r PARAM */ + data->localData[0]->realVars[1660] /* in_variable_ballast variable */ - data->simulationInfo->realParameter[464] /* m_w PARAM */;
  TRACE_POP
}
/*
equation index: 4506
type: SIMPLE_ASSIGN
actuators.prismatic.box.length = if noEvent(abs(actuators.position_slidingMass.s) > 1e-06) then actuators.position_slidingMass.s else 1e-06
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4506};
  modelica_boolean tmp7;
  tmp7 = Greater(fabs(data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */),1e-06);
  data->localData[0]->realVars[555] /* actuators.prismatic.box.length variable */ = (tmp7?data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */:1e-06);
  TRACE_POP
}
/*
equation index: 4507
type: SIMPLE_ASSIGN
$DER.actuators.position.phi = actuators.revolute.w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4507};
  data->localData[0]->realVars[19] /* der(actuators.position.phi) STATE_DER */ = data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */;
  TRACE_POP
}
/*
equation index: 4508
type: SIMPLE_ASSIGN
$DER.actuators.position_slidingMass.s = actuators.prismatic.v
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4508};
  data->localData[0]->realVars[20] /* der(actuators.position_slidingMass.s) STATE_DER */ = data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */;
  TRACE_POP
}
/*
equation index: 4509
type: ARRAY_CALL_ASSIGN

actuators.fixedFrame.x_label.R_rel = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({1.0, 0.0, 0.0}, {0.0, 1.0, 0.0})
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4509};
  real_array tmp8;
  real_array_create(&tmp8, ((modelica_real*)&((&data->localData[0]->realVars[256] /* actuators.fixedFrame.x_label.R_rel[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT11, _OMC_LIT12), tmp8);
  TRACE_POP
}
/*
equation index: 4510
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[1].lengthDirection[3] = actuators.fixedFrame.z_label.lines[3,2,1] * (actuators.fixedFrame.x_label.R_rel[1,3] + actuators.fixedFrame.x_label.R_rel[2,3])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4510};
  data->localData[0]->realVars[274] /* actuators.fixedFrame.x_label.cylinders[1].lengthDirection[3] variable */ = (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */) * (data->localData[0]->realVars[258] /* actuators.fixedFrame.x_label.R_rel[1,3] variable */ + data->localData[0]->realVars[261] /* actuators.fixedFrame.x_label.R_rel[2,3] variable */);
  TRACE_POP
}
/*
equation index: 4511
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[2].lengthDirection[3] = (actuators.fixedFrame.x_label.R_rel[1,3] - actuators.fixedFrame.x_label.R_rel[2,3]) * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4511};
  data->localData[0]->realVars[277] /* actuators.fixedFrame.x_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[258] /* actuators.fixedFrame.x_label.R_rel[1,3] variable */ - data->localData[0]->realVars[261] /* actuators.fixedFrame.x_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4512
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[1].lengthDirection[1] = actuators.fixedFrame.z_label.lines[3,2,1] * (actuators.fixedFrame.x_label.R_rel[1,1] + actuators.fixedFrame.x_label.R_rel[2,1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4512};
  data->localData[0]->realVars[272] /* actuators.fixedFrame.x_label.cylinders[1].lengthDirection[1] variable */ = (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */) * (data->localData[0]->realVars[256] /* actuators.fixedFrame.x_label.R_rel[1,1] variable */ + data->localData[0]->realVars[259] /* actuators.fixedFrame.x_label.R_rel[2,1] variable */);
  TRACE_POP
}
/*
equation index: 4513
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[2].lengthDirection[1] = (actuators.fixedFrame.x_label.R_rel[1,1] - actuators.fixedFrame.x_label.R_rel[2,1]) * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4513};
  data->localData[0]->realVars[275] /* actuators.fixedFrame.x_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[256] /* actuators.fixedFrame.x_label.R_rel[1,1] variable */ - data->localData[0]->realVars[259] /* actuators.fixedFrame.x_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4514
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[1].lengthDirection[2] = actuators.fixedFrame.z_label.lines[3,2,1] * (actuators.fixedFrame.x_label.R_rel[1,2] + actuators.fixedFrame.x_label.R_rel[2,2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4514};
  data->localData[0]->realVars[273] /* actuators.fixedFrame.x_label.cylinders[1].lengthDirection[2] variable */ = (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */) * (data->localData[0]->realVars[257] /* actuators.fixedFrame.x_label.R_rel[1,2] variable */ + data->localData[0]->realVars[260] /* actuators.fixedFrame.x_label.R_rel[2,2] variable */);
  TRACE_POP
}
/*
equation index: 4515
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[2].lengthDirection[2] = (actuators.fixedFrame.x_label.R_rel[1,2] - actuators.fixedFrame.x_label.R_rel[2,2]) * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4515};
  data->localData[0]->realVars[276] /* actuators.fixedFrame.x_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[257] /* actuators.fixedFrame.x_label.R_rel[1,2] variable */ - data->localData[0]->realVars[260] /* actuators.fixedFrame.x_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4516
type: ARRAY_CALL_ASSIGN

actuators.fixedFrame.y_label.R_rel = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 1.0, 0.0}, {-1.0, 0.0, 0.0})
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4516};
  real_array tmp9;
  real_array_create(&tmp9, ((modelica_real*)&((&data->localData[0]->realVars[343] /* actuators.fixedFrame.y_label.R_rel[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT12, _OMC_LIT14), tmp9);
  TRACE_POP
}
/*
equation index: 4517
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[1].lengthDirection[1] = actuators.fixedFrame.y_label.R_rel[1,1] * actuators.fixedFrame.z_label.lines[3,2,1] + actuators.fixedFrame.y_label.R_rel[2,1] * actuators.fixedFrame.y_label.lines[2,1,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4517};
  data->localData[0]->realVars[359] /* actuators.fixedFrame.y_label.cylinders[1].lengthDirection[1] variable */ = (data->localData[0]->realVars[343] /* actuators.fixedFrame.y_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */) + (data->localData[0]->realVars[346] /* actuators.fixedFrame.y_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4518
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[2].lengthDirection[1] = actuators.fixedFrame.y_label.R_rel[1,1] * actuators.fixedFrame.y_label.lines[2,2,1] + actuators.fixedFrame.y_label.R_rel[2,1] * (actuators.fixedFrame.y_label.lines[2,2,2] - actuators.fixedFrame.y_label.lines[2,1,2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4518};
  data->localData[0]->realVars[362] /* actuators.fixedFrame.y_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[343] /* actuators.fixedFrame.y_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[384] /* actuators.fixedFrame.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[346] /* actuators.fixedFrame.y_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[385] /* actuators.fixedFrame.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4519
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[1].lengthDirection[3] = actuators.fixedFrame.y_label.R_rel[1,3] * actuators.fixedFrame.z_label.lines[3,2,1] + actuators.fixedFrame.y_label.R_rel[2,3] * actuators.fixedFrame.y_label.lines[2,1,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4519};
  data->localData[0]->realVars[361] /* actuators.fixedFrame.y_label.cylinders[1].lengthDirection[3] variable */ = (data->localData[0]->realVars[345] /* actuators.fixedFrame.y_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */) + (data->localData[0]->realVars[348] /* actuators.fixedFrame.y_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4520
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[2].lengthDirection[3] = actuators.fixedFrame.y_label.R_rel[1,3] * actuators.fixedFrame.y_label.lines[2,2,1] + actuators.fixedFrame.y_label.R_rel[2,3] * (actuators.fixedFrame.y_label.lines[2,2,2] - actuators.fixedFrame.y_label.lines[2,1,2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4520};
  data->localData[0]->realVars[364] /* actuators.fixedFrame.y_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[345] /* actuators.fixedFrame.y_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[384] /* actuators.fixedFrame.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[348] /* actuators.fixedFrame.y_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[385] /* actuators.fixedFrame.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4521
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[1].lengthDirection[2] = actuators.fixedFrame.y_label.R_rel[1,2] * actuators.fixedFrame.z_label.lines[3,2,1] + actuators.fixedFrame.y_label.R_rel[2,2] * actuators.fixedFrame.y_label.lines[2,1,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4521};
  data->localData[0]->realVars[360] /* actuators.fixedFrame.y_label.cylinders[1].lengthDirection[2] variable */ = (data->localData[0]->realVars[344] /* actuators.fixedFrame.y_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */) + (data->localData[0]->realVars[347] /* actuators.fixedFrame.y_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4522
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[2].lengthDirection[2] = actuators.fixedFrame.y_label.R_rel[1,2] * actuators.fixedFrame.y_label.lines[2,2,1] + actuators.fixedFrame.y_label.R_rel[2,2] * (actuators.fixedFrame.y_label.lines[2,2,2] - actuators.fixedFrame.y_label.lines[2,1,2])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4522};
  data->localData[0]->realVars[363] /* actuators.fixedFrame.y_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[344] /* actuators.fixedFrame.y_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[384] /* actuators.fixedFrame.y_label.lines[2,2,1] variable */) + (data->localData[0]->realVars[347] /* actuators.fixedFrame.y_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[385] /* actuators.fixedFrame.y_label.lines[2,2,2] variable */ - data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4523
type: ARRAY_CALL_ASSIGN

actuators.fixedFrame.z_label.R_rel = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 0.0, 1.0}, {0.0, 1.0, 0.0})
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4523};
  real_array tmp10;
  real_array_create(&tmp10, ((modelica_real*)&((&data->localData[0]->realVars[432] /* actuators.fixedFrame.z_label.R_rel[1,1] variable */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT13, _OMC_LIT12), tmp10);
  TRACE_POP
}
/*
equation index: 4524
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[2].lengthDirection[3] = actuators.fixedFrame.z_label.R_rel[1,3] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4524};
  data->localData[0]->realVars[455] /* actuators.fixedFrame.z_label.cylinders[2].lengthDirection[3] variable */ = (data->localData[0]->realVars[434] /* actuators.fixedFrame.z_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4525
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[1].lengthDirection[3] = actuators.fixedFrame.z_label.cylinders[2].lengthDirection[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4525};
  data->localData[0]->realVars[452] /* actuators.fixedFrame.z_label.cylinders[1].lengthDirection[3] variable */ = data->localData[0]->realVars[455] /* actuators.fixedFrame.z_label.cylinders[2].lengthDirection[3] variable */;
  TRACE_POP
}
/*
equation index: 4526
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[3].lengthDirection[3] = (actuators.fixedFrame.z_label.R_rel[1,3] - actuators.fixedFrame.z_label.R_rel[2,3]) * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4526};
  data->localData[0]->realVars[458] /* actuators.fixedFrame.z_label.cylinders[3].lengthDirection[3] variable */ = (data->localData[0]->realVars[434] /* actuators.fixedFrame.z_label.R_rel[1,3] variable */ - data->localData[0]->realVars[437] /* actuators.fixedFrame.z_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4527
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[2].lengthDirection[1] = actuators.fixedFrame.z_label.R_rel[1,1] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4527};
  data->localData[0]->realVars[453] /* actuators.fixedFrame.z_label.cylinders[2].lengthDirection[1] variable */ = (data->localData[0]->realVars[432] /* actuators.fixedFrame.z_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4528
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[1].lengthDirection[1] = actuators.fixedFrame.z_label.cylinders[2].lengthDirection[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4528};
  data->localData[0]->realVars[450] /* actuators.fixedFrame.z_label.cylinders[1].lengthDirection[1] variable */ = data->localData[0]->realVars[453] /* actuators.fixedFrame.z_label.cylinders[2].lengthDirection[1] variable */;
  TRACE_POP
}
/*
equation index: 4529
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[3].lengthDirection[1] = (actuators.fixedFrame.z_label.R_rel[1,1] - actuators.fixedFrame.z_label.R_rel[2,1]) * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4529};
  data->localData[0]->realVars[456] /* actuators.fixedFrame.z_label.cylinders[3].lengthDirection[1] variable */ = (data->localData[0]->realVars[432] /* actuators.fixedFrame.z_label.R_rel[1,1] variable */ - data->localData[0]->realVars[435] /* actuators.fixedFrame.z_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4530
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[2].lengthDirection[2] = actuators.fixedFrame.z_label.R_rel[1,2] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4530};
  data->localData[0]->realVars[454] /* actuators.fixedFrame.z_label.cylinders[2].lengthDirection[2] variable */ = (data->localData[0]->realVars[433] /* actuators.fixedFrame.z_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4531
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[1].lengthDirection[2] = actuators.fixedFrame.z_label.cylinders[2].lengthDirection[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4531};
  data->localData[0]->realVars[451] /* actuators.fixedFrame.z_label.cylinders[1].lengthDirection[2] variable */ = data->localData[0]->realVars[454] /* actuators.fixedFrame.z_label.cylinders[2].lengthDirection[2] variable */;
  TRACE_POP
}
/*
equation index: 4532
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[3].lengthDirection[2] = (actuators.fixedFrame.z_label.R_rel[1,2] - actuators.fixedFrame.z_label.R_rel[2,2]) * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4532};
  data->localData[0]->realVars[457] /* actuators.fixedFrame.z_label.cylinders[3].lengthDirection[2] variable */ = (data->localData[0]->realVars[433] /* actuators.fixedFrame.z_label.R_rel[1,2] variable */ - data->localData[0]->realVars[436] /* actuators.fixedFrame.z_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4533
type: SIMPLE_ASSIGN
actuators.position.phi_ref = smooth(0, if in_pos_m_r > actuators.limiter.uMax then actuators.limiter.uMax else if in_pos_m_r < actuators.limiter.uMin then actuators.limiter.uMin else in_pos_m_r)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4533};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp11 = Greater(data->localData[0]->realVars[1658] /* in_pos_m_r variable */,data->simulationInfo->realParameter[200] /* actuators.limiter.uMax PARAM */);
  tmp13 = (modelica_boolean)tmp11;
  if(tmp13)
  {
    tmp14 = data->simulationInfo->realParameter[200] /* actuators.limiter.uMax PARAM */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->realVars[1658] /* in_pos_m_r variable */,data->simulationInfo->realParameter[201] /* actuators.limiter.uMin PARAM */);
    tmp14 = (tmp12?data->simulationInfo->realParameter[201] /* actuators.limiter.uMin PARAM */:data->localData[0]->realVars[1658] /* in_pos_m_r variable */);
  }
  data->localData[0]->realVars[545] /* actuators.position.phi_ref variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 4534
type: SIMPLE_ASSIGN
actuators.position.a = 1.618122977346278 * ((actuators.position.phi_ref - actuators.position.phi) * actuators.position.w_crit + (-1.3617) * actuators.revolute.w) * actuators.position.w_crit
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4534};
  data->localData[0]->realVars[544] /* actuators.position.a variable */ = (1.618122977346278) * (((data->localData[0]->realVars[545] /* actuators.position.phi_ref variable */ - data->localData[0]->realVars[3] /* actuators.position.phi STATE(1,actuators.revolute.w) */) * (data->simulationInfo->realParameter[208] /* actuators.position.w_crit PARAM */) + (-1.3617) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */)) * (data->simulationInfo->realParameter[208] /* actuators.position.w_crit PARAM */));
  TRACE_POP
}
/*
equation index: 4535
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.w[3] = actuators.revolute.e[3] * actuators.position.a
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4535};
  data->localData[0]->realVars[75] /* der(actuators.revolute.R_rel.w[3]) DUMMY_DER */ = (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[544] /* actuators.position.a variable */);
  TRACE_POP
}
/*
equation index: 4536
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.w[2] = actuators.revolute.e[2] * actuators.position.a
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4536};
  data->localData[0]->realVars[74] /* der(actuators.revolute.R_rel.w[2]) DUMMY_DER */ = (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[544] /* actuators.position.a variable */);
  TRACE_POP
}
/*
equation index: 4537
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.w[1] = actuators.revolute.e[1] * actuators.position.a
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4537};
  data->localData[0]->realVars[73] /* der(actuators.revolute.R_rel.w[1]) DUMMY_DER */ = (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[544] /* actuators.position.a variable */);
  TRACE_POP
}
/*
equation index: 4538
type: SIMPLE_ASSIGN
$DER.actuators.revolute.w = actuators.position.a
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4538};
  data->localData[0]->realVars[22] /* der(actuators.revolute.w) STATE_DER */ = data->localData[0]->realVars[544] /* actuators.position.a variable */;
  TRACE_POP
}
/*
equation index: 4539
type: SIMPLE_ASSIGN
actuators.revolute.a = actuators.position.a
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4539};
  data->localData[0]->realVars[584] /* actuators.revolute.a variable */ = data->localData[0]->realVars[544] /* actuators.position.a variable */;
  TRACE_POP
}
/*
equation index: 4540
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.m = smooth(0, if in_variable_ballast > actuators.limiter1.uMax then actuators.limiter1.uMax else if in_variable_ballast < actuators.limiter1.uMin then actuators.limiter1.uMin else in_variable_ballast)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4540};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  tmp15 = Greater(data->localData[0]->realVars[1660] /* in_variable_ballast variable */,data->simulationInfo->realParameter[202] /* actuators.limiter1.uMax PARAM */);
  tmp17 = (modelica_boolean)tmp15;
  if(tmp17)
  {
    tmp18 = data->simulationInfo->realParameter[202] /* actuators.limiter1.uMax PARAM */;
  }
  else
  {
    tmp16 = Less(data->localData[0]->realVars[1660] /* in_variable_ballast variable */,data->simulationInfo->realParameter[203] /* actuators.limiter1.uMin PARAM */);
    tmp18 = (tmp16?data->simulationInfo->realParameter[203] /* actuators.limiter1.uMin PARAM */:data->localData[0]->realVars[1660] /* in_variable_ballast variable */);
  }
  data->localData[0]->realVars[158] /* actuators.bodyVariableMass.m variable */ = tmp18;
  TRACE_POP
}
/*
equation index: 4541
type: SIMPLE_ASSIGN
actuators.position_slidingMass.s_ref = smooth(0, if in_pos_m_s > actuators.limiter2.uMax then actuators.limiter2.uMax else if in_pos_m_s < actuators.limiter2.uMin then actuators.limiter2.uMin else in_pos_m_s)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4541};
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  tmp19 = Greater(data->localData[0]->realVars[1659] /* in_pos_m_s variable */,data->simulationInfo->realParameter[204] /* actuators.limiter2.uMax PARAM */);
  tmp21 = (modelica_boolean)tmp19;
  if(tmp21)
  {
    tmp22 = data->simulationInfo->realParameter[204] /* actuators.limiter2.uMax PARAM */;
  }
  else
  {
    tmp20 = Less(data->localData[0]->realVars[1659] /* in_pos_m_s variable */,data->simulationInfo->realParameter[205] /* actuators.limiter2.uMin PARAM */);
    tmp22 = (tmp20?data->simulationInfo->realParameter[205] /* actuators.limiter2.uMin PARAM */:data->localData[0]->realVars[1659] /* in_pos_m_s variable */);
  }
  data->localData[0]->realVars[548] /* actuators.position_slidingMass.s_ref variable */ = tmp22;
  TRACE_POP
}
/*
equation index: 4542
type: SIMPLE_ASSIGN
actuators.position_slidingMass.a = 1.618122977346278 * ((actuators.position_slidingMass.s_ref - actuators.position_slidingMass.s) * actuators.position_slidingMass.w_crit + (-1.3617) * actuators.prismatic.v) * actuators.position_slidingMass.w_crit
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4542};
  data->localData[0]->realVars[547] /* actuators.position_slidingMass.a variable */ = (1.618122977346278) * (((data->localData[0]->realVars[548] /* actuators.position_slidingMass.s_ref variable */ - data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */) * (data->simulationInfo->realParameter[210] /* actuators.position_slidingMass.w_crit PARAM */) + (-1.3617) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */)) * (data->simulationInfo->realParameter[210] /* actuators.position_slidingMass.w_crit PARAM */));
  TRACE_POP
}
/*
equation index: 4543
type: SIMPLE_ASSIGN
$DER.actuators.prismatic.v = actuators.position_slidingMass.a
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4543};
  data->localData[0]->realVars[21] /* der(actuators.prismatic.v) STATE_DER */ = data->localData[0]->realVars[547] /* actuators.position_slidingMass.a variable */;
  TRACE_POP
}
/*
equation index: 4544
type: SIMPLE_ASSIGN
actuators.prismatic.a = actuators.position_slidingMass.a
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4544};
  data->localData[0]->realVars[550] /* actuators.prismatic.a variable */ = data->localData[0]->realVars[547] /* actuators.position_slidingMass.a variable */;
  TRACE_POP
}
/*
equation index: 4545
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.arrow.length = sqrt(hydrodynamicForcesTorques.absoluteVelocity.der1[1].u ^ 2.0 + hydrodynamicForcesTorques.absoluteVelocity.der1[2].u ^ 2.0 + hydrodynamicForcesTorques.absoluteVelocity.der1[3].u ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4545};
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  tmp23 = data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */;
  tmp24 = data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */;
  tmp25 = data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */;
  data->localData[0]->realVars[870] /* addedMassForcesTorques.absoluteSensor.arrow.length variable */ = sqrt((tmp23 * tmp23) + (tmp24 * tmp24) + (tmp25 * tmp25));
  TRACE_POP
}
/*
equation index: 4546
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[1] = if noEvent(addedMassForcesTorques.absoluteSensor.arrow.length < 1e-10) then 1.0 else hydrodynamicForcesTorques.absoluteVelocity.der1[1].u / addedMassForcesTorques.absoluteSensor.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4546};
  modelica_boolean tmp26;
  tmp26 = Less(data->localData[0]->realVars[870] /* addedMassForcesTorques.absoluteSensor.arrow.length variable */,1e-10);
  data->localData[0]->realVars[880] /* addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[1] variable */ = (tmp26?1.0:DIVISION_SIM(data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */,data->localData[0]->realVars[870] /* addedMassForcesTorques.absoluteSensor.arrow.length variable */,"addedMassForcesTorques.absoluteSensor.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4547
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[2] = if noEvent(addedMassForcesTorques.absoluteSensor.arrow.length < 1e-10) then 0.0 else hydrodynamicForcesTorques.absoluteVelocity.der1[2].u / addedMassForcesTorques.absoluteSensor.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4547};
  modelica_boolean tmp27;
  tmp27 = Less(data->localData[0]->realVars[870] /* addedMassForcesTorques.absoluteSensor.arrow.length variable */,1e-10);
  data->localData[0]->realVars[881] /* addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[2] variable */ = (tmp27?0.0:DIVISION_SIM(data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */,data->localData[0]->realVars[870] /* addedMassForcesTorques.absoluteSensor.arrow.length variable */,"addedMassForcesTorques.absoluteSensor.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4548
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[3] = if noEvent(addedMassForcesTorques.absoluteSensor.arrow.length < 1e-10) then 0.0 else hydrodynamicForcesTorques.absoluteVelocity.der1[3].u / addedMassForcesTorques.absoluteSensor.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4548};
  modelica_boolean tmp28;
  tmp28 = Less(data->localData[0]->realVars[870] /* addedMassForcesTorques.absoluteSensor.arrow.length variable */,1e-10);
  data->localData[0]->realVars[882] /* addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[3] variable */ = (tmp28?0.0:DIVISION_SIM(data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */,data->localData[0]->realVars[870] /* addedMassForcesTorques.absoluteSensor.arrow.length variable */,"addedMassForcesTorques.absoluteSensor.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4549
type: SIMPLE_ASSIGN
$cse5 = min(addedMassForcesTorques.absoluteSensor.arrow.length, 4.0 * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4549};
  data->localData[0]->realVars[89] /* $cse5 variable */ = fmin(data->localData[0]->realVars[870] /* addedMassForcesTorques.absoluteSensor.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4550
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.arrow.arrowHead.length = max(0.0, $cse5)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4550};
  data->localData[0]->realVars[855] /* addedMassForcesTorques.absoluteSensor.arrow.arrowHead.length variable */ = fmax(0.0,data->localData[0]->realVars[89] /* $cse5 variable */);
  TRACE_POP
}
/*
equation index: 4551
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.arrow.arrowLength = max(0.0, addedMassForcesTorques.absoluteSensor.arrow.length + (-4.0) * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4551};
  data->localData[0]->realVars[865] /* addedMassForcesTorques.absoluteSensor.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[870] /* addedMassForcesTorques.absoluteSensor.arrow.length variable */ + (-4.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4552
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[1] = addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[1] * addedMassForcesTorques.absoluteSensor.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4552};
  data->localData[0]->realVars[856] /* addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[1] variable */ = (data->localData[0]->realVars[880] /* addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[865] /* addedMassForcesTorques.absoluteSensor.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4553
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[2] = addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[2] * addedMassForcesTorques.absoluteSensor.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4553};
  data->localData[0]->realVars[857] /* addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[2] variable */ = (data->localData[0]->realVars[881] /* addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[865] /* addedMassForcesTorques.absoluteSensor.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4554
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[3] = addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[3] * addedMassForcesTorques.absoluteSensor.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4554};
  data->localData[0]->realVars[858] /* addedMassForcesTorques.absoluteSensor.arrow.arrowHead.r[3] variable */ = (data->localData[0]->realVars[882] /* addedMassForcesTorques.absoluteSensor.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[865] /* addedMassForcesTorques.absoluteSensor.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4555
type: SIMPLE_ASSIGN
$DER.hydrodynamicForcesTorques.absoluteVelocity.der1[1].u = addedMassForcesTorques.absoluteSensor.der1[1].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4555};
  data->localData[0]->realVars[29] /* der(hydrodynamicForcesTorques.absoluteVelocity.der1[1].u) STATE_DER */ = data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */;
  TRACE_POP
}
/*
equation index: 4556
type: SIMPLE_ASSIGN
$DER.hydrodynamicForcesTorques.absoluteVelocity.der1[2].u = addedMassForcesTorques.absoluteSensor.der1[2].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4556};
  data->localData[0]->realVars[30] /* der(hydrodynamicForcesTorques.absoluteVelocity.der1[2].u) STATE_DER */ = data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */;
  TRACE_POP
}
/*
equation index: 4557
type: SIMPLE_ASSIGN
$DER.hydrodynamicForcesTorques.absoluteVelocity.der1[3].u = addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4557};
  data->localData[0]->realVars[31] /* der(hydrodynamicForcesTorques.absoluteVelocity.der1[3].u) STATE_DER */ = data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */;
  TRACE_POP
}
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4561(DATA*, threadData_t*);
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4560(DATA*, threadData_t*);
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4559(DATA*, threadData_t*);
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4558(DATA*, threadData_t*);
/*
equation index: 4566
indexNonlinear: 2
type: NONLINEAR

vars: {actuators.bodyVariableMass.Q[1], actuators.bodyVariableMass.Q[3], actuators.bodyVariableMass.Q[2], actuators.bodyVariableMass.Q[4]}
eqns: {4561, 4560, 4559, 4558}
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4566};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 4566 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,4566};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 4566 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  TRACE_POP
}
/*
equation index: 4567
type: SIMPLE_ASSIGN
hull.frame_a.R.T[2,2] = -1.0 + 2.0 * (actuators.bodyVariableMass.Q[2] ^ 2.0 + actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4567};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 4568
type: SIMPLE_ASSIGN
hull.frame_a.R.T[3,3] = -1.0 + 2.0 * (actuators.bodyVariableMass.Q[3] ^ 2.0 + actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4568};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp3 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */ = -1.0 + (2.0) * ((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 4569
type: SIMPLE_ASSIGN
hull.frame_a.R.T[3,1] = 2.0 * (actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[1] + actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4569};
  data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4570
type: SIMPLE_ASSIGN
hull.frame_a.R.T[2,3] = 2.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[3] + actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4570};
  data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4571
type: SIMPLE_ASSIGN
hull.frame_a.R.T[2,1] = 2.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[1] - actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4571};
  data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) - ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 4572
type: SIMPLE_ASSIGN
buoyancyForce.frame_b.f[2] = (-hull.frame_a.R.T[2,2]) * buoyancyForce.const_buoyancy[2].k - hull.frame_a.R.T[2,3] * buoyancyForce.const_buoyancy[3].k - hull.frame_a.R.T[2,1] * buoyancyForce.const_buoyancy[1].k
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4572};
  data->localData[0]->realVars[1314] /* buoyancyForce.frame_b.f[2] variable */ = ((-data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */)) * (data->simulationInfo->realParameter[346] /* buoyancyForce.const_buoyancy[2].k PARAM */) - ((data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->simulationInfo->realParameter[347] /* buoyancyForce.const_buoyancy[3].k PARAM */)) - ((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->simulationInfo->realParameter[345] /* buoyancyForce.const_buoyancy[1].k PARAM */));
  TRACE_POP
}
/*
equation index: 4573
type: SIMPLE_ASSIGN
buoyancyForce.force.f_in_m[2] = buoyancyForce.frame_b.f[2] / buoyancyForce.force.N_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4573};
  data->localData[0]->realVars[1290] /* buoyancyForce.force.f_in_m[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[1314] /* buoyancyForce.frame_b.f[2] variable */,data->simulationInfo->realParameter[351] /* buoyancyForce.force.N_to_m PARAM */,"buoyancyForce.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4574
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.v[2] = hull.frame_a.R.T[2,1] * addedMassForcesTorques.absoluteSensor.der1[1].u + hull.frame_a.R.T[2,2] * addedMassForcesTorques.absoluteSensor.der1[2].u + hull.frame_a.R.T[2,3] * addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4574};
  data->localData[0]->realVars[986] /* addedMassForcesTorques.absoluteSensor.v[2] variable */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4575
type: SIMPLE_ASSIGN
absolutePosition.r[2] = hull.frame_a.R.T[2,1] * hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + hull.frame_a.R.T[2,2] * hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + hull.frame_a.R.T[2,3] * hydrodynamicForcesTorques.absoluteVelocity.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4575};
  data->localData[0]->realVars[116] /* absolutePosition.r[2] variable */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */);
  TRACE_POP
}
/*
equation index: 4576
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.vel_b[2] = hull.frame_a.R.T[2,1] * addedMassForcesTorques.absoluteSensor.der1[1].u + hull.frame_a.R.T[2,2] * addedMassForcesTorques.absoluteSensor.der1[2].u + hull.frame_a.R.T[2,3] * addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4576};
  data->localData[0]->realVars[1655] /* hydrodynamicForcesTorques.vel_b[2] variable */ = (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4577
type: SIMPLE_ASSIGN
hull.frame_a.R.T[1,3] = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[3] - actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4577};
  data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) - ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 4578
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[3].u = hull.frame_a.R.T[1,3] * hull.w_a[1] + hull.frame_a.R.T[2,3] * hull.w_a[2] + hull.frame_a.R.T[3,3] * hull.w_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4578};
  data->localData[0]->realVars[885] /* addedMassForcesTorques.absoluteSensor.der2[3].u DUMMY_STATE */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */);
  TRACE_POP
}
/*
equation index: 4579
type: SIMPLE_ASSIGN
hull.frame_a.R.T[1,1] = -1.0 + 2.0 * (actuators.bodyVariableMass.Q[1] ^ 2.0 + actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4579};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  tmp5 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */ = -1.0 + (2.0) * ((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 4580
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[1].u = hull.frame_a.R.T[1,1] * hull.w_a[1] + hull.frame_a.R.T[2,1] * hull.w_a[2] + hull.frame_a.R.T[3,1] * hull.w_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4580};
  data->localData[0]->realVars[883] /* addedMassForcesTorques.absoluteSensor.der2[1].u DUMMY_STATE */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */);
  TRACE_POP
}
/*
equation index: 4581
type: LINEAR

<var>$DER.actuators.bodyVariableMass.Q[4]</var>
<var>$DER.actuators.bodyVariableMass.Q[1]</var>
<var>$DER.actuators.bodyVariableMass.Q[2]</var>
<var>$DER.actuators.bodyVariableMass.Q[3]</var>
<row>
  <cell>-hull.w_a[2]</cell>
  <cell>-hull.w_a[3]</cell>
  <cell>0.0</cell>
  <cell>-hull.w_a[1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>2.0 * actuators.bodyVariableMass.Q[2]</residual>
  </cell><cell row="0" col="1">
    <residual>2.0 * actuators.bodyVariableMass.Q[3]</residual>
  </cell><cell row="0" col="2">
    <residual>(-2.0) * actuators.bodyVariableMass.Q[4]</residual>
  </cell><cell row="0" col="3">
    <residual>(-2.0) * actuators.bodyVariableMass.Q[1]</residual>
  </cell><cell row="1" col="0">
    <residual>2.0 * actuators.bodyVariableMass.Q[3]</residual>
  </cell><cell row="1" col="1">
    <residual>(-2.0) * actuators.bodyVariableMass.Q[2]</residual>
  </cell><cell row="1" col="2">
    <residual>2.0 * actuators.bodyVariableMass.Q[1]</residual>
  </cell><cell row="1" col="3">
    <residual>(-2.0) * actuators.bodyVariableMass.Q[4]</residual>
  </cell><cell row="2" col="0">
    <residual>(-2.0) * actuators.bodyVariableMass.Q[4]</residual>
  </cell><cell row="2" col="1">
    <residual>(-2.0) * actuators.bodyVariableMass.Q[1]</residual>
  </cell><cell row="2" col="2">
    <residual>(-2.0) * actuators.bodyVariableMass.Q[2]</residual>
  </cell><cell row="2" col="3">
    <residual>(-2.0) * actuators.bodyVariableMass.Q[3]</residual>
  </cell><cell row="3" col="0">
    <residual>2.0 * actuators.bodyVariableMass.Q[1]</residual>
  </cell><cell row="3" col="1">
    <residual>(-2.0) * actuators.bodyVariableMass.Q[4]</residual>
  </cell><cell row="3" col="2">
    <residual>(-2.0) * actuators.bodyVariableMass.Q[3]</residual>
  </cell><cell row="3" col="3">
    <residual>2.0 * actuators.bodyVariableMass.Q[2]</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4581};
  /* Linear equation system */
  int retValue;
  double aux_x[4] = { data->localData[1]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */,data->localData[1]->realVars[38] /* der(actuators.bodyVariableMass.Q[1]) DUMMY_DER */,data->localData[1]->realVars[39] /* der(actuators.bodyVariableMass.Q[2]) DUMMY_DER */,data->localData[1]->realVars[40] /* der(actuators.bodyVariableMass.Q[3]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 4581 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,4581};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 4581 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */ = aux_x[0];
  data->localData[0]->realVars[38] /* der(actuators.bodyVariableMass.Q[1]) DUMMY_DER */ = aux_x[1];
  data->localData[0]->realVars[39] /* der(actuators.bodyVariableMass.Q[2]) DUMMY_DER */ = aux_x[2];
  data->localData[0]->realVars[40] /* der(actuators.bodyVariableMass.Q[3]) DUMMY_DER */ = aux_x[3];

  TRACE_POP
}
/*
equation index: 4582
type: SIMPLE_ASSIGN
$DER.$STATESET1.x[1] = (*Real*)($STATESET1.A[1,1]) * $DER.actuators.bodyVariableMass.Q[4] + (*Real*)($STATESET1.A[1,2]) * $DER.actuators.bodyVariableMass.Q[3] + (*Real*)($STATESET1.A[1,3]) * $DER.actuators.bodyVariableMass.Q[2] + (*Real*)($STATESET1.A[1,4]) * $DER.actuators.bodyVariableMass.Q[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4582};
  data->localData[0]->realVars[16] /* der($STATESET1.x[1]) STATE_DER */ = (((modelica_real)data->localData[0]->integerVars[0] /* $STATESET1.A[1,1] variable */)) * (data->localData[0]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[1] /* $STATESET1.A[1,2] variable */)) * (data->localData[0]->realVars[40] /* der(actuators.bodyVariableMass.Q[3]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[2] /* $STATESET1.A[1,3] variable */)) * (data->localData[0]->realVars[39] /* der(actuators.bodyVariableMass.Q[2]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[3] /* $STATESET1.A[1,4] variable */)) * (data->localData[0]->realVars[38] /* der(actuators.bodyVariableMass.Q[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 4583
type: SIMPLE_ASSIGN
$DER.$STATESET1.x[2] = (*Real*)($STATESET1.A[2,1]) * $DER.actuators.bodyVariableMass.Q[4] + (*Real*)($STATESET1.A[2,2]) * $DER.actuators.bodyVariableMass.Q[3] + (*Real*)($STATESET1.A[2,3]) * $DER.actuators.bodyVariableMass.Q[2] + (*Real*)($STATESET1.A[2,4]) * $DER.actuators.bodyVariableMass.Q[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4583};
  data->localData[0]->realVars[17] /* der($STATESET1.x[2]) STATE_DER */ = (((modelica_real)data->localData[0]->integerVars[4] /* $STATESET1.A[2,1] variable */)) * (data->localData[0]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[5] /* $STATESET1.A[2,2] variable */)) * (data->localData[0]->realVars[40] /* der(actuators.bodyVariableMass.Q[3]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[6] /* $STATESET1.A[2,3] variable */)) * (data->localData[0]->realVars[39] /* der(actuators.bodyVariableMass.Q[2]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[7] /* $STATESET1.A[2,4] variable */)) * (data->localData[0]->realVars[38] /* der(actuators.bodyVariableMass.Q[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 4584
type: SIMPLE_ASSIGN
$DER.$STATESET1.x[3] = (*Real*)($STATESET1.A[3,1]) * $DER.actuators.bodyVariableMass.Q[4] + (*Real*)($STATESET1.A[3,2]) * $DER.actuators.bodyVariableMass.Q[3] + (*Real*)($STATESET1.A[3,3]) * $DER.actuators.bodyVariableMass.Q[2] + (*Real*)($STATESET1.A[3,4]) * $DER.actuators.bodyVariableMass.Q[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4584};
  data->localData[0]->realVars[18] /* der($STATESET1.x[3]) STATE_DER */ = (((modelica_real)data->localData[0]->integerVars[8] /* $STATESET1.A[3,1] variable */)) * (data->localData[0]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[9] /* $STATESET1.A[3,2] variable */)) * (data->localData[0]->realVars[40] /* der(actuators.bodyVariableMass.Q[3]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[10] /* $STATESET1.A[3,3] variable */)) * (data->localData[0]->realVars[39] /* der(actuators.bodyVariableMass.Q[2]) DUMMY_DER */) + (((modelica_real)data->localData[0]->integerVars[11] /* $STATESET1.A[3,4] variable */)) * (data->localData[0]->realVars[38] /* der(actuators.bodyVariableMass.Q[1]) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 4585
type: SIMPLE_ASSIGN
$DER.hull.frame_a.R.T[3,3] = 4.0 * (actuators.bodyVariableMass.Q[3] * $DER.actuators.bodyVariableMass.Q[3] + actuators.bodyVariableMass.Q[4] * $DER.actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4585};
  data->localData[0]->realVars[84] /* der(hull.frame_a.R.T[3,3]) DUMMY_DER */ = (4.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[40] /* der(actuators.bodyVariableMass.Q[3]) DUMMY_DER */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (data->localData[0]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4586
type: SIMPLE_ASSIGN
hull.frame_a.R.T[3,2] = 2.0 * (actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[2] - actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4586};
  data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */ = (2.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) - ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 4587
type: SIMPLE_ASSIGN
buoyancyForce.frame_b.f[3] = (-hull.frame_a.R.T[3,2]) * buoyancyForce.const_buoyancy[2].k - hull.frame_a.R.T[3,3] * buoyancyForce.const_buoyancy[3].k - hull.frame_a.R.T[3,1] * buoyancyForce.const_buoyancy[1].k
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4587};
  data->localData[0]->realVars[1315] /* buoyancyForce.frame_b.f[3] variable */ = ((-data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */)) * (data->simulationInfo->realParameter[346] /* buoyancyForce.const_buoyancy[2].k PARAM */) - ((data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->simulationInfo->realParameter[347] /* buoyancyForce.const_buoyancy[3].k PARAM */)) - ((data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->simulationInfo->realParameter[345] /* buoyancyForce.const_buoyancy[1].k PARAM */));
  TRACE_POP
}
/*
equation index: 4588
type: SIMPLE_ASSIGN
buoyancyForce.force.f_in_m[3] = buoyancyForce.frame_b.f[3] / buoyancyForce.force.N_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4588};
  data->localData[0]->realVars[1291] /* buoyancyForce.force.f_in_m[3] variable */ = DIVISION_SIM(data->localData[0]->realVars[1315] /* buoyancyForce.frame_b.f[3] variable */,data->simulationInfo->realParameter[351] /* buoyancyForce.force.N_to_m PARAM */,"buoyancyForce.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4589
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.v[3] = hull.frame_a.R.T[3,1] * addedMassForcesTorques.absoluteSensor.der1[1].u + hull.frame_a.R.T[3,2] * addedMassForcesTorques.absoluteSensor.der1[2].u + hull.frame_a.R.T[3,3] * addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4589};
  data->localData[0]->realVars[987] /* addedMassForcesTorques.absoluteSensor.v[3] variable */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4590
type: SIMPLE_ASSIGN
absolutePosition.r[3] = hull.frame_a.R.T[3,1] * hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + hull.frame_a.R.T[3,2] * hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + hull.frame_a.R.T[3,3] * hydrodynamicForcesTorques.absoluteVelocity.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4590};
  data->localData[0]->realVars[117] /* absolutePosition.r[3] variable */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */);
  TRACE_POP
}
/*
equation index: 4591
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.vel_b[3] = hull.frame_a.R.T[3,1] * addedMassForcesTorques.absoluteSensor.der1[1].u + hull.frame_a.R.T[3,2] * addedMassForcesTorques.absoluteSensor.der1[2].u + hull.frame_a.R.T[3,3] * addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4591};
  data->localData[0]->realVars[1656] /* hydrodynamicForcesTorques.vel_b[3] variable */ = (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4592
type: SIMPLE_ASSIGN
$DER.hull.frame_a.R.T[3,1] = 2.0 * (actuators.bodyVariableMass.Q[3] * $DER.actuators.bodyVariableMass.Q[1] + $DER.actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[1] + actuators.bodyVariableMass.Q[2] * $DER.actuators.bodyVariableMass.Q[4] + $DER.actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4592};
  data->localData[0]->realVars[83] /* der(hull.frame_a.R.T[3,1]) DUMMY_DER */ = (2.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[38] /* der(actuators.bodyVariableMass.Q[1]) DUMMY_DER */) + (data->localData[0]->realVars[40] /* der(actuators.bodyVariableMass.Q[3]) DUMMY_DER */) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */) + (data->localData[0]->realVars[39] /* der(actuators.bodyVariableMass.Q[2]) DUMMY_DER */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4593
type: SIMPLE_ASSIGN
$DER.hull.frame_a.R.T[2,3] = 2.0 * (actuators.bodyVariableMass.Q[2] * $DER.actuators.bodyVariableMass.Q[3] + $DER.actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[3] + actuators.bodyVariableMass.Q[1] * $DER.actuators.bodyVariableMass.Q[4] + $DER.actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4593};
  data->localData[0]->realVars[82] /* der(hull.frame_a.R.T[2,3]) DUMMY_DER */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[40] /* der(actuators.bodyVariableMass.Q[3]) DUMMY_DER */) + (data->localData[0]->realVars[39] /* der(actuators.bodyVariableMass.Q[2]) DUMMY_DER */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */) + (data->localData[0]->realVars[38] /* der(actuators.bodyVariableMass.Q[1]) DUMMY_DER */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4594
type: SIMPLE_ASSIGN
$DER.hull.frame_a.R.T[2,1] = 2.0 * (actuators.bodyVariableMass.Q[2] * $DER.actuators.bodyVariableMass.Q[1] + $DER.actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[1] + (-actuators.bodyVariableMass.Q[3]) * $DER.actuators.bodyVariableMass.Q[4] - $DER.actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4594};
  data->localData[0]->realVars[81] /* der(hull.frame_a.R.T[2,1]) DUMMY_DER */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[38] /* der(actuators.bodyVariableMass.Q[1]) DUMMY_DER */) + (data->localData[0]->realVars[39] /* der(actuators.bodyVariableMass.Q[2]) DUMMY_DER */) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + ((-data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */)) * (data->localData[0]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */) - ((data->localData[0]->realVars[40] /* der(actuators.bodyVariableMass.Q[3]) DUMMY_DER */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 4595
type: SIMPLE_ASSIGN
$DER.hull.frame_a.R.T[1,3] = 2.0 * (actuators.bodyVariableMass.Q[1] * $DER.actuators.bodyVariableMass.Q[3] + $DER.actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[3] + (-actuators.bodyVariableMass.Q[2]) * $DER.actuators.bodyVariableMass.Q[4] - $DER.actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4595};
  data->localData[0]->realVars[80] /* der(hull.frame_a.R.T[1,3]) DUMMY_DER */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[40] /* der(actuators.bodyVariableMass.Q[3]) DUMMY_DER */) + (data->localData[0]->realVars[38] /* der(actuators.bodyVariableMass.Q[1]) DUMMY_DER */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + ((-data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */)) * (data->localData[0]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */) - ((data->localData[0]->realVars[39] /* der(actuators.bodyVariableMass.Q[2]) DUMMY_DER */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 4596
type: SIMPLE_ASSIGN
hull.frame_a.R.T[1,2] = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[2] + actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4596};
  data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4597
type: ARRAY_CALL_ASSIGN

absoluteAngles.angles = Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(Modelica.Mechanics.MultiBody.Frames.Orientation(hull.frame_a.R.T, hull.w_a), {3, 2, 1}, absoluteAngles.guessAngle1)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4597};
  real_array tmp6;
  real_array tmp7;
  real_array tmp8;
  real_array_create(&tmp6, ((modelica_real*)&((&data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */)[calc_base_index_dims_subs(2, (_index_t)3, (_index_t)3, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, (_index_t)3, (_index_t)3);
  real_array_create(&tmp7, ((modelica_real*)&((&data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)[calc_base_index_dims_subs(1, (_index_t)3, ((modelica_integer) 1))])), 1, (_index_t)3);
  real_array_create(&tmp8, ((modelica_real*)&((&data->localData[0]->realVars[94] /* absoluteAngles.angles[1] variable */)[calc_base_index_dims_subs(1, (_index_t)3, ((modelica_integer) 1))])), 1, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData, omc_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData, tmp6, tmp7), _OMC_LIT15, data->simulationInfo->realParameter[34] /* absoluteAngles.guessAngle1 PARAM */), tmp8);
  TRACE_POP
}
/*
equation index: 4598
type: SIMPLE_ASSIGN
buoyancyForce.frame_b.f[1] = (-hull.frame_a.R.T[1,2]) * buoyancyForce.const_buoyancy[2].k - hull.frame_a.R.T[1,3] * buoyancyForce.const_buoyancy[3].k - hull.frame_a.R.T[1,1] * buoyancyForce.const_buoyancy[1].k
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4598};
  data->localData[0]->realVars[1313] /* buoyancyForce.frame_b.f[1] variable */ = ((-data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */)) * (data->simulationInfo->realParameter[346] /* buoyancyForce.const_buoyancy[2].k PARAM */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->simulationInfo->realParameter[347] /* buoyancyForce.const_buoyancy[3].k PARAM */)) - ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->simulationInfo->realParameter[345] /* buoyancyForce.const_buoyancy[1].k PARAM */));
  TRACE_POP
}
/*
equation index: 4599
type: SIMPLE_ASSIGN
buoyancyForce.force.f_in_m[1] = buoyancyForce.frame_b.f[1] / buoyancyForce.force.N_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4599};
  data->localData[0]->realVars[1289] /* buoyancyForce.force.f_in_m[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1313] /* buoyancyForce.frame_b.f[1] variable */,data->simulationInfo->realParameter[351] /* buoyancyForce.force.N_to_m PARAM */,"buoyancyForce.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4600
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.length = sqrt(buoyancyForce.force.f_in_m[1] ^ 2.0 + buoyancyForce.force.f_in_m[2] ^ 2.0 + buoyancyForce.force.f_in_m[3] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4600};
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  tmp9 = data->localData[0]->realVars[1289] /* buoyancyForce.force.f_in_m[1] variable */;
  tmp10 = data->localData[0]->realVars[1290] /* buoyancyForce.force.f_in_m[2] variable */;
  tmp11 = data->localData[0]->realVars[1291] /* buoyancyForce.force.f_in_m[3] variable */;
  data->localData[0]->realVars[1273] /* buoyancyForce.force.arrow.length variable */ = sqrt((tmp9 * tmp9) + (tmp10 * tmp10) + (tmp11 * tmp11));
  TRACE_POP
}
/*
equation index: 4601
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.e_x[2] = if noEvent(buoyancyForce.force.arrow.length < 1e-10) then 0.0 else (-buoyancyForce.force.f_in_m[2]) / buoyancyForce.force.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4601};
  modelica_boolean tmp12;
  tmp12 = Less(data->localData[0]->realVars[1273] /* buoyancyForce.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1271] /* buoyancyForce.force.arrow.e_x[2] variable */ = (tmp12?0.0:DIVISION_SIM((-data->localData[0]->realVars[1290] /* buoyancyForce.force.f_in_m[2] variable */),data->localData[0]->realVars[1273] /* buoyancyForce.force.arrow.length variable */,"buoyancyForce.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4602
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.e_x[3] = if noEvent(buoyancyForce.force.arrow.length < 1e-10) then 0.0 else (-buoyancyForce.force.f_in_m[3]) / buoyancyForce.force.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4602};
  modelica_boolean tmp13;
  tmp13 = Less(data->localData[0]->realVars[1273] /* buoyancyForce.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1272] /* buoyancyForce.force.arrow.e_x[3] variable */ = (tmp13?0.0:DIVISION_SIM((-data->localData[0]->realVars[1291] /* buoyancyForce.force.f_in_m[3] variable */),data->localData[0]->realVars[1273] /* buoyancyForce.force.arrow.length variable */,"buoyancyForce.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4603
type: SIMPLE_ASSIGN
$cse3 = min(buoyancyForce.force.arrow.length, 4.0 * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4603};
  data->localData[0]->realVars[87] /* $cse3 variable */ = fmin(data->localData[0]->realVars[1273] /* buoyancyForce.force.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4604
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.arrowHead.length = max(0.0, $cse3)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4604};
  data->localData[0]->realVars[1255] /* buoyancyForce.force.arrow.arrowHead.length variable */ = fmax(0.0,data->localData[0]->realVars[87] /* $cse3 variable */);
  TRACE_POP
}
/*
equation index: 4605
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.arrowLength = max(0.0, buoyancyForce.force.arrow.length + (-4.0) * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4605};
  data->localData[0]->realVars[1265] /* buoyancyForce.force.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[1273] /* buoyancyForce.force.arrow.length variable */ + (-4.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4606
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.e_x[1] = if noEvent(buoyancyForce.force.arrow.length < 1e-10) then 1.0 else (-buoyancyForce.force.f_in_m[1]) / buoyancyForce.force.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4606};
  modelica_boolean tmp14;
  tmp14 = Less(data->localData[0]->realVars[1273] /* buoyancyForce.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1270] /* buoyancyForce.force.arrow.e_x[1] variable */ = (tmp14?1.0:DIVISION_SIM((-data->localData[0]->realVars[1289] /* buoyancyForce.force.f_in_m[1] variable */),data->localData[0]->realVars[1273] /* buoyancyForce.force.arrow.length variable */,"buoyancyForce.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4607
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.rxvisobj[1] = hull.frame_a.R.T[1,1] * buoyancyForce.force.arrow.e_x[1] + hull.frame_a.R.T[2,1] * buoyancyForce.force.arrow.e_x[2] + hull.frame_a.R.T[3,1] * buoyancyForce.force.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4607};
  data->localData[0]->realVars[1277] /* buoyancyForce.force.arrow.rxvisobj[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1270] /* buoyancyForce.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1271] /* buoyancyForce.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1272] /* buoyancyForce.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4608
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.rxvisobj[3] = hull.frame_a.R.T[1,3] * buoyancyForce.force.arrow.e_x[1] + hull.frame_a.R.T[2,3] * buoyancyForce.force.arrow.e_x[2] + hull.frame_a.R.T[3,3] * buoyancyForce.force.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4608};
  data->localData[0]->realVars[1279] /* buoyancyForce.force.arrow.rxvisobj[3] variable */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1270] /* buoyancyForce.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1271] /* buoyancyForce.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1272] /* buoyancyForce.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4609
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.rvisobj[1] = hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + hull.frame_a.R.T[1,1] * buoyancyForce.force.f_in_m[1] + hull.frame_a.R.T[2,1] * buoyancyForce.force.f_in_m[2] + hull.frame_a.R.T[3,1] * buoyancyForce.force.f_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4609};
  data->localData[0]->realVars[1274] /* buoyancyForce.force.arrow.rvisobj[1] variable */ = data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1289] /* buoyancyForce.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1290] /* buoyancyForce.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1291] /* buoyancyForce.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4610
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.arrowHead.r[1] = buoyancyForce.force.arrow.rvisobj[1] + buoyancyForce.force.arrow.rxvisobj[1] * buoyancyForce.force.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4610};
  data->localData[0]->realVars[1256] /* buoyancyForce.force.arrow.arrowHead.r[1] variable */ = data->localData[0]->realVars[1274] /* buoyancyForce.force.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1277] /* buoyancyForce.force.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1265] /* buoyancyForce.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4611
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.rvisobj[3] = hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + hull.frame_a.R.T[1,3] * buoyancyForce.force.f_in_m[1] + hull.frame_a.R.T[2,3] * buoyancyForce.force.f_in_m[2] + hull.frame_a.R.T[3,3] * buoyancyForce.force.f_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4611};
  data->localData[0]->realVars[1276] /* buoyancyForce.force.arrow.rvisobj[3] variable */ = data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1289] /* buoyancyForce.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1290] /* buoyancyForce.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1291] /* buoyancyForce.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4612
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.arrowHead.r[3] = buoyancyForce.force.arrow.rvisobj[3] + buoyancyForce.force.arrow.rxvisobj[3] * buoyancyForce.force.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4612};
  data->localData[0]->realVars[1258] /* buoyancyForce.force.arrow.arrowHead.r[3] variable */ = data->localData[0]->realVars[1276] /* buoyancyForce.force.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1279] /* buoyancyForce.force.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1265] /* buoyancyForce.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4613
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.rxvisobj[2] = hull.frame_a.R.T[1,2] * buoyancyForce.force.arrow.e_x[1] + hull.frame_a.R.T[2,2] * buoyancyForce.force.arrow.e_x[2] + hull.frame_a.R.T[3,2] * buoyancyForce.force.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4613};
  data->localData[0]->realVars[1278] /* buoyancyForce.force.arrow.rxvisobj[2] variable */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1270] /* buoyancyForce.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1271] /* buoyancyForce.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1272] /* buoyancyForce.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4614
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.rvisobj[2] = hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + hull.frame_a.R.T[1,2] * buoyancyForce.force.f_in_m[1] + hull.frame_a.R.T[2,2] * buoyancyForce.force.f_in_m[2] + hull.frame_a.R.T[3,2] * buoyancyForce.force.f_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4614};
  data->localData[0]->realVars[1275] /* buoyancyForce.force.arrow.rvisobj[2] variable */ = data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1289] /* buoyancyForce.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1290] /* buoyancyForce.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1291] /* buoyancyForce.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4615
type: SIMPLE_ASSIGN
buoyancyForce.force.arrow.arrowHead.r[2] = buoyancyForce.force.arrow.rvisobj[2] + buoyancyForce.force.arrow.rxvisobj[2] * buoyancyForce.force.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4615};
  data->localData[0]->realVars[1257] /* buoyancyForce.force.arrow.arrowHead.r[2] variable */ = data->localData[0]->realVars[1275] /* buoyancyForce.force.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1278] /* buoyancyForce.force.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1265] /* buoyancyForce.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4616
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.v[1] = hull.frame_a.R.T[1,1] * addedMassForcesTorques.absoluteSensor.der1[1].u + hull.frame_a.R.T[1,2] * addedMassForcesTorques.absoluteSensor.der1[2].u + hull.frame_a.R.T[1,3] * addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4616};
  data->localData[0]->realVars[985] /* addedMassForcesTorques.absoluteSensor.v[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4617
type: SIMPLE_ASSIGN
absolutePosition.r[1] = hull.frame_a.R.T[1,1] * hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + hull.frame_a.R.T[1,2] * hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + hull.frame_a.R.T[1,3] * hydrodynamicForcesTorques.absoluteVelocity.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4617};
  data->localData[0]->realVars[115] /* absolutePosition.r[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */);
  TRACE_POP
}
/*
equation index: 4618
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.vel_b[1] = hull.frame_a.R.T[1,1] * addedMassForcesTorques.absoluteSensor.der1[1].u + hull.frame_a.R.T[1,2] * addedMassForcesTorques.absoluteSensor.der1[2].u + hull.frame_a.R.T[1,3] * addedMassForcesTorques.absoluteSensor.der1[3].u
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4618};
  data->localData[0]->realVars[1654] /* hydrodynamicForcesTorques.vel_b[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */);
  TRACE_POP
}
/*
equation index: 4619
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.airspeed = sqrt(hydrodynamicForcesTorques.vel_b[1] ^ 2.0 + hydrodynamicForcesTorques.vel_b[2] ^ 2.0 + hydrodynamicForcesTorques.vel_b[3] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4619};
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  tmp15 = data->localData[0]->realVars[1654] /* hydrodynamicForcesTorques.vel_b[1] variable */;
  tmp16 = data->localData[0]->realVars[1655] /* hydrodynamicForcesTorques.vel_b[2] variable */;
  tmp17 = data->localData[0]->realVars[1656] /* hydrodynamicForcesTorques.vel_b[3] variable */;
  data->localData[0]->realVars[1513] /* hydrodynamicForcesTorques.airspeed variable */ = sqrt((tmp15 * tmp15) + (tmp16 * tmp16) + (tmp17 * tmp17));
  TRACE_POP
}
/*
equation index: 4620
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.alpha = atan2(hydrodynamicForcesTorques.vel_b[3], hydrodynamicForcesTorques.vel_b[1])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4620};
  data->localData[0]->realVars[1514] /* hydrodynamicForcesTorques.alpha variable */ = atan2(data->localData[0]->realVars[1656] /* hydrodynamicForcesTorques.vel_b[3] variable */, data->localData[0]->realVars[1654] /* hydrodynamicForcesTorques.vel_b[1] variable */);
  TRACE_POP
}
/*
equation index: 4621
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.alpha_deg = 57.29577951308232 * hydrodynamicForcesTorques.alpha
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4621};
  data->localData[0]->realVars[1515] /* hydrodynamicForcesTorques.alpha_deg variable */ = (57.29577951308232) * (data->localData[0]->realVars[1514] /* hydrodynamicForcesTorques.alpha variable */);
  TRACE_POP
}
/*
equation index: 4622
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.F_hd[1] = ((-hydrodynamicForcesTorques.K_D0) - hydrodynamicForcesTorques.K_D * hydrodynamicForcesTorques.alpha ^ 2.0) * hydrodynamicForcesTorques.airspeed ^ 2.0
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4622};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->localData[0]->realVars[1514] /* hydrodynamicForcesTorques.alpha variable */;
  tmp19 = data->localData[0]->realVars[1513] /* hydrodynamicForcesTorques.airspeed variable */;
  data->localData[0]->realVars[1354] /* hydrodynamicForcesTorques.F_hd[1] variable */ = ((-data->simulationInfo->realParameter[426] /* hydrodynamicForcesTorques.K_D0 PARAM */) - ((data->simulationInfo->realParameter[425] /* hydrodynamicForcesTorques.K_D PARAM */) * ((tmp18 * tmp18)))) * ((tmp19 * tmp19));
  TRACE_POP
}
/*
equation index: 4623
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.F_hd[3] = ((-hydrodynamicForcesTorques.K_L0) - hydrodynamicForcesTorques.K_alpha * hydrodynamicForcesTorques.alpha) * hydrodynamicForcesTorques.airspeed ^ 2.0
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4623};
  modelica_real tmp20;
  tmp20 = data->localData[0]->realVars[1513] /* hydrodynamicForcesTorques.airspeed variable */;
  data->localData[0]->realVars[1356] /* hydrodynamicForcesTorques.F_hd[3] variable */ = ((-data->simulationInfo->realParameter[427] /* hydrodynamicForcesTorques.K_L0 PARAM */) - ((data->simulationInfo->realParameter[438] /* hydrodynamicForcesTorques.K_alpha PARAM */) * (data->localData[0]->realVars[1514] /* hydrodynamicForcesTorques.alpha variable */))) * ((tmp20 * tmp20));
  TRACE_POP
}
/*
equation index: 4624
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.T_hd[2] = (hydrodynamicForcesTorques.K_M0 + hydrodynamicForcesTorques.K_M * hydrodynamicForcesTorques.alpha + hydrodynamicForcesTorques.K_q * hull.w_a[2]) * hydrodynamicForcesTorques.airspeed ^ 2.0 + hydrodynamicForcesTorques.K_Ome_2_1 * hull.w_a[2] + hydrodynamicForcesTorques.K_Ome_2_2 * hull.w_a[2] ^ 2.0
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4624};
  modelica_real tmp21;
  modelica_real tmp22;
  tmp21 = data->localData[0]->realVars[1513] /* hydrodynamicForcesTorques.airspeed variable */;
  tmp22 = data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */;
  data->localData[0]->realVars[1370] /* hydrodynamicForcesTorques.T_hd[2] variable */ = (data->simulationInfo->realParameter[429] /* hydrodynamicForcesTorques.K_M0 PARAM */ + (data->simulationInfo->realParameter[428] /* hydrodynamicForcesTorques.K_M PARAM */) * (data->localData[0]->realVars[1514] /* hydrodynamicForcesTorques.alpha variable */) + (data->simulationInfo->realParameter[441] /* hydrodynamicForcesTorques.K_q PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */)) * ((tmp21 * tmp21)) + (data->simulationInfo->realParameter[434] /* hydrodynamicForcesTorques.K_Ome_2_1 PARAM */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->simulationInfo->realParameter[435] /* hydrodynamicForcesTorques.K_Ome_2_2 PARAM */) * ((tmp22 * tmp22));
  TRACE_POP
}
/*
equation index: 4625
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.R_FB[3,3] = cos(hydrodynamicForcesTorques.alpha)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4625};
  data->localData[0]->realVars[1368] /* hydrodynamicForcesTorques.R_FB[3,3] variable */ = cos(data->localData[0]->realVars[1514] /* hydrodynamicForcesTorques.alpha variable */);
  TRACE_POP
}
/*
equation index: 4626
type: SIMPLE_ASSIGN
$cse9 = sin(hydrodynamicForcesTorques.alpha)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4626};
  data->localData[0]->realVars[93] /* $cse9 variable */ = sin(data->localData[0]->realVars[1514] /* hydrodynamicForcesTorques.alpha variable */);
  TRACE_POP
}
/*
equation index: 4627
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.R_FB[1,3] = -$cse9
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4627};
  data->localData[0]->realVars[1362] /* hydrodynamicForcesTorques.R_FB[1,3] variable */ = (-data->localData[0]->realVars[93] /* $cse9 variable */);
  TRACE_POP
}
/*
equation index: 4628
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.vel_norm = Modelica.Math.Vectors.norm(hydrodynamicForcesTorques.vel_b, 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4628};
  real_array tmp23;
  real_array_create(&tmp23, ((modelica_real*)&((&data->localData[0]->realVars[1654] /* hydrodynamicForcesTorques.vel_b[1] variable */)[calc_base_index_dims_subs(1, (_index_t)3, ((modelica_integer) 1))])), 1, (_index_t)3);
  data->localData[0]->realVars[1657] /* hydrodynamicForcesTorques.vel_norm variable */ = omc_Modelica_Math_Vectors_norm(threadData, tmp23, 2.0);
  TRACE_POP
}
/*
equation index: 4629
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.beta = asin(hydrodynamicForcesTorques.vel_b[2] / hydrodynamicForcesTorques.vel_norm)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4629};
  modelica_real tmp24;
  tmp24 = DIVISION_SIM(data->localData[0]->realVars[1655] /* hydrodynamicForcesTorques.vel_b[2] variable */,data->localData[0]->realVars[1657] /* hydrodynamicForcesTorques.vel_norm variable */,"hydrodynamicForcesTorques.vel_norm",equationIndexes);
  if(!(tmp24 >= -1.0 && tmp24 <= 1.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of asin(hydrodynamicForcesTorques.vel_b[2] / hydrodynamicForcesTorques.vel_norm) outside the domain -1.0 <= %g <= 1.0", tmp24);
  }
  data->localData[0]->realVars[1516] /* hydrodynamicForcesTorques.beta variable */ = asin(tmp24);
  TRACE_POP
}
/*
equation index: 4630
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.beta_deg = 57.29577951308232 * hydrodynamicForcesTorques.beta
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4630};
  data->localData[0]->realVars[1517] /* hydrodynamicForcesTorques.beta_deg variable */ = (57.29577951308232) * (data->localData[0]->realVars[1516] /* hydrodynamicForcesTorques.beta variable */);
  TRACE_POP
}
/*
equation index: 4631
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.F_hd[2] = hydrodynamicForcesTorques.K_beta * hydrodynamicForcesTorques.beta * hydrodynamicForcesTorques.airspeed ^ 2.0
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4631};
  modelica_real tmp25;
  tmp25 = data->localData[0]->realVars[1513] /* hydrodynamicForcesTorques.airspeed variable */;
  data->localData[0]->realVars[1355] /* hydrodynamicForcesTorques.F_hd[2] variable */ = (data->simulationInfo->realParameter[439] /* hydrodynamicForcesTorques.K_beta PARAM */) * ((data->localData[0]->realVars[1516] /* hydrodynamicForcesTorques.beta variable */) * ((tmp25 * tmp25)));
  TRACE_POP
}
/*
equation index: 4632
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.T_hd[1] = (hydrodynamicForcesTorques.K_MR * hydrodynamicForcesTorques.beta + hydrodynamicForcesTorques.K_p * hull.w_a[1]) * hydrodynamicForcesTorques.airspeed ^ 2.0 + hydrodynamicForcesTorques.K_Ome_1_1 * hull.w_a[1] + hydrodynamicForcesTorques.K_Ome_1_2 * hull.w_a[1] ^ 2.0
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4632};
  modelica_real tmp26;
  modelica_real tmp27;
  tmp26 = data->localData[0]->realVars[1513] /* hydrodynamicForcesTorques.airspeed variable */;
  tmp27 = data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */;
  data->localData[0]->realVars[1369] /* hydrodynamicForcesTorques.T_hd[1] variable */ = ((data->simulationInfo->realParameter[430] /* hydrodynamicForcesTorques.K_MR PARAM */) * (data->localData[0]->realVars[1516] /* hydrodynamicForcesTorques.beta variable */) + (data->simulationInfo->realParameter[440] /* hydrodynamicForcesTorques.K_p PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */)) * ((tmp26 * tmp26)) + (data->simulationInfo->realParameter[432] /* hydrodynamicForcesTorques.K_Ome_1_1 PARAM */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->simulationInfo->realParameter[433] /* hydrodynamicForcesTorques.K_Ome_1_2 PARAM */) * ((tmp27 * tmp27));
  TRACE_POP
}
/*
equation index: 4633
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.T_hd[3] = (hydrodynamicForcesTorques.K_MY * hydrodynamicForcesTorques.beta + hydrodynamicForcesTorques.K_r * hull.w_a[3]) * hydrodynamicForcesTorques.airspeed ^ 2.0 + hydrodynamicForcesTorques.K_Ome_3_1 * hull.w_a[3] + hydrodynamicForcesTorques.K_Ome_3_2 * hull.w_a[3] ^ 2.0
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4633};
  modelica_real tmp28;
  modelica_real tmp29;
  tmp28 = data->localData[0]->realVars[1513] /* hydrodynamicForcesTorques.airspeed variable */;
  tmp29 = data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */;
  data->localData[0]->realVars[1371] /* hydrodynamicForcesTorques.T_hd[3] variable */ = ((data->simulationInfo->realParameter[431] /* hydrodynamicForcesTorques.K_MY PARAM */) * (data->localData[0]->realVars[1516] /* hydrodynamicForcesTorques.beta variable */) + (data->simulationInfo->realParameter[442] /* hydrodynamicForcesTorques.K_r PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */)) * ((tmp28 * tmp28)) + (data->simulationInfo->realParameter[436] /* hydrodynamicForcesTorques.K_Ome_3_1 PARAM */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) + (data->simulationInfo->realParameter[437] /* hydrodynamicForcesTorques.K_Ome_3_2 PARAM */) * ((tmp29 * tmp29));
  TRACE_POP
}
/*
equation index: 4634
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.R_FB[2,2] = cos(hydrodynamicForcesTorques.beta)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4634};
  data->localData[0]->realVars[1364] /* hydrodynamicForcesTorques.R_FB[2,2] variable */ = cos(data->localData[0]->realVars[1516] /* hydrodynamicForcesTorques.beta variable */);
  TRACE_POP
}
/*
equation index: 4635
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.R_FB[1,1] = hydrodynamicForcesTorques.R_FB[3,3] * hydrodynamicForcesTorques.R_FB[2,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4635};
  data->localData[0]->realVars[1360] /* hydrodynamicForcesTorques.R_FB[1,1] variable */ = (data->localData[0]->realVars[1368] /* hydrodynamicForcesTorques.R_FB[3,3] variable */) * (data->localData[0]->realVars[1364] /* hydrodynamicForcesTorques.R_FB[2,2] variable */);
  TRACE_POP
}
/*
equation index: 4636
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.R_FB[3,1] = $cse9 * hydrodynamicForcesTorques.R_FB[2,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4636};
  data->localData[0]->realVars[1366] /* hydrodynamicForcesTorques.R_FB[3,1] variable */ = (data->localData[0]->realVars[93] /* $cse9 variable */) * (data->localData[0]->realVars[1364] /* hydrodynamicForcesTorques.R_FB[2,2] variable */);
  TRACE_POP
}
/*
equation index: 4637
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.R_FB[2,1] = sin(hydrodynamicForcesTorques.beta)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4637};
  data->localData[0]->realVars[1363] /* hydrodynamicForcesTorques.R_FB[2,1] variable */ = sin(data->localData[0]->realVars[1516] /* hydrodynamicForcesTorques.beta variable */);
  TRACE_POP
}
/*
equation index: 4638
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.R_FB[1,2] = (-hydrodynamicForcesTorques.R_FB[3,3]) * hydrodynamicForcesTorques.R_FB[2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4638};
  data->localData[0]->realVars[1361] /* hydrodynamicForcesTorques.R_FB[1,2] variable */ = ((-data->localData[0]->realVars[1368] /* hydrodynamicForcesTorques.R_FB[3,3] variable */)) * (data->localData[0]->realVars[1363] /* hydrodynamicForcesTorques.R_FB[2,1] variable */);
  TRACE_POP
}
/*
equation index: 4639
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.F_hd_b[1] = hydrodynamicForcesTorques.R_FB[1,1] * hydrodynamicForcesTorques.F_hd[1] + hydrodynamicForcesTorques.R_FB[1,2] * hydrodynamicForcesTorques.F_hd[2] - $cse9 * hydrodynamicForcesTorques.F_hd[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4639};
  data->localData[0]->realVars[1357] /* hydrodynamicForcesTorques.F_hd_b[1] variable */ = (data->localData[0]->realVars[1360] /* hydrodynamicForcesTorques.R_FB[1,1] variable */) * (data->localData[0]->realVars[1354] /* hydrodynamicForcesTorques.F_hd[1] variable */) + (data->localData[0]->realVars[1361] /* hydrodynamicForcesTorques.R_FB[1,2] variable */) * (data->localData[0]->realVars[1355] /* hydrodynamicForcesTorques.F_hd[2] variable */) - ((data->localData[0]->realVars[93] /* $cse9 variable */) * (data->localData[0]->realVars[1356] /* hydrodynamicForcesTorques.F_hd[3] variable */));
  TRACE_POP
}
/*
equation index: 4640
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.f_in_m[1] = (-hydrodynamicForcesTorques.F_hd_b[1]) / hydrodynamicForcesTorques.force.N_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4640};
  data->localData[0]->realVars[1557] /* hydrodynamicForcesTorques.force.f_in_m[1] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1357] /* hydrodynamicForcesTorques.F_hd_b[1] variable */),data->simulationInfo->realParameter[443] /* hydrodynamicForcesTorques.force.N_to_m PARAM */,"hydrodynamicForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4641
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.T_hd_b[1] = hydrodynamicForcesTorques.R_FB[1,1] * hydrodynamicForcesTorques.T_hd[1] + hydrodynamicForcesTorques.R_FB[1,2] * hydrodynamicForcesTorques.T_hd[2] - $cse9 * hydrodynamicForcesTorques.T_hd[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4641};
  data->localData[0]->realVars[1372] /* hydrodynamicForcesTorques.T_hd_b[1] variable */ = (data->localData[0]->realVars[1360] /* hydrodynamicForcesTorques.R_FB[1,1] variable */) * (data->localData[0]->realVars[1369] /* hydrodynamicForcesTorques.T_hd[1] variable */) + (data->localData[0]->realVars[1361] /* hydrodynamicForcesTorques.R_FB[1,2] variable */) * (data->localData[0]->realVars[1370] /* hydrodynamicForcesTorques.T_hd[2] variable */) - ((data->localData[0]->realVars[93] /* $cse9 variable */) * (data->localData[0]->realVars[1371] /* hydrodynamicForcesTorques.T_hd[3] variable */));
  TRACE_POP
}
/*
equation index: 4642
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.t_in_m[1] = (-hydrodynamicForcesTorques.T_hd_b[1]) / hydrodynamicForcesTorques.torque.Nm_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4642};
  data->localData[0]->realVars[1630] /* hydrodynamicForcesTorques.torque.t_in_m[1] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1372] /* hydrodynamicForcesTorques.T_hd_b[1] variable */),data->simulationInfo->realParameter[452] /* hydrodynamicForcesTorques.torque.Nm_to_m PARAM */,"hydrodynamicForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4643
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.R_FB[3,2] = (-$cse9) * hydrodynamicForcesTorques.R_FB[2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4643};
  data->localData[0]->realVars[1367] /* hydrodynamicForcesTorques.R_FB[3,2] variable */ = ((-data->localData[0]->realVars[93] /* $cse9 variable */)) * (data->localData[0]->realVars[1363] /* hydrodynamicForcesTorques.R_FB[2,1] variable */);
  TRACE_POP
}
/*
equation index: 4644
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.F_hd_b[3] = hydrodynamicForcesTorques.R_FB[3,1] * hydrodynamicForcesTorques.F_hd[1] + hydrodynamicForcesTorques.R_FB[3,2] * hydrodynamicForcesTorques.F_hd[2] + hydrodynamicForcesTorques.R_FB[3,3] * hydrodynamicForcesTorques.F_hd[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4644};
  data->localData[0]->realVars[1359] /* hydrodynamicForcesTorques.F_hd_b[3] variable */ = (data->localData[0]->realVars[1366] /* hydrodynamicForcesTorques.R_FB[3,1] variable */) * (data->localData[0]->realVars[1354] /* hydrodynamicForcesTorques.F_hd[1] variable */) + (data->localData[0]->realVars[1367] /* hydrodynamicForcesTorques.R_FB[3,2] variable */) * (data->localData[0]->realVars[1355] /* hydrodynamicForcesTorques.F_hd[2] variable */) + (data->localData[0]->realVars[1368] /* hydrodynamicForcesTorques.R_FB[3,3] variable */) * (data->localData[0]->realVars[1356] /* hydrodynamicForcesTorques.F_hd[3] variable */);
  TRACE_POP
}
/*
equation index: 4645
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.f_in_m[3] = (-hydrodynamicForcesTorques.F_hd_b[3]) / hydrodynamicForcesTorques.force.N_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4645};
  data->localData[0]->realVars[1559] /* hydrodynamicForcesTorques.force.f_in_m[3] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1359] /* hydrodynamicForcesTorques.F_hd_b[3] variable */),data->simulationInfo->realParameter[443] /* hydrodynamicForcesTorques.force.N_to_m PARAM */,"hydrodynamicForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4646
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.T_hd_b[3] = hydrodynamicForcesTorques.R_FB[3,1] * hydrodynamicForcesTorques.T_hd[1] + hydrodynamicForcesTorques.R_FB[3,2] * hydrodynamicForcesTorques.T_hd[2] + hydrodynamicForcesTorques.R_FB[3,3] * hydrodynamicForcesTorques.T_hd[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4646};
  data->localData[0]->realVars[1374] /* hydrodynamicForcesTorques.T_hd_b[3] variable */ = (data->localData[0]->realVars[1366] /* hydrodynamicForcesTorques.R_FB[3,1] variable */) * (data->localData[0]->realVars[1369] /* hydrodynamicForcesTorques.T_hd[1] variable */) + (data->localData[0]->realVars[1367] /* hydrodynamicForcesTorques.R_FB[3,2] variable */) * (data->localData[0]->realVars[1370] /* hydrodynamicForcesTorques.T_hd[2] variable */) + (data->localData[0]->realVars[1368] /* hydrodynamicForcesTorques.R_FB[3,3] variable */) * (data->localData[0]->realVars[1371] /* hydrodynamicForcesTorques.T_hd[3] variable */);
  TRACE_POP
}
/*
equation index: 4647
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.t_in_m[3] = (-hydrodynamicForcesTorques.T_hd_b[3]) / hydrodynamicForcesTorques.torque.Nm_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4647};
  data->localData[0]->realVars[1632] /* hydrodynamicForcesTorques.torque.t_in_m[3] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1374] /* hydrodynamicForcesTorques.T_hd_b[3] variable */),data->simulationInfo->realParameter[452] /* hydrodynamicForcesTorques.torque.Nm_to_m PARAM */,"hydrodynamicForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4648
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.F_hd_b[2] = hydrodynamicForcesTorques.R_FB[2,1] * hydrodynamicForcesTorques.F_hd[1] + hydrodynamicForcesTorques.R_FB[2,2] * hydrodynamicForcesTorques.F_hd[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4648};
  data->localData[0]->realVars[1358] /* hydrodynamicForcesTorques.F_hd_b[2] variable */ = (data->localData[0]->realVars[1363] /* hydrodynamicForcesTorques.R_FB[2,1] variable */) * (data->localData[0]->realVars[1354] /* hydrodynamicForcesTorques.F_hd[1] variable */) + (data->localData[0]->realVars[1364] /* hydrodynamicForcesTorques.R_FB[2,2] variable */) * (data->localData[0]->realVars[1355] /* hydrodynamicForcesTorques.F_hd[2] variable */);
  TRACE_POP
}
/*
equation index: 4649
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.f_in_m[2] = (-hydrodynamicForcesTorques.F_hd_b[2]) / hydrodynamicForcesTorques.force.N_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4649};
  data->localData[0]->realVars[1558] /* hydrodynamicForcesTorques.force.f_in_m[2] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1358] /* hydrodynamicForcesTorques.F_hd_b[2] variable */),data->simulationInfo->realParameter[443] /* hydrodynamicForcesTorques.force.N_to_m PARAM */,"hydrodynamicForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4650
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.length = sqrt(hydrodynamicForcesTorques.force.f_in_m[1] ^ 2.0 + hydrodynamicForcesTorques.force.f_in_m[2] ^ 2.0 + hydrodynamicForcesTorques.force.f_in_m[3] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4650};
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  tmp30 = data->localData[0]->realVars[1557] /* hydrodynamicForcesTorques.force.f_in_m[1] variable */;
  tmp31 = data->localData[0]->realVars[1558] /* hydrodynamicForcesTorques.force.f_in_m[2] variable */;
  tmp32 = data->localData[0]->realVars[1559] /* hydrodynamicForcesTorques.force.f_in_m[3] variable */;
  data->localData[0]->realVars[1541] /* hydrodynamicForcesTorques.force.arrow.length variable */ = sqrt((tmp30 * tmp30) + (tmp31 * tmp31) + (tmp32 * tmp32));
  TRACE_POP
}
/*
equation index: 4651
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.e_x[1] = if noEvent(hydrodynamicForcesTorques.force.arrow.length < 1e-10) then 1.0 else (-hydrodynamicForcesTorques.force.f_in_m[1]) / hydrodynamicForcesTorques.force.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4651};
  modelica_boolean tmp33;
  tmp33 = Less(data->localData[0]->realVars[1541] /* hydrodynamicForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1538] /* hydrodynamicForcesTorques.force.arrow.e_x[1] variable */ = (tmp33?1.0:DIVISION_SIM((-data->localData[0]->realVars[1557] /* hydrodynamicForcesTorques.force.f_in_m[1] variable */),data->localData[0]->realVars[1541] /* hydrodynamicForcesTorques.force.arrow.length variable */,"hydrodynamicForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4652
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.e_x[3] = if noEvent(hydrodynamicForcesTorques.force.arrow.length < 1e-10) then 0.0 else (-hydrodynamicForcesTorques.force.f_in_m[3]) / hydrodynamicForcesTorques.force.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4652};
  modelica_boolean tmp34;
  tmp34 = Less(data->localData[0]->realVars[1541] /* hydrodynamicForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1540] /* hydrodynamicForcesTorques.force.arrow.e_x[3] variable */ = (tmp34?0.0:DIVISION_SIM((-data->localData[0]->realVars[1559] /* hydrodynamicForcesTorques.force.f_in_m[3] variable */),data->localData[0]->realVars[1541] /* hydrodynamicForcesTorques.force.arrow.length variable */,"hydrodynamicForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4653
type: SIMPLE_ASSIGN
$cse7 = min(hydrodynamicForcesTorques.force.arrow.length, 4.0 * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4653};
  data->localData[0]->realVars[91] /* $cse7 variable */ = fmin(data->localData[0]->realVars[1541] /* hydrodynamicForcesTorques.force.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4654
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.arrowHead.length = max(0.0, $cse7)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4654};
  data->localData[0]->realVars[1523] /* hydrodynamicForcesTorques.force.arrow.arrowHead.length variable */ = fmax(0.0,data->localData[0]->realVars[91] /* $cse7 variable */);
  TRACE_POP
}
/*
equation index: 4655
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.arrowLength = max(0.0, hydrodynamicForcesTorques.force.arrow.length + (-4.0) * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4655};
  data->localData[0]->realVars[1533] /* hydrodynamicForcesTorques.force.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[1541] /* hydrodynamicForcesTorques.force.arrow.length variable */ + (-4.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4656
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.e_x[2] = if noEvent(hydrodynamicForcesTorques.force.arrow.length < 1e-10) then 0.0 else (-hydrodynamicForcesTorques.force.f_in_m[2]) / hydrodynamicForcesTorques.force.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4656};
  modelica_boolean tmp35;
  tmp35 = Less(data->localData[0]->realVars[1541] /* hydrodynamicForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1539] /* hydrodynamicForcesTorques.force.arrow.e_x[2] variable */ = (tmp35?0.0:DIVISION_SIM((-data->localData[0]->realVars[1558] /* hydrodynamicForcesTorques.force.f_in_m[2] variable */),data->localData[0]->realVars[1541] /* hydrodynamicForcesTorques.force.arrow.length variable */,"hydrodynamicForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4657
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.rxvisobj[1] = hull.frame_a.R.T[1,1] * hydrodynamicForcesTorques.force.arrow.e_x[1] + hull.frame_a.R.T[2,1] * hydrodynamicForcesTorques.force.arrow.e_x[2] + hull.frame_a.R.T[3,1] * hydrodynamicForcesTorques.force.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4657};
  data->localData[0]->realVars[1545] /* hydrodynamicForcesTorques.force.arrow.rxvisobj[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1538] /* hydrodynamicForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1539] /* hydrodynamicForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1540] /* hydrodynamicForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4658
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.rxvisobj[3] = hull.frame_a.R.T[1,3] * hydrodynamicForcesTorques.force.arrow.e_x[1] + hull.frame_a.R.T[2,3] * hydrodynamicForcesTorques.force.arrow.e_x[2] + hull.frame_a.R.T[3,3] * hydrodynamicForcesTorques.force.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4658};
  data->localData[0]->realVars[1547] /* hydrodynamicForcesTorques.force.arrow.rxvisobj[3] variable */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1538] /* hydrodynamicForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1539] /* hydrodynamicForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1540] /* hydrodynamicForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4659
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.rvisobj[1] = hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + hull.frame_a.R.T[1,1] * hydrodynamicForcesTorques.force.f_in_m[1] + hull.frame_a.R.T[2,1] * hydrodynamicForcesTorques.force.f_in_m[2] + hull.frame_a.R.T[3,1] * hydrodynamicForcesTorques.force.f_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4659};
  data->localData[0]->realVars[1542] /* hydrodynamicForcesTorques.force.arrow.rvisobj[1] variable */ = data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1557] /* hydrodynamicForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1558] /* hydrodynamicForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1559] /* hydrodynamicForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4660
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.arrowHead.r[1] = hydrodynamicForcesTorques.force.arrow.rvisobj[1] + hydrodynamicForcesTorques.force.arrow.rxvisobj[1] * hydrodynamicForcesTorques.force.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4660};
  data->localData[0]->realVars[1524] /* hydrodynamicForcesTorques.force.arrow.arrowHead.r[1] variable */ = data->localData[0]->realVars[1542] /* hydrodynamicForcesTorques.force.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1545] /* hydrodynamicForcesTorques.force.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1533] /* hydrodynamicForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4661
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.rvisobj[3] = hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + hull.frame_a.R.T[1,3] * hydrodynamicForcesTorques.force.f_in_m[1] + hull.frame_a.R.T[2,3] * hydrodynamicForcesTorques.force.f_in_m[2] + hull.frame_a.R.T[3,3] * hydrodynamicForcesTorques.force.f_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4661};
  data->localData[0]->realVars[1544] /* hydrodynamicForcesTorques.force.arrow.rvisobj[3] variable */ = data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1557] /* hydrodynamicForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1558] /* hydrodynamicForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1559] /* hydrodynamicForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4662
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.arrowHead.r[3] = hydrodynamicForcesTorques.force.arrow.rvisobj[3] + hydrodynamicForcesTorques.force.arrow.rxvisobj[3] * hydrodynamicForcesTorques.force.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4662};
  data->localData[0]->realVars[1526] /* hydrodynamicForcesTorques.force.arrow.arrowHead.r[3] variable */ = data->localData[0]->realVars[1544] /* hydrodynamicForcesTorques.force.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1547] /* hydrodynamicForcesTorques.force.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1533] /* hydrodynamicForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4663
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.T_hd_b[2] = hydrodynamicForcesTorques.R_FB[2,1] * hydrodynamicForcesTorques.T_hd[1] + hydrodynamicForcesTorques.R_FB[2,2] * hydrodynamicForcesTorques.T_hd[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4663};
  data->localData[0]->realVars[1373] /* hydrodynamicForcesTorques.T_hd_b[2] variable */ = (data->localData[0]->realVars[1363] /* hydrodynamicForcesTorques.R_FB[2,1] variable */) * (data->localData[0]->realVars[1369] /* hydrodynamicForcesTorques.T_hd[1] variable */) + (data->localData[0]->realVars[1364] /* hydrodynamicForcesTorques.R_FB[2,2] variable */) * (data->localData[0]->realVars[1370] /* hydrodynamicForcesTorques.T_hd[2] variable */);
  TRACE_POP
}
/*
equation index: 4664
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.t_in_m[2] = (-hydrodynamicForcesTorques.T_hd_b[2]) / hydrodynamicForcesTorques.torque.Nm_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4664};
  data->localData[0]->realVars[1631] /* hydrodynamicForcesTorques.torque.t_in_m[2] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1373] /* hydrodynamicForcesTorques.T_hd_b[2] variable */),data->simulationInfo->realParameter[452] /* hydrodynamicForcesTorques.torque.Nm_to_m PARAM */,"hydrodynamicForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4665
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.length = sqrt(hydrodynamicForcesTorques.torque.t_in_m[1] ^ 2.0 + hydrodynamicForcesTorques.torque.t_in_m[2] ^ 2.0 + hydrodynamicForcesTorques.torque.t_in_m[3] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4665};
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  tmp36 = data->localData[0]->realVars[1630] /* hydrodynamicForcesTorques.torque.t_in_m[1] variable */;
  tmp37 = data->localData[0]->realVars[1631] /* hydrodynamicForcesTorques.torque.t_in_m[2] variable */;
  tmp38 = data->localData[0]->realVars[1632] /* hydrodynamicForcesTorques.torque.t_in_m[3] variable */;
  data->localData[0]->realVars[1614] /* hydrodynamicForcesTorques.torque.arrow.length variable */ = sqrt((tmp36 * tmp36) + (tmp37 * tmp37) + (tmp38 * tmp38));
  TRACE_POP
}
/*
equation index: 4666
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.e_x[1] = if noEvent(hydrodynamicForcesTorques.torque.arrow.length < 1e-10) then 1.0 else (-hydrodynamicForcesTorques.torque.t_in_m[1]) / hydrodynamicForcesTorques.torque.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4666};
  modelica_boolean tmp39;
  tmp39 = Less(data->localData[0]->realVars[1614] /* hydrodynamicForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1609] /* hydrodynamicForcesTorques.torque.arrow.e_x[1] variable */ = (tmp39?1.0:DIVISION_SIM((-data->localData[0]->realVars[1630] /* hydrodynamicForcesTorques.torque.t_in_m[1] variable */),data->localData[0]->realVars[1614] /* hydrodynamicForcesTorques.torque.arrow.length variable */,"hydrodynamicForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4667
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.e_x[3] = if noEvent(hydrodynamicForcesTorques.torque.arrow.length < 1e-10) then 0.0 else (-hydrodynamicForcesTorques.torque.t_in_m[3]) / hydrodynamicForcesTorques.torque.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4667};
  modelica_boolean tmp40;
  tmp40 = Less(data->localData[0]->realVars[1614] /* hydrodynamicForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1611] /* hydrodynamicForcesTorques.torque.arrow.e_x[3] variable */ = (tmp40?0.0:DIVISION_SIM((-data->localData[0]->realVars[1632] /* hydrodynamicForcesTorques.torque.t_in_m[3] variable */),data->localData[0]->realVars[1614] /* hydrodynamicForcesTorques.torque.arrow.length variable */,"hydrodynamicForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4668
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.arrowLength = max(0.0, hydrodynamicForcesTorques.torque.arrow.length + (-6.0) * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4668};
  data->localData[0]->realVars[1604] /* hydrodynamicForcesTorques.torque.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[1614] /* hydrodynamicForcesTorques.torque.arrow.length variable */ + (-6.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4669
type: SIMPLE_ASSIGN
$cse8 = min(hydrodynamicForcesTorques.torque.arrow.length, 4.0 * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4669};
  data->localData[0]->realVars[92] /* $cse8 variable */ = fmin(data->localData[0]->realVars[1614] /* hydrodynamicForcesTorques.torque.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4670
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.headLength = max(0.0, $cse8)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4670};
  data->localData[0]->realVars[1612] /* hydrodynamicForcesTorques.torque.arrow.headLength variable */ = fmax(0.0,data->localData[0]->realVars[92] /* $cse8 variable */);
  TRACE_POP
}
/*
equation index: 4671
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.e_x[2] = if noEvent(hydrodynamicForcesTorques.torque.arrow.length < 1e-10) then 0.0 else (-hydrodynamicForcesTorques.torque.t_in_m[2]) / hydrodynamicForcesTorques.torque.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4671};
  modelica_boolean tmp41;
  tmp41 = Less(data->localData[0]->realVars[1614] /* hydrodynamicForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1610] /* hydrodynamicForcesTorques.torque.arrow.e_x[2] variable */ = (tmp41?0.0:DIVISION_SIM((-data->localData[0]->realVars[1631] /* hydrodynamicForcesTorques.torque.t_in_m[2] variable */),data->localData[0]->realVars[1614] /* hydrodynamicForcesTorques.torque.arrow.length variable */,"hydrodynamicForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4672
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] = hull.frame_a.R.T[1,1] * hydrodynamicForcesTorques.torque.arrow.e_x[1] + hull.frame_a.R.T[2,1] * hydrodynamicForcesTorques.torque.arrow.e_x[2] + hull.frame_a.R.T[3,1] * hydrodynamicForcesTorques.torque.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4672};
  data->localData[0]->realVars[1618] /* hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1609] /* hydrodynamicForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1610] /* hydrodynamicForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1611] /* hydrodynamicForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4673
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] = hull.frame_a.R.T[1,3] * hydrodynamicForcesTorques.torque.arrow.e_x[1] + hull.frame_a.R.T[2,3] * hydrodynamicForcesTorques.torque.arrow.e_x[2] + hull.frame_a.R.T[3,3] * hydrodynamicForcesTorques.torque.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4673};
  data->localData[0]->realVars[1620] /* hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] variable */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1609] /* hydrodynamicForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1610] /* hydrodynamicForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1611] /* hydrodynamicForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4674
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.rvisobj[1] = hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + hull.frame_a.R.T[1,1] * hydrodynamicForcesTorques.torque.t_in_m[1] + hull.frame_a.R.T[2,1] * hydrodynamicForcesTorques.torque.t_in_m[2] + hull.frame_a.R.T[3,1] * hydrodynamicForcesTorques.torque.t_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4674};
  data->localData[0]->realVars[1615] /* hydrodynamicForcesTorques.torque.arrow.rvisobj[1] variable */ = data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1630] /* hydrodynamicForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1631] /* hydrodynamicForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1632] /* hydrodynamicForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4675
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[1] = hydrodynamicForcesTorques.torque.arrow.rvisobj[1] + hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] * hydrodynamicForcesTorques.torque.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4675};
  data->localData[0]->realVars[1582] /* hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[1] variable */ = data->localData[0]->realVars[1615] /* hydrodynamicForcesTorques.torque.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1618] /* hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1604] /* hydrodynamicForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4676
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[1] = hydrodynamicForcesTorques.torque.arrow.rvisobj[1] + hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] * (hydrodynamicForcesTorques.torque.arrow.arrowLength + 0.5 * hydrodynamicForcesTorques.torque.arrow.headLength)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4676};
  data->localData[0]->realVars[1595] /* hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[1] variable */ = data->localData[0]->realVars[1615] /* hydrodynamicForcesTorques.torque.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1618] /* hydrodynamicForcesTorques.torque.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1604] /* hydrodynamicForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1612] /* hydrodynamicForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4677
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.rvisobj[3] = hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + hull.frame_a.R.T[1,3] * hydrodynamicForcesTorques.torque.t_in_m[1] + hull.frame_a.R.T[2,3] * hydrodynamicForcesTorques.torque.t_in_m[2] + hull.frame_a.R.T[3,3] * hydrodynamicForcesTorques.torque.t_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4677};
  data->localData[0]->realVars[1617] /* hydrodynamicForcesTorques.torque.arrow.rvisobj[3] variable */ = data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1630] /* hydrodynamicForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1631] /* hydrodynamicForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1632] /* hydrodynamicForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4678
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[3] = hydrodynamicForcesTorques.torque.arrow.rvisobj[3] + hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] * hydrodynamicForcesTorques.torque.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4678};
  data->localData[0]->realVars[1584] /* hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[3] variable */ = data->localData[0]->realVars[1617] /* hydrodynamicForcesTorques.torque.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1620] /* hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1604] /* hydrodynamicForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4679
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[3] = hydrodynamicForcesTorques.torque.arrow.rvisobj[3] + hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] * (hydrodynamicForcesTorques.torque.arrow.arrowLength + 0.5 * hydrodynamicForcesTorques.torque.arrow.headLength)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4679};
  data->localData[0]->realVars[1597] /* hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[3] variable */ = data->localData[0]->realVars[1617] /* hydrodynamicForcesTorques.torque.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1620] /* hydrodynamicForcesTorques.torque.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1604] /* hydrodynamicForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1612] /* hydrodynamicForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4680
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.rxvisobj[2] = hull.frame_a.R.T[1,2] * hydrodynamicForcesTorques.force.arrow.e_x[1] + hull.frame_a.R.T[2,2] * hydrodynamicForcesTorques.force.arrow.e_x[2] + hull.frame_a.R.T[3,2] * hydrodynamicForcesTorques.force.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4680};
  data->localData[0]->realVars[1546] /* hydrodynamicForcesTorques.force.arrow.rxvisobj[2] variable */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1538] /* hydrodynamicForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1539] /* hydrodynamicForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1540] /* hydrodynamicForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4681
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.rvisobj[2] = hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + hull.frame_a.R.T[1,2] * hydrodynamicForcesTorques.force.f_in_m[1] + hull.frame_a.R.T[2,2] * hydrodynamicForcesTorques.force.f_in_m[2] + hull.frame_a.R.T[3,2] * hydrodynamicForcesTorques.force.f_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4681};
  data->localData[0]->realVars[1543] /* hydrodynamicForcesTorques.force.arrow.rvisobj[2] variable */ = data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1557] /* hydrodynamicForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1558] /* hydrodynamicForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1559] /* hydrodynamicForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4682
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.force.arrow.arrowHead.r[2] = hydrodynamicForcesTorques.force.arrow.rvisobj[2] + hydrodynamicForcesTorques.force.arrow.rxvisobj[2] * hydrodynamicForcesTorques.force.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4682};
  data->localData[0]->realVars[1525] /* hydrodynamicForcesTorques.force.arrow.arrowHead.r[2] variable */ = data->localData[0]->realVars[1543] /* hydrodynamicForcesTorques.force.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1546] /* hydrodynamicForcesTorques.force.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1533] /* hydrodynamicForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4683
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] = hull.frame_a.R.T[1,2] * hydrodynamicForcesTorques.torque.arrow.e_x[1] + hull.frame_a.R.T[2,2] * hydrodynamicForcesTorques.torque.arrow.e_x[2] + hull.frame_a.R.T[3,2] * hydrodynamicForcesTorques.torque.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4683};
  data->localData[0]->realVars[1619] /* hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] variable */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1609] /* hydrodynamicForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1610] /* hydrodynamicForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1611] /* hydrodynamicForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4684
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.rvisobj[2] = hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + hull.frame_a.R.T[1,2] * hydrodynamicForcesTorques.torque.t_in_m[1] + hull.frame_a.R.T[2,2] * hydrodynamicForcesTorques.torque.t_in_m[2] + hull.frame_a.R.T[3,2] * hydrodynamicForcesTorques.torque.t_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4684};
  data->localData[0]->realVars[1616] /* hydrodynamicForcesTorques.torque.arrow.rvisobj[2] variable */ = data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1630] /* hydrodynamicForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1631] /* hydrodynamicForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1632] /* hydrodynamicForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4685
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[2] = hydrodynamicForcesTorques.torque.arrow.rvisobj[2] + hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] * hydrodynamicForcesTorques.torque.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4685};
  data->localData[0]->realVars[1583] /* hydrodynamicForcesTorques.torque.arrow.arrowHead1.r[2] variable */ = data->localData[0]->realVars[1616] /* hydrodynamicForcesTorques.torque.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1619] /* hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1604] /* hydrodynamicForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4686
type: SIMPLE_ASSIGN
hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[2] = hydrodynamicForcesTorques.torque.arrow.rvisobj[2] + hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] * (hydrodynamicForcesTorques.torque.arrow.arrowLength + 0.5 * hydrodynamicForcesTorques.torque.arrow.headLength)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4686};
  data->localData[0]->realVars[1596] /* hydrodynamicForcesTorques.torque.arrow.arrowHead2.r[2] variable */ = data->localData[0]->realVars[1616] /* hydrodynamicForcesTorques.torque.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1619] /* hydrodynamicForcesTorques.torque.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1604] /* hydrodynamicForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1612] /* hydrodynamicForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4687
type: SIMPLE_ASSIGN
addedMassForcesTorques.absoluteSensor.der2[2].u = hull.frame_a.R.T[1,2] * hull.w_a[1] + hull.frame_a.R.T[2,2] * hull.w_a[2] + hull.frame_a.R.T[3,2] * hull.w_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4687};
  data->localData[0]->realVars[884] /* addedMassForcesTorques.absoluteSensor.der2[2].u DUMMY_STATE */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */);
  TRACE_POP
}
/*
equation index: 4688
type: SIMPLE_ASSIGN
$DER.hull.frame_a.R.T[1,1] = 4.0 * (actuators.bodyVariableMass.Q[1] * $DER.actuators.bodyVariableMass.Q[1] + actuators.bodyVariableMass.Q[4] * $DER.actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4688};
  data->localData[0]->realVars[79] /* der(hull.frame_a.R.T[1,1]) DUMMY_DER */ = (4.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[38] /* der(actuators.bodyVariableMass.Q[1]) DUMMY_DER */) + (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) * (data->localData[0]->realVars[41] /* der(actuators.bodyVariableMass.Q[4]) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4689
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.w[3] = actuators.revolute.e[3] * actuators.revolute.w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4689};
  data->localData[0]->realVars[583] /* actuators.revolute.R_rel.w[3] DUMMY_STATE */ = (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */);
  TRACE_POP
}
/*
equation index: 4690
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.w[2] = actuators.revolute.e[2] * actuators.revolute.w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4690};
  data->localData[0]->realVars[582] /* actuators.revolute.R_rel.w[2] DUMMY_STATE */ = (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */);
  TRACE_POP
}
/*
equation index: 4691
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.w[1] = actuators.revolute.e[1] * actuators.revolute.w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4691};
  data->localData[0]->realVars[581] /* actuators.revolute.R_rel.w[1] DUMMY_STATE */ = (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */);
  TRACE_POP
}
/*
equation index: 4692
type: SIMPLE_ASSIGN
$cse2 = cos(actuators.position.phi)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4692};
  data->localData[0]->realVars[86] /* $cse2 variable */ = cos(data->localData[0]->realVars[3] /* actuators.position.phi STATE(1,actuators.revolute.w) */);
  TRACE_POP
}
/*
equation index: 4693
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.T[1,1] = actuators.revolute.e[1] ^ 2.0 + (1.0 - actuators.revolute.e[1] ^ 2.0) * $cse2
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4693};
  modelica_real tmp42;
  modelica_real tmp43;
  tmp42 = data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */;
  tmp43 = data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */;
  data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */ = (tmp42 * tmp42) + (1.0 - ((tmp43 * tmp43))) * (data->localData[0]->realVars[86] /* $cse2 variable */);
  TRACE_POP
}
/*
equation index: 4694
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.T[2,2] = actuators.revolute.e[2] ^ 2.0 + (1.0 - actuators.revolute.e[2] ^ 2.0) * $cse2
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4694};
  modelica_real tmp44;
  modelica_real tmp45;
  tmp44 = data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */;
  tmp45 = data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */;
  data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */ = (tmp44 * tmp44) + (1.0 - ((tmp45 * tmp45))) * (data->localData[0]->realVars[86] /* $cse2 variable */);
  TRACE_POP
}
/*
equation index: 4695
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.T[3,3] = actuators.revolute.e[3] ^ 2.0 + (1.0 - actuators.revolute.e[3] ^ 2.0) * $cse2
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4695};
  modelica_real tmp46;
  modelica_real tmp47;
  tmp46 = data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */;
  tmp47 = data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */;
  data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */ = (tmp46 * tmp46) + (1.0 - ((tmp47 * tmp47))) * (data->localData[0]->realVars[86] /* $cse2 variable */);
  TRACE_POP
}
/*
equation index: 4696
type: SIMPLE_ASSIGN
$cse1 = sin(actuators.position.phi)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4696};
  data->localData[0]->realVars[85] /* $cse1 variable */ = sin(data->localData[0]->realVars[3] /* actuators.position.phi STATE(1,actuators.revolute.w) */);
  TRACE_POP
}
/*
equation index: 4697
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.T[1,2] = (actuators.revolute.e[1] - actuators.revolute.e[1] * $cse2) * actuators.revolute.e[2] + actuators.revolute.e[3] * $cse1
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4697};
  data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */ = (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */ - ((data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[86] /* $cse2 variable */))) * (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) + (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[85] /* $cse1 variable */);
  TRACE_POP
}
/*
equation index: 4698
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.T[1,3] = (actuators.revolute.e[1] - actuators.revolute.e[1] * $cse2) * actuators.revolute.e[3] - actuators.revolute.e[2] * $cse1
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4698};
  data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */ = (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */ - ((data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[86] /* $cse2 variable */))) * (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) - ((data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[85] /* $cse1 variable */));
  TRACE_POP
}
/*
equation index: 4699
type: SIMPLE_ASSIGN
actuators.body_rolling.w_a[1] = actuators.revolute.R_rel.T[1,1] * hull.w_a[1] + actuators.revolute.R_rel.T[1,2] * hull.w_a[2] + actuators.revolute.R_rel.T[1,3] * hull.w_a[3] + actuators.revolute.R_rel.w[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4699};
  data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) + data->localData[0]->realVars[581] /* actuators.revolute.R_rel.w[1] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4700
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.R.T[1,3] = actuators.revolute.R_rel.T[1,1] * hull.frame_a.R.T[1,3] + actuators.revolute.R_rel.T[1,2] * hull.frame_a.R.T[2,3] + actuators.revolute.R_rel.T[1,3] * hull.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4700};
  data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4701
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] = hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + actuators.body_rolling.frame_a.R.T[1,3] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4701};
  data->localData[0]->realVars[522] /* actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] DUMMY_STATE */ = data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */);
  TRACE_POP
}
/*
equation index: 4702
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.R.T[1,2] = actuators.revolute.R_rel.T[1,1] * hull.frame_a.R.T[1,2] + actuators.revolute.R_rel.T[1,2] * hull.frame_a.R.T[2,2] + actuators.revolute.R_rel.T[1,3] * hull.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4702};
  data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4703
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] = hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + actuators.body_rolling.frame_a.R.T[1,2] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4703};
  data->localData[0]->realVars[521] /* actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] DUMMY_STATE */ = data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */);
  TRACE_POP
}
/*
equation index: 4704
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.R.T[1,1] = actuators.revolute.R_rel.T[1,1] * hull.frame_a.R.T[1,1] + actuators.revolute.R_rel.T[1,2] * hull.frame_a.R.T[2,1] + actuators.revolute.R_rel.T[1,3] * hull.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4704};
  data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4705
type: SIMPLE_ASSIGN
actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] = hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + actuators.body_rolling.frame_a.R.T[1,1] * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4705};
  data->localData[0]->realVars[520] /* actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] DUMMY_STATE */ = data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */);
  TRACE_POP
}
/*
equation index: 4706
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.T[2,1] = (actuators.revolute.e[2] - actuators.revolute.e[2] * $cse2) * actuators.revolute.e[1] - actuators.revolute.e[3] * $cse1
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4706};
  data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */ = (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */ - ((data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[86] /* $cse2 variable */))) * (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) - ((data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[85] /* $cse1 variable */));
  TRACE_POP
}
/*
equation index: 4707
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.T[2,3] = (actuators.revolute.e[2] - actuators.revolute.e[2] * $cse2) * actuators.revolute.e[3] + actuators.revolute.e[1] * $cse1
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4707};
  data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */ = (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */ - ((data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[86] /* $cse2 variable */))) * (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) + (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[85] /* $cse1 variable */);
  TRACE_POP
}
/*
equation index: 4708
type: SIMPLE_ASSIGN
actuators.body_rolling.w_a[2] = actuators.revolute.R_rel.T[2,1] * hull.w_a[1] + actuators.revolute.R_rel.T[2,2] * hull.w_a[2] + actuators.revolute.R_rel.T[2,3] * hull.w_a[3] + actuators.revolute.R_rel.w[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4708};
  data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */ = (data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) + data->localData[0]->realVars[582] /* actuators.revolute.R_rel.w[2] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4709
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.R.T[2,3] = actuators.revolute.R_rel.T[2,1] * hull.frame_a.R.T[1,3] + actuators.revolute.R_rel.T[2,2] * hull.frame_a.R.T[2,3] + actuators.revolute.R_rel.T[2,3] * hull.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4709};
  data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */ = (data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4710
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.R.T[2,2] = actuators.revolute.R_rel.T[2,1] * hull.frame_a.R.T[1,2] + actuators.revolute.R_rel.T[2,2] * hull.frame_a.R.T[2,2] + actuators.revolute.R_rel.T[2,3] * hull.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4710};
  data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */ = (data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4711
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.R.T[2,1] = actuators.revolute.R_rel.T[2,1] * hull.frame_a.R.T[1,1] + actuators.revolute.R_rel.T[2,2] * hull.frame_a.R.T[2,1] + actuators.revolute.R_rel.T[2,3] * hull.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4711};
  data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */ = (data->localData[0]->realVars[575] /* actuators.revolute.R_rel.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) + (data->localData[0]->realVars[576] /* actuators.revolute.R_rel.T[2,2] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) + (data->localData[0]->realVars[577] /* actuators.revolute.R_rel.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4712
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.T[3,1] = (actuators.revolute.e[3] - actuators.revolute.e[3] * $cse2) * actuators.revolute.e[1] + actuators.revolute.e[2] * $cse1
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4712};
  data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */ = (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */ - ((data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[86] /* $cse2 variable */))) * (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) + (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) * (data->localData[0]->realVars[85] /* $cse1 variable */);
  TRACE_POP
}
/*
equation index: 4713
type: SIMPLE_ASSIGN
actuators.revolute.R_rel.T[3,2] = (actuators.revolute.e[3] - actuators.revolute.e[3] * $cse2) * actuators.revolute.e[2] - actuators.revolute.e[1] * $cse1
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4713};
  data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */ = (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */ - ((data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) * (data->localData[0]->realVars[86] /* $cse2 variable */))) * (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) - ((data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) * (data->localData[0]->realVars[85] /* $cse1 variable */));
  TRACE_POP
}
/*
equation index: 4714
type: SIMPLE_ASSIGN
actuators.body_rolling.w_a[3] = actuators.revolute.R_rel.T[3,1] * hull.w_a[1] + actuators.revolute.R_rel.T[3,2] * hull.w_a[2] + actuators.revolute.R_rel.T[3,3] * hull.w_a[3] + actuators.revolute.R_rel.w[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4714};
  data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */ = (data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[10] /* hull.w_a[1] STATE(1,hull.z_a[1]) */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[11] /* hull.w_a[2] STATE(1,hull.z_a[2]) */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[12] /* hull.w_a[3] STATE(1,hull.z_a[3]) */) + data->localData[0]->realVars[583] /* actuators.revolute.R_rel.w[3] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4715
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.R.T[3,3] = actuators.revolute.R_rel.T[3,1] * hull.frame_a.R.T[1,3] + actuators.revolute.R_rel.T[3,2] * hull.frame_a.R.T[2,3] + actuators.revolute.R_rel.T[3,3] * hull.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4715};
  data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */ = (data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4716
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.r_0[3] = actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] + 0.014 * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4716};
  data->localData[0]->realVars[189] /* actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ = data->localData[0]->realVars[522] /* actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] DUMMY_STATE */ + (0.014) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4717
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_arrowHead.r[3] = actuators.body_rolling.frame_a.r_0[3] + actuators.body_rolling.frame_a.R.T[1,3] * actuators.fixedFrame.lineLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4717};
  data->localData[0]->realVars[230] /* actuators.fixedFrame.x_arrowHead.r[3] variable */ = data->localData[0]->realVars[189] /* actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[220] /* actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4718
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.r_abs[3] = actuators.body_rolling.frame_a.r_0[3] + 0.525 * actuators.body_rolling.frame_a.R.T[1,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4718};
  data->localData[0]->realVars[305] /* actuators.fixedFrame.x_label.r_abs[3] variable */ = data->localData[0]->realVars[189] /* actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4719
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_arrowHead.r[3] = actuators.body_rolling.frame_a.r_0[3] + actuators.body_rolling.frame_a.R.T[2,3] * actuators.fixedFrame.lineLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4719};
  data->localData[0]->realVars[317] /* actuators.fixedFrame.y_arrowHead.r[3] variable */ = data->localData[0]->realVars[189] /* actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[220] /* actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4720
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.r_abs[3] = actuators.body_rolling.frame_a.r_0[3] + 0.525 * actuators.body_rolling.frame_a.R.T[2,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4720};
  data->localData[0]->realVars[394] /* actuators.fixedFrame.y_label.r_abs[3] variable */ = data->localData[0]->realVars[189] /* actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */);
  TRACE_POP
}
/*
equation index: 4721
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_arrowHead.r[3] = actuators.body_rolling.frame_a.r_0[3] + actuators.body_rolling.frame_a.R.T[3,3] * actuators.fixedFrame.lineLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4721};
  data->localData[0]->realVars[406] /* actuators.fixedFrame.z_arrowHead.r[3] variable */ = data->localData[0]->realVars[189] /* actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * (data->localData[0]->realVars[220] /* actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4722
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.r_abs[3] = actuators.body_rolling.frame_a.r_0[3] + 0.525 * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4722};
  data->localData[0]->realVars[498] /* actuators.fixedFrame.z_label.r_abs[3] variable */ = data->localData[0]->realVars[189] /* actuators.body_rolling.frame_a.r_0[3] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4723
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.R_lines[1,3] = actuators.fixedFrame.x_label.R_rel[1,1] * actuators.body_rolling.frame_a.R.T[1,3] + actuators.fixedFrame.x_label.R_rel[1,2] * actuators.body_rolling.frame_a.R.T[2,3] + actuators.fixedFrame.x_label.R_rel[1,3] * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4723};
  data->localData[0]->realVars[249] /* actuators.fixedFrame.x_label.R_lines[1,3] variable */ = (data->localData[0]->realVars[256] /* actuators.fixedFrame.x_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[257] /* actuators.fixedFrame.x_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[258] /* actuators.fixedFrame.x_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4724
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.R_lines[2,3] = actuators.fixedFrame.x_label.R_rel[2,1] * actuators.body_rolling.frame_a.R.T[1,3] + actuators.fixedFrame.x_label.R_rel[2,2] * actuators.body_rolling.frame_a.R.T[2,3] + actuators.fixedFrame.x_label.R_rel[2,3] * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4724};
  data->localData[0]->realVars[252] /* actuators.fixedFrame.x_label.R_lines[2,3] variable */ = (data->localData[0]->realVars[259] /* actuators.fixedFrame.x_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[260] /* actuators.fixedFrame.x_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[261] /* actuators.fixedFrame.x_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4725
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[2].r[3] = actuators.fixedFrame.x_label.r_abs[3] + actuators.fixedFrame.x_label.R_lines[2,3] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4725};
  data->localData[0]->realVars[280] /* actuators.fixedFrame.x_label.cylinders[2].r[3] variable */ = data->localData[0]->realVars[305] /* actuators.fixedFrame.x_label.r_abs[3] variable */ + (data->localData[0]->realVars[252] /* actuators.fixedFrame.x_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4726
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.R_lines[3,3] = actuators.fixedFrame.x_label.R_rel[3,1] * actuators.body_rolling.frame_a.R.T[1,3] + actuators.fixedFrame.x_label.R_rel[3,2] * actuators.body_rolling.frame_a.R.T[2,3] + actuators.fixedFrame.x_label.R_rel[3,3] * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4726};
  data->localData[0]->realVars[255] /* actuators.fixedFrame.x_label.R_lines[3,3] variable */ = (data->localData[0]->realVars[262] /* actuators.fixedFrame.x_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[263] /* actuators.fixedFrame.x_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[264] /* actuators.fixedFrame.x_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4727
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.R_lines[1,3] = actuators.fixedFrame.y_label.R_rel[1,1] * actuators.body_rolling.frame_a.R.T[1,3] + actuators.fixedFrame.y_label.R_rel[1,2] * actuators.body_rolling.frame_a.R.T[2,3] + actuators.fixedFrame.y_label.R_rel[1,3] * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4727};
  data->localData[0]->realVars[336] /* actuators.fixedFrame.y_label.R_lines[1,3] variable */ = (data->localData[0]->realVars[343] /* actuators.fixedFrame.y_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[344] /* actuators.fixedFrame.y_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[345] /* actuators.fixedFrame.y_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4728
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.R_lines[2,3] = actuators.fixedFrame.y_label.R_rel[2,1] * actuators.body_rolling.frame_a.R.T[1,3] + actuators.fixedFrame.y_label.R_rel[2,2] * actuators.body_rolling.frame_a.R.T[2,3] + actuators.fixedFrame.y_label.R_rel[2,3] * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4728};
  data->localData[0]->realVars[339] /* actuators.fixedFrame.y_label.R_lines[2,3] variable */ = (data->localData[0]->realVars[346] /* actuators.fixedFrame.y_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[347] /* actuators.fixedFrame.y_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[348] /* actuators.fixedFrame.y_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4729
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[2].r[3] = actuators.fixedFrame.y_label.r_abs[3] + actuators.fixedFrame.y_label.R_lines[2,3] * actuators.fixedFrame.y_label.lines[2,1,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4729};
  data->localData[0]->realVars[367] /* actuators.fixedFrame.y_label.cylinders[2].r[3] variable */ = data->localData[0]->realVars[394] /* actuators.fixedFrame.y_label.r_abs[3] variable */ + (data->localData[0]->realVars[339] /* actuators.fixedFrame.y_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4730
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.R_lines[3,3] = actuators.fixedFrame.y_label.R_rel[3,1] * actuators.body_rolling.frame_a.R.T[1,3] + actuators.fixedFrame.y_label.R_rel[3,2] * actuators.body_rolling.frame_a.R.T[2,3] + actuators.fixedFrame.y_label.R_rel[3,3] * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4730};
  data->localData[0]->realVars[342] /* actuators.fixedFrame.y_label.R_lines[3,3] variable */ = (data->localData[0]->realVars[349] /* actuators.fixedFrame.y_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[350] /* actuators.fixedFrame.y_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[351] /* actuators.fixedFrame.y_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4731
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.R_lines[1,3] = actuators.fixedFrame.z_label.R_rel[1,1] * actuators.body_rolling.frame_a.R.T[1,3] + actuators.fixedFrame.z_label.R_rel[1,2] * actuators.body_rolling.frame_a.R.T[2,3] + actuators.fixedFrame.z_label.R_rel[1,3] * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4731};
  data->localData[0]->realVars[425] /* actuators.fixedFrame.z_label.R_lines[1,3] variable */ = (data->localData[0]->realVars[432] /* actuators.fixedFrame.z_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[433] /* actuators.fixedFrame.z_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[434] /* actuators.fixedFrame.z_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4732
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.R_lines[2,3] = actuators.fixedFrame.z_label.R_rel[2,1] * actuators.body_rolling.frame_a.R.T[1,3] + actuators.fixedFrame.z_label.R_rel[2,2] * actuators.body_rolling.frame_a.R.T[2,3] + actuators.fixedFrame.z_label.R_rel[2,3] * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4732};
  data->localData[0]->realVars[428] /* actuators.fixedFrame.z_label.R_lines[2,3] variable */ = (data->localData[0]->realVars[435] /* actuators.fixedFrame.z_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[436] /* actuators.fixedFrame.z_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[437] /* actuators.fixedFrame.z_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4733
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[2].r[3] = actuators.fixedFrame.z_label.r_abs[3] + actuators.fixedFrame.z_label.R_lines[2,3] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4733};
  data->localData[0]->realVars[461] /* actuators.fixedFrame.z_label.cylinders[2].r[3] variable */ = data->localData[0]->realVars[498] /* actuators.fixedFrame.z_label.r_abs[3] variable */ + (data->localData[0]->realVars[428] /* actuators.fixedFrame.z_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4734
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[3].r[3] = actuators.fixedFrame.z_label.r_abs[3] + actuators.fixedFrame.z_label.R_lines[2,3] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4734};
  data->localData[0]->realVars[464] /* actuators.fixedFrame.z_label.cylinders[3].r[3] variable */ = data->localData[0]->realVars[498] /* actuators.fixedFrame.z_label.r_abs[3] variable */ + (data->localData[0]->realVars[428] /* actuators.fixedFrame.z_label.R_lines[2,3] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4735
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.R_lines[3,3] = actuators.fixedFrame.z_label.R_rel[3,1] * actuators.body_rolling.frame_a.R.T[1,3] + actuators.fixedFrame.z_label.R_rel[3,2] * actuators.body_rolling.frame_a.R.T[2,3] + actuators.fixedFrame.z_label.R_rel[3,3] * actuators.body_rolling.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4735};
  data->localData[0]->realVars[431] /* actuators.fixedFrame.z_label.R_lines[3,3] variable */ = (data->localData[0]->realVars[438] /* actuators.fixedFrame.z_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[439] /* actuators.fixedFrame.z_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) + (data->localData[0]->realVars[440] /* actuators.fixedFrame.z_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */);
  TRACE_POP
}
/*
equation index: 4736
type: SIMPLE_ASSIGN
$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] = addedMassForcesTorques.absoluteSensor.der1[3].u + actuators.body_rolling.frame_a.R.T[1,3] * actuators.prismatic.v + actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s + actuators.body_rolling.frame_a.R.T[3,3] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4736};
  data->localData[0]->realVars[63] /* der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[3]) DUMMY_DER */ = data->localData[0]->realVars[9] /* addedMassForcesTorques.absoluteSensor.der1[3].u STATE(1,hull.a_0[3]) */ + (data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */) + (data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) + (data->localData[0]->realVars[186] /* actuators.body_rolling.frame_a.R.T[3,3] variable */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 4737
type: SIMPLE_ASSIGN
actuators.body_rolling.v_0[3] = $DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[3] + 0.014 * actuators.body_rolling.frame_a.R.T[1,3] * actuators.body_rolling.w_a[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,3] * actuators.body_rolling.w_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4737};
  data->localData[0]->realVars[204] /* actuators.body_rolling.v_0[3] DUMMY_STATE */ = data->localData[0]->realVars[63] /* der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[3]) DUMMY_DER */ + (0.014) * ((data->localData[0]->realVars[180] /* actuators.body_rolling.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) + (-0.014) * ((data->localData[0]->realVars[183] /* actuators.body_rolling.frame_a.R.T[2,3] variable */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4738
type: SIMPLE_ASSIGN
$DER.actuators.body_rolling.frame_a.r_0[3] = actuators.body_rolling.v_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4738};
  data->localData[0]->realVars[51] /* der(actuators.body_rolling.frame_a.r_0[3]) DUMMY_DER */ = data->localData[0]->realVars[204] /* actuators.body_rolling.v_0[3] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4739
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.R.T[3,2] = actuators.revolute.R_rel.T[3,1] * hull.frame_a.R.T[1,2] + actuators.revolute.R_rel.T[3,2] * hull.frame_a.R.T[2,2] + actuators.revolute.R_rel.T[3,3] * hull.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4739};
  data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */ = (data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4740
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.R_lines[1,2] = actuators.fixedFrame.x_label.R_rel[1,1] * actuators.body_rolling.frame_a.R.T[1,2] + actuators.fixedFrame.x_label.R_rel[1,2] * actuators.body_rolling.frame_a.R.T[2,2] + actuators.fixedFrame.x_label.R_rel[1,3] * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4740};
  data->localData[0]->realVars[248] /* actuators.fixedFrame.x_label.R_lines[1,2] variable */ = (data->localData[0]->realVars[256] /* actuators.fixedFrame.x_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[257] /* actuators.fixedFrame.x_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[258] /* actuators.fixedFrame.x_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4741
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.R_lines[2,2] = actuators.fixedFrame.x_label.R_rel[2,1] * actuators.body_rolling.frame_a.R.T[1,2] + actuators.fixedFrame.x_label.R_rel[2,2] * actuators.body_rolling.frame_a.R.T[2,2] + actuators.fixedFrame.x_label.R_rel[2,3] * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4741};
  data->localData[0]->realVars[251] /* actuators.fixedFrame.x_label.R_lines[2,2] variable */ = (data->localData[0]->realVars[259] /* actuators.fixedFrame.x_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[260] /* actuators.fixedFrame.x_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[261] /* actuators.fixedFrame.x_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4742
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.R_lines[3,2] = actuators.fixedFrame.x_label.R_rel[3,1] * actuators.body_rolling.frame_a.R.T[1,2] + actuators.fixedFrame.x_label.R_rel[3,2] * actuators.body_rolling.frame_a.R.T[2,2] + actuators.fixedFrame.x_label.R_rel[3,3] * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4742};
  data->localData[0]->realVars[254] /* actuators.fixedFrame.x_label.R_lines[3,2] variable */ = (data->localData[0]->realVars[262] /* actuators.fixedFrame.x_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[263] /* actuators.fixedFrame.x_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[264] /* actuators.fixedFrame.x_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4743
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.R_lines[1,2] = actuators.fixedFrame.y_label.R_rel[1,1] * actuators.body_rolling.frame_a.R.T[1,2] + actuators.fixedFrame.y_label.R_rel[1,2] * actuators.body_rolling.frame_a.R.T[2,2] + actuators.fixedFrame.y_label.R_rel[1,3] * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4743};
  data->localData[0]->realVars[335] /* actuators.fixedFrame.y_label.R_lines[1,2] variable */ = (data->localData[0]->realVars[343] /* actuators.fixedFrame.y_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[344] /* actuators.fixedFrame.y_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[345] /* actuators.fixedFrame.y_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4744
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.R_lines[2,2] = actuators.fixedFrame.y_label.R_rel[2,1] * actuators.body_rolling.frame_a.R.T[1,2] + actuators.fixedFrame.y_label.R_rel[2,2] * actuators.body_rolling.frame_a.R.T[2,2] + actuators.fixedFrame.y_label.R_rel[2,3] * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4744};
  data->localData[0]->realVars[338] /* actuators.fixedFrame.y_label.R_lines[2,2] variable */ = (data->localData[0]->realVars[346] /* actuators.fixedFrame.y_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[347] /* actuators.fixedFrame.y_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[348] /* actuators.fixedFrame.y_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4745
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.R_lines[3,2] = actuators.fixedFrame.y_label.R_rel[3,1] * actuators.body_rolling.frame_a.R.T[1,2] + actuators.fixedFrame.y_label.R_rel[3,2] * actuators.body_rolling.frame_a.R.T[2,2] + actuators.fixedFrame.y_label.R_rel[3,3] * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4745};
  data->localData[0]->realVars[341] /* actuators.fixedFrame.y_label.R_lines[3,2] variable */ = (data->localData[0]->realVars[349] /* actuators.fixedFrame.y_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[350] /* actuators.fixedFrame.y_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[351] /* actuators.fixedFrame.y_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4746
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.R_lines[1,2] = actuators.fixedFrame.z_label.R_rel[1,1] * actuators.body_rolling.frame_a.R.T[1,2] + actuators.fixedFrame.z_label.R_rel[1,2] * actuators.body_rolling.frame_a.R.T[2,2] + actuators.fixedFrame.z_label.R_rel[1,3] * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4746};
  data->localData[0]->realVars[424] /* actuators.fixedFrame.z_label.R_lines[1,2] variable */ = (data->localData[0]->realVars[432] /* actuators.fixedFrame.z_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[433] /* actuators.fixedFrame.z_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[434] /* actuators.fixedFrame.z_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4747
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.R_lines[2,2] = actuators.fixedFrame.z_label.R_rel[2,1] * actuators.body_rolling.frame_a.R.T[1,2] + actuators.fixedFrame.z_label.R_rel[2,2] * actuators.body_rolling.frame_a.R.T[2,2] + actuators.fixedFrame.z_label.R_rel[2,3] * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4747};
  data->localData[0]->realVars[427] /* actuators.fixedFrame.z_label.R_lines[2,2] variable */ = (data->localData[0]->realVars[435] /* actuators.fixedFrame.z_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[436] /* actuators.fixedFrame.z_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[437] /* actuators.fixedFrame.z_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4748
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.R_lines[3,2] = actuators.fixedFrame.z_label.R_rel[3,1] * actuators.body_rolling.frame_a.R.T[1,2] + actuators.fixedFrame.z_label.R_rel[3,2] * actuators.body_rolling.frame_a.R.T[2,2] + actuators.fixedFrame.z_label.R_rel[3,3] * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4748};
  data->localData[0]->realVars[430] /* actuators.fixedFrame.z_label.R_lines[3,2] variable */ = (data->localData[0]->realVars[438] /* actuators.fixedFrame.z_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) + (data->localData[0]->realVars[439] /* actuators.fixedFrame.z_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) + (data->localData[0]->realVars[440] /* actuators.fixedFrame.z_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4749
type: SIMPLE_ASSIGN
$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] = addedMassForcesTorques.absoluteSensor.der1[2].u + actuators.body_rolling.frame_a.R.T[1,2] * actuators.prismatic.v + actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s + actuators.body_rolling.frame_a.R.T[3,2] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4749};
  data->localData[0]->realVars[62] /* der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[2]) DUMMY_DER */ = data->localData[0]->realVars[8] /* addedMassForcesTorques.absoluteSensor.der1[2].u STATE(1,hull.a_0[2]) */ + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */) + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) + (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 4750
type: SIMPLE_ASSIGN
actuators.body_rolling.v_0[2] = $DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] + 0.014 * actuators.body_rolling.frame_a.R.T[1,2] * actuators.body_rolling.w_a[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,2] * actuators.body_rolling.w_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4750};
  data->localData[0]->realVars[203] /* actuators.body_rolling.v_0[2] DUMMY_STATE */ = data->localData[0]->realVars[62] /* der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[2]) DUMMY_DER */ + (0.014) * ((data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) + (-0.014) * ((data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4751
type: SIMPLE_ASSIGN
$DER.actuators.body_rolling.frame_a.r_0[2] = actuators.body_rolling.v_0[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4751};
  data->localData[0]->realVars[50] /* der(actuators.body_rolling.frame_a.r_0[2]) DUMMY_DER */ = data->localData[0]->realVars[203] /* actuators.body_rolling.v_0[2] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4752
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.r_0[2] = actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] + 0.014 * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4752};
  data->localData[0]->realVars[188] /* actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ = data->localData[0]->realVars[521] /* actuators.fixedTranslation_pendulumArm.frame_a.r_0[2] DUMMY_STATE */ + (0.014) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4753
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_arrowHead.r[2] = actuators.body_rolling.frame_a.r_0[2] + actuators.body_rolling.frame_a.R.T[1,2] * actuators.fixedFrame.lineLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4753};
  data->localData[0]->realVars[229] /* actuators.fixedFrame.x_arrowHead.r[2] variable */ = data->localData[0]->realVars[188] /* actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[220] /* actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4754
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.r_abs[2] = actuators.body_rolling.frame_a.r_0[2] + 0.525 * actuators.body_rolling.frame_a.R.T[1,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4754};
  data->localData[0]->realVars[304] /* actuators.fixedFrame.x_label.r_abs[2] variable */ = data->localData[0]->realVars[188] /* actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[179] /* actuators.body_rolling.frame_a.R.T[1,2] variable */);
  TRACE_POP
}
/*
equation index: 4755
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[2].r[2] = actuators.fixedFrame.x_label.r_abs[2] + actuators.fixedFrame.x_label.R_lines[2,2] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4755};
  data->localData[0]->realVars[279] /* actuators.fixedFrame.x_label.cylinders[2].r[2] variable */ = data->localData[0]->realVars[304] /* actuators.fixedFrame.x_label.r_abs[2] variable */ + (data->localData[0]->realVars[251] /* actuators.fixedFrame.x_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4756
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_arrowHead.r[2] = actuators.body_rolling.frame_a.r_0[2] + actuators.body_rolling.frame_a.R.T[2,2] * actuators.fixedFrame.lineLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4756};
  data->localData[0]->realVars[316] /* actuators.fixedFrame.y_arrowHead.r[2] variable */ = data->localData[0]->realVars[188] /* actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[220] /* actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4757
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.r_abs[2] = actuators.body_rolling.frame_a.r_0[2] + 0.525 * actuators.body_rolling.frame_a.R.T[2,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4757};
  data->localData[0]->realVars[393] /* actuators.fixedFrame.y_label.r_abs[2] variable */ = data->localData[0]->realVars[188] /* actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[182] /* actuators.body_rolling.frame_a.R.T[2,2] variable */);
  TRACE_POP
}
/*
equation index: 4758
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[2].r[2] = actuators.fixedFrame.y_label.r_abs[2] + actuators.fixedFrame.y_label.R_lines[2,2] * actuators.fixedFrame.y_label.lines[2,1,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4758};
  data->localData[0]->realVars[366] /* actuators.fixedFrame.y_label.cylinders[2].r[2] variable */ = data->localData[0]->realVars[393] /* actuators.fixedFrame.y_label.r_abs[2] variable */ + (data->localData[0]->realVars[338] /* actuators.fixedFrame.y_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4759
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_arrowHead.r[2] = actuators.body_rolling.frame_a.r_0[2] + actuators.body_rolling.frame_a.R.T[3,2] * actuators.fixedFrame.lineLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4759};
  data->localData[0]->realVars[405] /* actuators.fixedFrame.z_arrowHead.r[2] variable */ = data->localData[0]->realVars[188] /* actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[220] /* actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4760
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.r_abs[2] = actuators.body_rolling.frame_a.r_0[2] + 0.525 * actuators.body_rolling.frame_a.R.T[3,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4760};
  data->localData[0]->realVars[497] /* actuators.fixedFrame.z_label.r_abs[2] variable */ = data->localData[0]->realVars[188] /* actuators.body_rolling.frame_a.r_0[2] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[185] /* actuators.body_rolling.frame_a.R.T[3,2] variable */);
  TRACE_POP
}
/*
equation index: 4761
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[2].r[2] = actuators.fixedFrame.z_label.r_abs[2] + actuators.fixedFrame.z_label.R_lines[2,2] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4761};
  data->localData[0]->realVars[460] /* actuators.fixedFrame.z_label.cylinders[2].r[2] variable */ = data->localData[0]->realVars[497] /* actuators.fixedFrame.z_label.r_abs[2] variable */ + (data->localData[0]->realVars[427] /* actuators.fixedFrame.z_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4762
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[3].r[2] = actuators.fixedFrame.z_label.r_abs[2] + actuators.fixedFrame.z_label.R_lines[2,2] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4762};
  data->localData[0]->realVars[463] /* actuators.fixedFrame.z_label.cylinders[3].r[2] variable */ = data->localData[0]->realVars[497] /* actuators.fixedFrame.z_label.r_abs[2] variable */ + (data->localData[0]->realVars[427] /* actuators.fixedFrame.z_label.R_lines[2,2] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4763
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.R.T[3,1] = actuators.revolute.R_rel.T[3,1] * hull.frame_a.R.T[1,1] + actuators.revolute.R_rel.T[3,2] * hull.frame_a.R.T[2,1] + actuators.revolute.R_rel.T[3,3] * hull.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4763};
  data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */ = (data->localData[0]->realVars[578] /* actuators.revolute.R_rel.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) + (data->localData[0]->realVars[579] /* actuators.revolute.R_rel.T[3,2] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) + (data->localData[0]->realVars[580] /* actuators.revolute.R_rel.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 4764
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.R_lines[1,1] = actuators.fixedFrame.x_label.R_rel[1,1] * actuators.body_rolling.frame_a.R.T[1,1] + actuators.fixedFrame.x_label.R_rel[1,2] * actuators.body_rolling.frame_a.R.T[2,1] + actuators.fixedFrame.x_label.R_rel[1,3] * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4764};
  data->localData[0]->realVars[247] /* actuators.fixedFrame.x_label.R_lines[1,1] variable */ = (data->localData[0]->realVars[256] /* actuators.fixedFrame.x_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[257] /* actuators.fixedFrame.x_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[258] /* actuators.fixedFrame.x_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4765
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.R_lines[2,1] = actuators.fixedFrame.x_label.R_rel[2,1] * actuators.body_rolling.frame_a.R.T[1,1] + actuators.fixedFrame.x_label.R_rel[2,2] * actuators.body_rolling.frame_a.R.T[2,1] + actuators.fixedFrame.x_label.R_rel[2,3] * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4765};
  data->localData[0]->realVars[250] /* actuators.fixedFrame.x_label.R_lines[2,1] variable */ = (data->localData[0]->realVars[259] /* actuators.fixedFrame.x_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[260] /* actuators.fixedFrame.x_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[261] /* actuators.fixedFrame.x_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4766
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.R_lines[3,1] = actuators.fixedFrame.x_label.R_rel[3,1] * actuators.body_rolling.frame_a.R.T[1,1] + actuators.fixedFrame.x_label.R_rel[3,2] * actuators.body_rolling.frame_a.R.T[2,1] + actuators.fixedFrame.x_label.R_rel[3,3] * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4766};
  data->localData[0]->realVars[253] /* actuators.fixedFrame.x_label.R_lines[3,1] variable */ = (data->localData[0]->realVars[262] /* actuators.fixedFrame.x_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[263] /* actuators.fixedFrame.x_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[264] /* actuators.fixedFrame.x_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4767
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.R_lines[1,1] = actuators.fixedFrame.y_label.R_rel[1,1] * actuators.body_rolling.frame_a.R.T[1,1] + actuators.fixedFrame.y_label.R_rel[1,2] * actuators.body_rolling.frame_a.R.T[2,1] + actuators.fixedFrame.y_label.R_rel[1,3] * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4767};
  data->localData[0]->realVars[334] /* actuators.fixedFrame.y_label.R_lines[1,1] variable */ = (data->localData[0]->realVars[343] /* actuators.fixedFrame.y_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[344] /* actuators.fixedFrame.y_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[345] /* actuators.fixedFrame.y_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4768
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.R_lines[2,1] = actuators.fixedFrame.y_label.R_rel[2,1] * actuators.body_rolling.frame_a.R.T[1,1] + actuators.fixedFrame.y_label.R_rel[2,2] * actuators.body_rolling.frame_a.R.T[2,1] + actuators.fixedFrame.y_label.R_rel[2,3] * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4768};
  data->localData[0]->realVars[337] /* actuators.fixedFrame.y_label.R_lines[2,1] variable */ = (data->localData[0]->realVars[346] /* actuators.fixedFrame.y_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[347] /* actuators.fixedFrame.y_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[348] /* actuators.fixedFrame.y_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4769
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.R_lines[3,1] = actuators.fixedFrame.y_label.R_rel[3,1] * actuators.body_rolling.frame_a.R.T[1,1] + actuators.fixedFrame.y_label.R_rel[3,2] * actuators.body_rolling.frame_a.R.T[2,1] + actuators.fixedFrame.y_label.R_rel[3,3] * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4769};
  data->localData[0]->realVars[340] /* actuators.fixedFrame.y_label.R_lines[3,1] variable */ = (data->localData[0]->realVars[349] /* actuators.fixedFrame.y_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[350] /* actuators.fixedFrame.y_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[351] /* actuators.fixedFrame.y_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4770
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.R_lines[1,1] = actuators.fixedFrame.z_label.R_rel[1,1] * actuators.body_rolling.frame_a.R.T[1,1] + actuators.fixedFrame.z_label.R_rel[1,2] * actuators.body_rolling.frame_a.R.T[2,1] + actuators.fixedFrame.z_label.R_rel[1,3] * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4770};
  data->localData[0]->realVars[423] /* actuators.fixedFrame.z_label.R_lines[1,1] variable */ = (data->localData[0]->realVars[432] /* actuators.fixedFrame.z_label.R_rel[1,1] variable */) * (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[433] /* actuators.fixedFrame.z_label.R_rel[1,2] variable */) * (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[434] /* actuators.fixedFrame.z_label.R_rel[1,3] variable */) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4771
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.R_lines[2,1] = actuators.fixedFrame.z_label.R_rel[2,1] * actuators.body_rolling.frame_a.R.T[1,1] + actuators.fixedFrame.z_label.R_rel[2,2] * actuators.body_rolling.frame_a.R.T[2,1] + actuators.fixedFrame.z_label.R_rel[2,3] * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4771};
  data->localData[0]->realVars[426] /* actuators.fixedFrame.z_label.R_lines[2,1] variable */ = (data->localData[0]->realVars[435] /* actuators.fixedFrame.z_label.R_rel[2,1] variable */) * (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[436] /* actuators.fixedFrame.z_label.R_rel[2,2] variable */) * (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[437] /* actuators.fixedFrame.z_label.R_rel[2,3] variable */) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4772
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.R_lines[3,1] = actuators.fixedFrame.z_label.R_rel[3,1] * actuators.body_rolling.frame_a.R.T[1,1] + actuators.fixedFrame.z_label.R_rel[3,2] * actuators.body_rolling.frame_a.R.T[2,1] + actuators.fixedFrame.z_label.R_rel[3,3] * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4772};
  data->localData[0]->realVars[429] /* actuators.fixedFrame.z_label.R_lines[3,1] variable */ = (data->localData[0]->realVars[438] /* actuators.fixedFrame.z_label.R_rel[3,1] variable */) * (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) + (data->localData[0]->realVars[439] /* actuators.fixedFrame.z_label.R_rel[3,2] variable */) * (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) + (data->localData[0]->realVars[440] /* actuators.fixedFrame.z_label.R_rel[3,3] variable */) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4773
type: SIMPLE_ASSIGN
$DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] = addedMassForcesTorques.absoluteSensor.der1[1].u + actuators.body_rolling.frame_a.R.T[1,1] * actuators.prismatic.v + actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.w_a[3] * actuators.position_slidingMass.s + actuators.body_rolling.frame_a.R.T[3,1] * (-actuators.body_rolling.w_a[2]) * actuators.position_slidingMass.s
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4773};
  data->localData[0]->realVars[61] /* der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[1]) DUMMY_DER */ = data->localData[0]->realVars[7] /* addedMassForcesTorques.absoluteSensor.der1[1].u STATE(1,hull.a_0[1]) */ + (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[5] /* actuators.prismatic.v STATE(1,actuators.position_slidingMass.a) */) + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * ((data->localData[0]->realVars[207] /* actuators.body_rolling.w_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */)) + (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * (((-data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) * (data->localData[0]->realVars[4] /* actuators.position_slidingMass.s STATE(1,actuators.prismatic.v) */));
  TRACE_POP
}
/*
equation index: 4774
type: SIMPLE_ASSIGN
actuators.body_rolling.v_0[1] = $DER.actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] + 0.014 * actuators.body_rolling.frame_a.R.T[1,1] * actuators.body_rolling.w_a[2] + (-0.014) * actuators.body_rolling.frame_a.R.T[2,1] * actuators.body_rolling.w_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4774};
  data->localData[0]->realVars[202] /* actuators.body_rolling.v_0[1] DUMMY_STATE */ = data->localData[0]->realVars[61] /* der(actuators.fixedTranslation_pendulumArm.frame_a.r_0[1]) DUMMY_DER */ + (0.014) * ((data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[206] /* actuators.body_rolling.w_a[2] DUMMY_STATE */)) + (-0.014) * ((data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (data->localData[0]->realVars[205] /* actuators.body_rolling.w_a[1] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 4775
type: SIMPLE_ASSIGN
$DER.actuators.body_rolling.frame_a.r_0[1] = actuators.body_rolling.v_0[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4775};
  data->localData[0]->realVars[49] /* der(actuators.body_rolling.frame_a.r_0[1]) DUMMY_DER */ = data->localData[0]->realVars[202] /* actuators.body_rolling.v_0[1] DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 4776
type: SIMPLE_ASSIGN
actuators.body_rolling.frame_a.r_0[1] = actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] + 0.014 * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4776};
  data->localData[0]->realVars[187] /* actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ = data->localData[0]->realVars[520] /* actuators.fixedTranslation_pendulumArm.frame_a.r_0[1] DUMMY_STATE */ + (0.014) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4777
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_arrowHead.r[1] = actuators.body_rolling.frame_a.r_0[1] + actuators.body_rolling.frame_a.R.T[1,1] * actuators.fixedFrame.lineLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4777};
  data->localData[0]->realVars[228] /* actuators.fixedFrame.x_arrowHead.r[1] variable */ = data->localData[0]->realVars[187] /* actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */) * (data->localData[0]->realVars[220] /* actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4778
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.r_abs[1] = actuators.body_rolling.frame_a.r_0[1] + 0.525 * actuators.body_rolling.frame_a.R.T[1,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4778};
  data->localData[0]->realVars[303] /* actuators.fixedFrame.x_label.r_abs[1] variable */ = data->localData[0]->realVars[187] /* actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[178] /* actuators.body_rolling.frame_a.R.T[1,1] variable */);
  TRACE_POP
}
/*
equation index: 4779
type: SIMPLE_ASSIGN
actuators.fixedFrame.x_label.cylinders[2].r[1] = actuators.fixedFrame.x_label.r_abs[1] + actuators.fixedFrame.x_label.R_lines[2,1] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4779};
  data->localData[0]->realVars[278] /* actuators.fixedFrame.x_label.cylinders[2].r[1] variable */ = data->localData[0]->realVars[303] /* actuators.fixedFrame.x_label.r_abs[1] variable */ + (data->localData[0]->realVars[250] /* actuators.fixedFrame.x_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4780
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_arrowHead.r[1] = actuators.body_rolling.frame_a.r_0[1] + actuators.body_rolling.frame_a.R.T[2,1] * actuators.fixedFrame.lineLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4780};
  data->localData[0]->realVars[315] /* actuators.fixedFrame.y_arrowHead.r[1] variable */ = data->localData[0]->realVars[187] /* actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */) * (data->localData[0]->realVars[220] /* actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4781
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.r_abs[1] = actuators.body_rolling.frame_a.r_0[1] + 0.525 * actuators.body_rolling.frame_a.R.T[2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4781};
  data->localData[0]->realVars[392] /* actuators.fixedFrame.y_label.r_abs[1] variable */ = data->localData[0]->realVars[187] /* actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[181] /* actuators.body_rolling.frame_a.R.T[2,1] variable */);
  TRACE_POP
}
/*
equation index: 4782
type: SIMPLE_ASSIGN
actuators.fixedFrame.y_label.cylinders[2].r[1] = actuators.fixedFrame.y_label.r_abs[1] + actuators.fixedFrame.y_label.R_lines[2,1] * actuators.fixedFrame.y_label.lines[2,1,2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4782};
  data->localData[0]->realVars[365] /* actuators.fixedFrame.y_label.cylinders[2].r[1] variable */ = data->localData[0]->realVars[392] /* actuators.fixedFrame.y_label.r_abs[1] variable */ + (data->localData[0]->realVars[337] /* actuators.fixedFrame.y_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[383] /* actuators.fixedFrame.y_label.lines[2,1,2] variable */);
  TRACE_POP
}
/*
equation index: 4783
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_arrowHead.r[1] = actuators.body_rolling.frame_a.r_0[1] + actuators.body_rolling.frame_a.R.T[3,1] * actuators.fixedFrame.lineLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4783};
  data->localData[0]->realVars[404] /* actuators.fixedFrame.z_arrowHead.r[1] variable */ = data->localData[0]->realVars[187] /* actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */) * (data->localData[0]->realVars[220] /* actuators.fixedFrame.lineLength variable */);
  TRACE_POP
}
/*
equation index: 4784
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.r_abs[1] = actuators.body_rolling.frame_a.r_0[1] + 0.525 * actuators.body_rolling.frame_a.R.T[3,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4784};
  data->localData[0]->realVars[496] /* actuators.fixedFrame.z_label.r_abs[1] variable */ = data->localData[0]->realVars[187] /* actuators.body_rolling.frame_a.r_0[1] DUMMY_STATE */ + (0.525) * (data->localData[0]->realVars[184] /* actuators.body_rolling.frame_a.R.T[3,1] variable */);
  TRACE_POP
}
/*
equation index: 4785
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[2].r[1] = actuators.fixedFrame.z_label.r_abs[1] + actuators.fixedFrame.z_label.R_lines[2,1] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4785};
  data->localData[0]->realVars[459] /* actuators.fixedFrame.z_label.cylinders[2].r[1] variable */ = data->localData[0]->realVars[496] /* actuators.fixedFrame.z_label.r_abs[1] variable */ + (data->localData[0]->realVars[426] /* actuators.fixedFrame.z_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4786
type: SIMPLE_ASSIGN
actuators.fixedFrame.z_label.cylinders[3].r[1] = actuators.fixedFrame.z_label.r_abs[1] + actuators.fixedFrame.z_label.R_lines[2,1] * actuators.fixedFrame.z_label.lines[3,2,1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4786};
  data->localData[0]->realVars[462] /* actuators.fixedFrame.z_label.cylinders[3].r[1] variable */ = data->localData[0]->realVars[496] /* actuators.fixedFrame.z_label.r_abs[1] variable */ + (data->localData[0]->realVars[426] /* actuators.fixedFrame.z_label.R_lines[2,1] variable */) * (data->localData[0]->realVars[488] /* actuators.fixedFrame.z_label.lines[3,2,1] variable */);
  TRACE_POP
}
/*
equation index: 4915
type: LINEAR

<var>hull.a_0[1]</var>
<var>hull.a_0[3]</var>
<var>hull.a_0[2]</var>
<var>hull.z_a[2]</var>
<var>hull.z_a[3]</var>
<var>hull.z_a[1]</var>
<var>actuators.revolute.frame_a.t[1]</var>
<var>hull.frame_a.t[1]</var>
<var>addedMassForcesTorques.absoluteSensor.z[1]</var>
<var>actuators.bodyVariableMass.frame_a.f[1]</var>
<var>hull.frame_a.f[1]</var>
<var>addedMassForcesTorques.force.force[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4915};
  /* Linear equation system */
  int retValue;
  double aux_x[12] = { data->localData[1]->realVars[1321] /* hull.a_0[1] variable */,data->localData[1]->realVars[1323] /* hull.a_0[3] variable */,data->localData[1]->realVars[1322] /* hull.a_0[2] variable */,data->localData[1]->realVars[1352] /* hull.z_a[2] variable */,data->localData[1]->realVars[1353] /* hull.z_a[3] variable */,data->localData[1]->realVars[1351] /* hull.z_a[1] variable */,data->localData[1]->realVars[598] /* actuators.revolute.frame_a.t[1] variable */,data->localData[1]->realVars[1336] /* hull.frame_a.t[1] variable */,data->localData[1]->realVars[1093] /* addedMassForcesTorques.absoluteSensor.z[1] variable */,data->localData[1]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */,data->localData[1]->realVars[1333] /* hull.frame_a.f[1] variable */,data->localData[1]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 4915 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,4915};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 4915 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1321] /* hull.a_0[1] variable */ = aux_x[0];
  data->localData[0]->realVars[1323] /* hull.a_0[3] variable */ = aux_x[1];
  data->localData[0]->realVars[1322] /* hull.a_0[2] variable */ = aux_x[2];
  data->localData[0]->realVars[1352] /* hull.z_a[2] variable */ = aux_x[3];
  data->localData[0]->realVars[1353] /* hull.z_a[3] variable */ = aux_x[4];
  data->localData[0]->realVars[1351] /* hull.z_a[1] variable */ = aux_x[5];
  data->localData[0]->realVars[598] /* actuators.revolute.frame_a.t[1] variable */ = aux_x[6];
  data->localData[0]->realVars[1336] /* hull.frame_a.t[1] variable */ = aux_x[7];
  data->localData[0]->realVars[1093] /* addedMassForcesTorques.absoluteSensor.z[1] variable */ = aux_x[8];
  data->localData[0]->realVars[146] /* actuators.bodyVariableMass.frame_a.f[1] variable */ = aux_x[9];
  data->localData[0]->realVars[1333] /* hull.frame_a.f[1] variable */ = aux_x[10];
  data->localData[0]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */ = aux_x[11];

  TRACE_POP
}
/*
equation index: 4916
type: SIMPLE_ASSIGN
$DER.actuators.body_rolling.w_a[1] = actuators.body_rolling.z_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4916};
  data->localData[0]->realVars[55] /* der(actuators.body_rolling.w_a[1]) DUMMY_DER */ = data->localData[0]->realVars[208] /* actuators.body_rolling.z_a[1] variable */;
  TRACE_POP
}
/*
equation index: 4917
type: SIMPLE_ASSIGN
$DER.hull.w_a[1] = hull.z_a[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4917};
  data->localData[0]->realVars[26] /* der(hull.w_a[1]) STATE_DER */ = data->localData[0]->realVars[1351] /* hull.z_a[1] variable */;
  TRACE_POP
}
/*
equation index: 4918
type: SIMPLE_ASSIGN
$DER.addedMassForcesTorques.absoluteSensor.der1[1].u = hull.a_0[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4918};
  data->localData[0]->realVars[23] /* der(addedMassForcesTorques.absoluteSensor.der1[1].u) STATE_DER */ = data->localData[0]->realVars[1321] /* hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 4919
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[1] = hull.a_0[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4919};
  data->localData[0]->realVars[32] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[1])) DUMMY_DER */ = data->localData[0]->realVars[1321] /* hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 4920
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.a_0[1] = hull.a_0[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4920};
  data->localData[0]->realVars[143] /* actuators.bodyVariableMass.a_0[1] variable */ = data->localData[0]->realVars[1321] /* hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 4921
type: SIMPLE_ASSIGN
$DER.actuators.bodyVariableMass.v_0[1] = hull.a_0[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4921};
  data->localData[0]->realVars[45] /* der(actuators.bodyVariableMass.v_0[1]) DUMMY_DER */ = data->localData[0]->realVars[1321] /* hull.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 4922
type: SIMPLE_ASSIGN
$DER.hull.w_a[3] = hull.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4922};
  data->localData[0]->realVars[28] /* der(hull.w_a[3]) STATE_DER */ = data->localData[0]->realVars[1353] /* hull.z_a[3] variable */;
  TRACE_POP
}
/*
equation index: 4923
type: SIMPLE_ASSIGN
$DER.addedMassForcesTorques.absoluteSensor.der2[1].u = addedMassForcesTorques.absoluteSensor.der2[1].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4923};
  data->localData[0]->realVars[76] /* der(addedMassForcesTorques.absoluteSensor.der2[1].u) DUMMY_DER */ = data->localData[0]->realVars[886] /* addedMassForcesTorques.absoluteSensor.der2[1].y variable */;
  TRACE_POP
}
/*
equation index: 4924
type: SIMPLE_ASSIGN
$DER.addedMassForcesTorques.absoluteSensor.der2[2].u = addedMassForcesTorques.absoluteSensor.der2[2].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4924};
  data->localData[0]->realVars[77] /* der(addedMassForcesTorques.absoluteSensor.der2[2].u) DUMMY_DER */ = data->localData[0]->realVars[887] /* addedMassForcesTorques.absoluteSensor.der2[2].y variable */;
  TRACE_POP
}
/*
equation index: 4925
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.t_in_m[1] = (-addedMassForcesTorques.torque.torque[1]) / addedMassForcesTorques.torque.Nm_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4925};
  data->localData[0]->realVars[1223] /* addedMassForcesTorques.torque.t_in_m[1] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1226] /* addedMassForcesTorques.torque.torque[1] variable */),data->simulationInfo->realParameter[335] /* addedMassForcesTorques.torque.Nm_to_m PARAM */,"addedMassForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4926
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t[1] = -addedMassForcesTorques.torque.torque[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4926};
  data->localData[0]->realVars[1171] /* addedMassForcesTorques.frame_b.t[1] variable */ = (-data->localData[0]->realVars[1226] /* addedMassForcesTorques.torque.torque[1] variable */);
  TRACE_POP
}
/*
equation index: 4927
type: SIMPLE_ASSIGN
$DER.addedMassForcesTorques.absoluteSensor.der2[3].u = addedMassForcesTorques.absoluteSensor.der2[3].y
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4927};
  data->localData[0]->realVars[78] /* der(addedMassForcesTorques.absoluteSensor.der2[3].u) DUMMY_DER */ = data->localData[0]->realVars[888] /* addedMassForcesTorques.absoluteSensor.der2[3].y variable */;
  TRACE_POP
}
/*
equation index: 4928
type: SIMPLE_ASSIGN
$DER.hull.w_a[2] = hull.z_a[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4928};
  data->localData[0]->realVars[27] /* der(hull.w_a[2]) STATE_DER */ = data->localData[0]->realVars[1352] /* hull.z_a[2] variable */;
  TRACE_POP
}
/*
equation index: 4929
type: SIMPLE_ASSIGN
$DER.addedMassForcesTorques.absoluteSensor.der1[3].u = hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4929};
  data->localData[0]->realVars[25] /* der(addedMassForcesTorques.absoluteSensor.der1[3].u) STATE_DER */ = data->localData[0]->realVars[1323] /* hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 4930
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.a_0[3] = hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4930};
  data->localData[0]->realVars[145] /* actuators.bodyVariableMass.a_0[3] variable */ = data->localData[0]->realVars[1323] /* hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 4931
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[3] = hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4931};
  data->localData[0]->realVars[34] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[3])) DUMMY_DER */ = data->localData[0]->realVars[1323] /* hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 4932
type: SIMPLE_ASSIGN
$DER.actuators.bodyVariableMass.v_0[3] = hull.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4932};
  data->localData[0]->realVars[47] /* der(actuators.bodyVariableMass.v_0[3]) DUMMY_DER */ = data->localData[0]->realVars[1323] /* hull.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 4933
type: SIMPLE_ASSIGN
$DER.actuators.body_rolling.w_a[2] = actuators.body_rolling.z_a[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4933};
  data->localData[0]->realVars[56] /* der(actuators.body_rolling.w_a[2]) DUMMY_DER */ = data->localData[0]->realVars[209] /* actuators.body_rolling.z_a[2] variable */;
  TRACE_POP
}
/*
equation index: 4934
type: SIMPLE_ASSIGN
$DER.actuators.body_rolling.v_0[1] = actuators.body_rolling.a_0[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4934};
  data->localData[0]->realVars[52] /* der(actuators.body_rolling.v_0[1]) DUMMY_DER */ = data->localData[0]->realVars[175] /* actuators.body_rolling.a_0[1] variable */;
  TRACE_POP
}
/*
equation index: 4935
type: SIMPLE_ASSIGN
$DER.actuators.body_rolling.v_0[3] = actuators.body_rolling.a_0[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4935};
  data->localData[0]->realVars[54] /* der(actuators.body_rolling.v_0[3]) DUMMY_DER */ = data->localData[0]->realVars[177] /* actuators.body_rolling.a_0[3] variable */;
  TRACE_POP
}
/*
equation index: 4936
type: SIMPLE_ASSIGN
$DER.actuators.body_rolling.v_0[2] = actuators.body_rolling.a_0[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4936};
  data->localData[0]->realVars[53] /* der(actuators.body_rolling.v_0[2]) DUMMY_DER */ = data->localData[0]->realVars[176] /* actuators.body_rolling.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 4937
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.f_in_m[2] = (-addedMassForcesTorques.force.force[2]) / addedMassForcesTorques.force.N_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4937};
  data->localData[0]->realVars[1142] /* addedMassForcesTorques.force.f_in_m[2] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1145] /* addedMassForcesTorques.force.force[2] variable */),data->simulationInfo->realParameter[326] /* addedMassForcesTorques.force.N_to_m PARAM */,"addedMassForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4938
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f[2] = -addedMassForcesTorques.force.force[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4938};
  data->localData[0]->realVars[1169] /* addedMassForcesTorques.frame_b.f[2] variable */ = (-data->localData[0]->realVars[1145] /* addedMassForcesTorques.force.force[2] variable */);
  TRACE_POP
}
/*
equation index: 4939
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.t_in_m[3] = (-addedMassForcesTorques.torque.torque[3]) / addedMassForcesTorques.torque.Nm_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4939};
  data->localData[0]->realVars[1225] /* addedMassForcesTorques.torque.t_in_m[3] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1228] /* addedMassForcesTorques.torque.torque[3] variable */),data->simulationInfo->realParameter[335] /* addedMassForcesTorques.torque.Nm_to_m PARAM */,"addedMassForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4940
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t[3] = -addedMassForcesTorques.torque.torque[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4940};
  data->localData[0]->realVars[1173] /* addedMassForcesTorques.frame_b.t[3] variable */ = (-data->localData[0]->realVars[1228] /* addedMassForcesTorques.torque.torque[3] variable */);
  TRACE_POP
}
/*
equation index: 4941
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.f_in_m[3] = (-addedMassForcesTorques.force.force[3]) / addedMassForcesTorques.force.N_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4941};
  data->localData[0]->realVars[1143] /* addedMassForcesTorques.force.f_in_m[3] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1146] /* addedMassForcesTorques.force.force[3] variable */),data->simulationInfo->realParameter[326] /* addedMassForcesTorques.force.N_to_m PARAM */,"addedMassForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4942
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f[3] = -addedMassForcesTorques.force.force[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4942};
  data->localData[0]->realVars[1170] /* addedMassForcesTorques.frame_b.f[3] variable */ = (-data->localData[0]->realVars[1146] /* addedMassForcesTorques.force.force[3] variable */);
  TRACE_POP
}
/*
equation index: 4943
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.t_in_m[2] = (-addedMassForcesTorques.torque.torque[2]) / addedMassForcesTorques.torque.Nm_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4943};
  data->localData[0]->realVars[1224] /* addedMassForcesTorques.torque.t_in_m[2] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1227] /* addedMassForcesTorques.torque.torque[2] variable */),data->simulationInfo->realParameter[335] /* addedMassForcesTorques.torque.Nm_to_m PARAM */,"addedMassForcesTorques.torque.Nm_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4944
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.length = sqrt(addedMassForcesTorques.torque.t_in_m[1] ^ 2.0 + addedMassForcesTorques.torque.t_in_m[2] ^ 2.0 + addedMassForcesTorques.torque.t_in_m[3] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4944};
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  tmp48 = data->localData[0]->realVars[1223] /* addedMassForcesTorques.torque.t_in_m[1] variable */;
  tmp49 = data->localData[0]->realVars[1224] /* addedMassForcesTorques.torque.t_in_m[2] variable */;
  tmp50 = data->localData[0]->realVars[1225] /* addedMassForcesTorques.torque.t_in_m[3] variable */;
  data->localData[0]->realVars[1207] /* addedMassForcesTorques.torque.arrow.length variable */ = sqrt((tmp48 * tmp48) + (tmp49 * tmp49) + (tmp50 * tmp50));
  TRACE_POP
}
/*
equation index: 4945
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.e_x[1] = if noEvent(addedMassForcesTorques.torque.arrow.length < 1e-10) then 1.0 else (-addedMassForcesTorques.torque.t_in_m[1]) / addedMassForcesTorques.torque.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4945};
  modelica_boolean tmp51;
  tmp51 = Less(data->localData[0]->realVars[1207] /* addedMassForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1202] /* addedMassForcesTorques.torque.arrow.e_x[1] variable */ = (tmp51?1.0:DIVISION_SIM((-data->localData[0]->realVars[1223] /* addedMassForcesTorques.torque.t_in_m[1] variable */),data->localData[0]->realVars[1207] /* addedMassForcesTorques.torque.arrow.length variable */,"addedMassForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4946
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.e_x[3] = if noEvent(addedMassForcesTorques.torque.arrow.length < 1e-10) then 0.0 else (-addedMassForcesTorques.torque.t_in_m[3]) / addedMassForcesTorques.torque.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4946};
  modelica_boolean tmp52;
  tmp52 = Less(data->localData[0]->realVars[1207] /* addedMassForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1204] /* addedMassForcesTorques.torque.arrow.e_x[3] variable */ = (tmp52?0.0:DIVISION_SIM((-data->localData[0]->realVars[1225] /* addedMassForcesTorques.torque.t_in_m[3] variable */),data->localData[0]->realVars[1207] /* addedMassForcesTorques.torque.arrow.length variable */,"addedMassForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4947
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.arrowLength = max(0.0, addedMassForcesTorques.torque.arrow.length + (-6.0) * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4947};
  data->localData[0]->realVars[1197] /* addedMassForcesTorques.torque.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[1207] /* addedMassForcesTorques.torque.arrow.length variable */ + (-6.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4948
type: SIMPLE_ASSIGN
$cse6 = min(addedMassForcesTorques.torque.arrow.length, 4.0 * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4948};
  data->localData[0]->realVars[90] /* $cse6 variable */ = fmin(data->localData[0]->realVars[1207] /* addedMassForcesTorques.torque.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4949
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.headLength = max(0.0, $cse6)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4949};
  data->localData[0]->realVars[1205] /* addedMassForcesTorques.torque.arrow.headLength variable */ = fmax(0.0,data->localData[0]->realVars[90] /* $cse6 variable */);
  TRACE_POP
}
/*
equation index: 4950
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.e_x[2] = if noEvent(addedMassForcesTorques.torque.arrow.length < 1e-10) then 0.0 else (-addedMassForcesTorques.torque.t_in_m[2]) / addedMassForcesTorques.torque.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4950};
  modelica_boolean tmp53;
  tmp53 = Less(data->localData[0]->realVars[1207] /* addedMassForcesTorques.torque.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1203] /* addedMassForcesTorques.torque.arrow.e_x[2] variable */ = (tmp53?0.0:DIVISION_SIM((-data->localData[0]->realVars[1224] /* addedMassForcesTorques.torque.t_in_m[2] variable */),data->localData[0]->realVars[1207] /* addedMassForcesTorques.torque.arrow.length variable */,"addedMassForcesTorques.torque.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4951
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.rxvisobj[1] = hull.frame_a.R.T[1,1] * addedMassForcesTorques.torque.arrow.e_x[1] + hull.frame_a.R.T[2,1] * addedMassForcesTorques.torque.arrow.e_x[2] + hull.frame_a.R.T[3,1] * addedMassForcesTorques.torque.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4951};
  data->localData[0]->realVars[1211] /* addedMassForcesTorques.torque.arrow.rxvisobj[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1202] /* addedMassForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1203] /* addedMassForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1204] /* addedMassForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4952
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.rxvisobj[2] = hull.frame_a.R.T[1,2] * addedMassForcesTorques.torque.arrow.e_x[1] + hull.frame_a.R.T[2,2] * addedMassForcesTorques.torque.arrow.e_x[2] + hull.frame_a.R.T[3,2] * addedMassForcesTorques.torque.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4952};
  data->localData[0]->realVars[1212] /* addedMassForcesTorques.torque.arrow.rxvisobj[2] variable */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1202] /* addedMassForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1203] /* addedMassForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1204] /* addedMassForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4953
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.rxvisobj[3] = hull.frame_a.R.T[1,3] * addedMassForcesTorques.torque.arrow.e_x[1] + hull.frame_a.R.T[2,3] * addedMassForcesTorques.torque.arrow.e_x[2] + hull.frame_a.R.T[3,3] * addedMassForcesTorques.torque.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4953};
  data->localData[0]->realVars[1213] /* addedMassForcesTorques.torque.arrow.rxvisobj[3] variable */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1202] /* addedMassForcesTorques.torque.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1203] /* addedMassForcesTorques.torque.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1204] /* addedMassForcesTorques.torque.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4954
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.rvisobj[1] = hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + hull.frame_a.R.T[1,1] * addedMassForcesTorques.torque.t_in_m[1] + hull.frame_a.R.T[2,1] * addedMassForcesTorques.torque.t_in_m[2] + hull.frame_a.R.T[3,1] * addedMassForcesTorques.torque.t_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4954};
  data->localData[0]->realVars[1208] /* addedMassForcesTorques.torque.arrow.rvisobj[1] variable */ = data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1223] /* addedMassForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1224] /* addedMassForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1225] /* addedMassForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4955
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.arrowHead1.r[1] = addedMassForcesTorques.torque.arrow.rvisobj[1] + addedMassForcesTorques.torque.arrow.rxvisobj[1] * addedMassForcesTorques.torque.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4955};
  data->localData[0]->realVars[1175] /* addedMassForcesTorques.torque.arrow.arrowHead1.r[1] variable */ = data->localData[0]->realVars[1208] /* addedMassForcesTorques.torque.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1211] /* addedMassForcesTorques.torque.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1197] /* addedMassForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4956
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.arrowHead2.r[1] = addedMassForcesTorques.torque.arrow.rvisobj[1] + addedMassForcesTorques.torque.arrow.rxvisobj[1] * (addedMassForcesTorques.torque.arrow.arrowLength + 0.5 * addedMassForcesTorques.torque.arrow.headLength)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4956};
  data->localData[0]->realVars[1188] /* addedMassForcesTorques.torque.arrow.arrowHead2.r[1] variable */ = data->localData[0]->realVars[1208] /* addedMassForcesTorques.torque.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1211] /* addedMassForcesTorques.torque.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1197] /* addedMassForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1205] /* addedMassForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4957
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.rvisobj[2] = hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + hull.frame_a.R.T[1,2] * addedMassForcesTorques.torque.t_in_m[1] + hull.frame_a.R.T[2,2] * addedMassForcesTorques.torque.t_in_m[2] + hull.frame_a.R.T[3,2] * addedMassForcesTorques.torque.t_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4957};
  data->localData[0]->realVars[1209] /* addedMassForcesTorques.torque.arrow.rvisobj[2] variable */ = data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1223] /* addedMassForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1224] /* addedMassForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1225] /* addedMassForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4958
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.arrowHead1.r[2] = addedMassForcesTorques.torque.arrow.rvisobj[2] + addedMassForcesTorques.torque.arrow.rxvisobj[2] * addedMassForcesTorques.torque.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4958};
  data->localData[0]->realVars[1176] /* addedMassForcesTorques.torque.arrow.arrowHead1.r[2] variable */ = data->localData[0]->realVars[1209] /* addedMassForcesTorques.torque.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1212] /* addedMassForcesTorques.torque.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1197] /* addedMassForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4959
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.arrowHead2.r[2] = addedMassForcesTorques.torque.arrow.rvisobj[2] + addedMassForcesTorques.torque.arrow.rxvisobj[2] * (addedMassForcesTorques.torque.arrow.arrowLength + 0.5 * addedMassForcesTorques.torque.arrow.headLength)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4959};
  data->localData[0]->realVars[1189] /* addedMassForcesTorques.torque.arrow.arrowHead2.r[2] variable */ = data->localData[0]->realVars[1209] /* addedMassForcesTorques.torque.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1212] /* addedMassForcesTorques.torque.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1197] /* addedMassForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1205] /* addedMassForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4960
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.rvisobj[3] = hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + hull.frame_a.R.T[1,3] * addedMassForcesTorques.torque.t_in_m[1] + hull.frame_a.R.T[2,3] * addedMassForcesTorques.torque.t_in_m[2] + hull.frame_a.R.T[3,3] * addedMassForcesTorques.torque.t_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4960};
  data->localData[0]->realVars[1210] /* addedMassForcesTorques.torque.arrow.rvisobj[3] variable */ = data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1223] /* addedMassForcesTorques.torque.t_in_m[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1224] /* addedMassForcesTorques.torque.t_in_m[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1225] /* addedMassForcesTorques.torque.t_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4961
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.arrowHead1.r[3] = addedMassForcesTorques.torque.arrow.rvisobj[3] + addedMassForcesTorques.torque.arrow.rxvisobj[3] * addedMassForcesTorques.torque.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4961};
  data->localData[0]->realVars[1177] /* addedMassForcesTorques.torque.arrow.arrowHead1.r[3] variable */ = data->localData[0]->realVars[1210] /* addedMassForcesTorques.torque.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1213] /* addedMassForcesTorques.torque.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1197] /* addedMassForcesTorques.torque.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4962
type: SIMPLE_ASSIGN
addedMassForcesTorques.torque.arrow.arrowHead2.r[3] = addedMassForcesTorques.torque.arrow.rvisobj[3] + addedMassForcesTorques.torque.arrow.rxvisobj[3] * (addedMassForcesTorques.torque.arrow.arrowLength + 0.5 * addedMassForcesTorques.torque.arrow.headLength)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4962};
  data->localData[0]->realVars[1190] /* addedMassForcesTorques.torque.arrow.arrowHead2.r[3] variable */ = data->localData[0]->realVars[1210] /* addedMassForcesTorques.torque.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1213] /* addedMassForcesTorques.torque.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1197] /* addedMassForcesTorques.torque.arrow.arrowLength variable */ + (0.5) * (data->localData[0]->realVars[1205] /* addedMassForcesTorques.torque.arrow.headLength variable */));
  TRACE_POP
}
/*
equation index: 4963
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.t[2] = -addedMassForcesTorques.torque.torque[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4963};
  data->localData[0]->realVars[1172] /* addedMassForcesTorques.frame_b.t[2] variable */ = (-data->localData[0]->realVars[1227] /* addedMassForcesTorques.torque.torque[2] variable */);
  TRACE_POP
}
/*
equation index: 4964
type: SIMPLE_ASSIGN
$DER.addedMassForcesTorques.absoluteSensor.der1[2].u = hull.a_0[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4964};
  data->localData[0]->realVars[24] /* der(addedMassForcesTorques.absoluteSensor.der1[2].u) STATE_DER */ = data->localData[0]->realVars[1322] /* hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 4965
type: SIMPLE_ASSIGN
actuators.bodyVariableMass.a_0[2] = hull.a_0[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4965};
  data->localData[0]->realVars[144] /* actuators.bodyVariableMass.a_0[2] variable */ = data->localData[0]->realVars[1322] /* hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 4966
type: SIMPLE_ASSIGN
$DER.$DER.actuators.fixedTranslation_hinge.frame_b.r_0[2] = hull.a_0[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4966};
  data->localData[0]->realVars[33] /* der(der(actuators.fixedTranslation_hinge.frame_b.r_0[2])) DUMMY_DER */ = data->localData[0]->realVars[1322] /* hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 4967
type: SIMPLE_ASSIGN
$DER.actuators.bodyVariableMass.v_0[2] = hull.a_0[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4967};
  data->localData[0]->realVars[46] /* der(actuators.bodyVariableMass.v_0[2]) DUMMY_DER */ = data->localData[0]->realVars[1322] /* hull.a_0[2] variable */;
  TRACE_POP
}
/*
equation index: 4968
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.f_in_m[1] = (-addedMassForcesTorques.force.force[1]) / addedMassForcesTorques.force.N_to_m
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4968};
  data->localData[0]->realVars[1141] /* addedMassForcesTorques.force.f_in_m[1] variable */ = DIVISION_SIM((-data->localData[0]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */),data->simulationInfo->realParameter[326] /* addedMassForcesTorques.force.N_to_m PARAM */,"addedMassForcesTorques.force.N_to_m",equationIndexes);
  TRACE_POP
}
/*
equation index: 4969
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.length = sqrt(addedMassForcesTorques.force.f_in_m[1] ^ 2.0 + addedMassForcesTorques.force.f_in_m[2] ^ 2.0 + addedMassForcesTorques.force.f_in_m[3] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4969};
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  tmp54 = data->localData[0]->realVars[1141] /* addedMassForcesTorques.force.f_in_m[1] variable */;
  tmp55 = data->localData[0]->realVars[1142] /* addedMassForcesTorques.force.f_in_m[2] variable */;
  tmp56 = data->localData[0]->realVars[1143] /* addedMassForcesTorques.force.f_in_m[3] variable */;
  data->localData[0]->realVars[1125] /* addedMassForcesTorques.force.arrow.length variable */ = sqrt((tmp54 * tmp54) + (tmp55 * tmp55) + (tmp56 * tmp56));
  TRACE_POP
}
/*
equation index: 4970
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.e_x[2] = if noEvent(addedMassForcesTorques.force.arrow.length < 1e-10) then 0.0 else (-addedMassForcesTorques.force.f_in_m[2]) / addedMassForcesTorques.force.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4970};
  modelica_boolean tmp57;
  tmp57 = Less(data->localData[0]->realVars[1125] /* addedMassForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1123] /* addedMassForcesTorques.force.arrow.e_x[2] variable */ = (tmp57?0.0:DIVISION_SIM((-data->localData[0]->realVars[1142] /* addedMassForcesTorques.force.f_in_m[2] variable */),data->localData[0]->realVars[1125] /* addedMassForcesTorques.force.arrow.length variable */,"addedMassForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4971
type: SIMPLE_ASSIGN
$cse4 = min(addedMassForcesTorques.force.arrow.length, 4.0 * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4971};
  data->localData[0]->realVars[88] /* $cse4 variable */ = fmin(data->localData[0]->realVars[1125] /* addedMassForcesTorques.force.arrow.length variable */,(4.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4972
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.arrowHead.length = max(0.0, $cse4)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4972};
  data->localData[0]->realVars[1107] /* addedMassForcesTorques.force.arrow.arrowHead.length variable */ = fmax(0.0,data->localData[0]->realVars[88] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 4973
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.arrowLength = max(0.0, addedMassForcesTorques.force.arrow.length + (-4.0) * world.defaultArrowDiameter)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4973};
  data->localData[0]->realVars[1117] /* addedMassForcesTorques.force.arrow.arrowLength variable */ = fmax(0.0,data->localData[0]->realVars[1125] /* addedMassForcesTorques.force.arrow.length variable */ + (-4.0) * (data->simulationInfo->realParameter[492] /* world.defaultArrowDiameter PARAM */));
  TRACE_POP
}
/*
equation index: 4974
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.e_x[3] = if noEvent(addedMassForcesTorques.force.arrow.length < 1e-10) then 0.0 else (-addedMassForcesTorques.force.f_in_m[3]) / addedMassForcesTorques.force.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4974};
  modelica_boolean tmp58;
  tmp58 = Less(data->localData[0]->realVars[1125] /* addedMassForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1124] /* addedMassForcesTorques.force.arrow.e_x[3] variable */ = (tmp58?0.0:DIVISION_SIM((-data->localData[0]->realVars[1143] /* addedMassForcesTorques.force.f_in_m[3] variable */),data->localData[0]->realVars[1125] /* addedMassForcesTorques.force.arrow.length variable */,"addedMassForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4975
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.e_x[1] = if noEvent(addedMassForcesTorques.force.arrow.length < 1e-10) then 1.0 else (-addedMassForcesTorques.force.f_in_m[1]) / addedMassForcesTorques.force.arrow.length
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4975};
  modelica_boolean tmp59;
  tmp59 = Less(data->localData[0]->realVars[1125] /* addedMassForcesTorques.force.arrow.length variable */,1e-10);
  data->localData[0]->realVars[1122] /* addedMassForcesTorques.force.arrow.e_x[1] variable */ = (tmp59?1.0:DIVISION_SIM((-data->localData[0]->realVars[1141] /* addedMassForcesTorques.force.f_in_m[1] variable */),data->localData[0]->realVars[1125] /* addedMassForcesTorques.force.arrow.length variable */,"addedMassForcesTorques.force.arrow.length",equationIndexes));
  TRACE_POP
}
/*
equation index: 4976
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.rxvisobj[1] = hull.frame_a.R.T[1,1] * addedMassForcesTorques.force.arrow.e_x[1] + hull.frame_a.R.T[2,1] * addedMassForcesTorques.force.arrow.e_x[2] + hull.frame_a.R.T[3,1] * addedMassForcesTorques.force.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4976};
  data->localData[0]->realVars[1129] /* addedMassForcesTorques.force.arrow.rxvisobj[1] variable */ = (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1122] /* addedMassForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1123] /* addedMassForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1124] /* addedMassForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4977
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.rxvisobj[2] = hull.frame_a.R.T[1,2] * addedMassForcesTorques.force.arrow.e_x[1] + hull.frame_a.R.T[2,2] * addedMassForcesTorques.force.arrow.e_x[2] + hull.frame_a.R.T[3,2] * addedMassForcesTorques.force.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4977};
  data->localData[0]->realVars[1130] /* addedMassForcesTorques.force.arrow.rxvisobj[2] variable */ = (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1122] /* addedMassForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1123] /* addedMassForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1124] /* addedMassForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4978
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.rxvisobj[3] = hull.frame_a.R.T[1,3] * addedMassForcesTorques.force.arrow.e_x[1] + hull.frame_a.R.T[2,3] * addedMassForcesTorques.force.arrow.e_x[2] + hull.frame_a.R.T[3,3] * addedMassForcesTorques.force.arrow.e_x[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4978};
  data->localData[0]->realVars[1131] /* addedMassForcesTorques.force.arrow.rxvisobj[3] variable */ = (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1122] /* addedMassForcesTorques.force.arrow.e_x[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1123] /* addedMassForcesTorques.force.arrow.e_x[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1124] /* addedMassForcesTorques.force.arrow.e_x[3] variable */);
  TRACE_POP
}
/*
equation index: 4979
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.rvisobj[1] = hydrodynamicForcesTorques.absoluteVelocity.der1[1].u + hull.frame_a.R.T[1,1] * addedMassForcesTorques.force.f_in_m[1] + hull.frame_a.R.T[2,1] * addedMassForcesTorques.force.f_in_m[2] + hull.frame_a.R.T[3,1] * addedMassForcesTorques.force.f_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4979};
  data->localData[0]->realVars[1126] /* addedMassForcesTorques.force.arrow.rvisobj[1] variable */ = data->localData[0]->realVars[13] /* hydrodynamicForcesTorques.absoluteVelocity.der1[1].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[1].u) */ + (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1141] /* addedMassForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (data->localData[0]->realVars[1142] /* addedMassForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1330] /* hull.frame_a.R.T[3,1] DUMMY_STATE */) * (data->localData[0]->realVars[1143] /* addedMassForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4980
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.arrowHead.r[1] = addedMassForcesTorques.force.arrow.rvisobj[1] + addedMassForcesTorques.force.arrow.rxvisobj[1] * addedMassForcesTorques.force.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4980};
  data->localData[0]->realVars[1108] /* addedMassForcesTorques.force.arrow.arrowHead.r[1] variable */ = data->localData[0]->realVars[1126] /* addedMassForcesTorques.force.arrow.rvisobj[1] variable */ + (data->localData[0]->realVars[1129] /* addedMassForcesTorques.force.arrow.rxvisobj[1] variable */) * (data->localData[0]->realVars[1117] /* addedMassForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4981
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.rvisobj[2] = hydrodynamicForcesTorques.absoluteVelocity.der1[2].u + hull.frame_a.R.T[1,2] * addedMassForcesTorques.force.f_in_m[1] + hull.frame_a.R.T[2,2] * addedMassForcesTorques.force.f_in_m[2] + hull.frame_a.R.T[3,2] * addedMassForcesTorques.force.f_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4981};
  data->localData[0]->realVars[1127] /* addedMassForcesTorques.force.arrow.rvisobj[2] variable */ = data->localData[0]->realVars[14] /* hydrodynamicForcesTorques.absoluteVelocity.der1[2].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[2].u) */ + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1141] /* addedMassForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (data->localData[0]->realVars[1142] /* addedMassForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (data->localData[0]->realVars[1143] /* addedMassForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4982
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.arrowHead.r[2] = addedMassForcesTorques.force.arrow.rvisobj[2] + addedMassForcesTorques.force.arrow.rxvisobj[2] * addedMassForcesTorques.force.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4982};
  data->localData[0]->realVars[1109] /* addedMassForcesTorques.force.arrow.arrowHead.r[2] variable */ = data->localData[0]->realVars[1127] /* addedMassForcesTorques.force.arrow.rvisobj[2] variable */ + (data->localData[0]->realVars[1130] /* addedMassForcesTorques.force.arrow.rxvisobj[2] variable */) * (data->localData[0]->realVars[1117] /* addedMassForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4983
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.rvisobj[3] = hydrodynamicForcesTorques.absoluteVelocity.der1[3].u + hull.frame_a.R.T[1,3] * addedMassForcesTorques.force.f_in_m[1] + hull.frame_a.R.T[2,3] * addedMassForcesTorques.force.f_in_m[2] + hull.frame_a.R.T[3,3] * addedMassForcesTorques.force.f_in_m[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4983};
  data->localData[0]->realVars[1128] /* addedMassForcesTorques.force.arrow.rvisobj[3] variable */ = data->localData[0]->realVars[15] /* hydrodynamicForcesTorques.absoluteVelocity.der1[3].u STATE(1,addedMassForcesTorques.absoluteSensor.der1[3].u) */ + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1141] /* addedMassForcesTorques.force.f_in_m[1] variable */) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (data->localData[0]->realVars[1142] /* addedMassForcesTorques.force.f_in_m[2] variable */) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (data->localData[0]->realVars[1143] /* addedMassForcesTorques.force.f_in_m[3] variable */);
  TRACE_POP
}
/*
equation index: 4984
type: SIMPLE_ASSIGN
addedMassForcesTorques.force.arrow.arrowHead.r[3] = addedMassForcesTorques.force.arrow.rvisobj[3] + addedMassForcesTorques.force.arrow.rxvisobj[3] * addedMassForcesTorques.force.arrow.arrowLength
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4984};
  data->localData[0]->realVars[1110] /* addedMassForcesTorques.force.arrow.arrowHead.r[3] variable */ = data->localData[0]->realVars[1128] /* addedMassForcesTorques.force.arrow.rvisobj[3] variable */ + (data->localData[0]->realVars[1131] /* addedMassForcesTorques.force.arrow.rxvisobj[3] variable */) * (data->localData[0]->realVars[1117] /* addedMassForcesTorques.force.arrow.arrowLength variable */);
  TRACE_POP
}
/*
equation index: 4985
type: SIMPLE_ASSIGN
addedMassForcesTorques.frame_b.f[1] = -addedMassForcesTorques.force.force[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4985};
  data->localData[0]->realVars[1168] /* addedMassForcesTorques.frame_b.f[1] variable */ = (-data->localData[0]->realVars[1144] /* addedMassForcesTorques.force.force[1] variable */);
  TRACE_POP
}
/*
equation index: 4986
type: SIMPLE_ASSIGN
actuators.revolute.tau = (-actuators.revolute.frame_b.t[2]) * actuators.revolute.e[2] - actuators.revolute.frame_b.t[3] * actuators.revolute.e[3] - actuators.prismatic.frame_b.t[1] * actuators.revolute.e[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4986};
  data->localData[0]->realVars[604] /* actuators.revolute.tau variable */ = ((-data->localData[0]->realVars[601] /* actuators.revolute.frame_b.t[2] variable */)) * (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) - ((data->localData[0]->realVars[602] /* actuators.revolute.frame_b.t[3] variable */) * (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */)) - ((data->localData[0]->realVars[568] /* actuators.prismatic.frame_b.t[1] variable */) * (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */));
  TRACE_POP
}
/*
equation index: 4987
type: SIMPLE_ASSIGN
$DER.actuators.body_rolling.w_a[3] = actuators.body_rolling.z_a[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4987};
  data->localData[0]->realVars[57] /* der(actuators.body_rolling.w_a[3]) DUMMY_DER */ = data->localData[0]->realVars[210] /* actuators.body_rolling.z_a[3] variable */;
  TRACE_POP
}
/*
equation index: 4988
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.T[3,3] = (1.0 - actuators.revolute.e[3] ^ 2.0) * (-$cse1) * actuators.revolute.w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4988};
  modelica_real tmp60;
  tmp60 = data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */;
  data->localData[0]->realVars[72] /* der(actuators.revolute.R_rel.T[3,3]) DUMMY_DER */ = (1.0 - ((tmp60 * tmp60))) * (((-data->localData[0]->realVars[85] /* $cse1 variable */)) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */));
  TRACE_POP
}
/*
equation index: 4989
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.T[3,2] = (-actuators.revolute.e[3]) * (-$cse1) * actuators.revolute.w * actuators.revolute.e[2] - actuators.revolute.e[1] * $cse2 * actuators.revolute.w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4989};
  data->localData[0]->realVars[71] /* der(actuators.revolute.R_rel.T[3,2]) DUMMY_DER */ = ((-data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */)) * (((-data->localData[0]->realVars[85] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */) * (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */))) - ((data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) * ((data->localData[0]->realVars[86] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */)));
  TRACE_POP
}
/*
equation index: 4990
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.T[3,1] = actuators.revolute.e[2] * $cse2 * actuators.revolute.w - actuators.revolute.e[3] * (-$cse1) * actuators.revolute.w * actuators.revolute.e[1]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4990};
  data->localData[0]->realVars[70] /* der(actuators.revolute.R_rel.T[3,1]) DUMMY_DER */ = (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) * ((data->localData[0]->realVars[86] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */)) - ((data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) * (((-data->localData[0]->realVars[85] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */) * (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */))));
  TRACE_POP
}
/*
equation index: 4991
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.T[2,3] = actuators.revolute.e[1] * $cse2 * actuators.revolute.w - actuators.revolute.e[2] * (-$cse1) * actuators.revolute.w * actuators.revolute.e[3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4991};
  data->localData[0]->realVars[69] /* der(actuators.revolute.R_rel.T[2,3]) DUMMY_DER */ = (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) * ((data->localData[0]->realVars[86] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */)) - ((data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) * (((-data->localData[0]->realVars[85] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */) * (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */))));
  TRACE_POP
}
/*
equation index: 4992
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.T[2,2] = (1.0 - actuators.revolute.e[2] ^ 2.0) * (-$cse1) * actuators.revolute.w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4992};
  modelica_real tmp61;
  tmp61 = data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */;
  data->localData[0]->realVars[68] /* der(actuators.revolute.R_rel.T[2,2]) DUMMY_DER */ = (1.0 - ((tmp61 * tmp61))) * (((-data->localData[0]->realVars[85] /* $cse1 variable */)) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */));
  TRACE_POP
}
/*
equation index: 4993
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.T[2,1] = (-actuators.revolute.e[2]) * (-$cse1) * actuators.revolute.w * actuators.revolute.e[1] - actuators.revolute.e[3] * $cse2 * actuators.revolute.w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4993};
  data->localData[0]->realVars[67] /* der(actuators.revolute.R_rel.T[2,1]) DUMMY_DER */ = ((-data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */)) * (((-data->localData[0]->realVars[85] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */) * (data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */))) - ((data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) * ((data->localData[0]->realVars[86] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */)));
  TRACE_POP
}
/*
equation index: 4994
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.T[1,3] = (-actuators.revolute.e[1]) * (-$cse1) * actuators.revolute.w * actuators.revolute.e[3] - actuators.revolute.e[2] * $cse2 * actuators.revolute.w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4994};
  data->localData[0]->realVars[66] /* der(actuators.revolute.R_rel.T[1,3]) DUMMY_DER */ = ((-data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */)) * (((-data->localData[0]->realVars[85] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */) * (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */))) - ((data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */) * ((data->localData[0]->realVars[86] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */)));
  TRACE_POP
}
/*
equation index: 4995
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.T[1,2] = actuators.revolute.e[3] * $cse2 * actuators.revolute.w - actuators.revolute.e[1] * (-$cse1) * actuators.revolute.w * actuators.revolute.e[2]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4995};
  data->localData[0]->realVars[65] /* der(actuators.revolute.R_rel.T[1,2]) DUMMY_DER */ = (data->simulationInfo->realParameter[249] /* actuators.revolute.e[3] PARAM */) * ((data->localData[0]->realVars[86] /* $cse2 variable */) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */)) - ((data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */) * (((-data->localData[0]->realVars[85] /* $cse1 variable */)) * ((data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */) * (data->simulationInfo->realParameter[248] /* actuators.revolute.e[2] PARAM */))));
  TRACE_POP
}
/*
equation index: 4996
type: SIMPLE_ASSIGN
$DER.actuators.revolute.R_rel.T[1,1] = (1.0 - actuators.revolute.e[1] ^ 2.0) * (-$cse1) * actuators.revolute.w
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4996};
  modelica_real tmp62;
  tmp62 = data->simulationInfo->realParameter[247] /* actuators.revolute.e[1] PARAM */;
  data->localData[0]->realVars[64] /* der(actuators.revolute.R_rel.T[1,1]) DUMMY_DER */ = (1.0 - ((tmp62 * tmp62))) * (((-data->localData[0]->realVars[85] /* $cse1 variable */)) * (data->localData[0]->realVars[6] /* actuators.revolute.w STATE(1,actuators.position.a) */));
  TRACE_POP
}
/*
equation index: 4997
type: SIMPLE_ASSIGN
$DER.actuators.body_rolling.frame_a.R.T[1,3] = actuators.revolute.R_rel.T[1,1] * $DER.hull.frame_a.R.T[1,3] + $DER.actuators.revolute.R_rel.T[1,1] * hull.frame_a.R.T[1,3] + actuators.revolute.R_rel.T[1,2] * $DER.hull.frame_a.R.T[2,3] + $DER.actuators.revolute.R_rel.T[1,2] * hull.frame_a.R.T[2,3] + actuators.revolute.R_rel.T[1,3] * $DER.hull.frame_a.R.T[3,3] + $DER.actuators.revolute.R_rel.T[1,3] * hull.frame_a.R.T[3,3]
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4997};
  data->localData[0]->realVars[48] /* der(actuators.body_rolling.frame_a.R.T[1,3]) DUMMY_DER */ = (data->localData[0]->realVars[572] /* actuators.revolute.R_rel.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[80] /* der(hull.frame_a.R.T[1,3]) DUMMY_DER */) + (data->localData[0]->realVars[64] /* der(actuators.revolute.R_rel.T[1,1]) DUMMY_DER */) * (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) + (data->localData[0]->realVars[573] /* actuators.revolute.R_rel.T[1,2] DUMMY_STATE */) * (data->localData[0]->realVars[82] /* der(hull.frame_a.R.T[2,3]) DUMMY_DER */) + (data->localData[0]->realVars[65] /* der(actuators.revolute.R_rel.T[1,2]) DUMMY_DER */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) + (data->localData[0]->realVars[574] /* actuators.revolute.R_rel.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[84] /* der(hull.frame_a.R.T[3,3]) DUMMY_DER */) + (data->localData[0]->realVars[66] /* der(actuators.revolute.R_rel.T[1,3]) DUMMY_DER */) * (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 5000
type: ALGORITHM

  assert(actuators.limiter2.uMax >= actuators.limiter2.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(actuators.limiter2.uMax, 6, 0, true) + ") < uMin (=" + String(actuators.limiter2.uMin, 6, 0, true) + ")");
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5000};
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,11,") < uMin (=");
  modelica_string tmp67;
  static int tmp68 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp63 = GreaterEq(data->simulationInfo->realParameter[204] /* actuators.limiter2.uMax PARAM */,data->simulationInfo->realParameter[205] /* actuators.limiter2.uMin PARAM */);
    if(!tmp63)
    {
      tmp65 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[204] /* actuators.limiter2.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp66));
      tmp67 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[205] /* actuators.limiter2.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp67);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nactuators.limiter2.uMax >= actuators.limiter2.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 4999
type: ALGORITHM

  assert(actuators.limiter1.uMax >= actuators.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(actuators.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(actuators.limiter1.uMin, 6, 0, true) + ")");
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4999};
  modelica_boolean tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,11,") < uMin (=");
  modelica_string tmp73;
  static int tmp74 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp69 = GreaterEq(data->simulationInfo->realParameter[202] /* actuators.limiter1.uMax PARAM */,data->simulationInfo->realParameter[203] /* actuators.limiter1.uMin PARAM */);
    if(!tmp69)
    {
      tmp71 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[202] /* actuators.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp70),tmp71);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp72));
      tmp73 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[203] /* actuators.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp73);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nactuators.limiter1.uMax >= actuators.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 4998
type: ALGORITHM

  assert(actuators.limiter.uMax >= actuators.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(actuators.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(actuators.limiter.uMin, 6, 0, true) + ")");
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4998};
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp77;
  static const MMC_DEFSTRINGLIT(tmp78,11,") < uMin (=");
  modelica_string tmp79;
  static int tmp80 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp75 = GreaterEq(data->simulationInfo->realParameter[200] /* actuators.limiter.uMax PARAM */,data->simulationInfo->realParameter[201] /* actuators.limiter.uMin PARAM */);
    if(!tmp75)
    {
      tmp77 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[200] /* actuators.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp78));
      tmp79 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[201] /* actuators.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp79);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nactuators.limiter.uMax >= actuators.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionLocalKnownVars(data, threadData);
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4444(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4445(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4446(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4447(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4448(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4449(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4450(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4451(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4452(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4453(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4454(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4455(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4456(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4457(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4458(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4459(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4460(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4461(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4462(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4463(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4464(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4465(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4466(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4467(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4468(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4469(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4470(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4471(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4472(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4473(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4474(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4475(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4476(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4477(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4478(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4479(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4480(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4481(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4482(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4483(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4484(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4485(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4486(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4487(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4488(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4489(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4490(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4491(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4492(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4493(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4494(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4495(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4496(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4497(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4498(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4499(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4500(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4501(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4502(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4503(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4504(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4505(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4506(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4507(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4508(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4509(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4510(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4511(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4512(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4513(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4514(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4515(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4516(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4517(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4518(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4519(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4520(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4521(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4522(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4523(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4524(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4525(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4526(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4527(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4528(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4529(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4530(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4531(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4532(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4533(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4534(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4535(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4536(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4537(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4538(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4539(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4540(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4541(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4542(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4543(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4544(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4545(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4546(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4547(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4548(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4549(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4550(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4551(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4552(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4553(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4554(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4555(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4556(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4557(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4566(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4567(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4568(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4569(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4570(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4571(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4572(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4573(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4574(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4575(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4576(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4577(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4578(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4579(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4580(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4581(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4582(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4583(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4584(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4585(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4586(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4587(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4588(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4589(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4590(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4591(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4592(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4593(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4594(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4595(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4596(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4597(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4598(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4599(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4600(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4601(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4602(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4603(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4604(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4605(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4606(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4607(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4608(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4609(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4610(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4611(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4612(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4613(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4614(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4615(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4616(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4617(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4618(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4619(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4620(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4621(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4622(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4623(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4624(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4625(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4626(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4627(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4628(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4629(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4630(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4631(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4632(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4633(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4634(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4635(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4636(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4637(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4638(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4639(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4640(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4641(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4642(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4643(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4644(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4645(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4646(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4647(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4648(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4649(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4650(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4651(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4652(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4653(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4654(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4655(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4656(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4657(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4658(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4659(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4660(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4661(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4662(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4663(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4664(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4665(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4666(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4667(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4668(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4669(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4670(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4671(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4672(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4673(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4674(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4675(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4676(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4677(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4678(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4679(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4680(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4681(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4682(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4683(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4684(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4685(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4686(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4687(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4688(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4689(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4690(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4691(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4692(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4693(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4694(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4695(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4696(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4697(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4698(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4699(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4700(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4701(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4702(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4703(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4704(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4705(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4706(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4707(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4708(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4709(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4710(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4711(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4712(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4713(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4714(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4715(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4716(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4717(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4718(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4719(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4720(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4721(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4722(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4723(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4724(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4725(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4726(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4727(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4728(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4729(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4730(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4731(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4732(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4733(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4734(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4735(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4736(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4737(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4738(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4739(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4740(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4741(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4742(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4743(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4744(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4745(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4746(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4747(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4748(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4749(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4750(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4751(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4752(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4753(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4754(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4755(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4756(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4757(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4758(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4759(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4760(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4761(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4762(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4763(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4764(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4765(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4766(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4767(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4768(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4769(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4770(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4771(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4772(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4773(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4774(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4775(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4776(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4777(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4778(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4779(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4780(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4781(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4782(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4783(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4784(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4785(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4786(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4915(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4916(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4917(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4918(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4919(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4920(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4921(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4922(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4923(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4924(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4925(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4926(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4927(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4928(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4929(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4930(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4931(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4932(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4933(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4934(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4935(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4936(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4937(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4938(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4939(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4940(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4941(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4942(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4943(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4944(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4945(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4946(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4947(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4948(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4949(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4950(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4951(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4952(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4953(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4954(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4955(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4956(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4957(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4958(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4959(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4960(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4961(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4962(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4963(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4964(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4965(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4966(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4967(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4968(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4969(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4970(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4971(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4972(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4973(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4974(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4975(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4976(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4977(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4978(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4979(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4980(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4981(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4982(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4983(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4984(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4985(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4986(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4987(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4988(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4989(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4990(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4991(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4992(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4993(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4994(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4995(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4996(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4997(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_5000(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4999(data, threadData);

  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4998(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4507(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4508(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4533(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4534(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4535(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4536(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4537(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4538(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4540(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4541(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4542(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4543(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4555(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4556(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4557(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4566(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4567(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4568(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4569(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4570(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4571(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4572(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4574(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4576(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4577(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4579(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4581(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4582(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4583(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4584(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4586(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4587(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4589(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4591(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4596(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4598(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4616(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4618(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4619(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4620(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4622(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4623(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4624(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4625(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4626(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4628(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4629(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4631(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4632(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4633(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4634(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4635(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4636(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4637(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4638(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4639(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4641(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4643(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4644(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4646(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4648(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4663(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4689(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4690(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4691(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4692(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4693(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4694(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4695(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4696(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4697(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4698(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4699(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4700(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4702(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4704(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4706(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4707(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4708(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4709(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4710(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4711(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4712(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4713(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4714(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4715(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4739(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4763(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4915(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4917(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4918(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4922(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4928(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4929(DATA* data, threadData_t *threadData);
extern void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4964(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4507(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4508(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4533(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4534(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4535(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4536(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4537(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4538(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4540(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4541(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4542(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4543(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4555(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4556(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4557(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4566(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4567(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4568(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4569(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4570(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4571(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4572(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4574(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4576(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4577(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4579(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4581(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4582(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4583(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4584(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4586(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4587(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4589(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4591(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4596(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4598(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4616(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4618(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4619(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4620(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4622(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4623(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4624(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4625(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4626(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4628(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4629(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4631(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4632(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4633(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4634(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4635(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4636(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4637(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4638(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4639(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4641(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4643(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4644(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4646(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4648(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4663(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4689(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4690(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4691(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4692(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4693(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4694(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4695(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4696(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4697(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4698(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4699(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4700(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4702(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4704(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4706(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4707(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4708(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4709(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4710(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4711(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4712(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4713(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4714(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4715(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4739(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4763(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4915(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4917(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4918(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4922(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4928(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4929(data, threadData);

    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_4964(data, threadData);
}

int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_12jac.h"
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_callback = {
   (int (*)(DATA *, threadData_t *, void *)) Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_performSimulation,    /* performSimulation */
   (int (*)(DATA *, threadData_t *, void *)) Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_performQSSSimulation,    /* performQSSSimulation */
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_updateContinuousSystem,    /* updateContinuousSystem */
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialNonLinearSystem,    /* initialNonLinearSystem */
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialLinearSystem,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initializeDAEmodeData,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionODE,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionAlgebraics,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionDAE,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionLocalKnownVars,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_input_function,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_input_function_init,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_input_function_updateStartValues,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_data_function,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_output_function,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_setc_function,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_storeDelayed,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_updateBoundVariableAttributes,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionInitialEquations_lambda0,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionRemovedInitialEquations,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_updateBoundParameters,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_checkForAsserts,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_ZeroCrossingsEquations,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_ZeroCrossings,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_updateRelations,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_zeroCrossingDescription,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_relationDescription,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_initSample,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_A,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_B,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_C,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_D,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_INDEX_JAC_F,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianA,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianB,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianC,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianD,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianF,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacA_column,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacB_column,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacC_column,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacD_column,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacF_column,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_linear_model_frame,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_linear_model_datarecovery_frame,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_mayer,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_lagrange,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_pickUpBoundsForInputsInOptimization,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_setInputData,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_getTimeGrid,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_symbolicInlineSystem,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_initSynchronous,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_updateSynchronous,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_function_equationsSynchronous,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_inputNames,
   Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_dataReconciliationInputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/usr/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,18,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Glider_Lib_Modelica_ROS"
#define _OMC_LIT_RESOURCE_1_dir_data "/home/automata/repos/Glider_Lib_Modelica_ROS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,23,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,44,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,33,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaReference"
#define _OMC_LIT_RESOURCE_3_dir_data "/usr/lib/omlibrary/ModelicaReference"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,17,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,36,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_4_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,16,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,41,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit";
  data->modelData->modelFilePrefix = "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/automata/repos/Glider_Lib_Modelica_ROS";
  data->modelData->modelGUID = "{422c290b-3610-44b7-ad0b-cc5e639962c8}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_init.c"
    ;
  static const char contents_info[] =
    #include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 16;
  data->modelData->nVariablesReal = 2137;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 78;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 599;
  data->modelData->nParametersInteger = 84;
  data->modelData->nParametersBoolean = 60;
  data->modelData->nParametersString = 58;
  data->modelData->nInputVars = 3;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 2462;
  data->modelData->nAliasInteger = 57;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 11;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 7445;
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
  
    Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_setupDataStruc(&data, threadData);
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


