// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_LinkedAnimLayer.h"

#ifdef ANIMGRAPH_AnimGraphNode_LinkedAnimLayer_generated_h
#error "AnimGraphNode_LinkedAnimLayer.generated.h already included, missing '#pragma once' in AnimGraphNode_LinkedAnimLayer.h"
#endif
#define ANIMGRAPH_AnimGraphNode_LinkedAnimLayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_LinkedAnimLayer *******************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_LinkedAnimLayer, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_LinkedAnimLayer(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_LinkedAnimLayer, UAnimGraphNode_LinkedAnimGraphBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_LinkedAnimLayer) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_21_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_LinkedAnimLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_LinkedAnimLayer(UAnimGraphNode_LinkedAnimLayer&&) = delete; \
	UAnimGraphNode_LinkedAnimLayer(const UAnimGraphNode_LinkedAnimLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_LinkedAnimLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LinkedAnimLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_LinkedAnimLayer) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_LinkedAnimLayer();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_18_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_LinkedAnimLayer;

// ********** End Class UAnimGraphNode_LinkedAnimLayer *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
