// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierCoreSharedActor.h"

#ifdef ACTORMODIFIERCORE_ActorModifierCoreSharedActor_generated_h
#error "ActorModifierCoreSharedActor.generated.h already included, missing '#pragma once' in ActorModifierCoreSharedActor.h"
#endif
#define ACTORMODIFIERCORE_ActorModifierCoreSharedActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class AActorModifierCoreSharedActor ********************************************
#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Private_Modifiers_ActorModifierCoreSharedActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorDestroyed);


struct Z_Construct_UClass_AActorModifierCoreSharedActor_Statics;
ACTORMODIFIERCORE_API UClass* Z_Construct_UClass_AActorModifierCoreSharedActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Private_Modifiers_ActorModifierCoreSharedActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorModifierCoreSharedActor(); \
	friend struct ::Z_Construct_UClass_AActorModifierCoreSharedActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORMODIFIERCORE_API UClass* ::Z_Construct_UClass_AActorModifierCoreSharedActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AActorModifierCoreSharedActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorModifierCore"), Z_Construct_UClass_AActorModifierCoreSharedActor_NoRegister) \
	DECLARE_SERIALIZER(AActorModifierCoreSharedActor)


#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Private_Modifiers_ActorModifierCoreSharedActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AActorModifierCoreSharedActor(AActorModifierCoreSharedActor&&) = delete; \
	AActorModifierCoreSharedActor(const AActorModifierCoreSharedActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorModifierCoreSharedActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorModifierCoreSharedActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorModifierCoreSharedActor) \
	NO_API virtual ~AActorModifierCoreSharedActor();


#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Private_Modifiers_ActorModifierCoreSharedActor_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Private_Modifiers_ActorModifierCoreSharedActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Private_Modifiers_ActorModifierCoreSharedActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Private_Modifiers_ActorModifierCoreSharedActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Private_Modifiers_ActorModifierCoreSharedActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AActorModifierCoreSharedActor;

// ********** End Class AActorModifierCoreSharedActor **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ActorModifierCore_Source_ActorModifierCore_Private_Modifiers_ActorModifierCoreSharedActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
