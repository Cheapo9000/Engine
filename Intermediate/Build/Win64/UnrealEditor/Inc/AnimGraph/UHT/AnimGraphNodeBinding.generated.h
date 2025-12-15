// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNodeBinding.h"

#ifdef ANIMGRAPH_AnimGraphNodeBinding_generated_h
#error "AnimGraphNodeBinding.generated.h already included, missing '#pragma once' in AnimGraphNodeBinding.h"
#endif
#define ANIMGRAPH_AnimGraphNodeBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNodeBinding ****************************************************
struct Z_Construct_UClass_UAnimGraphNodeBinding_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNodeBinding_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Internal_AnimGraphNodeBinding_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNodeBinding(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNodeBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNodeBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNodeBinding, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNodeBinding_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNodeBinding)


#define FID_Engine_Source_Editor_AnimGraph_Internal_AnimGraphNodeBinding_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNodeBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNodeBinding(UAnimGraphNodeBinding&&) = delete; \
	UAnimGraphNodeBinding(const UAnimGraphNodeBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNodeBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNodeBinding); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNodeBinding) \
	ANIMGRAPH_API virtual ~UAnimGraphNodeBinding();


#define FID_Engine_Source_Editor_AnimGraph_Internal_AnimGraphNodeBinding_h_15_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Internal_AnimGraphNodeBinding_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Internal_AnimGraphNodeBinding_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Internal_AnimGraphNodeBinding_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNodeBinding;

// ********** End Class UAnimGraphNodeBinding ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Internal_AnimGraphNodeBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
