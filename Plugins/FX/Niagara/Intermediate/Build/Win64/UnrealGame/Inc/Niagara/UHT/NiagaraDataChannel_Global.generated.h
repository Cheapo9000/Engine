// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannel_Global.h"

#ifdef NIAGARA_NiagaraDataChannel_Global_generated_h
#error "NiagaraDataChannel_Global.generated.h already included, missing '#pragma once' in NiagaraDataChannel_Global.h"
#endif
#define NIAGARA_NiagaraDataChannel_Global_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataChannel_Global ***********************************************
struct Z_Construct_UClass_UNiagaraDataChannel_Global_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_Global_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannel_Global(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannel_Global_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannel_Global_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannel_Global, UNiagaraDataChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannel_Global_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannel_Global)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannel_Global(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannel_Global(UNiagaraDataChannel_Global&&) = delete; \
	UNiagaraDataChannel_Global(const UNiagaraDataChannel_Global&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannel_Global); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannel_Global); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannel_Global) \
	NIAGARA_API virtual ~UNiagaraDataChannel_Global();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannel_Global;

// ********** End Class UNiagaraDataChannel_Global *************************************************

// ********** Begin Class UNiagaraDataChannelHandler_Global ****************************************
struct Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Global_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelHandler_Global(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannelHandler_Global_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannelHandler_Global, UNiagaraDataChannelHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannelHandler_Global_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannelHandler_Global)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelHandler_Global(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelHandler_Global) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelHandler_Global); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelHandler_Global); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelHandler_Global(UNiagaraDataChannelHandler_Global&&) = delete; \
	UNiagaraDataChannelHandler_Global(const UNiagaraDataChannelHandler_Global&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataChannelHandler_Global();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_23_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_26_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannelHandler_Global;

// ********** End Class UNiagaraDataChannelHandler_Global ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
