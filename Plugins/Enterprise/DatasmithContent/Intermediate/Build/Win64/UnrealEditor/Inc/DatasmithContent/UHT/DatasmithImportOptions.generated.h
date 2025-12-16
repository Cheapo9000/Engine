// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithImportOptions.h"

#ifdef DATASMITHCONTENT_DatasmithImportOptions_generated_h
#error "DatasmithImportOptions.generated.h already included, missing '#pragma once' in DatasmithImportOptions.h"
#endif
#define DATASMITHCONTENT_DatasmithImportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDatasmithAssetImportOptions **************************************
struct Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics;
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics; \
	DATASMITHCONTENT_API static class UScriptStruct* StaticStruct();


struct FDatasmithAssetImportOptions;
// ********** End ScriptStruct FDatasmithAssetImportOptions ****************************************

// ********** Begin ScriptStruct FDatasmithStaticMeshImportOptions *********************************
struct Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics;
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics; \
	DATASMITHCONTENT_API static class UScriptStruct* StaticStruct();


struct FDatasmithStaticMeshImportOptions;
// ********** End ScriptStruct FDatasmithStaticMeshImportOptions ***********************************

// ********** Begin ScriptStruct FDatasmithReimportOptions *****************************************
struct Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics;
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_162_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics; \
	DATASMITHCONTENT_API static class UScriptStruct* StaticStruct();


struct FDatasmithReimportOptions;
// ********** End ScriptStruct FDatasmithReimportOptions *******************************************

// ********** Begin ScriptStruct FDatasmithImportBaseOptions ***************************************
struct Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics;
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_179_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics; \
	DATASMITHCONTENT_API static class UScriptStruct* StaticStruct();


struct FDatasmithImportBaseOptions;
// ********** End ScriptStruct FDatasmithImportBaseOptions *****************************************

// ********** Begin ScriptStruct FDatasmithTessellationOptions *************************************
struct Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics;
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_226_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics; \
	DATASMITHCONTENT_API static class UScriptStruct* StaticStruct();


struct FDatasmithTessellationOptions;
// ********** End ScriptStruct FDatasmithTessellationOptions ***************************************

// ********** Begin ScriptStruct FDatasmithRetessellationOptions ***********************************
struct Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics;
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_318_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics; \
	DATASMITHCONTENT_API static class UScriptStruct* StaticStruct(); \
	typedef FDatasmithTessellationOptions Super;


struct FDatasmithRetessellationOptions;
// ********** End ScriptStruct FDatasmithRetessellationOptions *************************************

// ********** Begin Class UDatasmithOptionsBase ****************************************************
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_351_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDatasmithOptionsBase, DATASMITHCONTENT_API)


struct Z_Construct_UClass_UDatasmithOptionsBase_Statics;
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_351_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithOptionsBase(); \
	friend struct ::Z_Construct_UClass_UDatasmithOptionsBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHCONTENT_API UClass* ::Z_Construct_UClass_UDatasmithOptionsBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithOptionsBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithContent"), Z_Construct_UClass_UDatasmithOptionsBase_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithOptionsBase) \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_351_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_351_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHCONTENT_API UDatasmithOptionsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithOptionsBase(UDatasmithOptionsBase&&) = delete; \
	UDatasmithOptionsBase(const UDatasmithOptionsBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, UDatasmithOptionsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithOptionsBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithOptionsBase) \
	DATASMITHCONTENT_API virtual ~UDatasmithOptionsBase();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_348_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_351_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_351_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_351_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithOptionsBase;

// ********** End Class UDatasmithOptionsBase ******************************************************

// ********** Begin Class UDatasmithCommonTessellationOptions **************************************
struct Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics;
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_361_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithCommonTessellationOptions(); \
	friend struct ::Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHCONTENT_API UClass* ::Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithCommonTessellationOptions, UDatasmithOptionsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithContent"), Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithCommonTessellationOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_361_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHCONTENT_API UDatasmithCommonTessellationOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithCommonTessellationOptions(UDatasmithCommonTessellationOptions&&) = delete; \
	UDatasmithCommonTessellationOptions(const UDatasmithCommonTessellationOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, UDatasmithCommonTessellationOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCommonTessellationOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCommonTessellationOptions) \
	DATASMITHCONTENT_API virtual ~UDatasmithCommonTessellationOptions();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_358_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_361_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_361_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_361_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithCommonTessellationOptions;

// ********** End Class UDatasmithCommonTessellationOptions ****************************************

// ********** Begin Class UDatasmithImportOptions **************************************************
struct Z_Construct_UClass_UDatasmithImportOptions_Statics;
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithImportOptions_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_371_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithImportOptions(); \
	friend struct ::Z_Construct_UClass_UDatasmithImportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHCONTENT_API UClass* ::Z_Construct_UClass_UDatasmithImportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithImportOptions, UDatasmithOptionsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithContent"), Z_Construct_UClass_UDatasmithImportOptions_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithImportOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_371_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHCONTENT_API UDatasmithImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, UDatasmithImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithImportOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithImportOptions(UDatasmithImportOptions&&) = delete; \
	UDatasmithImportOptions(const UDatasmithImportOptions&) = delete; \
	DATASMITHCONTENT_API virtual ~UDatasmithImportOptions();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_368_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_371_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_371_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_371_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithImportOptions;

// ********** End Class UDatasmithImportOptions ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h

