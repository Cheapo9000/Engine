// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/ModularVehicleClusterPawn.h"

#ifdef CHAOSMODULARVEHICLEENGINE_ModularVehicleClusterPawn_generated_h
#error "ModularVehicleClusterPawn.generated.h already included, missing '#pragma once' in ModularVehicleClusterPawn.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_ModularVehicleClusterPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClusterUnionVehicleComponent;
class UModularVehicleBaseComponent;

// ********** Begin Class AModularVehicleClusterPawn ***********************************************
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetVehicleSimulationComponent); \
	DECLARE_FUNCTION(execGetClusterUnionComponent);


struct Z_Construct_UClass_AModularVehicleClusterPawn_Statics;
CHAOSMODULARVEHICLEENGINE_API UClass* Z_Construct_UClass_AModularVehicleClusterPawn_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAModularVehicleClusterPawn(); \
	friend struct ::Z_Construct_UClass_AModularVehicleClusterPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMODULARVEHICLEENGINE_API UClass* ::Z_Construct_UClass_AModularVehicleClusterPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(AModularVehicleClusterPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), Z_Construct_UClass_AModularVehicleClusterPawn_NoRegister) \
	DECLARE_SERIALIZER(AModularVehicleClusterPawn)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMODULARVEHICLEENGINE_API AModularVehicleClusterPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularVehicleClusterPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, AModularVehicleClusterPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularVehicleClusterPawn); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AModularVehicleClusterPawn(AModularVehicleClusterPawn&&) = delete; \
	AModularVehicleClusterPawn(const AModularVehicleClusterPawn&) = delete; \
	CHAOSMODULARVEHICLEENGINE_API virtual ~AModularVehicleClusterPawn();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AModularVehicleClusterPawn;

// ********** End Class AModularVehicleClusterPawn *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleClusterPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
