// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryEmptyActor.h"

#ifdef UNREALED_ActorFactoryEmptyActor_generated_h
#error "ActorFactoryEmptyActor.generated.h already included, missing '#pragma once' in ActorFactoryEmptyActor.h"
#endif
#define UNREALED_ActorFactoryEmptyActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryEmptyActor **************************************************
struct Z_Construct_UClass_UActorFactoryEmptyActor_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryEmptyActor_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryEmptyActor(); \
	friend struct ::Z_Construct_UClass_UActorFactoryEmptyActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryEmptyActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryEmptyActor, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryEmptyActor_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryEmptyActor)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryEmptyActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryEmptyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryEmptyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryEmptyActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryEmptyActor(UActorFactoryEmptyActor&&) = delete; \
	UActorFactoryEmptyActor(const UActorFactoryEmptyActor&) = delete; \
	UNREALED_API virtual ~UActorFactoryEmptyActor();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryEmptyActor;

// ********** End Class UActorFactoryEmptyActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
