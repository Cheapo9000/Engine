// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARTrackable.h"

#ifdef AUGMENTEDREALITY_ARTrackable_generated_h
#error "ARTrackable.generated.h already included, missing '#pragma once' in ARTrackable.h"
#endif
#define AUGMENTEDREALITY_ARTrackable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARCandidateImage;
class UARCandidateObject;
class UAREnvironmentCaptureProbeTexture;
class UARPlaneGeometry;
class UMRMeshComponent;
enum class EARAltitudeSource : uint8;
enum class EAREye : uint8;
enum class EARFaceBlendShape : uint8;
enum class EARObjectClassification : uint8;
enum class EARPlaneOrientation : uint8;
enum class EARSpatialMeshUsageFlags : uint8;
enum class EARTrackingState : uint8;
struct FARPose3D;

// ********** Begin Class UARTrackedGeometry *******************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasSpatialMeshUsageFlag); \
	DECLARE_FUNCTION(execGetObjectClassification); \
	DECLARE_FUNCTION(execGetUnderlyingMesh); \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp); \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetDebugName); \
	DECLARE_FUNCTION(execIsTracked); \
	DECLARE_FUNCTION(execGetTrackingState); \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform); \
	DECLARE_FUNCTION(execGetLocalToWorldTransform);


struct Z_Construct_UClass_UARTrackedGeometry_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedGeometry(); \
	friend struct ::Z_Construct_UClass_UARTrackedGeometry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTrackedGeometry_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTrackedGeometry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTrackedGeometry_NoRegister) \
	DECLARE_SERIALIZER(UARTrackedGeometry)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTrackedGeometry(UARTrackedGeometry&&) = delete; \
	UARTrackedGeometry(const UARTrackedGeometry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARTrackedGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedGeometry) \
	AUGMENTEDREALITY_API virtual ~UARTrackedGeometry();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTrackedGeometry;

// ********** End Class UARTrackedGeometry *********************************************************

// ********** Begin Class UARPlaneGeometry *********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetSubsumedBy); \
	DECLARE_FUNCTION(execGetBoundaryPolygonInLocalSpace); \
	DECLARE_FUNCTION(execGetExtent); \
	DECLARE_FUNCTION(execGetCenter);


struct Z_Construct_UClass_UARPlaneGeometry_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPlaneGeometry(); \
	friend struct ::Z_Construct_UClass_UARPlaneGeometry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARPlaneGeometry_NoRegister(); \
public: \
	DECLARE_CLASS2(UARPlaneGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARPlaneGeometry_NoRegister) \
	DECLARE_SERIALIZER(UARPlaneGeometry)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARPlaneGeometry(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARPlaneGeometry(UARPlaneGeometry&&) = delete; \
	UARPlaneGeometry(const UARPlaneGeometry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARPlaneGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPlaneGeometry) \
	AUGMENTEDREALITY_API virtual ~UARPlaneGeometry();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_131_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARPlaneGeometry;

// ********** End Class UARPlaneGeometry ***********************************************************

// ********** Begin Class UARTrackedPoint **********************************************************
struct Z_Construct_UClass_UARTrackedPoint_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedPoint(); \
	friend struct ::Z_Construct_UClass_UARTrackedPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTrackedPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTrackedPoint, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTrackedPoint_NoRegister) \
	DECLARE_SERIALIZER(UARTrackedPoint)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARTrackedPoint(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTrackedPoint(UARTrackedPoint&&) = delete; \
	UARTrackedPoint(const UARTrackedPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARTrackedPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedPoint) \
	AUGMENTEDREALITY_API virtual ~UARTrackedPoint();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_181_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTrackedPoint;

// ********** End Class UARTrackedPoint ************************************************************

// ********** Begin Class UARTrackedImage **********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_197_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEstimateSize); \
	DECLARE_FUNCTION(execGetDetectedImage);


struct Z_Construct_UClass_UARTrackedImage_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedImage_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_197_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedImage(); \
	friend struct ::Z_Construct_UClass_UARTrackedImage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTrackedImage_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTrackedImage, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTrackedImage_NoRegister) \
	DECLARE_SERIALIZER(UARTrackedImage)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_197_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARTrackedImage(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTrackedImage(UARTrackedImage&&) = delete; \
	UARTrackedImage(const UARTrackedImage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARTrackedImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedImage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedImage) \
	AUGMENTEDREALITY_API virtual ~UARTrackedImage();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_194_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_197_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_197_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_197_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_197_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTrackedImage;

// ********** End Class UARTrackedImage ************************************************************

// ********** Begin Class UARTrackedQRCode *********************************************************
struct Z_Construct_UClass_UARTrackedQRCode_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedQRCode_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_236_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedQRCode(); \
	friend struct ::Z_Construct_UClass_UARTrackedQRCode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTrackedQRCode_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTrackedQRCode, UARTrackedImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTrackedQRCode_NoRegister) \
	DECLARE_SERIALIZER(UARTrackedQRCode)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_236_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARTrackedQRCode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTrackedQRCode(UARTrackedQRCode&&) = delete; \
	UARTrackedQRCode(const UARTrackedQRCode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARTrackedQRCode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedQRCode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedQRCode) \
	AUGMENTEDREALITY_API virtual ~UARTrackedQRCode();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_232_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_236_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_236_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_236_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTrackedQRCode;

