// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactorySkyLight.h"

#ifdef UNREALED_ActorFactorySkyLight_generated_h
#error "ActorFactorySkyLight.generated.h already included, missing '#pragma once' in ActorFactorySkyLight.h"
#endif
#define UNREALED_ActorFactorySkyLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactorySkyLight ****************************************************
struct Z_Construct_UClass_UActorFactorySkyLight_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkyLight_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactorySkyLight(); \
	friend struct ::Z_Construct_UClass_UActorFactorySkyLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactorySkyLight_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactorySkyLight, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactorySkyLight_NoRegister) \
	DECLARE_SERIALIZER(UActorFactorySkyLight)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactorySkyLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactorySkyLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactorySkyLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactorySkyLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactorySkyLight(UActorFactorySkyLight&&) = delete; \
	UActorFactorySkyLight(const UActorFactorySkyLight&) = delete; \
	UNREALED_API virtual ~UActorFactorySkyLight();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactorySkyLight;

// ********** End Class UActorFactorySkyLight ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
