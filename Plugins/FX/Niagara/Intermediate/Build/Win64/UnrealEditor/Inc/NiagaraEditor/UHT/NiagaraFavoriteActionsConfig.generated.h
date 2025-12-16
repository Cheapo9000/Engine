// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Config/NiagaraFavoriteActionsConfig.h"

#ifdef NIAGARAEDITOR_NiagaraFavoriteActionsConfig_generated_h
#error "NiagaraFavoriteActionsConfig.generated.h already included, missing '#pragma once' in NiagaraFavoriteActionsConfig.h"
#endif
#define NIAGARAEDITOR_NiagaraFavoriteActionsConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraActionIdentifier ******************************************
struct Z_Construct_UScriptStruct_FNiagaraActionIdentifier_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Config_NiagaraFavoriteActionsConfig_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraActionIdentifier_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraActionIdentifier;
// ********** End ScriptStruct FNiagaraActionIdentifier ********************************************

// ********** Begin ScriptStruct FNiagaraFavoriteActionsProfile ************************************
struct Z_Construct_UScriptStruct_FNiagaraFavoriteActionsProfile_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Config_NiagaraFavoriteActionsConfig_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraFavoriteActionsProfile_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraFavoriteActionsProfile;
// ********** End ScriptStruct FNiagaraFavoriteActionsProfile **************************************

// ********** Begin Class UNiagaraFavoriteActionsConfig ********************************************
struct Z_Construct_UClass_UNiagaraFavoriteActionsConfig_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraFavoriteActionsConfig_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Config_NiagaraFavoriteActionsConfig_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraFavoriteActionsConfig(); \
	friend struct ::Z_Construct_UClass_UNiagaraFavoriteActionsConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraFavoriteActionsConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraFavoriteActionsConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraFavoriteActionsConfig_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraFavoriteActionsConfig)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Config_NiagaraFavoriteActionsConfig_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraFavoriteActionsConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraFavoriteActionsConfig(UNiagaraFavoriteActionsConfig&&) = delete; \
	UNiagaraFavoriteActionsConfig(const UNiagaraFavoriteActionsConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraFavoriteActionsConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraFavoriteActionsConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraFavoriteActionsConfig) \
	NIAGARAEDITOR_API virtual ~UNiagaraFavoriteActionsConfig();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Config_NiagaraFavoriteActionsConfig_h_103_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Config_NiagaraFavoriteActionsConfig_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Config_NiagaraFavoriteActionsConfig_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Config_NiagaraFavoriteActionsConfig_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraFavoriteActionsConfig;

// ********** End Class UNiagaraFavoriteActionsConfig **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Config_NiagaraFavoriteActionsConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
