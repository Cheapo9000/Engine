// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/TestSettings.h"

#ifdef TEDSSETTINGS_TestSettings_generated_h
#error "TestSettings.generated.h already included, missing '#pragma once' in TestSettings.h"
#endif
#define TEDSSETTINGS_TestSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestSettings ************************************************************
struct Z_Construct_UClass_UTestSettings_Statics;
TEDSSETTINGS_API UClass* Z_Construct_UClass_UTestSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Tests_TestSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestSettings(); \
	friend struct ::Z_Construct_UClass_UTestSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSSETTINGS_API UClass* ::Z_Construct_UClass_UTestSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsSettings"), Z_Construct_UClass_UTestSettings_NoRegister) \
	DECLARE_SERIALIZER(UTestSettings)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Tests_TestSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestSettings(UTestSettings&&) = delete; \
	UTestSettings(const UTestSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestSettings) \
	NO_API virtual ~UTestSettings();


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Tests_TestSettings_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Tests_TestSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Tests_TestSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Tests_TestSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestSettings;

// ********** End Class UTestSettings **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsSettings_Tests_TestSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
