#if defined(__cplusplus)
  extern "C" {
#endif
  int TestGlider_mayer(DATA* data, modelica_real** res, short*);
  int TestGlider_lagrange(DATA* data, modelica_real** res, short *, short *);
  int TestGlider_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int TestGlider_setInputData(DATA *data, const modelica_boolean file);
  int TestGlider_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif