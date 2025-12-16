// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbcImportSettings.h"

#ifdef ALEMBICLIBRARY_AbcImportSettings_generated_h
#error "AbcImportSettings.generated.h already included, missing '#pragma once' in AbcImportSettings.h"
#endif
#define ALEMBICLIBRARY_AbcImportSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAbcCompressionSettings *******************************************
struct Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics;
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics; \
	ALEMBICLIBRARY_API static class UScriptStruct* StaticStruct();


struct FAbcCompressionSettings;
// ********** End ScriptStruct FAbcCompressionSettings *********************************************

// ********** Begin ScriptStruct FAbcSamplingSettings **********************************************
struct Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics;
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics; \
	ALEMBICLIBRARY_API static class UScriptStruct* StaticStruct();


struct FAbcSamplingSettings;
// ********** End ScriptStruct FAbcSamplingSettings ************************************************

// ********** Begin ScriptStruct FAbcNormalGenerationSettings **************************************
struct Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics;
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_127_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics; \
	ALEMBICLIBRARY_API static class UScriptStruct* StaticStruct();


struct FAbcNormalGenerationSettings;
// ********** End ScriptStruct FAbcNormalGenerationSettings ****************************************

// ********** Begin ScriptStruct FAbcMaterialSettings **********************************************
struct Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics;
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_162_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics; \
	ALEMBICLIBRARY_API static class UScriptStruct* StaticStruct();


struct FAbcMaterialSettings;
// ********** End ScriptStruct FAbcMaterialSettings ************************************************

// ********** Begin ScriptStruct FAbcStaticMeshSettings ********************************************
struct Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics;
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_181_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics; \
	ALEMBICLIBRARY_API static class UScriptStruct* StaticStruct();


struct FAbcStaticMeshSettings;
// ********** End ScriptStruct FAbcStaticMeshSettings **********************************************

// ********** Begin ScriptStruct FAbcConversionSettings ********************************************
struct Z_Construct_UScriptStruct_FAbcConversionSettings_Statics;
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_216_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbcConversionSettings_Statics; \
	ALEMBICLIBRARY_API static class UScriptStruct* StaticStruct();


struct FAbcConversionSettings;
// ********** End ScriptStruct FAbcConversionSettings **********************************************

// ********** Begin ScriptStruct FAbcGeometryCacheSettings *****************************************
struct Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics;
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_261_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics; \
	ALEMBICLIBRARY_API static class UScriptStruct* StaticStruct();


struct FAbcGeometryCacheSettings;
// ********** End ScriptStruct FAbcGeometryCacheSettings *******************************************

// ********** Begin Class UAbcImportSettings *******************************************************
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_312_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAbcImportSettings, ALEMBICLIBRARY_API)


struct Z_Construct_UClass_UAbcImportSettings_Statics;
ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAbcImportSettings_NoRegister();

#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_312_INCLASS \
private: \
	static void StaticRegisterNativesUAbcImportSettings(); \
	friend struct ::Z_Construct_UClass_UAbcImportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ALEMBICLIBRARY_API UClass* ::Z_Construct_UClass_UAbcImportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbcImportSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AlembicLibrary"), Z_Construct_UClass_UAbcImportSettings_NoRegister) \
	DECLARE_SERIALIZER(UAbcImportSettings) \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_312_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_312_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ALEMBICLIBRARY_API UAbcImportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbcImportSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ALEMBICLIBRARY_API, UAbcImportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbcImportSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbcImportSettings(UAbcImportSettings&&) = delete; \
	UAbcImportSettings(const UAbcImportSettings&) = delete; \
	ALEMBICLIBRARY_API virtual ~UAbcImportSettings();


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_309_PROLOG
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_312_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_312_INCLASS \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_312_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbcImportSettings;

// ********** End Class UAbcImportSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h

// ********** Begin Enum EAlembicImportType ********************************************************
#define FOREACH_ENUM_EALEMBICIMPORTTYPE(op) \
	op(EAlembicImportType::StaticMesh) \
	op(EAlembicImportType::GeometryCache) \
	op(EAlembicImportType::Skeletal) 

enum class EAlembicImportType : uint8;
template<> struct TIsUEnumClass<EAlembicImportType> { enum { Value = true }; };
template<> ALEMBICLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAlembicImportType>();
// ********** End Enum EAlembicImportType **********************************************************

// ********** Begin Enum EBaseCalculationType ******************************************************
#define FOREACH_ENUM_EBASECALCULATIONTYPE(op) \
	op(EBaseCalculationType::None) \
	op(EBaseCalculationType::PercentageBased) \
	op(EBaseCalculationType::FixedNumber) \
	op(EBaseCalculationType::NoCompression) 

enum class EBaseCalculationType : uint8;
template<> struct TIsUEnumClass<EBaseCalculationType> { enum { Value = true }; };
template<> ALEMBICLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EBaseCalculationType>();
// ********** End Enum EBaseCalculationType ********************************************************

// ********** Begin Enum EAlembicSamplingType ******************************************************
#define FOREACH_ENUM_EALEMBICSAMPLINGTYPE(op) \
	op(EAlembicSamplingType::PerFrame) \
	op(EAlembicSamplingType::PerXFrames) \
	op(EAlembicSamplingType::PerTimeStep) 

enum class EAlembicSamplingType : uint8;
template<> struct TIsUEnumClass<EAlembicSamplingType> { enum { Value = true }; };
template<> ALEMBICLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAlembicSamplingType>();
// ********** End Enum EAlembicSamplingType ********************************************************

// ********** Begin Enum EAbcConversionPreset ******************************************************
#define FOREACH_ENUM_EABCCONVERSIONPRESET(op) \
	op(EAbcConversionPreset::Maya) \
	op(EAbcConversionPreset::Max) \
	op(EAbcConversionPreset::Custom) 

enum class EAbcConversionPreset : uint8;
template<> struct TIsUEnumClass<EAbcConversionPreset> { enum { Value = true }; };
template<> ALEMBICLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbcConversionPreset>();
// ********** End Enum EAbcConversionPreset ********************************************************

// ********** Begin Enum EAbcGeometryCacheMotionVectorsImport **************************************
#define FOREACH_ENUM_EABCGEOMETRYCACHEMOTIONVECTORSIMPORT(op) \
	op(EAbcGeometryCacheMotionVectorsImport::NoMotionVectors) \
	op(EAbcGeometryCacheMotionVectorsImport::ImportAbcVelocitiesAsMotionVectors) \
	op(EAbcGeometryCacheMotionVectorsImport::CalculateMotionVectorsDuringImport) 

enum class EAbcGeometryCacheMotionVectorsImport : uint8;
template<> struct TIsUEnumClass<EAbcGeometryCacheMotionVectorsImport> { enum { Value = true }; };
template<> ALEMBICLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbcGeometryCacheMotionVectorsImport>();
// ********** End Enum EAbcGeometryCacheMotionVectorsImport ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
