// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryEmitter.h"

#ifdef UNREALED_ActorFactoryEmitter_generated_h
#error "ActorFactoryEmitter.generated.h already included, missing '#pragma once' in ActorFactoryEmitter.h"
#endif
#define UNREALED_ActorFactoryEmitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryEmitter *****************************************************
struct Z_Construct_UClass_UActorFactoryEmitter_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryEmitter_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmitter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryEmitter(); \
	friend struct ::Z_Construct_UClass_UActorFactoryEmitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryEmitter_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryEmitter, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryEmitter_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryEmitter)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmitter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryEmitter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryEmitter(UActorFactoryEmitter&&) = delete; \
	UActorFactoryEmitter(const UActorFactoryEmitter&) = delete; \
	UNREALED_API virtual ~UActorFactoryEmitter();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmitter_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmitter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmitter_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmitter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryEmitter;

// ********** End Class UActorFactoryEmitter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmitter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
