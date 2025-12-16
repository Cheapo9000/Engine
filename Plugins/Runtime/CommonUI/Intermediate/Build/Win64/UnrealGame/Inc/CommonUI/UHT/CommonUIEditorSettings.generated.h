// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUIEditorSettings.h"

#ifdef COMMONUI_CommonUIEditorSettings_generated_h
#error "CommonUIEditorSettings.generated.h already included, missing '#pragma once' in CommonUIEditorSettings.h"
#endif
#define COMMONUI_CommonUIEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonUIEditorSettings **************************************************
struct Z_Construct_UClass_UCommonUIEditorSettings_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonUIEditorSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUIEditorSettings(); \
	friend struct ::Z_Construct_UClass_UCommonUIEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonUIEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUIEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonUIEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UCommonUIEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUIEditorSettings(UCommonUIEditorSettings&&) = delete; \
	UCommonUIEditorSettings(const UCommonUIEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonUIEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUIEditorSettings) \
	COMMONUI_API virtual ~UCommonUIEditorSettings();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUIEditorSettings;

// ********** End Class UCommonUIEditorSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
