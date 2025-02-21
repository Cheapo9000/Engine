// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/ModularVehicleClusterActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClusterUnionVehicleComponent;
class UModularVehicleBaseComponent;
#ifdef CHAOSMODULARVEHICLEENGINE_ModularVehicleClusterActor_generated_h
#error "ModularVehicleClusterActor.generated.h already included, missing '#pragma once' in ModularVehicleClusterActor.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_ModularVehicleClusterActor_generated_h

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterActor_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetVehicleSimulationComponent); \
	DECLARE_FUNCTION(execGetClusterUnionComponent);


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAModularVehicleClusterActor(); \
	friend struct Z_Construct_UClass_AModularVehicleClusterActor_Statics; \
public: \
	DECLARE_CLASS(AModularVehicleClusterActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), NO_API) \
	DECLARE_SERIALIZER(AModularVehicleClusterActor)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModularVehicleClusterActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularVehicleClusterActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularVehicleClusterActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularVehicleClusterActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AModularVehicleClusterActor(AModularVehicleClusterActor&&); \
	AModularVehicleClusterActor(const AModularVehicleClusterActor&); \
public: \
	NO_API virtual ~AModularVehicleClusterActor();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterActor_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterActor_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterActor_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class AModularVehicleClusterActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
