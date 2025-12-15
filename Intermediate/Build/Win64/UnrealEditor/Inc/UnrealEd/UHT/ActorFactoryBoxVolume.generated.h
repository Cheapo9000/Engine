// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryBoxVolume.h"

#ifdef UNREALED_ActorFactoryBoxVolume_generated_h
#error "ActorFactoryBoxVolume.generated.h already included, missing '#pragma once' in ActorFactoryBoxVolume.h"
#endif
#define UNREALED_ActorFactoryBoxVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryBoxVolume ***************************************************
struct Z_Construct_UClass_UActorFactoryBoxVolume_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBoxVolume_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryBoxVolume(); \
	friend struct ::Z_Construct_UClass_UActorFactoryBoxVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryBoxVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryBoxVolume, UActorFactoryVolume, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryBoxVolume_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryBoxVolume)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryBoxVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryBoxVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryBoxVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryBoxVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryBoxVolume(UActorFactoryBoxVolume&&) = delete; \
	UActorFactoryBoxVolume(const UActorFactoryBoxVolume&) = delete; \
	UNREALED_API virtual ~UActorFactoryBoxVolume();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryBoxVolume;

// ********** End Class UActorFactoryBoxVolume *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
