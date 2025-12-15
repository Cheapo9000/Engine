// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryStaticMesh.h"

#ifdef UNREALED_ActorFactoryStaticMesh_generated_h
#error "ActorFactoryStaticMesh.generated.h already included, missing '#pragma once' in ActorFactoryStaticMesh.h"
#endif
#define UNREALED_ActorFactoryStaticMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryStaticMesh **************************************************
struct Z_Construct_UClass_UActorFactoryStaticMesh_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorFactoryStaticMesh_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryStaticMesh(); \
	friend struct ::Z_Construct_UClass_UActorFactoryStaticMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorFactoryStaticMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryStaticMesh, UActorFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorFactoryStaticMesh_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryStaticMesh)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryStaticMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryStaticMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryStaticMesh(UActorFactoryStaticMesh&&) = delete; \
	UActorFactoryStaticMesh(const UActorFactoryStaticMesh&) = delete; \
	UNREALED_API virtual ~UActorFactoryStaticMesh();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryStaticMesh;

// ********** End Class UActorFactoryStaticMesh ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryStaticMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
