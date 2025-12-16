// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonInputSettings.h"

#ifdef COMMONINPUT_CommonInputSettings_generated_h
#error "CommonInputSettings.generated.h already included, missing '#pragma once' in CommonInputSettings.h"
#endif
#define COMMONINPUT_CommonInputSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonInputSettings *****************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsEnhancedInputSupportEnabled);


struct Z_Construct_UClass_UCommonInputSettings_Statics;
COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputSettings(); \
	friend struct ::Z_Construct_UClass_UCommonInputSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONINPUT_API UClass* ::Z_Construct_UClass_UCommonInputSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonInputSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonInput"), Z_Construct_UClass_UCommonInputSettings_NoRegister) \
	DECLARE_SERIALIZER(UCommonInputSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonInputSettings(UCommonInputSettings&&) = delete; \
	UCommonInputSettings(const UCommonInputSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONINPUT_API, UCommonInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputSettings) \
	COMMONINPUT_API virtual ~UCommonInputSettings();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonInputSettings;

// ********** End Class UCommonInputSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
