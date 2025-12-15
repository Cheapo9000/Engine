// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraModifier.h"

#ifdef ENGINE_CameraModifier_generated_h
#error "CameraModifier.generated.h already included, missing '#pragma once' in CameraModifier.h"
#endif
#define ENGINE_CameraModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FPostProcessSettings;

// ********** Begin Class UCameraModifier **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execEnableModifier); \
	DECLARE_FUNCTION(execDisableModifier); \
	DECLARE_FUNCTION(execGetViewTarget); \
	DECLARE_FUNCTION(execIsPendingDisable); \
	DECLARE_FUNCTION(execIsDisabled); \
	DECLARE_FUNCTION(execOnCameraOwnerDestroyed);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCameraModifier_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCameraModifier(); \
	friend struct ::Z_Construct_UClass_UCameraModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCameraModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCameraModifier_NoRegister) \
	DECLARE_SERIALIZER(UCameraModifier)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCameraModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModifier); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraModifier(UCameraModifier&&) = delete; \
	UCameraModifier(const UCameraModifier&) = delete; \
	ENGINE_API virtual ~UCameraModifier();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraModifier;

// ********** End Class UCameraModifier ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
