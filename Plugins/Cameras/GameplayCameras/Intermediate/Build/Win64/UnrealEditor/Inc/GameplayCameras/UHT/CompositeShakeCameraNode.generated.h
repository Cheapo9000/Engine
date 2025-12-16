// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Shakes/CompositeShakeCameraNode.h"

#ifdef GAMEPLAYCAMERAS_CompositeShakeCameraNode_generated_h
#error "CompositeShakeCameraNode.generated.h already included, missing '#pragma once' in CompositeShakeCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_CompositeShakeCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeShakeCameraNode ************************************************
struct Z_Construct_UClass_UCompositeShakeCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCompositeShakeCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CompositeShakeCameraNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeShakeCameraNode(); \
	friend struct ::Z_Construct_UClass_UCompositeShakeCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCompositeShakeCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeShakeCameraNode, UShakeCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCompositeShakeCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UCompositeShakeCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CompositeShakeCameraNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositeShakeCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeShakeCameraNode(UCompositeShakeCameraNode&&) = delete; \
	UCompositeShakeCameraNode(const UCompositeShakeCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeShakeCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeShakeCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeShakeCameraNode) \
	NO_API virtual ~UCompositeShakeCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CompositeShakeCameraNode_h_11_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CompositeShakeCameraNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CompositeShakeCameraNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CompositeShakeCameraNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeShakeCameraNode;

// ********** End Class UCompositeShakeCameraNode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CompositeShakeCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
