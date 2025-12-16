// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/Blueprints/ActorModifierCoreBlueprintBase.h"

#ifdef ACTORMODIFIERCORE_ActorModifierCoreBlueprintBase_generated_h
#error "ActorModifierCoreBlueprintBase.generated.h already included, missing '#pragma once' in ActorModifierCoreBlueprintBase.h"
#endif
#define ACTORMODIFIERCORE_ActorModifierCoreBlueprintBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EActorModifierCoreDisableReason : uint8;
enum class EActorModifierCoreEnableReason : uint8;
struct FActorModifierCoreMetadata;

// ********** Begin Class UActorModifierCoreBlueprintBase ******************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFlagModifierDirty);


#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UActorModifierCoreBlueprintBase_Statics;
ACTORMODIFIERCORE_API UClass* Z_Construct_UClass_UActorModifierCoreBlueprintBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierCoreBlueprintBase(); \
	friend struct ::Z_Construct_UClass_UActorModifierCoreBlueprintBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERCORE_API UClass* ::Z_Construct_UClass_UActorModifierCoreBlueprintBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorModifierCoreBlueprintBase, UActorModifierCoreBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActorModifierCore"), Z_Construct_UClass_UActorModifierCoreBlueprintBase_NoRegister) \
	DECLARE_SERIALIZER(UActorModifierCoreBlueprintBase)


#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERCORE_API UActorModifierCoreBlueprintBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorModifierCoreBlueprintBase(UActorModifierCoreBlueprintBase&&) = delete; \
	UActorModifierCoreBlueprintBase(const UActorModifierCoreBlueprintBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERCORE_API, UActorModifierCoreBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierCoreBlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UActorModifierCoreBlueprintBase) \
	ACTORMODIFIERCORE_API virtual ~UActorModifierCoreBlueprintBase();


#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorModifierCoreBlueprintBase;

// ********** End Class UActorModifierCoreBlueprintBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Blueprints_ActorModifierCoreBlueprintBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
