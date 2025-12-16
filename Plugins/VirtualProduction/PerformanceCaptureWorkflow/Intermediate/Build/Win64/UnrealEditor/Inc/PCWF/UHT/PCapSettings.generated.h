// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCapSettings.h"

#ifdef PERFORMANCECAPTUREWORKFLOW_PCapSettings_generated_h
#error "PCapSettings.generated.h already included, missing '#pragma once' in PCapSettings.h"
#endif
#define PERFORMANCECAPTUREWORKFLOW_PCapSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCapDataTable;
class UPCapSessionTemplate;
class UPerformanceCaptureSettings;

// ********** Begin Delegate FOnPCapSettingsChanged ************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_106_DELEGATE \
static void FOnPCapSettingsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPCapSettingsChanged);


// ********** End Delegate FOnPCapSettingsChanged **************************************************

// ********** Begin Class UPerformanceCaptureSettings **********************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDefaultSessionTemplate); \
	DECLARE_FUNCTION(execSetProductionTable); \
	DECLARE_FUNCTION(execSetSessionTable); \
	DECLARE_FUNCTION(execShowPerformanceCaptureProjectSettings); \
	DECLARE_FUNCTION(execGetPerformanceCaptureSettings);


struct Z_Construct_UClass_UPerformanceCaptureSettings_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPerformanceCaptureSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerformanceCaptureSettings(); \
	friend struct ::Z_Construct_UClass_UPerformanceCaptureSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPerformanceCaptureSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPerformanceCaptureSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPerformanceCaptureSettings_NoRegister) \
	DECLARE_SERIALIZER(UPerformanceCaptureSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("PerformanceCaptureWorkflow");} \



#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerformanceCaptureSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPerformanceCaptureSettings(UPerformanceCaptureSettings&&) = delete; \
	UPerformanceCaptureSettings(const UPerformanceCaptureSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerformanceCaptureSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerformanceCaptureSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerformanceCaptureSettings) \
	NO_API virtual ~UPerformanceCaptureSettings();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_23_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPerformanceCaptureSettings;

// ********** End Class UPerformanceCaptureSettings ************************************************

// ********** Begin Class UPCapDialogObject ********************************************************
struct Z_Construct_UClass_UPCapDialogObject_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPCapDialogObject_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapDialogObject(); \
	friend struct ::Z_Construct_UClass_UPCapDialogObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPCapDialogObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapDialogObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPCapDialogObject_NoRegister) \
	DECLARE_SERIALIZER(UPCapDialogObject)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCapDialogObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapDialogObject(UPCapDialogObject&&) = delete; \
	UPCapDialogObject(const UPCapDialogObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCapDialogObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapDialogObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCapDialogObject) \
	NO_API virtual ~UPCapDialogObject();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_121_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapDialogObject;

// ********** End Class UPCapDialogObject **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