// ********** End Class UARTrackedQRCode ***********************************************************

// ********** Begin Class UARFaceGeometry **********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_349_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWorldSpaceEyeTransform); \
	DECLARE_FUNCTION(execGetLocalSpaceEyeTransform); \
	DECLARE_FUNCTION(execGetBlendShapes); \
	DECLARE_FUNCTION(execGetBlendShapeValue);


struct Z_Construct_UClass_UARFaceGeometry_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceGeometry_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_349_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARFaceGeometry(); \
	friend struct ::Z_Construct_UClass_UARFaceGeometry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARFaceGeometry_NoRegister(); \
public: \
	DECLARE_CLASS2(UARFaceGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARFaceGeometry_NoRegister) \
	DECLARE_SERIALIZER(UARFaceGeometry)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_349_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARFaceGeometry(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARFaceGeometry(UARFaceGeometry&&) = delete; \
	UARFaceGeometry(const UARFaceGeometry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARFaceGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARFaceGeometry) \
	AUGMENTEDREALITY_API virtual ~UARFaceGeometry();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_346_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_349_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_349_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_349_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_349_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARFaceGeometry;

// ********** End Class UARFaceGeometry ************************************************************

// ********** Begin Class UAREnvironmentCaptureProbe ***********************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_410_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnvironmentCaptureTexture); \
	DECLARE_FUNCTION(execGetExtent);


struct Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_410_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAREnvironmentCaptureProbe(); \
	friend struct ::Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister(); \
public: \
	DECLARE_CLASS2(UAREnvironmentCaptureProbe, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister) \
	DECLARE_SERIALIZER(UAREnvironmentCaptureProbe)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_410_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAREnvironmentCaptureProbe(UAREnvironmentCaptureProbe&&) = delete; \
	UAREnvironmentCaptureProbe(const UAREnvironmentCaptureProbe&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UAREnvironmentCaptureProbe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentCaptureProbe); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAREnvironmentCaptureProbe) \
	AUGMENTEDREALITY_API virtual ~UAREnvironmentCaptureProbe();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_406_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_410_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_410_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_410_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_410_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAREnvironmentCaptureProbe;

// ********** End Class UAREnvironmentCaptureProbe *************************************************

// ********** Begin Class UARTrackedObject *********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_442_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDetectedObject);


