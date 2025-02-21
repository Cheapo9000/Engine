// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataValidationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAVALIDATION_DataValidationSettings_generated_h
#error "DataValidationSettings.generated.h already included, missing '#pragma once' in DataValidationSettings.h"
#endif
#define DATAVALIDATION_DataValidationSettings_generated_h

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataValidationSettings(); \
	friend struct Z_Construct_UClass_UDataValidationSettings_Statics; \
public: \
	DECLARE_CLASS(UDataValidationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UDataValidationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataValidationSettings(UDataValidationSettings&&); \
	UDataValidationSettings(const UDataValidationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataValidationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataValidationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataValidationSettings) \
	NO_API virtual ~UDataValidationSettings();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_13_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UDataValidationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
