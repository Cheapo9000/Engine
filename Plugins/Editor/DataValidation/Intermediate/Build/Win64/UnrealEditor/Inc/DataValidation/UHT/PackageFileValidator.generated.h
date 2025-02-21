// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PackageFileValidator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAVALIDATION_PackageFileValidator_generated_h
#error "PackageFileValidator.generated.h already included, missing '#pragma once' in PackageFileValidator.h"
#endif
#define DATAVALIDATION_PackageFileValidator_generated_h

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_PackageFileValidator_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPackageFileValidator(); \
	friend struct Z_Construct_UClass_UPackageFileValidator_Statics; \
public: \
	DECLARE_CLASS(UPackageFileValidator, UEditorValidatorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UPackageFileValidator)


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_PackageFileValidator_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackageFileValidator(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPackageFileValidator(UPackageFileValidator&&); \
	UPackageFileValidator(const UPackageFileValidator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageFileValidator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageFileValidator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPackageFileValidator) \
	NO_API virtual ~UPackageFileValidator();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_PackageFileValidator_h_18_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_PackageFileValidator_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_PackageFileValidator_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_PackageFileValidator_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UPackageFileValidator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_PackageFileValidator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
