// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/PawnSensingComponent.h"

#ifdef AIMODULE_PawnSensingComponent_generated_h
#error "PawnSensingComponent.generated.h already included, missing '#pragma once' in PawnSensingComponent.h"
#endif
#define AIMODULE_PawnSensingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;

// ********** Begin Delegate FSeePawnDelegate ******************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_26_DELEGATE \
static AIMODULE_API void FSeePawnDelegate_DelegateWrapper(const FMulticastScriptDelegate& SeePawnDelegate, APawn* Pawn);


// ********** End Delegate FSeePawnDelegate ********************************************************

// ********** Begin Delegate FHearNoiseDelegate ****************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_27_DELEGATE \
static AIMODULE_API void FHearNoiseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HearNoiseDelegate, APawn* Instigator, FVector const& Location, float Volume);


// ********** End Delegate FHearNoiseDelegate ******************************************************

// ********** Begin Class UPawnSensingComponent ****************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetPeripheralVisionCosine); \
	DECLARE_FUNCTION(execGetPeripheralVisionAngle); \
	DECLARE_FUNCTION(execSetPeripheralVisionAngle); \
	DECLARE_FUNCTION(execSetSensingUpdatesEnabled); \
	DECLARE_FUNCTION(execSetSensingInterval);


struct Z_Construct_UClass_UPawnSensingComponent_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUPawnSensingComponent(); \
	friend struct ::Z_Construct_UClass_UPawnSensingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UPawnSensingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPawnSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UPawnSensingComponent_NoRegister) \
	DECLARE_SERIALIZER(UPawnSensingComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UPawnSensingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnSensingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UPawnSensingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnSensingComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPawnSensingComponent(UPawnSensingComponent&&) = delete; \
	UPawnSensingComponent(const UPawnSensingComponent&) = delete; \
	AIMODULE_API virtual ~UPawnSensingComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_21_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_24_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPawnSensingComponent;

// ********** End Class UPawnSensingComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
