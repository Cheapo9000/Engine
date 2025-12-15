// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphSchema.h"

#ifdef UNREALED_MaterialGraphSchema_generated_h
#error "MaterialGraphSchema.generated.h already included, missing '#pragma once' in MaterialGraphSchema.h"
#endif
#define UNREALED_MaterialGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialGraphSchemaAction_NewNode ********************************
struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FMaterialGraphSchemaAction_NewNode;
// ********** End ScriptStruct FMaterialGraphSchemaAction_NewNode **********************************

// ********** Begin ScriptStruct FMaterialGraphSchemaAction_NewFunctionCall ************************
struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FMaterialGraphSchemaAction_NewFunctionCall;
// ********** End ScriptStruct FMaterialGraphSchemaAction_NewFunctionCall **************************

// ********** Begin ScriptStruct FMaterialGraphSchemaAction_NewComposite ***************************
struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FMaterialGraphSchemaAction_NewComposite;
// ********** End ScriptStruct FMaterialGraphSchemaAction_NewComposite *****************************

// ********** Begin ScriptStruct FMaterialGraphSchemaAction_NewComment *****************************
struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FMaterialGraphSchemaAction_NewComment;
// ********** End ScriptStruct FMaterialGraphSchemaAction_NewComment *******************************

// ********** Begin ScriptStruct FMaterialGraphSchemaAction_NewNamedRerouteUsage *******************
struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FMaterialGraphSchemaAction_NewNamedRerouteUsage;
// ********** End ScriptStruct FMaterialGraphSchemaAction_NewNamedRerouteUsage *********************

// ********** Begin ScriptStruct FMaterialGraphSchemaAction_Paste **********************************
struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_169_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FMaterialGraphSchemaAction_Paste;
// ********** End ScriptStruct FMaterialGraphSchemaAction_Paste ************************************

// ********** Begin Class UMaterialGraphSchema *****************************************************
struct Z_Construct_UClass_UMaterialGraphSchema_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphSchema_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_192_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphSchema(); \
	friend struct ::Z_Construct_UClass_UMaterialGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UMaterialGraphSchema)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_192_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialGraphSchema(UMaterialGraphSchema&&) = delete; \
	UMaterialGraphSchema(const UMaterialGraphSchema&) = delete; \
	UNREALED_API virtual ~UMaterialGraphSchema();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_189_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_192_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_192_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_192_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialGraphSchema;

// ********** End Class UMaterialGraphSchema *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
