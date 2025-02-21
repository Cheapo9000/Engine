// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandmassManagerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALandmassActor;
class ALandscape;
class UMaterialInterface;
#ifdef LANDMASSEDITOR_LandmassManagerBase_generated_h
#error "LandmassManagerBase.generated.h already included, missing '#pragma once' in LandmassManagerBase.h"
#endif
#define LANDMASSEDITOR_LandmassManagerBase_generated_h

#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBrushDataTree_Statics; \
	LANDMASSEDITOR_API static class UScriptStruct* StaticStruct();


template<> LANDMASSEDITOR_API UScriptStruct* StaticStruct<struct FBrushDataTree>();

#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandmassLandscapeInfo_Statics; \
	LANDMASSEDITOR_API static class UScriptStruct* StaticStruct();


template<> LANDMASSEDITOR_API UScriptStruct* StaticStruct<struct FLandmassLandscapeInfo>();

#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ActorSelectionChanged_Implementation(bool bSelected); \
	virtual void TogglePreviewMode_Implementation(bool bEnablePreviewMode); \
	virtual void LaunchLandmassEditor_Implementation(ALandmassActor* BrushRequestingEditor); \
	virtual void DrawBrushMaterial_Implementation(ALandmassActor* Brush, UMaterialInterface* BrushMaterial); \
	virtual void RequestUpdateFromBrush_Implementation(ALandmassActor* BrushRequestingUpdate); \
	DECLARE_FUNCTION(execActorSelectionChanged); \
	DECLARE_FUNCTION(execGetLandscape); \
	DECLARE_FUNCTION(execSetCaptureBoundaryNormals); \
	DECLARE_FUNCTION(execTogglePreviewMode); \
	DECLARE_FUNCTION(execLaunchLandmassEditor); \
	DECLARE_FUNCTION(execDrawBrushMaterial); \
	DECLARE_FUNCTION(execRequestUpdateFromBrush); \
	DECLARE_FUNCTION(execAddBrushToArray); \
	DECLARE_FUNCTION(execAddBrushToTree); \
	DECLARE_FUNCTION(execSortBrushes); \
	DECLARE_FUNCTION(execRemoveBrushFromTree); \
	DECLARE_FUNCTION(execGetNodesWithinExtents); \
	DECLARE_FUNCTION(execConsolidateNodes); \
	DECLARE_FUNCTION(execUpdateChildDataCounts); \
	DECLARE_FUNCTION(execGetActorsWithinModifiedNodes); \
	DECLARE_FUNCTION(execPopulateNodeTree); \
	DECLARE_FUNCTION(execSetTargetLandscape);


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandmassManagerBase(); \
	friend struct Z_Construct_UClass_ALandmassManagerBase_Statics; \
public: \
	DECLARE_CLASS(ALandmassManagerBase, ALandscapeBlueprintBrushBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandmassEditor"), NO_API) \
	DECLARE_SERIALIZER(ALandmassManagerBase)


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandmassManagerBase(ALandmassManagerBase&&); \
	ALandmassManagerBase(const ALandmassManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandmassManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandmassManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALandmassManagerBase) \
	NO_API virtual ~ALandmassManagerBase();


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_58_PROLOG
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDMASSEDITOR_API UClass* StaticClass<class ALandmassManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
