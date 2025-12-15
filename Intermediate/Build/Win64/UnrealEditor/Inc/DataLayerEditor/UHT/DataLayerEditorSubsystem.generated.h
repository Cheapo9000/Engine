// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLayer/DataLayerEditorSubsystem.h"

#ifdef DATALAYEREDITOR_DataLayerEditorSubsystem_generated_h
#error "DataLayerEditorSubsystem.generated.h already included, missing '#pragma once' in DataLayerEditorSubsystem.h"
#endif
#define DATALAYEREDITOR_DataLayerEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataLayerAsset;
class UDataLayerInstance;
class UDEPRECATED_DataLayer;
class UExternalDataLayerAsset;
enum class EDataLayerRuntimeState : uint8;
struct FActorDataLayer;
struct FDataLayerCreationParameters;

// ********** Begin ScriptStruct FDataLayerCreationParameters **************************************
struct Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics;
#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics; \
	DATALAYEREDITOR_API static class UScriptStruct* StaticStruct();


struct FDataLayerCreationParameters;
// ********** End ScriptStruct FDataLayerCreationParameters ****************************************

// ********** Begin Class UActorEditorContextDataLayerState ****************************************
struct Z_Construct_UClass_UActorEditorContextDataLayerState_Statics;
DATALAYEREDITOR_API UClass* Z_Construct_UClass_UActorEditorContextDataLayerState_NoRegister();

#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorEditorContextDataLayerState(); \
	friend struct ::Z_Construct_UClass_UActorEditorContextDataLayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALAYEREDITOR_API UClass* ::Z_Construct_UClass_UActorEditorContextDataLayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorEditorContextDataLayerState, UActorEditorContextClientState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLayerEditor"), Z_Construct_UClass_UActorEditorContextDataLayerState_NoRegister) \
	DECLARE_SERIALIZER(UActorEditorContextDataLayerState)


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorEditorContextDataLayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorEditorContextDataLayerState(UActorEditorContextDataLayerState&&) = delete; \
	UActorEditorContextDataLayerState(const UActorEditorContextDataLayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorEditorContextDataLayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorEditorContextDataLayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorEditorContextDataLayerState) \
	NO_API virtual ~UActorEditorContextDataLayerState();


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_75_PROLOG
#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorEditorContextDataLayerState;

// ********** End Class UActorEditorContextDataLayerState ******************************************

