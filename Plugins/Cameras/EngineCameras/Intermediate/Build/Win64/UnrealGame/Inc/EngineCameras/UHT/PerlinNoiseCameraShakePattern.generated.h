// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shakes/PerlinNoiseCameraShakePattern.h"

#ifdef ENGINECAMERAS_PerlinNoiseCameraShakePattern_generated_h
#error "PerlinNoiseCameraShakePattern.generated.h already included, missing '#pragma once' in PerlinNoiseCameraShakePattern.h"
#endif
#define ENGINECAMERAS_PerlinNoiseCameraShakePattern_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPerlinNoiseShaker ************************************************
struct Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics;
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_PerlinNoiseCameraShakePattern_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics; \
	ENGINECAMERAS_API static class UScriptStruct* StaticStruct();


struct FPerlinNoiseShaker;
// ********** End ScriptStruct FPerlinNoiseShaker **************************************************

// ********** Begin Class UPerlinNoiseCameraShakePattern *******************************************
struct Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics;
ENGINECAMERAS_API UClass* Z_Construct_UClass_UPerlinNoiseCameraShakePattern_NoRegister();

#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_PerlinNoiseCameraShakePattern_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerlinNoiseCameraShakePattern(); \
	friend struct ::Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINECAMERAS_API UClass* ::Z_Construct_UClass_UPerlinNoiseCameraShakePattern_NoRegister(); \
public: \
	DECLARE_CLASS2(UPerlinNoiseCameraShakePattern, USimpleCameraShakePattern, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineCameras"), Z_Construct_UClass_UPerlinNoiseCameraShakePattern_NoRegister) \
	DECLARE_SERIALIZER(UPerlinNoiseCameraShakePattern)


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_PerlinNoiseCameraShakePattern_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPerlinNoiseCameraShakePattern(UPerlinNoiseCameraShakePattern&&) = delete; \
	UPerlinNoiseCameraShakePattern(const UPerlinNoiseCameraShakePattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINECAMERAS_API, UPerlinNoiseCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerlinNoiseCameraShakePattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerlinNoiseCameraShakePattern) \
	ENGINECAMERAS_API virtual ~UPerlinNoiseCameraShakePattern();


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_PerlinNoiseCameraShakePattern_h_37_PROLOG
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_PerlinNoiseCameraShakePattern_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_PerlinNoiseCameraShakePattern_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_PerlinNoiseCameraShakePattern_h_42_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPerlinNoiseCameraShakePattern;

// ********** End Class UPerlinNoiseCameraShakePattern *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_PerlinNoiseCameraShakePattern_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
