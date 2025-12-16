// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AppleImageUtilsBlueprintProxy.h"

#ifdef APPLEIMAGEUTILS_AppleImageUtilsBlueprintProxy_generated_h
#error "AppleImageUtilsBlueprintProxy.generated.h already included, missing '#pragma once' in AppleImageUtilsBlueprintProxy.h"
#endif
#define APPLEIMAGEUTILS_AppleImageUtilsBlueprintProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy;
class UTexture;
enum class ETextureRotationDirection : uint8;
struct FAppleImageUtilsImageConversionResult;

// ********** Begin ScriptStruct FAppleImageUtilsImageConversionResult *****************************
struct Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics;
#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics; \
	APPLEIMAGEUTILS_API static class UScriptStruct* StaticStruct();


struct FAppleImageUtilsImageConversionResult;
// ********** End ScriptStruct FAppleImageUtilsImageConversionResult *******************************

// ********** Begin Delegate FAppleImageConversionDelegate *****************************************
#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_27_DELEGATE \
APPLEIMAGEUTILS_API void FAppleImageConversionDelegate_DelegateWrapper(const FMulticastScriptDelegate& AppleImageConversionDelegate, FAppleImageUtilsImageConversionResult const& ConversionResult);


// ********** End Delegate FAppleImageConversionDelegate *******************************************

// ********** Begin Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy ******************************
#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToPNG); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToTIFF); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToHEIF); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToJPEG);


struct Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics;
APPLEIMAGEUTILS_API UClass* Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister();

#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy(); \
	friend struct ::Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APPLEIMAGEUTILS_API UClass* ::Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AppleImageUtils"), Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_NoRegister) \
	DECLARE_SERIALIZER(UAppleImageUtilsBaseAsyncTaskBlueprintProxy)


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleImageUtilsBaseAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APPLEIMAGEUTILS_API, UAppleImageUtilsBaseAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleImageUtilsBaseAsyncTaskBlueprintProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy(UAppleImageUtilsBaseAsyncTaskBlueprintProxy&&) = delete; \
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy(const UAppleImageUtilsBaseAsyncTaskBlueprintProxy&) = delete; \
	APPLEIMAGEUTILS_API virtual ~UAppleImageUtilsBaseAsyncTaskBlueprintProxy();


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_INCLASS \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAppleImageUtilsBaseAsyncTaskBlueprintProxy;

// ********** End Class UAppleImageUtilsBaseAsyncTaskBlueprintProxy ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
