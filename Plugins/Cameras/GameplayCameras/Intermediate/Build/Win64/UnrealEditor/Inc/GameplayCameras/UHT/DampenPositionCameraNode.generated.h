// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/DampenPositionCameraNode.h"

#ifdef GAMEPLAYCAMERAS_DampenPositionCameraNode_generated_h
#error "DampenPositionCameraNode.generated.h already included, missing '#pragma once' in DampenPositionCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_DampenPositionCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDampenPositionCameraNode ************************************************
struct Z_Construct_UClass_UDampenPositionCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDampenPositionCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDampenPositionCameraNode(); \
	friend struct ::Z_Construct_UClass_UDampenPositionCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UDampenPositionCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDampenPositionCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UDampenPositionCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UDampenPositionCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UDampenPositionCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDampenPositionCameraNode(UDampenPositionCameraNode&&) = delete; \
	UDampenPositionCameraNode(const UDampenPositionCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UDampenPositionCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDampenPositionCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDampenPositionCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UDampenPositionCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDampenPositionCameraNode;

// ********** End Class UDampenPositionCameraNode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenPositionCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
