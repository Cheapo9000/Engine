// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNodeBinding_Base.h"

#ifdef ANIMGRAPH_AnimGraphNodeBinding_Base_generated_h
#error "AnimGraphNodeBinding_Base.generated.h already included, missing '#pragma once' in AnimGraphNodeBinding_Base.h"
#endif
#define ANIMGRAPH_AnimGraphNodeBinding_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNodeBinding_Base ***********************************************
struct Z_Construct_UClass_UAnimGraphNodeBinding_Base_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNodeBinding_Base_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNodeBinding_Base_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNodeBinding_Base(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNodeBinding_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNodeBinding_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNodeBinding_Base, UAnimGraphNodeBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNodeBinding_Base_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNodeBinding_Base)


#define FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNodeBinding_Base_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNodeBinding_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNodeBinding_Base(UAnimGraphNodeBinding_Base&&) = delete; \
	UAnimGraphNodeBinding_Base(const UAnimGraphNodeBinding_Base&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNodeBinding_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNodeBinding_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNodeBinding_Base) \
	NO_API virtual ~UAnimGraphNodeBinding_Base();


#define FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNodeBinding_Base_h_8_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNodeBinding_Base_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNodeBinding_Base_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNodeBinding_Base_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNodeBinding_Base;

// ********** End Class UAnimGraphNodeBinding_Base *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNodeBinding_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
