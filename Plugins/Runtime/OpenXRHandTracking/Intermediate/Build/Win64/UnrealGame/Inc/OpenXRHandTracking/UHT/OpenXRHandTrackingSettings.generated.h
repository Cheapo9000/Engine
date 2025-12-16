// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenXRHandTrackingSettings.h"

#ifdef OPENXRHANDTRACKING_OpenXRHandTrackingSettings_generated_h
#error "OpenXRHandTrackingSettings.generated.h already included, missing '#pragma once' in OpenXRHandTrackingSettings.h"
#endif
#define OPENXRHANDTRACKING_OpenXRHandTrackingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOpenXRHandTrackingSettings **********************************************
struct Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics;
OPENXRHANDTRACKING_API UClass* Z_Construct_UClass_UOpenXRHandTrackingSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOpenXRHandTrackingSettings(); \
	friend struct ::Z_Construct_UClass_UOpenXRHandTrackingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPENXRHANDTRACKING_API UClass* ::Z_Construct_UClass_UOpenXRHandTrackingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenXRHandTrackingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenXRHandTracking"), Z_Construct_UClass_UOpenXRHandTrackingSettings_NoRegister) \
	DECLARE_SERIALIZER(UOpenXRHandTrackingSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenXRHandTrackingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRHandTrackingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRHandTrackingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRHandTrackingSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenXRHandTrackingSettings(UOpenXRHandTrackingSettings&&) = delete; \
	UOpenXRHandTrackingSettings(const UOpenXRHandTrackingSettings&) = delete; \
	NO_API virtual ~UOpenXRHandTrackingSettings();


#define FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_15_INCLASS \
	FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenXRHandTrackingSettings;

// ********** End Class UOpenXRHandTrackingSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Public_OpenXRHandTrackingSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
