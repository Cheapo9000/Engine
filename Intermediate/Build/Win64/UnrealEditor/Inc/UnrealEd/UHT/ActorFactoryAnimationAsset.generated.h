// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryAnimationAsset.h"

#ifdef UNREALED_ActorFactoryAnimationAsset_generated_h
#error "ActorFactoryAnimationAsset.generated.h already included, missing '#pragma once' in ActorFactoryAnimationAsset.h"
#endif
#define UNREALED_ActorFactoryAnimationAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryAnimationAsset **********************************************
struct Z_Construct_UClass_UActorFactoryAnimationAsset_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryAnimationAsset_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryAnimationAsset(); \
	friend struct ::Z_Construct_UClass_UActorFactoryAnimationAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryAnimationAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryAnimationAsset, UActorFactorySkeletalMesh, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryAnimationAsset_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryAnimationAsset)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryAnimationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryAnimationAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryAnimationAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryAnimationAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryAnimationAsset(UActorFactoryAnimationAsset&&) = delete; \
	UActorFactoryAnimationAsset(const UActorFactoryAnimationAsset&) = delete; \
	UNREALED_API virtual ~UActorFactoryAnimationAsset();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryAnimationAsset;

// ********** End Class UActorFactoryAnimationAsset ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryAnimationAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
