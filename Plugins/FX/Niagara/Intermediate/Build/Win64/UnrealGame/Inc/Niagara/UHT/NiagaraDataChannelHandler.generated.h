// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannelHandler.h"

#ifdef NIAGARA_NiagaraDataChannelHandler_generated_h
#error "NiagaraDataChannelHandler.generated.h already included, missing '#pragma once' in NiagaraDataChannelHandler.h"
#endif
#define NIAGARA_NiagaraDataChannelHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraDataChannelReader;
class UNiagaraDataChannelWriter;
struct FNDCAccessContextInst;
struct FNiagaraDataChannelSearchParameters;

// ********** Begin Class UNiagaraDataChannelHandler ***********************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnsubscribeFromDataChannelUpdates); \
	DECLARE_FUNCTION(execSubscribeToDataChannelUpdates_WithContext); \
	DECLARE_FUNCTION(execSubscribeToDataChannelUpdates); \
	DECLARE_FUNCTION(execGetDataChannelReader); \
	DECLARE_FUNCTION(execGetDataChannelWriter);


struct Z_Construct_UClass_UNiagaraDataChannelHandler_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelHandler(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannelHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannelHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannelHandler)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelHandler(UNiagaraDataChannelHandler&&) = delete; \
	UNiagaraDataChannelHandler(const UNiagaraDataChannelHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelHandler) \
	NIAGARA_API virtual ~UNiagaraDataChannelHandler();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_22_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannelHandler;

// ********** End Class UNiagaraDataChannelHandler *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
