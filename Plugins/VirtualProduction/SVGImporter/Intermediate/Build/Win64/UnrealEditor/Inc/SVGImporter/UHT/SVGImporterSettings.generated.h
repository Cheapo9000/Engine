// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SVGImporterSettings.h"

#ifdef SVGIMPORTER_SVGImporterSettings_generated_h
#error "SVGImporterSettings.generated.h already included, missing '#pragma once' in SVGImporterSettings.h"
#endif
#define SVGIMPORTER_SVGImporterSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USVGImporterSettings *****************************************************
struct Z_Construct_UClass_USVGImporterSettings_Statics;
SVGIMPORTER_API UClass* Z_Construct_UClass_USVGImporterSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGImporterSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSVGImporterSettings(); \
	friend struct ::Z_Construct_UClass_USVGImporterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SVGIMPORTER_API UClass* ::Z_Construct_UClass_USVGImporterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USVGImporterSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SVGImporter"), Z_Construct_UClass_USVGImporterSettings_NoRegister) \
	DECLARE_SERIALIZER(USVGImporterSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGImporterSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USVGImporterSettings(USVGImporterSettings&&) = delete; \
	USVGImporterSettings(const USVGImporterSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USVGImporterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USVGImporterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USVGImporterSettings) \
	NO_API virtual ~USVGImporterSettings();


#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGImporterSettings_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGImporterSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGImporterSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGImporterSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USVGImporterSettings;

// ********** End Class USVGImporterSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SVGImporter_Source_SVGImporter_Private_SVGImporterSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
