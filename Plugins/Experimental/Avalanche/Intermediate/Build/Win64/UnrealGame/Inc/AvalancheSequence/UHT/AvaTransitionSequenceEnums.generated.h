// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transition/AvaTransitionSequenceEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESEQUENCE_AvaTransitionSequenceEnums_generated_h
#error "AvaTransitionSequenceEnums.generated.h already included, missing '#pragma once' in AvaTransitionSequenceEnums.h"
#endif
#define AVALANCHESEQUENCE_AvaTransitionSequenceEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_Transition_AvaTransitionSequenceEnums_h


#define FOREACH_ENUM_EAVATRANSITIONSEQUENCEWAITTYPE(op) \
	op(EAvaTransitionSequenceWaitType::None) \
	op(EAvaTransitionSequenceWaitType::NoWait) \
	op(EAvaTransitionSequenceWaitType::WaitUntilStop) 

enum class EAvaTransitionSequenceWaitType : uint8;
template<> struct TIsUEnumClass<EAvaTransitionSequenceWaitType> { enum { Value = true }; };
template<> AVALANCHESEQUENCE_API UEnum* StaticEnum<EAvaTransitionSequenceWaitType>();

#define FOREACH_ENUM_EAVATRANSITIONSEQUENCEQUERYTYPE(op) \
	op(EAvaTransitionSequenceQueryType::None) \
	op(EAvaTransitionSequenceQueryType::Name) \
	op(EAvaTransitionSequenceQueryType::Tag) 

enum class EAvaTransitionSequenceQueryType : uint8;
template<> struct TIsUEnumClass<EAvaTransitionSequenceQueryType> { enum { Value = true }; };
template<> AVALANCHESEQUENCE_API UEnum* StaticEnum<EAvaTransitionSequenceQueryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
