// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebAPILiquidJSCodeGenerator.h"

#ifdef WEBAPILIQUIDJS_WebAPILiquidJSCodeGenerator_generated_h
#error "WebAPILiquidJSCodeGenerator.generated.h already included, missing '#pragma once' in WebAPILiquidJSCodeGenerator.h"
#endif
#define WEBAPILIQUIDJS_WebAPILiquidJSCodeGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPILiquidJSCodeGenerator *********************************************
struct Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_Statics;
WEBAPILIQUIDJS_API UClass* Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPILiquidJSCodeGenerator(); \
	friend struct ::Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPILIQUIDJS_API UClass* ::Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPILiquidJSCodeGenerator, UWebAPICodeGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPILiquidJS"), Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_NoRegister) \
	DECLARE_SERIALIZER(UWebAPILiquidJSCodeGenerator)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPILiquidJSCodeGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPILiquidJSCodeGenerator(UWebAPILiquidJSCodeGenerator&&) = delete; \
	UWebAPILiquidJSCodeGenerator(const UWebAPILiquidJSCodeGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPILiquidJSCodeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPILiquidJSCodeGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPILiquidJSCodeGenerator) \
	NO_API virtual ~UWebAPILiquidJSCodeGenerator();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPILiquidJSCodeGenerator;

// ********** End Class UWebAPILiquidJSCodeGenerator ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
