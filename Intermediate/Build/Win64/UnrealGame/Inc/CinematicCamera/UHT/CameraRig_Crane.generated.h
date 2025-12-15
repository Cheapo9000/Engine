// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraRig_Crane.h"

#ifdef CINEMATICCAMERA_CameraRig_Crane_generated_h
#error "CameraRig_Crane.generated.h already included, missing '#pragma once' in CameraRig_Crane.h"
#endif
#define CINEMATICCAMERA_CameraRig_Crane_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACameraRig_Crane *********************************************************
struct Z_Construct_UClass_ACameraRig_Crane_Statics;
CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Crane_NoRegister();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraRig_Crane(); \
	friend struct ::Z_Construct_UClass_ACameraRig_Crane_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEMATICCAMERA_API UClass* ::Z_Construct_UClass_ACameraRig_Crane_NoRegister(); \
public: \
	DECLARE_CLASS2(ACameraRig_Crane, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), Z_Construct_UClass_ACameraRig_Crane_NoRegister) \
	DECLARE_SERIALIZER(ACameraRig_Crane)


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACameraRig_Crane(ACameraRig_Crane&&) = delete; \
	ACameraRig_Crane(const ACameraRig_Crane&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CINEMATICCAMERA_API, ACameraRig_Crane); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraRig_Crane); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraRig_Crane) \
	CINEMATICCAMERA_API virtual ~ACameraRig_Crane();


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_17_PROLOG
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACameraRig_Crane;

// ********** End Class ACameraRig_Crane ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
