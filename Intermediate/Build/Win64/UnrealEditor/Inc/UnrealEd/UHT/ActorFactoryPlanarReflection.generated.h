// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryPlanarReflection.h"

#ifdef UNREALED_ActorFactoryPlanarReflection_generated_h
#error "ActorFactoryPlanarReflection.generated.h already included, missing '#pragma once' in ActorFactoryPlanarReflection.h"
#endif
#define UNREALED_ActorFactoryPlanarReflection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryPlanarReflection ********************************************
struct Z_Construct_UClass_UActorFactoryPlanarReflection_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPlanarReflection_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlanarReflection_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryPlanarReflection(); \
	friend struct ::Z_Construct_UClass_UActorFactoryPlanarReflection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryPlanarReflection_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryPlanarReflection, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryPlanarReflection_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryPlanarReflection)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlanarReflection_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryPlanarReflection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryPlanarReflection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryPlanarReflection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryPlanarReflection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryPlanarReflection(UActorFactoryPlanarReflection&&) = delete; \
	UActorFactoryPlanarReflection(const UActorFactoryPlanarReflection&) = delete; \
	UNREALED_API virtual ~UActorFactoryPlanarReflection();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlanarReflection_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlanarReflection_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlanarReflection_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlanarReflection_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryPlanarReflection;

// ********** End Class UActorFactoryPlanarReflection **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlanarReflection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
