// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomationUtilsBlueprintLibrary.h"

#ifdef AUTOMATIONUTILS_AutomationUtilsBlueprintLibrary_generated_h
#error "AutomationUtilsBlueprintLibrary.generated.h already included, missing '#pragma once' in AutomationUtilsBlueprintLibrary.h"
#endif
#define AUTOMATIONUTILS_AutomationUtilsBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutomationUtilsBlueprintLibrary *****************************************
#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execTakeGameplayAutomationScreenshot);


struct Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics;
AUTOMATIONUTILS_API UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationUtilsBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATIONUTILS_API UClass* ::Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomationUtilsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomationUtils"), Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAutomationUtilsBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOMATIONUTILS_API UAutomationUtilsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationUtilsBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATIONUTILS_API, UAutomationUtilsBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationUtilsBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomationUtilsBlueprintLibrary(UAutomationUtilsBlueprintLibrary&&) = delete; \
	UAutomationUtilsBlueprintLibrary(const UAutomationUtilsBlueprintLibrary&) = delete; \
	AUTOMATIONUTILS_API virtual ~UAutomationUtilsBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomationUtilsBlueprintLibrary;

// ********** End Class UAutomationUtilsBlueprintLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
