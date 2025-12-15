// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/BoneMaskFilter.h"

#ifdef ENGINE_BoneMaskFilter_generated_h
#error "BoneMaskFilter.generated.h already included, missing '#pragma once' in BoneMaskFilter.h"
#endif
#define ENGINE_BoneMaskFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBranchFilter *****************************************************
struct Z_Construct_UScriptStruct_FBranchFilter_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBranchFilter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBranchFilter;
// ********** End ScriptStruct FBranchFilter *******************************************************

// ********** Begin ScriptStruct FInputBlendPose ***************************************************
struct Z_Construct_UScriptStruct_FInputBlendPose_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputBlendPose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInputBlendPose;
// ********** End ScriptStruct FInputBlendPose *****************************************************

// ********** Begin Class UBoneMaskFilter **********************************************************
struct Z_Construct_UClass_UBoneMaskFilter_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBoneMaskFilter_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUBoneMaskFilter(); \
	friend struct ::Z_Construct_UClass_UBoneMaskFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBoneMaskFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoneMaskFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBoneMaskFilter_NoRegister) \
	DECLARE_SERIALIZER(UBoneMaskFilter)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBoneMaskFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoneMaskFilter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBoneMaskFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneMaskFilter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoneMaskFilter(UBoneMaskFilter&&) = delete; \
	UBoneMaskFilter(const UBoneMaskFilter&) = delete; \
	ENGINE_API virtual ~UBoneMaskFilter();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_42_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoneMaskFilter;

// ********** End Class UBoneMaskFilter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
