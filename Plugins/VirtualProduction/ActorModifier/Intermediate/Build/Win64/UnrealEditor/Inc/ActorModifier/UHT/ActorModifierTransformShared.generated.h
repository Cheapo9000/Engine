// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shared/ActorModifierTransformShared.h"

#ifdef ACTORMODIFIER_ActorModifierTransformShared_generated_h
#error "ActorModifierTransformShared.generated.h already included, missing '#pragma once' in ActorModifierTransformShared.h"
#endif
#define ACTORMODIFIER_ActorModifierTransformShared_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActorModifierTransformSharedModifierState ************************
struct Z_Construct_UScriptStruct_FActorModifierTransformSharedModifierState_Statics;
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Shared_ActorModifierTransformShared_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorModifierTransformSharedModifierState_Statics; \
	ACTORMODIFIER_API static class UScriptStruct* StaticStruct();


struct FActorModifierTransformSharedModifierState;
// ********** End ScriptStruct FActorModifierTransformSharedModifierState **************************

// ********** Begin ScriptStruct FActorModifierTransformSharedActorState ***************************
struct Z_Construct_UScriptStruct_FActorModifierTransformSharedActorState_Statics;
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Shared_ActorModifierTransformShared_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorModifierTransformSharedActorState_Statics; \
	ACTORMODIFIER_API static class UScriptStruct* StaticStruct();


struct FActorModifierTransformSharedActorState;
// ********** End ScriptStruct FActorModifierTransformSharedActorState *****************************

// ********** Begin Class UActorModifierTransformShared ********************************************
struct Z_Construct_UClass_UActorModifierTransformShared_Statics;
ACTORMODIFIER_API UClass* Z_Construct_UClass_UActorModifierTransformShared_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Shared_ActorModifierTransformShared_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierTransformShared(); \
	friend struct ::Z_Construct_UClass_UActorModifierTransformShared_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIER_API UClass* ::Z_Construct_UClass_UActorModifierTransformShared_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierTransformShared, UActorModifierCoreSharedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifier"), Z_Construct_UClass_UActorModifierTransformShared_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierTransformShared)


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Shared_ActorModifierTransformShared_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIER_API UActorModifierTransformShared(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierTransformShared(UActorModifierTransformShared&&) = delete; \
	UActorModifierTransformShared(const UActorModifierTransformShared&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIER_API, UActorModifierTransformShared); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierTransformShared); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorModifierTransformShared) \
	ACTORMODIFIER_API virtual ~UActorModifierTransformShared();


#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Shared_ActorModifierTransformShared_h_114_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Shared_ActorModifierTransformShared_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Shared_ActorModifierTransformShared_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Shared_ActorModifierTransformShared_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierTransformShared;

// ********** End Class UActorModifierTransformShared **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifier_Source_ActorModifier_Public_Shared_ActorModifierTransformShared_h

// ********** Begin Enum EActorModifierTransformSharedState ****************************************
#define FOREACH_ENUM_EACTORMODIFIERTRANSFORMSHAREDSTATE(op) \
	op(EActorModifierTransformSharedState::None) \
	op(EActorModifierTransformSharedState::Location) \
	op(EActorModifierTransformSharedState::Rotation) \
	op(EActorModifierTransformSharedState::Scale) \
	op(EActorModifierTransformSharedState::LocationRotation) \
	op(EActorModifierTransformSharedState::LocationScale) \
	op(EActorModifierTransformSharedState::RotationScale) \
	op(EActorModifierTransformSharedState::All) 

enum class EActorModifierTransformSharedState : uint8;
template<> struct TIsUEnumClass<EActorModifierTransformSharedState> { enum { Value = true }; };
template<> ACTORMODIFIER_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorModifierTransformSharedState>();
// ********** End Enum EActorModifierTransformSharedState ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
