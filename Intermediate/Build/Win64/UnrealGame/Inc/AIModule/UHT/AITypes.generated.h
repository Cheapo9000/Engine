// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AITypes.h"

#ifdef AIMODULE_AITypes_generated_h
#error "AITypes.generated.h already included, missing '#pragma once' in AITypes.h"
#endif
#define AIMODULE_AITypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAIRequestID ******************************************************
struct Z_Construct_UScriptStruct_FAIRequestID_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_404_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIRequestID_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FAIRequestID;
// ********** End ScriptStruct FAIRequestID ********************************************************

// ********** Begin ScriptStruct FAIMoveRequest ****************************************************
struct Z_Construct_UScriptStruct_FAIMoveRequest_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_463_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIMoveRequest_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FAIMoveRequest;
// ********** End ScriptStruct FAIMoveRequest ******************************************************

// ********** Begin ScriptStruct FIntervalCountdown ************************************************
struct Z_Construct_UScriptStruct_FIntervalCountdown_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_600_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIntervalCountdown_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FIntervalCountdown;
// ********** End ScriptStruct FIntervalCountdown **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h

// ********** Begin Enum EAIOptionFlag *************************************************************
#define FOREACH_ENUM_EAIOPTIONFLAG(op) \
	op(EAIOptionFlag::Default) \
	op(EAIOptionFlag::Enable) \
	op(EAIOptionFlag::Disable) 

namespace EAIOptionFlag { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAIOptionFlag::Type>();
// ********** End Enum EAIOptionFlag ***************************************************************

// ********** Begin Enum FAIDistanceType ***********************************************************
#define FOREACH_ENUM_FAIDISTANCETYPE(op) \
	op(FAIDistanceType::Distance3D) \
	op(FAIDistanceType::Distance2D) \
	op(FAIDistanceType::DistanceZ) 

enum class FAIDistanceType : uint8;
template<> struct TIsUEnumClass<FAIDistanceType> { enum { Value = true }; };
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<FAIDistanceType>();
// ********** End Enum FAIDistanceType *************************************************************

// ********** Begin Enum EAIRequestPriority ********************************************************
#define FOREACH_ENUM_EAIREQUESTPRIORITY(op) \
	op(EAIRequestPriority::SoftScript) \
	op(EAIRequestPriority::Logic) \
	op(EAIRequestPriority::HardScript) \
	op(EAIRequestPriority::Reaction) \
	op(EAIRequestPriority::Ultimate) 

namespace EAIRequestPriority { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAIRequestPriority::Type>();
// ********** End Enum EAIRequestPriority **********************************************************

// ********** Begin Enum EAILockSource *************************************************************
#define FOREACH_ENUM_EAILOCKSOURCE(op) \
	op(EAILockSource::Animation) \
	op(EAILockSource::Logic) \
	op(EAILockSource::Script) \
	op(EAILockSource::Gameplay) 

namespace EAILockSource { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAILockSource::Type>();
// ********** End Enum EAILockSource ***************************************************************

// ********** Begin Enum EGenericAICheck ***********************************************************
#define FOREACH_ENUM_EGENERICAICHECK(op) \
	op(EGenericAICheck::Less) \
	op(EGenericAICheck::LessOrEqual) \
	op(EGenericAICheck::Equal) \
	op(EGenericAICheck::NotEqual) \
	op(EGenericAICheck::GreaterOrEqual) \
	op(EGenericAICheck::Greater) \
	op(EGenericAICheck::IsTrue) 

enum class EGenericAICheck : uint8;
template<> struct TIsUEnumClass<EGenericAICheck> { enum { Value = true }; };
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGenericAICheck>();
// ********** End Enum EGenericAICheck *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
