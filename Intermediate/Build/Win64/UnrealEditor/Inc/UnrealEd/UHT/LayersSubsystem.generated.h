// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layers/LayersSubsystem.h"

#ifdef UNREALED_LayersSubsystem_generated_h
#error "LayersSubsystem.generated.h already included, missing '#pragma once' in LayersSubsystem.h"
#endif
#define UNREALED_LayersSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULayer;
class ULevel;
class UWorld;

// ********** Begin Class ULayersSubsystem *********************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEditorRefreshLayerBrowser); \
	DECLARE_FUNCTION(execEditorMapChange); \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execRenameLayer); \
	DECLARE_FUNCTION(execDeleteLayer); \
	DECLARE_FUNCTION(execDeleteLayers); \
	DECLARE_FUNCTION(execCreateLayer); \
	DECLARE_FUNCTION(execAddAllLayersTo); \
	DECLARE_FUNCTION(execAddAllLayerNamesTo); \
	DECLARE_FUNCTION(execTryGetLayer); \
	DECLARE_FUNCTION(execIsLayer); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execMakeAllLayersVisible); \
	DECLARE_FUNCTION(execToggleLayersVisibility); \
	DECLARE_FUNCTION(execToggleLayerVisibility); \
	DECLARE_FUNCTION(execSetLayersVisibility); \
	DECLARE_FUNCTION(execSetLayerVisibility); \
	DECLARE_FUNCTION(execGetActorsFromLayers); \
	DECLARE_FUNCTION(execGetActorsFromLayer); \
	DECLARE_FUNCTION(execAppendActorsFromLayers); \
	DECLARE_FUNCTION(execAppendActorsFromLayer); \
	DECLARE_FUNCTION(execUpdateAllActorsVisibility); \
	DECLARE_FUNCTION(execUpdateActorVisibility); \
	DECLARE_FUNCTION(execUpdateActorAllViewsVisibility); \
	DECLARE_FUNCTION(execUpdateAllViewVisibility); \
	DECLARE_FUNCTION(execSelectActorsInLayers); \
	DECLARE_FUNCTION(execSelectActorsInLayer); \
	DECLARE_FUNCTION(execRemoveSelectedActorsFromLayers); \
	DECLARE_FUNCTION(execRemoveSelectedActorsFromLayer); \
	DECLARE_FUNCTION(execAddSelectedActorsToLayers); \
	DECLARE_FUNCTION(execAddSelectedActorsToLayer); \
	DECLARE_FUNCTION(execGetSelectedActors); \
	DECLARE_FUNCTION(execRemoveActorsFromLayers); \
	DECLARE_FUNCTION(execRemoveActorsFromLayer); \
	DECLARE_FUNCTION(execDisassociateActorsFromLayers); \
	DECLARE_FUNCTION(execAddActorsToLayers); \
	DECLARE_FUNCTION(execAddActorsToLayer); \
	DECLARE_FUNCTION(execRemoveActorFromLayers); \
	DECLARE_FUNCTION(execRemoveActorFromLayer); \
	DECLARE_FUNCTION(execAddActorToLayers); \
	DECLARE_FUNCTION(execAddActorToLayer); \
	DECLARE_FUNCTION(execDisassociateActorFromLayers); \
	DECLARE_FUNCTION(execInitializeNewActorLayers); \
	DECLARE_FUNCTION(execIsActorValidForLayer); \
	DECLARE_FUNCTION(execRemoveLevelLayerInformation); \
	DECLARE_FUNCTION(execAddLevelLayerInformation);


struct Z_Construct_UClass_ULayersSubsystem_Statics;
UNREALED_API UClass* Z_Construct_UClass_ULayersSubsystem_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayersSubsystem(); \
	friend struct ::Z_Construct_UClass_ULayersSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_ULayersSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULayersSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_ULayersSubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULayersSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API ULayersSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULayersSubsystem(ULayersSubsystem&&) = delete; \
	ULayersSubsystem(const ULayersSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULayersSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayersSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULayersSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_43_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULayersSubsystem;

// ********** End Class ULayersSubsystem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
