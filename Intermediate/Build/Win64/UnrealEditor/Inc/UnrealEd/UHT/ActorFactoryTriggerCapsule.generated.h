// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryTriggerCapsule.h"

#ifdef UNREALED_ActorFactoryTriggerCapsule_generated_h
#error "ActorFactoryTriggerCapsule.generated.h already included, missing '#pragma once' in ActorFactoryTriggerCapsule.h"
#endif
#define UNREALED_ActorFactoryTriggerCapsule_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryTriggerCapsule **********************************************
struct Z_Construct_UClass_UActorFactoryTriggerCapsule_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTriggerCapsule_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerCapsule_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryTriggerCapsule(); \
	friend struct ::Z_Construct_UClass_UActorFactoryTriggerCapsule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryTriggerCapsule_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryTriggerCapsule, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryTriggerCapsule_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryTriggerCapsule)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerCapsule_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryTriggerCapsule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryTriggerCapsule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryTriggerCapsule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryTriggerCapsule); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryTriggerCapsule(UActorFactoryTriggerCapsule&&) = delete; \
	UActorFactoryTriggerCapsule(const UActorFactoryTriggerCapsule&) = delete; \
	UNREALED_API virtual ~UActorFactoryTriggerCapsule();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerCapsule_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerCapsule_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerCapsule_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerCapsule_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryTriggerCapsule;

// ********** End Class UActorFactoryTriggerCapsule ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerCapsule_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
