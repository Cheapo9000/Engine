// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Attach/AttachToActorCameraNode.h"

#ifdef GAMEPLAYCAMERAS_AttachToActorCameraNode_generated_h
#error "AttachToActorCameraNode.generated.h already included, missing '#pragma once' in AttachToActorCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_AttachToActorCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAttachToActorCameraNode *************************************************
struct Z_Construct_UClass_UAttachToActorCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UAttachToActorCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorCameraNode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttachToActorCameraNode(); \
	friend struct ::Z_Construct_UClass_UAttachToActorCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UAttachToActorCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAttachToActorCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UAttachToActorCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UAttachToActorCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorCameraNode_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UAttachToActorCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttachToActorCameraNode(UAttachToActorCameraNode&&) = delete; \
	UAttachToActorCameraNode(const UAttachToActorCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UAttachToActorCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttachToActorCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttachToActorCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UAttachToActorCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorCameraNode_h_15_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorCameraNode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorCameraNode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorCameraNode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttachToActorCameraNode;

// ********** End Class UAttachToActorCameraNode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Attach_AttachToActorCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
