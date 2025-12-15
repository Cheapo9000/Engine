// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_Mirror.h"

#ifdef ANIMGRAPH_AnimGraphNode_Mirror_generated_h
#error "AnimGraphNode_Mirror.generated.h already included, missing '#pragma once' in AnimGraphNode_Mirror.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Mirror_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_Mirror ****************************************************
struct Z_Construct_UClass_UAnimGraphNode_Mirror_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Mirror_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Mirror(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_Mirror_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_Mirror_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_Mirror, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_Mirror_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_Mirror)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Mirror(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_Mirror(UAnimGraphNode_Mirror&&) = delete; \
	UAnimGraphNode_Mirror(const UAnimGraphNode_Mirror&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Mirror); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Mirror); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Mirror) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_Mirror();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_Mirror;

// ********** End Class UAnimGraphNode_Mirror ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
