#ifndef TestGlider__H
#define TestGlider__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  real_array _T;
  real_array _w;
} Modelica_Mechanics_MultiBody_Frames_Orientation;
extern struct record_description Modelica_Mechanics_MultiBody_Frames_Orientation__desc;

void Modelica_Mechanics_MultiBody_Frames_Orientation_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Mechanics_MultiBody_Frames_Orientation_construct(td, ths ) Modelica_Mechanics_MultiBody_Frames_Orientation_construct_p(td, &ths )
void Modelica_Mechanics_MultiBody_Frames_Orientation_copy_p(void* v_src, void* v_dst);
#define Modelica_Mechanics_MultiBody_Frames_Orientation_copy(src,dst) Modelica_Mechanics_MultiBody_Frames_Orientation_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Mechanics_MultiBody_Frames_Orientation omc_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData_t *threadData , real_array in_T, real_array in_w);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Mechanics_MultiBody_Frames_Orientation_copy_to_vars_p(void* v_src , real_array* in_T, real_array* in_w);
// #define Modelica_Mechanics_MultiBody_Frames_Orientation_copy_to_vars(src,...) Modelica_Mechanics_MultiBody_Frames_Orientation_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Mechanics_MultiBody_Frames_Orientation_array;
#define alloc_Modelica_Mechanics_MultiBody_Frames_Orientation_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Mechanics_MultiBody_Frames_Orientation_construct_p, ndims, sizeof(Modelica_Mechanics_MultiBody_Frames_Orientation), __VA_ARGS__)
#define Modelica_Mechanics_MultiBody_Frames_Orientation_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Mechanics_MultiBody_Frames_Orientation_copy_p, sizeof(Modelica_Mechanics_MultiBody_Frames_Orientation))
#define Modelica_Mechanics_MultiBody_Frames_Orientation_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Mechanics_MultiBody_Frames_Orientation_copy_p, sizeof(Modelica_Mechanics_MultiBody_Frames_Orientation))
#define Modelica_Mechanics_MultiBody_Frames_Orientation_array_get(src,ndims,...)   (*(Modelica_Mechanics_MultiBody_Frames_Orientation*)(generic_array_get(&src, sizeof(Modelica_Mechanics_MultiBody_Frames_Orientation), __VA_ARGS__)))
#define Modelica_Mechanics_MultiBody_Frames_Orientation_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Mechanics_MultiBody_Frames_Orientation_copy_p, sizeof(Modelica_Mechanics_MultiBody_Frames_Orientation), __VA_ARGS__)

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


DLLExport
modelica_real omc_Modelica_Math_Vectors_length(threadData_t *threadData, real_array _v);
DLLExport
modelica_metatype boxptr_Modelica_Math_Vectors_length(threadData_t *threadData, modelica_metatype _v);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_length,2,0) {(void*) boxptr_Modelica_Math_Vectors_length,0}};
#define boxvar_Modelica_Math_Vectors_length MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_length)


DLLExport
modelica_real omc_Modelica_Math_Vectors_norm(threadData_t *threadData, real_array _v, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Math_Vectors_norm(threadData_t *threadData, modelica_metatype _v, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_norm,2,0) {(void*) boxptr_Modelica_Math_Vectors_norm,0}};
#define boxvar_Modelica_Math_Vectors_norm MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_norm)


DLLExport
real_array omc_Modelica_Math_Vectors_normalize(threadData_t *threadData, real_array _v, modelica_real _eps);
DLLExport
modelica_metatype boxptr_Modelica_Math_Vectors_normalize(threadData_t *threadData, modelica_metatype _v, modelica_metatype _eps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_normalize,2,0) {(void*) boxptr_Modelica_Math_Vectors_normalize,0}};
#define boxvar_Modelica_Math_Vectors_normalize MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_normalize)


DLLExport
Modelica_Mechanics_MultiBody_Frames_Orientation omc_Modelica_Mechanics_MultiBody_Frames_Orientation (threadData_t *threadData, real_array omc_T, real_array omc_w);

DLLExport
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData_t *threadData, modelica_metatype _T, modelica_metatype _w);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_Orientation,2,0) {(void*) boxptr_Modelica_Mechanics_MultiBody_Frames_Orientation,0}};
#define boxvar_Modelica_Mechanics_MultiBody_Frames_Orientation MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_Orientation)


DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData_t *threadData, Modelica_Mechanics_MultiBody_Frames_Orientation _R, integer_array _sequence, modelica_real _guessAngle1);
DLLExport
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData_t *threadData, modelica_metatype _R, modelica_metatype _sequence, modelica_metatype _guessAngle1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles,2,0) {(void*) boxptr_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles,0}};
#define boxvar_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles)


DLLExport
modelica_real omc_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData_t *threadData, real_array _e, real_array _v1, real_array _v2);
DLLExport
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData_t *threadData, modelica_metatype _e, modelica_metatype _v1, modelica_metatype _v2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle,2,0) {(void*) boxptr_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle,0}};
#define boxvar_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle)


DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_resolve2(threadData_t *threadData, Modelica_Mechanics_MultiBody_Frames_Orientation _R, real_array _v1);
DLLExport
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_resolve2(threadData_t *threadData, modelica_metatype _R, modelica_metatype _v1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_resolve2,2,0) {(void*) boxptr_Modelica_Mechanics_MultiBody_Frames_resolve2,0}};
#define boxvar_Modelica_Mechanics_MultiBody_Frames_resolve2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_resolve2)


DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData_t *threadData, real_array _n_x, real_array _n_y);
DLLExport
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData_t *threadData, modelica_metatype _n_x, modelica_metatype _n_y);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy,2,0) {(void*) boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy,0}};
#define boxvar_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy)


DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation(threadData_t *threadData, real_array _e, modelica_real _angle);
DLLExport
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation(threadData_t *threadData, modelica_metatype _e, modelica_metatype _angle);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation,2,0) {(void*) boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation,0}};
#define boxvar_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation)


DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1(threadData_t *threadData, real_array _T, real_array _v2);
DLLExport
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1(threadData_t *threadData, modelica_metatype _T, modelica_metatype _v2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1,2,0) {(void*) boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1,0}};
#define boxvar_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1)


DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData_t *threadData, real_array _T, real_array _v1);
DLLExport
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData_t *threadData, modelica_metatype _T, modelica_metatype _v1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2,2,0) {(void*) boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2,0}};
#define boxvar_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2)
#include "TestGlider_model.h"


#ifdef __cplusplus
}
#endif
#endif

