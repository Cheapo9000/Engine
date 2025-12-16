// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorSequenceObjectReference.h"

#ifdef ACTORSEQUENCE_ActorSequenceObjectReference_generated_h
#error "ActorSequenceObjectReference.generated.h already included, missing '#pragma once' in ActorSequenceObjectReference.h"
#endif
#define ACTORSEQUENCE_ActorSequenceObjectReference_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActorSequenceObjectReference *************************************
struct Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics;
#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics; \
	ACTORSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FActorSequenceObjectReference;
// ********** End ScriptStruct FActorSequenceObjectReference ***************************************

// ********** Begin ScriptStruct FActorSequenceObjectReferences ************************************
struct Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics;
#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics; \
	ACTORSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FActorSequenceObjectReferences;
// ********** End ScriptStruct FActorSequenceObjectReferences **************************************

// ********** Begin ScriptStruct FActorSequenceObjectReferenceMap **********************************
struct Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics;
#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics; \
	ACTORSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FActorSequenceObjectReferenceMap;
// ********** End ScriptStruct FActorSequenceObjectReferenceMap ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h

// ********** Begin Enum EActorSequenceObjectReferenceType *****************************************
#define FOREACH_ENUM_EACTORSEQUENCEOBJECTREFERENCETYPE(op) \
	op(EActorSequenceObjectReferenceType::ContextActor) \
	op(EActorSequenceObjectReferenceType::ExternalActor) \
	op(EActorSequenceObjectReferenceType::Component) 

enum class EActorSequenceObjectReferenceType : uint8;
template<> struct TIsUEnumClass<EActorSequenceObjectReferenceType> { enum { Value = true }; };
template<> ACTORSEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorSequenceObjectReferenceType>();
// ********** End Enum EActorSequenceObjectReferenceType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
