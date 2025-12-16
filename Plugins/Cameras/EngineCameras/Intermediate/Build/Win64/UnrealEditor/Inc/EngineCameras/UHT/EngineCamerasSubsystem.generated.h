// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EngineCamerasSubsystem.h"

#ifdef ENGINECAMERAS_EngineCamerasSubsystem_generated_h
#error "EngineCamerasSubsystem.generated.h already included, missing '#pragma once' in EngineCamerasSubsystem.h"
#endif
#define ENGINECAMERAS_EngineCamerasSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UCameraAnimationSequence;
struct FCameraAnimationHandle;
struct FCameraAnimationParams;

// ********** Begin Class UEngineCamerasSubsystem **************************************************
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopAllCameraAnimations); \
	DECLARE_FUNCTION(execStopAllCameraAnimationsOf); \
	DECLARE_FUNCTION(execStopCameraAnimation); \
	DECLARE_FUNCTION(execIsCameraAnimationActive); \
	DECLARE_FUNCTION(execPlayCameraAnimation);


struct Z_Construct_UClass_UEngineCamerasSubsystem_Statics;
ENGINECAMERAS_API UClass* Z_Construct_UClass_UEngineCamerasSubsystem_NoRegister();

#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineCamerasSubsystem(); \
	friend struct ::Z_Construct_UClass_UEngineCamerasSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINECAMERAS_API UClass* ::Z_Construct_UClass_UEngineCamerasSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEngineCamerasSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineCameras"), Z_Construct_UClass_UEngineCamerasSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEngineCamerasSubsystem)


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINECAMERAS_API UEngineCamerasSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEngineCamerasSubsystem(UEngineCamerasSubsystem&&) = delete; \
	UEngineCamerasSubsystem(const UEngineCamerasSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINECAMERAS_API, UEngineCamerasSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineCamerasSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEngineCamerasSubsystem) \
	ENGINECAMERAS_API virtual ~UEngineCamerasSubsystem();


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_17_PROLOG
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEngineCamerasSubsystem;

// ********** End Class UEngineCamerasSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_EngineCamerasSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
