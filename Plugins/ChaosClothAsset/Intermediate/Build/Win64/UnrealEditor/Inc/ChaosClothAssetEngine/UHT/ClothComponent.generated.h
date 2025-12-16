// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothComponent.h"

#ifdef CHAOSCLOTHASSETENGINE_ClothComponent_generated_h
#error "ClothComponent.generated.h already included, missing '#pragma once' in ClothComponent.h"
#endif
#define CHAOSCLOTHASSETENGINE_ClothComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosClothAsset;
class UChaosClothAssetBase;
class UChaosClothAssetInteractor;
class UPhysicsAsset;
class USkinnedMeshComponent;

// ********** Begin ScriptStruct FChaosClothSimulationProperties ***********************************
struct Z_Construct_UScriptStruct_FChaosClothSimulationProperties_Statics;
#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosClothSimulationProperties_Statics; \
	CHAOSCLOTHASSETENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosClothSimulationProperties;
// ********** End ScriptStruct FChaosClothSimulationProperties *************************************

// ********** Begin Class UChaosClothComponent *****************************************************
#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTeleportRotationThreshold); \
	DECLARE_FUNCTION(execGetTeleportRotationThreshold); \
	DECLARE_FUNCTION(execSetTeleportDistanceThreshold); \
	DECLARE_FUNCTION(execGetTeleportDistanceThreshold); \
	DECLARE_FUNCTION(execSetSimulateInEditor); \
	DECLARE_FUNCTION(execGetCollideWithEnvironment); \
	DECLARE_FUNCTION(execSetCollideWithEnvironment); \
	DECLARE_FUNCTION(execResetCollisionSources); \
	DECLARE_FUNCTION(execRemoveCollisionSources); \
	DECLARE_FUNCTION(execRemoveCollisionSource); \
	DECLARE_FUNCTION(execAddCollisionSource); \
	DECLARE_FUNCTION(execGetClothOutfitInteractor); \
	DECLARE_FUNCTION(execRecreateClothSimulationProxy); \
	DECLARE_FUNCTION(execResetConfigProperties); \
	DECLARE_FUNCTION(execIsSimulationEnabled); \
	DECLARE_FUNCTION(execSetEnableSimulation); \
	DECLARE_FUNCTION(execIsSimulationSuspended); \
	DECLARE_FUNCTION(execResumeSimulation); \
	DECLARE_FUNCTION(execSuspendSimulation); \
	DECLARE_FUNCTION(execResetRestLengthsWithMorphTarget); \
	DECLARE_FUNCTION(execForceNextUpdateTeleportAndReset); \
	DECLARE_FUNCTION(execForceNextUpdateTeleport); \
	DECLARE_FUNCTION(execResetTeleportMode); \
	DECLARE_FUNCTION(execGetClothAsset); \
	DECLARE_FUNCTION(execSetClothAsset); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execSetAsset);


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_73_ACCESSORS \
static void GetAsset_WrapperImpl(const void* Object, void* OutValue); \
static void SetAsset_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UChaosClothComponent_Statics;
CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothComponent_NoRegister();

#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothComponent(); \
	friend struct ::Z_Construct_UClass_UChaosClothComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTHASSETENGINE_API UClass* ::Z_Construct_UClass_UChaosClothComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEngine"), Z_Construct_UClass_UChaosClothComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UChaosClothComponent*>(this); }


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothComponent(UChaosClothComponent&&) = delete; \
	UChaosClothComponent(const UChaosClothComponent&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothComponent)


#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_67_PROLOG
#define FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_73_ACCESSORS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosClothComponent;

// ********** End Class UChaosClothComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
