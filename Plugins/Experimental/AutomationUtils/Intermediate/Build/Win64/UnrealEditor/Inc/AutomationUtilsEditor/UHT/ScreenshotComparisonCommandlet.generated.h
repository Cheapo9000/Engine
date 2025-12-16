// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScreenshotComparisonCommandlet.h"

#ifdef AUTOMATIONUTILSEDITOR_ScreenshotComparisonCommandlet_generated_h
#error "ScreenshotComparisonCommandlet.generated.h already included, missing '#pragma once' in ScreenshotComparisonCommandlet.h"
#endif
#define AUTOMATIONUTILSEDITOR_ScreenshotComparisonCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScreenshotComparisonCommandlet ******************************************
struct Z_Construct_UClass_UScreenshotComparisonCommandlet_Statics;
AUTOMATIONUTILSEDITOR_API UClass* Z_Construct_UClass_UScreenshotComparisonCommandlet_NoRegister();

#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUScreenshotComparisonCommandlet(); \
	friend struct ::Z_Construct_UClass_UScreenshotComparisonCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATIONUTILSEDITOR_API UClass* ::Z_Construct_UClass_UScreenshotComparisonCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UScreenshotComparisonCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AutomationUtilsEditor"), Z_Construct_UClass_UScreenshotComparisonCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UScreenshotComparisonCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenshotComparisonCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenshotComparisonCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenshotComparisonCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenshotComparisonCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScreenshotComparisonCommandlet(UScreenshotComparisonCommandlet&&) = delete; \
	UScreenshotComparisonCommandlet(const UScreenshotComparisonCommandlet&) = delete; \
	NO_API virtual ~UScreenshotComparisonCommandlet();


#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_12_INCLASS \
	FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScreenshotComparisonCommandlet;

// ********** End Class UScreenshotComparisonCommandlet ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
