// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinitions/AssetDefinition_NiagaraScript.h"

#ifdef NIAGARAEDITOR_AssetDefinition_NiagaraScript_generated_h
#error "AssetDefinition_NiagaraScript.generated.h already included, missing '#pragma once' in AssetDefinition_NiagaraScript.h"
#endif
#define NIAGARAEDITOR_AssetDefinition_NiagaraScript_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_NiagaraScript *******************************************
struct Z_Construct_UClass_UAssetDefinition_NiagaraScript_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraScript_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_NiagaraScript(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_NiagaraScript_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_NiagaraScript_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_NiagaraScript, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UAssetDefinition_NiagaraScript_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_NiagaraScript)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_NiagaraScript(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_NiagaraScript(UAssetDefinition_NiagaraScript&&) = delete; \
	UAssetDefinition_NiagaraScript(const UAssetDefinition_NiagaraScript&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_NiagaraScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_NiagaraScript); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_NiagaraScript) \
	NO_API virtual ~UAssetDefinition_NiagaraScript();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_11_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_NiagaraScript;

// ********** End Class UAssetDefinition_NiagaraScript *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraScript_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
