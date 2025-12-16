// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGenericMeshPipeline.h"

#ifdef INTERCHANGEPIPELINES_InterchangeGenericMeshPipeline_generated_h
#error "InterchangeGenericMeshPipeline.generated.h already included, missing '#pragma once' in InterchangeGenericMeshPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeGenericMeshPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGenericMeshPipeline ******************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCombineSkeletalMeshes); \
	DECLARE_FUNCTION(execGetCombineSkeletalMeshes);


struct Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericMeshPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGenericMeshPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGenericMeshPipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEPIPELINES_API UInterchangeGenericMeshPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGenericMeshPipeline(UInterchangeGenericMeshPipeline&&) = delete; \
	UInterchangeGenericMeshPipeline(const UInterchangeGenericMeshPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UInterchangeGenericMeshPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericMeshPipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGenericMeshPipeline) \
	INTERCHANGEPIPELINES_API virtual ~UInterchangeGenericMeshPipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_31_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGenericMeshPipeline;

// ********** End Class UInterchangeGenericMeshPipeline ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
