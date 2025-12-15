// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARTypes.h"

#ifdef AUGMENTEDREALITY_ARTypes_generated_h
#error "ARTypes.generated.h already included, missing '#pragma once' in ARTypes.h"
#endif
#define AUGMENTEDREALITY_ARTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class EARCandidateImageOrientation : uint8;
enum class EARTrackingState : uint8;

// ********** Begin ScriptStruct FARSessionStatus **************************************************
struct Z_Construct_UScriptStruct_FARSessionStatus_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_259_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARSessionStatus_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARSessionStatus;
// ********** End ScriptStruct FARSessionStatus ****************************************************

// ********** Begin Delegate FOnARTrackingStateChanged *********************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_281_DELEGATE \
AUGMENTEDREALITY_API void FOnARTrackingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnARTrackingStateChanged, EARTrackingState NewTrackingState);


// ********** End Delegate FOnARTrackingStateChanged ***********************************************

// ********** Begin Delegate FOnARTransformUpdated *************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_282_DELEGATE \
AUGMENTEDREALITY_API void FOnARTransformUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnARTransformUpdated, FTransform const& OldToNewTransform);


// ********** End Delegate FOnARTransformUpdated ***************************************************

// ********** Begin Class UARTypesDummyClass *******************************************************
struct Z_Construct_UClass_UARTypesDummyClass_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTypesDummyClass_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_287_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTypesDummyClass(); \
	friend struct ::Z_Construct_UClass_UARTypesDummyClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTypesDummyClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTypesDummyClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTypesDummyClass_NoRegister) \
	DECLARE_SERIALIZER(UARTypesDummyClass)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_287_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTypesDummyClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTypesDummyClass(UARTypesDummyClass&&) = delete; \
	UARTypesDummyClass(const UARTypesDummyClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTypesDummyClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTypesDummyClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTypesDummyClass) \
	NO_API virtual ~UARTypesDummyClass();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_284_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_287_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_287_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_287_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTypesDummyClass;

// ********** End Class UARTypesDummyClass *********************************************************

// ********** Begin Class UARCandidateImage ********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_314_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetPhysicalHeight); \
	DECLARE_FUNCTION(execGetPhysicalWidth); \
	DECLARE_FUNCTION(execGetFriendlyName); \
	DECLARE_FUNCTION(execGetCandidateTexture);


struct Z_Construct_UClass_UARCandidateImage_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_314_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARCandidateImage(); \
	friend struct ::Z_Construct_UClass_UARCandidateImage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARCandidateImage_NoRegister(); \
public: \
	DECLARE_CLASS2(UARCandidateImage, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARCandidateImage_NoRegister) \
	DECLARE_SERIALIZER(UARCandidateImage)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_314_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARCandidateImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARCandidateImage(UARCandidateImage&&) = delete; \
	UARCandidateImage(const UARCandidateImage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARCandidateImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateImage) \
	AUGMENTEDREALITY_API virtual ~UARCandidateImage();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_310_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_314_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_314_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_314_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_314_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARCandidateImage;

// ********** End Class UARCandidateImage **********************************************************

// ********** Begin Class UARCandidateObject *******************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_382_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBoundingBox); \
	DECLARE_FUNCTION(execGetBoundingBox); \
	DECLARE_FUNCTION(execSetFriendlyName); \
	DECLARE_FUNCTION(execGetFriendlyName); \
	DECLARE_FUNCTION(execSetCandidateObjectData); \
	DECLARE_FUNCTION(execGetCandidateObjectData);


struct Z_Construct_UClass_UARCandidateObject_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_382_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARCandidateObject(); \
	friend struct ::Z_Construct_UClass_UARCandidateObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARCandidateObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UARCandidateObject, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARCandidateObject_NoRegister) \
	DECLARE_SERIALIZER(UARCandidateObject)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_382_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARCandidateObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARCandidateObject(UARCandidateObject&&) = delete; \
	UARCandidateObject(const UARCandidateObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARCandidateObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateObject) \
	AUGMENTEDREALITY_API virtual ~UARCandidateObject();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_378_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_382_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_382_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_382_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_382_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARCandidateObject;

// ********** End Class UARCandidateObject *********************************************************

// ********** Begin ScriptStruct FARVideoFormat ****************************************************
struct Z_Construct_UScriptStruct_FARVideoFormat_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_490_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARVideoFormat_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARVideoFormat;
// ********** End ScriptStruct FARVideoFormat ******************************************************

