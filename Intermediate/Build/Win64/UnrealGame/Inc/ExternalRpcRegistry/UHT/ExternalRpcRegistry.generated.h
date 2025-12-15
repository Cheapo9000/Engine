// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExternalRpcRegistry.h"

#ifdef EXTERNALRPCREGISTRY_ExternalRpcRegistry_generated_h
#error "ExternalRpcRegistry.generated.h already included, missing '#pragma once' in ExternalRpcRegistry.h"
#endif
#define EXTERNALRPCREGISTRY_ExternalRpcRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FExternalRpcArgumentDesc ******************************************
struct Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics;
#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics; \
	EXTERNALRPCREGISTRY_API static class UScriptStruct* StaticStruct();


struct FExternalRpcArgumentDesc;
// ********** End ScriptStruct FExternalRpcArgumentDesc ********************************************

// ********** Begin ScriptStruct FExternalRouteInfo ************************************************
struct Z_Construct_UScriptStruct_FExternalRouteInfo_Statics;
#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExternalRouteInfo_Statics; \
	EXTERNALRPCREGISTRY_API static class UScriptStruct* StaticStruct();


struct FExternalRouteInfo;
// ********** End ScriptStruct FExternalRouteInfo **************************************************

// ********** Begin ScriptStruct FExternalRouteDesc ************************************************
struct Z_Construct_UScriptStruct_FExternalRouteDesc_Statics;
#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExternalRouteDesc_Statics; \
	EXTERNALRPCREGISTRY_API static class UScriptStruct* StaticStruct();


struct FExternalRouteDesc;
// ********** End ScriptStruct FExternalRouteDesc **************************************************

// ********** Begin ScriptStruct FRpcLedgerEntry ***************************************************
struct Z_Construct_UScriptStruct_FRpcLedgerEntry_Statics;
#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRpcLedgerEntry_Statics; \
	EXTERNALRPCREGISTRY_API static class UScriptStruct* StaticStruct();


struct FRpcLedgerEntry;
// ********** End ScriptStruct FRpcLedgerEntry *****************************************************

// ********** Begin ScriptStruct FRpcConfig ********************************************************
struct Z_Construct_UScriptStruct_FRpcConfig_Statics;
#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_142_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRpcConfig_Statics; \
	EXTERNALRPCREGISTRY_API static class UScriptStruct* StaticStruct();


struct FRpcConfig;
// ********** End ScriptStruct FRpcConfig **********************************************************

// ********** Begin Class UExternalRpcRegistry *****************************************************
struct Z_Construct_UClass_UExternalRpcRegistry_Statics;
EXTERNALRPCREGISTRY_API UClass* Z_Construct_UClass_UExternalRpcRegistry_NoRegister();

#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExternalRpcRegistry(); \
	friend struct ::Z_Construct_UClass_UExternalRpcRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EXTERNALRPCREGISTRY_API UClass* ::Z_Construct_UClass_UExternalRpcRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UExternalRpcRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExternalRpcRegistry"), Z_Construct_UClass_UExternalRpcRegistry_NoRegister) \
	DECLARE_SERIALIZER(UExternalRpcRegistry)


#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXTERNALRPCREGISTRY_API UExternalRpcRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExternalRpcRegistry(UExternalRpcRegistry&&) = delete; \
	UExternalRpcRegistry(const UExternalRpcRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXTERNALRPCREGISTRY_API, UExternalRpcRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalRpcRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalRpcRegistry)


#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_156_PROLOG
#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExternalRpcRegistry;

// ********** End Class UExternalRpcRegistry *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
