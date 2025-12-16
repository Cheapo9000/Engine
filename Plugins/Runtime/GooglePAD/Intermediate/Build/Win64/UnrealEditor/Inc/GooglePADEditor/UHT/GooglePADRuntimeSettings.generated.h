// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GooglePADRuntimeSettings.h"

#ifdef GOOGLEPADEDITOR_GooglePADRuntimeSettings_generated_h
#error "GooglePADRuntimeSettings.generated.h already included, missing '#pragma once' in GooglePADRuntimeSettings.h"
#endif
#define GOOGLEPADEDITOR_GooglePADRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGooglePADRuntimeSettings ************************************************
struct Z_Construct_UClass_UGooglePADRuntimeSettings_Statics;
GOOGLEPADEDITOR_API UClass* Z_Construct_UClass_UGooglePADRuntimeSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGooglePADRuntimeSettings(); \
	friend struct ::Z_Construct_UClass_UGooglePADRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GOOGLEPADEDITOR_API UClass* ::Z_Construct_UClass_UGooglePADRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGooglePADRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GooglePADEditor"), Z_Construct_UClass_UGooglePADRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UGooglePADRuntimeSettings)


#define FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGooglePADRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGooglePADRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGooglePADRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGooglePADRuntimeSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGooglePADRuntimeSettings(UGooglePADRuntimeSettings&&) = delete; \
	UGooglePADRuntimeSettings(const UGooglePADRuntimeSettings&) = delete; \
	NO_API virtual ~UGooglePADRuntimeSettings();


#define FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGooglePADRuntimeSettings;

// ********** End Class UGooglePADRuntimeSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
