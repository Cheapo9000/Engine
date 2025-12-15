// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AimOffsetBlendSpace1D.h"

#ifdef ENGINE_AimOffsetBlendSpace1D_generated_h
#error "AimOffsetBlendSpace1D.generated.h already included, missing '#pragma once' in AimOffsetBlendSpace1D.h"
#endif
#define ENGINE_AimOffsetBlendSpace1D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAimOffsetBlendSpace1D ***************************************************
struct Z_Construct_UClass_UAimOffsetBlendSpace1D_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace1D_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace1D_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAimOffsetBlendSpace1D(); \
	friend struct ::Z_Construct_UClass_UAimOffsetBlendSpace1D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAimOffsetBlendSpace1D_NoRegister(); \
public: \
	DECLARE_CLASS2(UAimOffsetBlendSpace1D, UBlendSpace1D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAimOffsetBlendSpace1D_NoRegister) \
	DECLARE_SERIALIZER(UAimOffsetBlendSpace1D)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace1D_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAimOffsetBlendSpace1D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimOffsetBlendSpace1D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAimOffsetBlendSpace1D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimOffsetBlendSpace1D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAimOffsetBlendSpace1D(UAimOffsetBlendSpace1D&&) = delete; \
	UAimOffsetBlendSpace1D(const UAimOffsetBlendSpace1D&) = delete; \
	ENGINE_API virtual ~UAimOffsetBlendSpace1D();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace1D_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace1D_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace1D_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace1D_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAimOffsetBlendSpace1D;

// ********** End Class UAimOffsetBlendSpace1D *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace1D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
