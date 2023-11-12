/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TestGlider_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TestGlider_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
  /* sample 1 */
  data->modelData->samplesInfo[i].index = 1;
  data->modelData->samplesInfo[i].start = data->simulationInfo->realParameter[483] /* genericGlider_mass_explicit.rOS_Sampler.startTime PARAM */;
  data->modelData->samplesInfo[i].interval = data->simulationInfo->realParameter[482] /* genericGlider_mass_explicit.rOS_Sampler.samplePeriod PARAM */;
  assertStreamPrint(threadData,data->modelData->samplesInfo[i].interval > 0.0, "sample-interval <= 0.0");
  i++;
}

const char *TestGlider_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < ramp5.startTime",
  "time < ramp5.startTime + ramp5.duration",
  "time < ramp4.startTime",
  "time < ramp4.startTime + ramp4.duration",
  "time < ramp.startTime",
  "time < ramp.startTime + ramp.duration",
  "time < VBD_mass_change.startTime",
  "time < VBD_mass_change.startTime + VBD_mass_change.duration",
  "time < ramp3.startTime",
  "time < ramp3.startTime + ramp3.duration",
  "time < ramp2.startTime",
  "time < ramp2.startTime + ramp2.duration",
  "time < ramp1.startTime",
  "time < ramp1.startTime + ramp1.duration",
  "time < movable_mass_displacement.startTime",
  "time < movable_mass_displacement.startTime + movable_mass_displacement.duration",
  "time < rotating_mass_pos.startTime",
  "time < rotating_mass_pos.startTime + rotating_mass_pos.duration"};
  static const int occurEqs0[] = {1,4480};
  static const int occurEqs1[] = {1,4480};
  static const int occurEqs2[] = {1,4693};
  static const int occurEqs3[] = {1,4693};
  static const int occurEqs4[] = {1,4690};
  static const int occurEqs5[] = {1,4690};
  static const int occurEqs6[] = {1,4698};
  static const int occurEqs7[] = {1,4698};
  static const int occurEqs8[] = {1,4692};
  static const int occurEqs9[] = {1,4692};
  static const int occurEqs10[] = {1,4691};
  static const int occurEqs11[] = {1,4691};
  static const int occurEqs12[] = {1,4690};
  static const int occurEqs13[] = {1,4690};
  static const int occurEqs14[] = {1,4698};
  static const int occurEqs15[] = {1,4698};
  static const int occurEqs16[] = {1,4480};
  static const int occurEqs17[] = {1,4480};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */

int TestGlider_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  
  TRACE_POP
  return 0;
}

int TestGlider_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[645] /* ramp5.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[645] /* ramp5.startTime PARAM */ + data->simulationInfo->realParameter[642] /* ramp5.duration PARAM */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp1) ? 1 : -1;
  tmp2 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[641] /* ramp4.startTime PARAM */, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp2) ? 1 : -1;
  tmp3 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[641] /* ramp4.startTime PARAM */ + data->simulationInfo->realParameter[638] /* ramp4.duration PARAM */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp3) ? 1 : -1;
  tmp4 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[625] /* ramp.startTime PARAM */, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp4) ? 1 : -1;
  tmp5 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[625] /* ramp.startTime PARAM */ + data->simulationInfo->realParameter[622] /* ramp.duration PARAM */, data->simulationInfo->storedRelations[5]);
  gout[5] = (tmp5) ? 1 : -1;
  tmp6 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[3] /* VBD_mass_change.startTime PARAM */, data->simulationInfo->storedRelations[6]);
  gout[6] = (tmp6) ? 1 : -1;
  tmp7 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[3] /* VBD_mass_change.startTime PARAM */ + data->simulationInfo->realParameter[0] /* VBD_mass_change.duration PARAM */, data->simulationInfo->storedRelations[7]);
  gout[7] = (tmp7) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[637] /* ramp3.startTime PARAM */, data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp8) ? 1 : -1;
  tmp9 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[637] /* ramp3.startTime PARAM */ + data->simulationInfo->realParameter[634] /* ramp3.duration PARAM */, data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp9) ? 1 : -1;
  tmp10 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[633] /* ramp2.startTime PARAM */, data->simulationInfo->storedRelations[10]);
  gout[10] = (tmp10) ? 1 : -1;
  tmp11 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[633] /* ramp2.startTime PARAM */ + data->simulationInfo->realParameter[630] /* ramp2.duration PARAM */, data->simulationInfo->storedRelations[11]);
  gout[11] = (tmp11) ? 1 : -1;
  tmp12 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[629] /* ramp1.startTime PARAM */, data->simulationInfo->storedRelations[12]);
  gout[12] = (tmp12) ? 1 : -1;
  tmp13 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[629] /* ramp1.startTime PARAM */ + data->simulationInfo->realParameter[626] /* ramp1.duration PARAM */, data->simulationInfo->storedRelations[13]);
  gout[13] = (tmp13) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[619] /* movable_mass_displacement.startTime PARAM */, data->simulationInfo->storedRelations[14]);
  gout[14] = (tmp14) ? 1 : -1;
  tmp15 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[619] /* movable_mass_displacement.startTime PARAM */ + data->simulationInfo->realParameter[616] /* movable_mass_displacement.duration PARAM */, data->simulationInfo->storedRelations[15]);
  gout[15] = (tmp15) ? 1 : -1;
  tmp16 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[649] /* rotating_mass_pos.startTime PARAM */, data->simulationInfo->storedRelations[16]);
  gout[16] = (tmp16) ? 1 : -1;
  tmp17 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[649] /* rotating_mass_pos.startTime PARAM */ + data->simulationInfo->realParameter[646] /* rotating_mass_pos.duration PARAM */, data->simulationInfo->storedRelations[17]);
  gout[17] = (tmp17) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TestGlider_relationDescription(int i)
{
  const char *res[] = {"time < ramp5.startTime",
  "time < ramp5.startTime + ramp5.duration",
  "time < ramp4.startTime",
  "time < ramp4.startTime + ramp4.duration",
  "time < ramp.startTime",
  "time < ramp.startTime + ramp.duration",
  "time < VBD_mass_change.startTime",
  "time < VBD_mass_change.startTime + VBD_mass_change.duration",
  "time < ramp3.startTime",
  "time < ramp3.startTime + ramp3.duration",
  "time < ramp2.startTime",
  "time < ramp2.startTime + ramp2.duration",
  "time < ramp1.startTime",
  "time < ramp1.startTime + ramp1.duration",
  "time < movable_mass_displacement.startTime",
  "time < movable_mass_displacement.startTime + movable_mass_displacement.duration",
  "time < rotating_mass_pos.startTime",
  "time < rotating_mass_pos.startTime + rotating_mass_pos.duration"};
  return res[i];
}