struct Z_Construct_UClass_UARTrackedObject_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedObject_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_442_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedObject(); \
	friend struct ::Z_Construct_UClass_UARTrackedObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTrackedObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTrackedObject, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTrackedObject_NoRegister) \
	DECLARE_SERIALIZER(UARTrackedObject)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_442_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARTrackedObject(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTrackedObject(UARTrackedObject&&) = delete; \
	UARTrackedObject(const UARTrackedObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARTrackedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedObject) \
	AUGMENTEDREALITY_API virtual ~UARTrackedObject();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_439_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_442_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_442_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_442_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_442_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTrackedObject;

// ********** End Class UARTrackedObject ***********************************************************

// ********** Begin Class UARTrackedPose ***********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_464_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTrackedPoseData);


struct Z_Construct_UClass_UARTrackedPose_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPose_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_464_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedPose(); \
	friend struct ::Z_Construct_UClass_UARTrackedPose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTrackedPose_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTrackedPose, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTrackedPose_NoRegister) \
	DECLARE_SERIALIZER(UARTrackedPose)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_464_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARTrackedPose(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTrackedPose(UARTrackedPose&&) = delete; \
	UARTrackedPose(const UARTrackedPose&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARTrackedPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPose); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedPose) \
	AUGMENTEDREALITY_API virtual ~UARTrackedPose();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_461_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_464_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_464_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_464_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_464_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTrackedPose;

// ********** End Class UARTrackedPose *************************************************************

// ********** Begin Class UARMeshGeometry **********************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_485_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetObjectClassificationAtLocation);


struct Z_Construct_UClass_UARMeshGeometry_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARMeshGeometry_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_485_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARMeshGeometry(); \
	friend struct ::Z_Construct_UClass_UARMeshGeometry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARMeshGeometry_NoRegister(); \
public: \
	DECLARE_CLASS2(UARMeshGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARMeshGeometry_NoRegister) \
	DECLARE_SERIALIZER(UARMeshGeometry)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_485_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARMeshGeometry(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARMeshGeometry(UARMeshGeometry&&) = delete; \
	UARMeshGeometry(const UARMeshGeometry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARMeshGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARMeshGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARMeshGeometry) \
	AUGMENTEDREALITY_API virtual ~UARMeshGeometry();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_482_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_485_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_485_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_485_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_485_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARMeshGeometry;

// ********** End Class UARMeshGeometry ************************************************************

// ********** Begin Class UARGeoAnchor *************************************************************
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_507_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAltitudeSource); \
	DECLARE_FUNCTION(execGetAltitudeMeters); \
	DECLARE_FUNCTION(execGetLatitude); \
	DECLARE_FUNCTION(execGetLongitude);


struct Z_Construct_UClass_UARGeoAnchor_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoAnchor_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_507_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGeoAnchor(); \
	friend struct ::Z_Construct_UClass_UARGeoAnchor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARGeoAnchor_NoRegister(); \
public: \
	DECLARE_CLASS2(UARGeoAnchor, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARGeoAnchor_NoRegister) \
	DECLARE_SERIALIZER(UARGeoAnchor)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_507_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARGeoAnchor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARGeoAnchor(UARGeoAnchor&&) = delete; \
	UARGeoAnchor(const UARGeoAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARGeoAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoAnchor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARGeoAnchor) \
	AUGMENTEDREALITY_API virtual ~UARGeoAnchor();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_504_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_507_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_507_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_507_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_507_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARGeoAnchor;

// ********** End Class UARGeoAnchor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h

// ********** Begin Enum EARFaceTrackingDirection **************************************************
#define FOREACH_ENUM_EARFACETRACKINGDIRECTION(op) \
	op(EARFaceTrackingDirection::FaceRelative) \
	op(EARFaceTrackingDirection::FaceMirrored) 

enum class EARFaceTrackingDirection : uint8;
template<> struct TIsUEnumClass<EARFaceTrackingDirection> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARFaceTrackingDirection>();
// ********** End Enum EARFaceTrackingDirection ****************************************************

