// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMEditorBlueprintLibrary.h"

#ifdef RIGVMEDITOR_RigVMEditorBlueprintLibrary_generated_h
#error "RigVMEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in RigVMEditorBlueprintLibrary.h"
#endif
#define RIGVMEDITOR_RigVMEditorBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class URigVMBlueprint;
class URigVMController;
class URigVMGraph;
class URigVMNode;
struct FAssetData;
struct FRigVMBlueprintLoadLogEntry;

// ********** Begin ScriptStruct FRigVMBlueprintLoadLogEntry ***************************************
struct Z_Construct_UScriptStruct_FRigVMBlueprintLoadLogEntry_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMBlueprintLoadLogEntry_Statics; \
	RIGVMEDITOR_API static class UScriptStruct* StaticStruct();


struct FRigVMBlueprintLoadLogEntry;
// ********** End ScriptStruct FRigVMBlueprintLoadLogEntry *****************************************

// ********** Begin Delegate FRigVMAssetDataFilterDynamic ******************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_55_DELEGATE \
RIGVMEDITOR_API bool FRigVMAssetDataFilterDynamic_DelegateWrapper(const FScriptDelegate& RigVMAssetDataFilterDynamic, FAssetData AssetData);


// ********** End Delegate FRigVMAssetDataFilterDynamic ********************************************

// ********** Begin Delegate FRigVMBlueprintFilterDynamic ******************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_56_DELEGATE \
RIGVMEDITOR_API bool FRigVMBlueprintFilterDynamic_DelegateWrapper(const FScriptDelegate& RigVMBlueprintFilterDynamic, const URigVMBlueprint* Blueprint, const TArray<FRigVMBlueprintLoadLogEntry>& LogDuringLoad);


// ********** End Delegate FRigVMBlueprintFilterDynamic ********************************************

// ********** Begin Delegate FRigVMNodeFilterDynamic ***********************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_57_DELEGATE \
RIGVMEDITOR_API bool FRigVMNodeFilterDynamic_DelegateWrapper(const FScriptDelegate& RigVMNodeFilterDynamic, const URigVMBlueprint* Blueprint, const URigVMNode* Node);


// ********** End Delegate FRigVMNodeFilterDynamic *************************************************

// ********** Begin Class URigVMEditorBlueprintLibrary *********************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssetsWithFilter_ForBlueprint); \
	DECLARE_FUNCTION(execLoadAssetsWithAssetDataAndNodeFilters_ForBlueprint); \
	DECLARE_FUNCTION(execLoadAssetsWithAssetDataAndBlueprintFilters_ForBlueprint); \
	DECLARE_FUNCTION(execLoadAssetsWithNodeFilter_ForBlueprint); \
	DECLARE_FUNCTION(execLoadAssetsWithAssetDataFilter_ForBlueprint); \
	DECLARE_FUNCTION(execLoadAssetsWithBlueprintFilter_ForBlueprint); \
	DECLARE_FUNCTION(execLoadAssetsByClass); \
	DECLARE_FUNCTION(execLoadAssets); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetModel); \
	DECLARE_FUNCTION(execRequestAutoVMRecompilation); \
	DECLARE_FUNCTION(execRecompileVMIfRequired); \
	DECLARE_FUNCTION(execRecompileVM);


struct Z_Construct_UClass_URigVMEditorBlueprintLibrary_Statics;
RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEditorBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMEditorBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_URigVMEditorBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMEDITOR_API UClass* ::Z_Construct_UClass_URigVMEditorBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMEditor"), Z_Construct_UClass_URigVMEditorBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(URigVMEditorBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMEDITOR_API URigVMEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMEditorBlueprintLibrary(URigVMEditorBlueprintLibrary&&) = delete; \
	URigVMEditorBlueprintLibrary(const URigVMEditorBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMEDITOR_API, URigVMEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMEditorBlueprintLibrary) \
	RIGVMEDITOR_API virtual ~URigVMEditorBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_59_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMEditorBlueprintLibrary;

// ********** End Class URigVMEditorBlueprintLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_RigVMEditorBlueprintLibrary_h

// ********** Begin Enum ERigVMBlueprintLoadLogSeverity ********************************************
#define FOREACH_ENUM_ERIGVMBLUEPRINTLOADLOGSEVERITY(op) \
	op(Display) \
	op(Warning) \
	op(Error) 

enum ERigVMBlueprintLoadLogSeverity : uint8;
template<> RIGVMEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMBlueprintLoadLogSeverity>();
// ********** End Enum ERigVMBlueprintLoadLogSeverity **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
