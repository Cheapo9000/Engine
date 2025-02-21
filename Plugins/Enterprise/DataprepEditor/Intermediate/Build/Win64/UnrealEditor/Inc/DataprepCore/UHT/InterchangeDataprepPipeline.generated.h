// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDataprepPipeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAPREPCORE_InterchangeDataprepPipeline_generated_h
#error "InterchangeDataprepPipeline.generated.h already included, missing '#pragma once' in InterchangeDataprepPipeline.h"
#endif
#define DATAPREPCORE_InterchangeDataprepPipeline_generated_h

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_InterchangeDataprepPipeline_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDataprepLevelPipeline(); \
	friend struct Z_Construct_UClass_UInterchangeDataprepLevelPipeline_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDataprepLevelPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDataprepLevelPipeline)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_InterchangeDataprepPipeline_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDataprepLevelPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeDataprepLevelPipeline(UInterchangeDataprepLevelPipeline&&); \
	UInterchangeDataprepLevelPipeline(const UInterchangeDataprepLevelPipeline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDataprepLevelPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDataprepLevelPipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeDataprepLevelPipeline) \
	NO_API virtual ~UInterchangeDataprepLevelPipeline();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_InterchangeDataprepPipeline_h_12_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_InterchangeDataprepPipeline_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_InterchangeDataprepPipeline_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_InterchangeDataprepPipeline_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UInterchangeDataprepLevelPipeline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_InterchangeDataprepPipeline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
