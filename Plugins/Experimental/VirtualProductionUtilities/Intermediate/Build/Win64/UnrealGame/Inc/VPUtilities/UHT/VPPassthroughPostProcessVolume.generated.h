// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/VPPassthroughPostProcessVolume.h"

#ifdef VPUTILITIES_VPPassthroughPostProcessVolume_generated_h
#error "VPPassthroughPostProcessVolume.generated.h already included, missing '#pragma once' in VPPassthroughPostProcessVolume.h"
#endif
#define VPUTILITIES_VPPassthroughPostProcessVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVPPassthroughPostProcessVolume ******************************************
struct Z_Construct_UClass_AVPPassthroughPostProcessVolume_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_AVPPassthroughPostProcessVolume_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPPassthroughPostProcessVolume_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVPPassthroughPostProcessVolume(); \
	friend struct ::Z_Construct_UClass_AVPPassthroughPostProcessVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_AVPPassthroughPostProcessVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(AVPPassthroughPostProcessVolume, APostProcessVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_AVPPassthroughPostProcessVolume_NoRegister) \
	DECLARE_SERIALIZER(AVPPassthroughPostProcessVolume)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPPassthroughPostProcessVolume_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVPPassthroughPostProcessVolume(AVPPassthroughPostProcessVolume&&) = delete; \
	AVPPassthroughPostProcessVolume(const AVPPassthroughPostProcessVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VPUTILITIES_API, AVPPassthroughPostProcessVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPPassthroughPostProcessVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVPPassthroughPostProcessVolume) \
	VPUTILITIES_API virtual ~AVPPassthroughPostProcessVolume();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPPassthroughPostProcessVolume_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPPassthroughPostProcessVolume_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPPassthroughPostProcessVolume_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPPassthroughPostProcessVolume_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVPPassthroughPostProcessVolume;

// ********** End Class AVPPassthroughPostProcessVolume ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPPassthroughPostProcessVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
