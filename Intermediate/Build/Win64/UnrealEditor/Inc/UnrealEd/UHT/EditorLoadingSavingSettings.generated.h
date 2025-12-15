// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/EditorLoadingSavingSettings.h"

#ifdef UNREALED_EditorLoadingSavingSettings_generated_h
#error "EditorLoadingSavingSettings.generated.h already included, missing '#pragma once' in EditorLoadingSavingSettings.h"
#endif
#define UNREALED_EditorLoadingSavingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAutoReimportWildcard *********************************************
struct Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FAutoReimportWildcard;
// ********** End ScriptStruct FAutoReimportWildcard ***********************************************

// ********** Begin ScriptStruct FAutoReimportDirectoryConfig **************************************
struct Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FAutoReimportDirectoryConfig;
// ********** End ScriptStruct FAutoReimportDirectoryConfig ****************************************

// ********** Begin Class UEditorLoadingSavingSettings *********************************************
struct Z_Construct_UClass_UEditorLoadingSavingSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorLoadingSavingSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUEditorLoadingSavingSettings(); \
	friend struct ::Z_Construct_UClass_UEditorLoadingSavingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorLoadingSavingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorLoadingSavingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorLoadingSavingSettings_NoRegister) \
	DECLARE_SERIALIZER(UEditorLoadingSavingSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorLoadingSavingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLoadingSavingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorLoadingSavingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLoadingSavingSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorLoadingSavingSettings(UEditorLoadingSavingSettings&&) = delete; \
	UEditorLoadingSavingSettings(const UEditorLoadingSavingSettings&) = delete; \
	UNREALED_API virtual ~UEditorLoadingSavingSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_94_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_98_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorLoadingSavingSettings;

// ********** End Class UEditorLoadingSavingSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h

// ********** Begin Enum ELoadLevelAtStartup *******************************************************
#define FOREACH_ENUM_ELOADLEVELATSTARTUP(op) \
	op(ELoadLevelAtStartup::None) \
	op(ELoadLevelAtStartup::ProjectDefault) \
	op(ELoadLevelAtStartup::LastOpened) 

namespace ELoadLevelAtStartup { enum Type : int; }
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ELoadLevelAtStartup::Type>();
// ********** End Enum ELoadLevelAtStartup *********************************************************

// ********** Begin Enum EAutoSaveMethod ***********************************************************
#define FOREACH_ENUM_EAUTOSAVEMETHOD(op) \
	op(EAutoSaveMethod::BackupAndRestore) \
	op(EAutoSaveMethod::BackupAndOverwrite) 

enum class EAutoSaveMethod : uint8;
template<> struct TIsUEnumClass<EAutoSaveMethod> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutoSaveMethod>();
// ********** End Enum EAutoSaveMethod *************************************************************

// ********** Begin Enum ERestoreOpenAssetTabsMethod ***********************************************
#define FOREACH_ENUM_ERESTOREOPENASSETTABSMETHOD(op) \
	op(ERestoreOpenAssetTabsMethod::AlwaysPrompt) \
	op(ERestoreOpenAssetTabsMethod::AlwaysRestore) \
	op(ERestoreOpenAssetTabsMethod::NeverRestore) 

enum class ERestoreOpenAssetTabsMethod : uint8;
template<> struct TIsUEnumClass<ERestoreOpenAssetTabsMethod> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ERestoreOpenAssetTabsMethod>();
// ********** End Enum ERestoreOpenAssetTabsMethod *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
