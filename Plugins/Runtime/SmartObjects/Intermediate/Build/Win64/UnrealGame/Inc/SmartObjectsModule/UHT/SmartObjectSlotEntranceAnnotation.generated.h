// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Annotations/SmartObjectSlotEntranceAnnotation.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectSlotEntranceAnnotation_generated_h
#error "SmartObjectSlotEntranceAnnotation.generated.h already included, missing '#pragma once' in SmartObjectSlotEntranceAnnotation.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectSlotEntranceAnnotation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSmartObjectSlotEntranceAnnotation ********************************
struct Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntranceAnnotation_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FSmartObjectSlotAnnotation Super;


struct FSmartObjectSlotEntranceAnnotation;
// ********** End ScriptStruct FSmartObjectSlotEntranceAnnotation **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntranceAnnotation_h

// ********** Begin Enum ESmartObjectEntrancePriority **********************************************
#define FOREACH_ENUM_ESMARTOBJECTENTRANCEPRIORITY(op) \
	op(ESmartObjectEntrancePriority::Lowest) \
	op(ESmartObjectEntrancePriority::Lower) \
	op(ESmartObjectEntrancePriority::Low) \
	op(ESmartObjectEntrancePriority::BelowNormal) \
	op(ESmartObjectEntrancePriority::Normal) \
	op(ESmartObjectEntrancePriority::AboveNormal) \
	op(ESmartObjectEntrancePriority::High) \
	op(ESmartObjectEntrancePriority::Higher) \
	op(ESmartObjectEntrancePriority::MIN) \
	op(ESmartObjectEntrancePriority::MAX) 

enum class ESmartObjectEntrancePriority : uint8;
template<> struct TIsUEnumClass<ESmartObjectEntrancePriority> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectEntrancePriority>();
// ********** End Enum ESmartObjectEntrancePriority ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
