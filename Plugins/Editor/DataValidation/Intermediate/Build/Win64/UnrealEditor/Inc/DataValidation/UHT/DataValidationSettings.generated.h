// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataValidationSettings.h"

#ifdef DATAVALIDATION_DataValidationSettings_generated_h
#error "DataValidationSettings.generated.h already included, missing '#pragma once' in DataValidationSettings.h"
#endif
#define DATAVALIDATION_DataValidationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataValidationSettings **************************************************
struct Z_Construct_UClass_UDataValidationSettings_Statics;
DATAVALIDATION_API UClass* Z_Construct_UClass_UDataValidationSettings_NoRegister();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataValidationSettings(); \
	friend struct ::Z_Construct_UClass_UDataValidationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAVALIDATION_API UClass* ::Z_Construct_UClass_UDataValidationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataValidationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), Z_Construct_UClass_UDataValidationSettings_NoRegister) \
	DECLARE_SERIALIZER(UDataValidationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataValidationSettings(UDataValidationSettings&&) = delete; \
	UDataValidationSettings(const UDataValidationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAVALIDATION_API, UDataValidationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataValidationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataValidationSettings) \
	DATAVALIDATION_API virtual ~UDataValidationSettings();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_15_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataValidationSettings;

// ********** End Class UDataValidationSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
