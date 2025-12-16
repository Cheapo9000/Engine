// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/WebAPIOpenAPIFactoryBase.h"

#ifdef WEBAPIOPENAPI_WebAPIOpenAPIFactoryBase_generated_h
#error "WebAPIOpenAPIFactoryBase.generated.h already included, missing '#pragma once' in WebAPIOpenAPIFactoryBase.h"
#endif
#define WEBAPIOPENAPI_WebAPIOpenAPIFactoryBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPIOpenAPIFactoryBase ************************************************
struct Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_Statics;
WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIOpenAPIFactoryBase(); \
	friend struct ::Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIOPENAPI_API UClass* ::Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIOpenAPIFactoryBase, UWebAPIDefinitionFactory, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WebAPIOpenAPI"), Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIOpenAPIFactoryBase)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIOpenAPIFactoryBase(UWebAPIOpenAPIFactoryBase&&) = delete; \
	UWebAPIOpenAPIFactoryBase(const UWebAPIOpenAPIFactoryBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIOpenAPIFactoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIOpenAPIFactoryBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWebAPIOpenAPIFactoryBase) \
	NO_API virtual ~UWebAPIOpenAPIFactoryBase();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIOpenAPIFactoryBase;

// ********** End Class UWebAPIOpenAPIFactoryBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
