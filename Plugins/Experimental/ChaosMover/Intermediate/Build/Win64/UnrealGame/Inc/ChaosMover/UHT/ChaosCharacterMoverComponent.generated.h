// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/Character/ChaosCharacterMoverComponent.h"

#ifdef CHAOSMOVER_ChaosCharacterMoverComponent_generated_h
#error "ChaosCharacterMoverComponent.generated.h already included, missing '#pragma once' in ChaosCharacterMoverComponent.h"
#endif
#define CHAOSMOVER_ChaosCharacterMoverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EChaosMoverVelocityEffectMode : uint8;
struct FChaosMovementSettingsOverrides;
struct FHitResult;

// ********** Begin Delegate FChaosMover_OnLanded **************************************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h_12_DELEGATE \
CHAOSMOVER_API void FChaosMover_OnLanded_DelegateWrapper(const FMulticastScriptDelegate& ChaosMover_OnLanded, FName const& NextMovementModeName, FHitResult const& HitResult);


// ********** End Delegate FChaosMover_OnLanded ****************************************************

// ********** Begin Delegate FChaosMover_OnJumped **************************************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h_15_DELEGATE \
CHAOSMOVER_API void FChaosMover_OnJumped_DelegateWrapper(const FMulticastScriptDelegate& ChaosMover_OnJumped, float StartingJumpHeight);


// ********** End Delegate FChaosMover_OnJumped ****************************************************

// ********** Begin Class UChaosCharacterMoverComponent ********************************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCancelMovementSettingsOverrides); \
	DECLARE_FUNCTION(execOverrideMovementSettings); \
	DECLARE_FUNCTION(execLaunch);


struct Z_Construct_UClass_UChaosCharacterMoverComponent_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosCharacterMoverComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosCharacterMoverComponent(); \
	friend struct ::Z_Construct_UClass_UChaosCharacterMoverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosCharacterMoverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosCharacterMoverComponent, UCharacterMoverComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosCharacterMoverComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosCharacterMoverComponent)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosCharacterMoverComponent(UChaosCharacterMoverComponent&&) = delete; \
	UChaosCharacterMoverComponent(const UChaosCharacterMoverComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosCharacterMoverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosCharacterMoverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosCharacterMoverComponent) \
	CHAOSMOVER_API virtual ~UChaosCharacterMoverComponent();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosCharacterMoverComponent;

// ********** End Class UChaosCharacterMoverComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_ChaosCharacterMoverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
