// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryDirectionalLight.h"

#ifdef UNREALED_ActorFactoryDirectionalLight_generated_h
#error "ActorFactoryDirectionalLight.generated.h already included, missing '#pragma once' in ActorFactoryDirectionalLight.h"
#endif
#define UNREALED_ActorFactoryDirectionalLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryDirectionalLight ********************************************
struct Z_Construct_UClass_UActorFactoryDirectionalLight_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryDirectionalLight_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryDirectionalLight(); \
	friend struct ::Z_Construct_UClass_UActorFactoryDirectionalLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryDirectionalLight_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryDirectionalLight, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryDirectionalLight_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryDirectionalLight)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryDirectionalLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryDirectionalLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryDirectionalLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryDirectionalLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryDirectionalLight(UActorFactoryDirectionalLight&&) = delete; \
	UActorFactoryDirectionalLight(const UActorFactoryDirectionalLight&) = delete; \
	UNREALED_API virtual ~UActorFactoryDirectionalLight();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryDirectionalLight;

// ********** End Class UActorFactoryDirectionalLight **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
