// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactorySkyAtmosphere.h"

#ifdef UNREALED_ActorFactorySkyAtmosphere_generated_h
#error "ActorFactorySkyAtmosphere.generated.h already included, missing '#pragma once' in ActorFactorySkyAtmosphere.h"
#endif
#define UNREALED_ActorFactorySkyAtmosphere_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactorySkyAtmosphere ***********************************************
struct Z_Construct_UClass_UActorFactorySkyAtmosphere_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkyAtmosphere_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactorySkyAtmosphere(); \
	friend struct ::Z_Construct_UClass_UActorFactorySkyAtmosphere_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactorySkyAtmosphere_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactorySkyAtmosphere, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactorySkyAtmosphere_NoRegister) \
	DECLARE_SERIALIZER(UActorFactorySkyAtmosphere)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactorySkyAtmosphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactorySkyAtmosphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactorySkyAtmosphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactorySkyAtmosphere); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactorySkyAtmosphere(UActorFactorySkyAtmosphere&&) = delete; \
	UActorFactorySkyAtmosphere(const UActorFactorySkyAtmosphere&) = delete; \
	UNREALED_API virtual ~UActorFactorySkyAtmosphere();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactorySkyAtmosphere;

// ********** End Class UActorFactorySkyAtmosphere *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyAtmosphere_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
