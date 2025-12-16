// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinitions/AssetDefinition_NiagaraEmitter.h"

#ifdef NIAGARAEDITOR_AssetDefinition_NiagaraEmitter_generated_h
#error "AssetDefinition_NiagaraEmitter.generated.h already included, missing '#pragma once' in AssetDefinition_NiagaraEmitter.h"
#endif
#define NIAGARAEDITOR_AssetDefinition_NiagaraEmitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_NiagaraEmitter ******************************************
struct Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_NiagaraEmitter(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_NiagaraEmitter, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UAssetDefinition_NiagaraEmitter_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_NiagaraEmitter)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_NiagaraEmitter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_NiagaraEmitter(UAssetDefinition_NiagaraEmitter&&) = delete; \
	UAssetDefinition_NiagaraEmitter(const UAssetDefinition_NiagaraEmitter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_NiagaraEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_NiagaraEmitter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_NiagaraEmitter) \
	NO_API virtual ~UAssetDefinition_NiagaraEmitter();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_11_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_NiagaraEmitter;

// ********** End Class UAssetDefinition_NiagaraEmitter ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_AssetDefinitions_AssetDefinition_NiagaraEmitter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
