// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeglTFPipeline.h"

#ifdef INTERCHANGEPIPELINES_InterchangeglTFPipeline_generated_h
#error "InterchangeglTFPipeline.generated.h already included, missing '#pragma once' in InterchangeglTFPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeglTFPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGLTFPipelineSettings ****************************************************
struct Z_Construct_UClass_UGLTFPipelineSettings_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UGLTFPipelineSettings_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLTFPipelineSettings(); \
	friend struct ::Z_Construct_UClass_UGLTFPipelineSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UGLTFPipelineSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGLTFPipelineSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UGLTFPipelineSettings_NoRegister) \
	DECLARE_SERIALIZER(UGLTFPipelineSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Interchange");} \



#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEPIPELINES_API UGLTFPipelineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGLTFPipelineSettings(UGLTFPipelineSettings&&) = delete; \
	UGLTFPipelineSettings(const UGLTFPipelineSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UGLTFPipelineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFPipelineSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFPipelineSettings) \
	INTERCHANGEPIPELINES_API virtual ~UGLTFPipelineSettings();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_21_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGLTFPipelineSettings;

// ********** End Class UGLTFPipelineSettings ******************************************************

// ********** Begin Class UInterchangeGLTFPipeline *************************************************
struct Z_Construct_UClass_UInterchangeGLTFPipeline_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGLTFPipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGLTFPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeGLTFPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeGLTFPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGLTFPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UInterchangeGLTFPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGLTFPipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGLTFPipeline(UInterchangeGLTFPipeline&&) = delete; \
	UInterchangeGLTFPipeline(const UInterchangeGLTFPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UInterchangeGLTFPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGLTFPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeGLTFPipeline) \
	INTERCHANGEPIPELINES_API virtual ~UInterchangeGLTFPipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_48_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGLTFPipeline;

// ********** End Class UInterchangeGLTFPipeline ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
