// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGenericTexturePipeline.h"

#ifdef INTERCHANGEPIPELINES_InterchangeGenericTexturePipeline_generated_h
#error "InterchangeGenericTexturePipeline.generated.h already included, missing '#pragma once' in InterchangeGenericTexturePipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeGenericTexturePipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGenericTexturePipeline ***************************************
struct Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericTexturePipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGenericTexturePipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGenericTexturePipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEPIPELINES_API UInterchangeGenericTexturePipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGenericTexturePipeline(UInterchangeGenericTexturePipeline&&) = delete; \
	UInterchangeGenericTexturePipeline(const UInterchangeGenericTexturePipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UInterchangeGenericTexturePipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericTexturePipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGenericTexturePipeline) \
	INTERCHANGEPIPELINES_API virtual ~UInterchangeGenericTexturePipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_18_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGenericTexturePipeline;

// ********** End Class UInterchangeGenericTexturePipeline *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
