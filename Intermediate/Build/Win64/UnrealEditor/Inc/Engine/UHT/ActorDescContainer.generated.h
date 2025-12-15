// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ActorDescContainer.h"

#ifdef ENGINE_ActorDescContainer_generated_h
#error "ActorDescContainer.generated.h already included, missing '#pragma once' in ActorDescContainer.h"
#endif
#define ENGINE_ActorDescContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorDescContainer ******************************************************
struct Z_Construct_UClass_UActorDescContainer_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUActorDescContainer(); \
	friend struct ::Z_Construct_UClass_UActorDescContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorDescContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorDescContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorDescContainer_NoRegister) \
	DECLARE_SERIALIZER(UActorDescContainer)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorDescContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorDescContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorDescContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorDescContainer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorDescContainer(UActorDescContainer&&) = delete; \
	UActorDescContainer(const UActorDescContainer&) = delete; \
	ENGINE_API virtual ~UActorDescContainer();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_38_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_41_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorDescContainer;

// ********** End Class UActorDescContainer ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
