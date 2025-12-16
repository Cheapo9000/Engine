// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JsonBlueprintFunctionLibrary.h"

#ifdef JSONBLUEPRINTUTILITIES_JsonBlueprintFunctionLibrary_generated_h
#error "JsonBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in JsonBlueprintFunctionLibrary.h"
#endif
#define JSONBLUEPRINTUTILITIES_JsonBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFilePath;
struct FJsonObjectWrapper;

// ********** Begin Class UJsonBlueprintFunctionLibrary ********************************************
#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execToFile); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execFromFile); \
	DECLARE_FUNCTION(execFromString);


struct Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics;
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics; \
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics; \
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics; \
JSONBLUEPRINTUTILITIES_API UClass* Z_Construct_UClass_UJsonBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics; \
	friend struct ::Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics; \
	friend struct ::Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JSONBLUEPRINTUTILITIES_API UClass* ::Z_Construct_UClass_UJsonBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UJsonBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JsonBlueprintUtilities"), Z_Construct_UClass_UJsonBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UJsonBlueprintFunctionLibrary)


#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJsonBlueprintFunctionLibrary(UJsonBlueprintFunctionLibrary&&) = delete; \
	UJsonBlueprintFunctionLibrary(const UJsonBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonBlueprintFunctionLibrary) \
	NO_API virtual ~UJsonBlueprintFunctionLibrary();


#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_12_PROLOG
#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJsonBlueprintFunctionLibrary;

// ********** End Class UJsonBlueprintFunctionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
