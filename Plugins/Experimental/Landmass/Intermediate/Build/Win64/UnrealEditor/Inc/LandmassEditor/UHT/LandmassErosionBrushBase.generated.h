// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandmassErosionBrushBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALandscape;
#ifdef LANDMASSEDITOR_LandmassErosionBrushBase_generated_h
#error "LandmassErosionBrushBase.generated.h already included, missing '#pragma once' in LandmassErosionBrushBase.h"
#endif
#define LANDMASSEDITOR_LandmassErosionBrushBase_generated_h

#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ActorSelectionChanged_Implementation(bool bSelected); \
	DECLARE_FUNCTION(execActorSelectionChanged); \
	DECLARE_FUNCTION(execGetLandscape); \
	DECLARE_FUNCTION(execSetTargetLandscape);


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h_15_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandmassErosionBrushBase(); \
	friend struct Z_Construct_UClass_ALandmassErosionBrushBase_Statics; \
public: \
	DECLARE_CLASS(ALandmassErosionBrushBase, ALandscapeBlueprintBrushBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandmassEditor"), NO_API) \
	DECLARE_SERIALIZER(ALandmassErosionBrushBase)


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandmassErosionBrushBase(ALandmassErosionBrushBase&&); \
	ALandmassErosionBrushBase(const ALandmassErosionBrushBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandmassErosionBrushBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandmassErosionBrushBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALandmassErosionBrushBase) \
	NO_API virtual ~ALandmassErosionBrushBase();


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDMASSEDITOR_API UClass* StaticClass<class ALandmassErosionBrushBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassErosionBrushBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
