﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NewBehaviourScript
struct  NewBehaviourScript_t1641179720  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject NewBehaviourScript::gameObject
	GameObject_t3674682005 * ___gameObject_2;

public:
	inline static int32_t get_offset_of_gameObject_2() { return static_cast<int32_t>(offsetof(NewBehaviourScript_t1641179720, ___gameObject_2)); }
	inline GameObject_t3674682005 * get_gameObject_2() const { return ___gameObject_2; }
	inline GameObject_t3674682005 ** get_address_of_gameObject_2() { return &___gameObject_2; }
	inline void set_gameObject_2(GameObject_t3674682005 * value)
	{
		___gameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
