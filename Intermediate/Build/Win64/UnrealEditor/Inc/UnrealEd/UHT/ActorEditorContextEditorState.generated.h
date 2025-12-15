// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorState/ActorEditorContextEditorState.h"

#ifdef UNREALED_ActorEditorContextEditorState_generated_h
#error "ActorEditorContextEditorState.generated.h already included, missing '#pragma once' in ActorEditorContextEditorState.h"
#endif
#define UNREALED_ActorEditorContextEditorState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorEditorContextEditorState *******************************************
struct Z_Construct_UClass_UActorEditorContextEditorState_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorEditorContextEditorState_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_ActorEditorContextEditorState_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUActorEditorContextEditorState(); \
	friend struct ::Z_Construct_UClass_UActorEditorContextEditorState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorEditorContextEditorState_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorEditorContextEditorState, UWorldDependantEditorState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorEditorContextEditorState_NoRegister) \
	DECLARE_SERIALIZER(UActorEditorContextEditorState)


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_ActorEditorContextEditorState_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorEditorContextEditorState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorEditorContextEditorState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorEditorContextEditorState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorEditorContextEditorState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorEditorContextEditorState(UActorEditorContextEditorState&&) = delete; \
	UActorEditorContextEditorState(const UActorEditorContextEditorState&) = delete; \
	UNREALED_API virtual ~UActorEditorContextEditorState();


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_ActorEditorContextEditorState_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_ActorEditorContextEditorState_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorState_ActorEditorContextEditorState_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorState_ActorEditorContextEditorState_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorEditorContextEditorState;

// ********** End Class UActorEditorContextEditorState *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_EditorState_ActorEditorContextEditorState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
