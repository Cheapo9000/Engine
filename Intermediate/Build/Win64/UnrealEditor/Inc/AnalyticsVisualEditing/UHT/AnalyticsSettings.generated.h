// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnalyticsSettings.h"

#ifdef ANALYTICSVISUALEDITING_AnalyticsSettings_generated_h
#error "AnalyticsSettings.generated.h already included, missing '#pragma once' in AnalyticsSettings.h"
#endif
#define ANALYTICSVISUALEDITING_AnalyticsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnalyticsSettingsBase ***************************************************
struct Z_Construct_UClass_UAnalyticsSettingsBase_Statics;
ANALYTICSVISUALEDITING_API UClass* Z_Construct_UClass_UAnalyticsSettingsBase_NoRegister();

#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnalyticsSettingsBase(); \
	friend struct ::Z_Construct_UClass_UAnalyticsSettingsBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANALYTICSVISUALEDITING_API UClass* ::Z_Construct_UClass_UAnalyticsSettingsBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnalyticsSettingsBase, UDeveloperSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnalyticsVisualEditing"), Z_Construct_UClass_UAnalyticsSettingsBase_NoRegister) \
	DECLARE_SERIALIZER(UAnalyticsSettingsBase)


#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnalyticsSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalyticsSettingsBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnalyticsSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsSettingsBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnalyticsSettingsBase(UAnalyticsSettingsBase&&) = delete; \
	UAnalyticsSettingsBase(const UAnalyticsSettingsBase&) = delete; \
	NO_API virtual ~UAnalyticsSettingsBase();


#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_14_PROLOG
#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_18_INCLASS \
	FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnalyticsSettingsBase;

// ********** End Class UAnalyticsSettingsBase *****************************************************

// ********** Begin Class UAnalyticsSettings *******************************************************
struct Z_Construct_UClass_UAnalyticsSettings_Statics;
ANALYTICSVISUALEDITING_API UClass* Z_Construct_UClass_UAnalyticsSettings_NoRegister();

#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUAnalyticsSettings(); \
	friend struct ::Z_Construct_UClass_UAnalyticsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANALYTICSVISUALEDITING_API UClass* ::Z_Construct_UClass_UAnalyticsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnalyticsSettings, UAnalyticsSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnalyticsVisualEditing"), Z_Construct_UClass_UAnalyticsSettings_NoRegister) \
	DECLARE_SERIALIZER(UAnalyticsSettings)


#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnalyticsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalyticsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnalyticsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnalyticsSettings(UAnalyticsSettings&&) = delete; \
	UAnalyticsSettings(const UAnalyticsSettings&) = delete; \
	NO_API virtual ~UAnalyticsSettings();


#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_85_PROLOG
#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_89_INCLASS \
	FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnalyticsSettings;

// ********** End Class UAnalyticsSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
