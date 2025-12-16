// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOSReplayKitControl.h"

#ifdef IOSREPLAYKIT_IOSReplayKitControl_generated_h
#error "IOSReplayKitControl.generated.h already included, missing '#pragma once' in IOSReplayKitControl.h"
#endif
#define IOSREPLAYKIT_IOSReplayKitControl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIOSReplayKitControl *****************************************************
#define FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopCapture); \
	DECLARE_FUNCTION(execStartCaptureToFile); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording);


struct Z_Construct_UClass_UIOSReplayKitControl_Statics;
IOSREPLAYKIT_API UClass* Z_Construct_UClass_UIOSReplayKitControl_NoRegister();

#define FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIOSReplayKitControl(); \
	friend struct ::Z_Construct_UClass_UIOSReplayKitControl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IOSREPLAYKIT_API UClass* ::Z_Construct_UClass_UIOSReplayKitControl_NoRegister(); \
public: \
	DECLARE_CLASS2(UIOSReplayKitControl, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IOSReplayKit"), Z_Construct_UClass_UIOSReplayKitControl_NoRegister) \
	DECLARE_SERIALIZER(UIOSReplayKitControl)


#define FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOSReplayKitControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIOSReplayKitControl(UIOSReplayKitControl&&) = delete; \
	UIOSReplayKitControl(const UIOSReplayKitControl&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOSReplayKitControl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOSReplayKitControl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOSReplayKitControl) \
	NO_API virtual ~UIOSReplayKitControl();


#define FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIOSReplayKitControl;

// ********** End Class UIOSReplayKitControl *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