// ********** Begin Enum EARFaceBlendShape *********************************************************
#define FOREACH_ENUM_EARFACEBLENDSHAPE(op) \
	op(EARFaceBlendShape::EyeBlinkLeft) \
	op(EARFaceBlendShape::EyeLookDownLeft) \
	op(EARFaceBlendShape::EyeLookInLeft) \
	op(EARFaceBlendShape::EyeLookOutLeft) \
	op(EARFaceBlendShape::EyeLookUpLeft) \
	op(EARFaceBlendShape::EyeSquintLeft) \
	op(EARFaceBlendShape::EyeWideLeft) \
	op(EARFaceBlendShape::EyeBlinkRight) \
	op(EARFaceBlendShape::EyeLookDownRight) \
	op(EARFaceBlendShape::EyeLookInRight) \
	op(EARFaceBlendShape::EyeLookOutRight) \
	op(EARFaceBlendShape::EyeLookUpRight) \
	op(EARFaceBlendShape::EyeSquintRight) \
	op(EARFaceBlendShape::EyeWideRight) \
	op(EARFaceBlendShape::JawForward) \
	op(EARFaceBlendShape::JawLeft) \
	op(EARFaceBlendShape::JawRight) \
	op(EARFaceBlendShape::JawOpen) \
	op(EARFaceBlendShape::MouthClose) \
	op(EARFaceBlendShape::MouthFunnel) \
	op(EARFaceBlendShape::MouthPucker) \
	op(EARFaceBlendShape::MouthLeft) \
	op(EARFaceBlendShape::MouthRight) \
	op(EARFaceBlendShape::MouthSmileLeft) \
	op(EARFaceBlendShape::MouthSmileRight) \
	op(EARFaceBlendShape::MouthFrownLeft) \
	op(EARFaceBlendShape::MouthFrownRight) \
	op(EARFaceBlendShape::MouthDimpleLeft) \
	op(EARFaceBlendShape::MouthDimpleRight) \
	op(EARFaceBlendShape::MouthStretchLeft) \
	op(EARFaceBlendShape::MouthStretchRight) \
	op(EARFaceBlendShape::MouthRollLower) \
	op(EARFaceBlendShape::MouthRollUpper) \
	op(EARFaceBlendShape::MouthShrugLower) \
	op(EARFaceBlendShape::MouthShrugUpper) \
	op(EARFaceBlendShape::MouthPressLeft) \
	op(EARFaceBlendShape::MouthPressRight) \
	op(EARFaceBlendShape::MouthLowerDownLeft) \
	op(EARFaceBlendShape::MouthLowerDownRight) \
	op(EARFaceBlendShape::MouthUpperUpLeft) \
	op(EARFaceBlendShape::MouthUpperUpRight) \
	op(EARFaceBlendShape::BrowDownLeft) \
	op(EARFaceBlendShape::BrowDownRight) \
	op(EARFaceBlendShape::BrowInnerUp) \
	op(EARFaceBlendShape::BrowOuterUpLeft) \
	op(EARFaceBlendShape::BrowOuterUpRight) \
	op(EARFaceBlendShape::CheekPuff) \
	op(EARFaceBlendShape::CheekSquintLeft) \
	op(EARFaceBlendShape::CheekSquintRight) \
	op(EARFaceBlendShape::NoseSneerLeft) \
	op(EARFaceBlendShape::NoseSneerRight) \
	op(EARFaceBlendShape::TongueOut) \
	op(EARFaceBlendShape::HeadYaw) \
	op(EARFaceBlendShape::HeadPitch) \
	op(EARFaceBlendShape::HeadRoll) \
	op(EARFaceBlendShape::LeftEyeYaw) \
	op(EARFaceBlendShape::LeftEyePitch) \
	op(EARFaceBlendShape::LeftEyeRoll) \
	op(EARFaceBlendShape::RightEyeYaw) \
	op(EARFaceBlendShape::RightEyePitch) \
	op(EARFaceBlendShape::RightEyeRoll) 

enum class EARFaceBlendShape : uint8;
template<> struct TIsUEnumClass<EARFaceBlendShape> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARFaceBlendShape>();
// ********** End Enum EARFaceBlendShape ***********************************************************

// ********** Begin Enum EAREye ********************************************************************
#define FOREACH_ENUM_EAREYE(op) \
	op(EAREye::LeftEye) \
	op(EAREye::RightEye) 

enum class EAREye : uint8;
template<> struct TIsUEnumClass<EAREye> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAREye>();
// ********** End Enum EAREye **********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
