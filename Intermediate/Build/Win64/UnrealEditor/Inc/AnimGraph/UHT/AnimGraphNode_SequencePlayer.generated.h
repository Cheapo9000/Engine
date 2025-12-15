// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_SequencePlayer.h"

#ifdef ANIMGRAPH_AnimGraphNode_SequencePlayer_generated_h
#error "AnimGraphNode_SequencePlayer.generated.h already included, missing '#pragma once' in AnimGraphNode_SequencePlayer.h"
#endif
#define ANIMGRAPH_AnimGraphNode_SequencePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_SequencePlayer ********************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_SequencePlayer, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SequencePlayer_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_SequencePlayer(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_SequencePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_SequencePlayer, UAnimGraphNode_AssetPlayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_SequencePlayer_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_SequencePlayer) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_SequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_SequencePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_SequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_SequencePlayer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_SequencePlayer(UAnimGraphNode_SequencePlayer&&) = delete; \
	UAnimGraphNode_SequencePlayer(const UAnimGraphNode_SequencePlayer&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_SequencePlayer();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_14_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_17_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_SequencePlayer;

// ********** End Class UAnimGraphNode_SequencePlayer **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