// ********** Begin ScriptStruct FARSkeletonDefinition *********************************************
struct Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_538_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARSkeletonDefinition;
// ********** End ScriptStruct FARSkeletonDefinition ***********************************************

// ********** Begin ScriptStruct FARPose2D *********************************************************
struct Z_Construct_UScriptStruct_FARPose2D_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_558_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARPose2D_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARPose2D;
// ********** End ScriptStruct FARPose2D ***********************************************************

// ********** Begin ScriptStruct FARPose3D *********************************************************
struct Z_Construct_UScriptStruct_FARPose3D_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_578_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARPose3D_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARPose3D;
// ********** End ScriptStruct FARPose3D ***********************************************************

// ********** Begin ScriptStruct FARCameraIntrinsics ***********************************************
struct Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_602_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARCameraIntrinsics;
// ********** End ScriptStruct FARCameraIntrinsics *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h

// ********** Begin Enum EARTrackingState **********************************************************
#define FOREACH_ENUM_EARTRACKINGSTATE(op) \
	op(EARTrackingState::Unknown) \
	op(EARTrackingState::Tracking) \
	op(EARTrackingState::NotTracking) \
	op(EARTrackingState::StoppedTracking) 

enum class EARTrackingState : uint8;
template<> struct TIsUEnumClass<EARTrackingState> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARTrackingState>();
// ********** End Enum EARTrackingState ************************************************************

// ********** Begin Enum EARCaptureType ************************************************************
#define FOREACH_ENUM_EARCAPTURETYPE(op) \
	op(EARCaptureType::Camera) \
	op(EARCaptureType::QRCode) \
	op(EARCaptureType::SpatialMapping) \
	op(EARCaptureType::SceneUnderstanding) \
	op(EARCaptureType::HandMesh) 

enum class EARCaptureType : uint8;
template<> struct TIsUEnumClass<EARCaptureType> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARCaptureType>();
// ********** End Enum EARCaptureType **************************************************************

// ********** Begin Enum EARLineTraceChannels ******************************************************
#define FOREACH_ENUM_EARLINETRACECHANNELS(op) \
	op(EARLineTraceChannels::None) \
	op(EARLineTraceChannels::FeaturePoint) \
	op(EARLineTraceChannels::GroundPlane) \
	op(EARLineTraceChannels::PlaneUsingExtent) \
	op(EARLineTraceChannels::PlaneUsingBoundaryPolygon) 

enum class EARLineTraceChannels : uint8;
template<> struct TIsUEnumClass<EARLineTraceChannels> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARLineTraceChannels>();
// ********** End Enum EARLineTraceChannels ********************************************************

// ********** Begin Enum EARTrackingQuality ********************************************************
#define FOREACH_ENUM_EARTRACKINGQUALITY(op) \
	op(EARTrackingQuality::NotTracking) \
	op(EARTrackingQuality::OrientationOnly) \
	op(EARTrackingQuality::OrientationAndPosition) 

enum class EARTrackingQuality : uint8;
template<> struct TIsUEnumClass<EARTrackingQuality> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARTrackingQuality>();
// ********** End Enum EARTrackingQuality **********************************************************

// ********** Begin Enum EARTrackingQualityReason **************************************************
#define FOREACH_ENUM_EARTRACKINGQUALITYREASON(op) \
	op(EARTrackingQualityReason::None) \
	op(EARTrackingQualityReason::Initializing) \
	op(EARTrackingQualityReason::Relocalizing) \
	op(EARTrackingQualityReason::ExcessiveMotion) \
	op(EARTrackingQualityReason::InsufficientFeatures) \
	op(EARTrackingQualityReason::InsufficientLight) \
	op(EARTrackingQualityReason::BadState) 

enum class EARTrackingQualityReason : uint8;
template<> struct TIsUEnumClass<EARTrackingQualityReason> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARTrackingQualityReason>();
// ********** End Enum EARTrackingQualityReason ****************************************************

// ********** Begin Enum EARSessionStatus **********************************************************
#define FOREACH_ENUM_EARSESSIONSTATUS(op) \
	op(EARSessionStatus::NotStarted) \
	op(EARSessionStatus::Running) \
	op(EARSessionStatus::NotSupported) \
	op(EARSessionStatus::FatalError) \
	op(EARSessionStatus::PermissionNotGranted) \
	op(EARSessionStatus::UnsupportedConfiguration) \
	op(EARSessionStatus::Other) 

