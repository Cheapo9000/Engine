// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannel_GameplayBurst.h"

#ifdef NIAGARA_NiagaraDataChannel_GameplayBurst_generated_h
#error "NiagaraDataChannel_GameplayBurst.generated.h already included, missing '#pragma once' in NiagaraDataChannel_GameplayBurst.h"
#endif
#define NIAGARA_NiagaraDataChannel_GameplayBurst_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNDCAccessContext_GameplayBurst ***********************************
struct Z_Construct_UScriptStruct_FNDCAccessContext_GameplayBurst_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDCAccessContext_GameplayBurst_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNDCAccessContext_MapBase Super;


struct FNDCAccessContext_GameplayBurst;
// ********** End ScriptStruct FNDCAccessContext_GameplayBurst *************************************

// ********** Begin ScriptStruct FNDCGameplayBurstAttachmentSettings *******************************
struct Z_Construct_UScriptStruct_FNDCGameplayBurstAttachmentSettings_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDCGameplayBurstAttachmentSettings_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDCGameplayBurstAttachmentSettings;
// ********** End ScriptStruct FNDCGameplayBurstAttachmentSettings *********************************

// ********** Begin Class UNiagaraDataChannel_GameplayBurst ****************************************
struct Z_Construct_UClass_UNiagaraDataChannel_GameplayBurst_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_GameplayBurst_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannel_GameplayBurst(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannel_GameplayBurst_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannel_GameplayBurst_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannel_GameplayBurst, UNiagaraDataChannel_MapBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannel_GameplayBurst_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannel_GameplayBurst)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannel_GameplayBurst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannel_GameplayBurst(UNiagaraDataChannel_GameplayBurst&&) = delete; \
	UNiagaraDataChannel_GameplayBurst(const UNiagaraDataChannel_GameplayBurst&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannel_GameplayBurst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannel_GameplayBurst); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannel_GameplayBurst) \
	NIAGARA_API virtual ~UNiagaraDataChannel_GameplayBurst();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_90_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannel_GameplayBurst;

// ********** End Class UNiagaraDataChannel_GameplayBurst ******************************************

// ********** Begin ScriptStruct FNDCMapEntry_GameplayBurst ****************************************
struct Z_Construct_UScriptStruct_FNDCMapEntry_GameplayBurst_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDCMapEntry_GameplayBurst_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNDCMapEntryBase Super;


struct FNDCMapEntry_GameplayBurst;
// ********** End ScriptStruct FNDCMapEntry_GameplayBurst ******************************************

// ********** Begin Class UNiagaraDataChannelHandler_GameplayBurst *********************************
struct Z_Construct_UClass_UNiagaraDataChannelHandler_GameplayBurst_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_GameplayBurst_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_151_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelHandler_GameplayBurst(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannelHandler_GameplayBurst_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannelHandler_GameplayBurst_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannelHandler_GameplayBurst, UNiagaraDataChannelHandler_MapBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannelHandler_GameplayBurst_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannelHandler_GameplayBurst)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_151_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelHandler_GameplayBurst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelHandler_GameplayBurst) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelHandler_GameplayBurst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelHandler_GameplayBurst); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelHandler_GameplayBurst(UNiagaraDataChannelHandler_GameplayBurst&&) = delete; \
	UNiagaraDataChannelHandler_GameplayBurst(const UNiagaraDataChannelHandler_GameplayBurst&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataChannelHandler_GameplayBurst();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_147_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_151_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_151_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h_151_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannelHandler_GameplayBurst;

// ********** End Class UNiagaraDataChannelHandler_GameplayBurst ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_GameplayBurst_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
