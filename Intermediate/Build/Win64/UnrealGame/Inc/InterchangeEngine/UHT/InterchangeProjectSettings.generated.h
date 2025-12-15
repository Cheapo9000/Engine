// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeProjectSettings.h"

#ifdef INTERCHANGEENGINE_InterchangeProjectSettings_generated_h
#error "InterchangeProjectSettings.generated.h already included, missing '#pragma once' in InterchangeProjectSettings.h"
#endif
#define INTERCHANGEENGINE_InterchangeProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangePipelineBase;
class UInterchangeSourceData;
struct FInterchangePipelineStack;
struct FInterchangeTranslatorPipelines;

// ********** Begin ScriptStruct FInterchangeTranslatorPipelines ***********************************
struct Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics;
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


struct FInterchangeTranslatorPipelines;
// ********** End ScriptStruct FInterchangeTranslatorPipelines *************************************

// ********** Begin ScriptStruct FInterchangePipelineStack *****************************************
struct Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics;
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


struct FInterchangePipelineStack;
// ********** End ScriptStruct FInterchangePipelineStack *******************************************

// ********** Begin ScriptStruct FInterchangePerTranslatorDialogOverride ***************************
struct Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics;
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


struct FInterchangePerTranslatorDialogOverride;
// ********** End ScriptStruct FInterchangePerTranslatorDialogOverride *****************************

// ********** Begin ScriptStruct FInterchangeDialogOverride ****************************************
struct Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics;
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


struct FInterchangeDialogOverride;
// ********** End ScriptStruct FInterchangeDialogOverride ******************************************

// ********** Begin ScriptStruct FInterchangeImportSettings ****************************************
struct Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics;
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


struct FInterchangeImportSettings;
// ********** End ScriptStruct FInterchangeImportSettings ******************************************

// ********** Begin ScriptStruct FInterchangeSceneImportSettings ***********************************
struct Z_Construct_UScriptStruct_FInterchangeSceneImportSettings_Statics;
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeSceneImportSettings_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FInterchangeImportSettings Super;


struct FInterchangeSceneImportSettings;
// ********** End ScriptStruct FInterchangeSceneImportSettings *************************************

// ********** Begin ScriptStruct FInterchangeContentImportSettings *********************************
struct Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics;
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FInterchangeImportSettings Super;


struct FInterchangeContentImportSettings;
// ********** End ScriptStruct FInterchangeContentImportSettings ***********************************

// ********** Begin ScriptStruct FInterchangeGroup *************************************************
struct Z_Construct_UScriptStruct_FInterchangeGroup_Statics;
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeGroup_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


struct FInterchangeGroup;
// ********** End ScriptStruct FInterchangeGroup ***************************************************

// ********** Begin Class UInterchangeProjectSettings **********************************************
struct Z_Construct_UClass_UInterchangeProjectSettings_Statics;
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeProjectSettings_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeProjectSettings(); \
	friend struct ::Z_Construct_UClass_UInterchangeProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEENGINE_API UClass* ::Z_Construct_UClass_UInterchangeProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), Z_Construct_UClass_UInterchangeProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_170_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeProjectSettings(UInterchangeProjectSettings&&) = delete; \
	UInterchangeProjectSettings(const UInterchangeProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeProjectSettings) \
	INTERCHANGEENGINE_API virtual ~UInterchangeProjectSettings();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_167_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_170_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeProjectSettings;

// ********** End Class UInterchangeProjectSettings ************************************************

// ********** Begin Class UInterchangeProjectSettingsScript ****************************************
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_243_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPipelineStackFromSourceData); \
	DECLARE_FUNCTION(execGetPipelineArrayFromTranslatorPipelines); \
	DECLARE_FUNCTION(execGetPipelineArrayFromPipelineStack);


struct Z_Construct_UClass_UInterchangeProjectSettingsScript_Statics;
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeProjectSettingsScript_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_243_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeProjectSettingsScript(); \
	friend struct ::Z_Construct_UClass_UInterchangeProjectSettingsScript_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEENGINE_API UClass* ::Z_Construct_UClass_UInterchangeProjectSettingsScript_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeProjectSettingsScript, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), Z_Construct_UClass_UInterchangeProjectSettingsScript_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeProjectSettingsScript)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_243_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeProjectSettingsScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeProjectSettingsScript(UInterchangeProjectSettingsScript&&) = delete; \
	UInterchangeProjectSettingsScript(const UInterchangeProjectSettingsScript&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeProjectSettingsScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeProjectSettingsScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeProjectSettingsScript) \
	INTERCHANGEENGINE_API virtual ~UInterchangeProjectSettingsScript();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_240_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_243_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_243_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_243_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_243_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeProjectSettingsScript;

// ********** End Class UInterchangeProjectSettingsScript ******************************************

// ********** Begin Class UInterchangeEditorSettings ***********************************************
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_273_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelectableItems); \
	DECLARE_FUNCTION(execSetUsedGroupName); \
	DECLARE_FUNCTION(execGetUsedGroupName);


struct Z_Construct_UClass_UInterchangeEditorSettings_Statics;
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeEditorSettings_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_273_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeEditorSettings(); \
	friend struct ::Z_Construct_UClass_UInterchangeEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEENGINE_API UClass* ::Z_Construct_UClass_UInterchangeEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), Z_Construct_UClass_UInterchangeEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_273_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeEditorSettings(UInterchangeEditorSettings&&) = delete; \
	UInterchangeEditorSettings(const UInterchangeEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeEditorSettings) \
	INTERCHANGEENGINE_API virtual ~UInterchangeEditorSettings();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_270_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_273_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_273_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_273_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_273_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeEditorSettings;

// ********** End Class UInterchangeEditorSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
