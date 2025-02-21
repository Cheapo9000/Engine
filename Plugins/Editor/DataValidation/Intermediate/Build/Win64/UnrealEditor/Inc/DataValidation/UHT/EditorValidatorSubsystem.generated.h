// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorValidatorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataValidationChangelist;
class UEditorValidatorBase;
class UObject;
enum class EDataValidationResult : uint8;
enum class EDataValidationUsecase : uint8;
struct FAssetData;
struct FValidateAssetsResults;
struct FValidateAssetsSettings;
#ifdef DATAVALIDATION_EditorValidatorSubsystem_generated_h
#error "EditorValidatorSubsystem.generated.h already included, missing '#pragma once' in EditorValidatorSubsystem.h"
#endif
#define DATAVALIDATION_EditorValidatorSubsystem_generated_h

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FValidateAssetsDetails_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAVALIDATION_API UScriptStruct* StaticStruct<struct FValidateAssetsDetails>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FValidateAssetsResults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAVALIDATION_API UScriptStruct* StaticStruct<struct FValidateAssetsResults>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAVALIDATION_API UScriptStruct* StaticStruct<struct FValidateAssetsSettings>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAssetValid); \
	DECLARE_FUNCTION(execIsObjectValid); \
	DECLARE_FUNCTION(execRemoveValidator); \
	DECLARE_FUNCTION(execAddValidator); \
	DECLARE_FUNCTION(execValidateChangelists); \
	DECLARE_FUNCTION(execValidateChangelist); \
	DECLARE_FUNCTION(execValidateAssetsWithSettings);


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorValidatorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorValidatorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_194_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorValidatorSubsystem(UEditorValidatorSubsystem&&); \
	UEditorValidatorSubsystem(const UEditorValidatorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorValidatorSubsystem) \
	NO_API virtual ~UEditorValidatorSubsystem();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_191_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_194_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UEditorValidatorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
