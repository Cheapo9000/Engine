// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/SimModuleActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSMODULARVEHICLEENGINE_SimModuleActor_generated_h
#error "SimModuleActor.generated.h already included, missing '#pragma once' in SimModuleActor.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_SimModuleActor_generated_h

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASimModuleActor(); \
	friend struct Z_Construct_UClass_ASimModuleActor_Statics; \
public: \
	DECLARE_CLASS(ASimModuleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), NO_API) \
	DECLARE_SERIALIZER(ASimModuleActor)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimModuleActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimModuleActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimModuleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimModuleActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASimModuleActor(ASimModuleActor&&); \
	ASimModuleActor(const ASimModuleActor&); \
public: \
	NO_API virtual ~ASimModuleActor();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class ASimModuleActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
