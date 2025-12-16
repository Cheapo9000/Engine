// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbcAssetImportData.h"

#ifdef ALEMBICLIBRARY_AbcAssetImportData_generated_h
#error "AbcAssetImportData.generated.h already included, missing '#pragma once' in AbcAssetImportData.h"
#endif
#define ALEMBICLIBRARY_AbcAssetImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAbcAssetImportData ******************************************************
struct Z_Construct_UClass_UAbcAssetImportData_Statics;
ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAbcAssetImportData_NoRegister();

#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAbcAssetImportData(); \
	friend struct ::Z_Construct_UClass_UAbcAssetImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ALEMBICLIBRARY_API UClass* ::Z_Construct_UClass_UAbcAssetImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbcAssetImportData, UAssetImportData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AlembicLibrary"), Z_Construct_UClass_UAbcAssetImportData_NoRegister) \
	DECLARE_SERIALIZER(UAbcAssetImportData)


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ALEMBICLIBRARY_API UAbcAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbcAssetImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ALEMBICLIBRARY_API, UAbcAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbcAssetImportData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbcAssetImportData(UAbcAssetImportData&&) = delete; \
	UAbcAssetImportData(const UAbcAssetImportData&) = delete; \
	ALEMBICLIBRARY_API virtual ~UAbcAssetImportData();


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_13_PROLOG
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_16_INCLASS \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbcAssetImportData;

// ********** End Class UAbcAssetImportData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
