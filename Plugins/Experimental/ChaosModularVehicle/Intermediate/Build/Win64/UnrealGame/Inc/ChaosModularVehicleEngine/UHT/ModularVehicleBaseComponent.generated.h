// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/ModularVehicleBaseComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class UVehicleInputProducerBase;
struct FClusterUnionBoneData;
struct FModuleInputContainer;
#ifdef CHAOSMODULARVEHICLEENGINE_ModularVehicleBaseComponent_generated_h
#error "ModularVehicleBaseComponent.generated.h already included, missing '#pragma once' in ModularVehicleBaseComponent.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_ModularVehicleBaseComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleComponentData_Statics; \
	CHAOSMODULARVEHICLEENGINE_API static class UScriptStruct* StaticStruct();


template<> CHAOSMODULARVEHICLEENGINE_API UScriptStruct* StaticStruct<struct FVehicleComponentData>();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularReplicatedState_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FModularVehicleInputs Super;


template<> CHAOSMODULARVEHICLEENGINE_API UScriptStruct* StaticStruct<struct FModularReplicatedState>();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstructionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSMODULARVEHICLEENGINE_API UScriptStruct* StaticStruct<struct FConstructionData>();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModuleAnimationSetup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSMODULARVEHICLEENGINE_API UScriptStruct* StaticStruct<struct FModuleAnimationSetup>();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_93_RPC_WRAPPERS \
	virtual bool ServerUpdateState_Validate(FModuleInputContainer const& , bool ); \
	virtual void ServerUpdateState_Implementation(FModuleInputContainer const& InputsIn, bool KeepAwake); \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execRemoveActorsToIgnore); \
	DECLARE_FUNCTION(execAddActorsToIgnore); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execSetGearInput); \
	DECLARE_FUNCTION(execSetInputAxis3D); \
	DECLARE_FUNCTION(execSetInputAxis2D); \
	DECLARE_FUNCTION(execSetInputAxis1D); \
	DECLARE_FUNCTION(execSetInputBool); \
	DECLARE_FUNCTION(execSetInputProducerClass); \
	DECLARE_FUNCTION(execSetLocallyControlled); \
	DECLARE_FUNCTION(execRemoveComponentFromSimulation); \
	DECLARE_FUNCTION(execAddComponentToSimulation);


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_93_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUModularVehicleBaseComponent(); \
	friend struct Z_Construct_UClass_UModularVehicleBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UModularVehicleBaseComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), NO_API) \
	DECLARE_SERIALIZER(UModularVehicleBaseComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		ConstructionDatas, \
		NETFIELD_REP_END=ConstructionDatas	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularVehicleBaseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularVehicleBaseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularVehicleBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularVehicleBaseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularVehicleBaseComponent(UModularVehicleBaseComponent&&); \
	UModularVehicleBaseComponent(const UModularVehicleBaseComponent&); \
public:


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_90_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_93_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_93_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_93_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class UModularVehicleBaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleBaseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
