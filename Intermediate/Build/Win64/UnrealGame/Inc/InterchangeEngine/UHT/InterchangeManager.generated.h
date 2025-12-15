// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeManager.h"

#ifdef INTERCHANGEENGINE_InterchangeManager_generated_h
#error "InterchangeManager.generated.h already included, missing '#pragma once' in InterchangeManager.h"
#endif
#define INTERCHANGEENGINE_InterchangeManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UInterchangeAssetImportData;
class UInterchangeBlueprintPipelineBase;
class UInterchangeManager;
class UInterchangePipelineBase;
class UInterchangePythonPipelineBase;
class UInterchangeSourceData;
class UInterchangeTranslatorBase;
class UObject;
enum class EInterchangeTranslatorAssetType : uint8;
enum class EInterchangeTranslatorType : uint8;
struct FImportAssetParameters;

// ********** Begin Delegate FOnObjectImportDoneDynamic ********************************************
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_48_DELEGATE \
INTERCHANGEENGINE_API void FOnObjectImportDoneDynamic_DelegateWrapper(const FScriptDelegate& OnObjectImportDoneDynamic, UObject* Object);


// ********** End Delegate FOnObjectImportDoneDynamic **********************************************

// ********** Begin Delegate FOnImportDoneDynamic **************************************************
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_51_DELEGATE \
INTERCHANGEENGINE_API void FOnImportDoneDynamic_DelegateWrapper(const FScriptDelegate& OnImportDoneDynamic, TArray<UObject*> const& Objects);


// ********** End Delegate FOnImportDoneDynamic ****************************************************

// ********** Begin Class UInterchangePipelineStackOverride ****************************************
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_365_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPipeline); \
	DECLARE_FUNCTION(execAddBlueprintPipeline); \
	DECLARE_FUNCTION(execAddPythonPipeline);


struct Z_Construct_UClass_UInterchangePipelineStackOverride_Statics;
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePipelineStackOverride_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_365_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePipelineStackOverride(); \
	friend struct ::Z_Construct_UClass_UInterchangePipelineStackOverride_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEENGINE_API UClass* ::Z_Construct_UClass_UInterchangePipelineStackOverride_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangePipelineStackOverride, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), Z_Construct_UClass_UInterchangePipelineStackOverride_NoRegister) \
	DECLARE_SERIALIZER(UInterchangePipelineStackOverride)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_365_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangePipelineStackOverride(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangePipelineStackOverride(UInterchangePipelineStackOverride&&) = delete; \
	UInterchangePipelineStackOverride(const UInterchangePipelineStackOverride&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangePipelineStackOverride); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePipelineStackOverride); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePipelineStackOverride) \
	INTERCHANGEENGINE_API virtual ~UInterchangePipelineStackOverride();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_362_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_365_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_365_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_365_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_365_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangePipelineStackOverride;

// ********** End Class UInterchangePipelineStackOverride ******************************************

// ********** Begin ScriptStruct FImportAssetParameters ********************************************
struct Z_Construct_UScriptStruct_FImportAssetParameters_Statics;
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_384_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImportAssetParameters_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


struct FImportAssetParameters;
// ********** End ScriptStruct FImportAssetParameters **********************************************

// ********** Begin Class UInterchangeManager ******************************************************
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_452_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitUntilAllTasksDone); \
	DECLARE_FUNCTION(execCancelAllTasks); \
	DECLARE_FUNCTION(execIsObjectBeingImported); \
	DECLARE_FUNCTION(execGetAssetImportData); \
	DECLARE_FUNCTION(execWarnIfInterchangeIsActive); \
	DECLARE_FUNCTION(execIsInterchangeActive); \
	DECLARE_FUNCTION(execGetTranslatorForSourceData); \
	DECLARE_FUNCTION(execGetRegisteredFactoryClass); \
	DECLARE_FUNCTION(execCreateSourceData); \
	DECLARE_FUNCTION(execExportScene); \
	DECLARE_FUNCTION(execExportAsset); \
	DECLARE_FUNCTION(execScriptedImportSceneAsync); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execScriptedReimportAssetAsync); \
	DECLARE_FUNCTION(execReimportAsset); \
	DECLARE_FUNCTION(execScriptedImportAssetAsync); \
	DECLARE_FUNCTION(execImportAsset); \
	DECLARE_FUNCTION(execCanReimport); \
	DECLARE_FUNCTION(execCanTranslateSourceData); \
	DECLARE_FUNCTION(execGetSupportedFormatsForObject); \
	DECLARE_FUNCTION(execGetSupportedAssetTypeFormats); \
	DECLARE_FUNCTION(execGetSupportedFormats); \
	DECLARE_FUNCTION(execGetInterchangeManagerScripted);


struct Z_Construct_UClass_UInterchangeManager_Statics;
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeManager_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_452_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeManager(); \
	friend struct ::Z_Construct_UClass_UInterchangeManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEENGINE_API UClass* ::Z_Construct_UClass_UInterchangeManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), Z_Construct_UClass_UInterchangeManager_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeManager)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_452_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeManager(UInterchangeManager&&) = delete; \
	UInterchangeManager(const UInterchangeManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeManager) \
	INTERCHANGEENGINE_API virtual ~UInterchangeManager();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_449_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_452_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_452_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_452_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_452_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeManager;

// ********** End Class UInterchangeManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
