// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierCoreDefs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ACTORMODIFIERCORE_ActorModifierCoreDefs_generated_h
#error "ActorModifierCoreDefs.generated.h already included, missing '#pragma once' in ActorModifierCoreDefs.h"
#endif
#define ACTORMODIFIERCORE_ActorModifierCoreDefs_generated_h

#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreDefs_h_91_DELEGATE \
ACTORMODIFIERCORE_API bool FModifierCompatibilityRule_DelegateWrapper(const FScriptDelegate& ModifierCompatibilityRule, const AActor* InTargetActor);


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreDefs_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorModifierCoreMetadata_Statics; \
	ACTORMODIFIERCORE_API static class UScriptStruct* StaticStruct();


template<> ACTORMODIFIERCORE_API UScriptStruct* StaticStruct<struct FActorModifierCoreMetadata>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreDefs_h


#define FOREACH_ENUM_EACTORMODIFIERCOREENABLEREASON(op) \
	op(EActorModifierCoreEnableReason::User) \
	op(EActorModifierCoreEnableReason::Load) \
	op(EActorModifierCoreEnableReason::Undo) \
	op(EActorModifierCoreEnableReason::Duplicate) 

enum class EActorModifierCoreEnableReason : uint8;
template<> struct TIsUEnumClass<EActorModifierCoreEnableReason> { enum { Value = true }; };
template<> ACTORMODIFIERCORE_API UEnum* StaticEnum<EActorModifierCoreEnableReason>();

#define FOREACH_ENUM_EACTORMODIFIERCOREDISABLEREASON(op) \
	op(EActorModifierCoreDisableReason::User) \
	op(EActorModifierCoreDisableReason::Undo) \
	op(EActorModifierCoreDisableReason::Destroyed) 

enum class EActorModifierCoreDisableReason : uint8;
template<> struct TIsUEnumClass<EActorModifierCoreDisableReason> { enum { Value = true }; };
template<> ACTORMODIFIERCORE_API UEnum* StaticEnum<EActorModifierCoreDisableReason>();

#define FOREACH_ENUM_EACTORMODIFIERCORESTACKPOSITION(op) \
	op(EActorModifierCoreStackPosition::Before) \
	op(EActorModifierCoreStackPosition::After) 

enum class EActorModifierCoreStackPosition : uint8;
template<> struct TIsUEnumClass<EActorModifierCoreStackPosition> { enum { Value = true }; };
template<> ACTORMODIFIERCORE_API UEnum* StaticEnum<EActorModifierCoreStackPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
