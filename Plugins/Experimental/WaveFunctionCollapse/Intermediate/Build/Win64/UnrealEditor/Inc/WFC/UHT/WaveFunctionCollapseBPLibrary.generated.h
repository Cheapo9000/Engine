// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveFunctionCollapseBPLibrary.h"

#ifdef WAVEFUNCTIONCOLLAPSE_WaveFunctionCollapseBPLibrary_generated_h
#error "WaveFunctionCollapseBPLibrary.generated.h already included, missing '#pragma once' in WaveFunctionCollapseBPLibrary.h"
#endif
#define WAVEFUNCTIONCOLLAPSE_WaveFunctionCollapseBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWaveFunctionCollapseModel;
enum class EWaveFunctionCollapseAdjacency : uint8;
struct FSoftObjectPath;
struct FWaveFunctionCollapseAdjacencyToOptionsMap;
struct FWaveFunctionCollapseOption;
struct FWaveFunctionCollapseTile;

// ********** Begin ScriptStruct FWaveFunctionCollapseNeighbor *************************************
struct Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics;
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighbor_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWaveFunctionCollapseNeighbor;
// ********** End ScriptStruct FWaveFunctionCollapseNeighbor ***************************************

// ********** Begin ScriptStruct FWaveFunctionCollapseNeighborRule *********************************
struct Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics;
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaveFunctionCollapseNeighborRule_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWaveFunctionCollapseNeighborRule;
// ********** End ScriptStruct FWaveFunctionCollapseNeighborRule ***********************************

// ********** Begin Class UWaveFunctionCollapseBPLibrary *******************************************
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_51_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMakeVoidOption); \
	DECLARE_FUNCTION(execMakeBorderOption); \
	DECLARE_FUNCTION(execMakeEmptyOption); \
	DECLARE_FUNCTION(execGetPositionToOptionMapFromActor); \
	DECLARE_FUNCTION(execDeriveModelFromActors); \
	DECLARE_FUNCTION(execSanitizeRotator); \
	DECLARE_FUNCTION(execIsSoftObjPathEqual); \
	DECLARE_FUNCTION(execAddToAdjacencyToOptionsMap); \
	DECLARE_FUNCTION(execGetNextZAxisClockwiseAdjacency); \
	DECLARE_FUNCTION(execGetOppositeAdjacency); \
	DECLARE_FUNCTION(execIsOptionContained); \
	DECLARE_FUNCTION(execGetAdjacentPositions); \
	DECLARE_FUNCTION(execGetAdjacentIndices); \
	DECLARE_FUNCTION(execBuildInitialTile); \
	DECLARE_FUNCTION(execIndexAsPosition); \
	DECLARE_FUNCTION(execPositionAsIndex); \
	DECLARE_FUNCTION(execCalculateShannonEntropy);


struct Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics;
WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUWaveFunctionCollapseBPLibrary(); \
	friend struct ::Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WAVEFUNCTIONCOLLAPSE_API UClass* ::Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveFunctionCollapseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveFunctionCollapse"), Z_Construct_UClass_UWaveFunctionCollapseBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWaveFunctionCollapseBPLibrary)


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveFunctionCollapseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveFunctionCollapseBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveFunctionCollapseBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveFunctionCollapseBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveFunctionCollapseBPLibrary(UWaveFunctionCollapseBPLibrary&&) = delete; \
	UWaveFunctionCollapseBPLibrary(const UWaveFunctionCollapseBPLibrary&) = delete; \
	NO_API virtual ~UWaveFunctionCollapseBPLibrary();


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_48_PROLOG
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_51_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_51_INCLASS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveFunctionCollapseBPLibrary;

// ********** End Class UWaveFunctionCollapseBPLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
