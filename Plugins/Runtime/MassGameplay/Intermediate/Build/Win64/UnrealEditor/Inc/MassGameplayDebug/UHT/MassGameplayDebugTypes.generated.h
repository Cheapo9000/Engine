// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassGameplayDebugTypes.h"

#ifdef MASSGAMEPLAYDEBUG_MassGameplayDebugTypes_generated_h
#error "MassGameplayDebugTypes.generated.h already included, missing '#pragma once' in MassGameplayDebugTypes.h"
#endif
#define MASSGAMEPLAYDEBUG_MassGameplayDebugTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSimDebugDataRow **************************************************
struct Z_Construct_UScriptStruct_FSimDebugDataRow_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSimDebugDataRow_Statics; \
	MASSGAMEPLAYDEBUG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FSimDebugDataRow;
// ********** End ScriptStruct FSimDebugDataRow ****************************************************

// ********** Begin ScriptStruct FSimDebugVisFragment **********************************************
struct Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics; \
	MASSGAMEPLAYDEBUG_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FSimDebugVisFragment;
// ********** End ScriptStruct FSimDebugVisFragment ************************************************

// ********** Begin ScriptStruct FDataFragment_DebugVis ********************************************
struct Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics; \
	MASSGAMEPLAYDEBUG_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FDataFragment_DebugVis;
// ********** End ScriptStruct FDataFragment_DebugVis **********************************************

// ********** Begin ScriptStruct FMassDebuggableTag ************************************************
struct Z_Construct_UScriptStruct_FMassDebuggableTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassDebuggableTag_Statics; \
	MASSGAMEPLAYDEBUG_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassDebuggableTag;
// ********** End ScriptStruct FMassDebuggableTag **************************************************

// ********** Begin ScriptStruct FAgentDebugVisualization ******************************************
struct Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics; \
	MASSGAMEPLAYDEBUG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FAgentDebugVisualization;
// ********** End ScriptStruct FAgentDebugVisualization ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h

// ********** Begin Enum EMassEntityDebugShape *****************************************************
#define FOREACH_ENUM_EMASSENTITYDEBUGSHAPE(op) \
	op(EMassEntityDebugShape::Box) \
	op(EMassEntityDebugShape::Cone) \
	op(EMassEntityDebugShape::Cylinder) \
	op(EMassEntityDebugShape::Capsule) 

enum class EMassEntityDebugShape : uint8;
template<> struct TIsUEnumClass<EMassEntityDebugShape> { enum { Value = true }; };
template<> MASSGAMEPLAYDEBUG_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassEntityDebugShape>();
// ********** End Enum EMassEntityDebugShape *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
