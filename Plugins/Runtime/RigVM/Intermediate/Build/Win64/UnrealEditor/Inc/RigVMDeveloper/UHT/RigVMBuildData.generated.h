// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMBuildData.h"

#ifdef RIGVMDEVELOPER_RigVMBuildData_generated_h
#error "RigVMBuildData.generated.h already included, missing '#pragma once' in RigVMBuildData.h"
#endif
#define RIGVMDEVELOPER_RigVMBuildData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMBuildData;
struct FAssetData;
struct FGuid;
struct FRigVMGraphFunctionIdentifier;
struct FRigVMVariantRef;
struct FSoftObjectPath;

// ********** Begin ScriptStruct FRigVMFunctionReferenceArray **************************************
struct Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMFunctionReferenceArray;
// ********** End ScriptStruct FRigVMFunctionReferenceArray ****************************************

// ********** Begin ScriptStruct FRigVMReferenceNodeData *******************************************
struct Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMReferenceNodeData_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMReferenceNodeData;
// ********** End ScriptStruct FRigVMReferenceNodeData *********************************************

// ********** Begin Class URigVMBuildData **********************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUsedFunctionIdentifiers); \
	DECLARE_FUNCTION(execJoinVariantSet); \
	DECLARE_FUNCTION(execSplitVariantFromSet); \
	DECLARE_FUNCTION(execGetAssetDataForVariant); \
	DECLARE_FUNCTION(execGetVariantRefForAsset); \
	DECLARE_FUNCTION(execGetAssetDataForPath); \
	DECLARE_FUNCTION(execCreateAssetVariant); \
	DECLARE_FUNCTION(execFindAssetVariantRefs); \
	DECLARE_FUNCTION(execGatherAllAssetVariantRefs); \
	DECLARE_FUNCTION(execCreateFunctionVariant); \
	DECLARE_FUNCTION(execGetFunctionIdentifierForVariant); \
	DECLARE_FUNCTION(execFindFunctionVariantRefs); \
	DECLARE_FUNCTION(execGatherFunctionVariantRefsForAsset); \
	DECLARE_FUNCTION(execGatherAllFunctionVariantRefs); \
	DECLARE_FUNCTION(execGet);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_72_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetAllFunctionIdentifiers);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_72_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_URigVMBuildData_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMBuildData_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMBuildData(); \
	friend struct ::Z_Construct_UClass_URigVMBuildData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMBuildData_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMBuildData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMBuildData_NoRegister) \
	DECLARE_SERIALIZER(URigVMBuildData)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_72_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMBuildData(URigVMBuildData&&) = delete; \
	URigVMBuildData(const URigVMBuildData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMBuildData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMBuildData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMBuildData) \
	RIGVMDEVELOPER_API virtual ~URigVMBuildData();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_69_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_72_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMBuildData;

// ********** End Class URigVMBuildData ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMBuildData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
