// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Volume/InterchangeVolumeTranslatorSettings.h"

#ifdef INTERCHANGEIMPORT_InterchangeVolumeTranslatorSettings_generated_h
#error "InterchangeVolumeTranslatorSettings.generated.h already included, missing '#pragma once' in InterchangeVolumeTranslatorSettings.h"
#endif
#define INTERCHANGEIMPORT_InterchangeVolumeTranslatorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeVolumeTranslatorSettings *************************************
struct Z_Construct_UClass_UInterchangeVolumeTranslatorSettings_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeVolumeTranslatorSettings_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumeTranslatorSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeVolumeTranslatorSettings(); \
	friend struct ::Z_Construct_UClass_UInterchangeVolumeTranslatorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeVolumeTranslatorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeVolumeTranslatorSettings, UInterchangeTranslatorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeVolumeTranslatorSettings_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeVolumeTranslatorSettings)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumeTranslatorSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeVolumeTranslatorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeVolumeTranslatorSettings(UInterchangeVolumeTranslatorSettings&&) = delete; \
	UInterchangeVolumeTranslatorSettings(const UInterchangeVolumeTranslatorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeVolumeTranslatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeVolumeTranslatorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeVolumeTranslatorSettings) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeVolumeTranslatorSettings();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumeTranslatorSettings_h_10_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumeTranslatorSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumeTranslatorSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumeTranslatorSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeVolumeTranslatorSettings;

// ********** End Class UInterchangeVolumeTranslatorSettings ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumeTranslatorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
