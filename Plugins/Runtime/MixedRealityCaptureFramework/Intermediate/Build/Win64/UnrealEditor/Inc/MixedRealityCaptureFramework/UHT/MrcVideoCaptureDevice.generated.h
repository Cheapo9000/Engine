// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MrcVideoCaptureDevice.h"

#ifdef MIXEDREALITYCAPTUREFRAMEWORK_MrcVideoCaptureDevice_generated_h
#error "MrcVideoCaptureDevice.generated.h already included, missing '#pragma once' in MrcVideoCaptureDevice.h"
#endif
#define MIXEDREALITYCAPTUREFRAMEWORK_MrcVideoCaptureDevice_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMrcVideoCaptureFeedIndex;

// ********** Begin ScriptStruct FMrcVideoCaptureFeedIndex *****************************************
struct Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics;
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMrcVideoCaptureFeedIndex;
// ********** End ScriptStruct FMrcVideoCaptureFeedIndex *******************************************

// ********** Begin Delegate FMRCaptureFeedDelegate ************************************************
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_58_DELEGATE \
MIXEDREALITYCAPTUREFRAMEWORK_API void FMRCaptureFeedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MRCaptureFeedDelegate, FMrcVideoCaptureFeedIndex const& FeedRef);


// ********** End Delegate FMRCaptureFeedDelegate **************************************************

// ********** Begin Class UAsyncTask_OpenMrcVidCaptureFeedBase *************************************
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_63_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnVideoFeedOpenFailure); \
	DECLARE_FUNCTION(execOnVideoFeedOpened);


struct Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics;
MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncTask_OpenMrcVidCaptureFeedBase(); \
	friend struct ::Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIXEDREALITYCAPTUREFRAMEWORK_API UClass* ::Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncTask_OpenMrcVidCaptureFeedBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_NoRegister) \
	DECLARE_SERIALIZER(UAsyncTask_OpenMrcVidCaptureFeedBase)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTask_OpenMrcVidCaptureFeedBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTask_OpenMrcVidCaptureFeedBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTask_OpenMrcVidCaptureFeedBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTask_OpenMrcVidCaptureFeedBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncTask_OpenMrcVidCaptureFeedBase(UAsyncTask_OpenMrcVidCaptureFeedBase&&) = delete; \
	UAsyncTask_OpenMrcVidCaptureFeedBase(const UAsyncTask_OpenMrcVidCaptureFeedBase&) = delete; \
	NO_API virtual ~UAsyncTask_OpenMrcVidCaptureFeedBase();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_60_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_63_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_63_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncTask_OpenMrcVidCaptureFeedBase;

// ********** End Class UAsyncTask_OpenMrcVidCaptureFeedBase ***************************************

// ********** Begin Class UAsyncTask_OpenMrcVidCaptureDevice ***************************************
struct Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_Statics;
MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_NoRegister();

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncTask_OpenMrcVidCaptureDevice(); \
	friend struct ::Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIXEDREALITYCAPTUREFRAMEWORK_API UClass* ::Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncTask_OpenMrcVidCaptureDevice, UAsyncTask_OpenMrcVidCaptureFeedBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_NoRegister) \
	DECLARE_SERIALIZER(UAsyncTask_OpenMrcVidCaptureDevice)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTask_OpenMrcVidCaptureDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTask_OpenMrcVidCaptureDevice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTask_OpenMrcVidCaptureDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTask_OpenMrcVidCaptureDevice); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncTask_OpenMrcVidCaptureDevice(UAsyncTask_OpenMrcVidCaptureDevice&&) = delete; \
	UAsyncTask_OpenMrcVidCaptureDevice(const UAsyncTask_OpenMrcVidCaptureDevice&) = delete; \
	NO_API virtual ~UAsyncTask_OpenMrcVidCaptureDevice();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_98_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_101_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncTask_OpenMrcVidCaptureDevice;

// ********** End Class UAsyncTask_OpenMrcVidCaptureDevice *****************************************

// ********** Begin Class UAsyncTask_OpenMrcVidCaptureFeed *****************************************
struct Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_Statics;
MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_NoRegister();

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncTask_OpenMrcVidCaptureFeed(); \
	friend struct ::Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIXEDREALITYCAPTUREFRAMEWORK_API UClass* ::Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncTask_OpenMrcVidCaptureFeed, UAsyncTask_OpenMrcVidCaptureFeedBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_NoRegister) \
	DECLARE_SERIALIZER(UAsyncTask_OpenMrcVidCaptureFeed)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTask_OpenMrcVidCaptureFeed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTask_OpenMrcVidCaptureFeed) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTask_OpenMrcVidCaptureFeed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTask_OpenMrcVidCaptureFeed); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncTask_OpenMrcVidCaptureFeed(UAsyncTask_OpenMrcVidCaptureFeed&&) = delete; \
	UAsyncTask_OpenMrcVidCaptureFeed(const UAsyncTask_OpenMrcVidCaptureFeed&) = delete; \
	NO_API virtual ~UAsyncTask_OpenMrcVidCaptureFeed();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_113_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_116_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncTask_OpenMrcVidCaptureFeed;

// ********** End Class UAsyncTask_OpenMrcVidCaptureFeed *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
