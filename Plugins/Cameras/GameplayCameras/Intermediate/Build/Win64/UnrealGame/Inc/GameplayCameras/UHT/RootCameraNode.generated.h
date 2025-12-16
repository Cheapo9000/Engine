// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/RootCameraNode.h"

#ifdef GAMEPLAYCAMERAS_RootCameraNode_generated_h
#error "RootCameraNode.generated.h already included, missing '#pragma once' in RootCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_RootCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URootCameraNode **********************************************************
struct Z_Construct_UClass_URootCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URootCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootCameraNode(); \
	friend struct ::Z_Construct_UClass_URootCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_URootCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URootCameraNode, UCameraNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_URootCameraNode_NoRegister) \
	DECLARE_SERIALIZER(URootCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API URootCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootCameraNode(URootCameraNode&&) = delete; \
	URootCameraNode(const URootCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, URootCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootCameraNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~URootCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_20_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootCameraNode;

// ********** End Class URootCameraNode ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
