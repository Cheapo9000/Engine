// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIDIDeviceControllerBase.h"

#ifdef MIDIDEVICE_MIDIDeviceControllerBase_generated_h
#error "MIDIDeviceControllerBase.generated.h already included, missing '#pragma once' in MIDIDeviceControllerBase.h"
#endif
#define MIDIDEVICE_MIDIDeviceControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMIDIDeviceControllerBase ************************************************
struct Z_Construct_UClass_UMIDIDeviceControllerBase_Statics;
MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceControllerBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDeviceControllerBase(); \
	friend struct ::Z_Construct_UClass_UMIDIDeviceControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIDIDEVICE_API UClass* ::Z_Construct_UClass_UMIDIDeviceControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMIDIDeviceControllerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MIDIDevice"), Z_Construct_UClass_UMIDIDeviceControllerBase_NoRegister) \
	DECLARE_SERIALIZER(UMIDIDeviceControllerBase)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MIDIDEVICE_API UMIDIDeviceControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMIDIDeviceControllerBase(UMIDIDeviceControllerBase&&) = delete; \
	UMIDIDeviceControllerBase(const UMIDIDeviceControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MIDIDEVICE_API, UMIDIDeviceControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceControllerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceControllerBase) \
	MIDIDEVICE_API virtual ~UMIDIDeviceControllerBase();


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMIDIDeviceControllerBase;

// ********** End Class UMIDIDeviceControllerBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
