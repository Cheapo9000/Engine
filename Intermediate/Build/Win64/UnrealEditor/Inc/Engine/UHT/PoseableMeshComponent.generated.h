// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PoseableMeshComponent.h"

#ifdef ENGINE_PoseableMeshComponent_generated_h
#error "PoseableMeshComponent.generated.h already included, missing '#pragma once' in PoseableMeshComponent.h"
#endif
#define ENGINE_PoseableMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;

// ********** Begin Class UPoseableMeshComponent ***************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCopyPoseFromSkeletalComponent); \
	DECLARE_FUNCTION(execResetBoneTransformByName); \
	DECLARE_FUNCTION(execGetBoneScaleByName); \
	DECLARE_FUNCTION(execGetBoneRotationByName); \
	DECLARE_FUNCTION(execGetBoneLocationByName); \
	DECLARE_FUNCTION(execGetBoneTransformByName); \
	DECLARE_FUNCTION(execSetBoneScaleByName); \
	DECLARE_FUNCTION(execSetBoneRotationByName); \
	DECLARE_FUNCTION(execSetBoneLocationByName); \
	DECLARE_FUNCTION(execSetBoneTransformByName);


struct Z_Construct_UClass_UPoseableMeshComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPoseableMeshComponent(); \
	friend struct ::Z_Construct_UClass_UPoseableMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPoseableMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseableMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPoseableMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UPoseableMeshComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseableMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseableMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseableMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseableMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseableMeshComponent(UPoseableMeshComponent&&) = delete; \
	UPoseableMeshComponent(const UPoseableMeshComponent&) = delete; \
	ENGINE_API virtual ~UPoseableMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseableMeshComponent;

// ********** End Class UPoseableMeshComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
