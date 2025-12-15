// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundClassGraph/SoundClassGraphSchema.h"

#ifdef AUDIOEDITOR_SoundClassGraphSchema_generated_h
#error "SoundClassGraphSchema.generated.h already included, missing '#pragma once' in SoundClassGraphSchema.h"
#endif
#define AUDIOEDITOR_SoundClassGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundClassGraphSchemaAction_NewNode ******************************
struct Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics;
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics; \
	AUDIOEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FSoundClassGraphSchemaAction_NewNode;
// ********** End ScriptStruct FSoundClassGraphSchemaAction_NewNode ********************************

// ********** Begin Class USoundClassGraphSchema ***************************************************
struct Z_Construct_UClass_USoundClassGraphSchema_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassGraphSchema_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUSoundClassGraphSchema(); \
	friend struct ::Z_Construct_UClass_USoundClassGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundClassGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundClassGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundClassGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(USoundClassGraphSchema)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundClassGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClassGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundClassGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClassGraphSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundClassGraphSchema(USoundClassGraphSchema&&) = delete; \
	USoundClassGraphSchema(const USoundClassGraphSchema&) = delete; \
	AUDIOEDITOR_API virtual ~USoundClassGraphSchema();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_57_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_60_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundClassGraphSchema;

// ********** End Class USoundClassGraphSchema *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
