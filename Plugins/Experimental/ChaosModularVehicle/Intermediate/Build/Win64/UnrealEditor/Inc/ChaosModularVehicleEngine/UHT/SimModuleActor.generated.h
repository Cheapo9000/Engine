// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/SimModuleActor.h"

#ifdef CHAOSMODULARVEHICLEENGINE_SimModuleActor_generated_h
#error "SimModuleActor.generated.h already included, missing '#pragma once' in SimModuleActor.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_SimModuleActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASimModuleActor **********************************************************
struct Z_Construct_UClass_ASimModuleActor_Statics;
CHAOSMODULARVEHICLEENGINE_API UClass* Z_Construct_UClass_ASimModuleActor_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASimModuleActor(); \
	friend struct ::Z_Construct_UClass_ASimModuleActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMODULARVEHICLEENGINE_API UClass* ::Z_Construct_UClass_ASimModuleActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASimModuleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), Z_Construct_UClass_ASimModuleActor_NoRegister) \
	DECLARE_SERIALIZER(ASimModuleActor)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMODULARVEHICLEENGINE_API ASimModuleActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimModuleActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, ASimModuleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimModuleActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASimModuleActor(ASimModuleActor&&) = delete; \
	ASimModuleActor(const ASimModuleActor&) = delete; \
	CHAOSMODULARVEHICLEENGINE_API virtual ~ASimModuleActor();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASimModuleActor;

// ********** End Class ASimModuleActor ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_SimModuleActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
