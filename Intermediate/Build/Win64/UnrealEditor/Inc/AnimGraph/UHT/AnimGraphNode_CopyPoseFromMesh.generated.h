// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_CopyPoseFromMesh.h"

#ifdef ANIMGRAPH_AnimGraphNode_CopyPoseFromMesh_generated_h
#error "AnimGraphNode_CopyPoseFromMesh.generated.h already included, missing '#pragma once' in AnimGraphNode_CopyPoseFromMesh.h"
#endif
#define ANIMGRAPH_AnimGraphNode_CopyPoseFromMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_CopyPoseFromMesh ******************************************
struct Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_CopyPoseFromMesh(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_CopyPoseFromMesh, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_CopyPoseFromMesh)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_CopyPoseFromMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_CopyPoseFromMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_CopyPoseFromMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_CopyPoseFromMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_CopyPoseFromMesh(UAnimGraphNode_CopyPoseFromMesh&&) = delete; \
	UAnimGraphNode_CopyPoseFromMesh(const UAnimGraphNode_CopyPoseFromMesh&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_CopyPoseFromMesh();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_14_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_CopyPoseFromMesh;

// ********** End Class UAnimGraphNode_CopyPoseFromMesh ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
