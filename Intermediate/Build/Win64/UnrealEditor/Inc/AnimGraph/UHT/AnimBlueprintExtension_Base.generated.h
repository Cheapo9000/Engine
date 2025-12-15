// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimBlueprintExtension_Base.h"

#ifdef ANIMGRAPH_AnimBlueprintExtension_Base_generated_h
#error "AnimBlueprintExtension_Base.generated.h already included, missing '#pragma once' in AnimBlueprintExtension_Base.h"
#endif
#define ANIMGRAPH_AnimBlueprintExtension_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimBlueprintExtension_Base *********************************************
struct Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_Base_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Internal_AnimBlueprintExtension_Base_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimBlueprintExtension_Base(); \
	friend struct ::Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimBlueprintExtension_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBlueprintExtension_Base, UAnimBlueprintExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimBlueprintExtension_Base_NoRegister) \
	DECLARE_SERIALIZER(UAnimBlueprintExtension_Base)


#define FID_Engine_Source_Editor_AnimGraph_Internal_AnimBlueprintExtension_Base_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimBlueprintExtension_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBlueprintExtension_Base(UAnimBlueprintExtension_Base&&) = delete; \
	UAnimBlueprintExtension_Base(const UAnimBlueprintExtension_Base&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimBlueprintExtension_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprintExtension_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprintExtension_Base) \
	ANIMGRAPH_API virtual ~UAnimBlueprintExtension_Base();


#define FID_Engine_Source_Editor_AnimGraph_Internal_AnimBlueprintExtension_Base_h_25_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Internal_AnimBlueprintExtension_Base_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Internal_AnimBlueprintExtension_Base_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Internal_AnimBlueprintExtension_Base_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBlueprintExtension_Base;

// ********** End Class UAnimBlueprintExtension_Base ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Internal_AnimBlueprintExtension_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
