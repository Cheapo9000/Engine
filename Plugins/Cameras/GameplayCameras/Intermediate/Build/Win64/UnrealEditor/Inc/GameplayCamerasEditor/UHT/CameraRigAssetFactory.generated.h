// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CameraRigAssetFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERASEDITOR_CameraRigAssetFactory_generated_h
#error "CameraRigAssetFactory.generated.h already included, missing '#pragma once' in CameraRigAssetFactory.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraRigAssetFactory_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigAssetFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigAssetFactory(); \
	friend struct Z_Construct_UClass_UCameraRigAssetFactory_Statics; \
public: \
	DECLARE_CLASS(UCameraRigAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), NO_API) \
	DECLARE_SERIALIZER(UCameraRigAssetFactory)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigAssetFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraRigAssetFactory(UCameraRigAssetFactory&&); \
	UCameraRigAssetFactory(const UCameraRigAssetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraRigAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigAssetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigAssetFactory) \
	NO_API virtual ~UCameraRigAssetFactory();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigAssetFactory_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigAssetFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigAssetFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigAssetFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERASEDITOR_API UClass* StaticClass<class UCameraRigAssetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigAssetFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
