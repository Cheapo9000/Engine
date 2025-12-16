// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundFadeNode.h"

#ifdef METASOUNDEXPERIMENTALENGINERUNTIME_MetasoundFadeNode_generated_h
#error "MetasoundFadeNode.generated.h already included, missing '#pragma once' in MetasoundFadeNode.h"
#endif
#define METASOUNDEXPERIMENTALENGINERUNTIME_MetasoundFadeNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaSoundFadeNodeConfiguration ***********************************
struct Z_Construct_UScriptStruct_FMetaSoundFadeNodeConfiguration_Statics;
#define FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalEngineRuntime_Private_MetasoundFadeNode_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundFadeNodeConfiguration_Statics; \
	METASOUNDEXPERIMENTALENGINERUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FMetaSoundFrontendNodeConfiguration Super;


struct FMetaSoundFadeNodeConfiguration;
// ********** End ScriptStruct FMetaSoundFadeNodeConfiguration *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalEngineRuntime_Private_MetasoundFadeNode_h

// ********** Begin Enum EMetaSoundFadeOutputType **************************************************
#define FOREACH_ENUM_EMETASOUNDFADEOUTPUTTYPE(op) \
	op(FloatType) \
	op(AudioBufferType) 

enum EMetaSoundFadeOutputType : uint8;
template<> METASOUNDEXPERIMENTALENGINERUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaSoundFadeOutputType>();
// ********** End Enum EMetaSoundFadeOutputType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
