// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpBlueprintTypes.h"

#ifdef HTTPBLUEPRINT_HttpBlueprintTypes_generated_h
#error "HttpBlueprintTypes.generated.h already included, missing '#pragma once' in HttpBlueprintTypes.h"
#endif
#define HTTPBLUEPRINT_HttpBlueprintTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintTypes_h

// ********** Begin Enum EHttpVerbs ****************************************************************
#define FOREACH_ENUM_EHTTPVERBS(op) \
	op(EHttpVerbs::Post) \
	op(EHttpVerbs::Put) \
	op(EHttpVerbs::Delete) \
	op(EHttpVerbs::Patch) \
	op(EHttpVerbs::Get) 

enum class EHttpVerbs : uint8;
template<> struct TIsUEnumClass<EHttpVerbs> { enum { Value = true }; };
template<> HTTPBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<EHttpVerbs>();
// ********** End Enum EHttpVerbs ******************************************************************

// ********** Begin Enum ERequestPresets ***********************************************************
#define FOREACH_ENUM_EREQUESTPRESETS(op) \
	op(ERequestPresets::Json) \
	op(ERequestPresets::Http) \
	op(ERequestPresets::Url) \
	op(ERequestPresets::Custom) 

enum class ERequestPresets : uint8;
template<> struct TIsUEnumClass<ERequestPresets> { enum { Value = true }; };
template<> HTTPBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERequestPresets>();
// ********** End Enum ERequestPresets *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
