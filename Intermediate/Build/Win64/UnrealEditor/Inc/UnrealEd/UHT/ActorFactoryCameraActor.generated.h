// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryCameraActor.h"

#ifdef UNREALED_ActorFactoryCameraActor_generated_h
#error "ActorFactoryCameraActor.generated.h already included, missing '#pragma once' in ActorFactoryCameraActor.h"
#endif
#define UNREALED_ActorFactoryCameraActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryCameraActor *************************************************
struct Z_Construct_UClass_UActorFactoryCameraActor_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryCameraActor_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryCameraActor(); \
	friend struct ::Z_Construct_UClass_UActorFactoryCameraActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryCameraActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryCameraActor, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryCameraActor_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryCameraActor)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryCameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryCameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryCameraActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryCameraActor(UActorFactoryCameraActor&&) = delete; \
	UActorFactoryCameraActor(const UActorFactoryCameraActor&) = delete; \
	UNREALED_API virtual ~UActorFactoryCameraActor();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryCameraActor;

// ********** End Class UActorFactoryCameraActor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCameraActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
