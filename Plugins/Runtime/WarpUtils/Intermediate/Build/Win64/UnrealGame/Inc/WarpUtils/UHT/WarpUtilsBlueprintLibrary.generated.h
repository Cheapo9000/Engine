// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/WarpUtilsBlueprintLibrary.h"

#ifdef WARPUTILS_WarpUtilsBlueprintLibrary_generated_h
#error "WarpUtilsBlueprintLibrary.generated.h already included, missing '#pragma once' in WarpUtilsBlueprintLibrary.h"
#endif
#define WARPUTILS_WarpUtilsBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UWarpUtilsBlueprintLibrary ***********************************************
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGeneratePFMEx); \
	DECLARE_FUNCTION(execGeneratePFM); \
	DECLARE_FUNCTION(execSavePFMEx); \
	DECLARE_FUNCTION(execSavePFM);


struct Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics;
WARPUTILS_API UClass* Z_Construct_UClass_UWarpUtilsBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarpUtilsBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WARPUTILS_API UClass* ::Z_Construct_UClass_UWarpUtilsBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWarpUtilsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WarpUtils"), Z_Construct_UClass_UWarpUtilsBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWarpUtilsBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarpUtilsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWarpUtilsBlueprintLibrary(UWarpUtilsBlueprintLibrary&&) = delete; \
	UWarpUtilsBlueprintLibrary(const UWarpUtilsBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarpUtilsBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarpUtilsBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarpUtilsBlueprintLibrary) \
	NO_API virtual ~UWarpUtilsBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWarpUtilsBlueprintLibrary;

// ********** End Class UWarpUtilsBlueprintLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
