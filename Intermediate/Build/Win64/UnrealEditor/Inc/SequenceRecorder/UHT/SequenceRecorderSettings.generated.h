// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequenceRecorderSettings.h"

#ifdef SEQUENCERECORDER_SequenceRecorderSettings_generated_h
#error "SequenceRecorderSettings.generated.h already included, missing '#pragma once' in SequenceRecorderSettings.h"
#endif
#define SEQUENCERECORDER_SequenceRecorderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertiesToRecordForActorClass **********************************
struct Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics;
#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics; \
	SEQUENCERECORDER_API static class UScriptStruct* StaticStruct();


struct FPropertiesToRecordForActorClass;
// ********** End ScriptStruct FPropertiesToRecordForActorClass ************************************

// ********** Begin ScriptStruct FPropertiesToRecordForClass ***************************************
struct Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics;
#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics; \
	SEQUENCERECORDER_API static class UScriptStruct* StaticStruct();


struct FPropertiesToRecordForClass;
// ********** End ScriptStruct FPropertiesToRecordForClass *****************************************

// ********** Begin ScriptStruct FSettingsForActorClass ********************************************
struct Z_Construct_UScriptStruct_FSettingsForActorClass_Statics;
#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSettingsForActorClass_Statics; \
	SEQUENCERECORDER_API static class UScriptStruct* StaticStruct();


struct FSettingsForActorClass;
// ********** End ScriptStruct FSettingsForActorClass **********************************************

// ********** Begin Class USequenceRecorderSettings ************************************************
struct Z_Construct_UClass_USequenceRecorderSettings_Statics;
SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderSettings_NoRegister();

#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUSequenceRecorderSettings(); \
	friend struct ::Z_Construct_UClass_USequenceRecorderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERECORDER_API UClass* ::Z_Construct_UClass_USequenceRecorderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USequenceRecorderSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), Z_Construct_UClass_USequenceRecorderSettings_NoRegister) \
	DECLARE_SERIALIZER(USequenceRecorderSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERECORDER_API USequenceRecorderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceRecorderSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERECORDER_API, USequenceRecorderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceRecorderSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequenceRecorderSettings(USequenceRecorderSettings&&) = delete; \
	USequenceRecorderSettings(const USequenceRecorderSettings&) = delete; \
	SEQUENCERECORDER_API virtual ~USequenceRecorderSettings();


#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_85_PROLOG
#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_88_INCLASS \
	FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequenceRecorderSettings;

// ********** End Class USequenceRecorderSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h

// ********** Begin Enum EAudioRecordingMode *******************************************************
#define FOREACH_ENUM_EAUDIORECORDINGMODE(op) \
	op(EAudioRecordingMode::None) \
	op(EAudioRecordingMode::AudioTrack) 

enum class EAudioRecordingMode : uint8;
template<> struct TIsUEnumClass<EAudioRecordingMode> { enum { Value = true }; };
template<> SEQUENCERECORDER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioRecordingMode>();
// ********** End Enum EAudioRecordingMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
