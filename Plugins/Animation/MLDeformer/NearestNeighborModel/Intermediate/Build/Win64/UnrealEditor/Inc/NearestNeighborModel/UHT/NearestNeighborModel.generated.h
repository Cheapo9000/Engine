// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NearestNeighborModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNearestNeighborModelSection;
#ifdef NEARESTNEIGHBORMODEL_NearestNeighborModel_generated_h
#error "NearestNeighborModel.generated.h already included, missing '#pragma once' in NearestNeighborModel.h"
#endif
#define NEARESTNEIGHBORMODEL_NearestNeighborModel_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothPartData_Statics; \
	NEARESTNEIGHBORMODEL_API static class UScriptStruct* StaticStruct();


template<> NEARESTNEIGHBORMODEL_API UScriptStruct* StaticStruct<struct FClothPartData>();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumBasis);


#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_99_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetVertexAttributeNames); \
	DECLARE_FUNCTION(execSetNeighborData); \
	DECLARE_FUNCTION(execSetBasisData); \
	DECLARE_FUNCTION(execDoesUsePCA); \
	DECLARE_FUNCTION(execGetAssetNeighborCoeffs); \
	DECLARE_FUNCTION(execGetVertexMean); \
	DECLARE_FUNCTION(execGetBasis); \
	DECLARE_FUNCTION(execGetVertexWeights); \
	DECLARE_FUNCTION(execGetVertexMap); \
	DECLARE_FUNCTION(execGetAssetNumNeighbors);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_99_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborModelSection(); \
	friend struct Z_Construct_UClass_UNearestNeighborModelSection_Statics; \
public: \
	DECLARE_CLASS(UNearestNeighborModelSection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), NO_API) \
	DECLARE_SERIALIZER(UNearestNeighborModelSection)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNearestNeighborModelSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNearestNeighborModelSection(UNearestNeighborModelSection&&); \
	UNearestNeighborModelSection(const UNearestNeighborModelSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearestNeighborModelSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborModelSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborModelSection) \
	NO_API virtual ~UNearestNeighborModelSection();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_96_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_99_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<class UNearestNeighborModelSection>();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoesUsePCA); \
	DECLARE_FUNCTION(execIsReadyForInference); \
	DECLARE_FUNCTION(execIsReadyForTraining); \
	DECLARE_FUNCTION(execGetTotalNumBasis); \
	DECLARE_FUNCTION(execGetPCACoeffStarts); \
	DECLARE_FUNCTION(execGetSectionPtr); \
	DECLARE_FUNCTION(execGetNumSections);


#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetCachedNetworkPaths); \
	DECLARE_FUNCTION(execGetCachedPCAPaths); \
	DECLARE_FUNCTION(execGetCachedDeltasPaths); \
	DECLARE_FUNCTION(execGetModelDir); \
	DECLARE_FUNCTION(execGetSmoothLossBeta); \
	DECLARE_FUNCTION(execGetRegularizationFactor); \
	DECLARE_FUNCTION(execGetEarlyStopEpochs); \
	DECLARE_FUNCTION(execGetLearningRate); \
	DECLARE_FUNCTION(execGetBatchSize); \
	DECLARE_FUNCTION(execGetNumIterations); \
	DECLARE_FUNCTION(execGetNumEpochs); \
	DECLARE_FUNCTION(execGetOutputDim); \
	DECLARE_FUNCTION(execGetHiddenLayerDims); \
	DECLARE_FUNCTION(execGetInputDim);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNearestNeighborModel, NO_API)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborModel(); \
	friend struct Z_Construct_UClass_UNearestNeighborModel_Statics; \
public: \
	DECLARE_CLASS(UNearestNeighborModel, UMLDeformerMorphModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), NO_API) \
	DECLARE_SERIALIZER(UNearestNeighborModel) \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNearestNeighborModel(UNearestNeighborModel&&); \
	UNearestNeighborModel(const UNearestNeighborModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearestNeighborModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborModel) \
	NO_API virtual ~UNearestNeighborModel();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_339_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_343_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<class UNearestNeighborModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h


#define FOREACH_ENUM_ENEARESTNEIGHBORMODELSECTIONWEIGHTMAPCREATIONMETHOD(op) \
	op(ENearestNeighborModelSectionWeightMapCreationMethod::FromText) \
	op(ENearestNeighborModelSectionWeightMapCreationMethod::SelectedBones) \
	op(ENearestNeighborModelSectionWeightMapCreationMethod::VertexAttributes) \
	op(ENearestNeighborModelSectionWeightMapCreationMethod::ExternalTxt) 

enum class ENearestNeighborModelSectionWeightMapCreationMethod : uint8;
template<> struct TIsUEnumClass<ENearestNeighborModelSectionWeightMapCreationMethod> { enum { Value = true }; };
template<> NEARESTNEIGHBORMODEL_API UEnum* StaticEnum<ENearestNeighborModelSectionWeightMapCreationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
