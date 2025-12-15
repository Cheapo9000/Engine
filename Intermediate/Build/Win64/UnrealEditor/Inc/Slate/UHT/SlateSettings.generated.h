// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlateSettings.h"

#ifdef SLATE_SlateSettings_generated_h
#error "SlateSettings.generated.h already included, missing '#pragma once' in SlateSettings.h"
#endif
#define SLATE_SlateSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USlateSettings ***********************************************************
struct Z_Construct_UClass_USlateSettings_Statics;
SLATE_API UClass* Z_Construct_UClass_USlateSettings_NoRegister();

#define FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSlateSettings(); \
	friend struct ::Z_Construct_UClass_USlateSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATE_API UClass* ::Z_Construct_UClass_USlateSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Slate"), Z_Construct_UClass_USlateSettings_NoRegister) \
	DECLARE_SERIALIZER(USlateSettings)


#define FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATE_API USlateSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATE_API, USlateSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateSettings(USlateSettings&&) = delete; \
	USlateSettings(const USlateSettings&) = delete; \
	SLATE_API virtual ~USlateSettings();


#define FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_15_PROLOG
#define FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_18_INCLASS \
	FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateSettings;

// ********** End Class USlateSettings *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
