// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannel.h"

#ifdef NIAGARA_NiagaraDataChannel_generated_h
#error "NiagaraDataChannel.generated.h already included, missing '#pragma once' in NiagaraDataChannel.h"
#endif
#define NIAGARA_NiagaraDataChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataChannel ******************************************************
struct Z_Construct_UClass_UNiagaraDataChannel_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannel(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannel_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannel)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannel(UNiagaraDataChannel&&) = delete; \
	UNiagaraDataChannel(const UNiagaraDataChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannel) \
	NIAGARA_API virtual ~UNiagaraDataChannel();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_46_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_50_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannel;

// ********** End Class UNiagaraDataChannel ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
