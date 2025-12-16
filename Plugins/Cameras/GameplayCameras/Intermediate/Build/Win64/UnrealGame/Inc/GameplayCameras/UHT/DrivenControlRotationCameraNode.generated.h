// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Input/DrivenControlRotationCameraNode.h"

#ifdef GAMEPLAYCAMERAS_DrivenControlRotationCameraNode_generated_h
#error "DrivenControlRotationCameraNode.generated.h already included, missing '#pragma once' in DrivenControlRotationCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_DrivenControlRotationCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDrivenControlRotationCameraNode *****************************************
struct Z_Construct_UClass_UDrivenControlRotationCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDrivenControlRotationCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_DrivenControlRotationCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDrivenControlRotationCameraNode(); \
	friend struct ::Z_Construct_UClass_UDrivenControlRotationCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UDrivenControlRotationCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDrivenControlRotationCameraNode, UInput2DCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UDrivenControlRotationCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UDrivenControlRotationCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_DrivenControlRotationCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDrivenControlRotationCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDrivenControlRotationCameraNode(UDrivenControlRotationCameraNode&&) = delete; \
	UDrivenControlRotationCameraNode(const UDrivenControlRotationCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDrivenControlRotationCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrivenControlRotationCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDrivenControlRotationCameraNode) \
	NO_API virtual ~UDrivenControlRotationCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_DrivenControlRotationCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_DrivenControlRotationCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_DrivenControlRotationCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_DrivenControlRotationCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDrivenControlRotationCameraNode;

// ********** End Class UDrivenControlRotationCameraNode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_DrivenControlRotationCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
