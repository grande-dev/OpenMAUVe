/* Non Linear Systems */
#include "TestGlider_model.h"
#include "TestGlider_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

void residualFunc4550(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4550};
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
  data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */ = xloc[0];
  data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */ = xloc[1];
  data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */ = xloc[2];
  data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */ = xloc[3];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp2 = data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp3 = data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  res[0] = (tmp0 * tmp0) + (tmp1 * tmp1) + (tmp2 * tmp2) + (tmp3 * tmp3) + -1.0;

  res[1] = (((modelica_real)data->localData[0]->integerVars[3] /* $STATESET1.A[1,4] variable */)) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[2] /* $STATESET1.A[1,3] variable */)) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[1] /* $STATESET1.A[1,2] variable */)) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[0] /* $STATESET1.A[1,1] variable */)) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) - data->localData[0]->realVars[0] /* $STATESET1.x[1] STATE(1) */;

  res[2] = (((modelica_real)data->localData[0]->integerVars[7] /* $STATESET1.A[2,4] variable */)) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[6] /* $STATESET1.A[2,3] variable */)) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[5] /* $STATESET1.A[2,2] variable */)) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[4] /* $STATESET1.A[2,1] variable */)) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) - data->localData[0]->realVars[1] /* $STATESET1.x[2] STATE(1) */;

  res[3] = (((modelica_real)data->localData[0]->integerVars[11] /* $STATESET1.A[3,4] variable */)) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[10] /* $STATESET1.A[3,3] variable */)) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[9] /* $STATESET1.A[3,2] variable */)) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (((modelica_real)data->localData[0]->integerVars[8] /* $STATESET1.A[3,1] variable */)) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */) - data->localData[0]->realVars[2] /* $STATESET1.x[3] STATE(1) */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS4550(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS4550(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */.max;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */.max;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */.max;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS4550(sysData);
}

void getIterationVarsNLS4550(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  array[1] = data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  array[2] = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  array[3] = data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 3574
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[1,1] = -1.0 + 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] ^ 2.0 + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void TestGlider_eqFunction_3574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3574};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 3575
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[3,3] = -1.0 + 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] ^ 2.0 + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void TestGlider_eqFunction_3575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3575};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 3576
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[2,2] = -1.0 + 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] ^ 2.0 + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void TestGlider_eqFunction_3576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3576};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 3577
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[1,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_3577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3577};
  data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 3578
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[1,3] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_3578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3578};
  data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) - ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 3579
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[2,3] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_3579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3579};
  data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 3580
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[3,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_3580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3580};
  data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) - ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 3581
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[2,1] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_3581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3581};
  data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) - ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

void residualFunc3598(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3598};
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
  data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */ = xloc[0];
  data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */ = xloc[1];
  data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */ = xloc[2];
  data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */ = xloc[3];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TestGlider_eqFunction_3574(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3575(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3576(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3577(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3578(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3579(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3580(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_3581(data, threadData);
  /* body */
  tmp0 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp2 = data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp3 = data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  res[0] = (tmp0 * tmp0) + (tmp1 * tmp1) + (tmp2 * tmp2) + (tmp3 * tmp3) + -1.0;

  res[1] = atan2(((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426), (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08));

  res[2] = atan2((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (9.999998316666754e-08), (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417));

  res[3] = atan2(((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (0.999999995)), (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3598(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS3598(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */.max;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */.max;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */.max;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3598(sysData);
}

void getIterationVarsNLS3598(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  array[1] = data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  array[2] = data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  array[3] = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1333
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[1,1] = -1.0 + 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] ^ 2.0 + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void TestGlider_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1333};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1334
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[3,3] = -1.0 + 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] ^ 2.0 + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void TestGlider_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1334};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1335
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[2,2] = -1.0 + 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] ^ 2.0 + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] ^ 2.0)
*/
void TestGlider_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1335};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */ = -1.0 + (2.0) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1336
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[1,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1336};
  data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) + (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1337
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[1,3] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1337};
  data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */ = (2.0) * ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) - ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 1338
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[2,3] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] + genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1338};
  data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) + (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1339
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[3,2] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1339};
  data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) - ((data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}
/*
equation index: 1340
type: SIMPLE_ASSIGN
genericGlider_mass_explicit.hull.frame_a.R.T[2,1] = 2.0 * (genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] - genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] * genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4])
*/
void TestGlider_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1340};
  data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */ = (2.0) * ((data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */) * (data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */) - ((data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */) * (data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */)));
  TRACE_POP
}

void residualFunc1357(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1357};
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
  data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */ = xloc[0];
  data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */ = xloc[1];
  data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */ = xloc[2];
  data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */ = xloc[3];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TestGlider_eqFunction_1333(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1334(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1335(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1336(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1337(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1338(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1339(data, threadData);

  /* local constraints */
  TestGlider_eqFunction_1340(data, threadData);
  /* body */
  tmp0 = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
  tmp1 = data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  tmp2 = data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  tmp3 = data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  res[0] = (tmp0 * tmp0) + (tmp1 * tmp1) + (tmp2 * tmp2) + (tmp3 * tmp3) + -1.0;

  res[1] = atan2(((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (-9.999999983333334e-05) + ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) - ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */))) * (0.9999994950000443) + ((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (0.0009999998283333426), (data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (9.999998316666754e-08));

  res[2] = atan2((data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (0.999999995) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (9.99999498333376e-05) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (9.999998316666754e-08), (data->localData[0]->realVars[1343] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,2] DUMMY_STATE */) * (-0.0009999998333333417) + (data->localData[0]->realVars[1344] /* genericGlider_mass_explicit.hull.frame_a.R.T[3,3] variable */) * (0.9999995000000417));

  res[3] = atan2(((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.99999498333376e-05) - (((data->localData[0]->realVars[1336] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,1] DUMMY_STATE */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) - ((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */))) * (9.999998316666754e-08)) - (((data->localData[0]->realVars[1337] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,2] variable */) * (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) - ((data->localData[0]->realVars[1338] /* genericGlider_mass_explicit.hull.frame_a.R.T[1,3] variable */) * (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */))) * (0.999999995)), (data->localData[0]->realVars[1339] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,1] DUMMY_STATE */) * (-9.999999983333334e-05) + (data->localData[0]->realVars[1340] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,2] variable */) * (0.9999994950000443) + (data->localData[0]->realVars[1341] /* genericGlider_mass_explicit.hull.frame_a.R.T[2,3] variable */) * (0.0009999998283333426));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1357(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS1357(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] */.max;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] */.max;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] */.max;
  /* static nls data for genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1357(sysData);
}

void getIterationVarsNLS1357(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[153] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[3] DUMMY_STATE */;
  array[1] = data->localData[0]->realVars[151] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[1] DUMMY_STATE */;
  array[2] = data->localData[0]->realVars[152] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[2] DUMMY_STATE */;
  array[3] = data->localData[0]->realVars[154] /* genericGlider_mass_explicit.actuators.bodyVariableMass.Q[4] DUMMY_STATE */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void TestGlider_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[2].equationIndex = 4550;
  nonLinearSystemData[2].size = 4;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc4550;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = TestGlider_functionJacNLSJac69_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = TestGlider_initialAnalyticJacobianNLSJac69;
  nonLinearSystemData[2].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS4550;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS4550;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 3598;
  nonLinearSystemData[1].size = 4;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc3598;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = TestGlider_functionJacNLSJac67_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = TestGlider_initialAnalyticJacobianNLSJac67;
  nonLinearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS3598;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS3598;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 1357;
  nonLinearSystemData[0].size = 4;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc1357;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = TestGlider_functionJacNLSJac65_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = TestGlider_initialAnalyticJacobianNLSJac65;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS1357;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS1357;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

