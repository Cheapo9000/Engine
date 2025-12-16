// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Injection/InjectionRequest.h"

#ifdef UAFANIMGRAPH_InjectionRequest_generated_h
#error "InjectionRequest.generated.h already included, missing '#pragma once' in InjectionRequest.h"
#endif
#define UAFANIMGRAPH_InjectionRequest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNextInjectionBlendSettings ***********************************
struct Z_Construct_UScriptStruct_FAnimNextInjectionBlendSettings_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Injection_InjectionRequest_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextInjectionBlendSettings_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct();


struct FAnimNextInjectionBlendSettings;
// ********** End ScriptStruct FAnimNextInjectionBlendSettings *************************************

// ********** Begin ScriptStruct FAnimNextInjectionRequestArgs *************************************
struct Z_Construct_UScriptStruct_FAnimNextInjectionRequestArgs_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Injection_InjectionRequest_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextInjectionRequestArgs_Statics; \
	UAFANIMGRAPH_API static class UScriptStruct* StaticStruct();


struct FAnimNextInjectionRequestArgs;
// ********** End ScriptStruct FAnimNextInjectionRequestArgs ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Injection_InjectionRequest_h

// ********** Begin Enum EAnimNextInjectionBlendMode ***********************************************
#define FOREACH_ENUM_EANIMNEXTINJECTIONBLENDMODE(op) \
	op(EAnimNextInjectionBlendMode::Standard) \
	op(EAnimNextInjectionBlendMode::Inertialization) 

enum class EAnimNextInjectionBlendMode : uint8;
template<> struct TIsUEnumClass<EAnimNextInjectionBlendMode> { enum { Value = true }; };
template<> UAFANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextInjectionBlendMode>();
// ********** End Enum EAnimNextInjectionBlendMode *************************************************

// ********** Begin Enum EAnimNextInjectionType ****************************************************
#define FOREACH_ENUM_EANIMNEXTINJECTIONTYPE(op) \
	op(EAnimNextInjectionType::InjectObject) \
	op(EAnimNextInjectionType::EvaluationModifier) 

enum class EAnimNextInjectionType : uint8;
template<> struct TIsUEnumClass<EAnimNextInjectionType> { enum { Value = true }; };
template<> UAFANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextInjectionType>();
// ********** End Enum EAnimNextInjectionType ******************************************************

// ********** Begin Enum EAnimNextInjectionLifetimeType ********************************************
#define FOREACH_ENUM_EANIMNEXTINJECTIONLIFETIMETYPE(op) \
	op(EAnimNextInjectionLifetimeType::Auto) \
	op(EAnimNextInjectionLifetimeType::ForcePersistent) 

enum class EAnimNextInjectionLifetimeType : uint8;
template<> struct TIsUEnumClass<EAnimNextInjectionLifetimeType> { enum { Value = true }; };
template<> UAFANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextInjectionLifetimeType>();
// ********** End Enum EAnimNextInjectionLifetimeType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
