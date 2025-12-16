// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraRigProxyAsset.h"

#ifdef GAMEPLAYCAMERAS_CameraRigProxyAsset_generated_h
#error "CameraRigProxyAsset.generated.h already included, missing '#pragma once' in CameraRigProxyAsset.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigProxyAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraRigProxyAsset *****************************************************
struct Z_Construct_UClass_UCameraRigProxyAsset_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyAsset_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigProxyAsset(); \
	friend struct ::Z_Construct_UClass_UCameraRigProxyAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraRigProxyAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigProxyAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraRigProxyAsset_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigProxyAsset)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigProxyAsset(UCameraRigProxyAsset&&) = delete; \
	UCameraRigProxyAsset(const UCameraRigProxyAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraRigProxyAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigProxyAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigProxyAsset) \
	GAMEPLAYCAMERAS_API virtual ~UCameraRigProxyAsset();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h_17_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigProxyAsset;

// ********** End Class UCameraRigProxyAsset *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
