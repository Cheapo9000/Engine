// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterEditorSettings.h"

#ifdef METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorSettings_generated_h
#error "MetaHumanCharacterEditorSettings.generated.h already included, missing '#pragma once' in MetaHumanCharacterEditorSettings.h"
#endif
#define METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanCharacterEditorSettings ****************************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorSettings_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSettings_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorSettings(UMetaHumanCharacterEditorSettings&&) = delete; \
	UMetaHumanCharacterEditorSettings(const UMetaHumanCharacterEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorSettings) \
	NO_API virtual ~UMetaHumanCharacterEditorSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSettings_h_32_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorSettings;

// ********** End Class UMetaHumanCharacterEditorSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSettings_h

// ********** Begin Enum EMetaHumanCharacterMigrationAction ****************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERMIGRATIONACTION(op) \
	op(EMetaHumanCharacterMigrationAction::Prompt) \
	op(EMetaHumanCharacterMigrationAction::Import) \
	op(EMetaHumanCharacterMigrationAction::Migrate) \
	op(EMetaHumanCharacterMigrationAction::ImportAndMigrate) 

enum class EMetaHumanCharacterMigrationAction : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterMigrationAction> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterMigrationAction>();
// ********** End Enum EMetaHumanCharacterMigrationAction ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
