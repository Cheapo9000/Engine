// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryNote.h"

#ifdef UNREALED_ActorFactoryNote_generated_h
#error "ActorFactoryNote.generated.h already included, missing '#pragma once' in ActorFactoryNote.h"
#endif
#define UNREALED_ActorFactoryNote_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryNote ********************************************************
struct Z_Construct_UClass_UActorFactoryNote_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryNote_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryNote_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryNote(); \
	friend struct ::Z_Construct_UClass_UActorFactoryNote_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryNote_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryNote, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryNote_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryNote)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryNote_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryNote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryNote) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryNote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryNote); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryNote(UActorFactoryNote&&) = delete; \
	UActorFactoryNote(const UActorFactoryNote&) = delete; \
	UNREALED_API virtual ~UActorFactoryNote();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryNote_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryNote_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryNote_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryNote_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryNote;

// ********** End Class UActorFactoryNote **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryNote_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
