#if defined(__cplusplus)
  extern "C" {
#endif
  int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_mayer(DATA* data, modelica_real** res, short*);
  int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_lagrange(DATA* data, modelica_real** res, short *, short *);
  int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_setInputData(DATA *data, const modelica_boolean file);
  int Glider_Lib_Modelica_ROS_GenericGlider_mass_explicit_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif