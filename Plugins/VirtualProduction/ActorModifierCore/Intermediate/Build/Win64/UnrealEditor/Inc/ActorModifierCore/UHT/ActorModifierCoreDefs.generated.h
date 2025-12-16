// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierCoreDefs.h"

#ifdef ACTORMODIFIERCORE_ActorModifierCoreDefs_generated_h
#error "ActorModifierCoreDefs.generated.h already included, missing '#pragma once' in ActorModifierCoreDefs.h"
#endif
#define ACTORMODIFIERCORE_ActorModifierCoreDefs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Delegate FModifierCompatibilityRule ********************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreDefs_h_91_DELEGATE \
ACTORMODIFIERCORE_API bool FModifierCompatibilityRule_DelegateWrapper(const FScriptDelegate& ModifierCompatibilityRule, const AActor* InTargetActor);


// ********** End Delegate FModifierCompatibilityRule **********************************************

// ********** Begin ScriptStruct FActorModifierCoreMetadata ****************************************
struct Z_Construct_UScriptStruct_FActorModifierCoreMetadata_Statics;
#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreDefs_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorModifierCoreMetadata_Statics; \
	ACTORMODIFIERCORE_API static class UScriptStruct* StaticStruct();


struct FActorModifierCoreMetadata;
// ********** End ScriptStruct FActorModifierCoreMetadata ******************************************

// ********** Begin ScriptStruct FActorModifierCoreExecutionTask ***********************************
struct Z_Construct_UScriptStruct_FActorModifierCoreExecutionTask_Statics;
#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreDefs_h_455_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorModifierCoreExecutionTask_Statics; \
	ACTORMODIFIERCORE_API static class UScriptStruct* StaticStruct();


struct FActorModifierCoreExecutionTask;
// ********** End ScriptStruct FActorModifierCoreExecutionTask *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreDefs_h

// ********** Begin Enum EActorModifierCoreEnableReason ********************************************
#define FOREACH_ENUM_EACTORMODIFIERCOREENABLEREASON(op) \
	op(EActorModifierCoreEnableReason::User) \
	op(EActorModifierCoreEnableReason::Load) \
	op(EActorModifierCoreEnableReason::Undo) \
	op(EActorModifierCoreEnableReason::Duplicate) 

enum class EActorModifierCoreEnableReason : uint8;
template<> struct TIsUEnumClass<EActorModifierCoreEnableReason> { enum { Value = true }; };
template<> ACTORMODIFIERCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierCoreEnableReason>();
// ********** End Enum EActorModifierCoreEnableReason **********************************************

// ********** Begin Enum EActorModifierCoreDisableReason *******************************************
#define FOREACH_ENUM_EACTORMODIFIERCOREDISABLEREASON(op) \
	op(EActorModifierCoreDisableReason::User) \
	op(EActorModifierCoreDisableReason::Undo) \
	op(EActorModifierCoreDisableReason::Destroyed) 

enum class EActorModifierCoreDisableReason : uint8;
template<> struct TIsUEnumClass<EActorModifierCoreDisableReason> { enum { Value = true }; };
template<> ACTORMODIFIERCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierCoreDisableReason>();
// ********** End Enum EActorModifierCoreDisableReason *********************************************

// ********** Begin Enum EActorModifierCoreStackPosition *******************************************
#define FOREACH_ENUM_EACTORMODIFIERCORESTACKPOSITION(op) \
	op(EActorModifierCoreStackPosition::Before) \
	op(EActorModifierCoreStackPosition::After) 

enum class EActorModifierCoreStackPosition : uint8;
template<> struct TIsUEnumClass<EActorModifierCoreStackPosition> { enum { Value = true }; };
template<> ACTORMODIFIERCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierCoreStackPosition>();
// ********** End Enum EActorModifierCoreStackPosition *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
