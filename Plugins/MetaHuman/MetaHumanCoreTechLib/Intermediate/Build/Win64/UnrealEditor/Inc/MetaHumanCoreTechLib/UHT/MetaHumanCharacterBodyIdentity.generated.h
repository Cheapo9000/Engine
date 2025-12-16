// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterBodyIdentity.h"

#ifdef METAHUMANCORETECHLIB_MetaHumanCharacterBodyIdentity_generated_h
#error "MetaHumanCharacterBodyIdentity.generated.h already included, missing '#pragma once' in MetaHumanCharacterBodyIdentity.h"
#endif
#define METAHUMANCORETECHLIB_MetaHumanCharacterBodyIdentity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConformBodyParams ************************************************
struct Z_Construct_UScriptStruct_FConformBodyParams_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTechLib_Public_MetaHumanCharacterBodyIdentity_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConformBodyParams_Statics; \
	METAHUMANCORETECHLIB_API static class UScriptStruct* StaticStruct();


struct FConformBodyParams;
// ********** End ScriptStruct FConformBodyParams **************************************************

// ********** Begin ScriptStruct FMetaHumanCharacterBodyConstraint *********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterBodyConstraint_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTechLib_Public_MetaHumanCharacterBodyIdentity_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterBodyConstraint_Statics; \
	METAHUMANCORETECHLIB_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterBodyConstraint;
// ********** End ScriptStruct FMetaHumanCharacterBodyConstraint ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTechLib_Public_MetaHumanCharacterBodyIdentity_h

// ********** Begin Enum EBodyBlendOptions *********************************************************
#define FOREACH_ENUM_EBODYBLENDOPTIONS(op) \
	op(EBodyBlendOptions::Skeleton) \
	op(EBodyBlendOptions::Shape) \
	op(EBodyBlendOptions::Both) 

enum class EBodyBlendOptions : uint8;
template<> struct TIsUEnumClass<EBodyBlendOptions> { enum { Value = true }; };
template<> METAHUMANCORETECHLIB_NON_ATTRIBUTED_API UEnum* StaticEnum<EBodyBlendOptions>();
// ********** End Enum EBodyBlendOptions ***********************************************************

// ********** Begin Enum EMetaHumanCharacterBodyFitOptions *****************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERBODYFITOPTIONS(op) \
	op(EMetaHumanCharacterBodyFitOptions::FitFromMeshOnly) \
	op(EMetaHumanCharacterBodyFitOptions::FitFromMeshAndSkeleton) \
	op(EMetaHumanCharacterBodyFitOptions::FitFromMeshToFixedSkeleton) 

enum class EMetaHumanCharacterBodyFitOptions : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterBodyFitOptions> { enum { Value = true }; };
template<> METAHUMANCORETECHLIB_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterBodyFitOptions>();
// ********** End Enum EMetaHumanCharacterBodyFitOptions *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
