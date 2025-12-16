// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/TG_EdGraphSchema.h"

#ifdef TEXTUREGRAPHEDITOR_TG_EdGraphSchema_generated_h
#error "TG_EdGraphSchema.generated.h already included, missing '#pragma once' in TG_EdGraphSchema.h"
#endif
#define TEXTUREGRAPHEDITOR_TG_EdGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_EdGraphSchema ********************************************************
struct Z_Construct_UClass_UTG_EdGraphSchema_Statics;
TEXTUREGRAPHEDITOR_API UClass* Z_Construct_UClass_UTG_EdGraphSchema_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_EdGraph_TG_EdGraphSchema_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_EdGraphSchema(); \
	friend struct ::Z_Construct_UClass_UTG_EdGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHEDITOR_API UClass* ::Z_Construct_UClass_UTG_EdGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_EdGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEditor"), Z_Construct_UClass_UTG_EdGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UTG_EdGraphSchema)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_EdGraph_TG_EdGraphSchema_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTG_EdGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_EdGraphSchema(UTG_EdGraphSchema&&) = delete; \
	UTG_EdGraphSchema(const UTG_EdGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTG_EdGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_EdGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_EdGraphSchema) \
	NO_API virtual ~UTG_EdGraphSchema();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_EdGraph_TG_EdGraphSchema_h_15_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_EdGraph_TG_EdGraphSchema_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_EdGraph_TG_EdGraphSchema_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_EdGraph_TG_EdGraphSchema_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_EdGraphSchema;

// ********** End Class UTG_EdGraphSchema **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_EdGraph_TG_EdGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
