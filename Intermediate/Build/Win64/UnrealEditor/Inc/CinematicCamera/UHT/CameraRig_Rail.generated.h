// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraRig_Rail.h"

#ifdef CINEMATICCAMERA_CameraRig_Rail_generated_h
#error "CameraRig_Rail.generated.h already included, missing '#pragma once' in CameraRig_Rail.h"
#endif
#define CINEMATICCAMERA_CameraRig_Rail_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;

// ********** Begin Class ACameraRig_Rail **********************************************************
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRailSplineComponent);


struct Z_Construct_UClass_ACameraRig_Rail_Statics;
CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraRig_Rail(); \
	friend struct ::Z_Construct_UClass_ACameraRig_Rail_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEMATICCAMERA_API UClass* ::Z_Construct_UClass_ACameraRig_Rail_NoRegister(); \
public: \
	DECLARE_CLASS2(ACameraRig_Rail, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), Z_Construct_UClass_ACameraRig_Rail_NoRegister) \
	DECLARE_SERIALIZER(ACameraRig_Rail)


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACameraRig_Rail(ACameraRig_Rail&&) = delete; \
	ACameraRig_Rail(const ACameraRig_Rail&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CINEMATICCAMERA_API, ACameraRig_Rail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraRig_Rail); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraRig_Rail) \
	CINEMATICCAMERA_API virtual ~ACameraRig_Rail();


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_18_PROLOG
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACameraRig_Rail;

// ********** End Class ACameraRig_Rail ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
