// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEmitterBase.h"

#ifdef NIAGARA_NiagaraEmitterBase_generated_h
#error "NiagaraEmitterBase.generated.h already included, missing '#pragma once' in NiagaraEmitterBase.h"
#endif
#define NIAGARA_NiagaraEmitterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraEmitterBase ******************************************************
struct Z_Construct_UClass_UNiagaraEmitterBase_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitterBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterBase_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEmitterBase(); \
	friend struct ::Z_Construct_UClass_UNiagaraEmitterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraEmitterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraEmitterBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraEmitterBase_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraEmitterBase)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterBase_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraEmitterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraEmitterBase(UNiagaraEmitterBase&&) = delete; \
	UNiagaraEmitterBase(const UNiagaraEmitterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraEmitterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitterBase) \
	NIAGARA_API virtual ~UNiagaraEmitterBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterBase_h_43_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterBase_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterBase_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterBase_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraEmitterBase;

// ********** End Class UNiagaraEmitterBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
