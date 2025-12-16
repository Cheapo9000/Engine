// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIDIDeviceController.h"

#ifdef MIDIDEVICE_MIDIDeviceController_generated_h
#error "MIDIDeviceController.generated.h already included, missing '#pragma once' in MIDIDeviceController.h"
#endif
#define MIDIDEVICE_MIDIDeviceController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMIDIDeviceController;
enum class EMIDIEventType : uint8;

// ********** Begin Delegate FOnMIDIEvent **********************************************************
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_47_DELEGATE \
MIDIDEVICE_API void FOnMIDIEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIEvent, UMIDIDeviceController* MIDIDeviceController, int32 Timestamp, EMIDIEventType EventType, int32 Channel, int32 ControlID, int32 Velocity, int32 RawEventType);


// ********** End Delegate FOnMIDIEvent ************************************************************

// ********** Begin Class UMIDIDeviceController ****************************************************
struct Z_Construct_UClass_UMIDIDeviceController_Statics;
MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceController_NoRegister();

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDeviceController(); \
	friend struct ::Z_Construct_UClass_UMIDIDeviceController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIDIDEVICE_API UClass* ::Z_Construct_UClass_UMIDIDeviceController_NoRegister(); \
public: \
	DECLARE_CLASS2(UMIDIDeviceController, UMIDIDeviceControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), Z_Construct_UClass_UMIDIDeviceController_NoRegister) \
	DECLARE_SERIALIZER(UMIDIDeviceController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MIDIDEVICE_API UMIDIDeviceController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMIDIDeviceController(UMIDIDeviceController&&) = delete; \
	UMIDIDeviceController(const UMIDIDeviceController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MIDIDEVICE_API, UMIDIDeviceController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_50_PROLOG
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMIDIDeviceController;

// ********** End Class UMIDIDeviceController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h

// ********** Begin Enum EMIDIEventType ************************************************************
#define FOREACH_ENUM_EMIDIEVENTTYPE(op) \
	op(EMIDIEventType::Unknown) \
	op(EMIDIEventType::NoteOff) \
	op(EMIDIEventType::NoteOn) \
	op(EMIDIEventType::NoteAfterTouch) \
	op(EMIDIEventType::ControlChange) \
	op(EMIDIEventType::ProgramChange) \
	op(EMIDIEventType::ChannelAfterTouch) \
	op(EMIDIEventType::PitchBend) 

enum class EMIDIEventType : uint8;
template<> struct TIsUEnumClass<EMIDIEventType> { enum { Value = true }; };
template<> MIDIDEVICE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMIDIEventType>();
// ********** End Enum EMIDIEventType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
