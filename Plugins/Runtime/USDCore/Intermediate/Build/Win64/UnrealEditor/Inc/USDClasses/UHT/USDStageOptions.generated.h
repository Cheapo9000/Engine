// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDStageOptions.h"

#ifdef USDCLASSES_USDStageOptions_generated_h
#error "USDStageOptions.generated.h already included, missing '#pragma once' in USDStageOptions.h"
#endif
#define USDCLASSES_USDStageOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FUsdStageOptions **************************************************
struct Z_Construct_UScriptStruct_FUsdStageOptions_Statics;
#define FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDStageOptions_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUsdStageOptions_Statics; \
	USDCLASSES_API static class UScriptStruct* StaticStruct();


struct FUsdStageOptions;
// ********** End ScriptStruct FUsdStageOptions ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDStageOptions_h

// ********** Begin Enum EUsdUpAxis ****************************************************************
#define FOREACH_ENUM_EUSDUPAXIS(op) \
	op(EUsdUpAxis::YAxis) \
	op(EUsdUpAxis::ZAxis) 

enum class EUsdUpAxis : uint8;
template<> struct TIsUEnumClass<EUsdUpAxis> { enum { Value = true }; };
template<> USDCLASSES_NON_ATTRIBUTED_API UEnum* StaticEnum<EUsdUpAxis>();
// ********** End Enum EUsdUpAxis ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
