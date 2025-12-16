// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataRegistryTypes.h"

#ifdef DATAREGISTRY_DataRegistryTypes_generated_h
#error "DataRegistryTypes.generated.h already included, missing '#pragma once' in DataRegistryTypes.h"
#endif
#define DATAREGISTRY_DataRegistryTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataRegistryAcquireStatus : uint8;
struct FDataRegistryId;
struct FDataRegistryLookup;

// ********** Begin ScriptStruct FDataRegistryIdFormat *********************************************
struct Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics;
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics; \
	DATAREGISTRY_API static class UScriptStruct* StaticStruct();


struct FDataRegistryIdFormat;
// ********** End ScriptStruct FDataRegistryIdFormat ***********************************************

// ********** Begin ScriptStruct FDataRegistryCachePolicy ******************************************
struct Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics;
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics; \
	DATAREGISTRY_API static class UScriptStruct* StaticStruct();


struct FDataRegistryCachePolicy;
// ********** End ScriptStruct FDataRegistryCachePolicy ********************************************

// ********** Begin ScriptStruct FDataRegistryLookup ***********************************************
struct Z_Construct_UScriptStruct_FDataRegistryLookup_Statics;
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataRegistryLookup_Statics; \
	DATAREGISTRY_API static class UScriptStruct* StaticStruct();


struct FDataRegistryLookup;
// ********** End ScriptStruct FDataRegistryLookup *************************************************

// ********** Begin ScriptStruct FDataRegistrySourceItemId *****************************************
struct Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics;
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_168_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics; \
	DATAREGISTRY_API static class UScriptStruct* StaticStruct();


struct FDataRegistrySourceItemId;
// ********** End ScriptStruct FDataRegistrySourceItemId *******************************************

// ********** Begin Delegate FDataRegistryItemAcquiredBPCallback ***********************************
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_533_DELEGATE \
DATAREGISTRY_API void FDataRegistryItemAcquiredBPCallback_DelegateWrapper(const FScriptDelegate& DataRegistryItemAcquiredBPCallback, FDataRegistryId ItemId, FDataRegistryLookup ResolvedLookup, EDataRegistryAcquireStatus Status);


// ********** End Delegate FDataRegistryItemAcquiredBPCallback *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h

// ********** Begin Enum EDataRegistryAvailability *************************************************
#define FOREACH_ENUM_EDATAREGISTRYAVAILABILITY(op) \
	op(EDataRegistryAvailability::DoesNotExist) \
	op(EDataRegistryAvailability::Unknown) \
	op(EDataRegistryAvailability::Remote) \
	op(EDataRegistryAvailability::OnDisk) \
	op(EDataRegistryAvailability::LocalAsset) \
	op(EDataRegistryAvailability::PreCached) 

enum class EDataRegistryAvailability : uint8;
template<> struct TIsUEnumClass<EDataRegistryAvailability> { enum { Value = true }; };
template<> DATAREGISTRY_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataRegistryAvailability>();
// ********** End Enum EDataRegistryAvailability ***************************************************

// ********** Begin Enum EDataRegistryAcquireStatus ************************************************
#define FOREACH_ENUM_EDATAREGISTRYACQUIRESTATUS(op) \
	op(EDataRegistryAcquireStatus::NotStarted) \
	op(EDataRegistryAcquireStatus::WaitingForInitialAcquire) \
	op(EDataRegistryAcquireStatus::InitialAcquireFinished) \
	op(EDataRegistryAcquireStatus::WaitingForResources) \
	op(EDataRegistryAcquireStatus::AcquireFinished) \
	op(EDataRegistryAcquireStatus::AcquireError) \
	op(EDataRegistryAcquireStatus::DoesNotExist) 

enum class EDataRegistryAcquireStatus : uint8;
template<> struct TIsUEnumClass<EDataRegistryAcquireStatus> { enum { Value = true }; };
template<> DATAREGISTRY_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataRegistryAcquireStatus>();
// ********** End Enum EDataRegistryAcquireStatus **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
