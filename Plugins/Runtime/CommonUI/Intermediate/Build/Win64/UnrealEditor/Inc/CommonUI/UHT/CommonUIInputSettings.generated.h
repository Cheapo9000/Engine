// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/CommonUIInputSettings.h"

#ifdef COMMONUI_CommonUIInputSettings_generated_h
#error "CommonUIInputSettings.generated.h already included, missing '#pragma once' in CommonUIInputSettings.h"
#endif
#define COMMONUI_CommonUIInputSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FUIActionKeyMapping ***********************************************
struct Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


struct FUIActionKeyMapping;
// ********** End ScriptStruct FUIActionKeyMapping *************************************************

// ********** Begin ScriptStruct FUIInputAction ****************************************************
struct Z_Construct_UScriptStruct_FUIInputAction_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUIInputAction_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


struct FUIInputAction;
// ********** End ScriptStruct FUIInputAction ******************************************************

// ********** Begin ScriptStruct FCommonAnalogCursorSettings ***************************************
struct Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


struct FCommonAnalogCursorSettings;
// ********** End ScriptStruct FCommonAnalogCursorSettings *****************************************

// ********** Begin Class UCommonUIInputSettings ***************************************************
struct Z_Construct_UClass_UCommonUIInputSettings_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonUIInputSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUIInputSettings(); \
	friend struct ::Z_Construct_UClass_UCommonUIInputSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonUIInputSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUIInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonUIInputSettings_NoRegister) \
	DECLARE_SERIALIZER(UCommonUIInputSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonUIInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUIInputSettings(UCommonUIInputSettings&&) = delete; \
	UCommonUIInputSettings(const UCommonUIInputSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonUIInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIInputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUIInputSettings) \
	COMMONUI_API virtual ~UCommonUIInputSettings();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_109_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_112_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUIInputSettings;

// ********** End Class UCommonUIInputSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
