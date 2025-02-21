// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierCoreStack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ACTORMODIFIERCORE_ActorModifierCoreStack_generated_h
#error "ActorModifierCoreStack.generated.h already included, missing '#pragma once' in ActorModifierCoreStack.h"
#endif
#define ACTORMODIFIERCORE_ActorModifierCoreStack_generated_h

#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreStack_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorDestroyed);


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreStack_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierCoreStack(); \
	friend struct Z_Construct_UClass_UActorModifierCoreStack_Statics; \
public: \
	DECLARE_CLASS(UActorModifierCoreStack, UActorModifierCoreBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifierCore"), ACTORMODIFIERCORE_API) \
	DECLARE_SERIALIZER(UActorModifierCoreStack)


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreStack_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERCORE_API UActorModifierCoreStack(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorModifierCoreStack(UActorModifierCoreStack&&); \
	UActorModifierCoreStack(const UActorModifierCoreStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERCORE_API, UActorModifierCoreStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierCoreStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorModifierCoreStack) \
	ACTORMODIFIERCORE_API virtual ~UActorModifierCoreStack();


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreStack_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreStack_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreStack_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreStack_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreStack_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORMODIFIERCORE_API UClass* StaticClass<class UActorModifierCoreStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
