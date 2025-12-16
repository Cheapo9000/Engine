// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneCapturer.h"

#ifdef PANORAMICCAPTURE_SceneCapturer_generated_h
#error "SceneCapturer.generated.h already included, missing '#pragma once' in SceneCapturer.h"
#endif
#define PANORAMICCAPTURE_SceneCapturer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPostProcessVolumeData ********************************************
struct Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics;
#define FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics; \
	PANORAMICCAPTURE_API static class UScriptStruct* StaticStruct();


struct FPostProcessVolumeData;
// ********** End ScriptStruct FPostProcessVolumeData **********************************************

// ********** Begin Class USceneCapturer ***********************************************************
struct Z_Construct_UClass_USceneCapturer_Statics;
PANORAMICCAPTURE_API UClass* Z_Construct_UClass_USceneCapturer_NoRegister();

#define FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneCapturer(); \
	friend struct ::Z_Construct_UClass_USceneCapturer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PANORAMICCAPTURE_API UClass* ::Z_Construct_UClass_USceneCapturer_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneCapturer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PanoramicCapture"), Z_Construct_UClass_USceneCapturer_NoRegister) \
	DECLARE_SERIALIZER(USceneCapturer)


#define FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_66_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneCapturer(USceneCapturer&&) = delete; \
	USceneCapturer(const USceneCapturer&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCapturer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneCapturer) \
	NO_API virtual ~USceneCapturer();


#define FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_61_PROLOG
#define FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneCapturer;

// ********** End Class USceneCapturer *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
