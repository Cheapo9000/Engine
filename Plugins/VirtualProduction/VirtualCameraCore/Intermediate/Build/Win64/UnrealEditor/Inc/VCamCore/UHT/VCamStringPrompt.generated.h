// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Output/Data/VCamStringPrompt.h"

#ifdef VCAMCORE_VCamStringPrompt_generated_h
#error "VCamStringPrompt.generated.h already included, missing '#pragma once' in VCamStringPrompt.h"
#endif
#define VCAMCORE_VCamStringPrompt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVCamStringPromptResponse *****************************************
struct Z_Construct_UScriptStruct_FVCamStringPromptResponse_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_Data_VCamStringPrompt_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamStringPromptResponse_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVCamStringPromptResponse;
// ********** End ScriptStruct FVCamStringPromptResponse *******************************************

// ********** Begin ScriptStruct FVCamStringPromptRequest ******************************************
struct Z_Construct_UScriptStruct_FVCamStringPromptRequest_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_Data_VCamStringPrompt_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamStringPromptRequest_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVCamStringPromptRequest;
// ********** End ScriptStruct FVCamStringPromptRequest ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Output_Data_VCamStringPrompt_h

// ********** Begin Enum EVCamStringPromptResult ***************************************************
#define FOREACH_ENUM_EVCAMSTRINGPROMPTRESULT(op) \
	op(EVCamStringPromptResult::Submitted) \
	op(EVCamStringPromptResult::Cancelled) \
	op(EVCamStringPromptResult::Disconnected) \
	op(EVCamStringPromptResult::Unavailable) 

enum class EVCamStringPromptResult : uint8;
template<> struct TIsUEnumClass<EVCamStringPromptResult> { enum { Value = true }; };
template<> VCAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVCamStringPromptResult>();
// ********** End Enum EVCamStringPromptResult *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
