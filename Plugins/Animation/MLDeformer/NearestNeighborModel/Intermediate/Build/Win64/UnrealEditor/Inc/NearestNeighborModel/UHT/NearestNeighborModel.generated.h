// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NearestNeighborModel.h"

#ifdef NEARESTNEIGHBORMODEL_NearestNeighborModel_generated_h
#error "NearestNeighborModel.generated.h already included, missing '#pragma once' in NearestNeighborModel.h"
#endif
#define NEARESTNEIGHBORMODEL_NearestNeighborModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNearestNeighborModelSection;

// ********** Begin ScriptStruct FClothPartData ****************************************************
struct Z_Construct_UScriptStruct_FClothPartData_Statics;
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClothPartData_Statics; \
	NEARESTNEIGHBORMODEL_API static class UScriptStruct* StaticStruct();


struct FClothPartData;
// ********** End ScriptStruct FClothPartData ******************************************************

// ********** Begin Class UNearestNeighborModelSection *********************************************
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumBasis);


#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_101_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
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
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_101_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UNearestNeighborModelSection_Statics;
NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModelSection_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborModelSection(); \
	friend struct ::Z_Construct_UClass_UNearestNeighborModelSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEARESTNEIGHBORMODEL_API UClass* ::Z_Construct_UClass_UNearestNeighborModelSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UNearestNeighborModelSection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), Z_Construct_UClass_UNearestNeighborModelSection_NoRegister) \
	DECLARE_SERIALIZER(UNearestNeighborModelSection)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NEARESTNEIGHBORMODEL_API UNearestNeighborModelSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNearestNeighborModelSection(UNearestNeighborModelSection&&) = delete; \
	UNearestNeighborModelSection(const UNearestNeighborModelSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEARESTNEIGHBORMODEL_API, UNearestNeighborModelSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborModelSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborModelSection) \
	NEARESTNEIGHBORMODEL_API virtual ~UNearestNeighborModelSection();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_98_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_101_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNearestNeighborModelSection;

// ********** End Class UNearestNeighborModelSection ***********************************************

// ********** Begin Class UNearestNeighborModel ****************************************************
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoesUsePCA); \
	DECLARE_FUNCTION(execIsReadyForInference); \
	DECLARE_FUNCTION(execIsReadyForTraining); \
	DECLARE_FUNCTION(execGetTotalNumBasis); \
	DECLARE_FUNCTION(execGetPCACoeffStarts); \
	DECLARE_FUNCTION(execGetSectionPtr); \
	DECLARE_FUNCTION(execGetNumSections);


#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
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
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNearestNeighborModel, NEARESTNEIGHBORMODEL_API)


struct Z_Construct_UClass_UNearestNeighborModel_Statics;
NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModel_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborModel(); \
	friend struct ::Z_Construct_UClass_UNearestNeighborModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEARESTNEIGHBORMODEL_API UClass* ::Z_Construct_UClass_UNearestNeighborModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UNearestNeighborModel, UMLDeformerMorphModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), Z_Construct_UClass_UNearestNeighborModel_NoRegister) \
	DECLARE_SERIALIZER(UNearestNeighborModel) \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNearestNeighborModel(UNearestNeighborModel&&) = delete; \
	UNearestNeighborModel(const UNearestNeighborModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEARESTNEIGHBORMODEL_API, UNearestNeighborModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborModel) \
	NEARESTNEIGHBORMODEL_API virtual ~UNearestNeighborModel();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_341_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_345_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNearestNeighborModel;

// ********** End Class UNearestNeighborModel ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h

// ********** Begin Enum ENearestNeighborModelSectionWeightMapCreationMethod ***********************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_ENEARESTNEIGHBORMODELSECTIONWEIGHTMAPCREATIONMETHOD(op) \
	op(ENearestNeighborModelSectionWeightMapCreationMethod::FromText) \
	op(ENearestNeighborModelSectionWeightMapCreationMethod::SelectedBones) \
	op(ENearestNeighborModelSectionWeightMapCreationMethod::VertexAttributes) \
	op(ENearestNeighborModelSectionWeightMapCreationMethod::ExternalTxt) 

enum class ENearestNeighborModelSectionWeightMapCreationMethod : uint8;
template<> struct TIsUEnumClass<ENearestNeighborModelSectionWeightMapCreationMethod> { enum { Value = true }; };
template<> NEARESTNEIGHBORMODEL_NON_ATTRIBUTED_API UEnum* StaticEnum<ENearestNeighborModelSectionWeightMapCreationMethod>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum ENearestNeighborModelSectionWeightMapCreationMethod *************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
