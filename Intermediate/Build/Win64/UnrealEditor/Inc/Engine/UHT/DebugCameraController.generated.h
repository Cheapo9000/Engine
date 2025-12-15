// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DebugCameraController.h"

#ifdef ENGINE_DebugCameraController_generated_h
#error "DebugCameraController.generated.h already included, missing '#pragma once' in DebugCameraController.h"
#endif
#define ENGINE_DebugCameraController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
struct FHitResult;

// ********** Begin Class ADebugCameraController ***************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetPawnMovementSpeedScale); \
	DECLARE_FUNCTION(execGetSelectedActor); \
	DECLARE_FUNCTION(execToggleDisplay); \
	DECLARE_FUNCTION(execShowDebugSelectedInfo);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_27_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ADebugCameraController_Statics;
ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_27_INCLASS \
private: \
	static void StaticRegisterNativesADebugCameraController(); \
	friend struct ::Z_Construct_UClass_ADebugCameraController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ADebugCameraController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADebugCameraController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ADebugCameraController_NoRegister) \
	DECLARE_SERIALIZER(ADebugCameraController)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADebugCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADebugCameraController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADebugCameraController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugCameraController); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADebugCameraController(ADebugCameraController&&) = delete; \
	ADebugCameraController(const ADebugCameraController&) = delete; \
	ENGINE_API virtual ~ADebugCameraController();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_27_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADebugCameraController;

// ********** End Class ADebugCameraController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
