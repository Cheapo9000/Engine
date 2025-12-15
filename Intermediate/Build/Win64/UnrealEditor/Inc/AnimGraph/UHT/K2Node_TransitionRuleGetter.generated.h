// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_TransitionRuleGetter.h"

#ifdef ANIMGRAPH_K2Node_TransitionRuleGetter_generated_h
#error "K2Node_TransitionRuleGetter.generated.h already included, missing '#pragma once' in K2Node_TransitionRuleGetter.h"
#endif
#define ANIMGRAPH_K2Node_TransitionRuleGetter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_TransitionRuleGetter *********************************************
struct Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_TransitionRuleGetter_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_TransitionRuleGetter(); \
	friend struct ::Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_TransitionRuleGetter_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_TransitionRuleGetter, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UK2Node_TransitionRuleGetter_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_TransitionRuleGetter)


#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UK2Node_TransitionRuleGetter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_TransitionRuleGetter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UK2Node_TransitionRuleGetter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_TransitionRuleGetter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_TransitionRuleGetter(UK2Node_TransitionRuleGetter&&) = delete; \
	UK2Node_TransitionRuleGetter(const UK2Node_TransitionRuleGetter&) = delete; \
	ANIMGRAPH_API virtual ~UK2Node_TransitionRuleGetter();


#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_44_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_47_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_TransitionRuleGetter;

// ********** End Class UK2Node_TransitionRuleGetter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h

// ********** Begin Enum ETransitionGetter *********************************************************
#define FOREACH_ENUM_ETRANSITIONGETTER(op) \
	op(ETransitionGetter::AnimationAsset_GetCurrentTime) \
	op(ETransitionGetter::AnimationAsset_GetLength) \
	op(ETransitionGetter::AnimationAsset_GetCurrentTimeFraction) \
	op(ETransitionGetter::AnimationAsset_GetTimeFromEnd) \
	op(ETransitionGetter::AnimationAsset_GetTimeFromEndFraction) \
	op(ETransitionGetter::CurrentState_ElapsedTime) \
	op(ETransitionGetter::CurrentState_GetBlendWeight) \
	op(ETransitionGetter::CurrentTransitionDuration) \
	op(ETransitionGetter::ArbitraryState_GetBlendWeight) 

namespace ETransitionGetter { enum Type : int; }
template<> ANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransitionGetter::Type>();
// ********** End Enum ETransitionGetter ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
