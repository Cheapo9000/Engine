// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenColorIOColorSpace.h"

#ifdef OPENCOLORIO_OpenColorIOColorSpace_generated_h
#error "OpenColorIOColorSpace.generated.h already included, missing '#pragma once' in OpenColorIOColorSpace.h"
#endif
#define OPENCOLORIO_OpenColorIOColorSpace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOpenColorIOColorSpace ********************************************
struct Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics;
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics; \
	OPENCOLORIO_API static class UScriptStruct* StaticStruct();


struct FOpenColorIOColorSpace;
// ********** End ScriptStruct FOpenColorIOColorSpace **********************************************

// ********** Begin ScriptStruct FOpenColorIODisplayView *******************************************
struct Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics;
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics; \
	OPENCOLORIO_API static class UScriptStruct* StaticStruct();


struct FOpenColorIODisplayView;
// ********** End ScriptStruct FOpenColorIODisplayView *********************************************

// ********** Begin ScriptStruct FOpenColorIOColorConversionSettings *******************************
struct Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics;
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_146_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics; \
	OPENCOLORIO_API static class UScriptStruct* StaticStruct();


struct FOpenColorIOColorConversionSettings;
// ********** End ScriptStruct FOpenColorIOColorConversionSettings *********************************

// ********** Begin ScriptStruct FOpenColorIODisplayConfiguration **********************************
struct Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics;
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_237_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics; \
	OPENCOLORIO_API static class UScriptStruct* StaticStruct();


struct FOpenColorIODisplayConfiguration;
// ********** End ScriptStruct FOpenColorIODisplayConfiguration ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h

// ********** Begin Enum EOpenColorIOViewTransformDirection ****************************************
#define FOREACH_ENUM_EOPENCOLORIOVIEWTRANSFORMDIRECTION(op) \
	op(EOpenColorIOViewTransformDirection::Forward) \
	op(EOpenColorIOViewTransformDirection::Inverse) 

enum class EOpenColorIOViewTransformDirection : uint8;
template<> struct TIsUEnumClass<EOpenColorIOViewTransformDirection> { enum { Value = true }; };
template<> OPENCOLORIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EOpenColorIOViewTransformDirection>();
// ********** End Enum EOpenColorIOViewTransformDirection ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
