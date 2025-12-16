// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shakes/SimpleCameraShakePattern.h"

#ifdef ENGINECAMERAS_SimpleCameraShakePattern_generated_h
#error "SimpleCameraShakePattern.generated.h already included, missing '#pragma once' in SimpleCameraShakePattern.h"
#endif
#define ENGINECAMERAS_SimpleCameraShakePattern_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USimpleCameraShakePattern ************************************************
struct Z_Construct_UClass_USimpleCameraShakePattern_Statics;
ENGINECAMERAS_API UClass* Z_Construct_UClass_USimpleCameraShakePattern_NoRegister();

#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_SimpleCameraShakePattern_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleCameraShakePattern(); \
	friend struct ::Z_Construct_UClass_USimpleCameraShakePattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINECAMERAS_API UClass* ::Z_Construct_UClass_USimpleCameraShakePattern_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleCameraShakePattern, UCameraShakePattern, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EngineCameras"), Z_Construct_UClass_USimpleCameraShakePattern_NoRegister) \
	DECLARE_SERIALIZER(USimpleCameraShakePattern)


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_SimpleCameraShakePattern_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleCameraShakePattern(USimpleCameraShakePattern&&) = delete; \
	USimpleCameraShakePattern(const USimpleCameraShakePattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINECAMERAS_API, USimpleCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleCameraShakePattern); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleCameraShakePattern) \
	ENGINECAMERAS_API virtual ~USimpleCameraShakePattern();


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_SimpleCameraShakePattern_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_SimpleCameraShakePattern_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_SimpleCameraShakePattern_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_SimpleCameraShakePattern_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleCameraShakePattern;

// ********** End Class USimpleCameraShakePattern **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_SimpleCameraShakePattern_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
