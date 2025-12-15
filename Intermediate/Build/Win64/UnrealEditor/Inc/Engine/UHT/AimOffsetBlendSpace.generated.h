// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AimOffsetBlendSpace.h"

#ifdef ENGINE_AimOffsetBlendSpace_generated_h
#error "AimOffsetBlendSpace.generated.h already included, missing '#pragma once' in AimOffsetBlendSpace.h"
#endif
#define ENGINE_AimOffsetBlendSpace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAimOffsetBlendSpace *****************************************************
struct Z_Construct_UClass_UAimOffsetBlendSpace_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAimOffsetBlendSpace(); \
	friend struct ::Z_Construct_UClass_UAimOffsetBlendSpace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister(); \
public: \
	DECLARE_CLASS2(UAimOffsetBlendSpace, UBlendSpace, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister) \
	DECLARE_SERIALIZER(UAimOffsetBlendSpace)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAimOffsetBlendSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimOffsetBlendSpace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAimOffsetBlendSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimOffsetBlendSpace); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAimOffsetBlendSpace(UAimOffsetBlendSpace&&) = delete; \
	UAimOffsetBlendSpace(const UAimOffsetBlendSpace&) = delete; \
	ENGINE_API virtual ~UAimOffsetBlendSpace();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAimOffsetBlendSpace;

// ********** End Class UAimOffsetBlendSpace *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
