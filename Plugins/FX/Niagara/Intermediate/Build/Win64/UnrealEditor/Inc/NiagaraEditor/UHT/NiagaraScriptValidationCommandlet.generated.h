// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/NiagaraScriptValidationCommandlet.h"

#ifdef NIAGARAEDITOR_NiagaraScriptValidationCommandlet_generated_h
#error "NiagaraScriptValidationCommandlet.generated.h already included, missing '#pragma once' in NiagaraScriptValidationCommandlet.h"
#endif
#define NIAGARAEDITOR_NiagaraScriptValidationCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraScriptValidationCommandlet ***************************************
struct Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptValidationCommandlet_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScriptValidationCommandlet(); \
	friend struct ::Z_Construct_UClass_UNiagaraScriptValidationCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraScriptValidationCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraScriptValidationCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraScriptValidationCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraScriptValidationCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraScriptValidationCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScriptValidationCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraScriptValidationCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptValidationCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraScriptValidationCommandlet(UNiagaraScriptValidationCommandlet&&) = delete; \
	UNiagaraScriptValidationCommandlet(const UNiagaraScriptValidationCommandlet&) = delete; \
	NO_API virtual ~UNiagaraScriptValidationCommandlet();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_15_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraScriptValidationCommandlet;

// ********** End Class UNiagaraScriptValidationCommandlet *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraScriptValidationCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
