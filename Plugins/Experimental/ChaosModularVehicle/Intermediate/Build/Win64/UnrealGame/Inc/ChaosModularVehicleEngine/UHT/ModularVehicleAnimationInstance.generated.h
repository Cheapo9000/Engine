// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosModularVehicle/ModularVehicleAnimationInstance.h"

#ifdef CHAOSMODULARVEHICLEENGINE_ModularVehicleAnimationInstance_generated_h
#error "ModularVehicleAnimationInstance.generated.h already included, missing '#pragma once' in ModularVehicleAnimationInstance.h"
#endif
#define CHAOSMODULARVEHICLEENGINE_ModularVehicleAnimationInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AModularVehicleClusterPawn;

// ********** Begin ScriptStruct FModularVehicleAnimationInstanceProxy *****************************
struct Z_Construct_UScriptStruct_FModularVehicleAnimationInstanceProxy_Statics;
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularVehicleAnimationInstanceProxy_Statics; \
	CHAOSMODULARVEHICLEENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


struct FModularVehicleAnimationInstanceProxy;
// ********** End ScriptStruct FModularVehicleAnimationInstanceProxy *******************************

// ********** Begin Class UModularVehicleAnimationInstance *****************************************
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_59_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetVehicle);


struct Z_Construct_UClass_UModularVehicleAnimationInstance_Statics;
CHAOSMODULARVEHICLEENGINE_API UClass* Z_Construct_UClass_UModularVehicleAnimationInstance_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUModularVehicleAnimationInstance(); \
	friend struct ::Z_Construct_UClass_UModularVehicleAnimationInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMODULARVEHICLEENGINE_API UClass* ::Z_Construct_UClass_UModularVehicleAnimationInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UModularVehicleAnimationInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosModularVehicleEngine"), Z_Construct_UClass_UModularVehicleAnimationInstance_NoRegister) \
	DECLARE_SERIALIZER(UModularVehicleAnimationInstance)


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMODULARVEHICLEENGINE_API UModularVehicleAnimationInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularVehicleAnimationInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMODULARVEHICLEENGINE_API, UModularVehicleAnimationInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularVehicleAnimationInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularVehicleAnimationInstance(UModularVehicleAnimationInstance&&) = delete; \
	UModularVehicleAnimationInstance(const UModularVehicleAnimationInstance&) = delete; \
	CHAOSMODULARVEHICLEENGINE_API virtual ~UModularVehicleAnimationInstance();


#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_59_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_59_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularVehicleAnimationInstance;

// ********** End Class UModularVehicleAnimationInstance *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosModularVehicle_Source_ChaosModularVehicleEngine_Public_ChaosModularVehicle_ModularVehicleAnimationInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
