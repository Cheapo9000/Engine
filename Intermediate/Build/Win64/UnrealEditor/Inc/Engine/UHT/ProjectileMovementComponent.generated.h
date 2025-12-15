// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/ProjectileMovementComponent.h"

#ifdef ENGINE_ProjectileMovementComponent_generated_h
#error "ProjectileMovementComponent.generated.h already included, missing '#pragma once' in ProjectileMovementComponent.h"
#endif
#define ENGINE_ProjectileMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FHitResult;

// ********** Begin Delegate FOnProjectileBounceDelegate *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_31_DELEGATE \
static ENGINE_API void FOnProjectileBounceDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileBounceDelegate, FHitResult const& ImpactResult, FVector const& ImpactVelocity);


// ********** End Delegate FOnProjectileBounceDelegate *********************************************

// ********** Begin Delegate FOnProjectileStopDelegate *********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_32_DELEGATE \
static ENGINE_API void FOnProjectileStopDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileStopDelegate, FHitResult const& ImpactResult);


// ********** End Delegate FOnProjectileStopDelegate ***********************************************

// ********** Begin Class UProjectileMovementComponent *********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLimitVelocity); \
	DECLARE_FUNCTION(execIsInterpolationComplete); \
	DECLARE_FUNCTION(execResetInterpolation); \
	DECLARE_FUNCTION(execMoveInterpolationTarget); \
	DECLARE_FUNCTION(execSetInterpolatedComponent); \
	DECLARE_FUNCTION(execStopSimulating); \
	DECLARE_FUNCTION(execSetVelocityInLocalSpace); \
	DECLARE_FUNCTION(execIsVelocityUnderSimulationThreshold);


struct Z_Construct_UClass_UProjectileMovementComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUProjectileMovementComponent(); \
	friend struct ::Z_Construct_UClass_UProjectileMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UProjectileMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UProjectileMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UProjectileMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UProjectileMovementComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UProjectileMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UProjectileMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileMovementComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProjectileMovementComponent(UProjectileMovementComponent&&) = delete; \
	UProjectileMovementComponent(const UProjectileMovementComponent&) = delete; \
	ENGINE_API virtual ~UProjectileMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_29_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProjectileMovementComponent;

// ********** End Class UProjectileMovementComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
