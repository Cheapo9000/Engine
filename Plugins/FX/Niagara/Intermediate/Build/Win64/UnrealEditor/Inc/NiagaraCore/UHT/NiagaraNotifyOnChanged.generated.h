// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNotifyOnChanged.h"

#ifdef NIAGARACORE_NiagaraNotifyOnChanged_generated_h
#error "NiagaraNotifyOnChanged.generated.h already included, missing '#pragma once' in NiagaraNotifyOnChanged.h"
#endif
#define NIAGARACORE_NiagaraNotifyOnChanged_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraNotifyOnChanged **************************************************
struct Z_Construct_UClass_UNiagaraNotifyOnChanged_Statics;
NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraNotifyOnChanged_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraNotifyOnChanged_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraNotifyOnChanged(); \
	friend struct ::Z_Construct_UClass_UNiagaraNotifyOnChanged_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARACORE_API UClass* ::Z_Construct_UClass_UNiagaraNotifyOnChanged_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNotifyOnChanged, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraCore"), Z_Construct_UClass_UNiagaraNotifyOnChanged_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNotifyOnChanged)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraNotifyOnChanged_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraNotifyOnChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNotifyOnChanged(UNiagaraNotifyOnChanged&&) = delete; \
	UNiagaraNotifyOnChanged(const UNiagaraNotifyOnChanged&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraNotifyOnChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNotifyOnChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNotifyOnChanged) \
	NO_API virtual ~UNiagaraNotifyOnChanged();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraNotifyOnChanged_h_7_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraNotifyOnChanged_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraNotifyOnChanged_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraNotifyOnChanged_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNotifyOnChanged;

// ********** End Class UNiagaraNotifyOnChanged ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraNotifyOnChanged_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
