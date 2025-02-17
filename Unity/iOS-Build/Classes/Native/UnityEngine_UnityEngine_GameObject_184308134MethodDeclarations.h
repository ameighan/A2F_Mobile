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

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// UnityEngine.Component
struct Component_t_867674284_0;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_PrimitiveType275938200.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_SendMessageOptions_53436984.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m_374133690_0 (GameObject_t_184308134_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor()
extern "C"  void GameObject__ctor_m845034556_0 (GameObject_t_184308134_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern "C"  void GameObject__ctor_m176066391_0 (GameObject_t_184308134_0 * __this, String_t* ___name, TypeU5BU5D_t_722972841_0* ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C"  GameObject_t_184308134_0 * GameObject_CreatePrimitive_m_1035630166_0 (Object_t * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C"  Component_t_867674284_0 * GameObject_GetComponent_m1004814461_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void GameObject_GetComponentFastPath_m_1389250633_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
extern "C"  Component_t_867674284_0 * GameObject_GetComponentInChildren_m1045971545_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C"  Array_t * GameObject_GetComponentsInternal_m181453881_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t1584899523_0 * GameObject_get_transform_m1278640159_0 (GameObject_t_184308134_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C"  int32_t GameObject_get_layer_m1648550306_0 (GameObject_t_184308134_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C"  void GameObject_set_layer_m1872241535_0 (GameObject_t_184308134_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m_756761895_0 (GameObject_t_184308134_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C"  bool GameObject_get_activeInHierarchy_m612450965_0 (GameObject_t_184308134_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void GameObject_SendMessage_m423373689_0 (GameObject_t_184308134_0 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C"  Component_t_867674284_0 * GameObject_Internal_AddComponentWithType_m_2028597362_0 (GameObject_t_184308134_0 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C"  Component_t_867674284_0 * GameObject_AddComponent_m_2086187128_0 (GameObject_t_184308134_0 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C"  void GameObject_Internal_CreateGameObject_m_1773641315_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___mono, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
