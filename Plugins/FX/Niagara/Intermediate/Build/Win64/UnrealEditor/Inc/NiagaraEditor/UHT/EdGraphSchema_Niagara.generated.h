// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraphSchema_Niagara.h"

#ifdef NIAGARAEDITOR_EdGraphSchema_Niagara_generated_h
#error "EdGraphSchema_Niagara.generated.h already included, missing '#pragma once' in EdGraphSchema_Niagara.h"
#endif
#define NIAGARAEDITOR_EdGraphSchema_Niagara_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraSchemaAction_NewNode **************************************
struct Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FNiagaraSchemaAction_NewNode;
// ********** End ScriptStruct FNiagaraSchemaAction_NewNode ****************************************

// ********** Begin ScriptStruct FNiagaraSchemaAction_NewComment ***********************************
struct Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FNiagaraSchemaAction_NewComment;
// ********** End ScriptStruct FNiagaraSchemaAction_NewComment *************************************

// ********** Begin Class UEdGraphSchema_Niagara ***************************************************
struct Z_Construct_UClass_UEdGraphSchema_Niagara_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_Niagara_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema_Niagara(); \
	friend struct ::Z_Construct_UClass_UEdGraphSchema_Niagara_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UEdGraphSchema_Niagara_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphSchema_Niagara, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UEdGraphSchema_Niagara_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphSchema_Niagara)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UEdGraphSchema_Niagara(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_Niagara) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UEdGraphSchema_Niagara); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_Niagara); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphSchema_Niagara(UEdGraphSchema_Niagara&&) = delete; \
	UEdGraphSchema_Niagara(const UEdGraphSchema_Niagara&) = delete; \
	NIAGARAEDITOR_API virtual ~UEdGraphSchema_Niagara();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_86_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_89_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphSchema_Niagara;

// ********** End Class UEdGraphSchema_Niagara *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
