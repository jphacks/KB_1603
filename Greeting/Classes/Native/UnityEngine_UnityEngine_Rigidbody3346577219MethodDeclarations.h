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

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_ForceMode2134283300.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C"  Vector3_t4282066566  Rigidbody_get_velocity_m2696244068 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_velocity_m1063590501 (Rigidbody_t3346577219 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C"  void Rigidbody_set_useGravity_m2620827635 (Rigidbody_t3346577219 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddForce_m557267180 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___force0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddForce_m3651654387 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___force1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddTorque_m3009708185 (Rigidbody_t3346577219 * __this, Vector3_t4282066566  ___torque0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddTorque_m4194065160 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, Vector3_t4282066566 * ___torque1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::Sleep()
extern "C"  void Rigidbody_Sleep_m4049131361 (Rigidbody_t3346577219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)
extern "C"  void Rigidbody_INTERNAL_CALL_Sleep_m1292822714 (Il2CppObject * __this /* static, unused */, Rigidbody_t3346577219 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;