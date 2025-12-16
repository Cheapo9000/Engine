// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdjustSettings.h"

#ifdef ADJUSTEDITOR_AdjustSettings_generated_h
#error "AdjustSettings.generated.h already included, missing '#pragma once' in AdjustSettings.h"
#endif
#define ADJUSTEDITOR_AdjustSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAdjustEventMapping ***********************************************
struct Z_Construct_UScriptStruct_FAdjustEventMapping_Statics;
#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAdjustEventMapping_Statics; \
	ADJUSTEDITOR_API static class UScriptStruct* StaticStruct();


struct FAdjustEventMapping;
// ********** End ScriptStruct FAdjustEventMapping *************************************************

// ********** Begin Class UAdjustSettings **********************************************************
struct Z_Construct_UClass_UAdjustSettings_Statics;
ADJUSTEDITOR_API UClass* Z_Construct_UClass_UAdjustSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUAdjustSettings(); \
	friend struct ::Z_Construct_UClass_UAdjustSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADJUSTEDITOR_API UClass* ::Z_Construct_UClass_UAdjustSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAdjustSettings, UAnalyticsSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdjustEditor"), Z_Construct_UClass_UAdjustSettings_NoRegister) \
	DECLARE_SERIALIZER(UAdjustSettings)


#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdjustSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdjustSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdjustSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdjustSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAdjustSettings(UAdjustSettings&&) = delete; \
	UAdjustSettings(const UAdjustSettings&) = delete; \
	NO_API virtual ~UAdjustSettings();


#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_47_PROLOG
#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_INCLASS \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAdjustSettings;

// ********** End Class UAdjustSettings ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h

// ********** Begin Enum EAndroidAdjustLogging *****************************************************
#define FOREACH_ENUM_EANDROIDADJUSTLOGGING(op) \
	op(EAndroidAdjustLogging::verbose) \
	op(EAndroidAdjustLogging::debug) \
	op(EAndroidAdjustLogging::info) \
	op(EAndroidAdjustLogging::warn) \
	op(EAndroidAdjustLogging::error) \
	op(EAndroidAdjustLogging::assert) \
	op(EAndroidAdjustLogging::supress) 

namespace EAndroidAdjustLogging { enum Type : int; }
template<> ADJUSTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAndroidAdjustLogging::Type>();
// ********** End Enum EAndroidAdjustLogging *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
