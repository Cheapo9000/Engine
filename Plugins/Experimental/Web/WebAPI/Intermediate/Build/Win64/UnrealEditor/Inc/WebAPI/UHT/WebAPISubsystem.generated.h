// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebAPISubsystem.h"

#ifdef WEBAPI_WebAPISubsystem_generated_h
#error "WebAPISubsystem.generated.h already included, missing '#pragma once' in WebAPISubsystem.h"
#endif
#define WEBAPI_WebAPISubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWebAPIPooledOperation ********************************************
struct Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics;
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics; \
	WEBAPI_API static class UScriptStruct* StaticStruct();


struct FWebAPIPooledOperation;
// ********** End ScriptStruct FWebAPIPooledOperation **********************************************

// ********** Begin Class UWebAPISubsystem *********************************************************
struct Z_Construct_UClass_UWebAPISubsystem_Statics;
WEBAPI_API UClass* Z_Construct_UClass_UWebAPISubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPISubsystem(); \
	friend struct ::Z_Construct_UClass_UWebAPISubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPI_API UClass* ::Z_Construct_UClass_UWebAPISubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPISubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPI"), Z_Construct_UClass_UWebAPISubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWebAPISubsystem)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPISubsystem(UWebAPISubsystem&&) = delete; \
	UWebAPISubsystem(const UWebAPISubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebAPISubsystem) \
	NO_API virtual ~UWebAPISubsystem();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPISubsystem;

// ********** End Class UWebAPISubsystem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
