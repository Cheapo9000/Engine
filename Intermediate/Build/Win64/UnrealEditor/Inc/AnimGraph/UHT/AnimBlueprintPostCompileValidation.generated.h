// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimBlueprintPostCompileValidation.h"

#ifdef ANIMGRAPH_AnimBlueprintPostCompileValidation_generated_h
#error "AnimBlueprintPostCompileValidation.generated.h already included, missing '#pragma once' in AnimBlueprintPostCompileValidation.h"
#endif
#define ANIMGRAPH_AnimBlueprintPostCompileValidation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimBlueprintPostCompileValidation **************************************
struct Z_Construct_UClass_UAnimBlueprintPostCompileValidation_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintPostCompileValidation_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBlueprintPostCompileValidation(); \
	friend struct ::Z_Construct_UClass_UAnimBlueprintPostCompileValidation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimBlueprintPostCompileValidation_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBlueprintPostCompileValidation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimBlueprintPostCompileValidation_NoRegister) \
	DECLARE_SERIALIZER(UAnimBlueprintPostCompileValidation)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimBlueprintPostCompileValidation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprintPostCompileValidation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimBlueprintPostCompileValidation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprintPostCompileValidation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBlueprintPostCompileValidation(UAnimBlueprintPostCompileValidation&&) = delete; \
	UAnimBlueprintPostCompileValidation(const UAnimBlueprintPostCompileValidation&) = delete; \
	ANIMGRAPH_API virtual ~UAnimBlueprintPostCompileValidation();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_40_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_43_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBlueprintPostCompileValidation;

// ********** End Class UAnimBlueprintPostCompileValidation ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
