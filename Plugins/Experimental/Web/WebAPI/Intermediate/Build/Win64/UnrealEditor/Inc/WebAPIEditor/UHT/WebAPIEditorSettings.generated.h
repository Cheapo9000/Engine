// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebAPIEditorSettings.h"

#ifdef WEBAPIEDITOR_WebAPIEditorSettings_generated_h
#error "WebAPIEditorSettings.generated.h already included, missing '#pragma once' in WebAPIEditorSettings.h"
#endif
#define WEBAPIEDITOR_WebAPIEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPIEditorSettings ****************************************************
struct Z_Construct_UClass_UWebAPIEditorSettings_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIEditorSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIEditorSettings(); \
	friend struct ::Z_Construct_UClass_UWebAPIEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPIEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPIEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPIEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIEditorSettings(UWebAPIEditorSettings&&) = delete; \
	UWebAPIEditorSettings(const UWebAPIEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPIEditorSettings) \
	NO_API virtual ~UWebAPIEditorSettings();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIEditorSettings;

// ********** End Class UWebAPIEditorSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
