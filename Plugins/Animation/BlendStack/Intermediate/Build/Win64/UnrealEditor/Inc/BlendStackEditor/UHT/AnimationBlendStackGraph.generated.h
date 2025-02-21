// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationBlendStackGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLENDSTACKEDITOR_AnimationBlendStackGraph_generated_h
#error "AnimationBlendStackGraph.generated.h already included, missing '#pragma once' in AnimationBlendStackGraph.h"
#endif
#define BLENDSTACKEDITOR_AnimationBlendStackGraph_generated_h

#define FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraph_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationBlendStackGraph(); \
	friend struct Z_Construct_UClass_UAnimationBlendStackGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationBlendStackGraph, UAnimationGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlendStackEditor"), BLENDSTACKEDITOR_API) \
	DECLARE_SERIALIZER(UAnimationBlendStackGraph)


#define FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraph_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLENDSTACKEDITOR_API UAnimationBlendStackGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationBlendStackGraph(UAnimationBlendStackGraph&&); \
	UAnimationBlendStackGraph(const UAnimationBlendStackGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLENDSTACKEDITOR_API, UAnimationBlendStackGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBlendStackGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBlendStackGraph) \
	BLENDSTACKEDITOR_API virtual ~UAnimationBlendStackGraph();


#define FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraph_h_14_PROLOG
#define FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraph_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraph_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraph_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLENDSTACKEDITOR_API UClass* StaticClass<class UAnimationBlendStackGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
