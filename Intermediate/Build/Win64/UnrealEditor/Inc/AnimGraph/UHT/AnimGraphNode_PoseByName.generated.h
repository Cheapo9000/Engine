// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_PoseByName.h"

#ifdef ANIMGRAPH_AnimGraphNode_PoseByName_generated_h
#error "AnimGraphNode_PoseByName.generated.h already included, missing '#pragma once' in AnimGraphNode_PoseByName.h"
#endif
#define ANIMGRAPH_AnimGraphNode_PoseByName_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_PoseByName ************************************************
struct Z_Construct_UClass_UAnimGraphNode_PoseByName_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseByName_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseByName_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_PoseByName(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_PoseByName_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_PoseByName_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_PoseByName, UAnimGraphNode_AssetPlayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_PoseByName_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_PoseByName)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseByName_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_PoseByName(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_PoseByName) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_PoseByName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_PoseByName); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_PoseByName(UAnimGraphNode_PoseByName&&) = delete; \
	UAnimGraphNode_PoseByName(const UAnimGraphNode_PoseByName&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_PoseByName();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseByName_h_14_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseByName_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseByName_h_17_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseByName_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_PoseByName;

// ********** End Class UAnimGraphNode_PoseByName **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseByName_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
