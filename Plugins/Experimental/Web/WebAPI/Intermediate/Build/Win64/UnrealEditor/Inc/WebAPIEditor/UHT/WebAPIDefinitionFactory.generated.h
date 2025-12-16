// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/WebAPIDefinitionFactory.h"

#ifdef WEBAPIEDITOR_WebAPIDefinitionFactory_generated_h
#error "WebAPIDefinitionFactory.generated.h already included, missing '#pragma once' in WebAPIDefinitionFactory.h"
#endif
#define WEBAPIEDITOR_WebAPIDefinitionFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPIDefinitionFactory *************************************************
struct Z_Construct_UClass_UWebAPIDefinitionFactory_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIDefinitionFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIDefinitionFactory(); \
	friend struct ::Z_Construct_UClass_UWebAPIDefinitionFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPIDefinitionFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIDefinitionFactory, UFactory, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPIDefinitionFactory_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIDefinitionFactory)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIDefinitionFactory(UWebAPIDefinitionFactory&&) = delete; \
	UWebAPIDefinitionFactory(const UWebAPIDefinitionFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIDefinitionFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIDefinitionFactory); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWebAPIDefinitionFactory) \
	NO_API virtual ~UWebAPIDefinitionFactory();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIDefinitionFactory;

// ********** End Class UWebAPIDefinitionFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
