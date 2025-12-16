// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behavior/AvaTransitionBehaviorActor.h"

#ifdef AVALANCHETRANSITION_AvaTransitionBehaviorActor_generated_h
#error "AvaTransitionBehaviorActor.generated.h already included, missing '#pragma once' in AvaTransitionBehaviorActor.h"
#endif
#define AVALANCHETRANSITION_AvaTransitionBehaviorActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAvaTransitionBehaviorActor **********************************************
struct Z_Construct_UClass_AAvaTransitionBehaviorActor_Statics;
AVALANCHETRANSITION_API UClass* Z_Construct_UClass_AAvaTransitionBehaviorActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Behavior_AvaTransitionBehaviorActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaTransitionBehaviorActor(); \
	friend struct ::Z_Construct_UClass_AAvaTransitionBehaviorActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETRANSITION_API UClass* ::Z_Construct_UClass_AAvaTransitionBehaviorActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAvaTransitionBehaviorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), Z_Construct_UClass_AAvaTransitionBehaviorActor_NoRegister) \
	DECLARE_SERIALIZER(AAvaTransitionBehaviorActor) \
	virtual UObject* _getUObject() const override { return const_cast<AAvaTransitionBehaviorActor*>(this); }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Behavior_AvaTransitionBehaviorActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAvaTransitionBehaviorActor(AAvaTransitionBehaviorActor&&) = delete; \
	AAvaTransitionBehaviorActor(const AAvaTransitionBehaviorActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvaTransitionBehaviorActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaTransitionBehaviorActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaTransitionBehaviorActor) \
	NO_API virtual ~AAvaTransitionBehaviorActor();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Behavior_AvaTransitionBehaviorActor_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Behavior_AvaTransitionBehaviorActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Behavior_AvaTransitionBehaviorActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Behavior_AvaTransitionBehaviorActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAvaTransitionBehaviorActor;

// ********** End Class AAvaTransitionBehaviorActor ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Private_Behavior_AvaTransitionBehaviorActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
