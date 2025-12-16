// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebAPILiquidJSSettings.h"

#ifdef WEBAPILIQUIDJS_WebAPILiquidJSSettings_generated_h
#error "WebAPILiquidJSSettings.generated.h already included, missing '#pragma once' in WebAPILiquidJSSettings.h"
#endif
#define WEBAPILIQUIDJS_WebAPILiquidJSSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPILiquidJSSettings **************************************************
struct Z_Construct_UClass_UWebAPILiquidJSSettings_Statics;
WEBAPILIQUIDJS_API UClass* Z_Construct_UClass_UWebAPILiquidJSSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPILiquidJSSettings(); \
	friend struct ::Z_Construct_UClass_UWebAPILiquidJSSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPILIQUIDJS_API UClass* ::Z_Construct_UClass_UWebAPILiquidJSSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPILiquidJSSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WebAPILiquidJS"), Z_Construct_UClass_UWebAPILiquidJSSettings_NoRegister) \
	DECLARE_SERIALIZER(UWebAPILiquidJSSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPILiquidJSSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPILiquidJSSettings(UWebAPILiquidJSSettings&&) = delete; \
	UWebAPILiquidJSSettings(const UWebAPILiquidJSSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPILiquidJSSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPILiquidJSSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPILiquidJSSettings) \
	NO_API virtual ~UWebAPILiquidJSSettings();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPILiquidJSSettings;

// ********** End Class UWebAPILiquidJSSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
