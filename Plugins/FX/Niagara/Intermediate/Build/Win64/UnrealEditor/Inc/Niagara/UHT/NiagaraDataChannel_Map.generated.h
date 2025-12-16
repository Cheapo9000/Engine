// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannel_Map.h"

#ifdef NIAGARA_NiagaraDataChannel_Map_generated_h
#error "NiagaraDataChannel_Map.generated.h already included, missing '#pragma once' in NiagaraDataChannel_Map.h"
#endif
#define NIAGARA_NiagaraDataChannel_Map_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNDCMapEntryBase **************************************************
struct Z_Construct_UScriptStruct_FNDCMapEntryBase_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDCMapEntryBase_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDCMapEntryBase;
// ********** End ScriptStruct FNDCMapEntryBase ****************************************************

// ********** Begin ScriptStruct FNDCMapEntry ******************************************************
struct Z_Construct_UScriptStruct_FNDCMapEntry_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_128_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDCMapEntry_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDCMapEntry;
// ********** End ScriptStruct FNDCMapEntry ********************************************************

// ********** Begin ScriptStruct FNDCMapKey ********************************************************
struct Z_Construct_UScriptStruct_FNDCMapKey_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDCMapKey_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDCMapKey;
// ********** End ScriptStruct FNDCMapKey **********************************************************

// ********** Begin ScriptStruct FNDCAccessContext_MapBase *****************************************
struct Z_Construct_UScriptStruct_FNDCAccessContext_MapBase_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_206_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDCAccessContext_MapBase_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNDCAccessContext Super;


struct FNDCAccessContext_MapBase;
// ********** End ScriptStruct FNDCAccessContext_MapBase *******************************************

// ********** Begin Class UNiagaraDataChannel_MapBase **********************************************
struct Z_Construct_UClass_UNiagaraDataChannel_MapBase_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_MapBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannel_MapBase(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannel_MapBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannel_MapBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannel_MapBase, UNiagaraDataChannel, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannel_MapBase_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannel_MapBase)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_215_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannel_MapBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannel_MapBase(UNiagaraDataChannel_MapBase&&) = delete; \
	UNiagaraDataChannel_MapBase(const UNiagaraDataChannel_MapBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannel_MapBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannel_MapBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannel_MapBase) \
	NIAGARA_API virtual ~UNiagaraDataChannel_MapBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_212_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_215_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_215_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannel_MapBase;

// ********** End Class UNiagaraDataChannel_MapBase ************************************************

// ********** Begin Class UNiagaraDataChannelHandler_MapBase ***************************************
struct Z_Construct_UClass_UNiagaraDataChannelHandler_MapBase_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_MapBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_232_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelHandler_MapBase(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannelHandler_MapBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannelHandler_MapBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannelHandler_MapBase, UNiagaraDataChannelHandler, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannelHandler_MapBase_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannelHandler_MapBase)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_232_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelHandler_MapBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelHandler_MapBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelHandler_MapBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelHandler_MapBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelHandler_MapBase(UNiagaraDataChannelHandler_MapBase&&) = delete; \
	UNiagaraDataChannelHandler_MapBase(const UNiagaraDataChannelHandler_MapBase&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataChannelHandler_MapBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_229_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_232_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_232_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h_232_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannelHandler_MapBase;

// ********** End Class UNiagaraDataChannelHandler_MapBase *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Map_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
