// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryVolumetricCloud.h"

#ifdef UNREALED_ActorFactoryVolumetricCloud_generated_h
#error "ActorFactoryVolumetricCloud.generated.h already included, missing '#pragma once' in ActorFactoryVolumetricCloud.h"
#endif
#define UNREALED_ActorFactoryVolumetricCloud_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryVolumetricCloud *********************************************
struct Z_Construct_UClass_UActorFactoryVolumetricCloud_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolumetricCloud_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryVolumetricCloud(); \
	friend struct ::Z_Construct_UClass_UActorFactoryVolumetricCloud_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryVolumetricCloud_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryVolumetricCloud, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryVolumetricCloud_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryVolumetricCloud)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryVolumetricCloud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryVolumetricCloud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryVolumetricCloud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryVolumetricCloud); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryVolumetricCloud(UActorFactoryVolumetricCloud&&) = delete; \
	UActorFactoryVolumetricCloud(const UActorFactoryVolumetricCloud&) = delete; \
	UNREALED_API virtual ~UActorFactoryVolumetricCloud();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryVolumetricCloud;

// ********** End Class UActorFactoryVolumetricCloud ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolumetricCloud_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
