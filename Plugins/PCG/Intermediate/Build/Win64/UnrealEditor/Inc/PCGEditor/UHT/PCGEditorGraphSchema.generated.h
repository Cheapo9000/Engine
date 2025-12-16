// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Schema/PCGEditorGraphSchema.h"

#ifdef PCGEDITOR_PCGEditorGraphSchema_generated_h
#error "PCGEditorGraphSchema.generated.h already included, missing '#pragma once' in PCGEditorGraphSchema.h"
#endif
#define PCGEDITOR_PCGEditorGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEditorGraphSchema ****************************************************
struct Z_Construct_UClass_UPCGEditorGraphSchema_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphSchema_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Schema_PCGEditorGraphSchema_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEditorGraphSchema(); \
	friend struct ::Z_Construct_UClass_UPCGEditorGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEditorGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEditorGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEditorGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UPCGEditorGraphSchema)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Schema_PCGEditorGraphSchema_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEDITOR_API UPCGEditorGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEditorGraphSchema(UPCGEditorGraphSchema&&) = delete; \
	UPCGEditorGraphSchema(const UPCGEditorGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEDITOR_API, UPCGEditorGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEditorGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEditorGraphSchema) \
	PCGEDITOR_API virtual ~UPCGEditorGraphSchema();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Schema_PCGEditorGraphSchema_h_31_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Schema_PCGEditorGraphSchema_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Schema_PCGEditorGraphSchema_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Schema_PCGEditorGraphSchema_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEditorGraphSchema;

// ********** End Class UPCGEditorGraphSchema ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Schema_PCGEditorGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
