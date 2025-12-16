// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Attach/AttachToActorGroupCameraNode.h"

#ifdef GAMEPLAYCAMERAS_AttachToActorGroupCameraNode_generated_h
#error "AttachToActorGroupCameraNode.generated.h already included, missing '#pragma once' in AttachToActorGroupCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_AttachToActorGroupCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAttachToActorGroupCameraNode ********************************************
struct Z_Construct_UClass_UAttachToActorGroupCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UAttachToActorGroupCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorGroupCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttachToActorGroupCameraNode(); \
	friend struct ::Z_Construct_UClass_UAttachToActorGroupCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UAttachToActorGroupCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAttachToActorGroupCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UAttachToActorGroupCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UAttachToActorGroupCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorGroupCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UAttachToActorGroupCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttachToActorGroupCameraNode(UAttachToActorGroupCameraNode&&) = delete; \
	UAttachToActorGroupCameraNode(const UAttachToActorGroupCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UAttachToActorGroupCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttachToActorGroupCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttachToActorGroupCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UAttachToActorGroupCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorGroupCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorGroupCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorGroupCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorGroupCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttachToActorGroupCameraNode;

// ********** End Class UAttachToActorGroupCameraNode **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorGroupCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
