// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayAnim/PlayAnimRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTANIMGRAPH_PlayAnimRequest_generated_h
#error "PlayAnimRequest.generated.h already included, missing '#pragma once' in PlayAnimRequest.h"
#endif
#define ANIMNEXTANIMGRAPH_PlayAnimRequest_generated_h

#define FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Public_PlayAnim_PlayAnimRequest_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextPlayAnimBlendSettings_Statics; \
	ANIMNEXTANIMGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTANIMGRAPH_API UScriptStruct* StaticStruct<struct FAnimNextPlayAnimBlendSettings>();

#define FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Public_PlayAnim_PlayAnimRequest_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextPlayAnimPayload_Statics; \
	ANIMNEXTANIMGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTANIMGRAPH_API UScriptStruct* StaticStruct<struct FAnimNextPlayAnimPayload>();

#define FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Public_PlayAnim_PlayAnimRequest_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNextPlayAnimRequestArgs_Statics; \
	ANIMNEXTANIMGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMNEXTANIMGRAPH_API UScriptStruct* StaticStruct<struct FAnimNextPlayAnimRequestArgs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNextAnimGraph_Source_AnimNextAnimGraph_Public_PlayAnim_PlayAnimRequest_h


#define FOREACH_ENUM_EANIMNEXTPLAYANIMBLENDMODE(op) \
	op(EAnimNextPlayAnimBlendMode::Standard) \
	op(EAnimNextPlayAnimBlendMode::Inertialization) 

enum class EAnimNextPlayAnimBlendMode : uint8;
template<> struct TIsUEnumClass<EAnimNextPlayAnimBlendMode> { enum { Value = true }; };
template<> ANIMNEXTANIMGRAPH_API UEnum* StaticEnum<EAnimNextPlayAnimBlendMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
