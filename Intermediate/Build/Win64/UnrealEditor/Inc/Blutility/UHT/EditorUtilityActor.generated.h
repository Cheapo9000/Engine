// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityActor.h"

#ifdef BLUTILITY_EditorUtilityActor_generated_h
#error "EditorUtilityActor.generated.h already included, missing '#pragma once' in EditorUtilityActor.h"
#endif
#define BLUTILITY_EditorUtilityActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;

// ********** Begin Class AEditorUtilityActor ******************************************************
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_30_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetReceivesEditorInput); \
	DECLARE_FUNCTION(execSetReceivesEditorInput); \
	DECLARE_FUNCTION(execGetInputComponent);


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_30_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AEditorUtilityActor_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_AEditorUtilityActor_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAEditorUtilityActor(); \
	friend struct ::Z_Construct_UClass_AEditorUtilityActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_AEditorUtilityActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AEditorUtilityActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_AEditorUtilityActor_NoRegister) \
	DECLARE_SERIALIZER(AEditorUtilityActor)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API AEditorUtilityActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEditorUtilityActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, AEditorUtilityActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEditorUtilityActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEditorUtilityActor(AEditorUtilityActor&&) = delete; \
	AEditorUtilityActor(const AEditorUtilityActor&) = delete; \
	BLUTILITY_API virtual ~AEditorUtilityActor();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_27_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_30_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEditorUtilityActor;

// ********** End Class AEditorUtilityActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
