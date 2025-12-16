// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/NiagaraDumpModuleInfoCommandlet.h"

#ifdef NIAGARAEDITOR_NiagaraDumpModuleInfoCommandlet_generated_h
#error "NiagaraDumpModuleInfoCommandlet.generated.h already included, missing '#pragma once' in NiagaraDumpModuleInfoCommandlet.h"
#endif
#define NIAGARAEDITOR_NiagaraDumpModuleInfoCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDumpModuleInfoCommandlet *****************************************
struct Z_Construct_UClass_UNiagaraDumpModuleInfoCommandlet_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraDumpModuleInfoCommandlet_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDumpModuleInfoCommandlet(); \
	friend struct ::Z_Construct_UClass_UNiagaraDumpModuleInfoCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraDumpModuleInfoCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDumpModuleInfoCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraDumpModuleInfoCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDumpModuleInfoCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDumpModuleInfoCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDumpModuleInfoCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDumpModuleInfoCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDumpModuleInfoCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDumpModuleInfoCommandlet(UNiagaraDumpModuleInfoCommandlet&&) = delete; \
	UNiagaraDumpModuleInfoCommandlet(const UNiagaraDumpModuleInfoCommandlet&) = delete; \
	NO_API virtual ~UNiagaraDumpModuleInfoCommandlet();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_15_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDumpModuleInfoCommandlet;

// ********** End Class UNiagaraDumpModuleInfoCommandlet *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraDumpModuleInfoCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
