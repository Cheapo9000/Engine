// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIDIDeviceOutputController.h"

#ifdef MIDIDEVICE_MIDIDeviceOutputController_generated_h
#error "MIDIDeviceOutputController.generated.h already included, missing '#pragma once' in MIDIDeviceOutputController.h"
#endif
#define MIDIDEVICE_MIDIDeviceOutputController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMIDIEventType : uint8;

// ********** Begin Class UMIDIDeviceOutputController **********************************************
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendMIDIChannelAftertouch); \
	DECLARE_FUNCTION(execSendMIDIProgramChange); \
	DECLARE_FUNCTION(execSendMIDIControlChange); \
	DECLARE_FUNCTION(execSendMIDINoteAftertouch); \
	DECLARE_FUNCTION(execSendMIDIPitchBend); \
	DECLARE_FUNCTION(execSendMIDINoteOff); \
	DECLARE_FUNCTION(execSendMIDINoteOn); \
	DECLARE_FUNCTION(execSendMIDIEvent);


struct Z_Construct_UClass_UMIDIDeviceOutputController_Statics;
MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceOutputController_NoRegister();

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDeviceOutputController(); \
	friend struct ::Z_Construct_UClass_UMIDIDeviceOutputController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIDIDEVICE_API UClass* ::Z_Construct_UClass_UMIDIDeviceOutputController_NoRegister(); \
public: \
	DECLARE_CLASS2(UMIDIDeviceOutputController, UMIDIDeviceControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), Z_Construct_UClass_UMIDIDeviceOutputController_NoRegister) \
	DECLARE_SERIALIZER(UMIDIDeviceOutputController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MIDIDEVICE_API UMIDIDeviceOutputController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMIDIDeviceOutputController(UMIDIDeviceOutputController&&) = delete; \
	UMIDIDeviceOutputController(const UMIDIDeviceOutputController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MIDIDEVICE_API, UMIDIDeviceOutputController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceOutputController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceOutputController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMIDIDeviceOutputController;

// ********** End Class UMIDIDeviceOutputController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
