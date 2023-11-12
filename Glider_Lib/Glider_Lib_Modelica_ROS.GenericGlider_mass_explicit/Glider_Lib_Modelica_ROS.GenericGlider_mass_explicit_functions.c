#include "omc_simulation_settings.h"
#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "Glider_Lib_Modelica_ROS.GenericGlider_mass_explicit_includes.h"


DLLExport
modelica_real omc_Modelica_Math_Vectors_length(threadData_t *threadData, real_array _v)
{
  modelica_real _result;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  tmp1 = mul_real_scalar_product(_v, _v);
  if(!(tmp1 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(v * v) was %g should be >= 0", tmp1);
  }
  _result = sqrt(tmp1);
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_Vectors_length(threadData_t *threadData, modelica_metatype _v)
{
  modelica_real _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Math_Vectors_length(threadData, *((base_array_t*)_v));
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

DLLExport
modelica_real omc_Modelica_Math_Vectors_norm(threadData_t *threadData, real_array _v, modelica_real _p)
{
  modelica_real _result;
  modelica_real _eps;
  modelica_integer tmp1;
  modelica_real tmp2;
  real_array tmp4;
  modelica_real tmp8;
  real_array tmp10;
  modelica_real tmp14;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  _result = 0.0;
  _eps = 1e-14;
  tmp1 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
  if((tmp1 > ((modelica_integer) 0)))
  {
    if(((_p >= 2.0 - _eps) && (_p <= 2.0 + _eps)))
    {
      tmp2 = mul_real_scalar_product(_v, _v);
      if(!(tmp2 >= 0.0))
      {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of sqrt(v * v) was %g should be >= 0", tmp2);
      }
      _result = sqrt(tmp2);
    }
    else
    {
      if((_p >= 9.999999999999999e+59))
      {
        {
          modelica_integer tmp3;
          real_array __omcQ_24tmpVar3174;
          modelica_real __omcQ_24tmpVar3173;
          modelica_integer tmp5;
          real_array __omcQ_24tmpVar3172_loopVar;
          modelica_integer tmp6;
          modelica_real __omcQ_24tmpVar3172;
          modelica_integer tmp7;
          __omcQ_24tmpVar3172_loopVar = _v;
          tmp6 = 1;
          tmp7 = 0;
          tmp7 = modelica_integer_max(tmp7,size_of_dimension_base_array(__omcQ_24tmpVar3172_loopVar, 1));
          tmp3 = 1;
          simple_alloc_1d_real_array(&__omcQ_24tmpVar3174,tmp7);
          while(1) {
            tmp5 = 1;
            if(tmp6 <= size_of_dimension_base_array(__omcQ_24tmpVar3172_loopVar, 1)) {
              __omcQ_24tmpVar3172 = real_array_get1(__omcQ_24tmpVar3172_loopVar, 1, tmp6++);
              tmp5--;
            }
            if (tmp5 == 0) {
              __omcQ_24tmpVar3173 = fabs(__omcQ_24tmpVar3172);
              real_array_get1(__omcQ_24tmpVar3174, 1, tmp3++) = __omcQ_24tmpVar3173;
            } else if (tmp5 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          tmp4 = __omcQ_24tmpVar3174;
        }
        tmp8 = max_real_array(tmp4);
        _result = tmp8;
      }
      else
      {
        if(((_p >= 1.0 - _eps) && (_p <= 1.0 + _eps)))
        {
          {
            modelica_integer tmp9;
            real_array __omcQ_24tmpVar3177;
            modelica_real __omcQ_24tmpVar3176;
            modelica_integer tmp11;
            real_array __omcQ_24tmpVar3175_loopVar;
            modelica_integer tmp12;
            modelica_real __omcQ_24tmpVar3175;
            modelica_integer tmp13;
            __omcQ_24tmpVar3175_loopVar = _v;
            tmp12 = 1;
            tmp13 = 0;
            tmp13 = modelica_integer_max(tmp13,size_of_dimension_base_array(__omcQ_24tmpVar3175_loopVar, 1));
            tmp9 = 1;
            simple_alloc_1d_real_array(&__omcQ_24tmpVar3177,tmp13);
            while(1) {
              tmp11 = 1;
              if(tmp12 <= size_of_dimension_base_array(__omcQ_24tmpVar3175_loopVar, 1)) {
                __omcQ_24tmpVar3175 = real_array_get1(__omcQ_24tmpVar3175_loopVar, 1, tmp12++);
                tmp11--;
              }
              if (tmp11 == 0) {
                __omcQ_24tmpVar3176 = fabs(__omcQ_24tmpVar3175);
                real_array_get1(__omcQ_24tmpVar3177, 1, tmp9++) = __omcQ_24tmpVar3176;
              } else if (tmp11 == 1) {
                break;
              } else {
                MMC_THROW_INTERNAL();
              }
            }
            tmp10 = __omcQ_24tmpVar3177;
          }
          _result = sum_real_array(tmp10);
        }
        else
        {
          if((_p >= 1.0))
          {
            {
              modelica_real __omcQ_24tmpVar3179;
              modelica_real tmp15;
              modelica_real tmp16;
              modelica_real tmp17;
              modelica_real tmp18;
              modelica_real tmp19;
              modelica_real tmp20;
              modelica_real tmp21;
              modelica_real __omcQ_24tmpVar3178;
              modelica_integer tmp22;
              modelica_integer tmp23;
              modelica_integer tmp24;
              modelica_integer tmp25;
              modelica_integer _i;
              tmp25 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
              tmp23 = 1 /* Range step-value */;
              tmp24 = tmp25 /* Range stop-value */;
              _i = ((modelica_integer) 1) /* Range start-value */;
              _i = (((modelica_integer) 1) /* Range start-value */)-tmp23;
              __omcQ_24tmpVar3179 = 0.0; /* defaultValue */
              while(1) {
                tmp22 = 1;
                if (tmp23 > 0 ? _i+tmp23 <= tmp24 : _i+tmp23 >= tmp24) {
                  _i += tmp23;
                  tmp22--;
                }
                if (tmp22 == 0) {
                  tmp15 = fabs(real_array_get1(_v, 1, _i));
                  tmp16 = _p;
                  if(tmp15 < 0.0 && tmp16 != 0.0)
                  {
                    tmp18 = modf(tmp16, &tmp19);
                    
                    if(tmp18 > 0.5)
                    {
                      tmp18 -= 1.0;
                      tmp19 += 1.0;
                    }
                    else if(tmp18 < -0.5)
                    {
                      tmp18 += 1.0;
                      tmp19 -= 1.0;
                    }
                    
                    if(fabs(tmp18) < 1e-10)
                      tmp17 = pow(tmp15, tmp19);
                    else
                    {
                      tmp21 = modf(1.0/tmp16, &tmp20);
                      if(tmp21 > 0.5)
                      {
                        tmp21 -= 1.0;
                        tmp20 += 1.0;
                      }
                      else if(tmp21 < -0.5)
                      {
                        tmp21 += 1.0;
                        tmp20 -= 1.0;
                      }
                      if(fabs(tmp21) < 1e-10 && ((unsigned long)tmp20 & 1))
                      {
                        tmp17 = -pow(-tmp15, tmp18)*pow(tmp15, tmp19);
                      }
                      else
                      {
                        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp15, tmp16);
                      }
                    }
                  }
                  else
                  {
                    tmp17 = pow(tmp15, tmp16);
                  }
                  if(isnan(tmp17) || isinf(tmp17))
                  {
                    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp15, tmp16);
                  }__omcQ_24tmpVar3178 = tmp17;
                  __omcQ_24tmpVar3179 = __omcQ_24tmpVar3179 + __omcQ_24tmpVar3178;
                } else if (tmp22 == 1) {
                  break;
                } else {
                  MMC_THROW_INTERNAL();
                }
              }
              tmp14 = __omcQ_24tmpVar3179;
            }
            tmp26 = _p;
            if (tmp26 == 0) {throwStreamPrint(threadData, "Division by zero %s", "1.0 / p");}
            tmp27 = tmp14;
            tmp28 = (1.0) / tmp26;
            if(tmp27 < 0.0 && tmp28 != 0.0)
            {
              tmp30 = modf(tmp28, &tmp31);
              
              if(tmp30 > 0.5)
              {
                tmp30 -= 1.0;
                tmp31 += 1.0;
              }
              else if(tmp30 < -0.5)
              {
                tmp30 += 1.0;
                tmp31 -= 1.0;
              }
              
              if(fabs(tmp30) < 1e-10)
                tmp29 = pow(tmp27, tmp31);
              else
              {
                tmp33 = modf(1.0/tmp28, &tmp32);
                if(tmp33 > 0.5)
                {
                  tmp33 -= 1.0;
                  tmp32 += 1.0;
                }
                else if(tmp33 < -0.5)
                {
                  tmp33 += 1.0;
                  tmp32 -= 1.0;
                }
                if(fabs(tmp33) < 1e-10 && ((unsigned long)tmp32 & 1))
                {
                  tmp29 = -pow(-tmp27, tmp30)*pow(tmp27, tmp31);
                }
                else
                {
                  throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp27, tmp28);
                }
              }
            }
            else
            {
              tmp29 = pow(tmp27, tmp28);
            }
            if(isnan(tmp29) || isinf(tmp29))
            {
              throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp27, tmp28);
            }
            _result = tmp29;
          }
          else
          {
            {
              if(!0)
              {
                tmp34 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
                tmpMeta[0] = stringAppend(_OMC_LIT3,tmp34);
                tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT4);
                {
                  FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Math/package.mo",162,7,162,104,1};
                  omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[1]));
                }
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_Vectors_norm(threadData_t *threadData, modelica_metatype _v, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_real(_p);
  _result = omc_Modelica_Math_Vectors_norm(threadData, *((base_array_t*)_v), tmp1);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

DLLExport
real_array omc_Modelica_Math_Vectors_normalize(threadData_t *threadData, real_array _v, modelica_real _eps)
{
  real_array _result;
  modelica_integer tmp1;
  modelica_boolean tmp2;
  real_array tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
  alloc_real_array(&(_result), 1, (_index_t)tmp1); // _result has no default value.
  tmp2 = (modelica_boolean)(omc_Modelica_Math_Vectors_length(threadData, _v) >= _eps);
  if(tmp2)
  {
    tmp3 = div_alloc_real_array_scalar(_v, omc_Modelica_Math_Vectors_length(threadData, _v));
  }
  else
  {
    tmp3 = div_alloc_real_array_scalar(_v, _eps);
  }
  real_array_copy_data(tmp3, _result);
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_Vectors_normalize(threadData_t *threadData, modelica_metatype _v, modelica_metatype _eps)
{
  modelica_real tmp1;
  real_array _result;
  modelica_integer tmp2;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_real(_eps);
  _result = omc_Modelica_Math_Vectors_normalize(threadData, *((base_array_t*)_v), tmp1);
  out_result = mmc_mk_modelica_array(_result);
  return out_result;
}

Modelica_Mechanics_MultiBody_Frames_Orientation omc_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData_t *threadData, real_array omc_T, real_array omc_w)
{
  Modelica_Mechanics_MultiBody_Frames_Orientation tmp1;
  tmp1._T = omc_T;
  tmp1._w = omc_w;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData_t *threadData, modelica_metatype _T, modelica_metatype _w)
{
  return mmc_mk_box3(3, &Modelica_Mechanics_MultiBody_Frames_Orientation__desc, _T, _w);
}

DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData_t *threadData, Modelica_Mechanics_MultiBody_Frames_Orientation _R, integer_array _sequence, modelica_real _guessAngle1)
{
  real_array _angles;
  real_array _e1_1;
  real_array _e2_1a;
  real_array _e3_1;
  real_array _e3_2;
  modelica_real _A;
  modelica_real _B;
  modelica_real _angle_1a;
  modelica_real _angle_1b;
  real_array _T_1a;
  static int tmp1 = 0;
  modelica_boolean tmp2;
  real_array tmp3;
  modelica_boolean tmp4;
  real_array tmp5;
  modelica_boolean tmp6;
  real_array tmp7;
  modelica_boolean tmp8;
  real_array tmp9;
  real_array tmp10;
  modelica_boolean tmp11;
  real_array tmp12;
  modelica_boolean tmp13;
  real_array tmp14;
  real_array tmp15;
  real_array tmp16;
  real_array tmp17;
  real_array tmp18;
  real_array tmp19;
  real_array tmp20;
  real_array tmp21;
  real_array tmp22;
  real_array tmp23;
  real_array tmp24;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_angles), 1, (_index_t)3); // _angles has no default value.
  alloc_real_array(&(_e1_1), 1, (_index_t)3); // _e1_1 has no default value.
  alloc_real_array(&(_e2_1a), 1, (_index_t)3); // _e2_1a has no default value.
  alloc_real_array(&(_e3_1), 1, (_index_t)3); // _e3_1 has no default value.
  alloc_real_array(&(_e3_2), 1, (_index_t)3); // _e3_2 has no default value.
  // _A has no default value.
  // _B has no default value.
  // _angle_1a has no default value.
  // _angle_1b has no default value.
  alloc_real_array(&(_T_1a), 2, (_index_t)3, (_index_t)3); // _T_1a has no default value.
  {
    if(!((integer_array_get1(_sequence, 1, ((modelica_integer) 1)) != integer_array_get1(_sequence, 1, ((modelica_integer) 2))) && (integer_array_get1(_sequence, 1, ((modelica_integer) 2)) != integer_array_get1(_sequence, 1, ((modelica_integer) 3)))))
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Mechanics/MultiBody/Frames.mo",751,5,752,53,1};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT10));
      }
    }
  }

  tmp4 = (modelica_boolean)(integer_array_get1(_sequence, 1, ((modelica_integer) 1)) == ((modelica_integer) 1));
  if(tmp4)
  {
    tmp5 = _OMC_LIT11;
  }
  else
  {
    tmp2 = (modelica_boolean)(integer_array_get1(_sequence, 1, ((modelica_integer) 1)) == ((modelica_integer) 2));
    if(tmp2)
    {
      tmp3 = _OMC_LIT12;
    }
    else
    {
      tmp3 = _OMC_LIT13;
    }
    tmp5 = tmp3;
  }
  real_array_copy_data(tmp5, _e1_1);

  tmp8 = (modelica_boolean)(integer_array_get1(_sequence, 1, ((modelica_integer) 2)) == ((modelica_integer) 1));
  if(tmp8)
  {
    tmp9 = _OMC_LIT11;
  }
  else
  {
    tmp6 = (modelica_boolean)(integer_array_get1(_sequence, 1, ((modelica_integer) 2)) == ((modelica_integer) 2));
    if(tmp6)
    {
      tmp7 = _OMC_LIT12;
    }
    else
    {
      tmp7 = _OMC_LIT13;
    }
    tmp9 = tmp7;
  }
  real_array_copy_data(tmp9, _e2_1a);

  array_alloc_scalar_real_array(&tmp10, 3, (modelica_real)real_array_get2(_R._T, 2, integer_array_get1(_sequence, 1, ((modelica_integer) 3)), ((modelica_integer) 1)), (modelica_real)real_array_get2(_R._T, 2, integer_array_get1(_sequence, 1, ((modelica_integer) 3)), ((modelica_integer) 2)), (modelica_real)real_array_get2(_R._T, 2, integer_array_get1(_sequence, 1, ((modelica_integer) 3)), ((modelica_integer) 3)));
  real_array_copy_data(tmp10, _e3_1);

  tmp13 = (modelica_boolean)(integer_array_get1(_sequence, 1, ((modelica_integer) 3)) == ((modelica_integer) 1));
  if(tmp13)
  {
    tmp14 = _OMC_LIT11;
  }
  else
  {
    tmp11 = (modelica_boolean)(integer_array_get1(_sequence, 1, ((modelica_integer) 3)) == ((modelica_integer) 2));
    if(tmp11)
    {
      tmp12 = _OMC_LIT12;
    }
    else
    {
      tmp12 = _OMC_LIT13;
    }
    tmp14 = tmp12;
  }
  real_array_copy_data(tmp14, _e3_2);

  _A = (real_array_get1(_e2_1a, 1, ((modelica_integer) 1))) * (real_array_get1(_e3_1, 1, ((modelica_integer) 1))) + (real_array_get1(_e2_1a, 1, ((modelica_integer) 2))) * (real_array_get1(_e3_1, 1, ((modelica_integer) 2))) + (real_array_get1(_e2_1a, 1, ((modelica_integer) 3))) * (real_array_get1(_e3_1, 1, ((modelica_integer) 3)));

  _B = ((real_array_get1(_e1_1, 1, ((modelica_integer) 2))) * (real_array_get1(_e2_1a, 1, ((modelica_integer) 3))) - ((real_array_get1(_e1_1, 1, ((modelica_integer) 3))) * (real_array_get1(_e2_1a, 1, ((modelica_integer) 2))))) * (real_array_get1(_e3_1, 1, ((modelica_integer) 1))) + ((real_array_get1(_e1_1, 1, ((modelica_integer) 3))) * (real_array_get1(_e2_1a, 1, ((modelica_integer) 1))) - ((real_array_get1(_e1_1, 1, ((modelica_integer) 1))) * (real_array_get1(_e2_1a, 1, ((modelica_integer) 3))))) * (real_array_get1(_e3_1, 1, ((modelica_integer) 2))) + ((real_array_get1(_e1_1, 1, ((modelica_integer) 1))) * (real_array_get1(_e2_1a, 1, ((modelica_integer) 2))) - ((real_array_get1(_e1_1, 1, ((modelica_integer) 2))) * (real_array_get1(_e2_1a, 1, ((modelica_integer) 1))))) * (real_array_get1(_e3_1, 1, ((modelica_integer) 3)));

  if(((fabs(_A) <= 1e-12) && (fabs(_B) <= 1e-12)))
  {
    real_array_get(_angles, 1, ((modelica_integer) 1)) = _guessAngle1;
  }
  else
  {
    _angle_1a = atan2(_A, (-_B));

    _angle_1b = atan2((-_A), _B);

    real_array_get(_angles, 1, ((modelica_integer) 1)) = ((fabs(_angle_1a - _guessAngle1) <= fabs(_angle_1b - _guessAngle1))?_angle_1a:_angle_1b);
  }

  array_alloc_scalar_real_array(&tmp15, 3, (modelica_real)real_array_get1(_e1_1, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_e1_1, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_e1_1, 1, ((modelica_integer) 3)));
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation(threadData, tmp15, real_array_get1(_angles, 1, ((modelica_integer) 1))), _T_1a);

  array_alloc_scalar_real_array(&tmp16, 3, (modelica_real)real_array_get1(_e2_1a, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_e2_1a, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_e2_1a, 1, ((modelica_integer) 3)));
  /* -- start: matrix[3,3] -- */
  alloc_real_array(&tmp17, 2, (_index_t)3, (_index_t)3);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 1), ((modelica_integer) 1)), 0, 0, &tmp17);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 1), ((modelica_integer) 2)), 0, 1, &tmp17);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 1), ((modelica_integer) 3)), 0, 2, &tmp17);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 2), ((modelica_integer) 1)), 1, 0, &tmp17);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 2), ((modelica_integer) 2)), 1, 1, &tmp17);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 2), ((modelica_integer) 3)), 1, 2, &tmp17);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 3), ((modelica_integer) 1)), 2, 0, &tmp17);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 3), ((modelica_integer) 2)), 2, 1, &tmp17);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 3), ((modelica_integer) 3)), 2, 2, &tmp17);
  /* -- end: matrix[3,3] -- */
  array_alloc_scalar_real_array(&tmp18, 3, (modelica_real)real_array_get1(_e3_1, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_e3_1, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_e3_1, 1, ((modelica_integer) 3)));
  array_alloc_scalar_real_array(&tmp19, 3, (modelica_real)real_array_get1(_e3_2, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_e3_2, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_e3_2, 1, ((modelica_integer) 3)));
  real_array_get(_angles, 1, ((modelica_integer) 2)) = omc_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData, tmp16, omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData, tmp17, tmp18), tmp19);

  array_alloc_scalar_real_array(&tmp20, 3, (modelica_real)real_array_get1(_e3_2, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_e3_2, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_e3_2, 1, ((modelica_integer) 3)));
  array_alloc_scalar_real_array(&tmp21, 3, (modelica_real)real_array_get1(_e2_1a, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_e2_1a, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_e2_1a, 1, ((modelica_integer) 3)));
  /* -- start: matrix[3,3] -- */
  alloc_real_array(&tmp22, 2, (_index_t)3, (_index_t)3);
  put_real_matrix_element(real_array_get2(_R._T, 2, ((modelica_integer) 1), ((modelica_integer) 1)), 0, 0, &tmp22);
  put_real_matrix_element(real_array_get2(_R._T, 2, ((modelica_integer) 1), ((modelica_integer) 2)), 0, 1, &tmp22);
  put_real_matrix_element(real_array_get2(_R._T, 2, ((modelica_integer) 1), ((modelica_integer) 3)), 0, 2, &tmp22);
  put_real_matrix_element(real_array_get2(_R._T, 2, ((modelica_integer) 2), ((modelica_integer) 1)), 1, 0, &tmp22);
  put_real_matrix_element(real_array_get2(_R._T, 2, ((modelica_integer) 2), ((modelica_integer) 2)), 1, 1, &tmp22);
  put_real_matrix_element(real_array_get2(_R._T, 2, ((modelica_integer) 2), ((modelica_integer) 3)), 1, 2, &tmp22);
  put_real_matrix_element(real_array_get2(_R._T, 2, ((modelica_integer) 3), ((modelica_integer) 1)), 2, 0, &tmp22);
  put_real_matrix_element(real_array_get2(_R._T, 2, ((modelica_integer) 3), ((modelica_integer) 2)), 2, 1, &tmp22);
  put_real_matrix_element(real_array_get2(_R._T, 2, ((modelica_integer) 3), ((modelica_integer) 3)), 2, 2, &tmp22);
  /* -- end: matrix[3,3] -- */
  /* -- start: matrix[3,3] -- */
  alloc_real_array(&tmp23, 2, (_index_t)3, (_index_t)3);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 1), ((modelica_integer) 1)), 0, 0, &tmp23);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 1), ((modelica_integer) 2)), 0, 1, &tmp23);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 1), ((modelica_integer) 3)), 0, 2, &tmp23);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 2), ((modelica_integer) 1)), 1, 0, &tmp23);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 2), ((modelica_integer) 2)), 1, 1, &tmp23);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 2), ((modelica_integer) 3)), 1, 2, &tmp23);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 3), ((modelica_integer) 1)), 2, 0, &tmp23);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 3), ((modelica_integer) 2)), 2, 1, &tmp23);
  put_real_matrix_element(real_array_get2(_T_1a, 2, ((modelica_integer) 3), ((modelica_integer) 3)), 2, 2, &tmp23);
  /* -- end: matrix[3,3] -- */
  array_alloc_scalar_real_array(&tmp24, 3, (modelica_real)real_array_get1(_e2_1a, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_e2_1a, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_e2_1a, 1, ((modelica_integer) 3)));
  real_array_get(_angles, 1, ((modelica_integer) 3)) = omc_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData, tmp20, tmp21, omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData, tmp22, omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1(threadData, tmp23, tmp24)));
  _return: OMC_LABEL_UNUSED
  return _angles;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData_t *threadData, modelica_metatype _R, modelica_metatype _sequence, modelica_metatype _guessAngle1)
{
  Modelica_Mechanics_MultiBody_Frames_Orientation tmp1;
  modelica_real tmp2;
  real_array _angles;
  modelica_metatype out_angles;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_R), 2)));
  tmp1._T = *((base_array_t*)tmpMeta[0]);
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_R), 3)));
  tmp1._w = *((base_array_t*)tmpMeta[1]);tmp2 = mmc_unbox_real(_guessAngle1);
  _angles = omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData, tmp1, *((base_array_t*)_sequence), tmp2);
  out_angles = mmc_mk_modelica_array(_angles);
  return out_angles;
}

