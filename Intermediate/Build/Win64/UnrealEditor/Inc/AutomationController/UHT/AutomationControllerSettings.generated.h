// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomationControllerSettings.h"

#ifdef AUTOMATIONCONTROLLER_AutomationControllerSettings_generated_h
#error "AutomationControllerSettings.generated.h already included, missing '#pragma once' in AutomationControllerSettings.h"
#endif
#define AUTOMATIONCONTROLLER_AutomationControllerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAutomatedTestFilterBase ******************************************
struct Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics;
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct();


struct FAutomatedTestFilterBase;
// ********** End ScriptStruct FAutomatedTestFilterBase ********************************************

// ********** Begin ScriptStruct FAutomatedTestTagFilter *******************************************
struct Z_Construct_UScriptStruct_FAutomatedTestTagFilter_Statics;
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutomatedTestTagFilter_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct();


struct FAutomatedTestTagFilter;
// ********** End ScriptStruct FAutomatedTestTagFilter *********************************************

// ********** Begin ScriptStruct FAutomatedTestFilter **********************************************
struct Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics;
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct(); \
	typedef FAutomatedTestFilterBase Super;


struct FAutomatedTestFilter;
// ********** End ScriptStruct FAutomatedTestFilter ************************************************

// ********** Begin ScriptStruct FAutomatedTestGroup ***********************************************
struct Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics;
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_191_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct();


struct FAutomatedTestGroup;
// ********** End ScriptStruct FAutomatedTestGroup *************************************************

// ********** Begin Class UAutomationControllerSettings ********************************************
struct Z_Construct_UClass_UAutomationControllerSettings_Statics;
AUTOMATIONCONTROLLER_API UClass* Z_Construct_UClass_UAutomationControllerSettings_NoRegister();

#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_210_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationControllerSettings(); \
	friend struct ::Z_Construct_UClass_UAutomationControllerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATIONCONTROLLER_API UClass* ::Z_Construct_UClass_UAutomationControllerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomationControllerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomationController"), Z_Construct_UClass_UAutomationControllerSettings_NoRegister) \
	DECLARE_SERIALIZER(UAutomationControllerSettings)


#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_210_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOMATIONCONTROLLER_API UAutomationControllerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationControllerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATIONCONTROLLER_API, UAutomationControllerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationControllerSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomationControllerSettings(UAutomationControllerSettings&&) = delete; \
	UAutomationControllerSettings(const UAutomationControllerSettings&) = delete; \
	AUTOMATIONCONTROLLER_API virtual ~UAutomationControllerSettings();


#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_207_PROLOG
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_210_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_210_INCLASS \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_210_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomationControllerSettings;

// ********** End Class UAutomationControllerSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
