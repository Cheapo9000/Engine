// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXProtocolBlueprintLibrary.h"

#ifdef DMXPROTOCOL_DMXProtocolBlueprintLibrary_generated_h
#error "DMXProtocolBlueprintLibrary.generated.h already included, missing '#pragma once' in DMXProtocolBlueprintLibrary.h"
#endif
#define DMXPROTOCOL_DMXProtocolBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDMXInputPortReference;
struct FDMXOutputPortReference;

// ********** Begin Class UDMXProtocolBlueprintLibrary *********************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDMXOutputPortDestinationAddress); \
	DECLARE_FUNCTION(execSetDMXOutputPortDestinationAddresses); \
	DECLARE_FUNCTION(execSetDMXOutputPortDeviceAddress); \
	DECLARE_FUNCTION(execSetDMXInputPortDeviceAddress); \
	DECLARE_FUNCTION(execGetLocalDMXNetworkInterfaceCardIPs); \
	DECLARE_FUNCTION(execIsReceiveDMXEnabled); \
	DECLARE_FUNCTION(execSetReceiveDMXEnabled); \
	DECLARE_FUNCTION(execIsSendDMXEnabled); \
	DECLARE_FUNCTION(execSetSendDMXEnabled);


struct Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics;
DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXProtocolBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXProtocolBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPROTOCOL_API UClass* ::Z_Construct_UClass_UDMXProtocolBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXProtocolBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXProtocol"), Z_Construct_UClass_UDMXProtocolBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDMXProtocolBlueprintLibrary)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXProtocolBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXProtocolBlueprintLibrary(UDMXProtocolBlueprintLibrary&&) = delete; \
	UDMXProtocolBlueprintLibrary(const UDMXProtocolBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXProtocolBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXProtocolBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXProtocolBlueprintLibrary) \
	NO_API virtual ~UDMXProtocolBlueprintLibrary();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXProtocolBlueprintLibrary;

// ********** End Class UDMXProtocolBlueprintLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
