// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsControlComponent.h"

#ifdef PHYSICSCONTROL_PhysicsControlComponent_generated_h
#error "PhysicsControlComponent.generated.h already included, missing '#pragma once' in PhysicsControlComponent.h"
#endif
#define PHYSICSCONTROL_PhysicsControlComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class USkeletalMeshComponent;
enum class EPhysicsControlKinematicTargetSpace : uint8;
enum class EPhysicsControlType : uint8;
enum class EPhysicsMovementType : uint8;
enum class EResetToCachedTargetBehavior : uint8;
struct FPhysicsControlData;
struct FPhysicsControlLimbBones;
struct FPhysicsControlLimbSetupData;
struct FPhysicsControlModifierData;
struct FPhysicsControlModifierSparseData;
struct FPhysicsControlMultiplier;
struct FPhysicsControlNames;
struct FPhysicsControlSparseData;
struct FPhysicsControlSparseMultiplier;
struct FPhysicsControlTarget;

// ********** Begin Class UPhysicsControlComponent *************************************************
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_64_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetBodyModifierExists); \
	DECLARE_FUNCTION(execGetControlExists); \
	DECLARE_FUNCTION(execResetBodyModifiersInSetToCachedBoneTransforms); \
	DECLARE_FUNCTION(execResetBodyModifiersToCachedBoneTransforms); \
	DECLARE_FUNCTION(execResetBodyModifierToCachedBoneTransform); \
	DECLARE_FUNCTION(execSetCachedBoneVelocitiesToZero); \
	DECLARE_FUNCTION(execSetCachedBoneData); \
	DECLARE_FUNCTION(execGetCachedBoneOrientation); \
	DECLARE_FUNCTION(execGetCachedBonePosition); \
	DECLARE_FUNCTION(execGetCachedBoneTransform); \
	DECLARE_FUNCTION(execGetCachedBoneOrientations); \
	DECLARE_FUNCTION(execGetCachedBonePositions); \
	DECLARE_FUNCTION(execGetCachedBoneTransforms); \
	DECLARE_FUNCTION(execGetSetsContainingBodyModifier); \
	DECLARE_FUNCTION(execGetSetsContainingControl); \
	DECLARE_FUNCTION(execAddBodyModifiersToSet); \
	DECLARE_FUNCTION(execAddBodyModifierToSet); \
	DECLARE_FUNCTION(execGetBodyModifierNamesInSet); \
	DECLARE_FUNCTION(execGetAllBodyModifierNames); \
	DECLARE_FUNCTION(execGetControlNamesInSet); \
	DECLARE_FUNCTION(execGetAllControlNames); \
	DECLARE_FUNCTION(execAddControlsToSet); \
	DECLARE_FUNCTION(execAddControlToSet); \
	DECLARE_FUNCTION(execInvokeControlProfile); \
	DECLARE_FUNCTION(execCreateControlsAndBodyModifiersFromPhysicsControlAsset); \
	DECLARE_FUNCTION(execCreateControlsAndBodyModifiersFromLimbBones); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetUpdateKinematicFromSimulation); \
	DECLARE_FUNCTION(execSetBodyModifiersUpdateKinematicFromSimulation); \
	DECLARE_FUNCTION(execSetBodyModifierUpdateKinematicFromSimulation); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetKinematicTargetSpace); \
	DECLARE_FUNCTION(execSetBodyModifiersKinematicTargetSpace); \
	DECLARE_FUNCTION(execSetBodyModifierKinematicTargetSpace); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetBodyModifiersPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetBodyModifierPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetGravityMultiplier); \
	DECLARE_FUNCTION(execSetBodyModifiersGravityMultiplier); \
	DECLARE_FUNCTION(execSetBodyModifierGravityMultiplier); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetCollisionType); \
	DECLARE_FUNCTION(execSetBodyModifiersCollisionType); \
	DECLARE_FUNCTION(execSetBodyModifierCollisionType); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetMovementType); \
	DECLARE_FUNCTION(execSetBodyModifiersMovementType); \
	DECLARE_FUNCTION(execSetBodyModifierMovementType); \
	DECLARE_FUNCTION(execSetBodyModifierKinematicTarget); \
	DECLARE_FUNCTION(execSetBodyModifierSparseDatasInSet); \
	DECLARE_FUNCTION(execSetBodyModifierSparseDatas); \
	DECLARE_FUNCTION(execSetBodyModifierSparseData); \
	DECLARE_FUNCTION(execSetBodyModifierDatasInSet); \
	DECLARE_FUNCTION(execSetBodyModifierDatas); \
	DECLARE_FUNCTION(execSetBodyModifierData); \
	DECLARE_FUNCTION(execDestroyBodyModifiersInSet); \
	DECLARE_FUNCTION(execDestroyBodyModifiers); \
	DECLARE_FUNCTION(execDestroyBodyModifier); \
	DECLARE_FUNCTION(execCreateBodyModifiersFromLimbBones); \
	DECLARE_FUNCTION(execCreateBodyModifiersFromSkeletalMeshBelow); \
	DECLARE_FUNCTION(execCreateNamedBodyModifier); \
	DECLARE_FUNCTION(execCreateBodyModifier); \
	DECLARE_FUNCTION(execGetControlEnabled); \
	DECLARE_FUNCTION(execGetControlTarget); \
	DECLARE_FUNCTION(execGetControlMultiplier); \
	DECLARE_FUNCTION(execGetControlData); \
	DECLARE_FUNCTION(execSetControlsInSetDisableCollision); \
	DECLARE_FUNCTION(execSetControlsDisableCollision); \
	DECLARE_FUNCTION(execSetControlDisableCollision); \
	DECLARE_FUNCTION(execSetControlsInSetEnabled); \
	DECLARE_FUNCTION(execSetControlsEnabled); \
	DECLARE_FUNCTION(execSetControlEnabled); \
	DECLARE_FUNCTION(execSetControlsInSetUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetControlsUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetControlUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetControlTargetPoses); \
	DECLARE_FUNCTION(execSetControlTargetPositionsAndOrientationsFromArray); \
	DECLARE_FUNCTION(execSetControlTargetOrientationsFromArray); \
	DECLARE_FUNCTION(execSetControlTargetPositionsFromArray); \
	DECLARE_FUNCTION(execSetControlTargetOrientationsInSet); \
	DECLARE_FUNCTION(execSetControlTargetOrientations); \
	DECLARE_FUNCTION(execSetControlTargetOrientation); \
	DECLARE_FUNCTION(execSetControlTargetPositionsInSet); \
	DECLARE_FUNCTION(execSetControlTargetPositions); \
	DECLARE_FUNCTION(execSetControlTargetPosition); \
	DECLARE_FUNCTION(execSetControlTargetPositionsAndOrientationsInSet); \
	DECLARE_FUNCTION(execSetControlTargetPositionsAndOrientations); \
	DECLARE_FUNCTION(execSetControlTargetPositionAndOrientation); \
	DECLARE_FUNCTION(execSetControlTargetsInSet); \
	DECLARE_FUNCTION(execSetControlTargets); \
	DECLARE_FUNCTION(execSetControlTarget); \
	DECLARE_FUNCTION(execResetControlPoint); \
	DECLARE_FUNCTION(execSetControlPoint); \
	DECLARE_FUNCTION(execSetControlAngularData); \
	DECLARE_FUNCTION(execSetControlLinearData); \
	DECLARE_FUNCTION(execSetControlSparseMultipliersInSet); \
	DECLARE_FUNCTION(execSetControlSparseMultipliers); \
	DECLARE_FUNCTION(execSetControlSparseMultiplier); \
	DECLARE_FUNCTION(execSetControlMultipliersInSet); \
	DECLARE_FUNCTION(execSetControlMultipliers); \
	DECLARE_FUNCTION(execSetControlMultiplier); \
	DECLARE_FUNCTION(execSetControlSparseDatasInSet); \
	DECLARE_FUNCTION(execSetControlSparseDatas); \
	DECLARE_FUNCTION(execSetControlSparseData); \
	DECLARE_FUNCTION(execSetControlDatasInSet); \
	DECLARE_FUNCTION(execSetControlDatas); \
	DECLARE_FUNCTION(execSetControlData); \
	DECLARE_FUNCTION(execSetControlParentsInSet); \
	DECLARE_FUNCTION(execSetControlParents); \
	DECLARE_FUNCTION(execSetControlParent); \
	DECLARE_FUNCTION(execDestroyControlsInSet); \
	DECLARE_FUNCTION(execDestroyControls); \
	DECLARE_FUNCTION(execDestroyControl); \
	DECLARE_FUNCTION(execDestroyAllControlsAndBodyModifiers); \
	DECLARE_FUNCTION(execCreateControlsFromLimbBonesAndConstraintProfile); \
	DECLARE_FUNCTION(execCreateControlsFromLimbBones); \
	DECLARE_FUNCTION(execGetLimbBonesFromSkeletalMesh); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMeshAndConstraintProfile); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMesh); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMeshAndConstraintProfileBelow); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMeshBelow); \
	DECLARE_FUNCTION(execCreateNamedControl); \
	DECLARE_FUNCTION(execCreateControl); \
	DECLARE_FUNCTION(execUpdateControls); \
	DECLARE_FUNCTION(execUpdateTargetCaches);


