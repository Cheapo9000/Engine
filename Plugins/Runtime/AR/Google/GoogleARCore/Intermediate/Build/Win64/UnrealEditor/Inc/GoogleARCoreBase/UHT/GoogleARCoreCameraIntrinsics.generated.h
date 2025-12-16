// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoogleARCoreCameraIntrinsics.h"

#ifdef GOOGLEARCOREBASE_GoogleARCoreCameraIntrinsics_generated_h
#error "GoogleARCoreCameraIntrinsics.generated.h already included, missing '#pragma once' in GoogleARCoreCameraIntrinsics.h"
#endif
#define GOOGLEARCOREBASE_GoogleARCoreCameraIntrinsics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGoogleARCoreCameraIntrinsics ********************************************
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetImageDimensions); \
	DECLARE_FUNCTION(execGetPrincipalPoint); \
	DECLARE_FUNCTION(execGetFocalLength);


struct Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics;
GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCoreCameraIntrinsics(); \
	friend struct ::Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GOOGLEARCOREBASE_API UClass* ::Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_NoRegister(); \
public: \
	DECLARE_CLASS2(UGoogleARCoreCameraIntrinsics, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_NoRegister) \
	DECLARE_SERIALIZER(UGoogleARCoreCameraIntrinsics)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreCameraIntrinsics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGoogleARCoreCameraIntrinsics(UGoogleARCoreCameraIntrinsics&&) = delete; \
	UGoogleARCoreCameraIntrinsics(const UGoogleARCoreCameraIntrinsics&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreCameraIntrinsics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreCameraIntrinsics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCoreCameraIntrinsics) \
	NO_API virtual ~UGoogleARCoreCameraIntrinsics();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGoogleARCoreCameraIntrinsics;

// ********** End Class UGoogleARCoreCameraIntrinsics **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
