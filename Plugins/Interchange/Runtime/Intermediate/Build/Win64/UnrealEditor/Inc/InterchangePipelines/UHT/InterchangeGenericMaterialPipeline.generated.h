// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGenericMaterialPipeline.h"

#ifdef INTERCHANGEPIPELINES_InterchangeGenericMaterialPipeline_generated_h
#error "InterchangeGenericMaterialPipeline.generated.h already included, missing '#pragma once' in InterchangeGenericMaterialPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeGenericMaterialPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGenericMaterialPipeline **************************************
struct Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericMaterialPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGenericMaterialPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGenericMaterialPipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_63_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGenericMaterialPipeline(UInterchangeGenericMaterialPipeline&&) = delete; \
	UInterchangeGenericMaterialPipeline(const UInterchangeGenericMaterialPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UInterchangeGenericMaterialPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericMaterialPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeGenericMaterialPipeline) \
	INTERCHANGEPIPELINES_API virtual ~UInterchangeGenericMaterialPipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_60_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGenericMaterialPipeline;

// ********** End Class UInterchangeGenericMaterialPipeline ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h

// ********** Begin Enum EInterchangeMaterialImportOption ******************************************
#define FOREACH_ENUM_EINTERCHANGEMATERIALIMPORTOPTION(op) \
	op(EInterchangeMaterialImportOption::ImportAsMaterials) \
	op(EInterchangeMaterialImportOption::ImportAsMaterialInstances) 

enum class EInterchangeMaterialImportOption : uint8;
template<> struct TIsUEnumClass<EInterchangeMaterialImportOption> { enum { Value = true }; };
template<> INTERCHANGEPIPELINES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeMaterialImportOption>();
// ********** End Enum EInterchangeMaterialImportOption ********************************************

// ********** Begin Enum EInterchangeMaterialSearchLocation ****************************************
#define FOREACH_ENUM_EINTERCHANGEMATERIALSEARCHLOCATION(op) \
	op(EInterchangeMaterialSearchLocation::Local) \
	op(EInterchangeMaterialSearchLocation::UnderParent) \
	op(EInterchangeMaterialSearchLocation::UnderRoot) \
	op(EInterchangeMaterialSearchLocation::AllAssets) \
	op(EInterchangeMaterialSearchLocation::DoNotSearch) 

enum class EInterchangeMaterialSearchLocation : uint8;
template<> struct TIsUEnumClass<EInterchangeMaterialSearchLocation> { enum { Value = true }; };
template<> INTERCHANGEPIPELINES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeMaterialSearchLocation>();
// ********** End Enum EInterchangeMaterialSearchLocation ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
