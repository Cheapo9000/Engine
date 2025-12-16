// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImgMediaSourceColorSettings.h"

#ifdef IMGMEDIA_ImgMediaSourceColorSettings_generated_h
#error "ImgMediaSourceColorSettings.generated.h already included, missing '#pragma once' in ImgMediaSourceColorSettings.h"
#endif
#define IMGMEDIA_ImgMediaSourceColorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMediaSourceColorSettings *****************************************
struct Z_Construct_UScriptStruct_FMediaSourceColorSettings_Statics;
#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSourceColorSettings_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaSourceColorSettings_Statics; \
	IMGMEDIA_API static class UScriptStruct* StaticStruct();


struct FMediaSourceColorSettings;
// ********** End ScriptStruct FMediaSourceColorSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSourceColorSettings_h

// ********** Begin Enum EMediaSourceEncoding ******************************************************
#define FOREACH_ENUM_EMEDIASOURCEENCODING(op) \
	op(EMediaSourceEncoding::MSE_None) \
	op(EMediaSourceEncoding::MSE_Linear) \
	op(EMediaSourceEncoding::MSE_sRGB) \
	op(EMediaSourceEncoding::MSE_ST2084) \
	op(EMediaSourceEncoding::MSE_SLog3) 

enum class EMediaSourceEncoding : uint8;
template<> struct TIsUEnumClass<EMediaSourceEncoding> { enum { Value = true }; };
template<> IMGMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaSourceEncoding>();
// ********** End Enum EMediaSourceEncoding ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
