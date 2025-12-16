// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSnapshotsEngineSubsystem.h"

#ifdef LEVELSNAPSHOTS_LevelSnapshotsEngineSubsystem_generated_h
#error "LevelSnapshotsEngineSubsystem.generated.h already included, missing '#pragma once' in LevelSnapshotsEngineSubsystem.h"
#endif
#define LEVELSNAPSHOTS_LevelSnapshotsEngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPostApplySnapshotEventData_Blueprint;
struct FPostTakeSnapshotEventData_Blueprint;
struct FPreApplySnapshotEventData_Blueprint;
struct FPreTakeSnapshotEventData_Blueprint;

// ********** Begin ScriptStruct FLevelSnapshotEvent_Blueprint *************************************
struct Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics;
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLevelSnapshotEvent_Blueprint;
// ********** End ScriptStruct FLevelSnapshotEvent_Blueprint ***************************************

// ********** Begin ScriptStruct FPreTakeSnapshotEventData_Blueprint *******************************
struct Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics;
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLevelSnapshotEvent_Blueprint Super;


struct FPreTakeSnapshotEventData_Blueprint;
// ********** End ScriptStruct FPreTakeSnapshotEventData_Blueprint *********************************

// ********** Begin ScriptStruct FPostTakeSnapshotEventData_Blueprint ******************************
struct Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics;
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLevelSnapshotEvent_Blueprint Super;


struct FPostTakeSnapshotEventData_Blueprint;
// ********** End ScriptStruct FPostTakeSnapshotEventData_Blueprint ********************************

// ********** Begin ScriptStruct FPreApplySnapshotEventData_Blueprint ******************************
struct Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics;
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLevelSnapshotEvent_Blueprint Super;


struct FPreApplySnapshotEventData_Blueprint;
// ********** End ScriptStruct FPreApplySnapshotEventData_Blueprint ********************************

// ********** Begin ScriptStruct FPostApplySnapshotEventData_Blueprint *****************************
struct Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics;
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLevelSnapshotEvent_Blueprint Super;


struct FPostApplySnapshotEventData_Blueprint;
// ********** End ScriptStruct FPostApplySnapshotEventData_Blueprint *******************************

// ********** Begin Delegate FPreTakeSnapshotEvent *************************************************
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_47_DELEGATE \
static void FPreTakeSnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PreTakeSnapshotEvent, FPreTakeSnapshotEventData_Blueprint const& EventData);


// ********** End Delegate FPreTakeSnapshotEvent ***************************************************

// ********** Begin Delegate FPostTakeSnapshotEvent ************************************************
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_52_DELEGATE \
static void FPostTakeSnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PostTakeSnapshotEvent, FPostTakeSnapshotEventData_Blueprint const& EventData);


// ********** End Delegate FPostTakeSnapshotEvent **************************************************

// ********** Begin Delegate FPreApplySnapshotEvent ************************************************
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_57_DELEGATE \
static void FPreApplySnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PreApplySnapshotEvent, FPreApplySnapshotEventData_Blueprint const& EventData);


// ********** End Delegate FPreApplySnapshotEvent **************************************************

// ********** Begin Delegate FPostApplySnapshotEvent ***********************************************
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_62_DELEGATE \
static void FPostApplySnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PostApplySnapshotEvent, FPostApplySnapshotEventData_Blueprint const& EventData);


// ********** End Delegate FPostApplySnapshotEvent *************************************************

// ********** Begin Class ULevelSnapshotsEngineSubsystem *******************************************
struct Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics;
LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSnapshotsEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTS_API UClass* ::Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSnapshotsEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshots"), Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULevelSnapshotsEngineSubsystem)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSnapshotsEngineSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSnapshotsEngineSubsystem(ULevelSnapshotsEngineSubsystem&&) = delete; \
	ULevelSnapshotsEngineSubsystem(const ULevelSnapshotsEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSnapshotsEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSnapshotsEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelSnapshotsEngineSubsystem) \
	NO_API virtual ~ULevelSnapshotsEngineSubsystem();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_41_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSnapshotsEngineSubsystem;

// ********** End Class ULevelSnapshotsEngineSubsystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
