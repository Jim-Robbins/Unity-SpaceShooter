﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponController
struct  WeaponController_t4154151672  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource WeaponController::audioSource
	AudioSource_t3628549054 * ___audioSource_2;
	// UnityEngine.GameObject WeaponController::shot
	GameObject_t4012695102 * ___shot_3;
	// UnityEngine.Transform WeaponController::shotSpawn
	Transform_t284553113 * ___shotSpawn_4;
	// System.Single WeaponController::fireRate
	float ___fireRate_5;
	// System.Single WeaponController::nextFire
	float ___nextFire_6;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(WeaponController_t4154151672, ___audioSource_2)); }
	inline AudioSource_t3628549054 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t3628549054 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}

	inline static int32_t get_offset_of_shot_3() { return static_cast<int32_t>(offsetof(WeaponController_t4154151672, ___shot_3)); }
	inline GameObject_t4012695102 * get_shot_3() const { return ___shot_3; }
	inline GameObject_t4012695102 ** get_address_of_shot_3() { return &___shot_3; }
	inline void set_shot_3(GameObject_t4012695102 * value)
	{
		___shot_3 = value;
		Il2CppCodeGenWriteBarrier(&___shot_3, value);
	}

	inline static int32_t get_offset_of_shotSpawn_4() { return static_cast<int32_t>(offsetof(WeaponController_t4154151672, ___shotSpawn_4)); }
	inline Transform_t284553113 * get_shotSpawn_4() const { return ___shotSpawn_4; }
	inline Transform_t284553113 ** get_address_of_shotSpawn_4() { return &___shotSpawn_4; }
	inline void set_shotSpawn_4(Transform_t284553113 * value)
	{
		___shotSpawn_4 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_4, value);
	}

	inline static int32_t get_offset_of_fireRate_5() { return static_cast<int32_t>(offsetof(WeaponController_t4154151672, ___fireRate_5)); }
	inline float get_fireRate_5() const { return ___fireRate_5; }
	inline float* get_address_of_fireRate_5() { return &___fireRate_5; }
	inline void set_fireRate_5(float value)
	{
		___fireRate_5 = value;
	}

	inline static int32_t get_offset_of_nextFire_6() { return static_cast<int32_t>(offsetof(WeaponController_t4154151672, ___nextFire_6)); }
	inline float get_nextFire_6() const { return ___nextFire_6; }
	inline float* get_address_of_nextFire_6() { return &___nextFire_6; }
	inline void set_nextFire_6(float value)
	{
		___nextFire_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
