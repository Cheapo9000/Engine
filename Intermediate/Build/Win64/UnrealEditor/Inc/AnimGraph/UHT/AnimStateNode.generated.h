// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimStateNode.h"

#ifdef ANIMGRAPH_AnimStateNode_generated_h
#error "AnimStateNode.generated.h already included, missing '#pragma once' in AnimStateNode.h"
#endif
#define ANIMGRAPH_AnimStateNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimStateNode ***********************************************************
struct Z_Construct_UClass_UAnimStateNode_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNode_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateNode(); \
	friend struct ::Z_Construct_UClass_UAnimStateNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimStateNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimStateNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimStateNode_NoRegister) \
	DECLARE_SERIALIZER(UAnimStateNode)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimStateNode(UAnimStateNode&&) = delete; \
	UAnimStateNode(const UAnimStateNode&) = delete; \
	ANIMGRAPH_API virtual ~UAnimStateNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_23_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_26_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimStateNode;

// ********** End Class UAnimStateNode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h

// ********** Begin Enum EAnimStateType ************************************************************
#define FOREACH_ENUM_EANIMSTATETYPE(op) \
	op(AST_SingleAnimation) \
	op(AST_BlendGraph) 

enum EAnimStateType : int;
template<> ANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimStateType>();
// ********** End Enum EAnimStateType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
