// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMaterialXPipeline.h"

#ifdef INTERCHANGEPIPELINES_InterchangeMaterialXPipeline_generated_h
#error "InterchangeMaterialXPipeline.generated.h already included, missing '#pragma once' in InterchangeMaterialXPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeMaterialXPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialXPipelineSettings ***********************************************
struct Z_Construct_UClass_UMaterialXPipelineSettings_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UMaterialXPipelineSettings_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialXPipelineSettings(); \
	friend struct ::Z_Construct_UClass_UMaterialXPipelineSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UMaterialXPipelineSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialXPipelineSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UMaterialXPipelineSettings_NoRegister) \
	DECLARE_SERIALIZER(UMaterialXPipelineSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Interchange");} \



#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialXPipelineSettings(UMaterialXPipelineSettings&&) = delete; \
	UMaterialXPipelineSettings(const UMaterialXPipelineSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UMaterialXPipelineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialXPipelineSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialXPipelineSettings) \
	INTERCHANGEPIPELINES_API virtual ~UMaterialXPipelineSettings();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_26_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialXPipelineSettings;

// ********** End Class UMaterialXPipelineSettings *************************************************

// ********** Begin Class UInterchangeMaterialXPipeline ********************************************
struct Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeMaterialXPipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialXPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeMaterialXPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMaterialXPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UInterchangeMaterialXPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMaterialXPipeline) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Interchange");} \



#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_98_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMaterialXPipeline(UInterchangeMaterialXPipeline&&) = delete; \
	UInterchangeMaterialXPipeline(const UInterchangeMaterialXPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UInterchangeMaterialXPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialXPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialXPipeline) \
	INTERCHANGEPIPELINES_API virtual ~UInterchangeMaterialXPipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_95_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMaterialXPipeline;

// ********** End Class UInterchangeMaterialXPipeline **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
