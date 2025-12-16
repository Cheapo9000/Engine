// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FBIKConstraintOption.h"

#ifdef FULLBODYIK_FBIKConstraintOption_generated_h
#error "FBIKConstraintOption.generated.h already included, missing '#pragma once' in FBIKConstraintOption.h"
#endif
#define FULLBODYIK_FBIKConstraintOption_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFBIKBoneLimit ****************************************************
struct Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics;
#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics; \
	FULLBODYIK_API static class UScriptStruct* StaticStruct();


struct FFBIKBoneLimit;
// ********** End ScriptStruct FFBIKBoneLimit ******************************************************

// ********** Begin ScriptStruct FFBIKConstraintOption *********************************************
struct Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics;
#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics; \
	FULLBODYIK_API static class UScriptStruct* StaticStruct();


struct FFBIKConstraintOption;
// ********** End ScriptStruct FFBIKConstraintOption ***********************************************

// ********** Begin ScriptStruct FMotionProcessInput ***********************************************
struct Z_Construct_UScriptStruct_FMotionProcessInput_Statics;
#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_125_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotionProcessInput_Statics; \
	FULLBODYIK_API static class UScriptStruct* StaticStruct();


struct FMotionProcessInput;
// ********** End ScriptStruct FMotionProcessInput *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h

// ********** Begin Enum EFBIKBoneLimitType ********************************************************
#define FOREACH_ENUM_EFBIKBONELIMITTYPE(op) \
	op(EFBIKBoneLimitType::Free) \
	op(EFBIKBoneLimitType::Limit) \
	op(EFBIKBoneLimitType::Locked) 

enum class EFBIKBoneLimitType : uint8;
template<> struct TIsUEnumClass<EFBIKBoneLimitType> { enum { Value = true }; };
template<> FULLBODYIK_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBIKBoneLimitType>();
// ********** End Enum EFBIKBoneLimitType **********************************************************

// ********** Begin Enum EPoleVectorOption *********************************************************
#define FOREACH_ENUM_EPOLEVECTOROPTION(op) \
	op(EPoleVectorOption::Direction) \
	op(EPoleVectorOption::Location) 

enum class EPoleVectorOption : uint8;
template<> struct TIsUEnumClass<EPoleVectorOption> { enum { Value = true }; };
template<> FULLBODYIK_NON_ATTRIBUTED_API UEnum* StaticEnum<EPoleVectorOption>();
// ********** End Enum EPoleVectorOption ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
