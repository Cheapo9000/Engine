// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryCylinderVolume.h"

#ifdef UNREALED_ActorFactoryCylinderVolume_generated_h
#error "ActorFactoryCylinderVolume.generated.h already included, missing '#pragma once' in ActorFactoryCylinderVolume.h"
#endif
#define UNREALED_ActorFactoryCylinderVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryCylinderVolume **********************************************
struct Z_Construct_UClass_UActorFactoryCylinderVolume_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryCylinderVolume_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryCylinderVolume(); \
	friend struct ::Z_Construct_UClass_UActorFactoryCylinderVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryCylinderVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryCylinderVolume, UActorFactoryVolume, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryCylinderVolume_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryCylinderVolume)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryCylinderVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryCylinderVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryCylinderVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryCylinderVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryCylinderVolume(UActorFactoryCylinderVolume&&) = delete; \
	UActorFactoryCylinderVolume(const UActorFactoryCylinderVolume&) = delete; \
	UNREALED_API virtual ~UActorFactoryCylinderVolume();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryCylinderVolume;

// ********** End Class UActorFactoryCylinderVolume ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCylinderVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
