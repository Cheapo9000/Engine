// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/SkeletalMeshActor.h"

#ifdef ENGINE_SkeletalMeshActor_generated_h
#error "SkeletalMeshActor.generated.h already included, missing '#pragma once' in SkeletalMeshActor.h"
#endif
#define ENGINE_SkeletalMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASkeletalMeshActor *******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_ReplicatedMaterial1); \
	DECLARE_FUNCTION(execOnRep_ReplicatedMaterial0); \
	DECLARE_FUNCTION(execOnRep_ReplicatedPhysAsset); \
	DECLARE_FUNCTION(execOnRep_ReplicatedMesh);


struct Z_Construct_UClass_ASkeletalMeshActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASkeletalMeshActor(); \
	friend struct ::Z_Construct_UClass_ASkeletalMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ASkeletalMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASkeletalMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ASkeletalMeshActor_NoRegister) \
	DECLARE_SERIALIZER(ASkeletalMeshActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedMesh=NETFIELD_REP_START, \
		ReplicatedPhysAsset, \
		ReplicatedMaterial0, \
		ReplicatedMaterial1, \
		NETFIELD_REP_END=ReplicatedMaterial1	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASkeletalMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkeletalMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASkeletalMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkeletalMeshActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASkeletalMeshActor(ASkeletalMeshActor&&) = delete; \
	ASkeletalMeshActor(const ASkeletalMeshActor&) = delete; \
	ENGINE_API virtual ~ASkeletalMeshActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASkeletalMeshActor;

// ********** End Class ASkeletalMeshActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
