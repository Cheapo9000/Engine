// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryVolume.h"

#ifdef UNREALED_ActorFactoryVolume_generated_h
#error "ActorFactoryVolume.generated.h already included, missing '#pragma once' in ActorFactoryVolume.h"
#endif
#define UNREALED_ActorFactoryVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryVolume ******************************************************
struct Z_Construct_UClass_UActorFactoryVolume_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolume_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorFactoryVolume(); \
	friend struct ::Z_Construct_UClass_UActorFactoryVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryVolume, UActorFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryVolume_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryVolume)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryVolume(UActorFactoryVolume&&) = delete; \
	UActorFactoryVolume(const UActorFactoryVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryVolume); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryVolume) \
	UNREALED_API virtual ~UActorFactoryVolume();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryVolume;

// ********** End Class UActorFactoryVolume ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
