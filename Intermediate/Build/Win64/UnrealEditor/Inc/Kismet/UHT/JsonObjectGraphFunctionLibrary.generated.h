// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/JsonObjectGraphFunctionLibrary.h"

#ifdef KISMET_JsonObjectGraphFunctionLibrary_generated_h
#error "JsonObjectGraphFunctionLibrary.generated.h already included, missing '#pragma once' in JsonObjectGraphFunctionLibrary.h"
#endif
#define KISMET_JsonObjectGraphFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
class UObject;
struct FJsonStringifyOptions;

// ********** Begin Class UJsonObjectGraphFunctionLibrary ******************************************
#define FID_Engine_Source_Editor_Kismet_Private_Blueprints_JsonObjectGraphFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteBlueprintClassToTempFile); \
	DECLARE_FUNCTION(execWritePackageToTempFile); \
	DECLARE_FUNCTION(execStringify);


struct Z_Construct_UClass_UJsonObjectGraphFunctionLibrary_Statics;
KISMET_API UClass* Z_Construct_UClass_UJsonObjectGraphFunctionLibrary_NoRegister();

#define FID_Engine_Source_Editor_Kismet_Private_Blueprints_JsonObjectGraphFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonObjectGraphFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UJsonObjectGraphFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KISMET_API UClass* ::Z_Construct_UClass_UJsonObjectGraphFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UJsonObjectGraphFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kismet"), Z_Construct_UClass_UJsonObjectGraphFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UJsonObjectGraphFunctionLibrary)


#define FID_Engine_Source_Editor_Kismet_Private_Blueprints_JsonObjectGraphFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonObjectGraphFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJsonObjectGraphFunctionLibrary(UJsonObjectGraphFunctionLibrary&&) = delete; \
	UJsonObjectGraphFunctionLibrary(const UJsonObjectGraphFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonObjectGraphFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonObjectGraphFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonObjectGraphFunctionLibrary) \
	NO_API virtual ~UJsonObjectGraphFunctionLibrary();


#define FID_Engine_Source_Editor_Kismet_Private_Blueprints_JsonObjectGraphFunctionLibrary_h_10_PROLOG
#define FID_Engine_Source_Editor_Kismet_Private_Blueprints_JsonObjectGraphFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Kismet_Private_Blueprints_JsonObjectGraphFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Kismet_Private_Blueprints_JsonObjectGraphFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Kismet_Private_Blueprints_JsonObjectGraphFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJsonObjectGraphFunctionLibrary;

// ********** End Class UJsonObjectGraphFunctionLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Private_Blueprints_JsonObjectGraphFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
