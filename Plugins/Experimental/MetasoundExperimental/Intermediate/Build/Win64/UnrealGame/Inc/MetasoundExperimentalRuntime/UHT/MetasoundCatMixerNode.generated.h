// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundCatMixerNode.h"

#ifdef METASOUNDEXPERIMENTALRUNTIME_MetasoundCatMixerNode_generated_h
#error "MetasoundCatMixerNode.generated.h already included, missing '#pragma once' in MetasoundCatMixerNode.h"
#endif
#define METASOUNDEXPERIMENTALRUNTIME_MetasoundCatMixerNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaSoundCatMixingNodeConfiguration ******************************
struct Z_Construct_UScriptStruct_FMetaSoundCatMixingNodeConfiguration_Statics;
#define FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatMixerNode_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundCatMixingNodeConfiguration_Statics; \
	METASOUNDEXPERIMENTALRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FMetaSoundFrontendNodeConfiguration Super;


struct FMetaSoundCatMixingNodeConfiguration;
// ********** End ScriptStruct FMetaSoundCatMixingNodeConfiguration ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatMixerNode_h

// ********** Begin Enum EMetasoundMixerFormatChoosingMethod ***************************************
#define FOREACH_ENUM_EMETASOUNDMIXERFORMATCHOOSINGMETHOD(op) \
	op(EMetasoundMixerFormatChoosingMethod::HighestInput) \
	op(EMetasoundMixerFormatChoosingMethod::LowestInput) \
	op(EMetasoundMixerFormatChoosingMethod::MetasoundOutput) \
	op(EMetasoundMixerFormatChoosingMethod::Custom) 

enum class EMetasoundMixerFormatChoosingMethod : uint8;
template<> struct TIsUEnumClass<EMetasoundMixerFormatChoosingMethod> { enum { Value = true }; };
template<> METASOUNDEXPERIMENTALRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetasoundMixerFormatChoosingMethod>();
// ********** End Enum EMetasoundMixerFormatChoosingMethod *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
