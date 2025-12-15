// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueGraph/SoundCueGraphSchema.h"

#ifdef AUDIOEDITOR_SoundCueGraphSchema_generated_h
#error "SoundCueGraphSchema.generated.h already included, missing '#pragma once' in SoundCueGraphSchema.h"
#endif
#define AUDIOEDITOR_SoundCueGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundCueGraphSchemaAction_NewNode ********************************
struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics;
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics; \
	AUDIOEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FSoundCueGraphSchemaAction_NewNode;
// ********** End ScriptStruct FSoundCueGraphSchemaAction_NewNode **********************************

// ********** Begin ScriptStruct FSoundCueGraphSchemaAction_NewFromSelected ************************
struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics;
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics; \
	AUDIOEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FSoundCueGraphSchemaAction_NewNode Super;


struct FSoundCueGraphSchemaAction_NewFromSelected;
// ********** End ScriptStruct FSoundCueGraphSchemaAction_NewFromSelected **************************

// ********** Begin ScriptStruct FSoundCueGraphSchemaAction_NewComment *****************************
struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics;
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics; \
	AUDIOEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FSoundCueGraphSchemaAction_NewComment;
// ********** End ScriptStruct FSoundCueGraphSchemaAction_NewComment *******************************

// ********** Begin ScriptStruct FSoundCueGraphSchemaAction_Paste **********************************
struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics;
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics; \
	AUDIOEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FSoundCueGraphSchemaAction_Paste;
// ********** End ScriptStruct FSoundCueGraphSchemaAction_Paste ************************************

// ********** Begin Class USoundCueGraphSchema *****************************************************
struct Z_Construct_UClass_USoundCueGraphSchema_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphSchema_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_125_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueGraphSchema(); \
	friend struct ::Z_Construct_UClass_USoundCueGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundCueGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCueGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundCueGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(USoundCueGraphSchema)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraphSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCueGraphSchema(USoundCueGraphSchema&&) = delete; \
	USoundCueGraphSchema(const USoundCueGraphSchema&) = delete; \
	AUDIOEDITOR_API virtual ~USoundCueGraphSchema();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_122_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_125_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCueGraphSchema;

// ********** End Class USoundCueGraphSchema *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
