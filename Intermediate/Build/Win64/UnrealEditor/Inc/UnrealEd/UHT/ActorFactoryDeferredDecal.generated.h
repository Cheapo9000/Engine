// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryDeferredDecal.h"

#ifdef UNREALED_ActorFactoryDeferredDecal_generated_h
#error "ActorFactoryDeferredDecal.generated.h already included, missing '#pragma once' in ActorFactoryDeferredDecal.h"
#endif
#define UNREALED_ActorFactoryDeferredDecal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryDeferredDecal ***********************************************
struct Z_Construct_UClass_UActorFactoryDeferredDecal_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryDeferredDecal_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryDeferredDecal(); \
	friend struct ::Z_Construct_UClass_UActorFactoryDeferredDecal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryDeferredDecal_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryDeferredDecal, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryDeferredDecal_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryDeferredDecal)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryDeferredDecal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryDeferredDecal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryDeferredDecal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryDeferredDecal); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryDeferredDecal(UActorFactoryDeferredDecal&&) = delete; \
	UActorFactoryDeferredDecal(const UActorFactoryDeferredDecal&) = delete; \
	UNREALED_API virtual ~UActorFactoryDeferredDecal();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryDeferredDecal;

// ********** End Class UActorFactoryDeferredDecal *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDeferredDecal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
