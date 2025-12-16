// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorMode/Tools/PCGInteractiveToolCommon.h"

#ifdef PCGEDITOR_PCGInteractiveToolCommon_generated_h
#error "PCGInteractiveToolCommon.generated.h already included, missing '#pragma once' in PCGInteractiveToolCommon.h"
#endif
#define PCGEDITOR_PCGInteractiveToolCommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGToolRaycastSettings *******************************************
struct Z_Construct_UScriptStruct_FPCGToolRaycastSettings_Statics;
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolCommon_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGToolRaycastSettings_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct();


struct FPCGToolRaycastSettings;
// ********** End ScriptStruct FPCGToolRaycastSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolCommon_h

// ********** Begin Enum EPCGToolDrawTargetOffset **************************************************
#define FOREACH_ENUM_EPCGTOOLDRAWTARGETOFFSET(op) \
	op(EPCGToolDrawTargetOffset::HitLocation) \
	op(EPCGToolDrawTargetOffset::DistanceOffset) \
	op(EPCGToolDrawTargetOffset::ExplicitOffset) 

enum class EPCGToolDrawTargetOffset : uint8;
template<> struct TIsUEnumClass<EPCGToolDrawTargetOffset> { enum { Value = true }; };
template<> PCGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGToolDrawTargetOffset>();
// ********** End Enum EPCGToolDrawTargetOffset ****************************************************

// ********** Begin Enum EPCGToolDrawTargetNormal **************************************************
#define FOREACH_ENUM_EPCGTOOLDRAWTARGETNORMAL(op) \
	op(EPCGToolDrawTargetNormal::HitNormal) \
	op(EPCGToolDrawTargetNormal::WorldUp) \
	op(EPCGToolDrawTargetNormal::AlignToPrevious) \
	op(EPCGToolDrawTargetNormal::Explicit) 

enum class EPCGToolDrawTargetNormal : uint8;
template<> struct TIsUEnumClass<EPCGToolDrawTargetNormal> { enum { Value = true }; };
template<> PCGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGToolDrawTargetNormal>();
// ********** End Enum EPCGToolDrawTargetNormal ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
