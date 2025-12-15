// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/StaticMeshActor.h"

#ifdef ENGINE_StaticMeshActor_generated_h
#error "StaticMeshActor.generated.h already included, missing '#pragma once' in StaticMeshActor.h"
#endif
#define ENGINE_StaticMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AStaticMeshActor *********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMobility);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AStaticMeshActor, ENGINE_API)


struct Z_Construct_UClass_AStaticMeshActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAStaticMeshActor(); \
	friend struct ::Z_Construct_UClass_AStaticMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AStaticMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AStaticMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AStaticMeshActor_NoRegister) \
	DECLARE_SERIALIZER(AStaticMeshActor) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AStaticMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStaticMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AStaticMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticMeshActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AStaticMeshActor(AStaticMeshActor&&) = delete; \
	AStaticMeshActor(const AStaticMeshActor&) = delete; \
	ENGINE_API virtual ~AStaticMeshActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AStaticMeshActor;

// ********** End Class AStaticMeshActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
