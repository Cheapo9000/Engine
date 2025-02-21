// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/ModularVehicleClusterPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClusterUnionVehicleComponent;
class UModularVehicleBaseComponent;
#ifdef CHAOSMODULARVEHICLEENGINE_ModularVehicleClusterPawn_generated_h
#error "ModularVehicleClusterPawn.generated.h already included, missing '#pragma once' in ModularVehicleClusterPawn.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_ModularVehicleClusterPawn_generated_h

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetVehicleSimulationComponent); \
	DECLARE_FUNCTION(execGetClusterUnionComponent);


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAModularVehicleClusterPawn(); \
	friend struct Z_Construct_UClass_AModularVehicleClusterPawn_Statics; \
public: \
	DECLARE_CLASS(AModularVehicleClusterPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), NO_API) \
	DECLARE_SERIALIZER(AModularVehicleClusterPawn)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModularVehicleClusterPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularVehicleClusterPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularVehicleClusterPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularVehicleClusterPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AModularVehicleClusterPawn(AModularVehicleClusterPawn&&); \
	AModularVehicleClusterPawn(const AModularVehicleClusterPawn&); \
public: \
	NO_API virtual ~AModularVehicleClusterPawn();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class AModularVehicleClusterPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
