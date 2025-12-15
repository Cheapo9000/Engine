// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DocumentationSettings.h"

#ifdef DOCUMENTATION_DocumentationSettings_generated_h
#error "DocumentationSettings.generated.h already included, missing '#pragma once' in DocumentationSettings.h"
#endif
#define DOCUMENTATION_DocumentationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDocumentationBaseUrl *********************************************
struct Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics;
#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics; \
	DOCUMENTATION_API static class UScriptStruct* StaticStruct();


struct FDocumentationBaseUrl;
// ********** End ScriptStruct FDocumentationBaseUrl ***********************************************

// ********** Begin Class UDocumentationSettings ***************************************************
struct Z_Construct_UClass_UDocumentationSettings_Statics;
DOCUMENTATION_API UClass* Z_Construct_UClass_UDocumentationSettings_NoRegister();

#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDocumentationSettings(); \
	friend struct ::Z_Construct_UClass_UDocumentationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DOCUMENTATION_API UClass* ::Z_Construct_UClass_UDocumentationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDocumentationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Documentation"), Z_Construct_UClass_UDocumentationSettings_NoRegister) \
	DECLARE_SERIALIZER(UDocumentationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDocumentationSettings(UDocumentationSettings&&) = delete; \
	UDocumentationSettings(const UDocumentationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentationSettings) \
	NO_API virtual ~UDocumentationSettings();


#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_37_PROLOG
#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDocumentationSettings;

// ********** End Class UDocumentationSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
