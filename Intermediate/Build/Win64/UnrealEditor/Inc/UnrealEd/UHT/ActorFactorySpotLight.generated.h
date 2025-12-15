// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactorySpotLight.h"

#ifdef UNREALED_ActorFactorySpotLight_generated_h
#error "ActorFactorySpotLight.generated.h already included, missing '#pragma once' in ActorFactorySpotLight.h"
#endif
#define UNREALED_ActorFactorySpotLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactorySpotLight ***************************************************
struct Z_Construct_UClass_UActorFactorySpotLight_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactorySpotLight_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactorySpotLight(); \
	friend struct ::Z_Construct_UClass_UActorFactorySpotLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactorySpotLight_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactorySpotLight, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactorySpotLight_NoRegister) \
	DECLARE_SERIALIZER(UActorFactorySpotLight)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactorySpotLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactorySpotLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactorySpotLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactorySpotLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactorySpotLight(UActorFactorySpotLight&&) = delete; \
	UActorFactorySpotLight(const UActorFactorySpotLight&) = delete; \
	UNREALED_API virtual ~UActorFactorySpotLight();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactorySpotLight;

// ********** End Class UActorFactorySpotLight *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySpotLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
