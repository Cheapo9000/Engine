// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimBlueprintExtension_StateMachine.h"

#ifdef ANIMGRAPH_AnimBlueprintExtension_StateMachine_generated_h
#error "AnimBlueprintExtension_StateMachine.generated.h already included, missing '#pragma once' in AnimBlueprintExtension_StateMachine.h"
#endif
#define ANIMGRAPH_AnimBlueprintExtension_StateMachine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimBlueprintExtension_StateMachine *************************************
struct Z_Construct_UClass_UAnimBlueprintExtension_StateMachine_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_StateMachine_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_StateMachine_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimBlueprintExtension_StateMachine(); \
	friend struct ::Z_Construct_UClass_UAnimBlueprintExtension_StateMachine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimBlueprintExtension_StateMachine_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBlueprintExtension_StateMachine, UAnimBlueprintExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimBlueprintExtension_StateMachine_NoRegister) \
	DECLARE_SERIALIZER(UAnimBlueprintExtension_StateMachine)


#define FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_StateMachine_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimBlueprintExtension_StateMachine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBlueprintExtension_StateMachine(UAnimBlueprintExtension_StateMachine&&) = delete; \
	UAnimBlueprintExtension_StateMachine(const UAnimBlueprintExtension_StateMachine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimBlueprintExtension_StateMachine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprintExtension_StateMachine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprintExtension_StateMachine) \
	ANIMGRAPH_API virtual ~UAnimBlueprintExtension_StateMachine();


#define FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_StateMachine_h_22_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_StateMachine_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_StateMachine_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_StateMachine_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBlueprintExtension_StateMachine;

// ********** End Class UAnimBlueprintExtension_StateMachine ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_StateMachine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
