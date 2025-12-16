// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmitToolEditorSettings.h"

#ifdef SUBMITTOOLEDITOR_SubmitToolEditorSettings_generated_h
#error "SubmitToolEditorSettings.generated.h already included, missing '#pragma once' in SubmitToolEditorSettings.h"
#endif
#define SUBMITTOOLEDITOR_SubmitToolEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubmitToolEditorSettings ************************************************
struct Z_Construct_UClass_USubmitToolEditorSettings_Statics;
SUBMITTOOLEDITOR_API UClass* Z_Construct_UClass_USubmitToolEditorSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_SubmitToolEditor_Source_SubmitToolEditor_Private_SubmitToolEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmitToolEditorSettings(); \
	friend struct ::Z_Construct_UClass_USubmitToolEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBMITTOOLEDITOR_API UClass* ::Z_Construct_UClass_USubmitToolEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmitToolEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubmitToolEditor"), Z_Construct_UClass_USubmitToolEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(USubmitToolEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Experimental_SubmitToolEditor_Source_SubmitToolEditor_Private_SubmitToolEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmitToolEditorSettings(USubmitToolEditorSettings&&) = delete; \
	USubmitToolEditorSettings(const USubmitToolEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmitToolEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmitToolEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubmitToolEditorSettings) \
	NO_API virtual ~USubmitToolEditorSettings();


#define FID_Engine_Plugins_Experimental_SubmitToolEditor_Source_SubmitToolEditor_Private_SubmitToolEditorSettings_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_SubmitToolEditor_Source_SubmitToolEditor_Private_SubmitToolEditorSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SubmitToolEditor_Source_SubmitToolEditor_Private_SubmitToolEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SubmitToolEditor_Source_SubmitToolEditor_Private_SubmitToolEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmitToolEditorSettings;

// ********** End Class USubmitToolEditorSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SubmitToolEditor_Source_SubmitToolEditor_Private_SubmitToolEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
