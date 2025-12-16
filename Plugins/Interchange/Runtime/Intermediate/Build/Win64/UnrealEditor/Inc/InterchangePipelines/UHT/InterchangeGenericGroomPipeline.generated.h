// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGenericGroomPipeline.h"

#ifdef INTERCHANGEPIPELINES_InterchangeGenericGroomPipeline_generated_h
#error "InterchangeGenericGroomPipeline.generated.h already included, missing '#pragma once' in InterchangeGenericGroomPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeGenericGroomPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGenericGroomPipeline *****************************************
struct Z_Construct_UClass_UInterchangeGenericGroomPipeline_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericGroomPipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericGroomPipeline_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericGroomPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeGenericGroomPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeGenericGroomPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGenericGroomPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UInterchangeGenericGroomPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGenericGroomPipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericGroomPipeline_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEPIPELINES_API UInterchangeGenericGroomPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGenericGroomPipeline(UInterchangeGenericGroomPipeline&&) = delete; \
	UInterchangeGenericGroomPipeline(const UInterchangeGenericGroomPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UInterchangeGenericGroomPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericGroomPipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGenericGroomPipeline) \
	INTERCHANGEPIPELINES_API virtual ~UInterchangeGenericGroomPipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericGroomPipeline_h_16_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericGroomPipeline_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericGroomPipeline_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericGroomPipeline_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGenericGroomPipeline;

// ********** End Class UInterchangeGenericGroomPipeline *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericGroomPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