enum class EARSessionStatus : uint8;
template<> struct TIsUEnumClass<EARSessionStatus> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARSessionStatus>();
// ********** End Enum EARSessionStatus ************************************************************

// ********** Begin Enum EARWorldMappingState ******************************************************
#define FOREACH_ENUM_EARWORLDMAPPINGSTATE(op) \
	op(EARWorldMappingState::NotAvailable) \
	op(EARWorldMappingState::StillMappingNotRelocalizable) \
	op(EARWorldMappingState::StillMappingRelocalizable) \
	op(EARWorldMappingState::Mapped) 

enum class EARWorldMappingState : uint8;
template<> struct TIsUEnumClass<EARWorldMappingState> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARWorldMappingState>();
// ********** End Enum EARWorldMappingState ********************************************************

// ********** Begin Enum EARPlaneOrientation *******************************************************
#define FOREACH_ENUM_EARPLANEORIENTATION(op) \
	op(EARPlaneOrientation::Horizontal) \
	op(EARPlaneOrientation::Vertical) \
	op(EARPlaneOrientation::Diagonal) 

enum class EARPlaneOrientation : uint8;
template<> struct TIsUEnumClass<EARPlaneOrientation> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARPlaneOrientation>();
// ********** End Enum EARPlaneOrientation *********************************************************

// ********** Begin Enum EARObjectClassification ***************************************************
#define FOREACH_ENUM_EAROBJECTCLASSIFICATION(op) \
	op(EARObjectClassification::NotApplicable) \
	op(EARObjectClassification::Unknown) \
	op(EARObjectClassification::Wall) \
	op(EARObjectClassification::Ceiling) \
	op(EARObjectClassification::Floor) \
	op(EARObjectClassification::Table) \
	op(EARObjectClassification::Seat) \
	op(EARObjectClassification::Face) \
	op(EARObjectClassification::Image) \
	op(EARObjectClassification::World) \
	op(EARObjectClassification::SceneObject) \
	op(EARObjectClassification::HandMesh) \
	op(EARObjectClassification::Door) \
	op(EARObjectClassification::Window) 

enum class EARObjectClassification : uint8;
template<> struct TIsUEnumClass<EARObjectClassification> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARObjectClassification>();
// ********** End Enum EARObjectClassification *****************************************************

// ********** Begin Enum EARSpatialMeshUsageFlags **************************************************
#define FOREACH_ENUM_EARSPATIALMESHUSAGEFLAGS(op) \
	op(EARSpatialMeshUsageFlags::NotApplicable) \
	op(EARSpatialMeshUsageFlags::Visible) \
	op(EARSpatialMeshUsageFlags::Collision) 

enum class EARSpatialMeshUsageFlags : uint8;
template<> struct TIsUEnumClass<EARSpatialMeshUsageFlags> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARSpatialMeshUsageFlags>();
// ********** End Enum EARSpatialMeshUsageFlags ****************************************************

// ********** Begin Enum EARJointTransformSpace ****************************************************
#define FOREACH_ENUM_EARJOINTTRANSFORMSPACE(op) \
	op(EARJointTransformSpace::Model) \
	op(EARJointTransformSpace::ParentJoint) 

enum class EARJointTransformSpace : uint8;
template<> struct TIsUEnumClass<EARJointTransformSpace> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARJointTransformSpace>();
// ********** End Enum EARJointTransformSpace ******************************************************

// ********** Begin Enum EARAltitudeSource *********************************************************
#define FOREACH_ENUM_EARALTITUDESOURCE(op) \
	op(EARAltitudeSource::Precise) \
	op(EARAltitudeSource::Coarse) \
	op(EARAltitudeSource::UserDefined) \
	op(EARAltitudeSource::Unknown) 

enum class EARAltitudeSource : uint8;
template<> struct TIsUEnumClass<EARAltitudeSource> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARAltitudeSource>();
// ********** End Enum EARAltitudeSource ***********************************************************

// ********** Begin Enum EARCandidateImageOrientation **********************************************
#define FOREACH_ENUM_EARCANDIDATEIMAGEORIENTATION(op) \
	op(EARCandidateImageOrientation::Landscape) \
	op(EARCandidateImageOrientation::Portrait) 

enum class EARCandidateImageOrientation : uint8;
template<> struct TIsUEnumClass<EARCandidateImageOrientation> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARCandidateImageOrientation>();
// ********** End Enum EARCandidateImageOrientation ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
