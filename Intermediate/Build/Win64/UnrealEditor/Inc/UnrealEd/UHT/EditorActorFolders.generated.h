// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorActorFolders.h"

#ifdef UNREALED_EditorActorFolders_generated_h
#error "EditorActorFolders.generated.h already included, missing '#pragma once' in EditorActorFolders.h"
#endif
#define UNREALED_EditorActorFolders_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorEditorContextActorFolderState **************************************
struct Z_Construct_UClass_UActorEditorContextActorFolderState_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorEditorContextActorFolderState_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_EditorActorFolders_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorEditorContextActorFolderState(); \
	friend struct ::Z_Construct_UClass_UActorEditorContextActorFolderState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorEditorContextActorFolderState_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorEditorContextActorFolderState, UActorEditorContextClientState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorEditorContextActorFolderState_NoRegister) \
	DECLARE_SERIALIZER(UActorEditorContextActorFolderState)


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorActorFolders_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorEditorContextActorFolderState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorEditorContextActorFolderState(UActorEditorContextActorFolderState&&) = delete; \
	UActorEditorContextActorFolderState(const UActorEditorContextActorFolderState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorEditorContextActorFolderState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorEditorContextActorFolderState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorEditorContextActorFolderState) \
	NO_API virtual ~UActorEditorContextActorFolderState();


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorActorFolders_h_34_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_EditorActorFolders_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorActorFolders_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorActorFolders_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorEditorContextActorFolderState;

// ********** End Class UActorEditorContextActorFolderState ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_EditorActorFolders_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
