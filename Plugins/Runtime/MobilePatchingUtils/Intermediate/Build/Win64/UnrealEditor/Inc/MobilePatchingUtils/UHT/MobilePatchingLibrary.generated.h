// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MobilePatchingLibrary.h"

#ifdef MOBILEPATCHINGUTILS_MobilePatchingLibrary_generated_h
#error "MobilePatchingLibrary.generated.h already included, missing '#pragma once' in MobilePatchingLibrary.h"
#endif
#define MOBILEPATCHINGUTILS_MobilePatchingLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMobileInstalledContent;
class UMobilePendingContent;

// ********** Begin Delegate FOnContentInstallSucceeded ********************************************
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_12_DELEGATE \
MOBILEPATCHINGUTILS_API void FOnContentInstallSucceeded_DelegateWrapper(const FScriptDelegate& OnContentInstallSucceeded);


// ********** End Delegate FOnContentInstallSucceeded **********************************************

// ********** Begin Delegate FOnContentInstallFailed ***********************************************
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_13_DELEGATE \
MOBILEPATCHINGUTILS_API void FOnContentInstallFailed_DelegateWrapper(const FScriptDelegate& OnContentInstallFailed, const FText& ErrorText, int32 ErrorCode);


// ********** End Delegate FOnContentInstallFailed *************************************************

// ********** Begin Class UMobileInstalledContent **************************************************
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMount); \
	DECLARE_FUNCTION(execGetInstalledContentSize); \
	DECLARE_FUNCTION(execGetDiskFreeSpace);


struct Z_Construct_UClass_UMobileInstalledContent_Statics;
MOBILEPATCHINGUTILS_API UClass* Z_Construct_UClass_UMobileInstalledContent_NoRegister();

#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobileInstalledContent(); \
	friend struct ::Z_Construct_UClass_UMobileInstalledContent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOBILEPATCHINGUTILS_API UClass* ::Z_Construct_UClass_UMobileInstalledContent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMobileInstalledContent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), Z_Construct_UClass_UMobileInstalledContent_NoRegister) \
	DECLARE_SERIALIZER(UMobileInstalledContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOBILEPATCHINGUTILS_API UMobileInstalledContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMobileInstalledContent(UMobileInstalledContent&&) = delete; \
	UMobileInstalledContent(const UMobileInstalledContent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOBILEPATCHINGUTILS_API, UMobileInstalledContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobileInstalledContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobileInstalledContent) \
	MOBILEPATCHINGUTILS_API virtual ~UMobileInstalledContent();


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMobileInstalledContent;

// ********** End Class UMobileInstalledContent ****************************************************

// ********** Begin Class UMobilePendingContent ****************************************************
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartInstall); \
	DECLARE_FUNCTION(execGetInstallProgress); \
	DECLARE_FUNCTION(execGetDownloadStatusText); \
	DECLARE_FUNCTION(execGetDownloadSpeed); \
	DECLARE_FUNCTION(execGetTotalDownloadedSize); \
	DECLARE_FUNCTION(execGetRequiredDiskSpace); \
	DECLARE_FUNCTION(execGetDownloadSize);


struct Z_Construct_UClass_UMobilePendingContent_Statics;
MOBILEPATCHINGUTILS_API UClass* Z_Construct_UClass_UMobilePendingContent_NoRegister();

#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobilePendingContent(); \
	friend struct ::Z_Construct_UClass_UMobilePendingContent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOBILEPATCHINGUTILS_API UClass* ::Z_Construct_UClass_UMobilePendingContent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMobilePendingContent, UMobileInstalledContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), Z_Construct_UClass_UMobilePendingContent_NoRegister) \
	DECLARE_SERIALIZER(UMobilePendingContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOBILEPATCHINGUTILS_API UMobilePendingContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMobilePendingContent(UMobilePendingContent&&) = delete; \
	UMobilePendingContent(const UMobilePendingContent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOBILEPATCHINGUTILS_API, UMobilePendingContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobilePendingContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobilePendingContent) \
	MOBILEPATCHINGUTILS_API virtual ~UMobilePendingContent();


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_44_PROLOG
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMobilePendingContent;

// ********** End Class UMobilePendingContent ******************************************************

// ********** Begin Delegate FOnRequestContentSucceeded ********************************************
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_110_DELEGATE \
MOBILEPATCHINGUTILS_API void FOnRequestContentSucceeded_DelegateWrapper(const FScriptDelegate& OnRequestContentSucceeded, UMobilePendingContent* MobilePendingContent);


// ********** End Delegate FOnRequestContentSucceeded **********************************************

// ********** Begin Delegate FOnRequestContentFailed ***********************************************
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_111_DELEGATE \
MOBILEPATCHINGUTILS_API void FOnRequestContentFailed_DelegateWrapper(const FScriptDelegate& OnRequestContentFailed, const FText& ErrorText, int32 ErrorCode);


// ********** End Delegate FOnRequestContentFailed *************************************************

// ********** Begin Class UMobilePatchingLibrary ***************************************************
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSupportedPlatformNames); \
	DECLARE_FUNCTION(execGetActiveDeviceProfileName); \
	DECLARE_FUNCTION(execHasActiveWiFiConnection); \
	DECLARE_FUNCTION(execRequestContent); \
	DECLARE_FUNCTION(execGetInstalledContent);


struct Z_Construct_UClass_UMobilePatchingLibrary_Statics;
MOBILEPATCHINGUTILS_API UClass* Z_Construct_UClass_UMobilePatchingLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobilePatchingLibrary(); \
	friend struct ::Z_Construct_UClass_UMobilePatchingLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOBILEPATCHINGUTILS_API UClass* ::Z_Construct_UClass_UMobilePatchingLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMobilePatchingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), Z_Construct_UClass_UMobilePatchingLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMobilePatchingLibrary)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOBILEPATCHINGUTILS_API UMobilePatchingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMobilePatchingLibrary(UMobilePatchingLibrary&&) = delete; \
	UMobilePatchingLibrary(const UMobilePatchingLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOBILEPATCHINGUTILS_API, UMobilePatchingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobilePatchingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobilePatchingLibrary) \
	MOBILEPATCHINGUTILS_API virtual ~UMobilePatchingLibrary();


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_113_PROLOG
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_116_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMobilePatchingLibrary;

// ********** End Class UMobilePatchingLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
