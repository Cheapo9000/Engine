// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomAssetImportData.h"

#ifdef HAIRSTRANDSCORE_GroomAssetImportData_generated_h
#error "GroomAssetImportData.generated.h already included, missing '#pragma once' in GroomAssetImportData.h"
#endif
#define HAIRSTRANDSCORE_GroomAssetImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGroomAssetImportData ****************************************************
struct Z_Construct_UClass_UGroomAssetImportData_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAssetImportData_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGroomAssetImportData(); \
	friend struct ::Z_Construct_UClass_UGroomAssetImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UGroomAssetImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomAssetImportData, UAssetImportData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UGroomAssetImportData_NoRegister) \
	DECLARE_SERIALIZER(UGroomAssetImportData)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UGroomAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomAssetImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UGroomAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomAssetImportData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomAssetImportData(UGroomAssetImportData&&) = delete; \
	UGroomAssetImportData(const UGroomAssetImportData&) = delete; \
	HAIRSTRANDSCORE_API virtual ~UGroomAssetImportData();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomAssetImportData;

// ********** End Class UGroomAssetImportData ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
