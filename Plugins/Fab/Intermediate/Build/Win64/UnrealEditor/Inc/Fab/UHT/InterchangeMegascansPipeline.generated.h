// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pipelines/InterchangeMegascansPipeline.h"

#ifdef FAB_InterchangeMegascansPipeline_generated_h
#error "InterchangeMegascansPipeline.generated.h already included, missing '#pragma once' in InterchangeMegascansPipeline.h"
#endif
#define FAB_InterchangeMegascansPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMegascanMaterialPair *********************************************
struct Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics;
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMegascanMaterialPair_Statics; \
	FAB_API static class UScriptStruct* StaticStruct();


struct FMegascanMaterialPair;
// ********** End ScriptStruct FMegascanMaterialPair ***********************************************

// ********** Begin Class UMegascansMaterialParentSettings *****************************************
struct Z_Construct_UClass_UMegascansMaterialParentSettings_Statics;
FAB_API UClass* Z_Construct_UClass_UMegascansMaterialParentSettings_NoRegister();

#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMegascansMaterialParentSettings(); \
	friend struct ::Z_Construct_UClass_UMegascansMaterialParentSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FAB_API UClass* ::Z_Construct_UClass_UMegascansMaterialParentSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMegascansMaterialParentSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fab"), Z_Construct_UClass_UMegascansMaterialParentSettings_NoRegister) \
	DECLARE_SERIALIZER(UMegascansMaterialParentSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Fab");} \



#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMegascansMaterialParentSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMegascansMaterialParentSettings(UMegascansMaterialParentSettings&&) = delete; \
	UMegascansMaterialParentSettings(const UMegascansMaterialParentSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMegascansMaterialParentSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMegascansMaterialParentSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMegascansMaterialParentSettings) \
	NO_API virtual ~UMegascansMaterialParentSettings();


#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_88_PROLOG
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_91_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMegascansMaterialParentSettings;

// ********** End Class UMegascansMaterialParentSettings *******************************************

// ********** Begin Class UInterchangeMegascansPipeline ********************************************
struct Z_Construct_UClass_UInterchangeMegascansPipeline_Statics;
FAB_API UClass* Z_Construct_UClass_UInterchangeMegascansPipeline_NoRegister();

#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMegascansPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeMegascansPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FAB_API UClass* ::Z_Construct_UClass_UInterchangeMegascansPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMegascansPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fab"), Z_Construct_UClass_UInterchangeMegascansPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMegascansPipeline)


#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_101_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMegascansPipeline(UInterchangeMegascansPipeline&&) = delete; \
	UInterchangeMegascansPipeline(const UInterchangeMegascansPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeMegascansPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMegascansPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMegascansPipeline) \
	NO_API virtual ~UInterchangeMegascansPipeline();


#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_98_PROLOG
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_101_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMegascansPipeline;

// ********** End Class UInterchangeMegascansPipeline **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Pipelines_InterchangeMegascansPipeline_h

// ********** Begin Enum EMegascanImportType *******************************************************
#define FOREACH_ENUM_EMEGASCANIMPORTTYPE(op) \
	op(EMegascanImportType::Model3D) \
	op(EMegascanImportType::Surface) \
	op(EMegascanImportType::Decal) \
	op(EMegascanImportType::Imperfection) \
	op(EMegascanImportType::Plant) 

enum class EMegascanImportType;
template<> struct TIsUEnumClass<EMegascanImportType> { enum { Value = true }; };
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EMegascanImportType>();
// ********** End Enum EMegascanImportType *********************************************************

// ********** Begin Enum EMegascanImportTier *******************************************************
#define FOREACH_ENUM_EMEGASCANIMPORTTIER(op) \
	op(EMegascanImportTier::Invalid) \
	op(EMegascanImportTier::Raw) \
	op(EMegascanImportTier::High) \
	op(EMegascanImportTier::Medium) \
	op(EMegascanImportTier::Low) 

enum class EMegascanImportTier : int8;
template<> struct TIsUEnumClass<EMegascanImportTier> { enum { Value = true }; };
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EMegascanImportTier>();
// ********** End Enum EMegascanImportTier *********************************************************

// ********** Begin Enum EMegascanMaterialType *****************************************************
#define FOREACH_ENUM_EMEGASCANMATERIALTYPE(op) \
	op(EMegascanMaterialType::Invalid) \
	op(EMegascanMaterialType::Base) \
	op(EMegascanMaterialType::BaseMasked) \
	op(EMegascanMaterialType::BaseFuzz) \
	op(EMegascanMaterialType::BaseTransmission) \
	op(EMegascanMaterialType::Glass) \
	op(EMegascanMaterialType::Surface) \
	op(EMegascanMaterialType::SurfaceMasked) \
	op(EMegascanMaterialType::SurfaceFuzz) \
	op(EMegascanMaterialType::SurfaceTransmission) \
	op(EMegascanMaterialType::Fabric) \
	op(EMegascanMaterialType::FabricMasked) \
	op(EMegascanMaterialType::Decal) \
	op(EMegascanMaterialType::Plant) \
	op(EMegascanMaterialType::PlantBillboard) 

enum class EMegascanMaterialType : int32;
template<> struct TIsUEnumClass<EMegascanMaterialType> { enum { Value = true }; };
template<> FAB_NON_ATTRIBUTED_API UEnum* StaticEnum<EMegascanMaterialType>();
// ********** End Enum EMegascanMaterialType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
