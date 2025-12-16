// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaticCameraTests/AutomatedStaticCameraPerfTestBase.h"

#ifdef AUTOMATEDPERFTESTING_AutomatedStaticCameraPerfTestBase_generated_h
#error "AutomatedStaticCameraPerfTestBase.generated.h already included, missing '#pragma once' in AutomatedStaticCameraPerfTestBase.h"
#endif
#define AUTOMATEDPERFTESTING_AutomatedStaticCameraPerfTestBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSoftObjectPath;

// ********** Begin Class UAutomatedStaticCameraPerfTestProjectSettings ****************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMapFromAssetName);


struct Z_Construct_UClass_UAutomatedStaticCameraPerfTestProjectSettings_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedStaticCameraPerfTestProjectSettings_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedStaticCameraPerfTestProjectSettings(); \
	friend struct ::Z_Construct_UClass_UAutomatedStaticCameraPerfTestProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedStaticCameraPerfTestProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedStaticCameraPerfTestProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedStaticCameraPerfTestProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedStaticCameraPerfTestProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedStaticCameraPerfTestProjectSettings(UAutomatedStaticCameraPerfTestProjectSettings&&) = delete; \
	UAutomatedStaticCameraPerfTestProjectSettings(const UAutomatedStaticCameraPerfTestProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedStaticCameraPerfTestProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedStaticCameraPerfTestProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedStaticCameraPerfTestProjectSettings) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedStaticCameraPerfTestProjectSettings();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_12_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedStaticCameraPerfTestProjectSettings;

// ********** End Class UAutomatedStaticCameraPerfTestProjectSettings ******************************

// ********** Begin Class UAutomatedStaticCameraPerfTestBase ***************************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNextMap); \
	DECLARE_FUNCTION(execScreenshotCamera); \
	DECLARE_FUNCTION(execFinishCamera); \
	DECLARE_FUNCTION(execEvaluateCamera); \
	DECLARE_FUNCTION(execSetUpNextCamera); \
	DECLARE_FUNCTION(execRunTest);


struct Z_Construct_UClass_UAutomatedStaticCameraPerfTestBase_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedStaticCameraPerfTestBase_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedStaticCameraPerfTestBase(); \
	friend struct ::Z_Construct_UClass_UAutomatedStaticCameraPerfTestBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedStaticCameraPerfTestBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedStaticCameraPerfTestBase, UAutomatedPerfTestControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedStaticCameraPerfTestBase_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedStaticCameraPerfTestBase)


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOMATEDPERFTESTING_API UAutomatedStaticCameraPerfTestBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedStaticCameraPerfTestBase(UAutomatedStaticCameraPerfTestBase&&) = delete; \
	UAutomatedStaticCameraPerfTestBase(const UAutomatedStaticCameraPerfTestBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedStaticCameraPerfTestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedStaticCameraPerfTestBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedStaticCameraPerfTestBase) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedStaticCameraPerfTestBase();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_77_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedStaticCameraPerfTestBase;

// ********** End Class UAutomatedStaticCameraPerfTestBase *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_StaticCameraTests_AutomatedStaticCameraPerfTestBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
