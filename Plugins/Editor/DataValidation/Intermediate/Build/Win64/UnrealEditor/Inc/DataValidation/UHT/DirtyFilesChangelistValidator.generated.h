// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DirtyFilesChangelistValidator.h"

#ifdef DATAVALIDATION_DirtyFilesChangelistValidator_generated_h
#error "DirtyFilesChangelistValidator.generated.h already included, missing '#pragma once' in DirtyFilesChangelistValidator.h"
#endif
#define DATAVALIDATION_DirtyFilesChangelistValidator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDirtyFilesChangelistValidator *******************************************
struct Z_Construct_UClass_UDirtyFilesChangelistValidator_Statics;
DATAVALIDATION_API UClass* Z_Construct_UClass_UDirtyFilesChangelistValidator_NoRegister();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirtyFilesChangelistValidator(); \
	friend struct ::Z_Construct_UClass_UDirtyFilesChangelistValidator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAVALIDATION_API UClass* ::Z_Construct_UClass_UDirtyFilesChangelistValidator_NoRegister(); \
public: \
	DECLARE_CLASS2(UDirtyFilesChangelistValidator, UEditorValidatorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), Z_Construct_UClass_UDirtyFilesChangelistValidator_NoRegister) \
	DECLARE_SERIALIZER(UDirtyFilesChangelistValidator)


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAVALIDATION_API UDirtyFilesChangelistValidator(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDirtyFilesChangelistValidator(UDirtyFilesChangelistValidator&&) = delete; \
	UDirtyFilesChangelistValidator(const UDirtyFilesChangelistValidator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAVALIDATION_API, UDirtyFilesChangelistValidator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirtyFilesChangelistValidator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDirtyFilesChangelistValidator) \
	DATAVALIDATION_API virtual ~UDirtyFilesChangelistValidator();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_15_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDirtyFilesChangelistValidator;

// ********** End Class UDirtyFilesChangelistValidator *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
