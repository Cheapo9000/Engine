// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/NiagaraStatelessAuditCommandlet.h"

#ifdef NIAGARAEDITOR_NiagaraStatelessAuditCommandlet_generated_h
#error "NiagaraStatelessAuditCommandlet.generated.h already included, missing '#pragma once' in NiagaraStatelessAuditCommandlet.h"
#endif
#define NIAGARAEDITOR_NiagaraStatelessAuditCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStatelessAuditCommandlet *****************************************
struct Z_Construct_UClass_UNiagaraStatelessAuditCommandlet_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStatelessAuditCommandlet_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraStatelessAuditCommandlet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraStatelessAuditCommandlet(); \
	friend struct ::Z_Construct_UClass_UNiagaraStatelessAuditCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraStatelessAuditCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStatelessAuditCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraStatelessAuditCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStatelessAuditCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraStatelessAuditCommandlet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraStatelessAuditCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraStatelessAuditCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraStatelessAuditCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStatelessAuditCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStatelessAuditCommandlet(UNiagaraStatelessAuditCommandlet&&) = delete; \
	UNiagaraStatelessAuditCommandlet(const UNiagaraStatelessAuditCommandlet&) = delete; \
	NO_API virtual ~UNiagaraStatelessAuditCommandlet();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraStatelessAuditCommandlet_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraStatelessAuditCommandlet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraStatelessAuditCommandlet_h_15_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraStatelessAuditCommandlet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStatelessAuditCommandlet;

// ********** End Class UNiagaraStatelessAuditCommandlet *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraStatelessAuditCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
