// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlPreset.h"

#ifdef REMOTECONTROL_RemoteControlPreset_generated_h
#error "RemoteControlPreset.generated.h already included, missing '#pragma once' in RemoteControlPreset.h"
#endif
#define REMOTECONTROL_RemoteControlPreset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRCCachedFieldData ************************************************
struct Z_Construct_UScriptStruct_FRCCachedFieldData_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCCachedFieldData_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRCCachedFieldData;
// ********** End ScriptStruct FRCCachedFieldData **************************************************

// ********** Begin ScriptStruct FRemoteControlPresetGroup *****************************************
struct Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_155_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRemoteControlPresetGroup;
// ********** End ScriptStruct FRemoteControlPresetGroup *******************************************

// ********** Begin ScriptStruct FRemoteControlPresetLayout ****************************************
struct Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_213_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRemoteControlPresetLayout;
// ********** End ScriptStruct FRemoteControlPresetLayout ******************************************

// ********** Begin Class URemoteControlPreset *****************************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_369_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URemoteControlPreset, NO_API)


struct Z_Construct_UClass_URemoteControlPreset_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_369_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlPreset(); \
	friend struct ::Z_Construct_UClass_URemoteControlPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URemoteControlPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URemoteControlPreset_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlPreset) \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_369_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_369_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlPreset(URemoteControlPreset&&) = delete; \
	URemoteControlPreset(const URemoteControlPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlPreset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteControlPreset) \
	NO_API virtual ~URemoteControlPreset();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_365_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_369_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_369_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_369_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlPreset;

// ********** End Class URemoteControlPreset *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
