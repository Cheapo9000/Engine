// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NearestNeighborTrainingModel.h"

#ifdef NEARESTNEIGHBORMODELEDITOR_NearestNeighborTrainingModel_generated_h
#error "NearestNeighborTrainingModel.generated.h already included, missing '#pragma once' in NearestNeighborTrainingModel.h"
#endif
#define NEARESTNEIGHBORMODELEDITOR_NearestNeighborTrainingModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class UGeometryCache;
class UMLDeformerModel;
class UNearestNeighborKMeansData;
class UNearestNeighborModel;
class UNearestNeighborModelInstance;
class UNearestNeighborStatsData;
class USkeleton;

// ********** Begin Class UNearestNeighborTrainingModel ********************************************
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyModelInstance); \
	DECLARE_FUNCTION(execCreateModelInstance); \
	DECLARE_FUNCTION(execGetMeshIndexBuffer); \
	DECLARE_FUNCTION(execGetUnskinnedVertexPositions); \
	DECLARE_FUNCTION(execSetCustomSamplerDataFromSection); \
	DECLARE_FUNCTION(execCustomSample); \
	DECLARE_FUNCTION(execSetCustomSamplerData); \
	DECLARE_FUNCTION(execGetNearestNeighborModel); \
	DECLARE_FUNCTION(execGetModelSkeleton); \
	DECLARE_FUNCTION(execGetNumFramesGeometryCache); \
	DECLARE_FUNCTION(execGetNumFramesAnimSequence);


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_28_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UNearestNeighborTrainingModel_Statics;
NEARESTNEIGHBORMODELEDITOR_API UClass* Z_Construct_UClass_UNearestNeighborTrainingModel_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborTrainingModel(); \
	friend struct ::Z_Construct_UClass_UNearestNeighborTrainingModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEARESTNEIGHBORMODELEDITOR_API UClass* ::Z_Construct_UClass_UNearestNeighborTrainingModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UNearestNeighborTrainingModel, UMLDeformerGeomCacheTrainingModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModelEditor"), Z_Construct_UClass_UNearestNeighborTrainingModel_NoRegister) \
	DECLARE_SERIALIZER(UNearestNeighborTrainingModel)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NEARESTNEIGHBORMODELEDITOR_API UNearestNeighborTrainingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNearestNeighborTrainingModel(UNearestNeighborTrainingModel&&) = delete; \
	UNearestNeighborTrainingModel(const UNearestNeighborTrainingModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEARESTNEIGHBORMODELEDITOR_API, UNearestNeighborTrainingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborTrainingModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborTrainingModel)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_24_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNearestNeighborTrainingModel;

// ********** End Class UNearestNeighborTrainingModel **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
