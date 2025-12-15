// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryBoxReflectionCapture.h"

#ifdef UNREALED_ActorFactoryBoxReflectionCapture_generated_h
#error "ActorFactoryBoxReflectionCapture.generated.h already included, missing '#pragma once' in ActorFactoryBoxReflectionCapture.h"
#endif
#define UNREALED_ActorFactoryBoxReflectionCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryBoxReflectionCapture ****************************************
struct Z_Construct_UClass_UActorFactoryBoxReflectionCapture_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBoxReflectionCapture_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryBoxReflectionCapture(); \
	friend struct ::Z_Construct_UClass_UActorFactoryBoxReflectionCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryBoxReflectionCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryBoxReflectionCapture, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryBoxReflectionCapture_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryBoxReflectionCapture)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryBoxReflectionCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryBoxReflectionCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryBoxReflectionCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryBoxReflectionCapture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryBoxReflectionCapture(UActorFactoryBoxReflectionCapture&&) = delete; \
	UActorFactoryBoxReflectionCapture(const UActorFactoryBoxReflectionCapture&) = delete; \
	UNREALED_API virtual ~UActorFactoryBoxReflectionCapture();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryBoxReflectionCapture;

// ********** End Class UActorFactoryBoxReflectionCapture ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
