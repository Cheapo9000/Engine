// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoogleARCoreSessionConfig.h"

#ifdef GOOGLEARCOREBASE_GoogleARCoreSessionConfig_generated_h
#error "GoogleARCoreSessionConfig.generated.h already included, missing '#pragma once' in GoogleARCoreSessionConfig.h"
#endif
#define GOOGLEARCOREBASE_GoogleARCoreSessionConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGoogleARCoreAugmentedImageDatabase;

// ********** Begin Class UGoogleARCoreSessionConfig ***********************************************
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAugmentedImageDatabase); \
	DECLARE_FUNCTION(execGetAugmentedImageDatabase);


struct Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics;
GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreSessionConfig_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCoreSessionConfig(); \
	friend struct ::Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GOOGLEARCOREBASE_API UClass* ::Z_Construct_UClass_UGoogleARCoreSessionConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UGoogleARCoreSessionConfig, UARSessionConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), Z_Construct_UClass_UGoogleARCoreSessionConfig_NoRegister) \
	DECLARE_SERIALIZER(UGoogleARCoreSessionConfig)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreSessionConfig(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGoogleARCoreSessionConfig(UGoogleARCoreSessionConfig&&) = delete; \
	UGoogleARCoreSessionConfig(const UGoogleARCoreSessionConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreSessionConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreSessionConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGoogleARCoreSessionConfig) \
	NO_API virtual ~UGoogleARCoreSessionConfig();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGoogleARCoreSessionConfig;

// ********** End Class UGoogleARCoreSessionConfig *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
