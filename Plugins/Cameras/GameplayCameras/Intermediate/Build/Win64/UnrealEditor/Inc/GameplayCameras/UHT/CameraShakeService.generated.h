// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Services/CameraShakeService.h"

#ifdef GAMEPLAYCAMERAS_CameraShakeService_generated_h
#error "CameraShakeService.generated.h already included, missing '#pragma once' in CameraShakeService.h"
#endif
#define GAMEPLAYCAMERAS_CameraShakeService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraShakeServiceCameraNode ********************************************
struct Z_Construct_UClass_UCameraShakeServiceCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraShakeServiceCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Services_CameraShakeService_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakeServiceCameraNode(); \
	friend struct ::Z_Construct_UClass_UCameraShakeServiceCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraShakeServiceCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraShakeServiceCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraShakeServiceCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UCameraShakeServiceCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Services_CameraShakeService_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraShakeServiceCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraShakeServiceCameraNode(UCameraShakeServiceCameraNode&&) = delete; \
	UCameraShakeServiceCameraNode(const UCameraShakeServiceCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraShakeServiceCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeServiceCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeServiceCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UCameraShakeServiceCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Services_CameraShakeService_h_88_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Services_CameraShakeService_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Services_CameraShakeService_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Services_CameraShakeService_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraShakeServiceCameraNode;

// ********** End Class UCameraShakeServiceCameraNode **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Services_CameraShakeService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
