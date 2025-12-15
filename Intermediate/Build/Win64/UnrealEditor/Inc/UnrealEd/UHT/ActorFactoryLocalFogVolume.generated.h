// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryLocalFogVolume.h"

#ifdef UNREALED_ActorFactoryLocalFogVolume_generated_h
#error "ActorFactoryLocalFogVolume.generated.h already included, missing '#pragma once' in ActorFactoryLocalFogVolume.h"
#endif
#define UNREALED_ActorFactoryLocalFogVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryLocalFogVolume **********************************************
struct Z_Construct_UClass_UActorFactoryLocalFogVolume_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryLocalFogVolume_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryLocalFogVolume_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryLocalFogVolume(); \
	friend struct ::Z_Construct_UClass_UActorFactoryLocalFogVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryLocalFogVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryLocalFogVolume, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryLocalFogVolume_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryLocalFogVolume)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryLocalFogVolume_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryLocalFogVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryLocalFogVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryLocalFogVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryLocalFogVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryLocalFogVolume(UActorFactoryLocalFogVolume&&) = delete; \
	UActorFactoryLocalFogVolume(const UActorFactoryLocalFogVolume&) = delete; \
	UNREALED_API virtual ~UActorFactoryLocalFogVolume();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryLocalFogVolume_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryLocalFogVolume_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryLocalFogVolume_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryLocalFogVolume_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryLocalFogVolume;

// ********** End Class UActorFactoryLocalFogVolume ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryLocalFogVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
