// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DirectLinkExtensionSettings.h"

#ifdef DIRECTLINKEXTENSION_DirectLinkExtensionSettings_generated_h
#error "DirectLinkExtensionSettings.generated.h already included, missing '#pragma once' in DirectLinkExtensionSettings.h"
#endif
#define DIRECTLINKEXTENSION_DirectLinkExtensionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDirectLinkExtensionSettings *********************************************
struct Z_Construct_UClass_UDirectLinkExtensionSettings_Statics;
DIRECTLINKEXTENSION_API UClass* Z_Construct_UClass_UDirectLinkExtensionSettings_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectLinkExtensionSettings(); \
	friend struct ::Z_Construct_UClass_UDirectLinkExtensionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DIRECTLINKEXTENSION_API UClass* ::Z_Construct_UClass_UDirectLinkExtensionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDirectLinkExtensionSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DirectLinkExtension"), Z_Construct_UClass_UDirectLinkExtensionSettings_NoRegister) \
	DECLARE_SERIALIZER(UDirectLinkExtensionSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDirectLinkExtensionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDirectLinkExtensionSettings(UDirectLinkExtensionSettings&&) = delete; \
	UDirectLinkExtensionSettings(const UDirectLinkExtensionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectLinkExtensionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectLinkExtensionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDirectLinkExtensionSettings) \
	NO_API virtual ~UDirectLinkExtensionSettings();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionSettings_h_11_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDirectLinkExtensionSettings;

// ********** End Class UDirectLinkExtensionSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
