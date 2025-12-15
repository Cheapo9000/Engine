// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundSubmixGraph/SoundSubmixGraphSchema.h"

#ifdef AUDIOEDITOR_SoundSubmixGraphSchema_generated_h
#error "SoundSubmixGraphSchema.generated.h already included, missing '#pragma once' in SoundSubmixGraphSchema.h"
#endif
#define AUDIOEDITOR_SoundSubmixGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundSubmixGraphSchemaAction_NewNode *****************************
struct Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics;
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics; \
	AUDIOEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FSoundSubmixGraphSchemaAction_NewNode;
// ********** End ScriptStruct FSoundSubmixGraphSchemaAction_NewNode *******************************

// ********** Begin Class USoundSubmixGraphSchema **************************************************
struct Z_Construct_UClass_USoundSubmixGraphSchema_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraphSchema_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_125_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixGraphSchema(); \
	friend struct ::Z_Construct_UClass_USoundSubmixGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundSubmixGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSubmixGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundSubmixGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(USoundSubmixGraphSchema)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSubmixGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSubmixGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixGraphSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSubmixGraphSchema(USoundSubmixGraphSchema&&) = delete; \
	USoundSubmixGraphSchema(const USoundSubmixGraphSchema&) = delete; \
	AUDIOEDITOR_API virtual ~USoundSubmixGraphSchema();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_122_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_125_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSubmixGraphSchema;

// ********** End Class USoundSubmixGraphSchema ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
