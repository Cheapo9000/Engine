// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISequencer.h"

#ifdef SEQUENCER_ISequencer_generated_h
#error "ISequencer.generated.h already included, missing '#pragma once' in ISequencer.h"
#endif
#define SEQUENCER_ISequencer_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_ISequencer_h

// ********** Begin Enum EAutoChangeMode ***********************************************************
#define FOREACH_ENUM_EAUTOCHANGEMODE(op) \
	op(EAutoChangeMode::AutoKey) \
	op(EAutoChangeMode::AutoTrack) \
	op(EAutoChangeMode::All) \
	op(EAutoChangeMode::None) 

enum class EAutoChangeMode : uint8;
template<> struct TIsUEnumClass<EAutoChangeMode> { enum { Value = true }; };
template<> SEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutoChangeMode>();
// ********** End Enum EAutoChangeMode *************************************************************

// ********** Begin Enum EAllowEditsMode ***********************************************************
#define FOREACH_ENUM_EALLOWEDITSMODE(op) \
	op(EAllowEditsMode::AllEdits) \
	op(EAllowEditsMode::AllowSequencerEditsOnly) \
	op(EAllowEditsMode::AllowLevelEditsOnly) 

enum class EAllowEditsMode : uint8;
template<> struct TIsUEnumClass<EAllowEditsMode> { enum { Value = true }; };
template<> SEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAllowEditsMode>();
// ********** End Enum EAllowEditsMode *************************************************************

// ********** Begin Enum EKeyGroupMode *************************************************************
#define FOREACH_ENUM_EKEYGROUPMODE(op) \
	op(EKeyGroupMode::KeyChanged) \
	op(EKeyGroupMode::KeyGroup) \
	op(EKeyGroupMode::KeyAll) 

enum class EKeyGroupMode : uint8;
template<> struct TIsUEnumClass<EKeyGroupMode> { enum { Value = true }; };
template<> SEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<EKeyGroupMode>();
// ********** End Enum EKeyGroupMode ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
