// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PBIK_Shared.h"

#ifdef PBIK_PBIK_Shared_generated_h
#error "PBIK_Shared.generated.h already included, missing '#pragma once' in PBIK_Shared.h"
#endif
#define PBIK_PBIK_Shared_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPBIKBoneSetting **************************************************
struct Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics;
#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_PBIK_Shared_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPBIKBoneSetting_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


struct FPBIKBoneSetting;
// ********** End ScriptStruct FPBIKBoneSetting ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_PBIK_Shared_h

// ********** Begin Enum EPBIKLimitType ************************************************************
#define FOREACH_ENUM_EPBIKLIMITTYPE(op) \
	op(EPBIKLimitType::Free) \
	op(EPBIKLimitType::Limited) \
	op(EPBIKLimitType::Locked) 

enum class EPBIKLimitType : uint8;
template<> struct TIsUEnumClass<EPBIKLimitType> { enum { Value = true }; };
template<> PBIK_NON_ATTRIBUTED_API UEnum* StaticEnum<EPBIKLimitType>();
// ********** End Enum EPBIKLimitType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
