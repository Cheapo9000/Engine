// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationStateMachineSchema.h"

#ifdef ANIMGRAPH_AnimationStateMachineSchema_generated_h
#error "AnimationStateMachineSchema.generated.h already included, missing '#pragma once' in AnimationStateMachineSchema.h"
#endif
#define ANIMGRAPH_AnimationStateMachineSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEdGraphSchemaAction_NewStateNode *********************************
struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics;
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FEdGraphSchemaAction_NewStateNode;
// ********** End ScriptStruct FEdGraphSchemaAction_NewStateNode ***********************************

// ********** Begin ScriptStruct FEdGraphSchemaAction_NewStateComment ******************************
struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics;
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FEdGraphSchemaAction_NewStateComment;
// ********** End ScriptStruct FEdGraphSchemaAction_NewStateComment ********************************

// ********** Begin Class UAnimationStateMachineSchema *********************************************
struct Z_Construct_UClass_UAnimationStateMachineSchema_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineSchema_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationStateMachineSchema(); \
	friend struct ::Z_Construct_UClass_UAnimationStateMachineSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimationStateMachineSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationStateMachineSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimationStateMachineSchema_NoRegister) \
	DECLARE_SERIALIZER(UAnimationStateMachineSchema)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationStateMachineSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationStateMachineSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationStateMachineSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationStateMachineSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationStateMachineSchema(UAnimationStateMachineSchema&&) = delete; \
	UAnimationStateMachineSchema(const UAnimationStateMachineSchema&) = delete; \
	ANIMGRAPH_API virtual ~UAnimationStateMachineSchema();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_69_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_72_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationStateMachineSchema;

// ********** End Class UAnimationStateMachineSchema ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
