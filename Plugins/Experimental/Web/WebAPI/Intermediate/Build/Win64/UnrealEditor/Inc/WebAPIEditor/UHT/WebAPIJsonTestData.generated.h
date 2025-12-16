// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/WebAPIJsonTestData.h"

#ifdef WEBAPIEDITOR_WebAPIJsonTestData_generated_h
#error "WebAPIJsonTestData.generated.h already included, missing '#pragma once' in WebAPIJsonTestData.h"
#endif
#define WEBAPIEDITOR_WebAPIJsonTestData_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Private_Tests_WebAPIJsonTestData_h

// ********** Begin Enum EWAPITestUEnum ************************************************************
#define FOREACH_ENUM_EWAPITESTUENUM(op) \
	op(EWAPITestUEnum::EnumValueA) \
	op(EWAPITestUEnum::EnumValueB) \
	op(EWAPITestUEnum::EnumValueC) 

enum class EWAPITestUEnum : uint8;
template<> struct TIsUEnumClass<EWAPITestUEnum> { enum { Value = true }; };
template<> WEBAPIEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EWAPITestUEnum>();
// ********** End Enum EWAPITestUEnum **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
