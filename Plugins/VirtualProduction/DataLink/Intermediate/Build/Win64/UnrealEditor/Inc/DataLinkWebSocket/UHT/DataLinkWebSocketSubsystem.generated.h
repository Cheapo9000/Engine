// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkWebSocketSubsystem.h"

#ifdef DATALINKWEBSOCKET_DataLinkWebSocketSubsystem_generated_h
#error "DataLinkWebSocketSubsystem.generated.h already included, missing '#pragma once' in DataLinkWebSocketSubsystem.h"
#endif
#define DATALINKWEBSOCKET_DataLinkWebSocketSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkWebSocketSubsystem **********************************************
struct Z_Construct_UClass_UDataLinkWebSocketSubsystem_Statics;
DATALINKWEBSOCKET_API UClass* Z_Construct_UClass_UDataLinkWebSocketSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Private_DataLinkWebSocketSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkWebSocketSubsystem(); \
	friend struct ::Z_Construct_UClass_UDataLinkWebSocketSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKWEBSOCKET_API UClass* ::Z_Construct_UClass_UDataLinkWebSocketSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkWebSocketSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkWebSocket"), Z_Construct_UClass_UDataLinkWebSocketSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkWebSocketSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Private_DataLinkWebSocketSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLinkWebSocketSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkWebSocketSubsystem(UDataLinkWebSocketSubsystem&&) = delete; \
	UDataLinkWebSocketSubsystem(const UDataLinkWebSocketSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLinkWebSocketSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkWebSocketSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLinkWebSocketSubsystem) \
	NO_API virtual ~UDataLinkWebSocketSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Private_DataLinkWebSocketSubsystem_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Private_DataLinkWebSocketSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Private_DataLinkWebSocketSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Private_DataLinkWebSocketSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkWebSocketSubsystem;

// ********** End Class UDataLinkWebSocketSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Private_DataLinkWebSocketSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
