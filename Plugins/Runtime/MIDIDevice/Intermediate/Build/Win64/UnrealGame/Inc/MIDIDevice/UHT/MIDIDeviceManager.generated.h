// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIDIDeviceManager.h"

#ifdef MIDIDEVICE_MIDIDeviceManager_generated_h
#error "MIDIDeviceManager.generated.h already included, missing '#pragma once' in MIDIDeviceManager.h"
#endif
#define MIDIDEVICE_MIDIDeviceManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMIDIDeviceController;
class UMIDIDeviceInputController;
class UMIDIDeviceOutputController;
struct FFoundMIDIDevice;
struct FMIDIDeviceInfo;

// ********** Begin ScriptStruct FFoundMIDIDevice **************************************************
struct Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics;
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics; \
	MIDIDEVICE_API static class UScriptStruct* StaticStruct();


struct FFoundMIDIDevice;
// ********** End ScriptStruct FFoundMIDIDevice ****************************************************

// ********** Begin ScriptStruct FMIDIDeviceInfo ***************************************************
struct Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics;
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics; \
	MIDIDEVICE_API static class UScriptStruct* StaticStruct();


struct FMIDIDeviceInfo;
// ********** End ScriptStruct FMIDIDeviceInfo *****************************************************

// ********** Begin Class UMIDIDeviceManager *******************************************************
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateMIDIDeviceOutputController); \
	DECLARE_FUNCTION(execCreateMIDIDeviceInputController); \
	DECLARE_FUNCTION(execCreateMIDIDeviceController); \
	DECLARE_FUNCTION(execGetDefaultMIDIOutputDeviceID); \
	DECLARE_FUNCTION(execGetMIDIOutputDeviceIDByName); \
	DECLARE_FUNCTION(execGetDefaultMIDIInputDeviceID); \
	DECLARE_FUNCTION(execGetMIDIInputDeviceIDByName); \
	DECLARE_FUNCTION(execFindAllMIDIDeviceInfo); \
	DECLARE_FUNCTION(execFindMIDIDevices); \
	DECLARE_FUNCTION(execShutDownAllMIDIDevices);


struct Z_Construct_UClass_UMIDIDeviceManager_Statics;
MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceManager_NoRegister();

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDeviceManager(); \
	friend struct ::Z_Construct_UClass_UMIDIDeviceManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIDIDEVICE_API UClass* ::Z_Construct_UClass_UMIDIDeviceManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMIDIDeviceManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), Z_Construct_UClass_UMIDIDeviceManager_NoRegister) \
	DECLARE_SERIALIZER(UMIDIDeviceManager)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MIDIDEVICE_API UMIDIDeviceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMIDIDeviceManager(UMIDIDeviceManager&&) = delete; \
	UMIDIDeviceManager(const UMIDIDeviceManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MIDIDEVICE_API, UMIDIDeviceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceManager) \
	MIDIDEVICE_API virtual ~UMIDIDeviceManager();


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_71_PROLOG
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMIDIDeviceManager;

// ********** End Class UMIDIDeviceManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
