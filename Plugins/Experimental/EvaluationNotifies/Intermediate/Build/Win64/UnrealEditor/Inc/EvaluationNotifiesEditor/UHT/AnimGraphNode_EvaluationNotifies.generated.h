// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraph/AnimGraphNode_EvaluationNotifies.h"

#ifdef EVALUATIONNOTIFIESEDITOR_AnimGraphNode_EvaluationNotifies_generated_h
#error "AnimGraphNode_EvaluationNotifies.generated.h already included, missing '#pragma once' in AnimGraphNode_EvaluationNotifies.h"
#endif
#define EVALUATIONNOTIFIESEDITOR_AnimGraphNode_EvaluationNotifies_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_EvaluationNotifies ****************************************
struct Z_Construct_UClass_UAnimGraphNode_EvaluationNotifies_Statics;
EVALUATIONNOTIFIESEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_EvaluationNotifies_NoRegister();

#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Editor_Public_AnimGraph_AnimGraphNode_EvaluationNotifies_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_EvaluationNotifies(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_EvaluationNotifies_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EVALUATIONNOTIFIESEDITOR_API UClass* ::Z_Construct_UClass_UAnimGraphNode_EvaluationNotifies_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_EvaluationNotifies, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EvaluationNotifiesEditor"), Z_Construct_UClass_UAnimGraphNode_EvaluationNotifies_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_EvaluationNotifies)


#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Editor_Public_AnimGraph_AnimGraphNode_EvaluationNotifies_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_EvaluationNotifies(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_EvaluationNotifies) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_EvaluationNotifies); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_EvaluationNotifies); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_EvaluationNotifies(UAnimGraphNode_EvaluationNotifies&&) = delete; \
	UAnimGraphNode_EvaluationNotifies(const UAnimGraphNode_EvaluationNotifies&) = delete; \
	NO_API virtual ~UAnimGraphNode_EvaluationNotifies();


#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Editor_Public_AnimGraph_AnimGraphNode_EvaluationNotifies_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Editor_Public_AnimGraph_AnimGraphNode_EvaluationNotifies_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Editor_Public_AnimGraph_AnimGraphNode_EvaluationNotifies_h_13_INCLASS \
	FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Editor_Public_AnimGraph_AnimGraphNode_EvaluationNotifies_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_EvaluationNotifies;

// ********** End Class UAnimGraphNode_EvaluationNotifies ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EvaluationNotifies_Source_Editor_Public_AnimGraph_AnimGraphNode_EvaluationNotifies_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
