// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Volume/InterchangeVolumeDefinitions.h"

#ifdef INTERCHANGECOMMON_InterchangeVolumeDefinitions_generated_h
#error "InterchangeVolumeDefinitions.generated.h already included, missing '#pragma once' in InterchangeVolumeDefinitions.h"
#endif
#define INTERCHANGECOMMON_InterchangeVolumeDefinitions_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Common_Public_Volume_InterchangeVolumeDefinitions_h

// ********** Begin Enum EInterchangeSparseVolumeTextureFormat *************************************
#define FOREACH_ENUM_EINTERCHANGESPARSEVOLUMETEXTUREFORMAT(op) \
	op(EInterchangeSparseVolumeTextureFormat::Unorm8) \
	op(EInterchangeSparseVolumeTextureFormat::Float16) \
	op(EInterchangeSparseVolumeTextureFormat::Float32) 

enum class EInterchangeSparseVolumeTextureFormat : uint8;
template<> struct TIsUEnumClass<EInterchangeSparseVolumeTextureFormat> { enum { Value = true }; };
template<> INTERCHANGECOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeSparseVolumeTextureFormat>();
// ********** End Enum EInterchangeSparseVolumeTextureFormat ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
