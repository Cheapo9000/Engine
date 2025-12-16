// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnalyticsMulticastSettings.h"

#ifdef ANALYTICSMULTICASTEDITOR_AnalyticsMulticastSettings_generated_h
#error "AnalyticsMulticastSettings.generated.h already included, missing '#pragma once' in AnalyticsMulticastSettings.h"
#endif
#define ANALYTICSMULTICASTEDITOR_AnalyticsMulticastSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnalyticsMulticastSettings **********************************************
struct Z_Construct_UClass_UAnalyticsMulticastSettings_Statics;
ANALYTICSMULTICASTEDITOR_API UClass* Z_Construct_UClass_UAnalyticsMulticastSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnalyticsMulticastSettings(); \
	friend struct ::Z_Construct_UClass_UAnalyticsMulticastSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANALYTICSMULTICASTEDITOR_API UClass* ::Z_Construct_UClass_UAnalyticsMulticastSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnalyticsMulticastSettings, UAnalyticsSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnalyticsMulticastEditor"), Z_Construct_UClass_UAnalyticsMulticastSettings_NoRegister) \
	DECLARE_SERIALIZER(UAnalyticsMulticastSettings)


#define FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnalyticsMulticastSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalyticsMulticastSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnalyticsMulticastSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsMulticastSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnalyticsMulticastSettings(UAnalyticsMulticastSettings&&) = delete; \
	UAnalyticsMulticastSettings(const UAnalyticsMulticastSettings&) = delete; \
	NO_API virtual ~UAnalyticsMulticastSettings();


#define FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnalyticsMulticastSettings;

// ********** End Class UAnalyticsMulticastSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
