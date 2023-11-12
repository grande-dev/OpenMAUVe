#include "omc_simulation_settings.h"
#include "ROS_Sampler_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "ROS_Sampler_includes.h"


real_array omc_ROS__Socket__Call(threadData_t *threadData, modelica_real _t, modelica_integer _port, modelica_string _host, modelica_integer _n_in, modelica_integer _n_out, real_array _query)
{
  double _t_ext;
  int _port_ext;
  int _n_in_ext;
  int _n_out_ext;
  void *_query_c89;
  void *_res_c89;
  real_array _res;
  alloc_real_array(&(_res), 1, (_index_t)_n_out); // _res has no default value.
  _t_ext = (double)_t;

  _port_ext = (int)_port;

  _n_in_ext = (int)_n_in;

  _n_out_ext = (int)_n_out;
  _query_c89 = (void*) data_of_real_c89_array(&(_query));
  _res_c89 = (void*) data_of_real_c89_array(&(_res));
  ROS_Socket_Call(_t_ext, _port_ext, MMC_STRINGDATA(_host), _n_in_ext, (const double*) _query_c89, _n_out_ext, (double*) _res_c89);
  return _res;
}
modelica_metatype boxptr_ROS__Socket__Call(threadData_t *threadData, modelica_metatype _t, modelica_metatype _port, modelica_metatype _host, modelica_metatype _n_in, modelica_metatype _n_out, modelica_metatype _query)
{
  modelica_real tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  real_array _res;
  modelica_metatype out_res;
  tmp1 = mmc_unbox_real(_t);
  tmp2 = mmc_unbox_integer(_port);
  tmp3 = mmc_unbox_integer(_n_in);
  tmp4 = mmc_unbox_integer(_n_out);
  _res = omc_ROS__Socket__Call(threadData, tmp1, tmp2, _host, tmp3, tmp4, *((base_array_t*)_query));
  out_res = mmc_mk_modelica_array(_res);
  return out_res;
}

#ifdef __cplusplus
}
#endif
