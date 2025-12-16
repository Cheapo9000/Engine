// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeCardsPipeline.h"

#ifdef INTERCHANGEEDITORPIPELINES_InterchangeCardsPipeline_generated_h
#error "InterchangeCardsPipeline.generated.h already included, missing '#pragma once' in InterchangeCardsPipeline.h"
#endif
#define INTERCHANGEEDITORPIPELINES_InterchangeCardsPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeCardsPipeline ************************************************
struct Z_Construct_UClass_UInterchangeCardsPipeline_Statics;
INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangeCardsPipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeCardsPipeline_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeCardsPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeCardsPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEEDITORPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeCardsPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeCardsPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEditorPipelines"), Z_Construct_UClass_UInterchangeCardsPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeCardsPipeline)


#define FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeCardsPipeline_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEEDITORPIPELINES_API UInterchangeCardsPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeCardsPipeline(UInterchangeCardsPipeline&&) = delete; \
	UInterchangeCardsPipeline(const UInterchangeCardsPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEEDITORPIPELINES_API, UInterchangeCardsPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeCardsPipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeCardsPipeline) \
	INTERCHANGEEDITORPIPELINES_API virtual ~UInterchangeCardsPipeline();


#define FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeCardsPipeline_h_23_PROLOG
#define FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeCardsPipeline_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeCardsPipeline_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeCardsPipeline_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeCardsPipeline;

// ********** End Class UInterchangeCardsPipeline **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeCardsPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
