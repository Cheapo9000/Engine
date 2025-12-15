// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicalAnimationComponent.h"

#ifdef ENGINE_PhysicalAnimationComponent_generated_h
#error "PhysicalAnimationComponent.generated.h already included, missing '#pragma once' in PhysicalAnimationComponent.h"
#endif
#define ENGINE_PhysicalAnimationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FPhysicalAnimationData;

// ********** Begin ScriptStruct FPhysicalAnimationData ********************************************
struct Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicalAnimationData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPhysicalAnimationData;
// ********** End ScriptStruct FPhysicalAnimationData **********************************************

// ********** Begin Class UPhysicalAnimationComponent **********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_69_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetBodyTargetTransform); \
	DECLARE_FUNCTION(execApplyPhysicalAnimationProfileBelow); \
	DECLARE_FUNCTION(execSetStrengthMultiplyer); \
	DECLARE_FUNCTION(execApplyPhysicalAnimationSettingsBelow); \
	DECLARE_FUNCTION(execApplyPhysicalAnimationSettings); \
	DECLARE_FUNCTION(execSetSkeletalMeshComponent);


struct Z_Construct_UClass_UPhysicalAnimationComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicalAnimationComponent(); \
	friend struct ::Z_Construct_UClass_UPhysicalAnimationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicalAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister) \
	DECLARE_SERIALIZER(UPhysicalAnimationComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalAnimationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicalAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalAnimationComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicalAnimationComponent(UPhysicalAnimationComponent&&) = delete; \
	UPhysicalAnimationComponent(const UPhysicalAnimationComponent&) = delete; \
	ENGINE_API virtual ~UPhysicalAnimationComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_66_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_69_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_69_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicalAnimationComponent;

// ********** End Class UPhysicalAnimationComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicalAnimationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
