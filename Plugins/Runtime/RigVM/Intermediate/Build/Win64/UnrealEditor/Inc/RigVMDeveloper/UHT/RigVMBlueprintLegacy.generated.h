// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMBlueprintLegacy.h"

#ifdef RIGVMDEVELOPER_RigVMBlueprintLegacy_generated_h
#error "RigVMBlueprintLegacy.generated.h already included, missing '#pragma once' in RigVMBlueprintLegacy.h"
#endif
#define RIGVMDEVELOPER_RigVMBlueprintLegacy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UEdGraph;
class UObject;
class URigVMController;
class URigVMFunctionLibrary;
class URigVMGraph;
class URigVMHost;
class UStruct;
struct FGuid;
struct FRigVMGraphVariableDescription;
struct FRigVMVariant;
struct FRigVMVariantRef;

// ********** Begin ScriptStruct FRigVMOldPublicFunctionArg ****************************************
struct Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRigVMOldPublicFunctionArg;
// ********** End ScriptStruct FRigVMOldPublicFunctionArg ******************************************

// ********** Begin ScriptStruct FRigVMOldPublicFunctionData ***************************************
struct Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRigVMOldPublicFunctionData;
// ********** End ScriptStruct FRigVMOldPublicFunctionData *****************************************

// ********** Begin Class URigVMBlueprint **********************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAvailableRigVMStructs); \
	DECLARE_FUNCTION(execGetDebuggedRigVMHost); \
	DECLARE_FUNCTION(execCreateRigVMHost); \
	DECLARE_FUNCTION(execGetRigVMHostClass);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execSuspendNotifications); \
	DECLARE_FUNCTION(execGetMatchingVariants); \
	DECLARE_FUNCTION(execJoinAssetVariant); \
	DECLARE_FUNCTION(execSplitAssetVariant); \
	DECLARE_FUNCTION(execGetAssetVariantRef); \
	DECLARE_FUNCTION(execGetAssetVariantBP); \
	DECLARE_FUNCTION(execChangeMemberVariableType); \
	DECLARE_FUNCTION(execRenameMemberVariable); \
	DECLARE_FUNCTION(execBulkRemoveMemberVariables); \
	DECLARE_FUNCTION(execRemoveMemberVariable); \
	DECLARE_FUNCTION(execAddMemberVariable); \
	DECLARE_FUNCTION(execGetMemberVariables); \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execGetOrCreateController); \
	DECLARE_FUNCTION(execGetControllerByName); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetFocusedModel); \
	DECLARE_FUNCTION(execRemoveModel); \
	DECLARE_FUNCTION(execAddModel); \
	DECLARE_FUNCTION(execGetOrCreateLocalFunctionLibrary); \
	DECLARE_FUNCTION(execGetLocalFunctionLibrary); \
	DECLARE_FUNCTION(execGetAllModels); \
	DECLARE_FUNCTION(execGetDefaultModel); \
	DECLARE_FUNCTION(execGetModel); \
	DECLARE_FUNCTION(execRequestRigVMInit); \
	DECLARE_FUNCTION(execGetAutoVMRecompile); \
	DECLARE_FUNCTION(execSetAutoVMRecompile); \
	DECLARE_FUNCTION(execRequestAutoVMRecompilation); \
	DECLARE_FUNCTION(execRecompileVMIfRequired); \
	DECLARE_FUNCTION(execRecompileVM);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMBlueprint, NO_API)


struct Z_Construct_UClass_URigVMBlueprint_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMBlueprint_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_INCLASS \
private: \
	static void StaticRegisterNativesURigVMBlueprint(); \
	friend struct ::Z_Construct_UClass_URigVMBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMBlueprint_NoRegister) \
	DECLARE_SERIALIZER(URigVMBlueprint) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<URigVMBlueprint*>(this); }


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMBlueprint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMBlueprint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMBlueprint(URigVMBlueprint&&) = delete; \
	URigVMBlueprint(const URigVMBlueprint&) = delete; \
	NO_API virtual ~URigVMBlueprint();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_93_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_RPC_WRAPPERS_EOD \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_INCLASS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMBlueprint;

// ********** End Class URigVMBlueprint ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprintLegacy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
