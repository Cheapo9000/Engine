// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveFunctionCollapseModel.h"

#ifdef WAVEFUNCTIONCOLLAPSE_WaveFunctionCollapseModel_generated_h
#error "WaveFunctionCollapseModel.generated.h already included, missing '#pragma once' in WaveFunctionCollapseModel.h"
#endif
#define WAVEFUNCTIONCOLLAPSE_WaveFunctionCollapseModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
enum class EWaveFunctionCollapseAdjacency : uint8;
struct FWaveFunctionCollapseOption;
struct FWaveFunctionCollapseOptions;

// ********** Begin ScriptStruct FWaveFunctionCollapseOption ***************************************
struct Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics;
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWaveFunctionCollapseOption;
// ********** End ScriptStruct FWaveFunctionCollapseOption *****************************************

// ********** Begin ScriptStruct FWaveFunctionCollapseOptions **************************************
struct Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics;
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWaveFunctionCollapseOptions;
// ********** End ScriptStruct FWaveFunctionCollapseOptions ****************************************

// ********** Begin ScriptStruct FWaveFunctionCollapseAdjacencyToOptionsMap ************************
struct Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics;
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWaveFunctionCollapseAdjacencyToOptionsMap;
// ********** End ScriptStruct FWaveFunctionCollapseAdjacencyToOptionsMap **************************

// ********** Begin Class UWaveFunctionCollapseModel ***********************************************
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwapMeshes); \
	DECLARE_FUNCTION(execGetConstraintCount); \
	DECLARE_FUNCTION(execGetOptionContribution); \
	DECLARE_FUNCTION(execGetOptionWeight); \
	DECLARE_FUNCTION(execSetOptionContribution); \
	DECLARE_FUNCTION(execSetAllContributions); \
	DECLARE_FUNCTION(execSetAllWeights); \
	DECLARE_FUNCTION(execSetWeightsFromContributions); \
	DECLARE_FUNCTION(execGetOptions); \
	DECLARE_FUNCTION(execAddConstraint);


struct Z_Construct_UClass_UWaveFunctionCollapseModel_Statics;
WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister();

#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveFunctionCollapseModel(); \
	friend struct ::Z_Construct_UClass_UWaveFunctionCollapseModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WAVEFUNCTIONCOLLAPSE_API UClass* ::Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveFunctionCollapseModel, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveFunctionCollapse"), Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister) \
	DECLARE_SERIALIZER(UWaveFunctionCollapseModel)


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveFunctionCollapseModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveFunctionCollapseModel(UWaveFunctionCollapseModel&&) = delete; \
	UWaveFunctionCollapseModel(const UWaveFunctionCollapseModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveFunctionCollapseModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveFunctionCollapseModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveFunctionCollapseModel) \
	NO_API virtual ~UWaveFunctionCollapseModel();


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_121_PROLOG
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveFunctionCollapseModel;

// ********** End Class UWaveFunctionCollapseModel *************************************************

// ********** Begin ScriptStruct FWaveFunctionCollapseTile *****************************************
struct Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics;
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWaveFunctionCollapseTile;
// ********** End ScriptStruct FWaveFunctionCollapseTile *******************************************

// ********** Begin ScriptStruct FWaveFunctionCollapseQueueElement *********************************
struct Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics;
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_242_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWaveFunctionCollapseQueueElement;
// ********** End ScriptStruct FWaveFunctionCollapseQueueElement ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h

// ********** Begin Enum EWaveFunctionCollapseAdjacency ********************************************
#define FOREACH_ENUM_EWAVEFUNCTIONCOLLAPSEADJACENCY(op) \
	op(EWaveFunctionCollapseAdjacency::Front) \
	op(EWaveFunctionCollapseAdjacency::Back) \
	op(EWaveFunctionCollapseAdjacency::Right) \
	op(EWaveFunctionCollapseAdjacency::Left) \
	op(EWaveFunctionCollapseAdjacency::Up) \
	op(EWaveFunctionCollapseAdjacency::Down) 

enum class EWaveFunctionCollapseAdjacency : uint8;
template<> struct TIsUEnumClass<EWaveFunctionCollapseAdjacency> { enum { Value = true }; };
template<> WAVEFUNCTIONCOLLAPSE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWaveFunctionCollapseAdjacency>();
// ********** End Enum EWaveFunctionCollapseAdjacency **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
