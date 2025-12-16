// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierAlignBetweenModifier.h"

#ifdef ACTORMODIFIERLAYOUT_ActorModifierAlignBetweenModifier_generated_h
#error "ActorModifierAlignBetweenModifier.generated.h already included, missing '#pragma once' in ActorModifierAlignBetweenModifier.h"
#endif
#define ACTORMODIFIERLAYOUT_ActorModifierAlignBetweenModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FActorModifierAlignBetweenWeightedActor;

// ********** Begin ScriptStruct FActorModifierAlignBetweenWeightedActor ***************************
struct Z_Construct_UScriptStruct_FActorModifierAlignBetweenWeightedActor_Statics;
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorModifierAlignBetweenWeightedActor_Statics; \
	ACTORMODIFIERLAYOUT_API static class UScriptStruct* StaticStruct();


struct FActorModifierAlignBetweenWeightedActor;
// ********** End ScriptStruct FActorModifierAlignBetweenWeightedActor *****************************

// ********** Begin Class UActorModifierAlignBetweenModifier ***************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindReferenceActor); \
	DECLARE_FUNCTION(execRemoveReferenceActor); \
	DECLARE_FUNCTION(execAddReferenceActor); \
	DECLARE_FUNCTION(execSetReferenceActors); \
	DECLARE_FUNCTION(execGetReferenceActors);


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_66_ACCESSORS \
static void GetReferenceActors_WrapperImpl(const void* Object, void* OutValue); \
static void SetReferenceActors_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UActorModifierAlignBetweenModifier_Statics;
ACTORMODIFIERLAYOUT_API UClass* Z_Construct_UClass_UActorModifierAlignBetweenModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierAlignBetweenModifier(); \
	friend struct ::Z_Construct_UClass_UActorModifierAlignBetweenModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERLAYOUT_API UClass* ::Z_Construct_UClass_UActorModifierAlignBetweenModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierAlignBetweenModifier, UActorModifierCoreBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifierLayout"), Z_Construct_UClass_UActorModifierAlignBetweenModifier_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierAlignBetweenModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UActorModifierAlignBetweenModifier*>(this); }


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERLAYOUT_API UActorModifierAlignBetweenModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierAlignBetweenModifier(UActorModifierAlignBetweenModifier&&) = delete; \
	UActorModifierAlignBetweenModifier(const UActorModifierAlignBetweenModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERLAYOUT_API, UActorModifierAlignBetweenModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierAlignBetweenModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorModifierAlignBetweenModifier) \
	ACTORMODIFIERLAYOUT_API virtual ~UActorModifierAlignBetweenModifier();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_62_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_66_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierAlignBetweenModifier;

// ********** End Class UActorModifierAlignBetweenModifier *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifierLayout_Public_Modifiers_ActorModifierAlignBetweenModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
