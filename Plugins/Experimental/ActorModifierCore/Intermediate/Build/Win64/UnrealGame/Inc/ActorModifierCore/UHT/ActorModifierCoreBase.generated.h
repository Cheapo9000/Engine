// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierCoreBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORMODIFIERCORE_ActorModifierCoreBase_generated_h
#error "ActorModifierCoreBase.generated.h already included, missing '#pragma once' in ActorModifierCoreBase.h"
#endif
#define ACTORMODIFIERCORE_ActorModifierCoreBase_generated_h

#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetModifierEnabled);


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h_37_ACCESSORS \
static void GetbModifierEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbModifierEnabled_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierCoreBase(); \
	friend struct Z_Construct_UClass_UActorModifierCoreBase_Statics; \
public: \
	DECLARE_CLASS(UActorModifierCoreBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActorModifierCore"), ACTORMODIFIERCORE_API) \
	DECLARE_SERIALIZER(UActorModifierCoreBase)


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorModifierCoreBase(UActorModifierCoreBase&&); \
	UActorModifierCoreBase(const UActorModifierCoreBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERCORE_API, UActorModifierCoreBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierCoreBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UActorModifierCoreBase) \
	ACTORMODIFIERCORE_API virtual ~UActorModifierCoreBase();


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h_37_ACCESSORS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORMODIFIERCORE_API UClass* StaticClass<class UActorModifierCoreBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