// ********** Begin Class UDataLayerEditorSubsystem ************************************************
#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDataLayer); \
	DECLARE_FUNCTION(execRenameDataLayer); \
	DECLARE_FUNCTION(execGetDataLayerFromLabel); \
	DECLARE_FUNCTION(execGetDataLayer); \
	DECLARE_FUNCTION(execToggleDataLayersIsDynamicallyLoadedInEditor); \
	DECLARE_FUNCTION(execToggleDataLayerIsDynamicallyLoadedInEditor); \
	DECLARE_FUNCTION(execSetDataLayersIsDynamicallyLoadedInEditor); \
	DECLARE_FUNCTION(execSetDataLayerIsDynamicallyLoadedInEditor); \
	DECLARE_FUNCTION(execUpdateActorAllViewsVisibility); \
	DECLARE_FUNCTION(execUpdateAllViewVisibility); \
	DECLARE_FUNCTION(execGetAllDataLayers); \
	DECLARE_FUNCTION(execDeleteDataLayer); \
	DECLARE_FUNCTION(execDeleteDataLayers); \
	DECLARE_FUNCTION(execSetDataLayerIsInitiallyVisible); \
	DECLARE_FUNCTION(execSetDataLayerInitialRuntimeState); \
	DECLARE_FUNCTION(execSetParentDataLayerForDataLayers); \
	DECLARE_FUNCTION(execSetParentDataLayer); \
	DECLARE_FUNCTION(execCreateDataLayerInstance); \
	DECLARE_FUNCTION(execGetDataLayerInstances); \
	DECLARE_FUNCTION(execGetDataLayerInstance); \
	DECLARE_FUNCTION(execMakeAllDataLayersVisible); \
	DECLARE_FUNCTION(execToggleDataLayersIsLoadedInEditor); \
	DECLARE_FUNCTION(execToggleDataLayerIsLoadedInEditor); \
	DECLARE_FUNCTION(execSetDataLayersIsLoadedInEditor); \
	DECLARE_FUNCTION(execSetDataLayerIsLoadedInEditor); \
	DECLARE_FUNCTION(execToggleDataLayersVisibility); \
	DECLARE_FUNCTION(execToggleDataLayerVisibility); \
	DECLARE_FUNCTION(execSetDataLayersVisibility); \
	DECLARE_FUNCTION(execSetDataLayerVisibility); \
	DECLARE_FUNCTION(execGetActorsFromDataLayers); \
	DECLARE_FUNCTION(execGetActorsFromDataLayer); \
	DECLARE_FUNCTION(execAppendActorsFromDataLayers); \
	DECLARE_FUNCTION(execAppendActorsFromDataLayer); \
	DECLARE_FUNCTION(execUpdateAllActorsVisibility); \
	DECLARE_FUNCTION(execUpdateActorVisibility); \
	DECLARE_FUNCTION(execSelectActorsInDataLayers); \
	DECLARE_FUNCTION(execSelectActorsInDataLayer); \
	DECLARE_FUNCTION(execRemoveSelectedActorsFromDataLayers); \
	DECLARE_FUNCTION(execRemoveSelectedActorsFromDataLayer); \
	DECLARE_FUNCTION(execAddSelectedActorsToDataLayers); \
	DECLARE_FUNCTION(execAddSelectedActorsToDataLayer); \
	DECLARE_FUNCTION(execRemoveActorsFromDataLayers); \
	DECLARE_FUNCTION(execRemoveActorsFromDataLayer); \
	DECLARE_FUNCTION(execAddActorsToDataLayers); \
	DECLARE_FUNCTION(execAddActorsToDataLayer); \
	DECLARE_FUNCTION(execRemoveActorsFromAllDataLayers); \
	DECLARE_FUNCTION(execRemoveActorFromAllDataLayers); \
	DECLARE_FUNCTION(execRemoveActorFromDataLayers); \
	DECLARE_FUNCTION(execRemoveActorFromDataLayer); \
	DECLARE_FUNCTION(execAddActorToDataLayers); \
	DECLARE_FUNCTION(execAddActorToDataLayer); \
	DECLARE_FUNCTION(execIsActorValidForDataLayerInstances); \
	DECLARE_FUNCTION(execIsActorValidForDataLayer); \
	DECLARE_FUNCTION(execGetActorEditorContextCurrentExternalDataLayer); \
	DECLARE_FUNCTION(execSetActorEditorContextCurrentExternalDataLayer); \
	DECLARE_FUNCTION(execRemoveFromActorEditorContext); \
	DECLARE_FUNCTION(execAddToActorEditorContext);


struct Z_Construct_UClass_UDataLayerEditorSubsystem_Statics;
DATALAYEREDITOR_API UClass* Z_Construct_UClass_UDataLayerEditorSubsystem_NoRegister();

#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLayerEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UDataLayerEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALAYEREDITOR_API UClass* ::Z_Construct_UClass_UDataLayerEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLayerEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLayerEditor"), Z_Construct_UClass_UDataLayerEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDataLayerEditorSubsystem)


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_91_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLayerEditorSubsystem(UDataLayerEditorSubsystem&&) = delete; \
	UDataLayerEditorSubsystem(const UDataLayerEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALAYEREDITOR_API, UDataLayerEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLayerEditorSubsystem)


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_88_PROLOG
#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLayerEditorSubsystem;

// ********** End Class UDataLayerEditorSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
