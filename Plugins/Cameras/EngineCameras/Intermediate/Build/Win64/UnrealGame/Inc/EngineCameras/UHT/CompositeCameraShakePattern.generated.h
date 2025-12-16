// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shakes/CompositeCameraShakePattern.h"

#ifdef ENGINECAMERAS_CompositeCameraShakePattern_generated_h
#error "CompositeCameraShakePattern.generated.h already included, missing '#pragma once' in CompositeCameraShakePattern.h"
#endif
#define ENGINECAMERAS_CompositeCameraShakePattern_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeCameraShakePattern *********************************************
struct Z_Construct_UClass_UCompositeCameraShakePattern_Statics;
ENGINECAMERAS_API UClass* Z_Construct_UClass_UCompositeCameraShakePattern_NoRegister();

#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_CompositeCameraShakePattern_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeCameraShakePattern(); \
	friend struct ::Z_Construct_UClass_UCompositeCameraShakePattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINECAMERAS_API UClass* ::Z_Construct_UClass_UCompositeCameraShakePattern_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeCameraShakePattern, UCameraShakePattern, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineCameras"), Z_Construct_UClass_UCompositeCameraShakePattern_NoRegister) \
	DECLARE_SERIALIZER(UCompositeCameraShakePattern)


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_CompositeCameraShakePattern_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeCameraShakePattern(UCompositeCameraShakePattern&&) = delete; \
	UCompositeCameraShakePattern(const UCompositeCameraShakePattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINECAMERAS_API, UCompositeCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeCameraShakePattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeCameraShakePattern) \
	ENGINECAMERAS_API virtual ~UCompositeCameraShakePattern();


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_CompositeCameraShakePattern_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_CompositeCameraShakePattern_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_CompositeCameraShakePattern_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_CompositeCameraShakePattern_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeCameraShakePattern;

// ********** End Class UCompositeCameraShakePattern ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_CompositeCameraShakePattern_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
