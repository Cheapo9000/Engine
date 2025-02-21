// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Messages/EReplicationResponseErrorCode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_EReplicationResponseErrorCode_generated_h
#error "EReplicationResponseErrorCode.generated.h already included, missing '#pragma once' in EReplicationResponseErrorCode.h"
#endif
#define CONCERTSYNCCORE_EReplicationResponseErrorCode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_Replication_Messages_EReplicationResponseErrorCode_h


#define FOREACH_ENUM_EREPLICATIONRESPONSEERRORCODE(op) \
	op(EReplicationResponseErrorCode::Timeout) \
	op(EReplicationResponseErrorCode::Handled) 

enum class EReplicationResponseErrorCode : uint8;
template<> struct TIsUEnumClass<EReplicationResponseErrorCode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EReplicationResponseErrorCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
