// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpBlueprintFunctionLibrary.h"

#ifdef HTTPBLUEPRINT_HttpBlueprintFunctionLibrary_generated_h
#error "HttpBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in HttpBlueprintFunctionLibrary.h"
#endif
#define HTTPBLUEPRINT_HttpBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHttpHeader;

// ********** Begin Class UHttpBlueprintFunctionLibrary ********************************************
#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveHeader); \
	DECLARE_FUNCTION(execAddHeader); \
	DECLARE_FUNCTION(execGetAllHeaders_Map); \
	DECLARE_FUNCTION(execGetAllHeaders); \
	DECLARE_FUNCTION(execGetHeaderValue); \
	DECLARE_FUNCTION(execMakeRequestHeader);


struct Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics;
HTTPBLUEPRINT_API UClass* Z_Construct_UClass_UHttpBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HTTPBLUEPRINT_API UClass* ::Z_Construct_UClass_UHttpBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UHttpBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpBlueprint"), Z_Construct_UClass_UHttpBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UHttpBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHttpBlueprintFunctionLibrary(UHttpBlueprintFunctionLibrary&&) = delete; \
	UHttpBlueprintFunctionLibrary(const UHttpBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpBlueprintFunctionLibrary) \
	NO_API virtual ~UHttpBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_11_PROLOG
#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHttpBlueprintFunctionLibrary;

// ********** End Class UHttpBlueprintFunctionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
