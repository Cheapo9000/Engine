// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebAPIUtilities.h"

#ifdef WEBAPI_WebAPIUtilities_generated_h
#error "WebAPIUtilities.generated.h already included, missing '#pragma once' in WebAPIUtilities.h"
#endif
#define WEBAPI_WebAPIUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWebAPIMessageResponse;

// ********** Begin Class UWebAPIUtilities *********************************************************
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHostFromUrl); \
	DECLARE_FUNCTION(execGetResponseMessage);


struct Z_Construct_UClass_UWebAPIUtilities_Statics;
WEBAPI_API UClass* Z_Construct_UClass_UWebAPIUtilities_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIUtilities(); \
	friend struct ::Z_Construct_UClass_UWebAPIUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPI_API UClass* ::Z_Construct_UClass_UWebAPIUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPIUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPI"), Z_Construct_UClass_UWebAPIUtilities_NoRegister) \
	DECLARE_SERIALIZER(UWebAPIUtilities)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPIUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPIUtilities(UWebAPIUtilities&&) = delete; \
	UWebAPIUtilities(const UWebAPIUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPIUtilities) \
	NO_API virtual ~UWebAPIUtilities();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPIUtilities;

// ********** End Class UWebAPIUtilities ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
