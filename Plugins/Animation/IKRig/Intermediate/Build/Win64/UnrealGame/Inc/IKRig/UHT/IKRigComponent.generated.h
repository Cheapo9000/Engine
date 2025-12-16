// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/IKRigComponent.h"

#ifdef IKRIG_IKRigComponent_generated_h
#error "IKRigComponent.generated.h already included, missing '#pragma once' in IKRigComponent.h"
#endif
#define IKRIG_IKRigComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRigGoal;

// ********** Begin Class UIKRigComponent **********************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearAllGoals); \
	DECLARE_FUNCTION(execSetIKRigGoal); \
	DECLARE_FUNCTION(execSetIKRigGoalTransform); \
	DECLARE_FUNCTION(execSetIKRigGoalPositionAndRotation);


struct Z_Construct_UClass_UIKRigComponent_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigComponent_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigComponent(); \
	friend struct ::Z_Construct_UClass_UIKRigComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigComponent_NoRegister) \
	DECLARE_SERIALIZER(UIKRigComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UIKRigComponent*>(this); }


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigComponent(UIKRigComponent&&) = delete; \
	UIKRigComponent(const UIKRigComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigComponent) \
	IKRIG_API virtual ~UIKRigComponent();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_13_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigComponent;

// ********** End Class UIKRigComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
