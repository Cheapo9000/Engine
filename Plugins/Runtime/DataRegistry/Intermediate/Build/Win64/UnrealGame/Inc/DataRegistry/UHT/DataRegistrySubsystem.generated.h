// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataRegistrySubsystem.h"

#ifdef DATAREGISTRY_DataRegistrySubsystem_generated_h
#error "DataRegistrySubsystem.generated.h already included, missing '#pragma once' in DataRegistrySubsystem.h"
#endif
#define DATAREGISTRY_DataRegistrySubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataRegistrySubsystemGetItemResult : uint8;
struct FDataRegistryId;
struct FDataRegistryLookup;
struct FDataRegistryType;
struct FTableRowBase;

// ********** Begin Class UDataRegistrySubsystem ***************************************************
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotEqual_DataRegistryId); \
	DECLARE_FUNCTION(execEqualEqual_DataRegistryId); \
	DECLARE_FUNCTION(execConv_DataRegistryIdToString); \
	DECLARE_FUNCTION(execIsValidDataRegistryId); \
	DECLARE_FUNCTION(execNotEqual_DataRegistryType); \
	DECLARE_FUNCTION(execEqualEqual_DataRegistryType); \
	DECLARE_FUNCTION(execConv_DataRegistryTypeToString); \
	DECLARE_FUNCTION(execIsValidDataRegistryType); \
	DECLARE_FUNCTION(execEvaluateDataRegistryCurve); \
	DECLARE_FUNCTION(execGetPossibleDataRegistryIdList); \
	DECLARE_FUNCTION(execAcquireItemBP);


struct Z_Construct_UClass_UDataRegistrySubsystem_Statics;
	struct Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics; \
	struct Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics; \
	struct Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemFromLookupBP_Statics; \
	struct Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics; \
DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataRegistrySubsystem(); \
	friend struct ::Z_Construct_UClass_UDataRegistrySubsystem_Statics; \
	friend struct ::Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics; \
	friend struct ::Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics; \
	friend struct ::Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemFromLookupBP_Statics; \
	friend struct ::Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAREGISTRY_API UClass* ::Z_Construct_UClass_UDataRegistrySubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataRegistrySubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataRegistry"), Z_Construct_UClass_UDataRegistrySubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDataRegistrySubsystem)


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAREGISTRY_API UDataRegistrySubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataRegistrySubsystem(UDataRegistrySubsystem&&) = delete; \
	UDataRegistrySubsystem(const UDataRegistrySubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAREGISTRY_API, UDataRegistrySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataRegistrySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataRegistrySubsystem) \
	DATAREGISTRY_API virtual ~UDataRegistrySubsystem();


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataRegistrySubsystem;

// ********** End Class UDataRegistrySubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h

// ********** Begin Enum EDataRegistrySubsystemGetItemResult ***************************************
#define FOREACH_ENUM_EDATAREGISTRYSUBSYSTEMGETITEMRESULT(op) \
	op(EDataRegistrySubsystemGetItemResult::Found) \
	op(EDataRegistrySubsystemGetItemResult::NotFound) 

enum class EDataRegistrySubsystemGetItemResult : uint8;
template<> struct TIsUEnumClass<EDataRegistrySubsystemGetItemResult> { enum { Value = true }; };
template<> DATAREGISTRY_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataRegistrySubsystemGetItemResult>();
// ********** End Enum EDataRegistrySubsystemGetItemResult *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
