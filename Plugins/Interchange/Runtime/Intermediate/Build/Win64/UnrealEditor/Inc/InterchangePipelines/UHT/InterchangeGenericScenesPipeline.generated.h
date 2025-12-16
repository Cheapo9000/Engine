// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGenericScenesPipeline.h"

#ifdef INTERCHANGEPIPELINES_InterchangeGenericScenesPipeline_generated_h
#error "InterchangeGenericScenesPipeline.generated.h already included, missing '#pragma once' in InterchangeGenericScenesPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeGenericScenesPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGenericLevelPipeline *****************************************
struct Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericLevelPipeline_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericLevelPipeline(); \
	friend struct ::Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangeGenericLevelPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGenericLevelPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UInterchangeGenericLevelPipeline_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGenericLevelPipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEPIPELINES_API UInterchangeGenericLevelPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGenericLevelPipeline(UInterchangeGenericLevelPipeline&&) = delete; \
	UInterchangeGenericLevelPipeline(const UInterchangeGenericLevelPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UInterchangeGenericLevelPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericLevelPipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGenericLevelPipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_36_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGenericLevelPipeline;

// ********** End Class UInterchangeGenericLevelPipeline *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h

// ********** Begin Enum EInterchangeSceneHierarchyType ********************************************
#define FOREACH_ENUM_EINTERCHANGESCENEHIERARCHYTYPE(op) \
	op(EInterchangeSceneHierarchyType::CreateLevelActors) \
	op(EInterchangeSceneHierarchyType::CreateLevelInstanceActor) \
	op(EInterchangeSceneHierarchyType::CreatePackedActor) 

enum class EInterchangeSceneHierarchyType : uint8;
template<> struct TIsUEnumClass<EInterchangeSceneHierarchyType> { enum { Value = true }; };
template<> INTERCHANGEPIPELINES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeSceneHierarchyType>();
// ********** End Enum EInterchangeSceneHierarchyType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
