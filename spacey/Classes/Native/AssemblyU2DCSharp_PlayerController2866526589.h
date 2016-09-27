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
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;
// SimpleTouchPad
struct SimpleTouchPad_t3662949574;
// SimpleTouchAreaButton
struct SimpleTouchAreaButton_t497908364;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
public:
	// System.Single PlayerController::speed
	float ___speed_2;
	// System.Single PlayerController::tilt
	float ___tilt_3;
	// Boundary PlayerController::boundary
	Boundary_t2244299850 * ___boundary_4;
	// UnityEngine.GameObject PlayerController::shot
	GameObject_t4012695102 * ___shot_5;
	// UnityEngine.Transform PlayerController::shotSpawn
	Transform_t284553113 * ___shotSpawn_6;
	// System.Single PlayerController::fireRate
	float ___fireRate_7;
	// SimpleTouchPad PlayerController::touchPad
	SimpleTouchPad_t3662949574 * ___touchPad_8;
	// SimpleTouchAreaButton PlayerController::areaButton
	SimpleTouchAreaButton_t497908364 * ___areaButton_9;
	// System.Single PlayerController::nextFire
	float ___nextFire_10;
	// UnityEngine.AudioSource PlayerController::audioSource
	AudioSource_t3628549054 * ___audioSource_11;
	// UnityEngine.Quaternion PlayerController::calibrationQuaternion
	Quaternion_t1891715979  ___calibrationQuaternion_12;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t1972007546 * ___rb_13;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___boundary_4)); }
	inline Boundary_t2244299850 * get_boundary_4() const { return ___boundary_4; }
	inline Boundary_t2244299850 ** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(Boundary_t2244299850 * value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_4, value);
	}

	inline static int32_t get_offset_of_shot_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___shot_5)); }
	inline GameObject_t4012695102 * get_shot_5() const { return ___shot_5; }
	inline GameObject_t4012695102 ** get_address_of_shot_5() { return &___shot_5; }
	inline void set_shot_5(GameObject_t4012695102 * value)
	{
		___shot_5 = value;
		Il2CppCodeGenWriteBarrier(&___shot_5, value);
	}

	inline static int32_t get_offset_of_shotSpawn_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___shotSpawn_6)); }
	inline Transform_t284553113 * get_shotSpawn_6() const { return ___shotSpawn_6; }
	inline Transform_t284553113 ** get_address_of_shotSpawn_6() { return &___shotSpawn_6; }
	inline void set_shotSpawn_6(Transform_t284553113 * value)
	{
		___shotSpawn_6 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_6, value);
	}

	inline static int32_t get_offset_of_fireRate_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___fireRate_7)); }
	inline float get_fireRate_7() const { return ___fireRate_7; }
	inline float* get_address_of_fireRate_7() { return &___fireRate_7; }
	inline void set_fireRate_7(float value)
	{
		___fireRate_7 = value;
	}

	inline static int32_t get_offset_of_touchPad_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___touchPad_8)); }
	inline SimpleTouchPad_t3662949574 * get_touchPad_8() const { return ___touchPad_8; }
	inline SimpleTouchPad_t3662949574 ** get_address_of_touchPad_8() { return &___touchPad_8; }
	inline void set_touchPad_8(SimpleTouchPad_t3662949574 * value)
	{
		___touchPad_8 = value;
		Il2CppCodeGenWriteBarrier(&___touchPad_8, value);
	}

	inline static int32_t get_offset_of_areaButton_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___areaButton_9)); }
	inline SimpleTouchAreaButton_t497908364 * get_areaButton_9() const { return ___areaButton_9; }
	inline SimpleTouchAreaButton_t497908364 ** get_address_of_areaButton_9() { return &___areaButton_9; }
	inline void set_areaButton_9(SimpleTouchAreaButton_t497908364 * value)
	{
		___areaButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___areaButton_9, value);
	}

	inline static int32_t get_offset_of_nextFire_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___nextFire_10)); }
	inline float get_nextFire_10() const { return ___nextFire_10; }
	inline float* get_address_of_nextFire_10() { return &___nextFire_10; }
	inline void set_nextFire_10(float value)
	{
		___nextFire_10 = value;
	}

	inline static int32_t get_offset_of_audioSource_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___audioSource_11)); }
	inline AudioSource_t3628549054 * get_audioSource_11() const { return ___audioSource_11; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_11() { return &___audioSource_11; }
	inline void set_audioSource_11(AudioSource_t3628549054 * value)
	{
		___audioSource_11 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_11, value);
	}

	inline static int32_t get_offset_of_calibrationQuaternion_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___calibrationQuaternion_12)); }
	inline Quaternion_t1891715979  get_calibrationQuaternion_12() const { return ___calibrationQuaternion_12; }
	inline Quaternion_t1891715979 * get_address_of_calibrationQuaternion_12() { return &___calibrationQuaternion_12; }
	inline void set_calibrationQuaternion_12(Quaternion_t1891715979  value)
	{
		___calibrationQuaternion_12 = value;
	}

	inline static int32_t get_offset_of_rb_13() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_13)); }
	inline Rigidbody_t1972007546 * get_rb_13() const { return ___rb_13; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_13() { return &___rb_13; }
	inline void set_rb_13(Rigidbody_t1972007546 * value)
	{
		___rb_13 = value;
		Il2CppCodeGenWriteBarrier(&___rb_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
