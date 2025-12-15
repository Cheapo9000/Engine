// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/AudioVolume.h"

#ifdef ENGINE_AudioVolume_generated_h
#error "AudioVolume.generated.h already included, missing '#pragma once' in AudioVolume.h"
#endif
#define ENGINE_AudioVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioVolumeSubmixOverrideSettings;
struct FAudioVolumeSubmixSendSettings;
struct FInteriorSettings;
struct FReverbSettings;

// ********** Begin ScriptStruct FAudioVolumeSubmixSendSettings ************************************
struct Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioVolumeSubmixSendSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAudioVolumeSubmixSendSettings;
// ********** End ScriptStruct FAudioVolumeSubmixSendSettings **************************************

// ********** Begin ScriptStruct FAudioVolumeSubmixOverrideSettings ********************************
struct Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioVolumeSubmixOverrideSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAudioVolumeSubmixOverrideSettings;
// ********** End ScriptStruct FAudioVolumeSubmixOverrideSettings **********************************

// ********** Begin ScriptStruct FInteriorSettings *************************************************
struct Z_Construct_UScriptStruct_FInteriorSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInteriorSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInteriorSettings;
// ********** End ScriptStruct FInteriorSettings ***************************************************

// ********** Begin Class AAudioVolume *************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_154_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetSubmixOverrideSettings); \
	DECLARE_FUNCTION(execSetSubmixSendSettings); \
	DECLARE_FUNCTION(execSetInteriorSettings); \
	DECLARE_FUNCTION(execSetReverbSettings); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetPriority);


struct Z_Construct_UClass_AAudioVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_AAudioVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_154_INCLASS \
private: \
	static void StaticRegisterNativesAAudioVolume(); \
	friend struct ::Z_Construct_UClass_AAudioVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AAudioVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(AAudioVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AAudioVolume_NoRegister) \
	DECLARE_SERIALIZER(AAudioVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AAudioVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAudioVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AAudioVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAudioVolume(AAudioVolume&&) = delete; \
	AAudioVolume(const AAudioVolume&) = delete; \
	ENGINE_API virtual ~AAudioVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_151_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_154_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_154_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAudioVolume;

// ********** End Class AAudioVolume ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioVolume_h

// ********** Begin Enum EAudioVolumeLocationState *************************************************
#define FOREACH_ENUM_EAUDIOVOLUMELOCATIONSTATE(op) \
	op(EAudioVolumeLocationState::InsideTheVolume) \
	op(EAudioVolumeLocationState::OutsideTheVolume) 

enum class EAudioVolumeLocationState : uint8;
template<> struct TIsUEnumClass<EAudioVolumeLocationState> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioVolumeLocationState>();
// ********** End Enum EAudioVolumeLocationState ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
