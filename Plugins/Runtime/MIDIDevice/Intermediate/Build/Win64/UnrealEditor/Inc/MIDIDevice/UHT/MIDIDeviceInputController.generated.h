// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIDIDeviceInputController.h"

#ifdef MIDIDEVICE_MIDIDeviceInputController_generated_h
#error "MIDIDeviceInputController.generated.h already included, missing '#pragma once' in MIDIDeviceInputController.h"
#endif
#define MIDIDEVICE_MIDIDeviceInputController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMIDIDeviceInputController;

// ********** Begin Delegate FOnMIDINoteOn *********************************************************
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_17_DELEGATE \
MIDIDEVICE_API void FOnMIDINoteOn_DelegateWrapper(const FMulticastScriptDelegate& OnMIDINoteOn, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Velocity);


// ********** End Delegate FOnMIDINoteOn ***********************************************************

// ********** Begin Delegate FOnMIDINoteOff ********************************************************
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_20_DELEGATE \
MIDIDEVICE_API void FOnMIDINoteOff_DelegateWrapper(const FMulticastScriptDelegate& OnMIDINoteOff, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Velocity);


// ********** End Delegate FOnMIDINoteOff **********************************************************

// ********** Begin Delegate FOnMIDIPitchBend ******************************************************
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_23_DELEGATE \
MIDIDEVICE_API void FOnMIDIPitchBend_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIPitchBend, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Pitch);


// ********** End Delegate FOnMIDIPitchBend ********************************************************

// ********** Begin Delegate FOnMIDIAftertouch *****************************************************
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_26_DELEGATE \
MIDIDEVICE_API void FOnMIDIAftertouch_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIAftertouch, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Amount);


// ********** End Delegate FOnMIDIAftertouch *******************************************************

// ********** Begin Delegate FOnMIDIControlChange **************************************************
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_29_DELEGATE \
MIDIDEVICE_API void FOnMIDIControlChange_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIControlChange, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Type, int32 Value);


// ********** End Delegate FOnMIDIControlChange ****************************************************

// ********** Begin Delegate FOnMIDIProgramChange **************************************************
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_32_DELEGATE \
MIDIDEVICE_API void FOnMIDIProgramChange_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIProgramChange, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 ControlID, int32 Velocity);


// ********** End Delegate FOnMIDIProgramChange ****************************************************

// ********** Begin Delegate FOnMIDIChannelAftertouch **********************************************
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_35_DELEGATE \
MIDIDEVICE_API void FOnMIDIChannelAftertouch_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIChannelAftertouch, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Amount);


// ********** End Delegate FOnMIDIChannelAftertouch ************************************************

// ********** Begin Class UMIDIDeviceInputController ***********************************************
struct Z_Construct_UClass_UMIDIDeviceInputController_Statics;
MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceInputController_NoRegister();

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDeviceInputController(); \
	friend struct ::Z_Construct_UClass_UMIDIDeviceInputController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIDIDEVICE_API UClass* ::Z_Construct_UClass_UMIDIDeviceInputController_NoRegister(); \
public: \
	DECLARE_CLASS2(UMIDIDeviceInputController, UMIDIDeviceControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), Z_Construct_UClass_UMIDIDeviceInputController_NoRegister) \
	DECLARE_SERIALIZER(UMIDIDeviceInputController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MIDIDEVICE_API UMIDIDeviceInputController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMIDIDeviceInputController(UMIDIDeviceInputController&&) = delete; \
	UMIDIDeviceInputController(const UMIDIDeviceInputController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MIDIDEVICE_API, UMIDIDeviceInputController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceInputController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceInputController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_41_PROLOG
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMIDIDeviceInputController;

// ********** End Class UMIDIDeviceInputController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
