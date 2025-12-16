// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUISettings.h"

#ifdef COMMONUI_CommonUISettings_generated_h
#error "CommonUISettings.generated.h already included, missing '#pragma once' in CommonUISettings.h"
#endif
#define COMMONUI_CommonUISettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonUISettings ********************************************************
struct Z_Construct_UClass_UCommonUISettings_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonUISettings_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUISettings(); \
	friend struct ::Z_Construct_UClass_UCommonUISettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonUISettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUISettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonUISettings_NoRegister) \
	DECLARE_SERIALIZER(UCommonUISettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISettings_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUISettings(UCommonUISettings&&) = delete; \
	UCommonUISettings(const UCommonUISettings&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUISettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUISettings)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISettings_h_32_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUISettings;

// ********** End Class UCommonUISettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISettings_h

// ********** Begin Enum ECommonButtonAcceptKeyHandling ********************************************
#define FOREACH_ENUM_ECOMMONBUTTONACCEPTKEYHANDLING(op) \
	op(ECommonButtonAcceptKeyHandling::Ignore) \
	op(ECommonButtonAcceptKeyHandling::TriggerClick) 

enum class ECommonButtonAcceptKeyHandling;
template<> struct TIsUEnumClass<ECommonButtonAcceptKeyHandling> { enum { Value = true }; };
template<> COMMONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<ECommonButtonAcceptKeyHandling>();
// ********** End Enum ECommonButtonAcceptKeyHandling **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
