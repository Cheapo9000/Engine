// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/NiagaraScriptStatsViewModel.h"

#ifdef NIAGARAEDITOR_NiagaraScriptStatsViewModel_generated_h
#error "NiagaraScriptStatsViewModel.generated.h already included, missing '#pragma once' in NiagaraScriptStatsViewModel.h"
#endif
#define NIAGARAEDITOR_NiagaraScriptStatsViewModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraScripStatsViewModelSettings **************************************
struct Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScripStatsViewModelSettings(); \
	friend struct ::Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraScripStatsViewModelSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraScripStatsViewModelSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraScripStatsViewModelSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScripStatsViewModelSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraScripStatsViewModelSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScripStatsViewModelSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraScripStatsViewModelSettings(UNiagaraScripStatsViewModelSettings&&) = delete; \
	UNiagaraScripStatsViewModelSettings(const UNiagaraScripStatsViewModelSettings&) = delete; \
	NO_API virtual ~UNiagaraScripStatsViewModelSettings();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_17_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_20_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraScripStatsViewModelSettings;

// ********** End Class UNiagaraScripStatsViewModelSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
