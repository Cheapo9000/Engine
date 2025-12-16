// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Blends/PopBlendCameraNode.h"

#ifdef GAMEPLAYCAMERAS_PopBlendCameraNode_generated_h
#error "PopBlendCameraNode.generated.h already included, missing '#pragma once' in PopBlendCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_PopBlendCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPopBlendCameraNode ******************************************************
struct Z_Construct_UClass_UPopBlendCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPopBlendCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_PopBlendCameraNode_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPopBlendCameraNode(); \
	friend struct ::Z_Construct_UClass_UPopBlendCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UPopBlendCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPopBlendCameraNode, UBlendCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UPopBlendCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UPopBlendCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_PopBlendCameraNode_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UPopBlendCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPopBlendCameraNode(UPopBlendCameraNode&&) = delete; \
	UPopBlendCameraNode(const UPopBlendCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UPopBlendCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPopBlendCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPopBlendCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UPopBlendCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_PopBlendCameraNode_h_31_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_PopBlendCameraNode_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_PopBlendCameraNode_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_PopBlendCameraNode_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPopBlendCameraNode;

// ********** End Class UPopBlendCameraNode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_PopBlendCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
