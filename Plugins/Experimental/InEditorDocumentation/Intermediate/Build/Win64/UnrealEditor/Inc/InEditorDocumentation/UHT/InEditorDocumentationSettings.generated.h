// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InEditorDocumentationSettings.h"

#ifdef INEDITORDOCUMENTATION_InEditorDocumentationSettings_generated_h
#error "InEditorDocumentationSettings.generated.h already included, missing '#pragma once' in InEditorDocumentationSettings.h"
#endif
#define INEDITORDOCUMENTATION_InEditorDocumentationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInEditorDocumentationSettings *******************************************
struct Z_Construct_UClass_UInEditorDocumentationSettings_Statics;
INEDITORDOCUMENTATION_API UClass* Z_Construct_UClass_UInEditorDocumentationSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_InEditorDocumentation_Source_InEditorDocumentation_Public_InEditorDocumentationSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInEditorDocumentationSettings(); \
	friend struct ::Z_Construct_UClass_UInEditorDocumentationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INEDITORDOCUMENTATION_API UClass* ::Z_Construct_UClass_UInEditorDocumentationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInEditorDocumentationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/InEditorDocumentation"), Z_Construct_UClass_UInEditorDocumentationSettings_NoRegister) \
	DECLARE_SERIALIZER(UInEditorDocumentationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_InEditorDocumentation_Source_InEditorDocumentation_Public_InEditorDocumentationSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInEditorDocumentationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInEditorDocumentationSettings(UInEditorDocumentationSettings&&) = delete; \
	UInEditorDocumentationSettings(const UInEditorDocumentationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInEditorDocumentationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInEditorDocumentationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInEditorDocumentationSettings) \
	NO_API virtual ~UInEditorDocumentationSettings();


#define FID_Engine_Plugins_Experimental_InEditorDocumentation_Source_InEditorDocumentation_Public_InEditorDocumentationSettings_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_InEditorDocumentation_Source_InEditorDocumentation_Public_InEditorDocumentationSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_InEditorDocumentation_Source_InEditorDocumentation_Public_InEditorDocumentationSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InEditorDocumentation_Source_InEditorDocumentation_Public_InEditorDocumentationSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInEditorDocumentationSettings;

// ********** End Class UInEditorDocumentationSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_InEditorDocumentation_Source_InEditorDocumentation_Public_InEditorDocumentationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
