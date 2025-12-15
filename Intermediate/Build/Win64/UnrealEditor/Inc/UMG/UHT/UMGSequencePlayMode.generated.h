// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/UMGSequencePlayMode.h"

#ifdef UMG_UMGSequencePlayMode_generated_h
#error "UMGSequencePlayMode.generated.h already included, missing '#pragma once' in UMGSequencePlayMode.h"
#endif
#define UMG_UMGSequencePlayMode_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_UMGSequencePlayMode_h

// ********** Begin Enum EUMGSequencePlayMode ******************************************************
#define FOREACH_ENUM_EUMGSEQUENCEPLAYMODE(op) \
	op(EUMGSequencePlayMode::Forward) \
	op(EUMGSequencePlayMode::Reverse) \
	op(EUMGSequencePlayMode::PingPong) 

namespace EUMGSequencePlayMode { enum Type : int; }
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EUMGSequencePlayMode::Type>();
// ********** End Enum EUMGSequencePlayMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
