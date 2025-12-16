// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorValidatorSubsystem.h"

#ifdef DATAVALIDATION_EditorValidatorSubsystem_generated_h
#error "EditorValidatorSubsystem.generated.h already included, missing '#pragma once' in EditorValidatorSubsystem.h"
#endif
#define DATAVALIDATION_EditorValidatorSubsystem_generated_h

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

// ********** Begin ScriptStruct FValidateAssetsDetails ********************************************
struct Z_Construct_UScriptStruct_FValidateAssetsDetails_Statics;
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FValidateAssetsDetails_Statics; \
	DATAVALIDATION_API static class UScriptStruct* StaticStruct();


struct FValidateAssetsDetails;
// ********** End ScriptStruct FValidateAssetsDetails **********************************************

// ********** Begin ScriptStruct FValidatorStatistics **********************************************
struct Z_Construct_UScriptStruct_FValidatorStatistics_Statics;
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FValidatorStatistics_Statics; \
	DATAVALIDATION_API static class UScriptStruct* StaticStruct();


struct FValidatorStatistics;
// ********** End ScriptStruct FValidatorStatistics ************************************************

// ********** Begin ScriptStruct FValidateAssetsResults ********************************************
struct Z_Construct_UScriptStruct_FValidateAssetsResults_Statics;
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FValidateAssetsResults_Statics; \
	DATAVALIDATION_API static class UScriptStruct* StaticStruct();


struct FValidateAssetsResults;
// ********** End ScriptStruct FValidateAssetsResults **********************************************

// ********** Begin ScriptStruct FValidateAssetsSettings *******************************************
struct Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics;
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics; \
	DATAVALIDATION_API static class UScriptStruct* StaticStruct();


struct FValidateAssetsSettings;
// ********** End ScriptStruct FValidateAssetsSettings *********************************************

// ********** Begin Class UEditorValidatorSubsystem ************************************************
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_252_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAssetValid); \
	DECLARE_FUNCTION(execIsObjectValid); \
	DECLARE_FUNCTION(execRemoveValidator); \
	DECLARE_FUNCTION(execAddValidator); \
	DECLARE_FUNCTION(execValidateChangelists); \
	DECLARE_FUNCTION(execValidateChangelist); \
	DECLARE_FUNCTION(execValidateAssetsWithSettings);


struct Z_Construct_UClass_UEditorValidatorSubsystem_Statics;
DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorSubsystem_NoRegister();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_252_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorValidatorSubsystem(); \
	friend struct ::Z_Construct_UClass_UEditorValidatorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAVALIDATION_API UClass* ::Z_Construct_UClass_UEditorValidatorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorValidatorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), Z_Construct_UClass_UEditorValidatorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEditorValidatorSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_252_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorValidatorSubsystem(UEditorValidatorSubsystem&&) = delete; \
	UEditorValidatorSubsystem(const UEditorValidatorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAVALIDATION_API, UEditorValidatorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorValidatorSubsystem) \
	DATAVALIDATION_API virtual ~UEditorValidatorSubsystem();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_249_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_252_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_252_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_252_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_252_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorValidatorSubsystem;

// ********** End Class UEditorValidatorSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
