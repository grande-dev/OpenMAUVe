#ifndef ROS_Sampler__H
#define ROS_Sampler__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
real_array omc_ROS__Socket__Call(threadData_t *threadData, modelica_real _t, modelica_integer _port, modelica_string _host, modelica_integer _n_in, modelica_integer _n_out, real_array _query);
DLLExport
modelica_metatype boxptr_ROS__Socket__Call(threadData_t *threadData, modelica_metatype _t, modelica_metatype _port, modelica_metatype _host, modelica_metatype _n_in, modelica_metatype _n_out, modelica_metatype _query);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ROS__Socket__Call,2,0) {(void*) boxptr_ROS__Socket__Call,0}};
#define boxvar_ROS__Socket__Call MMC_REFSTRUCTLIT(boxvar_lit_ROS__Socket__Call)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ROS_Socket_Call(double (*_t*), int (*_port*), const char* (*_host*), int (*_n_in*), const double* (*_query*), int (*_n_out*), double* (*_res*));
 */
#include "ROS_Sampler_model.h"


#ifdef __cplusplus
}
#endif
#endif

