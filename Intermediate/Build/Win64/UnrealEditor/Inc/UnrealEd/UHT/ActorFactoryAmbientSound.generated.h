// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryAmbientSound.h"

#ifdef UNREALED_ActorFactoryAmbientSound_generated_h
#error "ActorFactoryAmbientSound.generated.h already included, missing '#pragma once' in ActorFactoryAmbientSound.h"
#endif
#define UNREALED_ActorFactoryAmbientSound_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryAmbientSound ************************************************
struct Z_Construct_UClass_UActorFactoryAmbientSound_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryAmbientSound_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryAmbientSound(); \
	friend struct ::Z_Construct_UClass_UActorFactoryAmbientSound_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryAmbientSound_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryAmbientSound, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryAmbientSound_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryAmbientSound)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryAmbientSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryAmbientSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryAmbientSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryAmbientSound); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryAmbientSound(UActorFactoryAmbientSound&&) = delete; \
	UActorFactoryAmbientSound(const UActorFactoryAmbientSound&) = delete; \
	UNREALED_API virtual ~UActorFactoryAmbientSound();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryAmbientSound;

// ********** End Class UActorFactoryAmbientSound **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAmbientSound_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
