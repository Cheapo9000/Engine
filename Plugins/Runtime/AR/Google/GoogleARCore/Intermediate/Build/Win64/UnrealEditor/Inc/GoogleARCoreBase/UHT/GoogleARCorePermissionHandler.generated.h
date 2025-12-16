// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoogleARCorePermissionHandler.h"

#ifdef GOOGLEARCOREBASE_GoogleARCorePermissionHandler_generated_h
#error "GoogleARCorePermissionHandler.generated.h already included, missing '#pragma once' in GoogleARCorePermissionHandler.h"
#endif
#define GOOGLEARCOREBASE_GoogleARCorePermissionHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UARCoreAndroidPermissionHandler ******************************************
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnPermissionsGranted);


struct Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics;
GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UARCoreAndroidPermissionHandler_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUARCoreAndroidPermissionHandler(); \
	friend struct ::Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GOOGLEARCOREBASE_API UClass* ::Z_Construct_UClass_UARCoreAndroidPermissionHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UARCoreAndroidPermissionHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), Z_Construct_UClass_UARCoreAndroidPermissionHandler_NoRegister) \
	DECLARE_SERIALIZER(UARCoreAndroidPermissionHandler)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCoreAndroidPermissionHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCoreAndroidPermissionHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCoreAndroidPermissionHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCoreAndroidPermissionHandler); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARCoreAndroidPermissionHandler(UARCoreAndroidPermissionHandler&&) = delete; \
	UARCoreAndroidPermissionHandler(const UARCoreAndroidPermissionHandler&) = delete; \
	NO_API virtual ~UARCoreAndroidPermissionHandler();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARCoreAndroidPermissionHandler;

// ********** End Class UARCoreAndroidPermissionHandler ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
