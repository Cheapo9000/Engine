// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QosRegionManager.h"

#ifdef QOS_QosRegionManager_generated_h
#error "QosRegionManager.generated.h already included, missing '#pragma once' in QosRegionManager.h"
#endif
#define QOS_QosRegionManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FQosSubspaceComparisonParams **************************************
struct Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics; \
	QOS_API static class UScriptStruct* StaticStruct();


struct FQosSubspaceComparisonParams;
// ********** End ScriptStruct FQosSubspaceComparisonParams ****************************************

// ********** Begin ScriptStruct FQosPingServerInfo ************************************************
struct Z_Construct_UScriptStruct_FQosPingServerInfo_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FQosPingServerInfo_Statics; \
	QOS_API static class UScriptStruct* StaticStruct();


struct FQosPingServerInfo;
// ********** End ScriptStruct FQosPingServerInfo **************************************************

// ********** Begin ScriptStruct FQosDatacenterInfo ************************************************
struct Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_155_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics; \
	QOS_API static class UScriptStruct* StaticStruct();


struct FQosDatacenterInfo;
// ********** End ScriptStruct FQosDatacenterInfo **************************************************

// ********** Begin ScriptStruct FQosRegionInfo ****************************************************
struct Z_Construct_UScriptStruct_FQosRegionInfo_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_202_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FQosRegionInfo_Statics; \
	QOS_API static class UScriptStruct* StaticStruct();


struct FQosRegionInfo;
// ********** End ScriptStruct FQosRegionInfo ******************************************************

// ********** Begin ScriptStruct FDatacenterQosInstance ********************************************
struct Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_262_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics; \
	QOS_API static class UScriptStruct* StaticStruct();


struct FDatacenterQosInstance;
// ********** End ScriptStruct FDatacenterQosInstance **********************************************

// ********** Begin ScriptStruct FRegionQosInstance ************************************************
struct Z_Construct_UScriptStruct_FRegionQosInstance_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_381_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRegionQosInstance_Statics; \
	QOS_API static class UScriptStruct* StaticStruct();


struct FRegionQosInstance;
// ********** End ScriptStruct FRegionQosInstance **************************************************

// ********** Begin Class UQosRegionManager ********************************************************
struct Z_Construct_UClass_UQosRegionManager_Statics;
QOS_API UClass* Z_Construct_UClass_UQosRegionManager_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_458_INCLASS \
private: \
	static void StaticRegisterNativesUQosRegionManager(); \
	friend struct ::Z_Construct_UClass_UQosRegionManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QOS_API UClass* ::Z_Construct_UClass_UQosRegionManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UQosRegionManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Qos"), Z_Construct_UClass_UQosRegionManager_NoRegister) \
	DECLARE_SERIALIZER(UQosRegionManager)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_458_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QOS_API UQosRegionManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQosRegionManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QOS_API, UQosRegionManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQosRegionManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQosRegionManager(UQosRegionManager&&) = delete; \
	UQosRegionManager(const UQosRegionManager&) = delete; \
	QOS_API virtual ~UQosRegionManager();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_454_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_458_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_458_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_458_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQosRegionManager;

// ********** End Class UQosRegionManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h

// ********** Begin Enum EQosDatacenterResult ******************************************************
#define FOREACH_ENUM_EQOSDATACENTERRESULT(op) \
	op(EQosDatacenterResult::Invalid) \
	op(EQosDatacenterResult::Success) \
	op(EQosDatacenterResult::Incomplete) 

enum class EQosDatacenterResult : uint8;
template<> struct TIsUEnumClass<EQosDatacenterResult> { enum { Value = true }; };
template<> QOS_NON_ATTRIBUTED_API UEnum* StaticEnum<EQosDatacenterResult>();
// ********** End Enum EQosDatacenterResult ********************************************************

// ********** Begin Enum EQosCompletionResult ******************************************************
#define FOREACH_ENUM_EQOSCOMPLETIONRESULT(op) \
	op(EQosCompletionResult::Invalid) \
	op(EQosCompletionResult::Success) \
	op(EQosCompletionResult::Failure) \
	op(EQosCompletionResult::Canceled) 

enum class EQosCompletionResult : uint8;
template<> struct TIsUEnumClass<EQosCompletionResult> { enum { Value = true }; };
template<> QOS_NON_ATTRIBUTED_API UEnum* StaticEnum<EQosCompletionResult>();
// ********** End Enum EQosCompletionResult ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
