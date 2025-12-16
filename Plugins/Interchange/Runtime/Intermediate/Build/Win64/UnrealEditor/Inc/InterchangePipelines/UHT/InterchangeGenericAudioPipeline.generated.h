// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGenericAudioPipeline.h"

#ifdef INTERCHANGEPIPELINES_InterchangeGenericAudioPipeline_generated_h
#error "InterchangeGenericAudioPipeline.generated.h already included, missing '#pragma once' in InterchangeGenericAudioPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeGenericAudioPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeAudioSoundWaveFactoryNode;
class UInterchangeAudioSoundWaveNode;

// ********** Begin Class UInterchangeGenericAudioPipeline *****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSoundWaveFactoryNode);


struct Z_Construct_UClass_UInterchangeGenericAudioPipeline_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAudioPipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericAudioPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeGenericAudioPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeGenericAudioPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGenericAudioPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UInterchangeGenericAudioPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGenericAudioPipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEPIPELINES_API UInterchangeGenericAudioPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGenericAudioPipeline(UInterchangeGenericAudioPipeline&&) = delete; \
	UInterchangeGenericAudioPipeline(const UInterchangeGenericAudioPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UInterchangeGenericAudioPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericAudioPipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGenericAudioPipeline) \
	INTERCHANGEPIPELINES_API virtual ~UInterchangeGenericAudioPipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGenericAudioPipeline;

// ********** End Class UInterchangeGenericAudioPipeline *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAudioPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
