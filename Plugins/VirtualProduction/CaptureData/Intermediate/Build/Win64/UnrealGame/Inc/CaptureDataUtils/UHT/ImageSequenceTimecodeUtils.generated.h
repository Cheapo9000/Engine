// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImageSequenceTimecodeUtils.h"

#ifdef CAPTUREDATAUTILS_ImageSequenceTimecodeUtils_generated_h
#error "ImageSequenceTimecodeUtils.generated.h already included, missing '#pragma once' in ImageSequenceTimecodeUtils.h"
#endif
#define CAPTUREDATAUTILS_ImageSequenceTimecodeUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UImgMediaSource;
struct FFrameRate;
struct FTimecode;

// ********** Begin Class UImageSequenceTimecodeUtils **********************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_ImageSequenceTimecodeUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFrameRateString); \
	DECLARE_FUNCTION(execGetTimecodeString); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execSetTimecodeInfoString); \
	DECLARE_FUNCTION(execSetTimecodeInfo);


struct Z_Construct_UClass_UImageSequenceTimecodeUtils_Statics;
CAPTUREDATAUTILS_API UClass* Z_Construct_UClass_UImageSequenceTimecodeUtils_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_ImageSequenceTimecodeUtils_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageSequenceTimecodeUtils(); \
	friend struct ::Z_Construct_UClass_UImageSequenceTimecodeUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREDATAUTILS_API UClass* ::Z_Construct_UClass_UImageSequenceTimecodeUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UImageSequenceTimecodeUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureDataUtils"), Z_Construct_UClass_UImageSequenceTimecodeUtils_NoRegister) \
	DECLARE_SERIALIZER(UImageSequenceTimecodeUtils)


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_ImageSequenceTimecodeUtils_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAPTUREDATAUTILS_API UImageSequenceTimecodeUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImageSequenceTimecodeUtils(UImageSequenceTimecodeUtils&&) = delete; \
	UImageSequenceTimecodeUtils(const UImageSequenceTimecodeUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAPTUREDATAUTILS_API, UImageSequenceTimecodeUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceTimecodeUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceTimecodeUtils) \
	CAPTUREDATAUTILS_API virtual ~UImageSequenceTimecodeUtils();


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_ImageSequenceTimecodeUtils_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_ImageSequenceTimecodeUtils_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_ImageSequenceTimecodeUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_ImageSequenceTimecodeUtils_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_ImageSequenceTimecodeUtils_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImageSequenceTimecodeUtils;

// ********** End Class UImageSequenceTimecodeUtils ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_ImageSequenceTimecodeUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
