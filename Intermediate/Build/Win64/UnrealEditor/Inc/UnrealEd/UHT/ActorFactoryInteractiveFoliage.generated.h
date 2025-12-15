// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryInteractiveFoliage.h"

#ifdef UNREALED_ActorFactoryInteractiveFoliage_generated_h
#error "ActorFactoryInteractiveFoliage.generated.h already included, missing '#pragma once' in ActorFactoryInteractiveFoliage.h"
#endif
#define UNREALED_ActorFactoryInteractiveFoliage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryInteractiveFoliage ******************************************
struct Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryInteractiveFoliage_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryInteractiveFoliage(); \
	friend struct ::Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryInteractiveFoliage_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryInteractiveFoliage, UActorFactoryStaticMesh, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryInteractiveFoliage_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryInteractiveFoliage)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryInteractiveFoliage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryInteractiveFoliage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryInteractiveFoliage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryInteractiveFoliage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryInteractiveFoliage(UActorFactoryInteractiveFoliage&&) = delete; \
	UActorFactoryInteractiveFoliage(const UActorFactoryInteractiveFoliage&) = delete; \
	UNREALED_API virtual ~UActorFactoryInteractiveFoliage();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryInteractiveFoliage;

// ********** End Class UActorFactoryInteractiveFoliage ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryInteractiveFoliage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
