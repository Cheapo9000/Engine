// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkWebSocket.h"

#ifdef DATALINKWEBSOCKET_DataLinkWebSocket_generated_h
#error "DataLinkWebSocket.generated.h already included, missing '#pragma once' in DataLinkWebSocket.h"
#endif
#define DATALINKWEBSOCKET_DataLinkWebSocket_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataLinkWebSocketMessages ****************************************
struct Z_Construct_UScriptStruct_FDataLinkWebSocketMessages_Statics;
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Public_DataLinkWebSocket_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataLinkWebSocketMessages_Statics; \
	DATALINKWEBSOCKET_API static class UScriptStruct* StaticStruct();


struct FDataLinkWebSocketMessages;
// ********** End ScriptStruct FDataLinkWebSocketMessages ******************************************

// ********** Begin ScriptStruct FDataLinkWebSocketInstanceData ************************************
struct Z_Construct_UScriptStruct_FDataLinkWebSocketInstanceData_Statics;
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Public_DataLinkWebSocket_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataLinkWebSocketInstanceData_Statics; \
	DATALINKWEBSOCKET_API static class UScriptStruct* StaticStruct();


struct FDataLinkWebSocketInstanceData;
// ********** End ScriptStruct FDataLinkWebSocketInstanceData **************************************

// ********** Begin Class UDataLinkWebSocket *******************************************************
struct Z_Construct_UClass_UDataLinkWebSocket_Statics;
DATALINKWEBSOCKET_API UClass* Z_Construct_UClass_UDataLinkWebSocket_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Public_DataLinkWebSocket_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkWebSocket(); \
	friend struct ::Z_Construct_UClass_UDataLinkWebSocket_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKWEBSOCKET_API UClass* ::Z_Construct_UClass_UDataLinkWebSocket_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkWebSocket, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkWebSocket"), Z_Construct_UClass_UDataLinkWebSocket_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkWebSocket)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Public_DataLinkWebSocket_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkWebSocket(UDataLinkWebSocket&&) = delete; \
	UDataLinkWebSocket(const UDataLinkWebSocket&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKWEBSOCKET_API, UDataLinkWebSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkWebSocket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLinkWebSocket) \
	DATALINKWEBSOCKET_API virtual ~UDataLinkWebSocket();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Public_DataLinkWebSocket_h_40_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Public_DataLinkWebSocket_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Public_DataLinkWebSocket_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Public_DataLinkWebSocket_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkWebSocket;

// ********** End Class UDataLinkWebSocket *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkWebSocket_Public_DataLinkWebSocket_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
