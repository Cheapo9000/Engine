// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/Asset/ActorFactoryFlesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHEDITOR_ActorFactoryFlesh_generated_h
#error "ActorFactoryFlesh.generated.h already included, missing '#pragma once' in ActorFactoryFlesh.h"
#endif
#define CHAOSFLESHEDITOR_ActorFactoryFlesh_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Private_ChaosFlesh_Asset_ActorFactoryFlesh_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryFlesh(); \
	friend struct Z_Construct_UClass_UActorFactoryFlesh_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryFlesh, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEditor"), CHAOSFLESHEDITOR_API) \
	DECLARE_SERIALIZER(UActorFactoryFlesh)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Private_ChaosFlesh_Asset_ActorFactoryFlesh_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSFLESHEDITOR_API UActorFactoryFlesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryFlesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSFLESHEDITOR_API, UActorFactoryFlesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryFlesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryFlesh(UActorFactoryFlesh&&); \
	UActorFactoryFlesh(const UActorFactoryFlesh&); \
public: \
	CHAOSFLESHEDITOR_API virtual ~UActorFactoryFlesh();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Private_ChaosFlesh_Asset_ActorFactoryFlesh_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Private_ChaosFlesh_Asset_ActorFactoryFlesh_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Private_ChaosFlesh_Asset_ActorFactoryFlesh_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Private_ChaosFlesh_Asset_ActorFactoryFlesh_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHEDITOR_API UClass* StaticClass<class UActorFactoryFlesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Private_ChaosFlesh_Asset_ActorFactoryFlesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