int TestGlider_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  
  if(evalforZeroCross) {
    tmp18 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[645] /* ramp5.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp18;
    tmp19 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[645] /* ramp5.startTime PARAM */ + data->simulationInfo->realParameter[642] /* ramp5.duration PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp19;
    tmp20 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[641] /* ramp4.startTime PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp20;
    tmp21 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[641] /* ramp4.startTime PARAM */ + data->simulationInfo->realParameter[638] /* ramp4.duration PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp21;
    tmp22 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[625] /* ramp.startTime PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp22;
    tmp23 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[625] /* ramp.startTime PARAM */ + data->simulationInfo->realParameter[622] /* ramp.duration PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp23;
    tmp24 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[3] /* VBD_mass_change.startTime PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp24;
    tmp25 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[3] /* VBD_mass_change.startTime PARAM */ + data->simulationInfo->realParameter[0] /* VBD_mass_change.duration PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp25;
    tmp26 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[637] /* ramp3.startTime PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp26;
    tmp27 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[637] /* ramp3.startTime PARAM */ + data->simulationInfo->realParameter[634] /* ramp3.duration PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp27;
    tmp28 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[633] /* ramp2.startTime PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp28;
    tmp29 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[633] /* ramp2.startTime PARAM */ + data->simulationInfo->realParameter[630] /* ramp2.duration PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp29;
    tmp30 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[629] /* ramp1.startTime PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp30;
    tmp31 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[629] /* ramp1.startTime PARAM */ + data->simulationInfo->realParameter[626] /* ramp1.duration PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp31;
    tmp32 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[619] /* movable_mass_displacement.startTime PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp32;
    tmp33 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[619] /* movable_mass_displacement.startTime PARAM */ + data->simulationInfo->realParameter[616] /* movable_mass_displacement.duration PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp33;
    tmp34 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[649] /* rotating_mass_pos.startTime PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp34;
    tmp35 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[649] /* rotating_mass_pos.startTime PARAM */ + data->simulationInfo->realParameter[646] /* rotating_mass_pos.duration PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp35;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[645] /* ramp5.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[645] /* ramp5.startTime PARAM */ + data->simulationInfo->realParameter[642] /* ramp5.duration PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[641] /* ramp4.startTime PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[641] /* ramp4.startTime PARAM */ + data->simulationInfo->realParameter[638] /* ramp4.duration PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[625] /* ramp.startTime PARAM */);
    data->simulationInfo->relations[5] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[625] /* ramp.startTime PARAM */ + data->simulationInfo->realParameter[622] /* ramp.duration PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[3] /* VBD_mass_change.startTime PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[3] /* VBD_mass_change.startTime PARAM */ + data->simulationInfo->realParameter[0] /* VBD_mass_change.duration PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[637] /* ramp3.startTime PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[637] /* ramp3.startTime PARAM */ + data->simulationInfo->realParameter[634] /* ramp3.duration PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[633] /* ramp2.startTime PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[633] /* ramp2.startTime PARAM */ + data->simulationInfo->realParameter[630] /* ramp2.duration PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[629] /* ramp1.startTime PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[629] /* ramp1.startTime PARAM */ + data->simulationInfo->realParameter[626] /* ramp1.duration PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[619] /* movable_mass_displacement.startTime PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[619] /* movable_mass_displacement.startTime PARAM */ + data->simulationInfo->realParameter[616] /* movable_mass_displacement.duration PARAM */);
    data->simulationInfo->relations[16] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[649] /* rotating_mass_pos.startTime PARAM */);
    data->simulationInfo->relations[17] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[649] /* rotating_mass_pos.startTime PARAM */ + data->simulationInfo->realParameter[646] /* rotating_mass_pos.duration PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

