// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DirectoryPlaceholderSettings.h"

#ifdef DIRECTORYPLACEHOLDER_DirectoryPlaceholderSettings_generated_h
#error "DirectoryPlaceholderSettings.generated.h already included, missing '#pragma once' in DirectoryPlaceholderSettings.h"
#endif
#define DIRECTORYPLACEHOLDER_DirectoryPlaceholderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDirectoryPlaceholderSettings ********************************************
struct Z_Construct_UClass_UDirectoryPlaceholderSettings_Statics;
DIRECTORYPLACEHOLDER_API UClass* Z_Construct_UClass_UDirectoryPlaceholderSettings_NoRegister();

#define FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Private_DirectoryPlaceholderSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectoryPlaceholderSettings(); \
	friend struct ::Z_Construct_UClass_UDirectoryPlaceholderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DIRECTORYPLACEHOLDER_API UClass* ::Z_Construct_UClass_UDirectoryPlaceholderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDirectoryPlaceholderSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DirectoryPlaceholder"), Z_Construct_UClass_UDirectoryPlaceholderSettings_NoRegister) \
	DECLARE_SERIALIZER(UDirectoryPlaceholderSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Private_DirectoryPlaceholderSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDirectoryPlaceholderSettings(UDirectoryPlaceholderSettings&&) = delete; \
	UDirectoryPlaceholderSettings(const UDirectoryPlaceholderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectoryPlaceholderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectoryPlaceholderSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDirectoryPlaceholderSettings) \
	NO_API virtual ~UDirectoryPlaceholderSettings();


#define FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Private_DirectoryPlaceholderSettings_h_12_PROLOG
#define FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Private_DirectoryPlaceholderSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Private_DirectoryPlaceholderSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Private_DirectoryPlaceholderSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDirectoryPlaceholderSettings;

// ********** End Class UDirectoryPlaceholderSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Private_DirectoryPlaceholderSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
