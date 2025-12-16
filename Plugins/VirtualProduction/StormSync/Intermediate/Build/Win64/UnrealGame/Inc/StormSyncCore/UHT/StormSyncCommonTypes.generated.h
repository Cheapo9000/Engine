// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StormSyncCommonTypes.h"

#ifdef STORMSYNCCORE_StormSyncCommonTypes_generated_h
#error "StormSyncCommonTypes.generated.h already included, missing '#pragma once' in StormSyncCommonTypes.h"
#endif
#define STORMSYNCCORE_StormSyncCommonTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncCommonTypes_h

// ********** Begin Enum EStormSyncEngineType ******************************************************
#define FOREACH_ENUM_ESTORMSYNCENGINETYPE(op) \
	op(EStormSyncEngineType::Server) \
	op(EStormSyncEngineType::Commandlet) \
	op(EStormSyncEngineType::Editor) \
	op(EStormSyncEngineType::Game) \
	op(EStormSyncEngineType::Other) \
	op(EStormSyncEngineType::Unknown) 

enum class EStormSyncEngineType : uint8;
template<> struct TIsUEnumClass<EStormSyncEngineType> { enum { Value = true }; };
template<> STORMSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStormSyncEngineType>();
// ********** End Enum EStormSyncEngineType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
