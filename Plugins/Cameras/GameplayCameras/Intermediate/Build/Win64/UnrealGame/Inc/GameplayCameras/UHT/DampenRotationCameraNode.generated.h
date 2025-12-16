// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Common/DampenRotationCameraNode.h"

#ifdef GAMEPLAYCAMERAS_DampenRotationCameraNode_generated_h
#error "DampenRotationCameraNode.generated.h already included, missing '#pragma once' in DampenRotationCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_DampenRotationCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDampenRotationCameraNode ************************************************
struct Z_Construct_UClass_UDampenRotationCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDampenRotationCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenRotationCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDampenRotationCameraNode(); \
	friend struct ::Z_Construct_UClass_UDampenRotationCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UDampenRotationCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDampenRotationCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UDampenRotationCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UDampenRotationCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenRotationCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UDampenRotationCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDampenRotationCameraNode(UDampenRotationCameraNode&&) = delete; \
	UDampenRotationCameraNode(const UDampenRotationCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UDampenRotationCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDampenRotationCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDampenRotationCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UDampenRotationCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenRotationCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenRotationCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenRotationCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenRotationCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDampenRotationCameraNode;

// ********** End Class UDampenRotationCameraNode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Common_DampenRotationCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
