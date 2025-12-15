// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ContentBrowserSettings.h"

#ifdef UNREALED_ContentBrowserSettings_generated_h
#error "ContentBrowserSettings.generated.h already included, missing '#pragma once' in ContentBrowserSettings.h"
#endif
#define UNREALED_ContentBrowserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UContentBrowserSettings **************************************************
struct Z_Construct_UClass_UContentBrowserSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UContentBrowserSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserSettings(); \
	friend struct ::Z_Construct_UClass_UContentBrowserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UContentBrowserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UContentBrowserSettings_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UContentBrowserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserSettings(UContentBrowserSettings&&) = delete; \
	UContentBrowserSettings(const UContentBrowserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UContentBrowserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserSettings) \
	UNREALED_API virtual ~UContentBrowserSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserSettings;

// ********** End Class UContentBrowserSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
