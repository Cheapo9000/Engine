// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintFileUtilsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTFILEUTILS_BlueprintFileUtilsBPLibrary_generated_h
#error "BlueprintFileUtilsBPLibrary.generated.h already included, missing '#pragma once' in BlueprintFileUtilsBPLibrary.h"
#endif
#define BLUEPRINTFILEUTILS_BlueprintFileUtilsBPLibrary_generated_h

#define FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetUserDirectory); \
	DECLARE_FUNCTION(execMoveFile); \
	DECLARE_FUNCTION(execCopyFile); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execMakeDirectory); \
	DECLARE_FUNCTION(execDirectoryExists); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFindRecursive); \
	DECLARE_FUNCTION(execFindFiles);


#define FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintFileUtilsBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintFileUtilsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintFileUtils"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintFileUtilsBPLibrary)


#define FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintFileUtilsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFileUtilsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintFileUtilsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFileUtilsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintFileUtilsBPLibrary(UBlueprintFileUtilsBPLibrary&&); \
	UBlueprintFileUtilsBPLibrary(const UBlueprintFileUtilsBPLibrary&); \
public: \
	NO_API virtual ~UBlueprintFileUtilsBPLibrary();


#define FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_10_PROLOG
#define FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_13_INCLASS \
	FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTFILEUTILS_API UClass* StaticClass<class UBlueprintFileUtilsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
