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

// Vuforia.WebCamTexAdaptorImpl
struct WebCamTexAdaptorImpl_t1897314340_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRe2008990966.h"

// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_DidUpdateThisFrame()
extern "C"  bool WebCamTexAdaptorImpl_get_DidUpdateThisFrame_m_339625298_0 (WebCamTexAdaptorImpl_t1897314340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_IsPlaying()
extern "C"  bool WebCamTexAdaptorImpl_get_IsPlaying_m842175903_0 (WebCamTexAdaptorImpl_t1897314340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.WebCamTexAdaptorImpl::get_Texture()
extern "C"  Texture_t1814018354_0 * WebCamTexAdaptorImpl_get_Texture_m_262419181_0 (WebCamTexAdaptorImpl_t1897314340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::.ctor(System.String,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void WebCamTexAdaptorImpl__ctor_m26583646_0 (WebCamTexAdaptorImpl_t1897314340_0 * __this, String_t* ___deviceName, int32_t ___requestedFPS, Vec2I_t2008990966_0  ___requestedTextureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Play()
extern "C"  void WebCamTexAdaptorImpl_Play_m1284527686_0 (WebCamTexAdaptorImpl_t1897314340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Stop()
extern "C"  void WebCamTexAdaptorImpl_Stop_m1378211732_0 (WebCamTexAdaptorImpl_t1897314340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
