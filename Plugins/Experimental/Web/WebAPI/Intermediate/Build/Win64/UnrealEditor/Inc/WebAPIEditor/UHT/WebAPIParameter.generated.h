// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dom/WebAPIParameter.h"

#ifdef WEBAPIEDITOR_WebAPIParameter_generated_h
#error "WebAPIParameter.generated.h already included, missing '#pragma once' in WebAPIParameter.h"
#endif
#define WEBAPIEDITOR_WebAPIParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPIParameter *********************************************************
struct Z_Construct_UClass_UWebAPIParameter_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIParameter_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIParameter(); \
	friend struct ::Z_Construct_UClass_UWebAPIParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPIParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIParameter, UWebAPIModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPIParameter_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIParameter)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPIParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIParameter(UWebAPIParameter&&) = delete; \
	UWebAPIParameter(const UWebAPIParameter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPIParameter) \
	NO_API virtual ~UWebAPIParameter();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIParameter;

// ********** End Class UWebAPIParameter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
