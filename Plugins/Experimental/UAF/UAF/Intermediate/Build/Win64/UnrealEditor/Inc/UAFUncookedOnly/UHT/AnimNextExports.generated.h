// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextExports.h"

#ifdef UAFUNCOOKEDONLY_AnimNextExports_generated_h
#error "AnimNextExports.generated.h already included, missing '#pragma once' in AnimNextExports.h"
#endif
#define UAFUNCOOKEDONLY_AnimNextExports_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNextExportData ***********************************************
struct Z_Construct_UScriptStruct_FAnimNextExportData_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_AnimNextExports_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextExportData_Statics; \
	UAFUNCOOKEDONLY_API static class UScriptStruct* StaticStruct();


struct FAnimNextExportData;
// ********** End ScriptStruct FAnimNextExportData *************************************************

// ********** Begin ScriptStruct FAnimNextExport ***************************************************
struct Z_Construct_UScriptStruct_FAnimNextExport_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_AnimNextExports_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextExport_Statics; \
	UAFUNCOOKEDONLY_API static class UScriptStruct* StaticStruct();


struct FAnimNextExport;
// ********** End ScriptStruct FAnimNextExport *****************************************************

// ********** Begin ScriptStruct FAnimNextVariableReferenceData ************************************
struct Z_Construct_UScriptStruct_FAnimNextVariableReferenceData_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_AnimNextExports_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextVariableReferenceData_Statics; \
	UAFUNCOOKEDONLY_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextExportData Super;


struct FAnimNextVariableReferenceData;
// ********** End ScriptStruct FAnimNextVariableReferenceData **************************************

// ********** Begin ScriptStruct FAnimNextVariableDeclarationData **********************************
struct Z_Construct_UScriptStruct_FAnimNextVariableDeclarationData_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_AnimNextExports_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextVariableDeclarationData_Statics; \
	UAFUNCOOKEDONLY_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextExportData Super;


struct FAnimNextVariableDeclarationData;
// ********** End ScriptStruct FAnimNextVariableDeclarationData ************************************

// ********** Begin ScriptStruct FAnimNextManifestNodeData *****************************************
struct Z_Construct_UScriptStruct_FAnimNextManifestNodeData_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_AnimNextExports_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextManifestNodeData_Statics; \
	UAFUNCOOKEDONLY_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNextExportData Super;


struct FAnimNextManifestNodeData;
// ********** End ScriptStruct FAnimNextManifestNodeData *******************************************

// ********** Begin ScriptStruct FAnimNextAssetRegistryExports *************************************
struct Z_Construct_UScriptStruct_FAnimNextAssetRegistryExports_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_AnimNextExports_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextAssetRegistryExports_Statics; \
	UAFUNCOOKEDONLY_API static class UScriptStruct* StaticStruct();


struct FAnimNextAssetRegistryExports;
// ********** End ScriptStruct FAnimNextAssetRegistryExports ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFUncookedOnly_Public_AnimNextExports_h

// ********** Begin Enum EAnimNextExportedVariableFlags ********************************************
#define FOREACH_ENUM_EANIMNEXTEXPORTEDVARIABLEFLAGS(op) \
	op(EAnimNextExportedVariableFlags::NoFlags) \
	op(EAnimNextExportedVariableFlags::Public) \
	op(EAnimNextExportedVariableFlags::Read) \
	op(EAnimNextExportedVariableFlags::Write) \
	op(EAnimNextExportedVariableFlags::Declared) \
	op(EAnimNextExportedVariableFlags::Referenced) \
	op(EAnimNextExportedVariableFlags::Max) 

enum class EAnimNextExportedVariableFlags : uint32;
template<> struct TIsUEnumClass<EAnimNextExportedVariableFlags> { enum { Value = true }; };
template<> UAFUNCOOKEDONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNextExportedVariableFlags>();
// ********** End Enum EAnimNextExportedVariableFlags **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
