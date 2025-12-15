// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARGeoTrackingSupport.h"

#ifdef AUGMENTEDREALITY_ARGeoTrackingSupport_generated_h
#error "ARGeoTrackingSupport.generated.h already included, missing '#pragma once' in ARGeoTrackingSupport.h"
#endif
#define AUGMENTEDREALITY_ARGeoTrackingSupport_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARGeoTrackingSupport;
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy;
class UGetGeoLocationAsyncTaskBlueprintProxy;
class UObject;
enum class EARGeoTrackingAccuracy : uint8;
enum class EARGeoTrackingState : uint8;
enum class EARGeoTrackingStateReason : uint8;

// ********** Begin Class UARGeoTrackingSupport ****************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddGeoAnchorAtLocationWithAltitude); \
	DECLARE_FUNCTION(execAddGeoAnchorAtLocation); \
	DECLARE_FUNCTION(execGetGeoTrackingAccuracy); \
	DECLARE_FUNCTION(execGetGeoTrackingStateReason); \
	DECLARE_FUNCTION(execGetGeoTrackingState); \
	DECLARE_FUNCTION(execGetGeoTrackingSupport);


struct Z_Construct_UClass_UARGeoTrackingSupport_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoTrackingSupport_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGeoTrackingSupport(); \
	friend struct ::Z_Construct_UClass_UARGeoTrackingSupport_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARGeoTrackingSupport_NoRegister(); \
public: \
	DECLARE_CLASS2(UARGeoTrackingSupport, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARGeoTrackingSupport_NoRegister) \
	DECLARE_SERIALIZER(UARGeoTrackingSupport)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARGeoTrackingSupport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARGeoTrackingSupport(UARGeoTrackingSupport&&) = delete; \
	UARGeoTrackingSupport(const UARGeoTrackingSupport&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARGeoTrackingSupport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoTrackingSupport); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGeoTrackingSupport) \
	AUGMENTEDREALITY_API virtual ~UARGeoTrackingSupport();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_88_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARGeoTrackingSupport;

// ********** End Class UARGeoTrackingSupport ******************************************************

// ********** Begin Delegate FGeoTrackingAvailabilityDelegate **************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_186_DELEGATE \
static AUGMENTEDREALITY_API void FGeoTrackingAvailabilityDelegate_DelegateWrapper(const FMulticastScriptDelegate& GeoTrackingAvailabilityDelegate, bool bIsAvailable, const FString& Error);


// ********** End Delegate FGeoTrackingAvailabilityDelegate ****************************************

// ********** Begin Class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *********************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckGeoTrackingAvailabilityAtLocation); \
	DECLARE_FUNCTION(execCheckGeoTrackingAvailability);


struct Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(); \
	friend struct ::Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_NoRegister) \
	DECLARE_SERIALIZER(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_183_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy&&) = delete; \
	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy) \
	AUGMENTEDREALITY_API virtual ~UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_180_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_183_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_183_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy;

// ********** End Class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy ***********************

// ********** Begin Delegate FGetGeoLocationDelegate ***********************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_270_DELEGATE \
static AUGMENTEDREALITY_API void FGetGeoLocationDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetGeoLocationDelegate, float Longitude, float Latitude, float Altitude, const FString& Error);


// ********** End Delegate FGetGeoLocationDelegate *************************************************

// ********** Begin Class UGetGeoLocationAsyncTaskBlueprintProxy ***********************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_267_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGeoLocationAtWorldPosition);


struct Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_267_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy(); \
	friend struct ::Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UGetGeoLocationAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_NoRegister) \
	DECLARE_SERIALIZER(UGetGeoLocationAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_267_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UGetGeoLocationAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGetGeoLocationAsyncTaskBlueprintProxy(UGetGeoLocationAsyncTaskBlueprintProxy&&) = delete; \
	UGetGeoLocationAsyncTaskBlueprintProxy(const UGetGeoLocationAsyncTaskBlueprintProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UGetGeoLocationAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetGeoLocationAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetGeoLocationAsyncTaskBlueprintProxy) \
	AUGMENTEDREALITY_API virtual ~UGetGeoLocationAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_264_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_267_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_267_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_267_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_267_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGetGeoLocationAsyncTaskBlueprintProxy;

// ********** End Class UGetGeoLocationAsyncTaskBlueprintProxy *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h

// ********** Begin Enum EARGeoTrackingState *******************************************************
#define FOREACH_ENUM_EARGEOTRACKINGSTATE(op) \
	op(EARGeoTrackingState::Initializing) \
	op(EARGeoTrackingState::Localized) \
	op(EARGeoTrackingState::Localizing) \
	op(EARGeoTrackingState::NotAvailable) 

enum class EARGeoTrackingState : uint8;
template<> struct TIsUEnumClass<EARGeoTrackingState> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARGeoTrackingState>();
// ********** End Enum EARGeoTrackingState *********************************************************

// ********** Begin Enum EARGeoTrackingStateReason *************************************************
#define FOREACH_ENUM_EARGEOTRACKINGSTATEREASON(op) \
	op(EARGeoTrackingStateReason::None) \
	op(EARGeoTrackingStateReason::NotAvailableAtLocation) \
	op(EARGeoTrackingStateReason::NeedLocationPermissions) \
	op(EARGeoTrackingStateReason::DevicePointedTooLow) \
	op(EARGeoTrackingStateReason::WorldTrackingUnstable) \
	op(EARGeoTrackingStateReason::WaitingForLocation) \
	op(EARGeoTrackingStateReason::GeoDataNotLoaded) \
	op(EARGeoTrackingStateReason::VisualLocalizationFailed) \
	op(EARGeoTrackingStateReason::WaitingForAvailabilityCheck) 

enum class EARGeoTrackingStateReason : uint8;
template<> struct TIsUEnumClass<EARGeoTrackingStateReason> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARGeoTrackingStateReason>();
// ********** End Enum EARGeoTrackingStateReason ***************************************************

// ********** Begin Enum EARGeoTrackingAccuracy ****************************************************
#define FOREACH_ENUM_EARGEOTRACKINGACCURACY(op) \
	op(EARGeoTrackingAccuracy::Undetermined) \
	op(EARGeoTrackingAccuracy::Low) \
	op(EARGeoTrackingAccuracy::Medium) \
	op(EARGeoTrackingAccuracy::High) 

enum class EARGeoTrackingAccuracy : uint8;
template<> struct TIsUEnumClass<EARGeoTrackingAccuracy> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARGeoTrackingAccuracy>();
// ********** End Enum EARGeoTrackingAccuracy ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
