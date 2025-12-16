// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/DataTypes/MidiControllerID.h"

#ifdef HARMONIXMETASOUND_MidiControllerID_generated_h
#error "MidiControllerID.generated.h already included, missing '#pragma once' in MidiControllerID.h"
#endif
#define HARMONIXMETASOUND_MidiControllerID_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiControllerID_h

// ********** Begin Enum EStdMidiControllerID ******************************************************
#define FOREACH_ENUM_ESTDMIDICONTROLLERID(op) \
	op(EStdMidiControllerID::BankSelection) \
	op(EStdMidiControllerID::ModWheel) \
	op(EStdMidiControllerID::Breath) \
	op(EStdMidiControllerID::Undefined3) \
	op(EStdMidiControllerID::FootController) \
	op(EStdMidiControllerID::PortamentoTime) \
	op(EStdMidiControllerID::DataCoarse) \
	op(EStdMidiControllerID::Volume) \
	op(EStdMidiControllerID::Balance) \
	op(EStdMidiControllerID::Undefined9) \
	op(EStdMidiControllerID::Pan) \
	op(EStdMidiControllerID::Expression) \
	op(EStdMidiControllerID::EffectControl1) \
	op(EStdMidiControllerID::EffectControl2) \
	op(EStdMidiControllerID::Undefined14) \
	op(EStdMidiControllerID::Undefined15) \
	op(EStdMidiControllerID::GeneralPurposeController1) \
	op(EStdMidiControllerID::GeneralPurposeController2) \
	op(EStdMidiControllerID::GeneralPurposeController3) \
	op(EStdMidiControllerID::GeneralPurposeController4) \
	op(EStdMidiControllerID::Undefined20) \
	op(EStdMidiControllerID::Undefined21) \
	op(EStdMidiControllerID::Undefined22) \
	op(EStdMidiControllerID::Undefined23) \
	op(EStdMidiControllerID::Undefined24) \
	op(EStdMidiControllerID::Undefined25) \
	op(EStdMidiControllerID::Undefined26) \
	op(EStdMidiControllerID::Undefined27) \
	op(EStdMidiControllerID::Undefined28) \
	op(EStdMidiControllerID::Undefined29) \
	op(EStdMidiControllerID::Undefined30) \
	op(EStdMidiControllerID::Undefined31) \
	op(EStdMidiControllerID::LSBControl0) \
	op(EStdMidiControllerID::LSBControl1) \
	op(EStdMidiControllerID::LSBControl2) \
	op(EStdMidiControllerID::LSBControl3) \
	op(EStdMidiControllerID::LSBControl4) \
	op(EStdMidiControllerID::LSBControl5) \
	op(EStdMidiControllerID::LSBControl6) \
	op(EStdMidiControllerID::LSBControl7) \
	op(EStdMidiControllerID::LSBControl8) \
	op(EStdMidiControllerID::LSBControl9) \
	op(EStdMidiControllerID::LSBControl10) \
	op(EStdMidiControllerID::LSBControl11) \
	op(EStdMidiControllerID::LSBControl12) \
	op(EStdMidiControllerID::LSBControl13) \
	op(EStdMidiControllerID::LSBControl14) \
	op(EStdMidiControllerID::LSBControl15) \
	op(EStdMidiControllerID::LSBControl16) \
	op(EStdMidiControllerID::LSBControl17) \
	op(EStdMidiControllerID::LSBControl18) \
	op(EStdMidiControllerID::LSBControl19) \
	op(EStdMidiControllerID::LSBControl20) \
	op(EStdMidiControllerID::LSBControl21) \
	op(EStdMidiControllerID::LSBControl22) \
	op(EStdMidiControllerID::LSBControl23) \
	op(EStdMidiControllerID::LSBControl24) \
	op(EStdMidiControllerID::LSBControl25) \
	op(EStdMidiControllerID::LSBControl26) \
	op(EStdMidiControllerID::LSBControl27) \
	op(EStdMidiControllerID::LSBControl28) \
	op(EStdMidiControllerID::LSBControl29) \
	op(EStdMidiControllerID::LSBControl30) \
	op(EStdMidiControllerID::LSBControl31) \
	op(EStdMidiControllerID::Hold) \
	op(EStdMidiControllerID::PortamentoSwitch) \
	op(EStdMidiControllerID::Sustenuto) \
	op(EStdMidiControllerID::SoftPedal) \
	op(EStdMidiControllerID::Legato) \
	op(EStdMidiControllerID::Hold2) \
	op(EStdMidiControllerID::SoundController1) \
	op(EStdMidiControllerID::SoundController2) \
	op(EStdMidiControllerID::SoundController3) \
	op(EStdMidiControllerID::SoundController4) \
	op(EStdMidiControllerID::SoundController5) \
	op(EStdMidiControllerID::SoundController6) \
	op(EStdMidiControllerID::SoundController7) \
	op(EStdMidiControllerID::SoundController8) \
	op(EStdMidiControllerID::SoundController9) \
	op(EStdMidiControllerID::SoundController10) \
	op(EStdMidiControllerID::GeneralPurposeController5) \
	op(EStdMidiControllerID::GeneralPurposeController6) \
	op(EStdMidiControllerID::GeneralPurposeController7) \
	op(EStdMidiControllerID::GeneralPurposeController8) \
	op(EStdMidiControllerID::PortamentoControl) \
	op(EStdMidiControllerID::Undefined85) \
	op(EStdMidiControllerID::Undefined86) \
	op(EStdMidiControllerID::Undefined87) \
	op(EStdMidiControllerID::HighResolutionVelocityPrefix) \
	op(EStdMidiControllerID::Undefined89) \
	op(EStdMidiControllerID::Undefined90) \
	op(EStdMidiControllerID::Effects1Depth) \
	op(EStdMidiControllerID::Effects2Depth) \
	op(EStdMidiControllerID::Effects3Depth) \
	op(EStdMidiControllerID::Effects4Depth) \
	op(EStdMidiControllerID::Effects5Depth) \
	op(EStdMidiControllerID::DataIncrement) \
	op(EStdMidiControllerID::DataDecrement) \
	op(EStdMidiControllerID::NRPNFine) \
	op(EStdMidiControllerID::NRPNCoarse) \
	op(EStdMidiControllerID::RPNFine) \
	op(EStdMidiControllerID::RPNCoarse) \
	op(EStdMidiControllerID::Undefined102) \
	op(EStdMidiControllerID::Undefined103) \
	op(EStdMidiControllerID::Undefined104) \
	op(EStdMidiControllerID::Undefined105) \
	op(EStdMidiControllerID::Undefined106) \
	op(EStdMidiControllerID::Undefined107) \
	op(EStdMidiControllerID::Undefined108) \
	op(EStdMidiControllerID::Undefined109) \
	op(EStdMidiControllerID::Undefined110) \
	op(EStdMidiControllerID::Undefined111) \
	op(EStdMidiControllerID::Undefined112) \
	op(EStdMidiControllerID::Undefined113) \
	op(EStdMidiControllerID::Undefined114) \
	op(EStdMidiControllerID::Undefined115) \
	op(EStdMidiControllerID::Undefined116) \
	op(EStdMidiControllerID::Undefined117) \
	op(EStdMidiControllerID::Undefined118) \
	op(EStdMidiControllerID::Undefined119) \
	op(EStdMidiControllerID::AllSoundOff) \
	op(EStdMidiControllerID::Reset) \
	op(EStdMidiControllerID::LocalKeyboardSwitch) \
	op(EStdMidiControllerID::AllNotesOff) \
	op(EStdMidiControllerID::OmniModeOff) \
	op(EStdMidiControllerID::OmniModeOn) \
	op(EStdMidiControllerID::MonoMode) \
	op(EStdMidiControllerID::PolyMode) \
	op(EStdMidiControllerID::NUM) 

enum class EStdMidiControllerID : uint8;
template<> struct TIsUEnumClass<EStdMidiControllerID> { enum { Value = true }; };
template<> HARMONIXMETASOUND_NON_ATTRIBUTED_API UEnum* StaticEnum<EStdMidiControllerID>();
// ********** End Enum EStdMidiControllerID ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