// ********** Begin Enum EDatasmithImportSearchPackagePolicy ***************************************
#define FOREACH_ENUM_EDATASMITHIMPORTSEARCHPACKAGEPOLICY(op) \
	op(EDatasmithImportSearchPackagePolicy::Current) \
	op(EDatasmithImportSearchPackagePolicy::All) 

enum class EDatasmithImportSearchPackagePolicy : uint8;
template<> struct TIsUEnumClass<EDatasmithImportSearchPackagePolicy> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithImportSearchPackagePolicy>();
// ********** End Enum EDatasmithImportSearchPackagePolicy *****************************************

// ********** Begin Enum EDatasmithImportAssetConflictPolicy ***************************************
#define FOREACH_ENUM_EDATASMITHIMPORTASSETCONFLICTPOLICY(op) \
	op(EDatasmithImportAssetConflictPolicy::Replace) \
	op(EDatasmithImportAssetConflictPolicy::Update) \
	op(EDatasmithImportAssetConflictPolicy::Use) \
	op(EDatasmithImportAssetConflictPolicy::Ignore) 

enum class EDatasmithImportAssetConflictPolicy : uint8;
template<> struct TIsUEnumClass<EDatasmithImportAssetConflictPolicy> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithImportAssetConflictPolicy>();
// ********** End Enum EDatasmithImportAssetConflictPolicy *****************************************

// ********** Begin Enum EDatasmithImportActorPolicy ***********************************************
#define FOREACH_ENUM_EDATASMITHIMPORTACTORPOLICY(op) \
	op(EDatasmithImportActorPolicy::Update) \
	op(EDatasmithImportActorPolicy::Full) \
	op(EDatasmithImportActorPolicy::Ignore) 

enum class EDatasmithImportActorPolicy : uint8;
template<> struct TIsUEnumClass<EDatasmithImportActorPolicy> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithImportActorPolicy>();
// ********** End Enum EDatasmithImportActorPolicy *************************************************

// ********** Begin Enum EDatasmithImportMaterialQuality *******************************************
#define FOREACH_ENUM_EDATASMITHIMPORTMATERIALQUALITY(op) \
	op(EDatasmithImportMaterialQuality::UseNoFresnelCurves) \
	op(EDatasmithImportMaterialQuality::UseSimplifierFresnelCurves) \
	op(EDatasmithImportMaterialQuality::UseRealFresnelCurves) 

enum class EDatasmithImportMaterialQuality : uint8;
template<> struct TIsUEnumClass<EDatasmithImportMaterialQuality> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithImportMaterialQuality>();
// ********** End Enum EDatasmithImportMaterialQuality *********************************************

// ********** Begin Enum EDatasmithImportLightmapMin ***********************************************
#define FOREACH_ENUM_EDATASMITHIMPORTLIGHTMAPMIN(op) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_16) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_32) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_64) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_128) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_256) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_512) 

enum class EDatasmithImportLightmapMin : uint8;
template<> struct TIsUEnumClass<EDatasmithImportLightmapMin> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithImportLightmapMin>();
// ********** End Enum EDatasmithImportLightmapMin *************************************************

// ********** Begin Enum EDatasmithImportLightmapMax ***********************************************
#define FOREACH_ENUM_EDATASMITHIMPORTLIGHTMAPMAX(op) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_64) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_128) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_256) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_512) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_1024) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_2048) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_4096) 

enum class EDatasmithImportLightmapMax : uint8;
template<> struct TIsUEnumClass<EDatasmithImportLightmapMax> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithImportLightmapMax>();
// ********** End Enum EDatasmithImportLightmapMax *************************************************

// ********** Begin Enum EDatasmithImportScene *****************************************************
#define FOREACH_ENUM_EDATASMITHIMPORTSCENE(op) \
	op(EDatasmithImportScene::NewLevel) \
	op(EDatasmithImportScene::CurrentLevel) \
	op(EDatasmithImportScene::AssetsOnly) 

enum class EDatasmithImportScene : uint8;
template<> struct TIsUEnumClass<EDatasmithImportScene> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithImportScene>();
// ********** End Enum EDatasmithImportScene *******************************************************

// ********** Begin Enum EDatasmithCADStitchingTechnique *******************************************
#define FOREACH_ENUM_EDATASMITHCADSTITCHINGTECHNIQUE(op) \
	op(EDatasmithCADStitchingTechnique::StitchingNone) \
	op(EDatasmithCADStitchingTechnique::StitchingHeal) \
	op(EDatasmithCADStitchingTechnique::StitchingSew) 

enum class EDatasmithCADStitchingTechnique : uint8;
template<> struct TIsUEnumClass<EDatasmithCADStitchingTechnique> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithCADStitchingTechnique>();
// ********** End Enum EDatasmithCADStitchingTechnique *********************************************

// ********** Begin Enum EDatasmithCADRetessellationRule *******************************************
#define FOREACH_ENUM_EDATASMITHCADRETESSELLATIONRULE(op) \
	op(EDatasmithCADRetessellationRule::All) \
	op(EDatasmithCADRetessellationRule::SkipDeletedSurfaces) 

enum class EDatasmithCADRetessellationRule : uint8;
template<> struct TIsUEnumClass<EDatasmithCADRetessellationRule> { enum { Value = true }; };
template<> DATASMITHCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDatasmithCADRetessellationRule>();
// ********** End Enum EDatasmithCADRetessellationRule *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
