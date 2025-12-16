// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GlobalConfigurationDataBlueprintLibrary.h"

#ifdef GLOBALCONFIGURATIONDATA_GlobalConfigurationDataBlueprintLibrary_generated_h
#error "GlobalConfigurationDataBlueprintLibrary.generated.h already included, missing '#pragma once' in GlobalConfigurationDataBlueprintLibrary.h"
#endif
#define GLOBALCONFIGURATIONDATA_GlobalConfigurationDataBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UScriptStruct;
struct FInstancedStruct;

// ********** Begin Class UGlobalConfigurationDataBlueprintLibrary *********************************
#define FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetConfigDataTextWithDefault); \
	DECLARE_FUNCTION(execGetConfigDataStringWithDefault); \
	DECLARE_FUNCTION(execGetConfigDataFloatWithDefault); \
	DECLARE_FUNCTION(execGetConfigDataIntWithDefault); \
	DECLARE_FUNCTION(execGetConfigDataBoolWithDefault); \
	DECLARE_FUNCTION(execGetConfigDataObject); \
	DECLARE_FUNCTION(execGetConfigDataStruct); \
	DECLARE_FUNCTION(execGetConfigDataText); \
	DECLARE_FUNCTION(execGetConfigDataString); \
	DECLARE_FUNCTION(execGetConfigDataFloat); \
	DECLARE_FUNCTION(execGetConfigDataInt); \
	DECLARE_FUNCTION(execGetConfigDataBool);


struct Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary_Statics;
GLOBALCONFIGURATIONDATA_API UClass* Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGlobalConfigurationDataBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GLOBALCONFIGURATIONDATA_API UClass* ::Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGlobalConfigurationDataBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GlobalConfigurationData"), Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGlobalConfigurationDataBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGlobalConfigurationDataBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGlobalConfigurationDataBlueprintLibrary(UGlobalConfigurationDataBlueprintLibrary&&) = delete; \
	UGlobalConfigurationDataBlueprintLibrary(const UGlobalConfigurationDataBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalConfigurationDataBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalConfigurationDataBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGlobalConfigurationDataBlueprintLibrary) \
	NO_API virtual ~UGlobalConfigurationDataBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGlobalConfigurationDataBlueprintLibrary;

// ********** End Class UGlobalConfigurationDataBlueprintLibrary ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GlobalConfigurationData_Source_GlobalConfigurationData_Public_GlobalConfigurationDataBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
