// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/DelegateTest.h"

#ifdef PIXELSTREAMING2RTC_DelegateTest_generated_h
#error "DelegateTest.generated.h already included, missing '#pragma once' in DelegateTest.h"
#endif
#define PIXELSTREAMING2RTC_DelegateTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreaming2DynamicDelegateTest **************************************
#if WITH_TESTS
#if WITH_TESTS
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Tests_DelegateTest_h_256_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnFallbackToSoftwareEncoding); \
	DECLARE_FUNCTION(execOnStatChanged); \
	DECLARE_FUNCTION(execOnDataTrackClosed); \
	DECLARE_FUNCTION(execOnDataTrackOpen); \
	DECLARE_FUNCTION(execOnAllConnectionsClosed); \
	DECLARE_FUNCTION(execOnClosedConnection); \
	DECLARE_FUNCTION(execOnNewConnection); \
	DECLARE_FUNCTION(execOnDisconnectedFromSignallingServer); \
	DECLARE_FUNCTION(execOnConnectedToSignallingServer);
#else // WITH_TESTS
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Tests_DelegateTest_h_256_RPC_WRAPPERS_NO_PURE_DECLS
#endif // WITH_TESTS


struct Z_Construct_UClass_UPixelStreaming2DynamicDelegateTest_Statics;
PIXELSTREAMING2RTC_API UClass* Z_Construct_UClass_UPixelStreaming2DynamicDelegateTest_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Tests_DelegateTest_h_256_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreaming2DynamicDelegateTest(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2DynamicDelegateTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2RTC_API UClass* ::Z_Construct_UClass_UPixelStreaming2DynamicDelegateTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2DynamicDelegateTest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming2RTC"), Z_Construct_UClass_UPixelStreaming2DynamicDelegateTest_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2DynamicDelegateTest)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Tests_DelegateTest_h_256_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreaming2DynamicDelegateTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2DynamicDelegateTest(UPixelStreaming2DynamicDelegateTest&&) = delete; \
	UPixelStreaming2DynamicDelegateTest(const UPixelStreaming2DynamicDelegateTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreaming2DynamicDelegateTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2DynamicDelegateTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2DynamicDelegateTest) \
	NO_API virtual ~UPixelStreaming2DynamicDelegateTest();


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Tests_DelegateTest_h_253_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Tests_DelegateTest_h_256_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Tests_DelegateTest_h_256_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Tests_DelegateTest_h_256_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Tests_DelegateTest_h_256_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2DynamicDelegateTest;

#endif // WITH_TESTS
// ********** End Class UPixelStreaming2DynamicDelegateTest ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Private_Tests_DelegateTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
