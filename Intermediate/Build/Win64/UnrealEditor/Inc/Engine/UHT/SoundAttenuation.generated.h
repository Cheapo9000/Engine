// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundAttenuation.h"

#ifdef ENGINE_SoundAttenuation_generated_h
#error "SoundAttenuation.generated.h already included, missing '#pragma once' in SoundAttenuation.h"
#endif
#define ENGINE_SoundAttenuation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundAttenuationPluginSettings ***********************************
struct Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundAttenuationPluginSettings;
// ********** End ScriptStruct FSoundAttenuationPluginSettings *************************************

// ********** Begin ScriptStruct FAttenuationSubmixSendSettings ************************************
struct Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSoundSubmixSendInfoBase Super;


struct FAttenuationSubmixSendSettings;
// ********** End ScriptStruct FAttenuationSubmixSendSettings **************************************

// ********** Begin ScriptStruct FSoundAttenuationSettings *****************************************
struct Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseAttenuationSettings Super;


struct FSoundAttenuationSettings;
// ********** End ScriptStruct FSoundAttenuationSettings *******************************************

// ********** Begin Class USoundAttenuation ********************************************************
struct Z_Construct_UClass_USoundAttenuation_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_445_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAttenuation(); \
	friend struct ::Z_Construct_UClass_USoundAttenuation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundAttenuation_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundAttenuation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundAttenuation_NoRegister) \
	DECLARE_SERIALIZER(USoundAttenuation)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_445_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundAttenuation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundAttenuation(USoundAttenuation&&) = delete; \
	USoundAttenuation(const USoundAttenuation&) = delete; \
	ENGINE_API virtual ~USoundAttenuation();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_442_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_445_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_445_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_445_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundAttenuation;

// ********** End Class USoundAttenuation **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h

// ********** Begin Enum ESoundDistanceCalc ********************************************************
#define FOREACH_ENUM_ESOUNDDISTANCECALC(op) \
	op(SOUNDDISTANCE_Normal) \
	op(SOUNDDISTANCE_InfiniteXYPlane) \
	op(SOUNDDISTANCE_InfiniteXZPlane) \
	op(SOUNDDISTANCE_InfiniteYZPlane) 

enum ESoundDistanceCalc : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundDistanceCalc>();
// ********** End Enum ESoundDistanceCalc **********************************************************

// ********** Begin Enum ESoundSpatializationAlgorithm *********************************************
#define FOREACH_ENUM_ESOUNDSPATIALIZATIONALGORITHM(op) \
	op(SPATIALIZATION_Default) \
	op(SPATIALIZATION_HRTF) 

enum ESoundSpatializationAlgorithm : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundSpatializationAlgorithm>();
// ********** End Enum ESoundSpatializationAlgorithm ***********************************************

// ********** Begin Enum EAirAbsorptionMethod ******************************************************
#define FOREACH_ENUM_EAIRABSORPTIONMETHOD(op) \
	op(EAirAbsorptionMethod::Linear) \
	op(EAirAbsorptionMethod::CustomCurve) 

enum class EAirAbsorptionMethod : uint8;
template<> struct TIsUEnumClass<EAirAbsorptionMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAirAbsorptionMethod>();
// ********** End Enum EAirAbsorptionMethod ********************************************************

// ********** Begin Enum EReverbSendMethod *********************************************************
#define FOREACH_ENUM_EREVERBSENDMETHOD(op) \
	op(EReverbSendMethod::Linear) \
	op(EReverbSendMethod::CustomCurve) \
	op(EReverbSendMethod::Manual) 

enum class EReverbSendMethod : uint8;
template<> struct TIsUEnumClass<EReverbSendMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EReverbSendMethod>();
// ********** End Enum EReverbSendMethod ***********************************************************

// ********** Begin Enum EPriorityAttenuationMethod ************************************************
#define FOREACH_ENUM_EPRIORITYATTENUATIONMETHOD(op) \
	op(EPriorityAttenuationMethod::Linear) \
	op(EPriorityAttenuationMethod::CustomCurve) \
	op(EPriorityAttenuationMethod::Manual) 

enum class EPriorityAttenuationMethod : uint8;
template<> struct TIsUEnumClass<EPriorityAttenuationMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPriorityAttenuationMethod>();
// ********** End Enum EPriorityAttenuationMethod **************************************************

// ********** Begin Enum ENonSpatializedRadiusSpeakerMapMode ***************************************
#define FOREACH_ENUM_ENONSPATIALIZEDRADIUSSPEAKERMAPMODE(op) \
	op(ENonSpatializedRadiusSpeakerMapMode::OmniDirectional) \
	op(ENonSpatializedRadiusSpeakerMapMode::Direct2D) \
	op(ENonSpatializedRadiusSpeakerMapMode::Surround2D) 

enum class ENonSpatializedRadiusSpeakerMapMode : uint8;
template<> struct TIsUEnumClass<ENonSpatializedRadiusSpeakerMapMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENonSpatializedRadiusSpeakerMapMode>();
// ********** End Enum ENonSpatializedRadiusSpeakerMapMode *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
