// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTypeActivationOpenedMethod.h"

#ifdef ASSETTOOLS_AssetTypeActivationOpenedMethod_generated_h
#error "AssetTypeActivationOpenedMethod.generated.h already included, missing '#pragma once' in AssetTypeActivationOpenedMethod.h"
#endif
#define ASSETTOOLS_AssetTypeActivationOpenedMethod_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AssetTools_Public_AssetTypeActivationOpenedMethod_h

// ********** Begin Enum EAssetTypeActivationOpenedMethod ******************************************
#define FOREACH_ENUM_EASSETTYPEACTIVATIONOPENEDMETHOD(op) \
	op(EAssetTypeActivationOpenedMethod::Edit) \
	op(EAssetTypeActivationOpenedMethod::View) 

enum class EAssetTypeActivationOpenedMethod : uint8;
template<> struct TIsUEnumClass<EAssetTypeActivationOpenedMethod> { enum { Value = true }; };
template<> ASSETTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetTypeActivationOpenedMethod>();
// ********** End Enum EAssetTypeActivationOpenedMethod ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
