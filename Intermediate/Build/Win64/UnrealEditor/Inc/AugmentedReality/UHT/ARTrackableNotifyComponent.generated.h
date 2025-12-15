// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARTrackableNotifyComponent.h"

#ifdef AUGMENTEDREALITY_ARTrackableNotifyComponent_generated_h
#error "ARTrackableNotifyComponent.generated.h already included, missing '#pragma once' in ARTrackableNotifyComponent.h"
#endif
#define AUGMENTEDREALITY_ARTrackableNotifyComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAREnvironmentCaptureProbe;
class UARFaceGeometry;
class UARPlaneGeometry;
class UARTrackedGeometry;
class UARTrackedImage;
class UARTrackedObject;
class UARTrackedPoint;

// ********** Begin Delegate FTrackableDelegate ****************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_12_DELEGATE \
AUGMENTEDREALITY_API void FTrackableDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableDelegate, UARTrackedGeometry* TrackedGeometry);


// ********** End Delegate FTrackableDelegate ******************************************************

// ********** Begin Delegate FTrackablePlaneDelegate ***********************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_13_DELEGATE \
AUGMENTEDREALITY_API void FTrackablePlaneDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackablePlaneDelegate, UARPlaneGeometry* TrackedPlane);


// ********** End Delegate FTrackablePlaneDelegate *************************************************

// ********** Begin Delegate FTrackablePointDelegate ***********************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_14_DELEGATE \
AUGMENTEDREALITY_API void FTrackablePointDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackablePointDelegate, UARTrackedPoint* TrackedPoint);


// ********** End Delegate FTrackablePointDelegate *************************************************

// ********** Begin Delegate FTrackableImageDelegate ***********************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_15_DELEGATE \
AUGMENTEDREALITY_API void FTrackableImageDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableImageDelegate, UARTrackedImage* TrackedImage);


// ********** End Delegate FTrackableImageDelegate *************************************************

// ********** Begin Delegate FTrackableFaceDelegate ************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_16_DELEGATE \
AUGMENTEDREALITY_API void FTrackableFaceDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableFaceDelegate, UARFaceGeometry* TrackedFace);


// ********** End Delegate FTrackableFaceDelegate **************************************************

// ********** Begin Delegate FTrackableEnvProbeDelegate ********************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_17_DELEGATE \
AUGMENTEDREALITY_API void FTrackableEnvProbeDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableEnvProbeDelegate, UAREnvironmentCaptureProbe* TrackedEnvProbe);


// ********** End Delegate FTrackableEnvProbeDelegate **********************************************

// ********** Begin Delegate FTrackableObjectDelegate **********************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_18_DELEGATE \
AUGMENTEDREALITY_API void FTrackableObjectDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableObjectDelegate, UARTrackedObject* TrackedObject);


// ********** End Delegate FTrackableObjectDelegate ************************************************

// ********** Begin Class UARTrackableNotifyComponent **********************************************
struct Z_Construct_UClass_UARTrackableNotifyComponent_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackableNotifyComponent_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackableNotifyComponent(); \
	friend struct ::Z_Construct_UClass_UARTrackableNotifyComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTrackableNotifyComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTrackableNotifyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTrackableNotifyComponent_NoRegister) \
	DECLARE_SERIALIZER(UARTrackableNotifyComponent)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARTrackableNotifyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTrackableNotifyComponent(UARTrackableNotifyComponent&&) = delete; \
	UARTrackableNotifyComponent(const UARTrackableNotifyComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARTrackableNotifyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackableNotifyComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackableNotifyComponent) \
	AUGMENTEDREALITY_API virtual ~UARTrackableNotifyComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_21_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTrackableNotifyComponent;

// ********** End Class UARTrackableNotifyComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
