// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/SetLocationCameraNode.h"

#ifdef GAMEPLAYCAMERAS_SetLocationCameraNode_generated_h
#error "SetLocationCameraNode.generated.h already included, missing '#pragma once' in SetLocationCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_SetLocationCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USetLocationCameraNode ***************************************************
struct Z_Construct_UClass_USetLocationCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USetLocationCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetLocationCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSetLocationCameraNode(); \
	friend struct ::Z_Construct_UClass_USetLocationCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_USetLocationCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USetLocationCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_USetLocationCameraNode_NoRegister) \
	DECLARE_SERIALIZER(USetLocationCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetLocationCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API USetLocationCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USetLocationCameraNode(USetLocationCameraNode&&) = delete; \
	USetLocationCameraNode(const USetLocationCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, USetLocationCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetLocationCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetLocationCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~USetLocationCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetLocationCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetLocationCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetLocationCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetLocationCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USetLocationCameraNode;

// ********** End Class USetLocationCameraNode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_SetLocationCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
