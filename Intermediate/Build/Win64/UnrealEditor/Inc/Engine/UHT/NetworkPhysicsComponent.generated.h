// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/NetworkPhysicsComponent.h"

#ifdef ENGINE_NetworkPhysicsComponent_generated_h
#error "NetworkPhysicsComponent.generated.h already included, missing '#pragma once' in NetworkPhysicsComponent.h"
#endif
#define ENGINE_NetworkPhysicsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNetworkPhysicsDataCollection;
struct FNetworkPhysicsRewindDataImportantInputProxy;
struct FNetworkPhysicsRewindDataImportantStateProxy;
struct FNetworkPhysicsRewindDataInputProxy;

// ********** Begin ScriptStruct FNetworkPhysicsRewindDataProxy ************************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_503_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkPhysicsRewindDataProxy;
// ********** End ScriptStruct FNetworkPhysicsRewindDataProxy **************************************

// ********** Begin ScriptStruct FNetworkPhysicsRewindDataInputProxy *******************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_534_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsRewindDataProxy Super;


struct FNetworkPhysicsRewindDataInputProxy;
// ********** End ScriptStruct FNetworkPhysicsRewindDataInputProxy *********************************

// ********** Begin ScriptStruct FNetworkPhysicsRewindDataRemoteInputProxy *************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataRemoteInputProxy_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_555_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataRemoteInputProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsRewindDataProxy Super;


struct FNetworkPhysicsRewindDataRemoteInputProxy;
// ********** End ScriptStruct FNetworkPhysicsRewindDataRemoteInputProxy ***************************

// ********** Begin ScriptStruct FNetworkPhysicsRewindDataStateProxy *******************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_576_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsRewindDataProxy Super;


struct FNetworkPhysicsRewindDataStateProxy;
// ********** End ScriptStruct FNetworkPhysicsRewindDataStateProxy *********************************

// ********** Begin ScriptStruct FNetworkPhysicsRewindDataImportantInputProxy **********************
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_596_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantInputProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsRewindDataProxy Super;


struct FNetworkPhysicsRewindDataImportantInputProxy;
// ********** End ScriptStruct FNetworkPhysicsRewindDataImportantInputProxy ************************

// ********** Begin ScriptStruct FNetworkPhysicsRewindDataImportantStateProxy **********************
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_617_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataImportantStateProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsRewindDataProxy Super;


struct FNetworkPhysicsRewindDataImportantStateProxy;
// ********** End ScriptStruct FNetworkPhysicsRewindDataImportantStateProxy ************************

// ********** Begin ScriptStruct FNetworkPhysicsRewindDataDeltaSourceStateProxy ********************
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceStateProxy_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_639_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceStateProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsRewindDataProxy Super;


struct FNetworkPhysicsRewindDataDeltaSourceStateProxy;
// ********** End ScriptStruct FNetworkPhysicsRewindDataDeltaSourceStateProxy **********************

// ********** Begin ScriptStruct FNetworkPhysicsRewindDataDeltaSourceInputProxy ********************
struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_660_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataDeltaSourceInputProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsRewindDataProxy Super;


struct FNetworkPhysicsRewindDataDeltaSourceInputProxy;
// ********** End ScriptStruct FNetworkPhysicsRewindDataDeltaSourceInputProxy **********************

// ********** Begin Class UNetworkPhysicsSystem ****************************************************
struct Z_Construct_UClass_UNetworkPhysicsSystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsSystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_726_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPhysicsSystem(); \
	friend struct ::Z_Construct_UClass_UNetworkPhysicsSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkPhysicsSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkPhysicsSystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkPhysicsSystem_NoRegister) \
	DECLARE_SERIALIZER(UNetworkPhysicsSystem)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_726_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkPhysicsSystem(UNetworkPhysicsSystem&&) = delete; \
	UNetworkPhysicsSystem(const UNetworkPhysicsSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkPhysicsSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPhysicsSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkPhysicsSystem) \
	ENGINE_API virtual ~UNetworkPhysicsSystem();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_721_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_726_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_726_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_726_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkPhysicsSystem;

// ********** End Class UNetworkPhysicsSystem ******************************************************

