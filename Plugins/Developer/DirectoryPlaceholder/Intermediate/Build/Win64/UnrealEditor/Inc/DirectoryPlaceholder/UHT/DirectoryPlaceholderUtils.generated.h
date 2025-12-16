// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DirectoryPlaceholderUtils.h"

#ifdef DIRECTORYPLACEHOLDER_DirectoryPlaceholderUtils_generated_h
#error "DirectoryPlaceholderUtils.generated.h already included, missing '#pragma once' in DirectoryPlaceholderUtils.h"
#endif
#define DIRECTORYPLACEHOLDER_DirectoryPlaceholderUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDirectoryPlaceholderLibrary *********************************************
#define FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Public_DirectoryPlaceholderUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeletePlaceholdersInPath); \
	DECLARE_FUNCTION(execCleanupPlaceholdersInPaths); \
	DECLARE_FUNCTION(execCleanupPlaceholdersInPath);


struct Z_Construct_UClass_UDirectoryPlaceholderLibrary_Statics;
DIRECTORYPLACEHOLDER_API UClass* Z_Construct_UClass_UDirectoryPlaceholderLibrary_NoRegister();

#define FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Public_DirectoryPlaceholderUtils_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectoryPlaceholderLibrary(); \
	friend struct ::Z_Construct_UClass_UDirectoryPlaceholderLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DIRECTORYPLACEHOLDER_API UClass* ::Z_Construct_UClass_UDirectoryPlaceholderLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDirectoryPlaceholderLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DirectoryPlaceholder"), Z_Construct_UClass_UDirectoryPlaceholderLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDirectoryPlaceholderLibrary)


#define FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Public_DirectoryPlaceholderUtils_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDirectoryPlaceholderLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDirectoryPlaceholderLibrary(UDirectoryPlaceholderLibrary&&) = delete; \
	UDirectoryPlaceholderLibrary(const UDirectoryPlaceholderLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectoryPlaceholderLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectoryPlaceholderLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDirectoryPlaceholderLibrary) \
	NO_API virtual ~UDirectoryPlaceholderLibrary();


#define FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Public_DirectoryPlaceholderUtils_h_12_PROLOG
#define FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Public_DirectoryPlaceholderUtils_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Public_DirectoryPlaceholderUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Public_DirectoryPlaceholderUtils_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Public_DirectoryPlaceholderUtils_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDirectoryPlaceholderLibrary;

// ********** End Class UDirectoryPlaceholderLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_DirectoryPlaceholder_Source_DirectoryPlaceholder_Public_DirectoryPlaceholderUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
