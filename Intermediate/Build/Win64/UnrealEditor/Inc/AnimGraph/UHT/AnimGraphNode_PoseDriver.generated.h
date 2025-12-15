// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_PoseDriver.h"

#ifdef ANIMGRAPH_AnimGraphNode_PoseDriver_generated_h
#error "AnimGraphNode_PoseDriver.generated.h already included, missing '#pragma once' in AnimGraphNode_PoseDriver.h"
#endif
#define ANIMGRAPH_AnimGraphNode_PoseDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPoseDriverOutput : uint8;
enum class EPoseDriverSource : uint8;
struct FRBFParams;

// ********** Begin Class UAnimGraphNode_PoseDriver ************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetPoseDriverOutput); \
	DECLARE_FUNCTION(execSetPoseDriverOutput); \
	DECLARE_FUNCTION(execGetPoseDriverSource); \
	DECLARE_FUNCTION(execSetPoseDriverSource); \
	DECLARE_FUNCTION(execGetRBFParameters); \
	DECLARE_FUNCTION(execSetRBFParameters); \
	DECLARE_FUNCTION(execGetDrivingBoneNames); \
	DECLARE_FUNCTION(execSetDrivingBones); \
	DECLARE_FUNCTION(execGetSourceBoneNames); \
	DECLARE_FUNCTION(execSetSourceBones); \
	DECLARE_FUNCTION(execCopyTargetsFromPoseAsset);


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_PoseDriver, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseDriver_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_PoseDriver(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_PoseDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_PoseDriver, UAnimGraphNode_PoseHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_PoseDriver_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_PoseDriver) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_PoseDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_PoseDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_PoseDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_PoseDriver); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_PoseDriver(UAnimGraphNode_PoseDriver&&) = delete; \
	UAnimGraphNode_PoseDriver(const UAnimGraphNode_PoseDriver&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_PoseDriver();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_16_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_19_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_PoseDriver;

// ********** End Class UAnimGraphNode_PoseDriver **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
