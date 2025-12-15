// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AIPerceptionTypes.h"

#ifdef AIMODULE_AIPerceptionTypes_generated_h
#error "AIPerceptionTypes.generated.h already included, missing '#pragma once' in AIPerceptionTypes.h"
#endif
#define AIMODULE_AIPerceptionTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAIStimulus *******************************************************
struct Z_Construct_UScriptStruct_FAIStimulus_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIStimulus_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FAIStimulus;
// ********** End ScriptStruct FAIStimulus *********************************************************

// ********** Begin ScriptStruct FAISenseAffiliationFilter *****************************************
struct Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_208_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FAISenseAffiliationFilter;
// ********** End ScriptStruct FAISenseAffiliationFilter *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h

// ********** Begin Enum EAISenseNotifyType ********************************************************
#define FOREACH_ENUM_EAISENSENOTIFYTYPE(op) \
	op(EAISenseNotifyType::OnEveryPerception) \
	op(EAISenseNotifyType::OnPerceptionChange) 

enum class EAISenseNotifyType : uint8;
template<> struct TIsUEnumClass<EAISenseNotifyType> { enum { Value = true }; };
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAISenseNotifyType>();
// ********** End Enum EAISenseNotifyType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
