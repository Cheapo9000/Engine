// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannelAsset.h"

#ifdef NIAGARA_NiagaraDataChannelAsset_generated_h
#error "NiagaraDataChannelAsset.generated.h already included, missing '#pragma once' in NiagaraDataChannelAsset.h"
#endif
#define NIAGARA_NiagaraDataChannelAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataChannelAsset *************************************************
struct Z_Construct_UClass_UNiagaraDataChannelAsset_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAsset_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelAsset(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannelAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannelAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannelAsset)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAsset_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelAsset(UNiagaraDataChannelAsset&&) = delete; \
	UNiagaraDataChannelAsset(const UNiagaraDataChannelAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelAsset) \
	NIAGARA_API virtual ~UNiagaraDataChannelAsset();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAsset_h_16_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAsset_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAsset_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAsset_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannelAsset;

// ********** End Class UNiagaraDataChannelAsset ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
