// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGenericAnimationPipeline.h"

#ifdef INTERCHANGEPIPELINES_InterchangeGenericAnimationPipeline_generated_h
#error "InterchangeGenericAnimationPipeline.generated.h already included, missing '#pragma once' in InterchangeGenericAnimationPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeGenericAnimationPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGenericAnimationPipeline *************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_38_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeGenericAnimationPipeline, INTERCHANGEPIPELINES_API)


struct Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericAnimationPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGenericAnimationPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGenericAnimationPipeline) \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_38_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEPIPELINES_API UInterchangeGenericAnimationPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGenericAnimationPipeline(UInterchangeGenericAnimationPipeline&&) = delete; \
	UInterchangeGenericAnimationPipeline(const UInterchangeGenericAnimationPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UInterchangeGenericAnimationPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericAnimationPipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGenericAnimationPipeline) \
	INTERCHANGEPIPELINES_API virtual ~UInterchangeGenericAnimationPipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_35_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGenericAnimationPipeline;

// ********** End Class UInterchangeGenericAnimationPipeline ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h

// ********** Begin Enum EInterchangeAnimationRange ************************************************
#define FOREACH_ENUM_EINTERCHANGEANIMATIONRANGE(op) \
	op(EInterchangeAnimationRange::Timeline) \
	op(EInterchangeAnimationRange::Animated) \
	op(EInterchangeAnimationRange::SetRange) 

enum class EInterchangeAnimationRange : uint8;
template<> struct TIsUEnumClass<EInterchangeAnimationRange> { enum { Value = true }; };
template<> INTERCHANGEPIPELINES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeAnimationRange>();
// ********** End Enum EInterchangeAnimationRange **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
