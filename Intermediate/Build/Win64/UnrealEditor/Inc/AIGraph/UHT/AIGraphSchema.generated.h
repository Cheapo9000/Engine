// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIGraphSchema.h"

#ifdef AIGRAPH_AIGraphSchema_generated_h
#error "AIGraphSchema.generated.h already included, missing '#pragma once' in AIGraphSchema.h"
#endif
#define AIGRAPH_AIGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAISchemaAction_AddComment ****************************************
struct Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics;
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics; \
	AIGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FAISchemaAction_AddComment;
// ********** End ScriptStruct FAISchemaAction_AddComment ******************************************

// ********** Begin ScriptStruct FAISchemaAction_NewNode *******************************************
struct Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics;
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics; \
	AIGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FAISchemaAction_NewNode;
// ********** End ScriptStruct FAISchemaAction_NewNode *********************************************

// ********** Begin ScriptStruct FAISchemaAction_NewSubNode ****************************************
struct Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics;
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics; \
	AIGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FAISchemaAction_NewSubNode;
// ********** End ScriptStruct FAISchemaAction_NewSubNode ******************************************

// ********** Begin Class UAIGraphSchema ***********************************************************
struct Z_Construct_UClass_UAIGraphSchema_Statics;
AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphSchema_NoRegister();

#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUAIGraphSchema(); \
	friend struct ::Z_Construct_UClass_UAIGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIGRAPH_API UClass* ::Z_Construct_UClass_UAIGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), Z_Construct_UClass_UAIGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UAIGraphSchema)


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIGRAPH_API UAIGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIGRAPH_API, UAIGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIGraphSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIGraphSchema(UAIGraphSchema&&) = delete; \
	UAIGraphSchema(const UAIGraphSchema&) = delete; \
	AIGRAPH_API virtual ~UAIGraphSchema();


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_93_PROLOG
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_96_INCLASS \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIGraphSchema;

// ********** End Class UAIGraphSchema *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
