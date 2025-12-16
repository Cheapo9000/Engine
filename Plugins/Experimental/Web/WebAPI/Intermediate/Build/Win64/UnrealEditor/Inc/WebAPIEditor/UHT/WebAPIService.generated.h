// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dom/WebAPIService.h"

#ifdef WEBAPIEDITOR_WebAPIService_generated_h
#error "WebAPIService.generated.h already included, missing '#pragma once' in WebAPIService.h"
#endif
#define WEBAPIEDITOR_WebAPIService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPIService ***********************************************************
struct Z_Construct_UClass_UWebAPIService_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIService_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIService(); \
	friend struct ::Z_Construct_UClass_UWebAPIService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPIService_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIService, UWebAPIModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPIService_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIService)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEBAPIEDITOR_API UWebAPIService(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIService(UWebAPIService&&) = delete; \
	UWebAPIService(const UWebAPIService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEBAPIEDITOR_API, UWebAPIService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIService); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPIService) \
	WEBAPIEDITOR_API virtual ~UWebAPIService();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIService;

// ********** End Class UWebAPIService *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
