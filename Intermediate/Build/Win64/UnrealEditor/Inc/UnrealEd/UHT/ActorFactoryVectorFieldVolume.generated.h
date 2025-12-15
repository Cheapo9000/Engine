// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryVectorFieldVolume.h"

#ifdef UNREALED_ActorFactoryVectorFieldVolume_generated_h
#error "ActorFactoryVectorFieldVolume.generated.h already included, missing '#pragma once' in ActorFactoryVectorFieldVolume.h"
#endif
#define UNREALED_ActorFactoryVectorFieldVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryVectorFieldVolume *******************************************
struct Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVectorFieldVolume_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryVectorFieldVolume(); \
	friend struct ::Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryVectorFieldVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryVectorFieldVolume, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryVectorFieldVolume_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryVectorFieldVolume)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryVectorFieldVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryVectorFieldVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryVectorFieldVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryVectorFieldVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryVectorFieldVolume(UActorFactoryVectorFieldVolume&&) = delete; \
	UActorFactoryVectorFieldVolume(const UActorFactoryVectorFieldVolume&) = delete; \
	UNREALED_API virtual ~UActorFactoryVectorFieldVolume();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryVectorFieldVolume;

// ********** End Class UActorFactoryVectorFieldVolume *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVectorFieldVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
