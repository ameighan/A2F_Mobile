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

// UnityEngine.Font
struct Font_t_982288488_0;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Action`1<UnityEngine.Font>
struct Action_1_t_1812298032_0;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t788578059_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.CharacterInfo[]
struct CharacterInfoU5BU5D_t1117175344_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FontStyle_1018710791.h"
#include "UnityEngine_UnityEngine_CharacterInfo1721830990.h"

// System.Void UnityEngine.Font::.ctor()
extern "C"  void Font__ctor_m_229455106_0 (Font_t_982288488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::.ctor(System.String)
extern "C"  void Font__ctor_m_730521404_0 (Font_t_982288488_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::.ctor(System.String[],System.Int32)
extern "C"  void Font__ctor_m_785377995_0 (Font_t_982288488_0 * __this, StringU5BU5D_t_816028754_0* ___names, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C"  void Font_add_textureRebuilt_m_971021380_0 (Object_t * __this /* static, unused */, Action_1_t_1812298032_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C"  void Font_remove_textureRebuilt_m_1490323703_0 (Object_t * __this /* static, unused */, Action_1_t_1812298032_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::add_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C"  void Font_add_m_FontTextureRebuildCallback_m1820831083_0 (Font_t_982288488_0 * __this, FontTextureRebuildCallback_t788578059_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C"  void Font_remove_m_FontTextureRebuildCallback_m1104275896_0 (Font_t_982288488_0 * __this, FontTextureRebuildCallback_t788578059_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::GetOSInstalledFontNames()
extern "C"  StringU5BU5D_t_816028754_0* Font_GetOSInstalledFontNames_m1206366452_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
extern "C"  void Font_Internal_CreateFont_m873871775_0 (Object_t * __this /* static, unused */, Font_t_982288488_0 * ____font, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)
extern "C"  void Font_Internal_CreateDynamicFont_m1337986509_0 (Object_t * __this /* static, unused */, Font_t_982288488_0 * ____font, StringU5BU5D_t_816028754_0* ____names, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String,System.Int32)
extern "C"  Font_t_982288488_0 * Font_CreateDynamicFontFromOSFont_m_444270121_0 (Object_t * __this /* static, unused */, String_t* ___fontname, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String[],System.Int32)
extern "C"  Font_t_982288488_0 * Font_CreateDynamicFontFromOSFont_m_1271270535_0 (Object_t * __this /* static, unused */, StringU5BU5D_t_816028754_0* ___fontnames, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C"  Material_t1701708784_0 * Font_get_material_m_1887659929_0 (Font_t_982288488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_material(UnityEngine.Material)
extern "C"  void Font_set_material_m1425248940_0 (Font_t_982288488_0 * __this, Material_t1701708784_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C"  bool Font_HasCharacter_m_1814196830_0 (Font_t_982288488_0 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::get_fontNames()
extern "C"  StringU5BU5D_t_816028754_0* Font_get_fontNames_m_1441458389_0 (Font_t_982288488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_fontNames(System.String[])
extern "C"  void Font_set_fontNames_m866407368_0 (Font_t_982288488_0 * __this, StringU5BU5D_t_816028754_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CharacterInfo[] UnityEngine.Font::get_characterInfo()
extern "C"  CharacterInfoU5BU5D_t1117175344_0* Font_get_characterInfo_m_257642407_0 (Font_t_982288488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])
extern "C"  void Font_set_characterInfo_m1606534618_0 (Font_t_982288488_0 * __this, CharacterInfoU5BU5D_t1117175344_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C"  void Font_RequestCharactersInTexture_m_1842599239_0 (Font_t_982288488_0 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32)
extern "C"  void Font_RequestCharactersInTexture_m_1738887496_0 (Font_t_982288488_0 * __this, String_t* ___characters, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String)
extern "C"  void Font_RequestCharactersInTexture_m601617535_0 (Font_t_982288488_0 * __this, String_t* ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C"  void Font_InvokeTextureRebuilt_Internal_m1357223658_0 (Object_t * __this /* static, unused */, Font_t_982288488_0 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C"  FontTextureRebuildCallback_t788578059_0 * Font_get_textureRebuildCallback_m_1770796054_0 (Font_t_982288488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C"  void Font_set_textureRebuildCallback_m608361261_0 (Font_t_982288488_0 * __this, FontTextureRebuildCallback_t788578059_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::GetMaxVertsForString(System.String)
extern "C"  int32_t Font_GetMaxVertsForString_m_1224157642_0 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C"  bool Font_GetCharacterInfo_m_1169976472_0 (Font_t_982288488_0 * __this, uint16_t ___ch, CharacterInfo_t1721830990_0 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32)
extern "C"  bool Font_GetCharacterInfo_m_305019737_0 (Font_t_982288488_0 * __this, uint16_t ___ch, CharacterInfo_t1721830990_0 * ___info, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&)
extern "C"  bool Font_GetCharacterInfo_m_2121472464_0 (Font_t_982288488_0 * __this, uint16_t ___ch, CharacterInfo_t1721830990_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C"  bool Font_get_dynamic_m_414822612_0 (Font_t_982288488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_ascent()
extern "C"  int32_t Font_get_ascent_m2144661577_0 (Font_t_982288488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_lineHeight()
extern "C"  int32_t Font_get_lineHeight_m_1604833686_0 (Font_t_982288488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C"  int32_t Font_get_fontSize_m_1269157025_0 (Font_t_982288488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
