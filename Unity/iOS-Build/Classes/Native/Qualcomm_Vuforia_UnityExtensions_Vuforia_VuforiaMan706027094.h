﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t979194516_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t_661553739_0;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t_1740383825_0;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t_332227092_0;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t_1575672693_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaMan525714198.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAb_883970177.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaMa1239377053.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaMa1272136363.h"

// Vuforia.VuforiaManagerImpl
struct  VuforiaManagerImpl_t706027094_0  : public VuforiaManager_t525714198_0
{
	// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::mWorldCenterMode
	int32_t ___mWorldCenterMode_1;
	// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::mWorldCenter
	Object_t * ___mWorldCenter_2;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mARCameraTransform
	Transform_t1584899523_0 * ___mARCameraTransform_3;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mCentralAnchorPoint
	Transform_t1584899523_0 * ___mCentralAnchorPoint_4;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mParentAnchorPoint
	Transform_t1584899523_0 * ___mParentAnchorPoint_5;
	// Vuforia.VuforiaManagerImpl/TrackableResultData[] Vuforia.VuforiaManagerImpl::mTrackableResultDataArray
	TrackableResultDataU5BU5D_t_661553739_0* ___mTrackableResultDataArray_6;
	// Vuforia.VuforiaManagerImpl/WordData[] Vuforia.VuforiaManagerImpl::mWordDataArray
	WordDataU5BU5D_t_1740383825_0* ___mWordDataArray_7;
	// Vuforia.VuforiaManagerImpl/WordResultData[] Vuforia.VuforiaManagerImpl::mWordResultDataArray
	WordResultDataU5BU5D_t_332227092_0* ___mWordResultDataArray_8;
	// System.Collections.Generic.LinkedList`1<System.Int32> Vuforia.VuforiaManagerImpl::mTrackableFoundQueue
	LinkedList_1_t_1575672693_0 * ___mTrackableFoundQueue_9;
	// System.IntPtr Vuforia.VuforiaManagerImpl::mImageHeaderData
	IntPtr_t ___mImageHeaderData_10;
	// System.Int32 Vuforia.VuforiaManagerImpl::mNumImageHeaders
	int32_t ___mNumImageHeaders_11;
	// System.Int32 Vuforia.VuforiaManagerImpl::mInjectedFrameIdx
	int32_t ___mInjectedFrameIdx_12;
	// System.IntPtr Vuforia.VuforiaManagerImpl::mLastProcessedFrameStatePtr
	IntPtr_t ___mLastProcessedFrameStatePtr_13;
	// System.Boolean Vuforia.VuforiaManagerImpl::mInitialized
	bool ___mInitialized_14;
	// System.Boolean Vuforia.VuforiaManagerImpl::mPaused
	bool ___mPaused_15;
	// Vuforia.VuforiaManagerImpl/FrameState Vuforia.VuforiaManagerImpl::mFrameState
	FrameState_t1239377053_0  ___mFrameState_16;
	// Vuforia.VuforiaManagerImpl/AutoRotationState Vuforia.VuforiaManagerImpl::mAutoRotationState
	AutoRotationState_t1272136363_0  ___mAutoRotationState_17;
	// System.Boolean Vuforia.VuforiaManagerImpl::mVideoBackgroundNeedsRedrawing
	bool ___mVideoBackgroundNeedsRedrawing_18;
	// System.Int32 Vuforia.VuforiaManagerImpl::mDiscardStatesForRendering
	int32_t ___mDiscardStatesForRendering_19;
	// System.Boolean Vuforia.VuforiaManagerImpl::<VideoBackgroundTextureSet>k__BackingField
	bool ___U3CVideoBackgroundTextureSetU3Ek__BackingField_20;
};
