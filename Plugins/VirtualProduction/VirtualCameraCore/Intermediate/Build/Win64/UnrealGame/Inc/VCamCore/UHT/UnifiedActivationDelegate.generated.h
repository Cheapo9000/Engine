// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Util/UnifiedActivationDelegate.h"

#ifdef VCAMCORE_UnifiedActivationDelegate_generated_h
#error "UnifiedActivationDelegate.generated.h already included, missing '#pragma once' in UnifiedActivationDelegate.h"
#endif
#define VCAMCORE_UnifiedActivationDelegate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVCamCoreChangeActivationArgs;
struct FVCamCoreChangeActivationResult;

// ********** Begin ScriptStruct FVCamCoreChangeActivationArgs *************************************
struct Z_Construct_UScriptStruct_FVCamCoreChangeActivationArgs_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_UnifiedActivationDelegate_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamCoreChangeActivationArgs_Statics; \
	VCAMCORE_API static class UScriptStruct* StaticStruct();


struct FVCamCoreChangeActivationArgs;
// ********** End ScriptStruct FVCamCoreChangeActivationArgs ***************************************

// ********** Begin ScriptStruct FVCamCoreChangeActivationResult ***********************************
struct Z_Construct_UScriptStruct_FVCamCoreChangeActivationResult_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_UnifiedActivationDelegate_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamCoreChangeActivationResult_Statics; \
	VCAMCORE_API static class UScriptStruct* StaticStruct();


struct FVCamCoreChangeActivationResult;
// ********** End ScriptStruct FVCamCoreChangeActivationResult *************************************

// ********** Begin Delegate FCanChangeActiviationDynamicVCamDelegate ******************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_UnifiedActivationDelegate_h_38_DELEGATE \
VCAMCORE_API FVCamCoreChangeActivationResult FCanChangeActiviationDynamicVCamDelegate_DelegateWrapper(const FScriptDelegate& CanChangeActiviationDynamicVCamDelegate, FVCamCoreChangeActivationArgs const& Args);


// ********** End Delegate FCanChangeActiviationDynamicVCamDelegate ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Util_UnifiedActivationDelegate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
