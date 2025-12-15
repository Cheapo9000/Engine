// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ActorFactoryLevelSequence.h"

#ifdef UNREALED_ActorFactoryLevelSequence_generated_h
#error "ActorFactoryLevelSequence.generated.h already included, missing '#pragma once' in ActorFactoryLevelSequence.h"
#endif
#define UNREALED_ActorFactoryLevelSequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryLevelSequence ***********************************************
struct Z_Construct_UClass_UActorFactoryLevelSequence_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryLevelSequence_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryLevelSequence(); \
	friend struct ::Z_Construct_UClass_UActorFactoryLevelSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryLevelSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryLevelSequence, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryLevelSequence_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryLevelSequence)


#define FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorFactoryLevelSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryLevelSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorFactoryLevelSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryLevelSequence); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryLevelSequence(UActorFactoryLevelSequence&&) = delete; \
	UActorFactoryLevelSequence(const UActorFactoryLevelSequence&) = delete; \
	NO_API virtual ~UActorFactoryLevelSequence();


#define FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryLevelSequence;

// ********** End Class UActorFactoryLevelSequence *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Private_Factories_ActorFactoryLevelSequence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
