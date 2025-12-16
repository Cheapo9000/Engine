// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/NiagaraTraversalCacheAuditCommandlet.h"

#ifdef NIAGARAEDITOR_NiagaraTraversalCacheAuditCommandlet_generated_h
#error "NiagaraTraversalCacheAuditCommandlet.generated.h already included, missing '#pragma once' in NiagaraTraversalCacheAuditCommandlet.h"
#endif
#define NIAGARAEDITOR_NiagaraTraversalCacheAuditCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraTraversalCacheAuditCommandlet ************************************
struct Z_Construct_UClass_UNiagaraTraversalCacheAuditCommandlet_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraTraversalCacheAuditCommandlet_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraTraversalCacheAuditCommandlet_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraTraversalCacheAuditCommandlet(); \
	friend struct ::Z_Construct_UClass_UNiagaraTraversalCacheAuditCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraTraversalCacheAuditCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraTraversalCacheAuditCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraTraversalCacheAuditCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraTraversalCacheAuditCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraTraversalCacheAuditCommandlet_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraTraversalCacheAuditCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraTraversalCacheAuditCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraTraversalCacheAuditCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraTraversalCacheAuditCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraTraversalCacheAuditCommandlet(UNiagaraTraversalCacheAuditCommandlet&&) = delete; \
	UNiagaraTraversalCacheAuditCommandlet(const UNiagaraTraversalCacheAuditCommandlet&) = delete; \
	NO_API virtual ~UNiagaraTraversalCacheAuditCommandlet();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraTraversalCacheAuditCommandlet_h_17_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraTraversalCacheAuditCommandlet_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraTraversalCacheAuditCommandlet_h_20_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraTraversalCacheAuditCommandlet_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraTraversalCacheAuditCommandlet;

// ********** End Class UNiagaraTraversalCacheAuditCommandlet **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Commandlets_NiagaraTraversalCacheAuditCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
