/* Non Linear Systems */
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_model.h"
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

void residualFunc4566(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4566};
  int i;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<4; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<4; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */ = xloc[0];
  data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */ = xloc[1];
  data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */ = xloc[2];
  data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */ = xloc[3];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp2 = data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp3 = data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  res[0] = (tmp0 * tmp0) + (tmp1 * tmp1) + (tmp2 * tmp2) + (tmp3 * tmp3) + -1.0;

  res[1] = (((modelica_real)data->localData[0]->integerVars[3] /* $STATESET1.A[1,4] variable */)) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[2] /* $STATESET1.A[1,3] variable */)) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[1] /* $STATESET1.A[1,2] variable */)) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[0] /* $STATESET1.A[1,1] variable */)) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) - data->localData[0]->realVars[0] /* $STATESET1.x[1] STATE(1) */;

  res[2] = (((modelica_real)data->localData[0]->integerVars[7] /* $STATESET1.A[2,4] variable */)) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[6] /* $STATESET1.A[2,3] variable */)) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[5] /* $STATESET1.A[2,2] variable */)) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[4] /* $STATESET1.A[2,1] variable */)) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) - data->localData[0]->realVars[1] /* $STATESET1.x[2] STATE(1) */;

  res[3] = (((modelica_real)data->localData[0]->integerVars[11] /* $STATESET1.A[3,4] variable */)) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[10] /* $STATESET1.A[3,3] variable */)) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[9] /* $STATESET1.A[3,2] variable */)) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[8] /* $STATESET1.A[3,1] variable */)) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */) - data->localData[0]->realVars[2] /* $STATESET1.x[3] STATE(1) */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS4566(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+4] = {0,4,4,4,4};
  const int rowIndex[16] = {0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((4+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(16*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNoneZeros = 16;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(4*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 4;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (4+1)*sizeof(unsigned int));
  
  for(i=2;i<4+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 16*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[3] = 1;
  inSysData->sparsePattern->colorCols[2] = 2;
  inSysData->sparsePattern->colorCols[1] = 3;
  inSysData->sparsePattern->colorCols[0] = 4;
}
void initializeStaticDataNLS4566(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for actuators.bodyVariableMass.Q[1] */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* actuators.bodyVariableMass.Q[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* actuators.bodyVariableMass.Q[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* actuators.bodyVariableMass.Q[1] */.max;
  /* static nls data for actuators.bodyVariableMass.Q[3] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* actuators.bodyVariableMass.Q[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* actuators.bodyVariableMass.Q[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* actuators.bodyVariableMass.Q[3] */.max;
  /* static nls data for actuators.bodyVariableMass.Q[2] */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* actuators.bodyVariableMass.Q[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* actuators.bodyVariableMass.Q[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* actuators.bodyVariableMass.Q[2] */.max;
  /* static nls data for actuators.bodyVariableMass.Q[4] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* actuators.bodyVariableMass.Q[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* actuators.bodyVariableMass.Q[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* actuators.bodyVariableMass.Q[4] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS4566(sysData);
}

void getIterationVarsNLS4566(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  array[1] = data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  array[2] = data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  array[3] = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 3561
type: SIMPLE_ASSIGN
hull.frame_a.R.T[1,1] = -1.0 + 2.0 * (actuators.bodyVariableMass.Q[1] ^ 2.0 + actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3561};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 3562
type: SIMPLE_ASSIGN
hull.frame_a.R.T[3,3] = -1.0 + 2.0 * (actuators.bodyVariableMass.Q[3] ^ 2.0 + actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3562};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 3563
type: SIMPLE_ASSIGN
hull.frame_a.R.T[2,2] = -1.0 + 2.0 * (actuators.bodyVariableMass.Q[2] ^ 2.0 + actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3563};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 3564
type: SIMPLE_ASSIGN
hull.frame_a.R.T[1,2] = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[2] + actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3564};
  data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 3565
type: SIMPLE_ASSIGN
hull.frame_a.R.T[3,2] = 2.0 * (actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[2] - actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3565};
  data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */ = (2.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) - ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 3566
type: SIMPLE_ASSIGN
hull.frame_a.R.T[2,3] = 2.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[3] + actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3566};
  data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 3567
type: SIMPLE_ASSIGN
hull.frame_a.R.T[2,1] = 2.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[1] - actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3567};
  data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) - ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 3568
type: SIMPLE_ASSIGN
hull.frame_a.R.T[1,3] = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[3] - actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3568};
  data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) - ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

void residualFunc3585(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3585};
  int i;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<4; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<4; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */ = xloc[0];
  data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */ = xloc[1];
  data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */ = xloc[2];
  data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */ = xloc[3];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3561(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3562(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3563(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3564(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3565(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3566(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3567(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_3568(data, threadData);
  /* body */
  res[0] = atan2(((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426), (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08));

  tmp0 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp2 = data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp3 = data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  res[1] = (tmp0 * tmp0) + (tmp1 * tmp1) + (tmp2 * tmp2) + (tmp3 * tmp3) + -1.0;

  res[2] = atan2((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (9.999998316666754e-08), (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417));

  res[3] = atan2(((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (0.999999995)), (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3585(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+4] = {0,4,4,4,4};
  const int rowIndex[16] = {0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((4+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(16*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNoneZeros = 16;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(4*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 4;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (4+1)*sizeof(unsigned int));
  
  for(i=2;i<4+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 16*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[3] = 1;
  inSysData->sparsePattern->colorCols[2] = 2;
  inSysData->sparsePattern->colorCols[1] = 3;
  inSysData->sparsePattern->colorCols[0] = 4;
}
void initializeStaticDataNLS3585(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for actuators.bodyVariableMass.Q[1] */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* actuators.bodyVariableMass.Q[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* actuators.bodyVariableMass.Q[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* actuators.bodyVariableMass.Q[1] */.max;
  /* static nls data for actuators.bodyVariableMass.Q[3] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* actuators.bodyVariableMass.Q[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* actuators.bodyVariableMass.Q[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* actuators.bodyVariableMass.Q[3] */.max;
  /* static nls data for actuators.bodyVariableMass.Q[4] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* actuators.bodyVariableMass.Q[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* actuators.bodyVariableMass.Q[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* actuators.bodyVariableMass.Q[4] */.max;
  /* static nls data for actuators.bodyVariableMass.Q[2] */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* actuators.bodyVariableMass.Q[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* actuators.bodyVariableMass.Q[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* actuators.bodyVariableMass.Q[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3585(sysData);
}

void getIterationVarsNLS3585(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  array[1] = data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  array[2] = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  array[3] = data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1338
type: SIMPLE_ASSIGN
hull.frame_a.R.T[1,1] = -1.0 + 2.0 * (actuators.bodyVariableMass.Q[1] ^ 2.0 + actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1338};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1339
type: SIMPLE_ASSIGN
hull.frame_a.R.T[3,3] = -1.0 + 2.0 * (actuators.bodyVariableMass.Q[3] ^ 2.0 + actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1339};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1340
type: SIMPLE_ASSIGN
hull.frame_a.R.T[2,2] = -1.0 + 2.0 * (actuators.bodyVariableMass.Q[2] ^ 2.0 + actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1340};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1341
type: SIMPLE_ASSIGN
hull.frame_a.R.T[1,2] = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[2] + actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1341};
  data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1342
type: SIMPLE_ASSIGN
hull.frame_a.R.T[3,2] = 2.0 * (actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[2] - actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1342};
  data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */ = (2.0) * ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) - ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 1343
type: SIMPLE_ASSIGN
hull.frame_a.R.T[2,3] = 2.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[3] + actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1343};
  data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1344
type: SIMPLE_ASSIGN
hull.frame_a.R.T[2,1] = 2.0 * (actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[1] - actuators.bodyVariableMass.Q[3] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1344};
  data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) - ((data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 1345
type: SIMPLE_ASSIGN
hull.frame_a.R.T[1,3] = 2.0 * (actuators.bodyVariableMass.Q[1] * actuators.bodyVariableMass.Q[3] - actuators.bodyVariableMass.Q[2] * actuators.bodyVariableMass.Q[4])
*/
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1345};
  data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */) - ((data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

void residualFunc1362(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1362};
  int i;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<4; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<4; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */ = xloc[0];
  data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */ = xloc[1];
  data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */ = xloc[2];
  data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */ = xloc[3];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1338(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1339(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1340(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1341(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1342(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1343(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1344(data, threadData);

  /* local constraints */
  Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_eqFunction_1345(data, threadData);
  /* body */
  res[0] = atan2(((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426), (data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (9.999998316666754e-08));

  tmp0 = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp2 = data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp3 = data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  res[1] = (tmp0 * tmp0) + (tmp1 * tmp1) + (tmp2 * tmp2) + (tmp3 * tmp3) + -1.0;

  res[2] = atan2((data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (9.999998316666754e-08), (data->localData[0]->realVars[1331] /* hull.frame_a.R.T[3,2] variable */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1332] /* hull.frame_a.R.T[3,3] DUMMY_STATE */) * (0.9999995000000417));

  res[3] = atan2(((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1324] /* hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1325] /* hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) - ((data->localData[0]->realVars[1326] /* hull.frame_a.R.T[1,3] DUMMY_STATE */) * (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */))) * (0.999999995)), (data->localData[0]->realVars[1327] /* hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1328] /* hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1329] /* hull.frame_a.R.T[2,3] DUMMY_STATE */) * (0.0009999998283333426));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1362(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+4] = {0,4,4,4,4};
  const int rowIndex[16] = {0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((4+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(16*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNoneZeros = 16;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(4*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 4;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (4+1)*sizeof(unsigned int));
  
  for(i=2;i<4+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 16*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[3] = 1;
  inSysData->sparsePattern->colorCols[2] = 2;
  inSysData->sparsePattern->colorCols[1] = 3;
  inSysData->sparsePattern->colorCols[0] = 4;
}
void initializeStaticDataNLS1362(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for actuators.bodyVariableMass.Q[1] */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* actuators.bodyVariableMass.Q[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* actuators.bodyVariableMass.Q[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* actuators.bodyVariableMass.Q[1] */.max;
  /* static nls data for actuators.bodyVariableMass.Q[3] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* actuators.bodyVariableMass.Q[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* actuators.bodyVariableMass.Q[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* actuators.bodyVariableMass.Q[3] */.max;
  /* static nls data for actuators.bodyVariableMass.Q[4] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* actuators.bodyVariableMass.Q[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* actuators.bodyVariableMass.Q[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* actuators.bodyVariableMass.Q[4] */.max;
  /* static nls data for actuators.bodyVariableMass.Q[2] */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* actuators.bodyVariableMass.Q[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* actuators.bodyVariableMass.Q[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* actuators.bodyVariableMass.Q[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1362(sysData);
}

void getIterationVarsNLS1362(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[139] /* actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  array[1] = data->localData[0]->realVars[141] /* actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  array[2] = data->localData[0]->realVars[142] /* actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  array[3] = data->localData[0]->realVars[140] /* actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[2].equationIndex = 4566;
  nonLinearSystemData[2].size = 4;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc4566;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacNLSJac264_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianNLSJac264;
  nonLinearSystemData[2].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS4566;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS4566;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 3585;
  nonLinearSystemData[1].size = 4;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc3585;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacNLSJac262_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianNLSJac262;
  nonLinearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS3585;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS3585;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 1362;
  nonLinearSystemData[0].size = 4;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc1362;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_functionJacNLSJac260_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_initialAnalyticJacobianNLSJac260;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS1362;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS1362;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

