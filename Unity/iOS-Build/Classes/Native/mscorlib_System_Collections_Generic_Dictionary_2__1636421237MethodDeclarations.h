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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
struct Transform_1_t_1636421237_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamPro1755741863.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m_29381347_0_gshared (Transform_1_t_1636421237_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m_29381347_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t_1636421237_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m_29381347_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Transform_1_Invoke_m886732795_0_gshared (Transform_1_t_1636421237_0 * __this, Object_t * ___key, ProfileData_t1755741863_0  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m886732795_0(__this, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Transform_1_t_1636421237_0 *, Object_t *, ProfileData_t1755741863_0 , const MethodInfo*))Transform_1_Invoke_m886732795_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_526838106_0_gshared (Transform_1_t_1636421237_0 * __this, Object_t * ___key, ProfileData_t1755741863_0  ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_526838106_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t_1636421237_0 *, Object_t *, ProfileData_t1755741863_0 , AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_526838106_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t_1842557272_0  Transform_1_EndInvoke_m1218244015_0_gshared (Transform_1_t_1636421237_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1218244015_0(__this, ___result, method) ((  DictionaryEntry_t_1842557272_0  (*) (Transform_1_t_1636421237_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1218244015_0_gshared)(__this, ___result, method)
