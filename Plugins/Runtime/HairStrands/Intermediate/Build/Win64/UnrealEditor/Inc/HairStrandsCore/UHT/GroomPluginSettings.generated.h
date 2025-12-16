// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomPluginSettings.h"

#ifdef HAIRSTRANDSCORE_GroomPluginSettings_generated_h
#error "GroomPluginSettings.generated.h already included, missing '#pragma once' in GroomPluginSettings.h"
#endif
#define HAIRSTRANDSCORE_GroomPluginSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGroomPluginSettings *****************************************************
struct Z_Construct_UClass_UGroomPluginSettings_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomPluginSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroomPluginSettings(); \
	friend struct ::Z_Construct_UClass_UGroomPluginSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UGroomPluginSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomPluginSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UGroomPluginSettings_NoRegister) \
	DECLARE_SERIALIZER(UGroomPluginSettings)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomPluginSettings(UGroomPluginSettings&&) = delete; \
	UGroomPluginSettings(const UGroomPluginSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UGroomPluginSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomPluginSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGroomPluginSettings) \
	HAIRSTRANDSCORE_API virtual ~UGroomPluginSettings();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomPluginSettings;

// ********** End Class UGroomPluginSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomPluginSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
