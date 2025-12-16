// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Security/WebAPIAuthentication.h"

#ifdef WEBAPI_WebAPIAuthentication_generated_h
#error "WebAPIAuthentication.generated.h already included, missing '#pragma once' in WebAPIAuthentication.h"
#endif
#define WEBAPI_WebAPIAuthentication_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPIAuthenticationSettings ********************************************
struct Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics;
WEBAPI_API UClass* Z_Construct_UClass_UWebAPIAuthenticationSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIAuthenticationSettings(); \
	friend struct ::Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPI_API UClass* ::Z_Construct_UClass_UWebAPIAuthenticationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIAuthenticationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WebAPI"), Z_Construct_UClass_UWebAPIAuthenticationSettings_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIAuthenticationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPIAuthenticationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIAuthenticationSettings(UWebAPIAuthenticationSettings&&) = delete; \
	UWebAPIAuthenticationSettings(const UWebAPIAuthenticationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIAuthenticationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIAuthenticationSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPIAuthenticationSettings) \
	NO_API virtual ~UWebAPIAuthenticationSettings();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIAuthenticationSettings;

// ********** End Class UWebAPIAuthenticationSettings **********************************************

// ********** Begin Class UWebAPIOAuthSettings *****************************************************
struct Z_Construct_UClass_UWebAPIOAuthSettings_Statics;
WEBAPI_API UClass* Z_Construct_UClass_UWebAPIOAuthSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIOAuthSettings(); \
	friend struct ::Z_Construct_UClass_UWebAPIOAuthSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPI_API UClass* ::Z_Construct_UClass_UWebAPIOAuthSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIOAuthSettings, UWebAPIAuthenticationSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WebAPI"), Z_Construct_UClass_UWebAPIOAuthSettings_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIOAuthSettings)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIOAuthSettings(UWebAPIOAuthSettings&&) = delete; \
	UWebAPIOAuthSettings(const UWebAPIOAuthSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIOAuthSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIOAuthSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebAPIOAuthSettings) \
	NO_API virtual ~UWebAPIOAuthSettings();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIOAuthSettings;

// ********** End Class UWebAPIOAuthSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
