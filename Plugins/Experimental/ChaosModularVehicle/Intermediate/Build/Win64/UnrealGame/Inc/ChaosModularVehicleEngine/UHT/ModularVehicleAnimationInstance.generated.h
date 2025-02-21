// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/ModularVehicleAnimationInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AModularVehicleClusterPawn;
#ifdef CHAOSMODULARVEHICLEENGINE_ModularVehicleAnimationInstance_generated_h
#error "ModularVehicleAnimationInstance.generated.h already included, missing '#pragma once' in ModularVehicleAnimationInstance.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_ModularVehicleAnimationInstance_generated_h

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularVehicleAnimationInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> CHAOSMODULARVEHICLEENGINE_API UScriptStruct* StaticStruct<struct FModularVehicleAnimationInstanceProxy>();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_57_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetVehicle);


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUModularVehicleAnimationInstance(); \
	friend struct Z_Construct_UClass_UModularVehicleAnimationInstance_Statics; \
public: \
	DECLARE_CLASS(UModularVehicleAnimationInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), NO_API) \
	DECLARE_SERIALIZER(UModularVehicleAnimationInstance)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularVehicleAnimationInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularVehicleAnimationInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularVehicleAnimationInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularVehicleAnimationInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularVehicleAnimationInstance(UModularVehicleAnimationInstance&&); \
	UModularVehicleAnimationInstance(const UModularVehicleAnimationInstance&); \
public: \
	NO_API virtual ~UModularVehicleAnimationInstance();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_54_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_57_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_57_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSMODULARVEHICLEENGINE_API UClass* StaticClass<class UModularVehicleAnimationInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
