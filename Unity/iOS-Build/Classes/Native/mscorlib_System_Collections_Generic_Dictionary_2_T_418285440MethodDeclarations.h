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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>
struct Transform_1_t_418285440_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair__2018428087.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIX1632791727.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1972798930_0_gshared (Transform_1_t_418285440_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1972798930_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t_418285440_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1972798930_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t_2018428087_0  Transform_1_Invoke_m_335774106_0_gshared (Transform_1_t_418285440_0 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m_335774106_0(__this, ___key, ___value, method) ((  KeyValuePair_2_t_2018428087_0  (*) (Transform_1_t_418285440_0 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m_335774106_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_1579606383_0_gshared (Transform_1_t_418285440_0 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_1579606383_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t_418285440_0 *, int32_t, Object_t *, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_1579606383_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t_2018428087_0  Transform_1_EndInvoke_m_1990506908_0_gshared (Transform_1_t_418285440_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m_1990506908_0(__this, ___result, method) ((  KeyValuePair_2_t_2018428087_0  (*) (Transform_1_t_418285440_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m_1990506908_0_gshared)(__this, ___result, method)
