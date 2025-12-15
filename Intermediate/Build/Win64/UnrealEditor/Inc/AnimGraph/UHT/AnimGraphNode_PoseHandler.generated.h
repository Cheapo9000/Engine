// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_PoseHandler.h"

#ifdef ANIMGRAPH_AnimGraphNode_PoseHandler_generated_h
#error "AnimGraphNode_PoseHandler.generated.h already included, missing '#pragma once' in AnimGraphNode_PoseHandler.h"
#endif
#define ANIMGRAPH_AnimGraphNode_PoseHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_PoseHandler ***********************************************
struct Z_Construct_UClass_UAnimGraphNode_PoseHandler_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseHandler_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_PoseHandler(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_PoseHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_PoseHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_PoseHandler, UAnimGraphNode_AssetPlayerBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_PoseHandler_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_PoseHandler)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_PoseHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_PoseHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_PoseHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_PoseHandler); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_PoseHandler(UAnimGraphNode_PoseHandler&&) = delete; \
	UAnimGraphNode_PoseHandler(const UAnimGraphNode_PoseHandler&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_PoseHandler();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_15_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_PoseHandler;

// ********** End Class UAnimGraphNode_PoseHandler *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
