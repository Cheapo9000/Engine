// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActorModifierCoreSharedObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORMODIFIERCORE_ActorModifierCoreSharedObject_generated_h
#error "ActorModifierCoreSharedObject.generated.h already included, missing '#pragma once' in ActorModifierCoreSharedObject.h"
#endif
#define ACTORMODIFIERCORE_ActorModifierCoreSharedObject_generated_h

#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreSharedObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierCoreSharedObject(); \
	friend struct Z_Construct_UClass_UActorModifierCoreSharedObject_Statics; \
public: \
	DECLARE_CLASS(UActorModifierCoreSharedObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActorModifierCore"), NO_API) \
	DECLARE_SERIALIZER(UActorModifierCoreSharedObject)


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreSharedObject_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorModifierCoreSharedObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorModifierCoreSharedObject(UActorModifierCoreSharedObject&&); \
	UActorModifierCoreSharedObject(const UActorModifierCoreSharedObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorModifierCoreSharedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierCoreSharedObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorModifierCoreSharedObject) \
	NO_API virtual ~UActorModifierCoreSharedObject();


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreSharedObject_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreSharedObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreSharedObject_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreSharedObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORMODIFIERCORE_API UClass* StaticClass<class UActorModifierCoreSharedObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_ActorModifierCoreSharedObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
