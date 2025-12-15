// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_BlendListByInt.h"

#ifdef ANIMGRAPH_AnimGraphNode_BlendListByInt_generated_h
#error "AnimGraphNode_BlendListByInt.generated.h already included, missing '#pragma once' in AnimGraphNode_BlendListByInt.h"
#endif
#define ANIMGRAPH_AnimGraphNode_BlendListByInt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_BlendListByInt ********************************************
struct Z_Construct_UClass_UAnimGraphNode_BlendListByInt_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendListByInt_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByInt_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendListByInt(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_BlendListByInt_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_BlendListByInt_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_BlendListByInt, UAnimGraphNode_BlendListBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_BlendListByInt_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendListByInt)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByInt_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListByInt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BlendListByInt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_BlendListByInt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendListByInt); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_BlendListByInt(UAnimGraphNode_BlendListByInt&&) = delete; \
	UAnimGraphNode_BlendListByInt(const UAnimGraphNode_BlendListByInt&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_BlendListByInt();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByInt_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByInt_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByInt_h_14_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByInt_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_BlendListByInt;

// ********** End Class UAnimGraphNode_BlendListByInt **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListByInt_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