DLLExport
modelica_real omc_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData_t *threadData, real_array _e, real_array _v1, real_array _v2)
{
  modelica_real _angle;
  _tailrecursive: OMC_LABEL_UNUSED
  // _angle has no default value.
  _angle = atan2(((real_array_get1(_e, 1, ((modelica_integer) 1))) * (real_array_get1(_v1, 1, ((modelica_integer) 3))) - ((real_array_get1(_e, 1, ((modelica_integer) 3))) * (real_array_get1(_v1, 1, ((modelica_integer) 1))))) * (real_array_get1(_v2, 1, ((modelica_integer) 2))) - (((real_array_get1(_e, 1, ((modelica_integer) 1))) * (real_array_get1(_v1, 1, ((modelica_integer) 2))) - ((real_array_get1(_e, 1, ((modelica_integer) 2))) * (real_array_get1(_v1, 1, ((modelica_integer) 1))))) * (real_array_get1(_v2, 1, ((modelica_integer) 3)))) - (((real_array_get1(_e, 1, ((modelica_integer) 2))) * (real_array_get1(_v1, 1, ((modelica_integer) 3))) - ((real_array_get1(_e, 1, ((modelica_integer) 3))) * (real_array_get1(_v1, 1, ((modelica_integer) 2))))) * (real_array_get1(_v2, 1, ((modelica_integer) 1)))), (real_array_get1(_v1, 1, ((modelica_integer) 1))) * (real_array_get1(_v2, 1, ((modelica_integer) 1))) + (real_array_get1(_v1, 1, ((modelica_integer) 2))) * (real_array_get1(_v2, 1, ((modelica_integer) 2))) + (real_array_get1(_v1, 1, ((modelica_integer) 3))) * (real_array_get1(_v2, 1, ((modelica_integer) 3))) + (((-real_array_get1(_e, 1, ((modelica_integer) 2)))) * (real_array_get1(_v1, 1, ((modelica_integer) 2))) - ((real_array_get1(_e, 1, ((modelica_integer) 3))) * (real_array_get1(_v1, 1, ((modelica_integer) 3)))) - ((real_array_get1(_e, 1, ((modelica_integer) 1))) * (real_array_get1(_v1, 1, ((modelica_integer) 1))))) * ((real_array_get1(_e, 1, ((modelica_integer) 1))) * (real_array_get1(_v2, 1, ((modelica_integer) 1))) + (real_array_get1(_e, 1, ((modelica_integer) 2))) * (real_array_get1(_v2, 1, ((modelica_integer) 2))) + (real_array_get1(_e, 1, ((modelica_integer) 3))) * (real_array_get1(_v2, 1, ((modelica_integer) 3)))));
  _return: OMC_LABEL_UNUSED
  return _angle;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData_t *threadData, modelica_metatype _e, modelica_metatype _v1, modelica_metatype _v2)
{
  modelica_real _angle;
  modelica_metatype out_angle;
  _angle = omc_Modelica_Mechanics_MultiBody_Frames_planarRotationAngle(threadData, *((base_array_t*)_e), *((base_array_t*)_v1), *((base_array_t*)_v2));
  out_angle = mmc_mk_rcon(_angle);
  return out_angle;
}

DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_resolve2(threadData_t *threadData, Modelica_Mechanics_MultiBody_Frames_Orientation _R, real_array _v1)
{
  real_array _v2;
  real_array tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_v2), 1, (_index_t)3); // _v2 has no default value.
  array_alloc_scalar_real_array(&tmp1, 3, (modelica_real)(real_array_get2(_R._T, 2, ((modelica_integer) 1), ((modelica_integer) 1))) * (real_array_get1(_v1, 1, ((modelica_integer) 1))) + (real_array_get2(_R._T, 2, ((modelica_integer) 1), ((modelica_integer) 2))) * (real_array_get1(_v1, 1, ((modelica_integer) 2))) + (real_array_get2(_R._T, 2, ((modelica_integer) 1), ((modelica_integer) 3))) * (real_array_get1(_v1, 1, ((modelica_integer) 3))), (modelica_real)(real_array_get2(_R._T, 2, ((modelica_integer) 2), ((modelica_integer) 1))) * (real_array_get1(_v1, 1, ((modelica_integer) 1))) + (real_array_get2(_R._T, 2, ((modelica_integer) 2), ((modelica_integer) 2))) * (real_array_get1(_v1, 1, ((modelica_integer) 2))) + (real_array_get2(_R._T, 2, ((modelica_integer) 2), ((modelica_integer) 3))) * (real_array_get1(_v1, 1, ((modelica_integer) 3))), (modelica_real)(real_array_get2(_R._T, 2, ((modelica_integer) 3), ((modelica_integer) 1))) * (real_array_get1(_v1, 1, ((modelica_integer) 1))) + (real_array_get2(_R._T, 2, ((modelica_integer) 3), ((modelica_integer) 2))) * (real_array_get1(_v1, 1, ((modelica_integer) 2))) + (real_array_get2(_R._T, 2, ((modelica_integer) 3), ((modelica_integer) 3))) * (real_array_get1(_v1, 1, ((modelica_integer) 3))));
  real_array_copy_data(tmp1, _v2);
  _return: OMC_LABEL_UNUSED
  return _v2;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_resolve2(threadData_t *threadData, modelica_metatype _R, modelica_metatype _v1)
{
  Modelica_Mechanics_MultiBody_Frames_Orientation tmp1;
  real_array _v2;
  modelica_metatype out_v2;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_R), 2)));
  tmp1._T = *((base_array_t*)tmpMeta[0]);
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_R), 3)));
  tmp1._w = *((base_array_t*)tmpMeta[1]);
  _v2 = omc_Modelica_Mechanics_MultiBody_Frames_resolve2(threadData, tmp1, *((base_array_t*)_v1));
  out_v2 = mmc_mk_modelica_array(_v2);
  return out_v2;
}

DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData_t *threadData, real_array _n_x, real_array _n_y)
{
  real_array _T;
  real_array _e_x;
  real_array tmp1;
  real_array tmp2;
  modelica_boolean tmp3;
  real_array tmp4;
  real_array _n_z_aux;
  real_array tmp5;
  real_array _n_y_aux;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  real_array tmp9;
  modelica_boolean tmp10;
  real_array tmp11;
  modelica_boolean tmp12;
  real_array tmp13;
  real_array _e_z_aux;
  real_array tmp14;
  real_array _e_z;
  real_array tmp15;
  real_array tmp16;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_T), 2, (_index_t)3, (_index_t)3); // _T has no default value.
  alloc_real_array(&(_e_x), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp1, 3, (modelica_real)real_array_get1(_n_x, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_n_x, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_n_x, 1, ((modelica_integer) 3)));
  tmp3 = (modelica_boolean)(omc_Modelica_Math_Vectors_length(threadData, tmp1) < 1e-10);
  if(tmp3)
  {
    tmp4 = _OMC_LIT11;
  }
  else
  {
    array_alloc_scalar_real_array(&tmp2, 3, (modelica_real)real_array_get1(_n_x, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_n_x, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_n_x, 1, ((modelica_integer) 3)));
    tmp4 = omc_Modelica_Math_Vectors_normalize(threadData, tmp2, 1e-13);
  }
  real_array_copy_data(tmp4, _e_x);
  
  alloc_real_array(&(_n_z_aux), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp5, 3, (modelica_real)(real_array_get1(_e_x, 1, ((modelica_integer) 2))) * (real_array_get1(_n_y, 1, ((modelica_integer) 3))) - ((real_array_get1(_e_x, 1, ((modelica_integer) 3))) * (real_array_get1(_n_y, 1, ((modelica_integer) 2)))), (modelica_real)(real_array_get1(_e_x, 1, ((modelica_integer) 3))) * (real_array_get1(_n_y, 1, ((modelica_integer) 1))) - ((real_array_get1(_e_x, 1, ((modelica_integer) 1))) * (real_array_get1(_n_y, 1, ((modelica_integer) 3)))), (modelica_real)(real_array_get1(_e_x, 1, ((modelica_integer) 1))) * (real_array_get1(_n_y, 1, ((modelica_integer) 2))) - ((real_array_get1(_e_x, 1, ((modelica_integer) 2))) * (real_array_get1(_n_y, 1, ((modelica_integer) 1)))));
  real_array_copy_data(tmp5, _n_z_aux);
  
  alloc_real_array(&(_n_y_aux), 1, (_index_t)3);
  tmp6 = real_array_get1(_n_z_aux, 1, ((modelica_integer) 1));
  tmp7 = real_array_get1(_n_z_aux, 1, ((modelica_integer) 2));
  tmp8 = real_array_get1(_n_z_aux, 1, ((modelica_integer) 3));
  tmp12 = (modelica_boolean)((tmp6 * tmp6) + (tmp7 * tmp7) + (tmp8 * tmp8) > 1e-06);
  if(tmp12)
  {
    array_alloc_scalar_real_array(&tmp9, 3, (modelica_real)real_array_get1(_n_y, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_n_y, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_n_y, 1, ((modelica_integer) 3)));
    tmp13 = tmp9;
  }
  else
  {
    tmp10 = (modelica_boolean)(fabs(real_array_get1(_e_x, 1, ((modelica_integer) 1))) > 1e-06);
    if(tmp10)
    {
      tmp11 = _OMC_LIT12;
    }
    else
    {
      tmp11 = _OMC_LIT11;
    }
    tmp13 = tmp11;
  }
  real_array_copy_data(tmp13, _n_y_aux);
  
  alloc_real_array(&(_e_z_aux), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp14, 3, (modelica_real)(real_array_get1(_e_x, 1, ((modelica_integer) 2))) * (real_array_get1(_n_y_aux, 1, ((modelica_integer) 3))) - ((real_array_get1(_e_x, 1, ((modelica_integer) 3))) * (real_array_get1(_n_y_aux, 1, ((modelica_integer) 2)))), (modelica_real)(real_array_get1(_e_x, 1, ((modelica_integer) 3))) * (real_array_get1(_n_y_aux, 1, ((modelica_integer) 1))) - ((real_array_get1(_e_x, 1, ((modelica_integer) 1))) * (real_array_get1(_n_y_aux, 1, ((modelica_integer) 3)))), (modelica_real)(real_array_get1(_e_x, 1, ((modelica_integer) 1))) * (real_array_get1(_n_y_aux, 1, ((modelica_integer) 2))) - ((real_array_get1(_e_x, 1, ((modelica_integer) 2))) * (real_array_get1(_n_y_aux, 1, ((modelica_integer) 1)))));
  real_array_copy_data(tmp14, _e_z_aux);
  
  alloc_real_array(&(_e_z), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp15, 3, (modelica_real)real_array_get1(_e_z_aux, 1, ((modelica_integer) 1)), (modelica_real)real_array_get1(_e_z_aux, 1, ((modelica_integer) 2)), (modelica_real)real_array_get1(_e_z_aux, 1, ((modelica_integer) 3)));
  real_array_copy_data(omc_Modelica_Math_Vectors_normalize(threadData, tmp15, 1e-13), _e_z);
  
  /* -- start: matrix[3,3] -- */
  alloc_real_array(&tmp16, 2, (_index_t)3, (_index_t)3);
  put_real_matrix_element(real_array_get1(_e_x, 1, ((modelica_integer) 1)), 0, 0, &tmp16);
  put_real_matrix_element(real_array_get1(_e_x, 1, ((modelica_integer) 2)), 0, 1, &tmp16);
  put_real_matrix_element(real_array_get1(_e_x, 1, ((modelica_integer) 3)), 0, 2, &tmp16);
  put_real_matrix_element((real_array_get1(_e_z, 1, ((modelica_integer) 2))) * (real_array_get1(_e_x, 1, ((modelica_integer) 3))) - ((real_array_get1(_e_z, 1, ((modelica_integer) 3))) * (real_array_get1(_e_x, 1, ((modelica_integer) 2)))), 1, 0, &tmp16);
  put_real_matrix_element((real_array_get1(_e_z, 1, ((modelica_integer) 3))) * (real_array_get1(_e_x, 1, ((modelica_integer) 1))) - ((real_array_get1(_e_z, 1, ((modelica_integer) 1))) * (real_array_get1(_e_x, 1, ((modelica_integer) 3)))), 1, 1, &tmp16);
  put_real_matrix_element((real_array_get1(_e_z, 1, ((modelica_integer) 1))) * (real_array_get1(_e_x, 1, ((modelica_integer) 2))) - ((real_array_get1(_e_z, 1, ((modelica_integer) 2))) * (real_array_get1(_e_x, 1, ((modelica_integer) 1)))), 1, 2, &tmp16);
  put_real_matrix_element(real_array_get1(_e_z, 1, ((modelica_integer) 1)), 2, 0, &tmp16);
  put_real_matrix_element(real_array_get1(_e_z, 1, ((modelica_integer) 2)), 2, 1, &tmp16);
  put_real_matrix_element(real_array_get1(_e_z, 1, ((modelica_integer) 3)), 2, 2, &tmp16);
  /* -- end: matrix[3,3] -- */
  real_array_copy_data(tmp16, _T);
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData_t *threadData, modelica_metatype _n_x, modelica_metatype _n_y)
{
  real_array _T;
  modelica_metatype out_T;
  _T = omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, *((base_array_t*)_n_x), *((base_array_t*)_n_y));
  out_T = mmc_mk_modelica_array(_T);
  return out_T;
}

DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation(threadData_t *threadData, real_array _e, modelica_real _angle)
{
  real_array _T;
  real_array tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_T), 2, (_index_t)3, (_index_t)3); // _T has no default value.
  tmp2 = real_array_get1(_e, 1, ((modelica_integer) 1));
  tmp3 = real_array_get1(_e, 1, ((modelica_integer) 1));
  tmp4 = real_array_get1(_e, 1, ((modelica_integer) 2));
  tmp5 = real_array_get1(_e, 1, ((modelica_integer) 2));
  tmp6 = real_array_get1(_e, 1, ((modelica_integer) 3));
  tmp7 = real_array_get1(_e, 1, ((modelica_integer) 3));
  /* -- start: matrix[3,3] -- */
  alloc_real_array(&tmp1, 2, (_index_t)3, (_index_t)3);
  put_real_matrix_element((tmp2 * tmp2) + (1.0 - ((tmp3 * tmp3))) * (cos(_angle)), 0, 0, &tmp1);
  put_real_matrix_element((real_array_get1(_e, 1, ((modelica_integer) 1)) - ((real_array_get1(_e, 1, ((modelica_integer) 1))) * (cos(_angle)))) * (real_array_get1(_e, 1, ((modelica_integer) 2))) + (real_array_get1(_e, 1, ((modelica_integer) 3))) * (sin(_angle)), 0, 1, &tmp1);
  put_real_matrix_element((real_array_get1(_e, 1, ((modelica_integer) 1)) - ((real_array_get1(_e, 1, ((modelica_integer) 1))) * (cos(_angle)))) * (real_array_get1(_e, 1, ((modelica_integer) 3))) - ((real_array_get1(_e, 1, ((modelica_integer) 2))) * (sin(_angle))), 0, 2, &tmp1);
  put_real_matrix_element((real_array_get1(_e, 1, ((modelica_integer) 2)) - ((real_array_get1(_e, 1, ((modelica_integer) 2))) * (cos(_angle)))) * (real_array_get1(_e, 1, ((modelica_integer) 1))) - ((real_array_get1(_e, 1, ((modelica_integer) 3))) * (sin(_angle))), 1, 0, &tmp1);
  put_real_matrix_element((tmp4 * tmp4) + (1.0 - ((tmp5 * tmp5))) * (cos(_angle)), 1, 1, &tmp1);
  put_real_matrix_element((real_array_get1(_e, 1, ((modelica_integer) 2)) - ((real_array_get1(_e, 1, ((modelica_integer) 2))) * (cos(_angle)))) * (real_array_get1(_e, 1, ((modelica_integer) 3))) + (real_array_get1(_e, 1, ((modelica_integer) 1))) * (sin(_angle)), 1, 2, &tmp1);
  put_real_matrix_element((real_array_get1(_e, 1, ((modelica_integer) 3)) - ((real_array_get1(_e, 1, ((modelica_integer) 3))) * (cos(_angle)))) * (real_array_get1(_e, 1, ((modelica_integer) 1))) + (real_array_get1(_e, 1, ((modelica_integer) 2))) * (sin(_angle)), 2, 0, &tmp1);
  put_real_matrix_element((real_array_get1(_e, 1, ((modelica_integer) 3)) - ((real_array_get1(_e, 1, ((modelica_integer) 3))) * (cos(_angle)))) * (real_array_get1(_e, 1, ((modelica_integer) 2))) - ((real_array_get1(_e, 1, ((modelica_integer) 1))) * (sin(_angle))), 2, 1, &tmp1);
  put_real_matrix_element((tmp6 * tmp6) + (1.0 - ((tmp7 * tmp7))) * (cos(_angle)), 2, 2, &tmp1);
  /* -- end: matrix[3,3] -- */
  real_array_copy_data(tmp1, _T);
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation(threadData_t *threadData, modelica_metatype _e, modelica_metatype _angle)
{
  modelica_real tmp1;
  real_array _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_angle);
  _T = omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_planarRotation(threadData, *((base_array_t*)_e), tmp1);
  out_T = mmc_mk_modelica_array(_T);
  return out_T;
}

DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1(threadData_t *threadData, real_array _T, real_array _v2)
{
  real_array _v1;
  real_array tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_v1), 1, (_index_t)3); // _v1 has no default value.
  array_alloc_scalar_real_array(&tmp1, 3, (modelica_real)(real_array_get2(_T, 2, ((modelica_integer) 1), ((modelica_integer) 1))) * (real_array_get1(_v2, 1, ((modelica_integer) 1))) + (real_array_get2(_T, 2, ((modelica_integer) 2), ((modelica_integer) 1))) * (real_array_get1(_v2, 1, ((modelica_integer) 2))) + (real_array_get2(_T, 2, ((modelica_integer) 3), ((modelica_integer) 1))) * (real_array_get1(_v2, 1, ((modelica_integer) 3))), (modelica_real)(real_array_get2(_T, 2, ((modelica_integer) 1), ((modelica_integer) 2))) * (real_array_get1(_v2, 1, ((modelica_integer) 1))) + (real_array_get2(_T, 2, ((modelica_integer) 2), ((modelica_integer) 2))) * (real_array_get1(_v2, 1, ((modelica_integer) 2))) + (real_array_get2(_T, 2, ((modelica_integer) 3), ((modelica_integer) 2))) * (real_array_get1(_v2, 1, ((modelica_integer) 3))), (modelica_real)(real_array_get2(_T, 2, ((modelica_integer) 1), ((modelica_integer) 3))) * (real_array_get1(_v2, 1, ((modelica_integer) 1))) + (real_array_get2(_T, 2, ((modelica_integer) 2), ((modelica_integer) 3))) * (real_array_get1(_v2, 1, ((modelica_integer) 2))) + (real_array_get2(_T, 2, ((modelica_integer) 3), ((modelica_integer) 3))) * (real_array_get1(_v2, 1, ((modelica_integer) 3))));
  real_array_copy_data(tmp1, _v1);
  _return: OMC_LABEL_UNUSED
  return _v1;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1(threadData_t *threadData, modelica_metatype _T, modelica_metatype _v2)
{
  real_array _v1;
  modelica_metatype out_v1;
  _v1 = omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve1(threadData, *((base_array_t*)_T), *((base_array_t*)_v2));
  out_v1 = mmc_mk_modelica_array(_v1);
  return out_v1;
}

