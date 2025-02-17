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

// Vuforia.WordResultImpl
struct WordResultImpl_t725552274_0;
// Vuforia.Word
struct Word_t_222253355_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBo477370392.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableB629202430.h"

// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C"  void WordResultImpl__ctor_m_372995762_0 (WordResultImpl_t725552274_0 * __this, Object_t * ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Word Vuforia.WordResultImpl::get_Word()
extern "C"  Object_t * WordResultImpl_get_Word_m510615698_0 (WordResultImpl_t725552274_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.WordResultImpl::get_Position()
extern "C"  Vector3_t_725341337_0  WordResultImpl_get_Position_m67488428_0 (WordResultImpl_t725552274_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.WordResultImpl::get_Orientation()
extern "C"  Quaternion_t1989680039_0  WordResultImpl_get_Orientation_m_1949935991_0 (WordResultImpl_t725552274_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::get_Obb()
extern "C"  OrientedBoundingBox_t477370392_0  WordResultImpl_get_Obb_m1530584780_0 (WordResultImpl_t725552274_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::get_CurrentStatus()
extern "C"  int32_t WordResultImpl_get_CurrentStatus_m1786369934_0 (WordResultImpl_t725552274_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void WordResultImpl_SetPose_m_1610817971_0 (WordResultImpl_t725552274_0 * __this, Vector3_t_725341337_0  ___position, Quaternion_t1989680039_0  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C"  void WordResultImpl_SetObb_m1243315950_0 (WordResultImpl_t725552274_0 * __this, OrientedBoundingBox_t477370392_0  ___obb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C"  void WordResultImpl_SetStatus_m1247376511_0 (WordResultImpl_t725552274_0 * __this, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
