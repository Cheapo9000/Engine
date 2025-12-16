// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/CameraNodeGraphNode.h"

#ifdef GAMEPLAYCAMERASEDITOR_CameraNodeGraphNode_generated_h
#error "CameraNodeGraphNode.generated.h already included, missing '#pragma once' in CameraNodeGraphNode.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraNodeGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraNodeGraphNode *****************************************************
struct Z_Construct_UClass_UCameraNodeGraphNode_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UCameraNodeGraphNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphNode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraNodeGraphNode(); \
	friend struct ::Z_Construct_UClass_UCameraNodeGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UCameraNodeGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraNodeGraphNode, UObjectTreeGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UCameraNodeGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UCameraNodeGraphNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphNode_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraNodeGraphNode(UCameraNodeGraphNode&&) = delete; \
	UCameraNodeGraphNode(const UCameraNodeGraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraNodeGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraNodeGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraNodeGraphNode) \
	NO_API virtual ~UCameraNodeGraphNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphNode_h_15_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphNode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphNode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphNode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraNodeGraphNode;

// ********** End Class UCameraNodeGraphNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_CameraNodeGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