struct Z_Construct_UClass_UPhysicsControlComponent_Statics;
PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsControlComponent(); \
	friend struct ::Z_Construct_UClass_UPhysicsControlComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSCONTROL_API UClass* ::Z_Construct_UClass_UPhysicsControlComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsControlComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsControl"), Z_Construct_UClass_UPhysicsControlComponent_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsControlComponent)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSCONTROL_API UPhysicsControlComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsControlComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSCONTROL_API, UPhysicsControlComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsControlComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsControlComponent(UPhysicsControlComponent&&) = delete; \
	UPhysicsControlComponent(const UPhysicsControlComponent&) = delete; \
	PHYSICSCONTROL_API virtual ~UPhysicsControlComponent();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_61_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_64_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_64_INCLASS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsControlComponent;

// ********** End Class UPhysicsControlComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h

// ********** Begin Enum EResetToCachedTargetBehavior **********************************************
#define FOREACH_ENUM_ERESETTOCACHEDTARGETBEHAVIOR(op) \
	op(EResetToCachedTargetBehavior::ResetImmediately) \
	op(EResetToCachedTargetBehavior::ResetDuringUpdateControls) 

enum class EResetToCachedTargetBehavior : uint8;
template<> struct TIsUEnumClass<EResetToCachedTargetBehavior> { enum { Value = true }; };
template<> PHYSICSCONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<EResetToCachedTargetBehavior>();
// ********** End Enum EResetToCachedTargetBehavior ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
