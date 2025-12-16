// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StormSyncPackageDescriptor.h"

#ifdef STORMSYNCCORE_StormSyncPackageDescriptor_generated_h
#error "StormSyncPackageDescriptor.generated.h already included, missing '#pragma once' in StormSyncPackageDescriptor.h"
#endif
#define STORMSYNCCORE_StormSyncPackageDescriptor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStormSyncFileDependency ******************************************
struct Z_Construct_UScriptStruct_FStormSyncFileDependency_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncPackageDescriptor_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncFileDependency_Statics; \
	STORMSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncFileDependency;
// ********** End ScriptStruct FStormSyncFileDependency ********************************************

// ********** Begin ScriptStruct FStormSyncPackageDescriptor ***************************************
struct Z_Construct_UScriptStruct_FStormSyncPackageDescriptor_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncPackageDescriptor_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncPackageDescriptor_Statics; \
	STORMSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncPackageDescriptor;
// ********** End ScriptStruct FStormSyncPackageDescriptor *****************************************

// ********** Begin ScriptStruct FStormSyncFileModifierInfo ****************************************
struct Z_Construct_UScriptStruct_FStormSyncFileModifierInfo_Statics;
#define FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncPackageDescriptor_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStormSyncFileModifierInfo_Statics; \
	STORMSYNCCORE_API static class UScriptStruct* StaticStruct();


struct FStormSyncFileModifierInfo;
// ********** End ScriptStruct FStormSyncFileModifierInfo ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncPackageDescriptor_h

// ********** Begin Enum EStormSyncModifierOperation ***********************************************
#define FOREACH_ENUM_ESTORMSYNCMODIFIEROPERATION(op) \
	op(EStormSyncModifierOperation::Addition) \
	op(EStormSyncModifierOperation::Missing) \
	op(EStormSyncModifierOperation::Overwrite) 

enum class EStormSyncModifierOperation : uint8;
template<> struct TIsUEnumClass<EStormSyncModifierOperation> { enum { Value = true }; };
template<> STORMSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStormSyncModifierOperation>();
// ********** End Enum EStormSyncModifierOperation *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
