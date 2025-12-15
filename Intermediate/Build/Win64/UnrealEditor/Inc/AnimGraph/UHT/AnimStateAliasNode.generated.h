// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimStateAliasNode.h"

#ifdef ANIMGRAPH_AnimStateAliasNode_generated_h
#error "AnimStateAliasNode.generated.h already included, missing '#pragma once' in AnimStateAliasNode.h"
#endif
#define ANIMGRAPH_AnimStateAliasNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimStateAliasNode ******************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateAliasNode, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimStateAliasNode_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateAliasNode_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateAliasNode(); \
	friend struct ::Z_Construct_UClass_UAnimStateAliasNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimStateAliasNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimStateAliasNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimStateAliasNode_NoRegister) \
	DECLARE_SERIALIZER(UAnimStateAliasNode) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_29_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateAliasNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateAliasNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateAliasNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateAliasNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimStateAliasNode(UAnimStateAliasNode&&) = delete; \
	UAnimStateAliasNode(const UAnimStateAliasNode&) = delete; \
	ANIMGRAPH_API virtual ~UAnimStateAliasNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_26_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_29_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimStateAliasNode;

// ********** End Class UAnimStateAliasNode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
