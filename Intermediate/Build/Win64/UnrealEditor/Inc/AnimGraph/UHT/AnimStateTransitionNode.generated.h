// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimStateTransitionNode.h"

#ifdef ANIMGRAPH_AnimStateTransitionNode_generated_h
#error "AnimStateTransitionNode.generated.h already included, missing '#pragma once' in AnimStateTransitionNode.h"
#endif
#define ANIMGRAPH_AnimStateTransitionNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimStateTransitionNode *************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateTransitionNode, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimStateTransitionNode_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateTransitionNode_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateTransitionNode(); \
	friend struct ::Z_Construct_UClass_UAnimStateTransitionNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimStateTransitionNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimStateTransitionNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimStateTransitionNode_NoRegister) \
	DECLARE_SERIALIZER(UAnimStateTransitionNode) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateTransitionNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateTransitionNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateTransitionNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateTransitionNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimStateTransitionNode(UAnimStateTransitionNode&&) = delete; \
	UAnimStateTransitionNode(const UAnimStateTransitionNode&) = delete; \
	ANIMGRAPH_API virtual ~UAnimStateTransitionNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_19_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimStateTransitionNode;

// ********** End Class UAnimStateTransitionNode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
