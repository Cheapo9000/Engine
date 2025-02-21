// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorValidatorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EDataValidationResult : uint8;
enum class EDataValidationUsecase : uint8;
#ifdef DATAVALIDATION_EditorValidatorBase_generated_h
#error "EditorValidatorBase.generated.h already included, missing '#pragma once' in EditorValidatorBase.h"
#endif
#define DATAVALIDATION_EditorValidatorBase_generated_h

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool K2_CanValidateAsset_Implementation(UObject* InAsset) const; \
	virtual bool K2_CanValidate_Implementation(const EDataValidationUsecase InUsecase) const; \
	DECLARE_FUNCTION(execGetValidationResult); \
	DECLARE_FUNCTION(execAssetWarning); \
	DECLARE_FUNCTION(execAssetPasses); \
	DECLARE_FUNCTION(execAssetFails); \
	DECLARE_FUNCTION(execK2_ValidateLoadedAsset); \
	DECLARE_FUNCTION(execK2_CanValidateAsset); \
	DECLARE_FUNCTION(execK2_CanValidate);


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorValidatorBase(); \
	friend struct Z_Construct_UClass_UEditorValidatorBase_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorValidatorBase(UEditorValidatorBase&&); \
	UEditorValidatorBase(const UEditorValidatorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEditorValidatorBase) \
	NO_API virtual ~UEditorValidatorBase();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_26_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UEditorValidatorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
