// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CameraRigProxyAssetFactory.h"

#ifdef GAMEPLAYCAMERASEDITOR_CameraRigProxyAssetFactory_generated_h
#error "CameraRigProxyAssetFactory.generated.h already included, missing '#pragma once' in CameraRigProxyAssetFactory.h"
#endif
#define GAMEPLAYCAMERASEDITOR_CameraRigProxyAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraRigProxyAssetFactory **********************************************
struct Z_Construct_UClass_UCameraRigProxyAssetFactory_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UCameraRigProxyAssetFactory_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigProxyAssetFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigProxyAssetFactory(); \
	friend struct ::Z_Construct_UClass_UCameraRigProxyAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UCameraRigProxyAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigProxyAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UCameraRigProxyAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigProxyAssetFactory)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigProxyAssetFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigProxyAssetFactory(UCameraRigProxyAssetFactory&&) = delete; \
	UCameraRigProxyAssetFactory(const UCameraRigProxyAssetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraRigProxyAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigProxyAssetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigProxyAssetFactory) \
	NO_API virtual ~UCameraRigProxyAssetFactory();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigProxyAssetFactory_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigProxyAssetFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigProxyAssetFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigProxyAssetFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigProxyAssetFactory;

// ********** End Class UCameraRigProxyAssetFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_Factories_CameraRigProxyAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
