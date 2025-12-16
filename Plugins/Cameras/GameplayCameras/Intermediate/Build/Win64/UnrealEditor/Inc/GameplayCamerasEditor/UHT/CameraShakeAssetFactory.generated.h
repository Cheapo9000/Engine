// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CameraShakeAssetFactory.h"

#ifdef GAMEPLAYCAMERASEDITOR_CameraShakeAssetFactory_generated_h
#error "CameraShakeAssetFactory.generated.h already included, missing '#pragma once' in CameraShakeAssetFactory.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraShakeAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraShakeAssetFactory *************************************************
struct Z_Construct_UClass_UCameraShakeAssetFactory_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UCameraShakeAssetFactory_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraShakeAssetFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakeAssetFactory(); \
	friend struct ::Z_Construct_UClass_UCameraShakeAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UCameraShakeAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraShakeAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UCameraShakeAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UCameraShakeAssetFactory)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraShakeAssetFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraShakeAssetFactory(UCameraShakeAssetFactory&&) = delete; \
	UCameraShakeAssetFactory(const UCameraShakeAssetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakeAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeAssetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeAssetFactory) \
	NO_API virtual ~UCameraShakeAssetFactory();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraShakeAssetFactory_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraShakeAssetFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraShakeAssetFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraShakeAssetFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraShakeAssetFactory;

// ********** End Class UCameraShakeAssetFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraShakeAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
