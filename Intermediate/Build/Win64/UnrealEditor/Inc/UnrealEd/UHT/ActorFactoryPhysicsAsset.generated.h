// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryPhysicsAsset.h"

#ifdef UNREALED_ActorFactoryPhysicsAsset_generated_h
#error "ActorFactoryPhysicsAsset.generated.h already included, missing '#pragma once' in ActorFactoryPhysicsAsset.h"
#endif
#define UNREALED_ActorFactoryPhysicsAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryPhysicsAsset ************************************************
struct Z_Construct_UClass_UActorFactoryPhysicsAsset_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPhysicsAsset_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryPhysicsAsset(); \
	friend struct ::Z_Construct_UClass_UActorFactoryPhysicsAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryPhysicsAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryPhysicsAsset, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryPhysicsAsset_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryPhysicsAsset)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryPhysicsAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryPhysicsAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryPhysicsAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryPhysicsAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryPhysicsAsset(UActorFactoryPhysicsAsset&&) = delete; \
	UActorFactoryPhysicsAsset(const UActorFactoryPhysicsAsset&) = delete; \
	UNREALED_API virtual ~UActorFactoryPhysicsAsset();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryPhysicsAsset;

// ********** End Class UActorFactoryPhysicsAsset **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPhysicsAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
