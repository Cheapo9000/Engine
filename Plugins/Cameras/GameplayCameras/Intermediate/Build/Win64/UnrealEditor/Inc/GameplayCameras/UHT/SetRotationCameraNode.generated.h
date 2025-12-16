// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/SetRotationCameraNode.h"

#ifdef GAMEPLAYCAMERAS_SetRotationCameraNode_generated_h
#error "SetRotationCameraNode.generated.h already included, missing '#pragma once' in SetRotationCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_SetRotationCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USetRotationCameraNode ***************************************************
struct Z_Construct_UClass_USetRotationCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USetRotationCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetRotationCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSetRotationCameraNode(); \
	friend struct ::Z_Construct_UClass_USetRotationCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_USetRotationCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USetRotationCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_USetRotationCameraNode_NoRegister) \
	DECLARE_SERIALIZER(USetRotationCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetRotationCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API USetRotationCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USetRotationCameraNode(USetRotationCameraNode&&) = delete; \
	USetRotationCameraNode(const USetRotationCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, USetRotationCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetRotationCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetRotationCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~USetRotationCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetRotationCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetRotationCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetRotationCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetRotationCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USetRotationCameraNode;

// ********** End Class USetRotationCameraNode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetRotationCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
