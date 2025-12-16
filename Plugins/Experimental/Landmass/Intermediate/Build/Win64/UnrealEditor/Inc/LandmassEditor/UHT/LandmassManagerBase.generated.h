// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandmassManagerBase.h"

#ifdef LANDMASSEDITOR_LandmassManagerBase_generated_h
#error "LandmassManagerBase.generated.h already included, missing '#pragma once' in LandmassManagerBase.h"
#endif
#define LANDMASSEDITOR_LandmassManagerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALandmassActor;
class ALandscape;
class UMaterialInterface;

// ********** Begin ScriptStruct FBrushDataTree ****************************************************
struct Z_Construct_UScriptStruct_FBrushDataTree_Statics;
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBrushDataTree_Statics; \
	LANDMASSEDITOR_API static class UScriptStruct* StaticStruct();


struct FBrushDataTree;
// ********** End ScriptStruct FBrushDataTree ******************************************************

// ********** Begin ScriptStruct FLandmassLandscapeInfo ********************************************
struct Z_Construct_UScriptStruct_FLandmassLandscapeInfo_Statics;
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandmassLandscapeInfo_Statics; \
	LANDMASSEDITOR_API static class UScriptStruct* StaticStruct();


struct FLandmassLandscapeInfo;
// ********** End ScriptStruct FLandmassLandscapeInfo **********************************************

// ********** Begin Class ALandmassManagerBase *****************************************************
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
struct Z_Construct_UClass_ALandmassManagerBase_Statics;
LANDMASSEDITOR_API UClass* Z_Construct_UClass_ALandmassManagerBase_NoRegister();

#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandmassManagerBase(); \
	friend struct ::Z_Construct_UClass_ALandmassManagerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDMASSEDITOR_API UClass* ::Z_Construct_UClass_ALandmassManagerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ALandmassManagerBase, ALandscapeBlueprintBrushBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandmassEditor"), Z_Construct_UClass_ALandmassManagerBase_NoRegister) \
	DECLARE_SERIALIZER(ALandmassManagerBase)


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALandmassManagerBase(ALandmassManagerBase&&) = delete; \
	ALandmassManagerBase(const ALandmassManagerBase&) = delete; \
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


class ALandmassManagerBase;

// ********** End Class ALandmassManagerBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassManagerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
