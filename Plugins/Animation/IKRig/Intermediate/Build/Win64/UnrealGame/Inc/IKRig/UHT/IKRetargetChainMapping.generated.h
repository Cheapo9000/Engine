// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/IKRetargetChainMapping.h"

#ifdef IKRIG_IKRetargetChainMapping_generated_h
#error "IKRetargetChainMapping.generated.h already included, missing '#pragma once' in IKRetargetChainMapping.h"
#endif
#define IKRIG_IKRetargetChainMapping_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRetargetChainPair ************************************************
struct Z_Construct_UScriptStruct_FRetargetChainPair_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetChainMapping_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetChainPair_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetChainPair;
// ********** End ScriptStruct FRetargetChainPair **************************************************

// ********** Begin ScriptStruct FRetargetChainMapping *********************************************
struct Z_Construct_UScriptStruct_FRetargetChainMapping_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetChainMapping_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetChainMapping_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetChainMapping;
// ********** End ScriptStruct FRetargetChainMapping ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetChainMapping_h

// ********** Begin Enum EAutoMapChainType *********************************************************
#define FOREACH_ENUM_EAUTOMAPCHAINTYPE(op) \
	op(EAutoMapChainType::Exact) \
	op(EAutoMapChainType::Fuzzy) \
	op(EAutoMapChainType::Clear) 

enum class EAutoMapChainType : uint8;
template<> struct TIsUEnumClass<EAutoMapChainType> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutoMapChainType>();
// ********** End Enum EAutoMapChainType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
