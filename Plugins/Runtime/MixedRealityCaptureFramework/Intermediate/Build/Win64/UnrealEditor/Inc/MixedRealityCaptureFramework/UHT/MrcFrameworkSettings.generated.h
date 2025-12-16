// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MrcFrameworkSettings.h"

#ifdef MIXEDREALITYCAPTUREFRAMEWORK_MrcFrameworkSettings_generated_h
#error "MrcFrameworkSettings.generated.h already included, missing '#pragma once' in MrcFrameworkSettings.h"
#endif
#define MIXEDREALITYCAPTUREFRAMEWORK_MrcFrameworkSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMrcFrameworkSettings ****************************************************
struct Z_Construct_UClass_UMrcFrameworkSettings_Statics;
MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcFrameworkSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcFrameworkSettings_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUMrcFrameworkSettings(); \
	friend struct ::Z_Construct_UClass_UMrcFrameworkSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIXEDREALITYCAPTUREFRAMEWORK_API UClass* ::Z_Construct_UClass_UMrcFrameworkSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMrcFrameworkSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), Z_Construct_UClass_UMrcFrameworkSettings_NoRegister) \
	DECLARE_SERIALIZER(UMrcFrameworkSettings)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcFrameworkSettings_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMrcFrameworkSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMrcFrameworkSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMrcFrameworkSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMrcFrameworkSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMrcFrameworkSettings(UMrcFrameworkSettings&&) = delete; \
	UMrcFrameworkSettings(const UMrcFrameworkSettings&) = delete; \
	NO_API virtual ~UMrcFrameworkSettings();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcFrameworkSettings_h_7_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcFrameworkSettings_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcFrameworkSettings_h_10_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcFrameworkSettings_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMrcFrameworkSettings;

// ********** End Class UMrcFrameworkSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Private_MrcFrameworkSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
