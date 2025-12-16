// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Blends/OrbitBlendCameraNode.h"

#ifdef GAMEPLAYCAMERAS_OrbitBlendCameraNode_generated_h
#error "OrbitBlendCameraNode.generated.h already included, missing '#pragma once' in OrbitBlendCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_OrbitBlendCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrbitBlendCameraNode ****************************************************
struct Z_Construct_UClass_UOrbitBlendCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UOrbitBlendCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrbitBlendCameraNode(); \
	friend struct ::Z_Construct_UClass_UOrbitBlendCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UOrbitBlendCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrbitBlendCameraNode, UBlendCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UOrbitBlendCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UOrbitBlendCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrbitBlendCameraNode(UOrbitBlendCameraNode&&) = delete; \
	UOrbitBlendCameraNode(const UOrbitBlendCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UOrbitBlendCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrbitBlendCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrbitBlendCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UOrbitBlendCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrbitBlendCameraNode;

// ********** End Class UOrbitBlendCameraNode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Blends_OrbitBlendCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
