// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/OffsetCameraNode.h"

#ifdef GAMEPLAYCAMERAS_OffsetCameraNode_generated_h
#error "OffsetCameraNode.generated.h already included, missing '#pragma once' in OffsetCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_OffsetCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOffsetCameraNode ********************************************************
struct Z_Construct_UClass_UOffsetCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UOffsetCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOffsetCameraNode(); \
	friend struct ::Z_Construct_UClass_UOffsetCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UOffsetCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UOffsetCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UOffsetCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UOffsetCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UOffsetCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOffsetCameraNode(UOffsetCameraNode&&) = delete; \
	UOffsetCameraNode(const UOffsetCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UOffsetCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOffsetCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOffsetCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UOffsetCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOffsetCameraNode;

// ********** End Class UOffsetCameraNode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OffsetCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
