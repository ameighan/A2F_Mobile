﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m1100844011_0 (Quaternion_t1989680039_0 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t1989680039_0  Quaternion_get_identity_m1743882806_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t1989680039_0  Quaternion_AngleAxis_m644124247_0 (Object_t * __this /* static, unused */, float ___angle, Vector3_t_725341337_0  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C"  Quaternion_t1989680039_0  Quaternion_INTERNAL_CALL_AngleAxis_m_568263306_0 (Object_t * __this /* static, unused */, float ___angle, Vector3_t_725341337_0 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
extern "C"  void Quaternion_ToAngleAxis_m791330738_0 (Quaternion_t1989680039_0 * __this, float* ___angle, Vector3_t_725341337_0 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t1989680039_0  Quaternion_LookRotation_m_1425641248_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___forward, Vector3_t_725341337_0  ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  Quaternion_t1989680039_0  Quaternion_INTERNAL_CALL_LookRotation_m533355579_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0 * ___forward, Vector3_t_725341337_0 * ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t1989680039_0  Quaternion_Inverse_m_752451730_0 (Object_t * __this /* static, unused */, Quaternion_t1989680039_0  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C"  Quaternion_t1989680039_0  Quaternion_INTERNAL_CALL_Inverse_m_194155683_0 (Object_t * __this /* static, unused */, Quaternion_t1989680039_0 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m1793285860_0 (Quaternion_t1989680039_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
extern "C"  void Quaternion_Internal_ToAxisAngleRad_m_880955258_0 (Object_t * __this /* static, unused */, Quaternion_t1989680039_0  ___q, Vector3_t_725341337_0 * ___axis, float* ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToAxisAngleRad(UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_ToAxisAngleRad_m_1934620383_0 (Object_t * __this /* static, unused */, Quaternion_t1989680039_0 * ___q, Vector3_t_725341337_0 * ___axis, float* ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m_471709058_0 (Quaternion_t1989680039_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m_451557350_0 (Quaternion_t1989680039_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t1989680039_0  Quaternion_op_Multiply_m_1217485935_0 (Object_t * __this /* static, unused */, Quaternion_t1989680039_0  ___lhs, Quaternion_t1989680039_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Quaternion_op_Multiply_m_523678317_0 (Object_t * __this /* static, unused */, Quaternion_t1989680039_0  ___rotation, Vector3_t_725341337_0  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
