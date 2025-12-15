// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavigationDataResolution.h"

#ifdef ENGINE_NavigationDataResolution_generated_h
#error "NavigationDataResolution.generated.h already included, missing '#pragma once' in NavigationDataResolution.h"
#endif
#define ENGINE_NavigationDataResolution_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataResolution_h

// ********** Begin Enum ENavigationDataResolution *************************************************
#define FOREACH_ENUM_ENAVIGATIONDATARESOLUTION(op) \
	op(ENavigationDataResolution::Low) \
	op(ENavigationDataResolution::Default) \
	op(ENavigationDataResolution::High) 

enum class ENavigationDataResolution : uint8;
template<> struct TIsUEnumClass<ENavigationDataResolution> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavigationDataResolution>();
// ********** End Enum ENavigationDataResolution ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
