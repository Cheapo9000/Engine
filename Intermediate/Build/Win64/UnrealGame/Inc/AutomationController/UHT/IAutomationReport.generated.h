// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAutomationReport.h"

#ifdef AUTOMATIONCONTROLLER_IAutomationReport_generated_h
#error "IAutomationReport.generated.h already included, missing '#pragma once' in IAutomationReport.h"
#endif
#define AUTOMATIONCONTROLLER_IAutomationReport_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAutomationArtifact ***********************************************
struct Z_Construct_UScriptStruct_FAutomationArtifact_Statics;
#define FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutomationArtifact_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct();


struct FAutomationArtifact;
// ********** End ScriptStruct FAutomationArtifact *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h

// ********** Begin Enum EAutomationArtifactType ***************************************************
#define FOREACH_ENUM_EAUTOMATIONARTIFACTTYPE(op) \
	op(EAutomationArtifactType::None) \
	op(EAutomationArtifactType::Image) \
	op(EAutomationArtifactType::Comparison) 

enum class EAutomationArtifactType : uint8;
template<> struct TIsUEnumClass<EAutomationArtifactType> { enum { Value = true }; };
template<> AUTOMATIONCONTROLLER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutomationArtifactType>();
// ********** End Enum EAutomationArtifactType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
