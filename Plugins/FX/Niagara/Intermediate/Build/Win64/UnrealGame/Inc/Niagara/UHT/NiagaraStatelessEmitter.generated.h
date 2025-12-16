// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/NiagaraStatelessEmitter.h"

#ifdef NIAGARA_NiagaraStatelessEmitter_generated_h
#error "NiagaraStatelessEmitter.generated.h already included, missing '#pragma once' in NiagaraStatelessEmitter.h"
#endif
#define NIAGARA_NiagaraStatelessEmitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraStatelessEmitter *************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraStatelessEmitter, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraStatelessEmitter_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessEmitter_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStatelessEmitter(); \
	friend struct ::Z_Construct_UClass_UNiagaraStatelessEmitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraStatelessEmitter_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraStatelessEmitter, UNiagaraEmitterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraStatelessEmitter_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraStatelessEmitter) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_34_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraStatelessEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraStatelessEmitter(UNiagaraStatelessEmitter&&) = delete; \
	UNiagaraStatelessEmitter(const UNiagaraStatelessEmitter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraStatelessEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStatelessEmitter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraStatelessEmitter) \
	NIAGARA_API virtual ~UNiagaraStatelessEmitter();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_31_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraStatelessEmitter;

// ********** End Class UNiagaraStatelessEmitter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
