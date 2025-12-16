// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputPlatformSettings.h"

#ifdef ENHANCEDINPUT_EnhancedInputPlatformSettings_generated_h
#error "EnhancedInputPlatformSettings.generated.h already included, missing '#pragma once' in EnhancedInputPlatformSettings.h"
#endif
#define ENHANCEDINPUT_EnhancedInputPlatformSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputMappingContext;

// ********** Begin Class UEnhancedInputPlatformData ***********************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetContextRedirect);


struct Z_Construct_UClass_UEnhancedInputPlatformData_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputPlatformData_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputPlatformData(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputPlatformData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UEnhancedInputPlatformData_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputPlatformData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UEnhancedInputPlatformData_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputPlatformData)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputPlatformData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputPlatformData(UEnhancedInputPlatformData&&) = delete; \
	UEnhancedInputPlatformData(const UEnhancedInputPlatformData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputPlatformData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputPlatformData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputPlatformData) \
	ENHANCEDINPUT_API virtual ~UEnhancedInputPlatformData();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_19_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputPlatformData;

// ********** End Class UEnhancedInputPlatformData *************************************************

// ********** Begin Class UEnhancedInputPlatformSettings *******************************************
struct Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputPlatformSettings_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputPlatformSettings(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UEnhancedInputPlatformSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputPlatformSettings, UPlatformSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UEnhancedInputPlatformSettings_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputPlatformSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputPlatformSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputPlatformSettings(UEnhancedInputPlatformSettings&&) = delete; \
	UEnhancedInputPlatformSettings(const UEnhancedInputPlatformSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputPlatformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputPlatformSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputPlatformSettings) \
	ENHANCEDINPUT_API virtual ~UEnhancedInputPlatformSettings();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_50_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputPlatformSettings;

// ********** End Class UEnhancedInputPlatformSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
