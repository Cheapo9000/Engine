// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AIPerceptionComponent.h"

#ifdef AIMODULE_AIPerceptionComponent_generated_h
#error "AIPerceptionComponent.generated.h already included, missing '#pragma once' in AIPerceptionComponent.h"
#endif
#define AIMODULE_AIPerceptionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAISense;
class UClass;
struct FActorPerceptionBlueprintInfo;
struct FActorPerceptionUpdateInfo;
struct FAIStimulus;

// ********** Begin Delegate FPerceptionUpdatedDelegate ********************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_22_DELEGATE \
AIMODULE_API void FPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PerceptionUpdatedDelegate, TArray<AActor*> const& UpdatedActors);


// ********** End Delegate FPerceptionUpdatedDelegate **********************************************

// ********** Begin Delegate FActorPerceptionUpdatedDelegate ***************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_23_DELEGATE \
AIMODULE_API void FActorPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionUpdatedDelegate, AActor* Actor, FAIStimulus Stimulus);


// ********** End Delegate FActorPerceptionUpdatedDelegate *****************************************

// ********** Begin Delegate FActorPerceptionForgetUpdatedDelegate *********************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_24_DELEGATE \
AIMODULE_API void FActorPerceptionForgetUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionForgetUpdatedDelegate, AActor* Actor);


// ********** End Delegate FActorPerceptionForgetUpdatedDelegate ***********************************

// ********** Begin ScriptStruct FActorPerceptionUpdateInfo ****************************************
struct Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FActorPerceptionUpdateInfo;
// ********** End ScriptStruct FActorPerceptionUpdateInfo ******************************************

// ********** Begin Delegate FActorPerceptionInfoUpdatedDelegate ***********************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_47_DELEGATE \
AIMODULE_API void FActorPerceptionInfoUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionInfoUpdatedDelegate, FActorPerceptionUpdateInfo const& UpdateInfo);


// ********** End Delegate FActorPerceptionInfoUpdatedDelegate *************************************

// ********** Begin ScriptStruct FActorPerceptionBlueprintInfo *************************************
struct Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_184_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FActorPerceptionBlueprintInfo;
// ********** End ScriptStruct FActorPerceptionBlueprintInfo ***************************************

// ********** Begin Class UAIPerceptionComponent ***************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsSenseEnabled); \
	DECLARE_FUNCTION(execSetSenseEnabled); \
	DECLARE_FUNCTION(execGetActorsPerception); \
	DECLARE_FUNCTION(execGetKnownPerceivedActors); \
	DECLARE_FUNCTION(execGetCurrentlyPerceivedActors); \
	DECLARE_FUNCTION(execGetPerceivedHostileActorsBySense); \
	DECLARE_FUNCTION(execGetPerceivedHostileActors); \
	DECLARE_FUNCTION(execForgetAll); \
	DECLARE_FUNCTION(execRequestStimuliListenerUpdate); \
	DECLARE_FUNCTION(execOnOwnerEndPlay);


struct Z_Construct_UClass_UAIPerceptionComponent_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_INCLASS \
private: \
	static void StaticRegisterNativesUAIPerceptionComponent(); \
	friend struct ::Z_Construct_UClass_UAIPerceptionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAIPerceptionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIPerceptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAIPerceptionComponent_NoRegister) \
	DECLARE_SERIALIZER(UAIPerceptionComponent) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIPerceptionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIPerceptionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIPerceptionComponent(UAIPerceptionComponent&&) = delete; \
	UAIPerceptionComponent(const UAIPerceptionComponent&) = delete; \
	AIMODULE_API virtual ~UAIPerceptionComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_207_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIPerceptionComponent;

// ********** End Class UAIPerceptionComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
