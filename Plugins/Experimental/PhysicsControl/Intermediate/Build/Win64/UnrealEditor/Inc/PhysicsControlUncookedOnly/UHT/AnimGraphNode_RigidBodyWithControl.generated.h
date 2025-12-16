// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_RigidBodyWithControl.h"

#ifdef PHYSICSCONTROLUNCOOKEDONLY_AnimGraphNode_RigidBodyWithControl_generated_h
#error "AnimGraphNode_RigidBodyWithControl.generated.h already included, missing '#pragma once' in AnimGraphNode_RigidBodyWithControl.h"
#endif
#define PHYSICSCONTROLUNCOOKEDONLY_AnimGraphNode_RigidBodyWithControl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_RigidBodyWithControl **************************************
struct Z_Construct_UClass_UAnimGraphNode_RigidBodyWithControl_Statics;
PHYSICSCONTROLUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimGraphNode_RigidBodyWithControl_NoRegister();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlUncookedOnly_Public_AnimGraphNode_RigidBodyWithControl_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_RigidBodyWithControl(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_RigidBodyWithControl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSCONTROLUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UAnimGraphNode_RigidBodyWithControl_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_RigidBodyWithControl, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsControlUncookedOnly"), Z_Construct_UClass_UAnimGraphNode_RigidBodyWithControl_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_RigidBodyWithControl)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlUncookedOnly_Public_AnimGraphNode_RigidBodyWithControl_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSCONTROLUNCOOKEDONLY_API UAnimGraphNode_RigidBodyWithControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_RigidBodyWithControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSCONTROLUNCOOKEDONLY_API, UAnimGraphNode_RigidBodyWithControl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_RigidBodyWithControl); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_RigidBodyWithControl(UAnimGraphNode_RigidBodyWithControl&&) = delete; \
	UAnimGraphNode_RigidBodyWithControl(const UAnimGraphNode_RigidBodyWithControl&) = delete; \
	PHYSICSCONTROLUNCOOKEDONLY_API virtual ~UAnimGraphNode_RigidBodyWithControl();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlUncookedOnly_Public_AnimGraphNode_RigidBodyWithControl_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlUncookedOnly_Public_AnimGraphNode_RigidBodyWithControl_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlUncookedOnly_Public_AnimGraphNode_RigidBodyWithControl_h_24_INCLASS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlUncookedOnly_Public_AnimGraphNode_RigidBodyWithControl_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_RigidBodyWithControl;

// ********** End Class UAnimGraphNode_RigidBodyWithControl ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControlUncookedOnly_Public_AnimGraphNode_RigidBodyWithControl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
