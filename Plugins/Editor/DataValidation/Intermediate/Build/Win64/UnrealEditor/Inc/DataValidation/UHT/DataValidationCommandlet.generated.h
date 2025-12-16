// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataValidationCommandlet.h"

#ifdef DATAVALIDATION_DataValidationCommandlet_generated_h
#error "DataValidationCommandlet.generated.h already included, missing '#pragma once' in DataValidationCommandlet.h"
#endif
#define DATAVALIDATION_DataValidationCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataValidationCommandlet ************************************************
struct Z_Construct_UClass_UDataValidationCommandlet_Statics;
DATAVALIDATION_API UClass* Z_Construct_UClass_UDataValidationCommandlet_NoRegister();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationCommandlet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDataValidationCommandlet(); \
	friend struct ::Z_Construct_UClass_UDataValidationCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAVALIDATION_API UClass* ::Z_Construct_UClass_UDataValidationCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataValidationCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DataValidation"), Z_Construct_UClass_UDataValidationCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDataValidationCommandlet)


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationCommandlet_h_12_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataValidationCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAVALIDATION_API, UDataValidationCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataValidationCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataValidationCommandlet(UDataValidationCommandlet&&) = delete; \
	UDataValidationCommandlet(const UDataValidationCommandlet&) = delete; \
	DATAVALIDATION_API virtual ~UDataValidationCommandlet();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationCommandlet_h_9_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationCommandlet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationCommandlet_h_12_INCLASS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationCommandlet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataValidationCommandlet;

// ********** End Class UDataValidationCommandlet **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
