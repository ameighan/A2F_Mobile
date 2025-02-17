﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamTe_1143442460.h"
#include "mscorlib_System_DateTime_818288618.h"

// Vuforia.NullWebCamTexAdaptor
struct  NullWebCamTexAdaptor_t1652290059_0  : public WebCamTexAdaptor_t_1143442460_0
{
	// UnityEngine.Texture2D Vuforia.NullWebCamTexAdaptor::mTexture
	Texture2D_t_485082364_0 * ___mTexture_1;
	// System.Boolean Vuforia.NullWebCamTexAdaptor::mPseudoPlaying
	bool ___mPseudoPlaying_2;
	// System.Double Vuforia.NullWebCamTexAdaptor::mMsBetweenFrames
	double ___mMsBetweenFrames_3;
	// System.DateTime Vuforia.NullWebCamTexAdaptor::mLastFrame
	DateTime_t_818288618_0  ___mLastFrame_4;
};
