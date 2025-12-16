// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanTypes.h"

#ifdef METAHUMANSDKRUNTIME_MetaHumanTypes_generated_h
#error "MetaHumanTypes.generated.h already included, missing '#pragma once' in MetaHumanTypes.h"
#endif
#define METAHUMANSDKRUNTIME_MetaHumanTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanTypes_h

// ********** Begin Enum EFaceTextureType **********************************************************
#define FOREACH_ENUM_EFACETEXTURETYPE(op) \
	op(EFaceTextureType::Basecolor) \
	op(EFaceTextureType::Basecolor_Animated_CM1) \
	op(EFaceTextureType::Basecolor_Animated_CM2) \
	op(EFaceTextureType::Basecolor_Animated_CM3) \
	op(EFaceTextureType::Normal) \
	op(EFaceTextureType::Normal_Animated_WM1) \
	op(EFaceTextureType::Normal_Animated_WM2) \
	op(EFaceTextureType::Normal_Animated_WM3) \
	op(EFaceTextureType::Cavity) \
	op(EFaceTextureType::Count) 

enum class EFaceTextureType : uint8;
template<> struct TIsUEnumClass<EFaceTextureType> { enum { Value = true }; };
template<> METAHUMANSDKRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFaceTextureType>();
// ********** End Enum EFaceTextureType ************************************************************

// ********** Begin Enum EBodyTextureType **********************************************************
#define FOREACH_ENUM_EBODYTEXTURETYPE(op) \
	op(EBodyTextureType::Body_Basecolor) \
	op(EBodyTextureType::Body_Normal) \
	op(EBodyTextureType::Body_Cavity) \
	op(EBodyTextureType::Body_Underwear_Basecolor) \
	op(EBodyTextureType::Body_Underwear_Normal) \
	op(EBodyTextureType::Body_Underwear_Mask) \
	op(EBodyTextureType::Chest_Basecolor) \
	op(EBodyTextureType::Chest_Normal) \
	op(EBodyTextureType::Chest_Cavity) \
	op(EBodyTextureType::Chest_Underwear_Basecolor) \
	op(EBodyTextureType::Chest_Underwear_Normal) \
	op(EBodyTextureType::Count) 

enum class EBodyTextureType : uint8;
template<> struct TIsUEnumClass<EBodyTextureType> { enum { Value = true }; };
template<> METAHUMANSDKRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBodyTextureType>();
// ********** End Enum EBodyTextureType ************************************************************

// ********** Begin Enum EMetaHumanQualityLevel ****************************************************
#define FOREACH_ENUM_EMETAHUMANQUALITYLEVEL(op) \
	op(EMetaHumanQualityLevel::Low) \
	op(EMetaHumanQualityLevel::Medium) \
	op(EMetaHumanQualityLevel::High) \
	op(EMetaHumanQualityLevel::Cinematic) \
	op(EMetaHumanQualityLevel::Count) 

enum class EMetaHumanQualityLevel : uint8;
template<> struct TIsUEnumClass<EMetaHumanQualityLevel> { enum { Value = true }; };
template<> METAHUMANSDKRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanQualityLevel>();
// ********** End Enum EMetaHumanQualityLevel ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
