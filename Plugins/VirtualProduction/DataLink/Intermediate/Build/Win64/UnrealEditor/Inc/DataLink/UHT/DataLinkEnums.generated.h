// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkEnums.h"

#ifdef DATALINK_DataLinkEnums_generated_h
#error "DataLinkEnums.generated.h already included, missing '#pragma once' in DataLinkEnums.h"
#endif
#define DATALINK_DataLinkEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkEnums_h

// ********** Begin Enum EDataLinkExecutionResult **************************************************
#define FOREACH_ENUM_EDATALINKEXECUTIONRESULT(op) \
	op(EDataLinkExecutionResult::Failed) \
	op(EDataLinkExecutionResult::Succeeded) 

enum class EDataLinkExecutionResult : uint8;
template<> struct TIsUEnumClass<EDataLinkExecutionResult> { enum { Value = true }; };
template<> DATALINK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataLinkExecutionResult>();
// ********** End Enum EDataLinkExecutionResult ****************************************************

// ********** Begin Enum EDataLinkExecutionReply ***************************************************
#define FOREACH_ENUM_EDATALINKEXECUTIONREPLY(op) \
	op(EDataLinkExecutionReply::Unhandled) \
	op(EDataLinkExecutionReply::Handled) 

enum class EDataLinkExecutionReply : uint8;
template<> struct TIsUEnumClass<EDataLinkExecutionReply> { enum { Value = true }; };
template<> DATALINK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataLinkExecutionReply>();
// ********** End Enum EDataLinkExecutionReply *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
