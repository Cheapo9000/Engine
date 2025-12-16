// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IRemoteControlModule.h"

#ifdef REMOTECONTROL_IRemoteControlModule_generated_h
#error "IRemoteControlModule.generated.h already included, missing '#pragma once' in IRemoteControlModule.h"
#endif
#define REMOTECONTROL_IRemoteControlModule_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_IRemoteControlModule_h

// ********** Begin Enum ERCTransactionMode ********************************************************
#define FOREACH_ENUM_ERCTRANSACTIONMODE(op) \
	op(ERCTransactionMode::NONE) \
	op(ERCTransactionMode::AUTOMATIC) \
	op(ERCTransactionMode::MANUAL) 

enum class ERCTransactionMode : uint8;
template<> struct TIsUEnumClass<ERCTransactionMode> { enum { Value = true }; };
template<> REMOTECONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERCTransactionMode>();
// ********** End Enum ERCTransactionMode **********************************************************

// ********** Begin Enum ERCAccess *****************************************************************
#define FOREACH_ENUM_ERCACCESS(op) \
	op(ERCAccess::NO_ACCESS) \
	op(ERCAccess::READ_ACCESS) \
	op(ERCAccess::WRITE_ACCESS) \
	op(ERCAccess::WRITE_TRANSACTION_ACCESS) \
	op(ERCAccess::WRITE_MANUAL_TRANSACTION_ACCESS) 

enum class ERCAccess : uint8;
template<> struct TIsUEnumClass<ERCAccess> { enum { Value = true }; };
template<> REMOTECONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERCAccess>();
// ********** End Enum ERCAccess *******************************************************************

// ********** Begin Enum ERCModifyOperation ********************************************************
#define FOREACH_ENUM_ERCMODIFYOPERATION(op) \
	op(ERCModifyOperation::EQUAL) \
	op(ERCModifyOperation::ADD) \
	op(ERCModifyOperation::SUBTRACT) \
	op(ERCModifyOperation::MULTIPLY) \
	op(ERCModifyOperation::DIVIDE) 

enum class ERCModifyOperation : uint8;
template<> struct TIsUEnumClass<ERCModifyOperation> { enum { Value = true }; };
template<> REMOTECONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERCModifyOperation>();
// ********** End Enum ERCModifyOperation **********************************************************

// ********** Begin Enum ERCWebSocketCompressionMode ***********************************************
#define FOREACH_ENUM_ERCWEBSOCKETCOMPRESSIONMODE(op) \
	op(ERCWebSocketCompressionMode::NONE) \
	op(ERCWebSocketCompressionMode::ZLIB) 

enum class ERCWebSocketCompressionMode : uint8;
template<> struct TIsUEnumClass<ERCWebSocketCompressionMode> { enum { Value = true }; };
template<> REMOTECONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERCWebSocketCompressionMode>();
// ********** End Enum ERCWebSocketCompressionMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
