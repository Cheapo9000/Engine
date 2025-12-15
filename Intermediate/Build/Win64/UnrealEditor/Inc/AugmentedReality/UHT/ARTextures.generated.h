// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARTextures.h"

#ifdef AUGMENTEDREALITY_ARTextures_generated_h
#error "ARTextures.generated.h already included, missing '#pragma once' in ARTextures.h"
#endif
#define AUGMENTEDREALITY_ARTextures_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UARTexture ***************************************************************
struct Z_Construct_UClass_UARTexture_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTexture_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUARTexture(); \
	friend struct ::Z_Construct_UClass_UARTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTexture, UTexture, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTexture_NoRegister) \
	DECLARE_SERIALIZER(UARTexture)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTexture(UARTexture&&) = delete; \
	UARTexture(const UARTexture&) = delete; \
	AUGMENTEDREALITY_API virtual ~UARTexture();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_29_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_32_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTexture;

// ********** End Class UARTexture *****************************************************************

// ********** Begin Class UARTextureCameraImage ****************************************************
struct Z_Construct_UClass_UARTextureCameraImage_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraImage_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUARTextureCameraImage(); \
	friend struct ::Z_Construct_UClass_UARTextureCameraImage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTextureCameraImage_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTextureCameraImage, UARTexture, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTextureCameraImage_NoRegister) \
	DECLARE_SERIALIZER(UARTextureCameraImage)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARTextureCameraImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTextureCameraImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARTextureCameraImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTextureCameraImage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTextureCameraImage(UARTextureCameraImage&&) = delete; \
	UARTextureCameraImage(const UARTextureCameraImage&) = delete; \
	AUGMENTEDREALITY_API virtual ~UARTextureCameraImage();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_76_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_79_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTextureCameraImage;

// ********** End Class UARTextureCameraImage ******************************************************

// ********** Begin Class UARTextureCameraDepth ****************************************************
struct Z_Construct_UClass_UARTextureCameraDepth_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraDepth_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_108_INCLASS \
private: \
	static void StaticRegisterNativesUARTextureCameraDepth(); \
	friend struct ::Z_Construct_UClass_UARTextureCameraDepth_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTextureCameraDepth_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTextureCameraDepth, UARTexture, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTextureCameraDepth_NoRegister) \
	DECLARE_SERIALIZER(UARTextureCameraDepth)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UARTextureCameraDepth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTextureCameraDepth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UARTextureCameraDepth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTextureCameraDepth); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTextureCameraDepth(UARTextureCameraDepth&&) = delete; \
	UARTextureCameraDepth(const UARTextureCameraDepth&) = delete; \
	AUGMENTEDREALITY_API virtual ~UARTextureCameraDepth();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_105_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_108_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTextureCameraDepth;

// ********** End Class UARTextureCameraDepth ******************************************************

// ********** Begin Class UAREnvironmentCaptureProbeTexture ****************************************
struct Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUAREnvironmentCaptureProbeTexture(); \
	friend struct ::Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UAREnvironmentCaptureProbeTexture, UTextureCube, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister) \
	DECLARE_SERIALIZER(UAREnvironmentCaptureProbeTexture)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUGMENTEDREALITY_API UAREnvironmentCaptureProbeTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAREnvironmentCaptureProbeTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUGMENTEDREALITY_API, UAREnvironmentCaptureProbeTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentCaptureProbeTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAREnvironmentCaptureProbeTexture(UAREnvironmentCaptureProbeTexture&&) = delete; \
	UAREnvironmentCaptureProbeTexture(const UAREnvironmentCaptureProbeTexture&) = delete; \
	AUGMENTEDREALITY_API virtual ~UAREnvironmentCaptureProbeTexture();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_127_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_130_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAREnvironmentCaptureProbeTexture;

// ********** End Class UAREnvironmentCaptureProbeTexture ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h

// ********** Begin Enum EARTextureType ************************************************************
#define FOREACH_ENUM_EARTEXTURETYPE(op) \
	op(EARTextureType::Unknown) \
	op(EARTextureType::CameraImage) \
	op(EARTextureType::CameraDepth) \
	op(EARTextureType::EnvironmentCapture) \
	op(EARTextureType::PersonSegmentationImage) \
	op(EARTextureType::PersonSegmentationDepth) \
	op(EARTextureType::SceneDepthMap) \
	op(EARTextureType::SceneDepthConfidenceMap) 

enum class EARTextureType : uint8;
template<> struct TIsUEnumClass<EARTextureType> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARTextureType>();
// ********** End Enum EARTextureType **************************************************************

// ********** Begin Enum EARDepthQuality ***********************************************************
#define FOREACH_ENUM_EARDEPTHQUALITY(op) \
	op(EARDepthQuality::Unkown) \
	op(EARDepthQuality::Low) \
	op(EARDepthQuality::High) 

enum class EARDepthQuality : uint8;
template<> struct TIsUEnumClass<EARDepthQuality> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARDepthQuality>();
// ********** End Enum EARDepthQuality *************************************************************

// ********** Begin Enum EARDepthAccuracy **********************************************************
#define FOREACH_ENUM_EARDEPTHACCURACY(op) \
	op(EARDepthAccuracy::Unkown) \
	op(EARDepthAccuracy::Approximate) \
	op(EARDepthAccuracy::Accurate) 

enum class EARDepthAccuracy : uint8;
template<> struct TIsUEnumClass<EARDepthAccuracy> { enum { Value = true }; };
template<> AUGMENTEDREALITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EARDepthAccuracy>();
// ********** End Enum EARDepthAccuracy ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
