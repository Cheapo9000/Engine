// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/Blueprints/ActorModifierCoreBlueprintBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EActorModifierCoreDisableReason : uint8;
enum class EActorModifierCoreEnableReason : uint8;
struct FActorModifierCoreMetadata;
#ifdef ACTORMODIFIERCORE_ActorModifierCoreBlueprintBase_generated_h
#error "ActorModifierCoreBlueprintBase.generated.h already included, missing '#pragma once' in ActorModifierCoreBlueprintBase.h"
#endif
#define ACTORMODIFIERCORE_ActorModifierCoreBlueprintBase_generated_h

#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFlagModifierDirty);


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierCoreBlueprintBase(); \
	friend struct Z_Construct_UClass_UActorModifierCoreBlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UActorModifierCoreBlueprintBase, UActorModifierCoreBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActorModifierCore"), ACTORMODIFIERCORE_API) \
	DECLARE_SERIALIZER(UActorModifierCoreBlueprintBase)


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERCORE_API UActorModifierCoreBlueprintBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorModifierCoreBlueprintBase(UActorModifierCoreBlueprintBase&&); \
	UActorModifierCoreBlueprintBase(const UActorModifierCoreBlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERCORE_API, UActorModifierCoreBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierCoreBlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UActorModifierCoreBlueprintBase) \
	ACTORMODIFIERCORE_API virtual ~UActorModifierCoreBlueprintBase();


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORMODIFIERCORE_API UClass* StaticClass<class UActorModifierCoreBlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
