// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/BlendCameraNode.h"

#ifdef GAMEPLAYCAMERAS_BlendCameraNode_generated_h
#error "BlendCameraNode.generated.h already included, missing '#pragma once' in BlendCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_BlendCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlendCameraNode *********************************************************
struct Z_Construct_UClass_UBlendCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlendCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendCameraNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendCameraNode(); \
	friend struct ::Z_Construct_UClass_UBlendCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBlendCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendCameraNode, UCameraNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBlendCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UBlendCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendCameraNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBlendCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendCameraNode(UBlendCameraNode&&) = delete; \
	UBlendCameraNode(const UBlendCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBlendCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendCameraNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UBlendCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendCameraNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendCameraNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendCameraNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendCameraNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendCameraNode;

// ********** End Class UBlendCameraNode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
