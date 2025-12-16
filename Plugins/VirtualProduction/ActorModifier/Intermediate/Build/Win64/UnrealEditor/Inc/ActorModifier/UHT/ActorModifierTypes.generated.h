// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorModifierTypes.h"

#ifdef ACTORMODIFIER_ActorModifierTypes_generated_h
#error "ActorModifierTypes.generated.h already included, missing '#pragma once' in ActorModifierTypes.h"
#endif
#define ACTORMODIFIER_ActorModifierTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActorModifierAnchorAlignment *************************************
struct Z_Construct_UScriptStruct_FActorModifierAnchorAlignment_Statics;
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_ActorModifierTypes_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorModifierAnchorAlignment_Statics; \
	ACTORMODIFIER_API static class UScriptStruct* StaticStruct();


struct FActorModifierAnchorAlignment;
// ********** End ScriptStruct FActorModifierAnchorAlignment ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_ActorModifierTypes_h

// ********** Begin Enum EActorModifierAxis ********************************************************
#define FOREACH_ENUM_EACTORMODIFIERAXIS(op) \
	op(EActorModifierAxis::None) \
	op(EActorModifierAxis::X) \
	op(EActorModifierAxis::Y) \
	op(EActorModifierAxis::Z) 

enum class EActorModifierAxis : uint8;
template<> struct TIsUEnumClass<EActorModifierAxis> { enum { Value = true }; };
template<> ACTORMODIFIER_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierAxis>();
// ********** End Enum EActorModifierAxis **********************************************************

// ********** Begin Enum EActorModifierVerticalAlignment *******************************************
#define FOREACH_ENUM_EACTORMODIFIERVERTICALALIGNMENT(op) \
	op(EActorModifierVerticalAlignment::Top) \
	op(EActorModifierVerticalAlignment::Center) \
	op(EActorModifierVerticalAlignment::Bottom) 

enum class EActorModifierVerticalAlignment : uint8;
template<> struct TIsUEnumClass<EActorModifierVerticalAlignment> { enum { Value = true }; };
template<> ACTORMODIFIER_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierVerticalAlignment>();
// ********** End Enum EActorModifierVerticalAlignment *********************************************

// ********** Begin Enum EActorModifierHorizontalAlignment *****************************************
#define FOREACH_ENUM_EACTORMODIFIERHORIZONTALALIGNMENT(op) \
	op(EActorModifierHorizontalAlignment::Left) \
	op(EActorModifierHorizontalAlignment::Center) \
	op(EActorModifierHorizontalAlignment::Right) 

enum class EActorModifierHorizontalAlignment : uint8;
template<> struct TIsUEnumClass<EActorModifierHorizontalAlignment> { enum { Value = true }; };
template<> ACTORMODIFIER_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierHorizontalAlignment>();
// ********** End Enum EActorModifierHorizontalAlignment *******************************************

// ********** Begin Enum EActorModifierDepthAlignment **********************************************
#define FOREACH_ENUM_EACTORMODIFIERDEPTHALIGNMENT(op) \
	op(EActorModifierDepthAlignment::Front) \
	op(EActorModifierDepthAlignment::Center) \
	op(EActorModifierDepthAlignment::Back) 

enum class EActorModifierDepthAlignment : uint8;
template<> struct TIsUEnumClass<EActorModifierDepthAlignment> { enum { Value = true }; };
template<> ACTORMODIFIER_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierDepthAlignment>();
// ********** End Enum EActorModifierDepthAlignment ************************************************

// ********** Begin Enum EActorModifierAlignment ***************************************************
#define FOREACH_ENUM_EACTORMODIFIERALIGNMENT(op) \
	op(EActorModifierAlignment::Horizontal) \
	op(EActorModifierAlignment::Vertical) \
	op(EActorModifierAlignment::Depth) 

enum class EActorModifierAlignment : uint8;
template<> struct TIsUEnumClass<EActorModifierAlignment> { enum { Value = true }; };
template<> ACTORMODIFIER_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierAlignment>();
// ********** End Enum EActorModifierAlignment *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
