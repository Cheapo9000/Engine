// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/ModularVehicleBaseComponent.h"

#ifdef CHAOSMODULARVEHICLEENGINE_ModularVehicleBaseComponent_generated_h
#error "ModularVehicleBaseComponent.generated.h already included, missing '#pragma once' in ModularVehicleBaseComponent.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_ModularVehicleBaseComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UPrimitiveComponent;
class UVehicleInputProducerBase;
enum class EModuleInputBufferActionType : uint8;
struct FClusterUnionBoneData;
struct FModuleInputContainer;

// ********** Begin ScriptStruct FVehicleComponentData *********************************************
struct Z_Construct_UScriptStruct_FVehicleComponentData_Statics;
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVehicleComponentData_Statics; \
	CHAOSMODULARVEHICLEENGINE_API static class UScriptStruct* StaticStruct();


struct FVehicleComponentData;
// ********** End ScriptStruct FVehicleComponentData ***********************************************

// ********** Begin ScriptStruct FModularReplicatedState *******************************************
struct Z_Construct_UScriptStruct_FModularReplicatedState_Statics;
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularReplicatedState_Statics; \
	CHAOSMODULARVEHICLEENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FModularVehicleInputs Super;


struct FModularReplicatedState;
// ********** End ScriptStruct FModularReplicatedState *********************************************

// ********** Begin ScriptStruct FConstructionData *************************************************
struct Z_Construct_UScriptStruct_FConstructionData_Statics;
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConstructionData_Statics; \
	CHAOSMODULARVEHICLEENGINE_API static class UScriptStruct* StaticStruct();


struct FConstructionData;
// ********** End ScriptStruct FConstructionData ***************************************************

// ********** Begin ScriptStruct FModuleAnimationSetup *********************************************
struct Z_Construct_UScriptStruct_FModuleAnimationSetup_Statics;
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModuleAnimationSetup_Statics; \
	CHAOSMODULARVEHICLEENGINE_API static class UScriptStruct* StaticStruct();


struct FModuleAnimationSetup;
// ********** End ScriptStruct FModuleAnimationSetup ***********************************************

// ********** Begin Delegate FOnModuleAdded ********************************************************
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_182_DELEGATE \
static CHAOSMODULARVEHICLEENGINE_API void FOnModuleAdded_DelegateWrapper(const FMulticastScriptDelegate& OnModuleAdded, FName const& SimType, int32 Guid, int32 TreeIndex);


// ********** End Delegate FOnModuleAdded **********************************************************

// ********** Begin Delegate FOnModuleRemoved ******************************************************
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_186_DELEGATE \
static CHAOSMODULARVEHICLEENGINE_API void FOnModuleRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnModuleRemoved, FName const& SimType, int32 Guid, int32 TreeIndex);


// ********** End Delegate FOnModuleRemoved ********************************************************

// ********** Begin Class UModularVehicleBaseComponent *********************************************
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_112_RPC_WRAPPERS \
	CHAOSMODULARVEHICLEENGINE_API virtual bool ServerUpdateState_Validate(FModuleInputContainer const& , bool ); \
	CHAOSMODULARVEHICLEENGINE_API virtual void ServerUpdateState_Implementation(FModuleInputContainer const& InputsIn, bool KeepAwake); \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execRemoveActorsToIgnore); \
	DECLARE_FUNCTION(execAddActorsToIgnore); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execSetGearInput); \
	DECLARE_FUNCTION(execSetInputAxis3D); \
	DECLARE_FUNCTION(execSetInputAxis2D); \
	DECLARE_FUNCTION(execSetInputAxis1D); \
	DECLARE_FUNCTION(execSetInputInteger); \
	DECLARE_FUNCTION(execSetInputBool); \
	DECLARE_FUNCTION(execSetInputProducerClass); \
	DECLARE_FUNCTION(execOnModuleRemoved); \
	DECLARE_FUNCTION(execOnModuleInitialized); \
	DECLARE_FUNCTION(execSetLocallyControlled); \
	DECLARE_FUNCTION(execRemoveComponentFromSimulation); \
	DECLARE_FUNCTION(execAddComponentToSimulation);


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_112_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UModularVehicleBaseComponent_Statics;
CHAOSMODULARVEHICLEENGINE_API UClass* Z_Construct_UClass_UModularVehicleBaseComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUModularVehicleBaseComponent(); \
	friend struct ::Z_Construct_UClass_UModularVehicleBaseComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMODULARVEHICLEENGINE_API UClass* ::Z_Construct_UClass_UModularVehicleBaseComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UModularVehicleBaseComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), Z_Construct_UClass_UModularVehicleBaseComponent_NoRegister) \
	DECLARE_SERIALIZER(UModularVehicleBaseComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		ConstructionDatas, \
		NETFIELD_REP_END=ConstructionDatas	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(CHAOSMODULARVEHICLEENGINE_API)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMODULARVEHICLEENGINE_API UModularVehicleBaseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularVehicleBaseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, UModularVehicleBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularVehicleBaseComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularVehicleBaseComponent(UModularVehicleBaseComponent&&) = delete; \
	UModularVehicleBaseComponent(const UModularVehicleBaseComponent&) = delete;


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_109_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_112_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_112_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_112_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularVehicleBaseComponent;

// ********** End Class UModularVehicleBaseComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
