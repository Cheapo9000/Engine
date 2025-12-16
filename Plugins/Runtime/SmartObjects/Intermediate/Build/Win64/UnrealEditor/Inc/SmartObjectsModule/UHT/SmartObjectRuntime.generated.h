// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectRuntime.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectRuntime_generated_h
#error "SmartObjectRuntime.generated.h already included, missing '#pragma once' in SmartObjectRuntime.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectRuntime_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSmartObjectClaimHandle *******************************************
struct Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectClaimHandle;
// ********** End ScriptStruct FSmartObjectClaimHandle *********************************************

// ********** Begin ScriptStruct FSmartObjectSlotTransform *****************************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSmartObjectSlotStateData Super;


struct FSmartObjectSlotTransform;
// ********** End ScriptStruct FSmartObjectSlotTransform *******************************************

// ********** Begin ScriptStruct FSmartObjectRuntimeSlot *******************************************
struct Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_136_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectRuntimeSlot;
// ********** End ScriptStruct FSmartObjectRuntimeSlot *********************************************

// ********** Begin ScriptStruct FSmartObjectRuntime ***********************************************
struct Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_254_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectRuntime;
// ********** End ScriptStruct FSmartObjectRuntime *************************************************

// ********** Begin ScriptStruct FConstSmartObjectSlotView *****************************************
struct Z_Construct_UScriptStruct_FConstSmartObjectSlotView_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_491_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstSmartObjectSlotView_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FConstSmartObjectSlotView;
// ********** End ScriptStruct FConstSmartObjectSlotView *******************************************

// ********** Begin ScriptStruct FSmartObjectSlotView **********************************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_668_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FConstSmartObjectSlotView Super;


struct FSmartObjectSlotView;
// ********** End ScriptStruct FSmartObjectSlotView ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h

// ********** Begin Enum ESmartObjectSlotState *****************************************************
#define FOREACH_ENUM_ESMARTOBJECTSLOTSTATE(op) \
	op(ESmartObjectSlotState::Invalid) \
	op(ESmartObjectSlotState::Free) \
	op(ESmartObjectSlotState::Claimed) \
	op(ESmartObjectSlotState::Occupied) \
	op(ESmartObjectSlotState::Disabled) 

enum class ESmartObjectSlotState : uint8;
template<> struct TIsUEnumClass<ESmartObjectSlotState> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectSlotState>();
// ********** End Enum ESmartObjectSlotState *******************************************************

// ********** Begin Enum ETrySpawnActorIfDehydrated ************************************************
#define FOREACH_ENUM_ETRYSPAWNACTORIFDEHYDRATED(op) \
	op(ETrySpawnActorIfDehydrated::No) \
	op(ETrySpawnActorIfDehydrated::Yes) 

enum class ETrySpawnActorIfDehydrated : uint8;
template<> struct TIsUEnumClass<ETrySpawnActorIfDehydrated> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrySpawnActorIfDehydrated>();
// ********** End Enum ETrySpawnActorIfDehydrated **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
