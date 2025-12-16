// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertTakeRecorderMessages.h"

#ifdef CONCERTTAKERECORDER_ConcertTakeRecorderMessages_generated_h
#error "ConcertTakeRecorderMessages.generated.h already included, missing '#pragma once' in ConcertTakeRecorderMessages.h"
#endif
#define CONCERTTAKERECORDER_ConcertTakeRecorderMessages_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConcertTakeSynchronization **********************************************
struct Z_Construct_UClass_UConcertTakeSynchronization_Statics;
CONCERTTAKERECORDER_API UClass* Z_Construct_UClass_UConcertTakeSynchronization_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertTakeSynchronization(); \
	friend struct ::Z_Construct_UClass_UConcertTakeSynchronization_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTTAKERECORDER_API UClass* ::Z_Construct_UClass_UConcertTakeSynchronization_NoRegister(); \
public: \
	DECLARE_CLASS2(UConcertTakeSynchronization, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertTakeRecorder"), Z_Construct_UClass_UConcertTakeSynchronization_NoRegister) \
	DECLARE_SERIALIZER(UConcertTakeSynchronization)


#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConcertTakeSynchronization(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConcertTakeSynchronization(UConcertTakeSynchronization&&) = delete; \
	UConcertTakeSynchronization(const UConcertTakeSynchronization&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConcertTakeSynchronization); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertTakeSynchronization); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConcertTakeSynchronization) \
	NO_API virtual ~UConcertTakeSynchronization();


#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConcertTakeSynchronization;

// ********** End Class UConcertTakeSynchronization ************************************************

// ********** Begin ScriptStruct FTakeRecordSettings ***********************************************
struct Z_Construct_UScriptStruct_FTakeRecordSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTakeRecordSettings_Statics; \
	CONCERTTAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FTakeRecordSettings;
// ********** End ScriptStruct FTakeRecordSettings *************************************************

// ********** Begin ScriptStruct FConcertClientRecordSetting ***************************************
struct Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics;
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics; \
	CONCERTTAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FConcertClientRecordSetting;
// ********** End ScriptStruct FConcertClientRecordSetting *****************************************

// ********** Begin Class UConcertSessionRecordSettings ********************************************
struct Z_Construct_UClass_UConcertSessionRecordSettings_Statics;
CONCERTTAKERECORDER_API UClass* Z_Construct_UClass_UConcertSessionRecordSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertSessionRecordSettings(); \
	friend struct ::Z_Construct_UClass_UConcertSessionRecordSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTTAKERECORDER_API UClass* ::Z_Construct_UClass_UConcertSessionRecordSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UConcertSessionRecordSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertTakeRecorder"), Z_Construct_UClass_UConcertSessionRecordSettings_NoRegister) \
	DECLARE_SERIALIZER(UConcertSessionRecordSettings)


#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConcertSessionRecordSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConcertSessionRecordSettings(UConcertSessionRecordSettings&&) = delete; \
	UConcertSessionRecordSettings(const UConcertSessionRecordSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConcertSessionRecordSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertSessionRecordSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConcertSessionRecordSettings) \
	NO_API virtual ~UConcertSessionRecordSettings();


#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_51_PROLOG
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_55_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConcertSessionRecordSettings;

// ********** End Class UConcertSessionRecordSettings **********************************************

// ********** Begin ScriptStruct FConcertRecordSettingsChangeEvent *********************************
struct Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics; \
	CONCERTTAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FConcertRecordSettingsChangeEvent;
// ********** End ScriptStruct FConcertRecordSettingsChangeEvent ***********************************

// ********** Begin ScriptStruct FConcertMultiUserSyncChangeEvent **********************************
struct Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics; \
	CONCERTTAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FConcertMultiUserSyncChangeEvent;
// ********** End ScriptStruct FConcertMultiUserSyncChangeEvent ************************************

// ********** Begin ScriptStruct FConcertTakeInitializedEvent **************************************
struct Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics; \
	CONCERTTAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FConcertTakeInitializedEvent;
// ********** End ScriptStruct FConcertTakeInitializedEvent ****************************************

// ********** Begin ScriptStruct FConcertRecordingFinishedEvent ************************************
struct Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_119_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics; \
	CONCERTTAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FConcertRecordingFinishedEvent;
// ********** End ScriptStruct FConcertRecordingFinishedEvent **************************************

// ********** Begin ScriptStruct FConcertRecordingNamedLevelSequenceEvent **************************
struct Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_128_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics; \
	CONCERTTAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FConcertRecordingNamedLevelSequenceEvent;
// ********** End ScriptStruct FConcertRecordingNamedLevelSequenceEvent ****************************

// ********** Begin ScriptStruct FConcertRecordingCancelledEvent ***********************************
struct Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics;
#define FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_137_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics; \
	CONCERTTAKERECORDER_API static class UScriptStruct* StaticStruct();


struct FConcertRecordingCancelledEvent;
// ********** End ScriptStruct FConcertRecordingCancelledEvent *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
