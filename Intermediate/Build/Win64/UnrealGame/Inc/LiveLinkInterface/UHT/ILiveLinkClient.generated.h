// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ILiveLinkClient.h"

#ifdef LIVELINKINTERFACE_ILiveLinkClient_generated_h
#error "ILiveLinkClient.generated.h already included, missing '#pragma once' in ILiveLinkClient.h"
#endif
#define LIVELINKINTERFACE_ILiveLinkClient_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkClient_h

// ********** Begin Enum ELiveLinkSubjectState *****************************************************
#define FOREACH_ENUM_ELIVELINKSUBJECTSTATE(op) \
	op(ELiveLinkSubjectState::Connected) \
	op(ELiveLinkSubjectState::Unresponsive) \
	op(ELiveLinkSubjectState::Disconnected) \
	op(ELiveLinkSubjectState::InvalidOrDisabled) \
	op(ELiveLinkSubjectState::Paused) \
	op(ELiveLinkSubjectState::Unknown) 

enum class ELiveLinkSubjectState : uint8;
template<> struct TIsUEnumClass<ELiveLinkSubjectState> { enum { Value = true }; };
template<> LIVELINKINTERFACE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkSubjectState>();
// ********** End Enum ELiveLinkSubjectState *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
