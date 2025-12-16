// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebAPIDeveloperSettings.h"

#ifdef WEBAPI_WebAPIDeveloperSettings_generated_h
#error "WebAPIDeveloperSettings.generated.h already included, missing '#pragma once' in WebAPIDeveloperSettings.h"
#endif
#define WEBAPI_WebAPIDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPIDeveloperSettings *************************************************
struct Z_Construct_UClass_UWebAPIDeveloperSettings_Statics;
WEBAPI_API UClass* Z_Construct_UClass_UWebAPIDeveloperSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UWebAPIDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPI_API UClass* ::Z_Construct_UClass_UWebAPIDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WebAPI"), Z_Construct_UClass_UWebAPIDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIDeveloperSettings(UWebAPIDeveloperSettings&&) = delete; \
	UWebAPIDeveloperSettings(const UWebAPIDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIDeveloperSettings); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWebAPIDeveloperSettings) \
	NO_API virtual ~UWebAPIDeveloperSettings();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIDeveloperSettings;

// ********** End Class UWebAPIDeveloperSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