// ********** Begin ScriptStruct FNetworkPhysicsPayload ********************************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsPayload_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_745_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkPhysicsPayload;
// ********** End ScriptStruct FNetworkPhysicsPayload **********************************************

// ********** Begin ScriptStruct FNetworkPhysicsDataCollection *************************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsDataCollection_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_822_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsDataCollection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkPhysicsDataCollection;
// ********** End ScriptStruct FNetworkPhysicsDataCollection ***************************************

// ********** Begin ScriptStruct FNetworkPhysicsData ***********************************************
struct Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_955_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsPayload Super;


struct FNetworkPhysicsData;
// ********** End ScriptStruct FNetworkPhysicsData *************************************************

// ********** Begin Class UNetworkPhysicsComponent *************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_1323_RPC_WRAPPERS \
	ENGINE_API virtual void ServerReceiveInputCollection_Implementation(FNetworkPhysicsDataCollection const& ClientInputCollection); \
	ENGINE_API virtual void MulticastReceiveImportantStateData_Implementation(FNetworkPhysicsRewindDataImportantStateProxy const& ServerStates); \
	ENGINE_API virtual void MulticastReceiveImportantInputData_Implementation(FNetworkPhysicsRewindDataImportantInputProxy const& ServerInputs); \
	ENGINE_API virtual void ServerReceiveImportantInputData_Implementation(FNetworkPhysicsRewindDataImportantInputProxy const& ClientInputs); \
	ENGINE_API virtual void ServerReceiveInputData_Implementation(FNetworkPhysicsRewindDataInputProxy const& ClientInputs); \
	ENGINE_API virtual void ServerReceiveDeltaSourceStateFrame_Implementation(const int32 Frame); \
	ENGINE_API virtual void ServerReceiveDeltaSourceInputFrame_Implementation(const int32 Frame); \
	DECLARE_FUNCTION(execOnRep_SetReplicatedStateCollection); \
	DECLARE_FUNCTION(execOnRep_SetReplicatedRemoteInputCollection); \
	DECLARE_FUNCTION(execOnRep_SetReplicatedInputCollection); \
	DECLARE_FUNCTION(execServerReceiveInputCollection); \
	DECLARE_FUNCTION(execOnRep_SetReplicatedStates); \
	DECLARE_FUNCTION(execOnRep_SetReplicatedRemoteInputs); \
	DECLARE_FUNCTION(execOnRep_SetReplicatedInputs); \
	DECLARE_FUNCTION(execMulticastReceiveImportantStateData); \
	DECLARE_FUNCTION(execMulticastReceiveImportantInputData); \
	DECLARE_FUNCTION(execServerReceiveImportantInputData); \
	DECLARE_FUNCTION(execServerReceiveInputData); \
	DECLARE_FUNCTION(execServerReceiveDeltaSourceStateFrame); \
	DECLARE_FUNCTION(execServerReceiveDeltaSourceInputFrame); \
	DECLARE_FUNCTION(execOnRep_SetReplicatedDeltaSourceState); \
	DECLARE_FUNCTION(execOnRep_SetReplicatedDeltaSourceInput);


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_1323_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UNetworkPhysicsComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_1323_INCLASS \
private: \
	static void StaticRegisterNativesUNetworkPhysicsComponent(); \
	friend struct ::Z_Construct_UClass_UNetworkPhysicsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkPhysicsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister) \
	DECLARE_SERIALIZER(UNetworkPhysicsComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedDeltaSourceInput=NETFIELD_REP_START, \
		ReplicatedDeltaSourceState, \
		ReplicatedInputs, \
		ReplicatedRemoteInputs, \
		ReplicatedStates, \
		ReplicatedInputCollection, \
		ReplicatedRemoteInputCollection, \
		ReplicatedStateCollection, \
		InputsToNetwork_Owner, \
		NETFIELD_REP_END=InputsToNetwork_Owner	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_1323_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNetworkPhysicsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkPhysicsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPhysicsComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkPhysicsComponent(UNetworkPhysicsComponent&&) = delete; \
	UNetworkPhysicsComponent(const UNetworkPhysicsComponent&) = delete; \
	ENGINE_API virtual ~UNetworkPhysicsComponent();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_1320_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_1323_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_1323_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_1323_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_1323_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_1323_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkPhysicsComponent;

// ********** End Class UNetworkPhysicsComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
