// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoogleARCoreServicesFunctionLibrary.h"

#ifdef GOOGLEARCORESERVICES_GoogleARCoreServicesFunctionLibrary_generated_h
#error "GoogleARCoreServicesFunctionLibrary.generated.h already included, missing '#pragma once' in GoogleARCoreServicesFunctionLibrary.h"
#endif
#define GOOGLEARCORESERVICES_GoogleARCoreServicesFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARPin;
class UCloudARPin;
class UObject;
enum class EARPinCloudTaskResult : uint8;
struct FGoogleARCoreServicesConfig;
struct FLatentActionInfo;

// ********** Begin Class UGoogleARCoreServicesFunctionLibrary *************************************
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllCloudARPin); \
	DECLARE_FUNCTION(execRemoveCloudARPin); \
	DECLARE_FUNCTION(execCreateAndResolveCloudARPin); \
	DECLARE_FUNCTION(execCreateAndHostCloudARPin); \
	DECLARE_FUNCTION(execCreateAndResolveCloudARPinLatentAction); \
	DECLARE_FUNCTION(execCreateAndHostCloudARPinLatentAction); \
	DECLARE_FUNCTION(execConfigGoogleARCoreServices);


struct Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics;
GOOGLEARCORESERVICES_API UClass* Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCoreServicesFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GOOGLEARCORESERVICES_API UClass* ::Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGoogleARCoreServicesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreServices"), Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGoogleARCoreServicesFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreServicesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGoogleARCoreServicesFunctionLibrary(UGoogleARCoreServicesFunctionLibrary&&) = delete; \
	UGoogleARCoreServicesFunctionLibrary(const UGoogleARCoreServicesFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreServicesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreServicesFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCoreServicesFunctionLibrary) \
	NO_API virtual ~UGoogleARCoreServicesFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGoogleARCoreServicesFunctionLibrary;

// ********** End Class UGoogleARCoreServicesFunctionLibrary ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
