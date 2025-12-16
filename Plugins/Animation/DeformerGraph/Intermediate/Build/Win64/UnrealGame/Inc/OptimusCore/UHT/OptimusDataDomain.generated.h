// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusDataDomain.h"

#ifdef OPTIMUSCORE_OptimusDataDomain_generated_h
#error "OptimusDataDomain.generated.h already included, missing '#pragma once' in OptimusDataDomain.h"
#endif
#define OPTIMUSCORE_OptimusDataDomain_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusDataDomain ************************************************
struct Z_Construct_UScriptStruct_FOptimusDataDomain_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusDataDomain_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusDataDomain;
// ********** End ScriptStruct FOptimusDataDomain **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h

// ********** Begin Enum EOptimusDataDomainType ****************************************************
#define FOREACH_ENUM_EOPTIMUSDATADOMAINTYPE(op) \
	op(EOptimusDataDomainType::Dimensional) \
	op(EOptimusDataDomainType::Expression) 

enum class EOptimusDataDomainType;
template<> struct TIsUEnumClass<EOptimusDataDomainType> { enum { Value = true }; };
template<> OPTIMUSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimusDataDomainType>();
// ********** End Enum EOptimusDataDomainType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
