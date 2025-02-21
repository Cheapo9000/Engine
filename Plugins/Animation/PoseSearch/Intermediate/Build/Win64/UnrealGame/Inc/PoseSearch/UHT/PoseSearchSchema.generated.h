// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCH_PoseSearchSchema_generated_h
#error "PoseSearchSchema.generated.h already included, missing '#pragma once' in PoseSearchSchema.h"
#endif
#define POSESEARCH_PoseSearchSchema_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchRoledSkeleton_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchRoledSkeleton>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchSchema(); \
	friend struct Z_Construct_UClass_UPoseSearchSchema_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchSchema, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchSchema)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchSchema(UPoseSearchSchema&&); \
	UPoseSearchSchema(const UPoseSearchSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchSchema) \
	NO_API virtual ~UPoseSearchSchema();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_61_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h


#define FOREACH_ENUM_EPOSESEARCHDATAPREPROCESSOR(op) \
	op(EPoseSearchDataPreprocessor::None) \
	op(EPoseSearchDataPreprocessor::Normalize) \
	op(EPoseSearchDataPreprocessor::NormalizeOnlyByDeviation) \
	op(EPoseSearchDataPreprocessor::NormalizeWithCommonSchema) 

enum class EPoseSearchDataPreprocessor : int32;
template<> struct TIsUEnumClass<EPoseSearchDataPreprocessor> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchDataPreprocessor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
