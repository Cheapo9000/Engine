// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveUpdateSlateSettings.h"

#ifdef LIVEUPDATEFORSLATE_LiveUpdateSlateSettings_generated_h
#error "LiveUpdateSlateSettings.generated.h already included, missing '#pragma once' in LiveUpdateSlateSettings.h"
#endif
#define LIVEUPDATEFORSLATE_LiveUpdateSlateSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveUpdateSlateSettings *************************************************
struct Z_Construct_UClass_ULiveUpdateSlateSettings_Statics;
LIVEUPDATEFORSLATE_API UClass* Z_Construct_UClass_ULiveUpdateSlateSettings_NoRegister();

#define FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveUpdateSlateSettings(); \
	friend struct ::Z_Construct_UClass_ULiveUpdateSlateSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVEUPDATEFORSLATE_API UClass* ::Z_Construct_UClass_ULiveUpdateSlateSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveUpdateSlateSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveUpdateForSlate"), Z_Construct_UClass_ULiveUpdateSlateSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveUpdateSlateSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveUpdateSlateSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveUpdateSlateSettings(ULiveUpdateSlateSettings&&) = delete; \
	ULiveUpdateSlateSettings(const ULiveUpdateSlateSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveUpdateSlateSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveUpdateSlateSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveUpdateSlateSettings) \
	NO_API virtual ~ULiveUpdateSlateSettings();


#define FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_8_PROLOG
#define FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveUpdateSlateSettings;

// ********** End Class ULiveUpdateSlateSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
