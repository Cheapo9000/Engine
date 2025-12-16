// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectDefinitionPropertyBinding.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectDefinitionPropertyBinding_generated_h
#error "SmartObjectDefinitionPropertyBinding.generated.h already included, missing '#pragma once' in SmartObjectDefinitionPropertyBinding.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectDefinitionPropertyBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSmartObjectDefinitionPropertyBinding *****************************
struct Z_Construct_UScriptStruct_FSmartObjectDefinitionPropertyBinding_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinitionPropertyBinding_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectDefinitionPropertyBinding_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FPropertyBindingBinding Super;


struct FSmartObjectDefinitionPropertyBinding;
// ********** End ScriptStruct FSmartObjectDefinitionPropertyBinding *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinitionPropertyBinding_h

// ********** Begin Enum ESmartObjectPropertyPathRetargetingStatus *********************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_ESMARTOBJECTPROPERTYPATHRETARGETINGSTATUS(op) \
	op(ESmartObjectPropertyPathRetargetingStatus::NoRetargeting) \
	op(ESmartObjectPropertyPathRetargetingStatus::PickedPath) \
	op(ESmartObjectPropertyPathRetargetingStatus::RetargetedPath) 

enum class ESmartObjectPropertyPathRetargetingStatus : uint8;
template<> struct TIsUEnumClass<ESmartObjectPropertyPathRetargetingStatus> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmartObjectPropertyPathRetargetingStatus>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum ESmartObjectPropertyPathRetargetingStatus ***********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
