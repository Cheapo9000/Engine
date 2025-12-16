// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/OrthographicCameraNode.h"

#ifdef GAMEPLAYCAMERAS_OrthographicCameraNode_generated_h
#error "OrthographicCameraNode.generated.h already included, missing '#pragma once' in OrthographicCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_OrthographicCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrthographicCameraNode **************************************************
struct Z_Construct_UClass_UOrthographicCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UOrthographicCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OrthographicCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrthographicCameraNode(); \
	friend struct ::Z_Construct_UClass_UOrthographicCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UOrthographicCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrthographicCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UOrthographicCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UOrthographicCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OrthographicCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UOrthographicCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrthographicCameraNode(UOrthographicCameraNode&&) = delete; \
	UOrthographicCameraNode(const UOrthographicCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UOrthographicCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrthographicCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrthographicCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UOrthographicCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OrthographicCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OrthographicCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OrthographicCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OrthographicCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrthographicCameraNode;

// ********** End Class UOrthographicCameraNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_OrthographicCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
