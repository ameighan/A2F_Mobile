﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t814710830_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_MonoCamera193724483.h"
#include "UnityEngine_UnityEngine_Vector4_725341336.h"

// Vuforia.StereoCameraConfiguration
struct  StereoCameraConfiguration_t_767371314_0  : public MonoCameraConfiguration_t193724483_0
{
	// UnityEngine.Camera Vuforia.StereoCameraConfiguration::mSecondaryCamera
	Camera_t814710830_0 * ___mSecondaryCamera_17;
	// System.Boolean Vuforia.StereoCameraConfiguration::mSkewFrustum
	bool ___mSkewFrustum_18;
	// System.Boolean Vuforia.StereoCameraConfiguration::mNeedToCheckStereo
	bool ___mNeedToCheckStereo_19;
	// System.Single Vuforia.StereoCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_20;
	// System.Single Vuforia.StereoCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_21;
	// System.Single Vuforia.StereoCameraConfiguration::mLastAppliedVirtualFoV
	float ___mLastAppliedVirtualFoV_22;
	// System.Single Vuforia.StereoCameraConfiguration::mNewNearClipPlane
	float ___mNewNearClipPlane_23;
	// System.Single Vuforia.StereoCameraConfiguration::mNewFarClipPlane
	float ___mNewFarClipPlane_24;
	// System.Single Vuforia.StereoCameraConfiguration::mNewVirtualFoV
	float ___mNewVirtualFoV_25;
	// System.Single Vuforia.StereoCameraConfiguration::mCameraOffset
	float ___mCameraOffset_26;
	// System.Boolean Vuforia.StereoCameraConfiguration::mIntegratedWithOtherSDK
	bool ___mIntegratedWithOtherSDK_27;
	// System.Int32 Vuforia.StereoCameraConfiguration::mEyewearUserCalibrationProfileId
	int32_t ___mEyewearUserCalibrationProfileId_28;
};
struct StereoCameraConfiguration_t_767371314_0_StaticFields{
	// UnityEngine.Vector4 Vuforia.StereoCameraConfiguration::MIN_CENTER
	Vector4_t_725341336_0  ___MIN_CENTER_13;
	// UnityEngine.Vector4 Vuforia.StereoCameraConfiguration::MAX_CENTER
	Vector4_t_725341336_0  ___MAX_CENTER_14;
	// UnityEngine.Vector4 Vuforia.StereoCameraConfiguration::MAX_BOTTOM
	Vector4_t_725341336_0  ___MAX_BOTTOM_15;
	// UnityEngine.Vector4 Vuforia.StereoCameraConfiguration::MAX_TOP
	Vector4_t_725341336_0  ___MAX_TOP_16;
};