DLLExport
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData_t *threadData, real_array _T, real_array _v1)
{
  real_array _v2;
  real_array tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_v2), 1, (_index_t)3); // _v2 has no default value.
  array_alloc_scalar_real_array(&tmp1, 3, (modelica_real)(real_array_get2(_T, 2, ((modelica_integer) 1), ((modelica_integer) 1))) * (real_array_get1(_v1, 1, ((modelica_integer) 1))) + (real_array_get2(_T, 2, ((modelica_integer) 1), ((modelica_integer) 2))) * (real_array_get1(_v1, 1, ((modelica_integer) 2))) + (real_array_get2(_T, 2, ((modelica_integer) 1), ((modelica_integer) 3))) * (real_array_get1(_v1, 1, ((modelica_integer) 3))), (modelica_real)(real_array_get2(_T, 2, ((modelica_integer) 2), ((modelica_integer) 1))) * (real_array_get1(_v1, 1, ((modelica_integer) 1))) + (real_array_get2(_T, 2, ((modelica_integer) 2), ((modelica_integer) 2))) * (real_array_get1(_v1, 1, ((modelica_integer) 2))) + (real_array_get2(_T, 2, ((modelica_integer) 2), ((modelica_integer) 3))) * (real_array_get1(_v1, 1, ((modelica_integer) 3))), (modelica_real)(real_array_get2(_T, 2, ((modelica_integer) 3), ((modelica_integer) 1))) * (real_array_get1(_v1, 1, ((modelica_integer) 1))) + (real_array_get2(_T, 2, ((modelica_integer) 3), ((modelica_integer) 2))) * (real_array_get1(_v1, 1, ((modelica_integer) 2))) + (real_array_get2(_T, 2, ((modelica_integer) 3), ((modelica_integer) 3))) * (real_array_get1(_v1, 1, ((modelica_integer) 3))));
  real_array_copy_data(tmp1, _v2);
  _return: OMC_LABEL_UNUSED
  return _v2;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData_t *threadData, modelica_metatype _T, modelica_metatype _v1)
{
  real_array _v2;
  modelica_metatype out_v2;
  _v2 = omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_resolve2(threadData, *((base_array_t*)_T), *((base_array_t*)_v1));
  out_v2 = mmc_mk_modelica_array(_v2);
  return out_v2;
}

#ifdef __cplusplus
}
#endif
