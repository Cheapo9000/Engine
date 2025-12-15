// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryPlayerStart.h"

#ifdef UNREALED_ActorFactoryPlayerStart_generated_h
#error "ActorFactoryPlayerStart.generated.h already included, missing '#pragma once' in ActorFactoryPlayerStart.h"
#endif
#define UNREALED_ActorFactoryPlayerStart_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryPlayerStart *************************************************
struct Z_Construct_UClass_UActorFactoryPlayerStart_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPlayerStart_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryPlayerStart(); \
	friend struct ::Z_Construct_UClass_UActorFactoryPlayerStart_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryPlayerStart_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryPlayerStart, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryPlayerStart_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryPlayerStart)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryPlayerStart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryPlayerStart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryPlayerStart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryPlayerStart); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryPlayerStart(UActorFactoryPlayerStart&&) = delete; \
	UActorFactoryPlayerStart(const UActorFactoryPlayerStart&) = delete; \
	UNREALED_API virtual ~UActorFactoryPlayerStart();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryPlayerStart;

// ********** End Class UActorFactoryPlayerStart ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlayerStart_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
