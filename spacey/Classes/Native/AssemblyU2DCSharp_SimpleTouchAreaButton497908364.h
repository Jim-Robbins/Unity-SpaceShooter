#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleTouchAreaButton
struct  SimpleTouchAreaButton_t497908364  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean SimpleTouchAreaButton::touched
	bool ___touched_2;
	// System.Int32 SimpleTouchAreaButton::pointerID
	int32_t ___pointerID_3;
	// System.Boolean SimpleTouchAreaButton::canFire
	bool ___canFire_4;

public:
	inline static int32_t get_offset_of_touched_2() { return static_cast<int32_t>(offsetof(SimpleTouchAreaButton_t497908364, ___touched_2)); }
	inline bool get_touched_2() const { return ___touched_2; }
	inline bool* get_address_of_touched_2() { return &___touched_2; }
	inline void set_touched_2(bool value)
	{
		___touched_2 = value;
	}

	inline static int32_t get_offset_of_pointerID_3() { return static_cast<int32_t>(offsetof(SimpleTouchAreaButton_t497908364, ___pointerID_3)); }
	inline int32_t get_pointerID_3() const { return ___pointerID_3; }
	inline int32_t* get_address_of_pointerID_3() { return &___pointerID_3; }
	inline void set_pointerID_3(int32_t value)
	{
		___pointerID_3 = value;
	}

	inline static int32_t get_offset_of_canFire_4() { return static_cast<int32_t>(offsetof(SimpleTouchAreaButton_t497908364, ___canFire_4)); }
	inline bool get_canFire_4() const { return ___canFire_4; }
	inline bool* get_address_of_canFire_4() { return &___canFire_4; }
	inline void set_canFire_4(bool value)
	{
		___canFire_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
