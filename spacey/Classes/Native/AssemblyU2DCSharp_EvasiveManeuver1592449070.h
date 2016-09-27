#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Boundary
struct Boundary_t2244299850;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EvasiveManeuver
struct  EvasiveManeuver_t1592449070  : public MonoBehaviour_t3012272455
{
public:
	// System.Single EvasiveManeuver::dodge
	float ___dodge_2;
	// System.Single EvasiveManeuver::tilt
	float ___tilt_3;
	// UnityEngine.Vector2 EvasiveManeuver::maneuverTime
	Vector2_t3525329788  ___maneuverTime_4;
	// UnityEngine.Vector2 EvasiveManeuver::maneuverWait
	Vector2_t3525329788  ___maneuverWait_5;
	// UnityEngine.Vector2 EvasiveManeuver::startWait
	Vector2_t3525329788  ___startWait_6;
	// System.Single EvasiveManeuver::smoothing
	float ___smoothing_7;
	// Boundary EvasiveManeuver::boundary
	Boundary_t2244299850 * ___boundary_8;
	// System.Single EvasiveManeuver::targetManeuver
	float ___targetManeuver_9;
	// UnityEngine.Rigidbody EvasiveManeuver::rb
	Rigidbody_t1972007546 * ___rb_10;

public:
	inline static int32_t get_offset_of_dodge_2() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___dodge_2)); }
	inline float get_dodge_2() const { return ___dodge_2; }
	inline float* get_address_of_dodge_2() { return &___dodge_2; }
	inline void set_dodge_2(float value)
	{
		___dodge_2 = value;
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_maneuverTime_4() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___maneuverTime_4)); }
	inline Vector2_t3525329788  get_maneuverTime_4() const { return ___maneuverTime_4; }
	inline Vector2_t3525329788 * get_address_of_maneuverTime_4() { return &___maneuverTime_4; }
	inline void set_maneuverTime_4(Vector2_t3525329788  value)
	{
		___maneuverTime_4 = value;
	}

	inline static int32_t get_offset_of_maneuverWait_5() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___maneuverWait_5)); }
	inline Vector2_t3525329788  get_maneuverWait_5() const { return ___maneuverWait_5; }
	inline Vector2_t3525329788 * get_address_of_maneuverWait_5() { return &___maneuverWait_5; }
	inline void set_maneuverWait_5(Vector2_t3525329788  value)
	{
		___maneuverWait_5 = value;
	}

	inline static int32_t get_offset_of_startWait_6() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___startWait_6)); }
	inline Vector2_t3525329788  get_startWait_6() const { return ___startWait_6; }
	inline Vector2_t3525329788 * get_address_of_startWait_6() { return &___startWait_6; }
	inline void set_startWait_6(Vector2_t3525329788  value)
	{
		___startWait_6 = value;
	}

	inline static int32_t get_offset_of_smoothing_7() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___smoothing_7)); }
	inline float get_smoothing_7() const { return ___smoothing_7; }
	inline float* get_address_of_smoothing_7() { return &___smoothing_7; }
	inline void set_smoothing_7(float value)
	{
		___smoothing_7 = value;
	}

	inline static int32_t get_offset_of_boundary_8() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___boundary_8)); }
	inline Boundary_t2244299850 * get_boundary_8() const { return ___boundary_8; }
	inline Boundary_t2244299850 ** get_address_of_boundary_8() { return &___boundary_8; }
	inline void set_boundary_8(Boundary_t2244299850 * value)
	{
		___boundary_8 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_8, value);
	}

	inline static int32_t get_offset_of_targetManeuver_9() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___targetManeuver_9)); }
	inline float get_targetManeuver_9() const { return ___targetManeuver_9; }
	inline float* get_address_of_targetManeuver_9() { return &___targetManeuver_9; }
	inline void set_targetManeuver_9(float value)
	{
		___targetManeuver_9 = value;
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(EvasiveManeuver_t1592449070, ___rb_10)); }
	inline Rigidbody_t1972007546 * get_rb_10() const { return ___rb_10; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody_t1972007546 * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier(&___rb_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
