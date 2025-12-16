// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSmartObjectTypes.h"

#ifdef MASSSMARTOBJECTS_MassSmartObjectTypes_generated_h
#error "MassSmartObjectTypes.generated.h already included, missing '#pragma once' in MassSmartObjectTypes.h"
#endif
#define MASSSMARTOBJECTS_MassSmartObjectTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSmartObjectMassEntityUserData ************************************
struct Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics; \
	MASSSMARTOBJECTS_API static class UScriptStruct* StaticStruct();


struct FSmartObjectMassEntityUserData;
// ********** End ScriptStruct FSmartObjectMassEntityUserData **************************************

// ********** Begin ScriptStruct FMRUSlot **********************************************************
struct Z_Construct_UScriptStruct_FMRUSlot_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMRUSlot_Statics; \
	MASSSMARTOBJECTS_API static class UScriptStruct* StaticStruct();


namespace UE::Mass::SmartObject { struct FMRUSlot; }
// ********** End ScriptStruct FMRUSlot ************************************************************

// ********** Begin ScriptStruct FMRUSlots *********************************************************
struct Z_Construct_UScriptStruct_FMRUSlots_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMRUSlots_Statics; \
	MASSSMARTOBJECTS_API static class UScriptStruct* StaticStruct();


namespace UE::Mass::SmartObject { struct FMRUSlots; }
// ********** End ScriptStruct FMRUSlots ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h

// ********** Begin Enum EMassSmartObjectInteractionStatus *****************************************
#define FOREACH_ENUM_EMASSSMARTOBJECTINTERACTIONSTATUS(op) \
	op(EMassSmartObjectInteractionStatus::Unset) \
	op(EMassSmartObjectInteractionStatus::InProgress) \
	op(EMassSmartObjectInteractionStatus::BehaviorCompleted) \
	op(EMassSmartObjectInteractionStatus::TaskCompleted) \
	op(EMassSmartObjectInteractionStatus::Aborted) 

enum class EMassSmartObjectInteractionStatus : uint8;
template<> struct TIsUEnumClass<EMassSmartObjectInteractionStatus> { enum { Value = true }; };
template<> MASSSMARTOBJECTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassSmartObjectInteractionStatus>();
// ********** End Enum EMassSmartObjectInteractionStatus *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
